/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3545
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

class BitStrings {
public:
    int maxStrings(vector<string> list, int numZeroes, int numOnes);
};

int BitStrings::maxStrings(vector<string> list, int numZeroes, int numOnes) {
    int ret;
    return ret;
}


int test0() {
    vector<string> list = {"1", "00", "100"};
    int numZeroes = 3;
    int numOnes = 1;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"00", "110", "101"};
    int numZeroes = 2;
    int numOnes = 4;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> list = {"111", "01", "11", "10", "101"};
    int numZeroes = 3;
    int numOnes = 9;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"00", "000", "00000"};
    int numZeroes = 0;
    int numOnes = 100;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"110", "01", "1101", "00"};
    int numZeroes = 2;
    int numOnes = 3;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> list = {"1111", "010101", "1010", "1010010101111111111010101011", "111111111111111111111111111111", "10101010010"};
    int numZeroes = 253;
    int numOnes = 131;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> list = {"1111", "010101", "1010", "1010010101111111111010101011", "111111111111111111111111111111", "10101010010"};
    int numZeroes = 0;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> list = {"10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010"};
    int numZeroes = 500;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> list = {"00", "0000000000", "0000000000000000", "111111111111111111111111111111110", "1111111111111111111111111111111110", "11111111111111111111111111111111110", "111111111111111111111111111111111110", "1111111111111111111111111111111111110", "11111111111111111111111111111111111110", "11111111111111111111111111111111111110", "111111111111111111111111111111111111110", "1111111111111111111111111111111111111110", "11111111111111111111111111111111111111110", "111111111111111111111111111111111111111110", "1111111111111111111111111111111111111111110", "11111111111111111111111111111111111111111110", "111111111111111111111111111111111111111111110", "1111111111111111111111111111111111111111111110", "11111111111111111111111111111111111111111111110", "111111111111111111111111111111111111111111111110"};
    int numZeroes = 28;
    int numOnes = 377;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> list = {"00", "0000000000", "0000000000000000", "111111111111111111110", "1111111111111111111110", "11111111111111111111110", "111111111111111111111110", "1111111111111111111111110", "11111111111111111111111110", "111111111111111111111111110", "1111111111111111111111111110", "11111111111111111111111111110", "111111111111111111111111111110", "1111111111111111111111111111110", "11111111111111111111111111111110", "111111111111111111111111111111110", "1111111111111111111111111111111110", "11111111111111111111111111111111110", "111111111111111111111111111111111110", "1111111111111111111111111111111111110"};
    int numZeroes = 500;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> list = {"1010101011111110000010101010100101010000000011111", "10101000000010101011111111111111111110101010000", "11111111111000000000000010101011111111111", "100000000000000000000000000000000000000000000000", "11111111111111010101010000000000000101011111111111", "1010100100001111101001010001110010100000011101011", "1111111000000000000000010101001011111101001010101", "110100101010010101010101010010101011011111101000", "1111111111111111100000000000000000001010100101011", "110010101010010000000000000000000101010010111", "100000000000111111101010010001111111101010100101", "111101010100000000000000000001010111111110101111", "111111111111110000000010101010000000111101010011", "101010010000000111111111111111111110101001010111", "111111111111111000000000000000000000000101010010", "101000000111111111111111111111010100101010100101", "101010100000000000000000001111111111111111101001", "1111111111111111111111111111110000000000000000000", "0000000000000000000000001111111111111101010100101", "0100111111100000000001010101010000000001111110101"};
    int numZeroes = 489;
    int numOnes = 437;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> list = {"10101000000010101011111111111111111110101010000", "11111111111000000000000010101011111111111", "100000000000000000000000000000000000000000000000", "11111111111111010101010000000000000101011111111111", "1010100100001111101001010001110010100000011101011", "1111111000000000000000010101001011111101001010101", "110100101010010101010101010010101011011111101000", "1111111111111111100000000000000000001010100101011", "110010101010010000000000000000000101010010111", "100000000000111111101010010001111111101010100101", "111101010100000000000000000001010111111110101111", "111111111111110000000010101010000000111101010011", "101010010000000111111111111111111110101001010111", "111111111111111000000000000000000000000101010010", "101000000111111111111111111111010100101010100101", "101010100000000000000000001111111111111111101001", "1111111111111111111111111111110000000000000000000", "0000000000000000000000001111111111111101010100101", "0100111111100000000001010101010000000001111110101", "0000111111111111111111111111000000010101010011111"};
    int numZeroes = 300;
    int numOnes = 238;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> list = {"1010111111", "1010100000", "0000010100", "1000000011", "0000000000", "1010000000", "1111111111", "1001000000", "1010111111", "0000111111", "1010011111", "0111111100", "0001111111", "1011000011", "1000111111", "1111111000", "1110101010", "1010101111", "1011111111", "0010101110"};
    int numZeroes = 343;
    int numOnes = 277;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> list = {"1010101010", "1110101111", "1111111111", "1010111000", "0000101010", "0001010101", "1001111100", "1110101100", "1000000000", "1010111111", "1010100000", "0000010100", "1000000011", "0000000000", "1010000000", "1111111111", "1001000000", "1010111111"};
    int numZeroes = 100;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> list = {"1110101100", "1000000011", "0000000000", "1010000000", "1111111111", "1001000000", "1010111111", "0000111111", "1010011111", "0111111100", "0001111111", "1011000011", "1000111111", "1111111000", "1110101111", "1111111111", "1010111000", "1010111111", "0000111111", "1010011111"};
    int numZeroes = 500;
    int numOnes = 499;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> list = {"1010101010", "1110101111", "1111111111", "1010111000", "0000101010", "0001010101", "1001111100", "1110101100", "1000000000", "1010111111", "1010100000", "0000010100", "1000000011", "0000000000", "1010000000", "1111111111", "1001000000", "1010111111", "0000111111", "1010011111"};
    int numZeroes = 232;
    int numOnes = 400;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> list = {"1010101010", "1110101111", "1111111111", "1010111000", "0000101010", "0001010101", "1001111100", "1110101100", "1000000011", "0000000000", "1010000000", "1111111111", "1001000000", "1010011111", "1000111111", "1111111000", "1110101111", "1111111111", "1010111000"};
    int numZeroes = 233;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> list = {"10101000000010101011111111111111111110101010000", "11111111111000000000000010101011111111111", "100000000000000000000000000000000000000000000000", "11111111111111010101010000000000000101011111111111", "1010100100001111101001010001110010100000011101011", "1111111000000000000000010101001011111101001010101", "110100101010010101010101010010101011011111101000", "1111111111111111100000000000000000001010100101011", "110010101010010000000000000000000101010010111", "100000000000111111101010010001111111101010100101", "111101010100000000000000000001010111111110101111", "111111111111110000000010101010000000111101010011", "101010010000000111111111111111111110101001010111", "111111111111111000000000000000000000000101010010", "101000000111111111111111111111010100101010100101", "101010100000000000000000001111111111111111101001", "1111111111111111111111111111110000000000000000000", "0000000000000000000000001111111111111101010100101", "0100111111100000000001010101010000000001111110101", "0000111111111111111111111111000000010101010011111"};
    int numZeroes = 123;
    int numOnes = 411;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"10101000000010101011111111111111111110101010000", "11111111111000000000000010101011111111111", "100000000000000000000000000000000000000000000000", "11111111111111010101010000000000000101011111111111", "1010100100001111101001010001110010100000011101011", "1111111000000000000000010101001011111101001010101", "110100101010010101010101010010101011011111101000", "111111111111111101010000000000000001010100101011", "110010101010010000000000000000000101010010111", "100000000000111111101010010001111111101010100101", "111101010100000000011100000001010111111110101111", "111111111111110000000010101010000000111101010011", "101010010000000111111111111111111110101001010111", "111111111111111000000000000000000000000101010010", "101000000111111111111111111111010100101010100101", "101010100000000000000000001111111111111111101001"};
    int numZeroes = 90;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> list = {"00", "0000000000", "0000000000000000", "111111111111111111110", "1111111111111111111110", "11111111100111111111110", "111111111111111111111110", "1111111000110111111111110", "11111111111110011111111110", "111111111111111101111111110", "1001111111111111110011111110", "11111001111111111111111111110", "111111110000111111111111111110", "1111111111111000011111111111110", "11111111111111111111111111111110", "111111111111111100000001111111110", "1101010101010101010101010101010010", "11111111111100000001111111110000110", "111111111111011111111111111111111110", "1111111101111111111111111111111111110"};
    int numZeroes = 500;
    int numOnes = 194;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> list = {"1010101010", "1110101111", "1111111111", "1010111000", "0000101010", "0001010101", "1001111100", "1110101100", "1000000000", "1010111111", "1010100000", "0000010100", "1000000011", "0000000000", "1010000000", "1111111111", "1001000000", "1010111111", "0000111111", "1010011111"};
    int numZeroes = 443;
    int numOnes = 0;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"1010101010", "1110101111", "1111111111", "1010111000", "0000101010", "0001010101", "1001111100", "1110101100", "1000000000", "1010111111", "1010100000", "0000010100", "1000000011", "0000000000", "1010000000", "1111111111", "1001000000", "1010111111", "0000111111", "1010011111"};
    int numZeroes = 0;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"1000000", "110", "110"};
    int numZeroes = 6;
    int numOnes = 4;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> list = {"10000000000", "110", "110", "110", "110", "110", "110", "110", "110", "110", "110"};
    int numZeroes = 10;
    int numOnes = 9;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"11111011111", "001", "001", "001", "001", "001", "001", "001", "001", "001", "001"};
    int numZeroes = 9;
    int numOnes = 10;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> list = {"111111111111111111110", "001", "001", "001", "001", "001", "001", "001", "001", "00111111111"};
    int numZeroes = 19;
    int numOnes = 20;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> list = {"00000000000000000000000000000011", "11100000000000000000000", "11100000000000000000000"};
    int numZeroes = 40;
    int numOnes = 6;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> list = {"11111000001111100000111110000011111", "00000000000000000000000000000000001", "00000", "00000", "00000", "00000", "00000", "00000", "00000", "1111111111111111111111111111111111111111111111110"};
    int numZeroes = 35;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> list = {"00111111111111111", "10011111111111111", "11001111111111111", "11100111111111111", "11110011111111111", "11111001111111111", "11111100111111111", "11111110011111111", "11111111001111111", "11111111100111111", "11111111110011111", "11111111111001111", "11111111111100111", "11111111111110011", "11111111111111001", "01111111111111111111111111111111111111111111111111", "01111111111111111111111111111111111111111111111111"};
    int numZeroes = 30;
    int numOnes = 275;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> list = {"00111111111111111", "10011111111111111", "11001111111111111", "11100111111111111", "11110011111111111", "11111001111111111", "11111100111111111", "11111110011111111", "11111111001111111", "11111111100111111", "11111111110011111", "11111111111001111", "11111111111100111", "11111111111110011", "11111111111111001", "01111111111111111111111111111111111111111111111111", "01111111111111111111111111111111111111111111111111"};
    int numZeroes = 31;
    int numOnes = 225;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> list = {"00111111111111111", "10011111111111111", "11001111111111111", "11100111111111111", "11110011111111111", "11111001111111111", "11111100111111111", "11111110011111111", "11111111001111111", "11111111100111111", "11111111110011111", "11111111111001111", "11111111111100111", "11111111111110011", "11111111111111001", "01111111111111111111111111111111111111111111111111", "01111111111111111111111111111111111111111111111111"};
    int numZeroes = 31;
    int numOnes = 276;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> list = {"11000000000000000", "01100000000000000", "00110000000000000", "00011000000000000", "00001100000000000", "00000110000000000", "00000011000000000", "00000001100000000", "00000000110000000", "00000000011000000", "00000000001100000", "00000000000110000", "00000000000011000", "00000000000001100", "00000000000000110", "10000000000000000000000000000000000000000000000000", "10000000000000000000000000000000000000000000000000"};
    int numZeroes = 300;
    int numOnes = 31;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> list = {"11000000000000000", "01100000000000000", "00110000000000000", "00011000000000000", "00001100000000000", "00000110000000000", "00000011000000000", "00000001100000000", "00000000110000000", "00000000011000000", "00000000001100000", "00000000000110000", "00000000000011000", "00000000000001100", "00000000000000110", "10000000000000000000000000000000000000000000000000", "10000000000000000000000000000000000000000000000000"};
    int numZeroes = 400;
    int numOnes = 471;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> list = {"11000000000000000", "01100000000000000", "00110000000000000", "00011000000000000", "00001100000000000", "00000110000000000", "00000011000000000", "00000001100000000", "00000000110000000", "00000000011000000", "00000000001100000", "00000000000110000", "00000000000011000", "00000000000001100", "00000000000000110", "10000000000000000000000000000000000000000000000000", "10000000000000000000000000000000000000000000000000"};
    int numZeroes = 225;
    int numOnes = 30;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> list = {"00011110010111", "0001111", "000011111", "00111011011", "011101", "0111", "0011110", "01", "0001", "0000001", "0001", "111111", "11", "110"};
    int numZeroes = 10;
    int numOnes = 15;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> list = {"100", "0", "0010", "00"};
    int numZeroes = 5;
    int numOnes = 2;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> list = {"10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010"};
    int numZeroes = 500;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> list = {"1", "111", "1000", "10", "1000"};
    int numZeroes = 3;
    int numOnes = 7;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> list = {"100", "0101", "01010", "0101011", "1010101", "1101010", "1111111", "11111111", "1010101010101", "101010101010111", "101010111111111", "111010101", "101001", "11101", "111010101", "1011001001", "110101010", "10101010101", "1010101010", "10101011"};
    int numZeroes = 500;
    int numOnes = 500;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> list = {"1", "1", "1", "0", "10"};
    int numZeroes = 1;
    int numOnes = 1;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"00000", "11111", "10", "10"};
    int numZeroes = 2;
    int numOnes = 2;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> list = {"00", "110", "101"};
    int numZeroes = 2;
    int numOnes = 4;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
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
    vector<string> list = {"01111", "001", "0011"};
    int numZeroes = 4;
    int numOnes = 4;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> list = {"01111111111111111", "001", "0011"};
    int numZeroes = 4;
    int numOnes = 8;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> list = {"00000", "11111", "10", "10"};
    int numZeroes = 0;
    int numOnes = 0;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> list = {"111", "01", "111", "01", "111", "01"};
    int numZeroes = 3;
    int numOnes = 3;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> list = {"1111100000", "1111100000", "100", "01", "01", "0110"};
    int numZeroes = 5;
    int numOnes = 5;
    BitStrings* pObj = new BitStrings();
    clock_t start = clock();
    int result = pObj->maxStrings(list, numZeroes, numOnes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11946267&rd=7223&pm=3545
********************************************************************************
#include <vector>
#include <string>
 
using namespace std;
 
class BitStrings {
public:
  vector <string> *l;
 
  int max(int a, int b) {
    return ((a > b) ? a : b);
  }
 
  int maxStrings(int i, int numZeroes, int numOnes) {
    vector<string> &list = *l;
    if (i == list.size()-1) {
    for (unsigned int x = 0; x < list[i].size(); ++x) {
      if (list[i][x] == '1') --numOnes;
      if (list[i][x] == '0') --numZeroes;
    }
    if ((numOnes | numZeroes) >= 0) return 1; else return 0;
    }
    const int a = maxStrings(i+1, numZeroes, numOnes);
    for (unsigned int x = 0; x < list[i].size(); ++x) {
      if (list[i][x] == '1') --numOnes;
      if (list[i][x] == '0') --numZeroes;
    }
    if ((numOnes | numZeroes) < 0) return a;
    const int b = 1+ maxStrings(i+1, numZeroes, numOnes);
    return max(a, b);
  }
 
  int maxStrings(vector <string> list, int numZeroes, int numOnes) {
    l = &list;
    return maxStrings(0, numZeroes, numOnes);
  }
 
};

********************************************************************************
*******************************************************************************/