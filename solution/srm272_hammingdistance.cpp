/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5884
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

class HammingDistance {
public:
    int minDistance(vector<string> numbers);
};

int HammingDistance::minDistance(vector<string> numbers) {
    int ret;
    return ret;
}


int test0() {
    vector<string> numbers = {"11010", "01100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"00", "01", "10", "11"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"000", "011", "101", "110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"01100", "01100", "10011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"00000000000000000000000000000000000000000000000000", "11111111111111111111111111111111111111111111111111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"000000", "000111", "111000", "111111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> numbers = {"0", "1"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> numbers = {"0", "0"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"1", "1"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> numbers = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> numbers = {"0000", "0011", "1100", "1111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> numbers = {"0000000000", "1111111111", "1000000000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"000000", "001101", "010111", "011010", "100110", "101011", "110001", "111100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> numbers = {"10000000000000000000000000000000000000000000000000", "01000000000000000000000000000000000000000000000000", "00100000000000000000000000000000000000000000000000", "00010000000000000000000000000000000000000000000000", "00001000000000000000000000000000000000000000000000", "00000100000000000000000000000000000000000000000000", "00000010000000000000000000000000000000000000000000", "00000001000000000000000000000000000000000000000000", "00000000100000000000000000000000000000000000000000", "00000000010000000000000000000000000000000000000000", "00000000001000000000000000000000000000000000000000", "00000000000100000000000000000000000000000000000000", "00000000000010000000000000000000000000000000000000", "00000000000001000000000000000000000000000000000000", "00000000000000100000000000000000000000000000000000", "00000000000000010000000000000000000000000000000000", "00000000000000001000000000000000000000000000000000", "00000000000000000100000000000000000000000000000000", "00000000000000000010000000000000000000000000000000", "00000000000000000001000000000000000000000000000000", "00000000000000000000100000000000000000000000000000", "00000000000000000000010000000000000000000000000000", "00000000000000000000001000000000000000000000000000", "00000000000000000000000100000000000000000000000000", "00000000000000000000000010000000000000000000000000", "00000000000000000000000001000000000000000000000000", "00000000000000000000000000100000000000000000000000", "00000000000000000000000000010000000000000000000000", "00000000000000000000000000001000000000000000000000", "00000000000000000000000000000100000000000000000000", "00000000000000000000000000000010000000000000000000", "00000000000000000000000000000001000000000000000000", "00000000000000000000000000000000100000000000000000", "00000000000000000000000000000000010000000000000000", "00000000000000000000000000000000001000000000000000", "00000000000000000000000000000000000100000000000000", "00000000000000000000000000000000000010000000000000", "00000000000000000000000000000000000001000000000000", "00000000000000000000000000000000000000100000000000", "00000000000000000000000000000000000000010000000000", "00000000000000000000000000000000000000001000000000", "00000000000000000000000000000000000000000100000000", "00000000000000000000000000000000000000000010000000", "00000000000000000000000000000000000000000001000000", "00000000000000000000000000000000000000000000100000", "00000000000000000000000000000000000000000000010000", "00000000000000000000000000000000000000000000001000", "00000000000000000000000000000000000000000000000100", "00000000000000000000000000000000000000000000000010", "00000000000000000000000000000000000000000000000001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> numbers = {"00000000", "11111111", "00001111", "11110000", "00110011", "11001100", "00111100", "11000011", "01010101", "10101010", "01011010", "10100101", "01101001", "10010110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> numbers = {"00000000000000000000000000000011111111110000000000", "11111111110000000000000000000011111111111111111111", "11111111110000000000111111111100000000001111111111", "11111111110000000000111111111100000000000000000000", "00000000001111111111111111111111111111110000000000", "11111111111111111111000000000000000000001111111111", "00000000001111111111000000000011111111111111111111", "11111111111111111111000000000011111111111111111111", "00000000000000000000000000000011111111111111111111", "00000000000000000000111111111100000000000000000000", "11111111110000000000000000000011111111110000000000", "11111111111111111111111111111111111111111111111111", "00000000000000000000111111111111111111111111111111", "00000000001111111111000000000000000000000000000000", "11111111111111111111000000000000000000000000000000", "11111111111111111111111111111100000000001111111111", "00000000001111111111111111111111111111111111111111", "00000000000000000000000000000000000000000000000000", "11111111110000000000000000000000000000000000000000", "11111111110000000000111111111111111111111111111111", "00000000000000000000000000000000000000001111111111", "11111111111111111111111111111111111111110000000000", "00000000001111111111000000000000000000001111111111", "11111111111111111111000000000011111111110000000000", "11111111110000000000000000000000000000001111111111", "11111111111111111111111111111100000000000000000000", "00000000000000000000111111111111111111110000000000", "00000000001111111111111111111100000000000000000000", "00000000001111111111111111111100000000001111111111", "00000000000000000000111111111100000000001111111111", "00000000001111111111000000000011111111110000000000", "11111111110000000000111111111111111111110000000000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> numbers = {"1110110000011111011110001010001", "0100100010101110010010000110010", "1011010110010110101111110111100", "1001101010110000001000011111001", "1100001100100010110110111101001", "1101001111110110111000100111110", "1100100000110000001100011011000", "1101011001010011111010011000100", "1110000011110001111011100100111", "1000000001101100011010010100110", "1110110111001110100101010100010", "0100001110101101000101110111101", "1111111100001001000101000011000", "0010001100010100010001110110111", "0000101011011000001011011010010", "1011101101011010110111000110100", "1011001100000010111001011111011", "1010001011110111101111001000101", "1111100001010010000000101010001", "1011000110100110101110001101010", "0100010000011110100101111000011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> numbers = {"10111000000101101010101111000010110", "01110110001101001100100011011011001", "01111000110100010111011011001110100", "00100110011010001101100101011100011", "10011110111001001101001001110110011", "10001101011010001110110000100011110", "10111101110011111110010001010011110", "01001100111111000010011111110001100", "00000110110011100110011010011110111", "11101110100111110100111101111101000", "11001111101010111101110111111110100", "00110010100101000100111111111000010", "10010001100011110111101011001000100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> numbers = {"1110010", "1011110", "0001100", "0100001", "0100101", "0010010", "0010001", "1010100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"110110111", "010100010", "010010100", "001011001", "111010111", "010011101", "010010101", "011001011", "100100000", "011100100", "111101100", "110101100", "100010001", "010010110", "011110110", "011110010", "000111100", "011011110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> numbers = {"00101", "01110", "10011", "00001", "00111", "00110", "10100", "01110", "11011", "10011", "00101", "10011", "10001", "11011", "01111", "01100", "10000", "01101", "01101", "10110", "10010", "01100", "00110", "01110", "11001", "00011", "10101", "11000", "01010", "00010", "01001", "11111", "10110", "01101", "11110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> numbers = {"0101111110111111010000010", "0010011100110010001011101", "0000111101101011100111010", "1011100101000011000110010", "0110011101001111110011001", "1100000010110100011100111", "0001100000011011110110110", "1111010000100111101011011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> numbers = {"00010101", "10011100", "11100001", "11110010", "00000100", "11110000", "01000000", "00001100", "11000110", "11011011", "11100000", "00101000", "11001000", "10011100", "01111011", "01111010", "00110111", "10011110", "01011010", "11111100", "10010111", "11100111", "01101111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> numbers = {"10101100000010010100110101000100001100110101", "01100001110111001000110111110101110001111111", "10000000100000001111001101101101101000111111", "00010101000011001011101010010100010101001011", "00100111011101110100000000001011100100101100", "00010100110111000000111011001100111010111011", "10010101000111001001000111101010111000001011", "10100010010000001001000001010010111101001100", "11100010110100001000101100101110011110011001", "01101000111110100110011011110001010000001110", "01000100010111101011110101100100001100000001", "11011001111000111101001100001000010010100101", "10100111010001111111011100100010100000001100", "00000110100000101111000010100111101100001111", "00110001100001011010110110100000010011010010", "10010001111101011100001100011101101000000111", "11110111010010001001111111101100100010100000", "00000010110101111000111100111000100111111110", "00100101000110101001101101100101111111011010", "11101110001000000110011101000000010101000101", "00101110000010000000000000000010011111010011", "01110011111001101100100101101001010111101011", "01101110111001010101110000110111000110100111", "01000000111011011110001110010101010111110011", "11000110000110011101011000010101110111011111", "10000000011100110110011011011010010011000000", "10001110110010001110000110011011000110100010", "10000000111011001101100111100111000010111011", "01000010101001110011010110000101000000110001", "01101010100100101111010011000010011100010011", "10100001010111010100100110111001100110110000", "00110001101110101110100001010100110010100111", "01001010001011101001011111100001000010100101", "00111010100101001101110111000000111110111000", "10110111101000001101101110010010011011001001", "01100001011110110011011001011001101001100111", "01101001111011000110101010010011000110100001", "11011100001001100000011000100110000000000010", "01101111011000011100110001100000011111100111", "01010100101111000100111000000100011101011111", "11010111010000011100001100010001111000011010", "00111010001011110011010001111101010011000010", "10010000000011011100100100011110110100101011", "10000000100011001100111000011000001010110000", "01100100110001010101001000101001011001111001", "10000111101101110101101101011010111001001011", "01011101100100110100001101011010100000110100", "10010010010110001010010111000110000100111101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> numbers = {"001111010000100001101111100101001110111110", "100100100011010011100100101001011011100001", "000111010011110001010001010010101010001011", "111100110000000101011110001100001101101011", "000010001000100011111101101111101110110101", "001001100101000101011110111010111111110100", "011111101000101010000100111010100101010111", "010010101010100111001111100110100001110010", "000010010110111000011100110100011110101000", "000111101010101001101010000011000001111011", "011001010001110001011001010001000010101111", "101010111001001001100101001100001001111010", "100101100111000010000100000110101010101011", "110100101111100001110110100000010000110100", "110111011001110010101001010011101100010100", "010100100101011001010110010100011011100101", "110001100011100010010000011101000101110001", "111110100000010001001010100010110001001011", "010000100001011111011110010000011010000101", "111101001100111101101011111011001101000000", "011000001110001100101110101111010101101100", "100101010000010111011100000110001110001010", "011000011000010001000001010100101101101000", "001000110001100000000110001101010000001110", "000011011101000010101101011010000010100100", "001110010110101011101100110101110111010110", "001100111110011100111001111101111100000000", "110010011000001110100001001101010111010011", "000010100101110000111111010101011100110101", "111000000001010010111101001011111000000010"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> numbers = {"000100101001100001101000100100000", "000111101001100001110100000101101", "000010110100101011000010100100110", "110101000110011111000011010011001", "011110101000001110010001100010010", "111011100100001000111010001100001", "000000110000101001101101011111001", "000000100001001011111100101111001", "101101011000111110001001000111010", "111100001110001011010100010110000", "010001101100000110101101101110000", "101011101101001111100111100101011", "101000110110110011100110100110101", "011101011001100100110010101010011", "000001010010101101101110010000011", "010110101011101111100111001000101", "111101111100001100010000001101110", "001000110101010100000101011010001", "111011101010100010101000111000011", "000000001001100101010011010011000", "111001111011100100100101111110111", "111010101101110111010110110011000", "111001100100000010111100100101100", "011000110011011101100100100110000", "111010100101000000110000111010111", "100101100001010001110111110111111", "110101100011000001000100000010010", "011110110010001101010100000111001", "111101100100011001010010101101001", "000001111111110101011011100001010", "010101111100100100000001010100010", "011010101101101000101001010110000", "010101010101101010100100011001001", "110010010011010001001110011111011", "010000101010100001000010101010011", "100001111010000111001001010001000", "111110110100010101101001001000101", "011100100001111101100000101111001", "000110011011001000101111101101001", "001011000000001110011001101011101", "110111111100110000000101110010110", "001110111100111110110010111011010", "000111001101101011000100111001101", "101111010010001111100011101010101", "110011000001100011000101101011100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> numbers = {"0100001000001010111100101101100010", "1010001001111100010101001101100111", "0010101011011010010001101000101101", "1101110010101100101000101010110111", "1100100100001011010101110010101011", "1010100110011110010010010101100110", "0101110000010111011010101000110001", "0110000101110111110101100010010100", "0001111100110110110000100100000011", "0001001100000011001001001010000010", "0110010100110001000100000000010101", "0111011001010101111010111011101000", "0001101110110111110001010100000110", "1110110000110100010011100111001001", "1011101100110000101011101100010000", "1111110111010011000000001111010111", "1010010000001001100110110111011010", "1010001000010100100010010101001110", "0100100100001100001010011011100100", "1011000111011100100010110010100110", "1111001111101001001110111100000111", "0110010110101111000001111111011011", "0111111001001110110011101100110101", "1101101110011011001110101011111001", "1101101100101000000110101000000110", "1000001101011011010100111000001001", "0110110010100111001010110000100100", "0000111000010111011111000101001110", "0111011001010111101000100001001001", "1111010001010011111001110111001101", "0100110100110100001101111011101001", "1110011100001101001100001011011010", "0011001101110100101010001110011101", "1100011101000001010001001011001110", "1110100100000100011101100100110011", "0011001100100100000101011100011011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"110000111011110001100", "100000110011101100111", "011001101011110010001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> numbers = {"010110101011101000111111101001", "111011000010101010001000110000", "001111000001011100010000000100", "111001000111010001001100101000", "011101111011111100101011100100", "100110111111110001100001000111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> numbers = {"0010100010010111001000111000000010010001011101", "1001111101100011111111110000100010000111011101", "1001111101000101011011011011011001011010000110", "1100100101100000010111000011000111011001101010", "0110111111010101001000000111110011001111111000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> numbers = {"1010000000111101000111111000000100000010110100010", "1111001000001110010100000101100111110010100101000", "0110100101010000001111001110111001010001110001000", "1110111110110100110010101100100111010011101101001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> numbers = {"1011000100111", "0100101011111", "0111001100111", "0000101011011", "0000101000111", "1011110111100", "0100000110011", "1101110001111", "1010101001001", "1011010110110", "0101111110100", "0010111110110", "1011101110101", "1110011011110", "0111001001000", "1100110100100", "0100010000110", "1000101000101", "0011110010011", "0111111101100", "0010000100000", "0100111111001", "1100110111110", "1111011111101", "0011011110100", "0001111010111", "0010011101011", "0011100010010", "0101001110000", "1101010010100", "0111110010100", "0000010100011", "1011110010101", "1100001101110", "1010111111000", "1111111010001", "0100010100101", "0010001000111", "0011110100010", "0011010101001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"11000111000101110101011111011011000100", "10100101101011001110001110100100011110", "11101000110100110111011001101111110110", "11101110010110110101100011010110010010", "00001001011011101011101100011001011111", "01000010001010011100000000010000101101", "00000111000110111011100011010100011011", "01011000010000001000110010100110110100", "11100101110110000000001011110010101110", "00110010011110111001001110011001011110", "01110010010001001000101000000000001010", "11110001000110110100011001101010100100", "11000100001010010100111111011100000110", "10110110110110001111101001010011101101", "10110010010110000101000011001100100010", "01000000000001010110010101111000100010", "00011111110110110111100011110010010110", "00010111110001010011110011101110101100", "10110110001110000001110110011000000001", "11001101011111100010110101011000111110", "11101101001010001000110000000100110000", "01101011000000101110010111010001011101", "10111100010111101011110101011110011111", "10010011100010101000000000001000110000", "00101100111010000110111010010110011100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> numbers = {"00100101011111010111001101110", "01000011011101001011011010001", "01110101000011100011111000010", "01110010111010111101101010111", "10011111011000101011110010001", "11111010011110100101111011101", "00011000001111110001110001011", "11010000001110010100000010000", "10111100010011101001100010011", "11000010000001101001001110000", "01001011100010110111011111110", "00010111010001011011001001010", "10100011001100011010010110111", "01110100111101101001011011100", "10100100001101000000001100101", "10001011000100100000000101100", "00111000100110000001101111011", "01010001011000011100011110111", "10110011000110100001110001011", "01110111111010011100110001010", "00000010000010101100011000010", "01101010011001101111001100011", "01011101100001100111101010111", "00100001100101111100010001110", "00111101000100010101010111001", "10110100100101000100000110000", "01011010100110010010001100000", "01010001111001111000100110100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> numbers = {"01", "00", "10", "10", "01", "01", "11", "10", "01", "00", "00", "10", "10", "10", "10", "01", "01", "00", "10", "11", "00", "10", "10", "01", "10", "11", "01", "10", "01", "00", "00", "10", "10", "00", "00", "00", "11", "11", "00"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    vector<string> numbers = {"0000101000001100101", "1010111011100111000", "1001011100010001101", "0101001111100000000", "1010111111001010010", "1001111100111011100", "1111101100110100110", "0001000111101111000", "0111000100000010110", "0000010010010000001", "0000111011000010011", "0111001101101110110", "0011111110010100100", "1000011110111011000", "1110000001011111100", "1011101110111100000", "0100001101101110011", "0010100001110111000", "0101001010000100101", "0100110110010001011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> numbers = {"01110110000111011101000101101010110000001110000101", "10001001111000100010111010010101001111110001111010", "11100011011110111000100011001111101010101011100011", "00011100011110000111101100111111100110011000100000", "10111010101111100100110111110000010110101000101111", "10101100000001111000011100000000101001101000100000", "00100101110111101011001010100110011000111101010001", "10010011100001011110101110101100000001010111101100", "11011000001010111110111110001011110000110001010110", "00000010010100101110010111101001001100000001001011", "10000111010011000000010001110010000001010010111011", "00001110101011010110000010011001011001101110110110", "01011011111101001001011100001000011111011010011100", "00110000111001111001110001101001110101110100011011", "01101001001000001100000101010110010110010101110100", "01000100001101100001100010010011110010110110101101", "01001000110010010001010111000011010011100011111111", "11111111110010101110000000000001100100001010011000", "01111010010000000110101011001100111111101101011101", "01100010101110001110101110110110101001101110011010", "11110101010100001001000000111101001111100100101001", "01010001010011101100100110010000001010100001110010", "00010010110010000100000100111000110111000011010110", "10100000011100010101011101011010100001011101011110", "10110111111101110010011111001011010011101100000010", "11000101100000110101110100101010011100100101100101", "00111111001010110001010000111011101011111001010101", "10001111100110111011100111110011000101100110001101", "11010001111110010111111011110000011001100111110010", "00010101101011100101001111001101101101010010110101", "01101110011101001101110000111010001001110111110000", "11001010010111110111001100000101001010010110110011", "00001000000110111000101001100101110011000101000111", "11000010100011001001100011100110010110011111111001", "00000100111010011011100110010100000010001100001110", "11101111001001100111000011101111011110101000001000", "10111111010111010111110010001101110101010100100110", "10101011110001110100001001111100101010111100111001", "11010111001111110100000010000100010011000010001111", "01001101010100100111011001011000010100010010100111", "01101011100011011111110100110001110010110100000011", "01000011110111111001000101010110111101101100101011", "10011101000010011101001010010000110100111111110001", "10011011001100000101010110010111111000001010111010"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> numbers = {"010010110010000010000011110010010110111011101", "101101001101111101111100001101101001000100010", "111011011000101011101001011000110011101110110", "001000010100011000101010100111000011010001001", "100001110111101001000101010111111100010010000", "000111010101000111101111101011111010001011011", "000001001010010111010110111100000000101110000", "011111101110011010111111010101010101011111011", "100100100000001111001000011101011010111001001", "011001110001001100010000101000101100001001110", "110000011110111100011111101010111111110101110", "011010000000001001011100000100000110110110011", "001100111011100110111010010011101111101110000", "001011100011111111100011100100111111011000010", "010101100010101000100000000101001111000101011", "011100011111010001000100110001011010100011110", "111100110010111111110100110110010011000110101", "101000101111001100101001110000001001011100101", "001001000001100010001101110001000101100001101", "110110001011001101000111001101100100001010111", "001010011010111101111000000001110101110000101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> numbers = {"01001110000", "10110001111", "11011011101", "00010100100", "00101011010", "11101101110", "11000000011", "10001100111", "10101000001", "11110110100", "00001111101", "11010101001", "11111000101", "01100001000", "01111111111", "00110111001", "01011000010", "11100100001", "10011001010", "11001111011", "01010010111", "01000101111", "01110100010", "10100111101", "01000011010", "00100101110", "01011101011", "10010111010", "00000000110", "10000011001", "10011101100", "00011010100", "10010010110", "00010011000", "10011010011", "00000110101", "10111111100", "10010000000", "10100010100", "00000010000", "11000110010", "11101011111", "01001001100", "11111110011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> numbers = {"1011100111100100101001001000000010", "0100011000011011010110110111111101", "0001000001001101000000101110101011", "0010111110110010110000010001010111", "1101110010000001110011100010110000", "1110001101111101001111100001101000", "1100101011010110111101111101100111", "0111010110011100001010011011100110", "0110100000100011001010000000001110", "0111111001000100010100010010101111", "1000001000100100011000011011011000", "0011110010001111010111001101011010", "1001101010011011100110000100100110", "1111000011010000011111000111001101", "1010010100000001000101111000011101", "1010101010111101010011010010100001", "1110110111011011011000101001110001", "0101100110110000000100101101101111", "1000110001110011100001001111100001", "0010001011000010101000100111111100", "0000100011101010010001110100100010", "1001011101101010001010101010010111", "0001111100000001101110110011000010", "1100000001101110101110010100111011", "0011000100101000110010000101111001", "0101001010000100110111011110010101", "1101001111011111010011111011010110", "0010010001101011000111100101101111", "0100110000111100110011111001001100", "0110001110101110010001001111101100", "0001010111111111101100110001110111", "0000011101010100001100001100000100", "0010011111101101000000110100000001", "1011001001011010110001010110011011", "1010111001001110100110101000101001", "0001101000110110110010100111000000", "1001000110111001011110111110001000", "1100111101110101110110010101011001", "0011100001111011101110101011011010", "0000111010010111000001111000110011", "0101111111101001111001011101100100", "0111001000111011111000111101000111", "1001010011011001111001001010000111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> numbers = {"1111111011100000", "0000000100011111", "1010010001001001", "0101011101110101", "1001100010001010", "0110100010111100", "0100110111001101", "1100011000010010", "1011101101010110", "1011011010011100", "1101000100101100", "0011000011100111", "0100001110100001", "1110110100100111", "1101110001011111", "1101101110111011", "1000111110000100", "1111001111001010"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> numbers = {"0101001010010100011111001110111000001010", "1010110101101011100000110001000111110101", "0000011100000010001001101011011110010000", "0011000111001110111001011000101110101111", "1100100000111110110101011101010010011100", "1111101111111000000110010100001001011111", "1001111011000111110110010010011100110011", "0110111001011101010011111000110101011101", "0111110100000111011110100101101101101001", "1101010001100000101110101111000011001101", "1110011110010001111010010001100010000000", "0100000110101001010000001100011101100100", "0001101101100100100011111001100000110010", "0010101110000111100101001101000101011010", "0010010010111111110010101011101001110011", "1111000010100111000100010001111011110110", "0011111111101010010011000011001100001010", "1101111100101101111000000010110001111101", "1011100000001101100010011111001010100000", "0100110101110101110110001001000110101111", "0100011011111010001111111010001001100100", "1111011000001010110001111110111011100101", "1000001001010001010101100101001000110111", "0111010011010001000111010011010110011010", "1000101100110011111011111110101101001000", "1110111011100001001001001010010011010110", "1011010100010100000100111010100100000111", "1010000100111101111100100100100110111010", "1001010111111110011100000001010000100000", "1100001111001111111100111111100001101110", "1110001001101100011110101000011111101110", "0110000000010010100010000100111110010101", "0000110000011000011110101000000000010010", "0001000000110001101001010000001100000110", "1110101100001000001011000001010100100101", "0010001011011000111100000010010101011001", "1111110010011011101100101001110100001010", "0100101001101001100100100110101101010101", "0110100111011011001001010110110100110011", "1000010001111010101001100110110111011110", "1001001110011000101001101101100111100001", "0011011001110110100101011100011000101001", "0101111010100110000010101110010101011111", "0100010001001110110111100001101010000000", "0000100111100010001110011111011100011101", "1011001001100011001010011101000101010000", "1101100101000101001001101110101011111011", "1110010001110111011000111010001101011010", "0111101011001111101111110001011001001111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> numbers = {"0011001001111010011000001", "1100110110000101100111110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> numbers = {"01111111010101110101100100", "10000000101010001010011011", "00010101001100100011000001", "11100101111111101111110010", "11011001110011010000001110", "00101010001100011111111101", "10110011111000110010110101", "10011110011011100110011100", "10101100000001001100100010", "11110000001101111000011111", "01001100100111111010101001", "01010010100000011001100010", "00111101111010001001100111", "00100101100011010110010100", "11001010000110000100010111", "11010111110110111011001101", "01101001011110010010011000", "01100110000110101001111110", "01101111101000100111011011", "01000111011100001100001110", "01001011111101101011100101", "11101000110100100010101110", "00000010010101110000000000", "11000001011001110101111001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> numbers = {"101000110100001110010011001100110010001011101001", "010111001011110001101100110011001101110100010110", "001101010010010111110110101010010111100010110000", "111110011101010100001001010101101011101101000011", "000010011000100101011010000000001110010001111100", "100111111010111110000000100101010100101100101100", "110010100011000111110000111110101011010000100101", "011000001110101000001011111010011000101110001100", "000110100101111101111001001111010001000110001010", "001011101100010000110100011101111100011101111010", "010001110111110100010111110100000101011010000011", "101111000111100101010100000101001111000100100000", "101010001011111011011001100000110011110111100000", "001001111011101001110011010011101011001000011001", "110101011110000010101000001010100001000111011001", "100011010100110011100101110110110001001100001111", "111011111110100111011110101001111000111011010011", "011111100110001100100010000000010001110001100111", "101100011010100000010111100111010001010101010101", "111000011001110001110000111001010110001110010100", "000000101111000010010001100101100110100000010110", "111100100001101010101100100100001110111011001010", "010010111101011011100011111101110011110101011100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> numbers = {"0101111100001110110110000101", "1010000011110001001001111010", "1111101001101000010011100000", "1001011010010100011111101111", "0011010101100111101100011111", "1100110001011101100011011100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> numbers = {"00110", "11001", "10100", "01010", "10011", "01101", "11110", "00000", "10111", "01000", "10001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> numbers = {"1011110111101010101", "0100001000010101010", "0001011101000011111", "1110100001001111111", "0111101110001001000", "1000010010000110100", "0110110110110100111", "0010000001111000001", "0110000100001010100", "0000100111001100100", "1101111011010111001", "1010111000111110010", "0111011011100101110", "0011100010110011100", "1001000100111111111", "0011010000001101000", "0000000101100010101", "1100101100100111100", "1001111100011000110", "1101010000010011110", "1000101011110001111", "1111100110111000110", "1010001110101101011", "0011001100010110001", "1111001101111010011", "0101100001101001010", "0101000110011101101", "0010111101010101011", "0110101000101011110", "0010100101110111110", "1101001010101010101", "0000011001101110000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> numbers = {"00101110000000100011000011101111101101001100", "11010001111111011100111100010000010010110011", "01001000100110000101010101111001000100100101", "10000100101010111010101010000101110100010110", "11100010011001001001011010111001011111101001", "10111000001100010110001110110011111010000101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> numbers = {"0100000000101101000011110100011000101000", "1011111111010010111100001011100111010111", "1101010101000111100101011101110001000010", "1110101001110100010110011101001101000100", "0010010101111000101001100001111101111101", "1000110010111011010110101110110001000001", "0111110011101010001101010110000010111101", "1001001001101010110000110010010110000100", "1111000000011000111101001100010111101011", "0000101110001000100101011111011001110111", "1100100100010010000000110111100100101111", "0011101000000111101010011000010011110000", "0101100001010101001100000100101000011011", "0110111100100011010011000011001011010010", "0010100111011111011000111101000001100101", "1111111010000001000100111001000110110100", "1100001111001110011111100001110100100001", "0001010011000000101110110011011011001011", "0101001010011111110110001011001110101110", "0100110010001110111011011010111100011000", "0101111111111100110000100111110000110100", "1010111000011101111001110110101011001110", "1110011011011011101111011111010100010011", "0001101011100101010011010010100000111001", "1100010011100010010001101000101111101010", "1011010110101101001111100111001111110110", "1000000110000011111010000110000110110001", "1001100101111101100010011011000101101010", "1111100110110111110001001110111110111001", "1101101111101001101100101010011010101000", "0111011110001110100001111001101010001101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> numbers = {"1000110101000110110101110110111", "0111001010111001001010001001000", "1110011111011111011111011100011", "0001100011010000100011101100100", "0010010000011100101100010011101", "1011000100100011011100011010100", "1101010010000101111001000101010", "1111111000010010000101001111001", "1001101110001001000110110000111", "0100101100100100011011011111110", "0000000110110111101001111001111", "0101110100011001110100101010010", "1100000001111010010010110011011", "0011111101110101100111011010110", "0110110011100011110011010001101", "1010101001100001101000100111111", "0101000101000010101110000001001", "0001011001001001101111101011000", "0010100100000000111111100011110", "0100010011011110111000101110100", "1011101011011110111101100001011", "1001001000110100110110100110001", "1100111110010000101010000010011", "0110011010000000011100100100111", "0001110110100001101110001100001", "0011010100001010000011010100100", "0101101001111111101001010100000", "0111100000001110100101111010110", "1011011110111010101111000011100", "0101111111110010010000011010000", "1001111001100100000010010101010", "1111000011101100101110110100111", "1000011010101111100100001001011", "0011001111100110001011100101000", "0111110111010100001100000110001", "1110110100101111001001001011000", "0111010001110111011010011111101", "0010110010001010111010000111001", "1010001101010010000000010001110", "0111011100100001000001101000111", "1111011111101001110100010001000", "0000101010011101110111000010100", "1010011100101100111010111000001", "1101100101101101010111000010011", "1110101110111100000100101100010", "1001010100111101000011111111100", "0000111101011111000010001100101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> numbers = {"110111111101", "001000000010", "010001101011", "101110010100", "100001011000", "111010100001", "000111000001", "001110101111", "100100110011", "011101011110", "000001001101", "100010001011", "110000000100", "111111000010", "101001100111", "110101010111", "010110011000", "100011101110", "001101101000", "001011111011", "110011010001", "111001011101", "010010110110", "111100111001", "011011001001", "000100001000", "110100101111", "011000111111", "101010011111", "001100011011", "000101110100", "011110110000", "110001110010", "000011010111", "001111011101", "010011000100", "100010110101", "000110111100", "000010100000", "011010010101", "000101011001", "110001001001", "001100110010", "111000110100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> numbers = {"001001111101000011000100011111111110", "110110000010111100111011100000000001", "100011100100011001101101110110101000", "010000101011011000000010110101010100", "101100100001100101010010001010101011", "000111010001001101001011111001110010", "011110111000101010100111101101101000", "111000011110110011111110000110011011", "101001000111010100001011000101100111", "000001010110100111010011100011001100", "110001110011110110100101010010110010", "011011011011100100011100111100001101", "010101111111001100110101101011010101", "100101001011101011100000100000111110", "000010001110010101110111011001100000", "110011010101101010010110001000100110", "011001000000001010001101000011001011", "100111011110000000000100110011100111", "111101101100111111000110110010111001", "010111001101110110101001111111011000", "001100010100011000111000011000010100", "001110101101010100000110010110001101", "010100000111100001001101100100010011", "000101000000111110011000101010110000", "101111110010101111110001011111011011", "011010100010110011000001001110111101", "110100110100100110001010101111010111", "101110010000110010010101010001110001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> numbers = {"110111010001110100011110100010000010111010", "001000101110001011100001011101111101000101", "101110111000100001001011110100101011010011", "100001110100010010000100000111010100101100", "011101001000101110110111111000010111101111", "111011100111100001110111001011011011011100", "100100000010011111011011001011100100110111", "000110010111000001100010101110110110100000", "001101111101000100010001001010101000001001", "000011101001101000000101100110000001000110", "010000000101111010011000010000110001011100", "011010011111101100101110010101001110001001", "100010011011110010101001000100010111110111", "011001110010111000010011010110011110110000", "101000001001000110000100111110111110011110", "001011010100100111011100111011010001000011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> numbers = {"100001001010110010011010010000101000011010111", "011110110101001101100101101111010111100101000", "000100101111010111110011111001110001111100010", "001001110000010111001100001010000010110000011", "110101110011100100110110001010110000000111011", "101111011111101011000011000101111110001100011", "000011100110101101011001011101001101110001110", "010000010110011000000011100000010010000010000", "011000101010001100110000000100100111101011101", "100110000001000000001100000100011101000001101", "010111011000100011111101110110111011111111010", "010101000010000110000101101101101000101001000", "101010101101110001101001100010100100010111010", "111100011001110110000000111011011100110110101", "001101011010111100101011111101010111101000100", "011100100110110001111100010011011000101001001", "110011010001111000011001111100011000001111111", "001010011000001010011011011111100010100110111", "111011100011010101011010101001100111000100111", "101100110100101000010000011000111111010100110", "100011000011101110100000110010010111011101000", "000111001101111110010101100000100110111010001", "110110101010101001001010110111010101111110001", "011011011110010100111100110000101001100101100", "111111001000011011010000001010110101100001000", "011111010011000000100011011110001101111100011", "100101101001001110001011001011001111010111011", "110001101111111111000001101110000001100100100", "010110000100110111001011001010011110101111000", "010010100001011011000110100110101011010111100", "011110011100111000001101110101100100000000010", "010001111001011101111011100111111100100010011", "001011001010011001100110010101100010011110001", "100010010110110101100101000100111000011000100", "100000111110000001011111101110011001000111110", "101110001100101101110111011101101001000111011", "111101010101011001111101011001110110111010111", "111000000000100001011001000001111100001100101", "001110100011100101110000111100011010000010101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> numbers = {"01011110101000010011101001100101100101111111101", "10100001010111101100010110011010011010000000010", "11001011110010000110111100111100001100101010110", "10011000000001111001001100111100110000011010001", "00001101111111011001110011110000110011010101111", "10110110110011010000100110100011001111010110110", "10111011101101000101011010101001000001001100100", "01101000011011000000001011001100101010110110100", "00111100100110100110110001010011101010111001000", "00010011001010101111000011111111010111100110110", "00100111100000001001010101001000101101011001011", "00110000011100011010111111101010111100101011100", "11110011000100110000000001100110000010110011011", "10000100011000100011010110100101000001010001100", "01000100110101101110101111010100100101001100000", "10101110000000110110001010001011011000100110001", "01110111111100100100111011110111011101110011100", "00000001100110110011101100000000010001100011000", "10010010100100011111001000010010101111101100100", "11010111010001101010011000001101101110010100001", "01111010000010111101111011000000000111000000010", "11100100101110011100111000001101111100000001010", "11011101100000100101010111011110000100010110011", "00000101001101100101100001011001001100000011110", "10011110111110111010101100110110011010000001101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> numbers = {"1111010111101001100111001011010010", "0000101000010110011000110100101101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> numbers = {"00101001111001000000111000101011101001110001001111", "11010110000110111111000111010100010110001110110000", "10001100100000011010011110000001111111010111100110", "01000000010000100101011101000111001111100100011010", "00010011101111100110010010111110111100100100011001", "00111110011111011001101110110001110000100100101010", "11100101110111010110101101001101011000010100010101", "01110001001001111011100001111000100111011000011000", "11111011100010001100001000010010001101001000101001", "10100010001010010101110000001100011100001011000110", "11000011111000011001000111101110111011110101111101", "10110100001101000010110101010110110001000001001001", "00100100101011110001001001010101000010000010100001", "01011100111010001111110001011110000011111111000100", "11001111001101100101101000110100000100111101001100", "01100010100101111100110110010011011010111001101110", "00000110010111100011110001100000011011011100101111", "10111000110110110000100001111110010110100110111110", "10010000011000001011010110011011010010001011111111", "00110111000011000101011111011000001000111110011110", "11110010011101110111111100101010111000110010111000", "11011001010101011010110100111101110100000111010010", "11010000101111011001111011110111101101101010001111", "11101000000001000110000110101110011110101101001011", "10000111000001111001111101000010100101011110000011", "00111011110000111111111011001001010001000010001011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> numbers = {"101010110001100101110011000110101110010001", "010101001110011010001100111001010001101110", "111100011011110011010101010011000100000111", "100101110100001100011010011100001011001011", "001101101001111101001001101111000111110100", "110011010010000011101001100011111011110111", "011011111100000110000111101110011101100001", "000010000100111111100110100000111000111010"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> numbers = {"01001000101111010100", "10110111010000101011", "11100010001010001101", "00101101000110111101", "01110100111001000010", "11011101011110000111", "00010010000101001110", "10001110111000010001", "00110001011111100100", "00000111101101110111", "01011011001011101011", "01000011010001010000", "00001011110110000110", "11001100110101101101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> numbers = {"0100111010011011100010111101010000011", "1011000101100100011101000010101111100", "0010010011110010111000100111000101111", "1110101111001110110100011011111010110", "0001100011001101001011101000110110000", "0011111100001000000100100100000100100", "1101110101010010101111010100011110001", "0110000100011101111001111010000011010", "1000001011101000010001111101011111010", "1100010000100111000100010001000111000", "1010001100001011011110001101101101001", "1001011110110110110110110010100000001", "0111011001101101010010000111110000111", "1010110101001101100010010101001011111", "1000100110111101101110111111111100101", "0000011101111100101011100001101111001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> numbers = {"000011111110011010001111111010011010101101100111", "111100000001100101110000000101100101010010011000", "010110101000110011100101100011001100000100111110", "100101010100001111100101011111000000001001010001", "001101100111111111010011100000000000110111000001", "110000110111000010111001001000111100000111001110", "101010010010010100010101100000101011011100001101", "011000101101101000001010011111110011001000111110", "111011100000001010100011110100100110011011100100", "101111001011110010001000010001011001010101010111", "110101101101011010010100000110101010100010011011", "110110011110101001011100110010110101110001111011", "001001011000100001101111000100011111110001001100", "101001101100111101111100111001101110000111101000", "111000011110001110000010101011000101100110100010", "100010100101110000100011011001001010111001001010", "000100111011101100110110111011011111011110010001", "011111111011000111000001111111110111110011010111", "001110011101111101100001110100101111011011110010", "010011000111100101001111111100101001100010100101", "010101011001001001000110010001100001100100001110", "000110000010100000111011101111110000001101010111", "011101001110010100110001010010111101101101011100", "000111101011010001110000101000101011101001111001", "000101101100000101011010000111000110011101100100", "100000001011011000000101011111111100010011110000", "100110111101001100001000001010100000010100010110", "010001110000111110010110011101001011110001110100", "011110001100100110011000100001001010111010110111", "111110110100010001001011101100010001111110111000", "110100001100000000101110101110001011000101111001", "100111000111011100101110011011010110010101101101", "110011110101010100011110110000000100111000010001", "001111000101100000000101000111111011101111101001", "001100000000011011001100111011010101111100000100", "010100110010000101101101000110100011111100110011", "111010101011010011011110001101100110010100110011"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> numbers = {"1011110100001010000100001001000011011", "0100001011110101111011110110111100100", "1110010001011111011101010011010101110", "0010100010100000100010100011010101111", "0111000110011100010000111100011010001", "1101100010000111101110010000001110110", "0101010011001001110110101001111111010", "1000000111010010010111111010100010110", "1010001000110011101100111101100100010", "0101101100101000111011001100100001111", "1011011011100100001111001101110010100", "1100011100000100011100101111011100011", "0001001001011010100001100011111001101", "1001101011111111010000010101000001000", "0000111111001110110010000010001111100", "0110111000010001010011000111100110010", "0001110001110000011100000010011010110", "0110010100101110101000010101110010111", "0011010010111011000011011110000101101", "1001010110011111111001100100101101011", "1111101111001011011111100111001011110", "1100101001010110110100110001101010001", "1000110010001000111100110110110000101", "0011101101000100010101010110110101101", "0111101001111101001110011010100011010", "0010011101010010111011010100010111011", "1101001010101010000110101100010100110", "0011110011000011010000110000100110001", "0101001110000001001101001010001111001", "1100111010110011110110001010110001000", "1110110110100010111011111001101111000", "1010101110011101100011011001110100100", "1010111001111110100011101110011010010", "0011000100100011011111000101111110001", "0100110010101101000101111011011001000", "0111110111110100100110110101100100010", "1001110101010110010000101110001001101", "1001111000100001101010011110011100001", "1001001100111010111110100010001110000", "1110000100010110100110000110100001110", "0000000000111111010100100000110111100", "0100011001000011000100111100001101101", "1010011110111010001111010011111001001", "0010110101100001001010001000110001000", "0101111011100010100011010000111010011", "1010000110000001111000001110010101000", "1101011001111001011001101000000110111", "0001011100010101100011110000100010001", "1111011100110011000101100110011101010"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> numbers = {"00101011100011", "11010100011100", "01111101110101", "10110010110110", "00011110000100", "10001000010001", "11100001000100", "11000111110011", "11001010101110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> numbers = {"01", "10"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> numbers = {"000100000", "111011111", "101101011", "100010101", "011110011", "001001100", "010011001", "101000001", "011010101", "000001011", "100111110", "010101100", "011001010", "001111101", "110100111", "010111010", "001010010", "100101101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> numbers = {"00", "01", "00", "11"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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

int test68() {
    vector<string> numbers = {"000", "011", "101", "000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> numbers = {"000000", "000111", "111000", "111111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> numbers = {"101110", "100001", "111110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> numbers = {"00", "01", "10", "11"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> numbers = {"00000000000000000000000000000000000000000000000000", "11111111111111111111111111111111111111111111111111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> numbers = {"001", "100", "101"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> numbers = {"00", "01", "11"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> numbers = {"0000", "1111", "0000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> numbers = {"11111", "00000", "00000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> numbers = {"00001010011101", "11111000101100", "11110000101011", "00000000000000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> numbers = {"000000", "111111", "111000", "111111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> numbers = {"0000", "0011", "1100", "1000", "0000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> numbers = {"1100", "0011", "1010", "0101", "1110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> numbers = {"111", "000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> numbers = {"11010", "01100", "11010"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> numbers = {"1001", "1111", "1001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> numbers = {"000000", "000111", "111000", "111111", "000001"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> numbers = {"11010", "01100"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> numbers = {"000", "111", "111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> numbers = {"000", "111", "000"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> numbers = {"00001", "00010", "00100", "00100", "00100", "11000", "11100", "11110"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> numbers = {"00000", "00001", "11111"};
    HammingDistance* pObj = new HammingDistance();
    clock_t start = clock();
    int result = pObj->minDistance(numbers);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20035213&rd=8069&pm=5884
********************************************************************************
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
class HammingDistance{
public:
  int minDistance(vector <string> numbers){
    int n=0;
    bool r=true;
    int num=0;
    for(int i=0;i<numbers.size();i++){
      for(int j=i+1;j<numbers.size();j++){
        num=0;
        for(int k=0;k<numbers[0].size();k++){
          if(numbers[i][k]!=numbers[j][k])num++;
        }
        if(r){
          r=false;
          n=num;
        }
        if(num<n)n=num;
        if(!n)return 0;
      }
    }
    return n;
  }
};

********************************************************************************
*******************************************************************************/