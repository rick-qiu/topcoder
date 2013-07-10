/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10154
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

class LampsGrid {
public:
    int mostLit(vector<string> initial, int K);
};

int LampsGrid::mostLit(vector<string> initial, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> initial = {"01", "10", "10"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"101010"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"00", "11"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"0", "1", "0", "1", "0"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> initial = {"001", "101", "001", "000", "111", "001", "101", "111", "110", "000", "111", "010", "110", "001"};
    int K = 6;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> initial = {"01", "10", "01", "01", "10"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"0", "0", "0", "0", "1", "0", "0", "0", "1", "0", "1", "0", "0", "1", "0", "0", "1", "0", "1", "1", "1", "1", "0", "1", "0", "0", "1", "1", "0", "0", "1", "1", "0", "1", "1", "1", "0", "1", "0", "1", "1", "0", "0"};
    int K = 11;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> initial = {"0", "0", "1", "1", "1", "0", "0", "1", "1", "1"};
    int K = 712;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> initial = {"1", "1", "1", "1", "0", "0", "0", "1", "1", "0", "1", "0", "1", "1", "1", "1", "0", "1", "1", "1", "1", "1", "0", "0"};
    int K = 387;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> initial = {"0", "1", "1", "0", "1", "1", "1", "1", "0", "1", "0", "1", "1", "0", "1", "1", "0", "1", "1", "1", "0", "0", "1", "1", "0", "1", "0", "0", "1", "0", "0", "1", "1", "1"};
    int K = 816;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> initial = {"0", "0", "0", "1", "1", "0", "0", "1", "0", "1", "0", "1", "1", "0", "1", "1", "0", "1", "0", "0", "1", "0", "1", "1", "1", "1", "0", "0", "0", "0", "0", "1"};
    int K = 200;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> initial = {"1"};
    int K = 764;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"0100111"};
    int K = 398;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> initial = {"1010011"};
    int K = 122;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> initial = {"0010000"};
    int K = 101;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"00"};
    int K = 50;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> initial = {"10", "11", "01", "11", "01", "01", "10", "10", "10", "10", "00", "10", "10", "10", "10", "00", "01", "01", "10", "11", "01", "00", "10", "00", "01", "10", "10", "11", "01", "11", "11", "01", "00", "10", "01", "10", "00", "01", "01", "11", "11", "11", "01"};
    int K = 62;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> initial = {"0011110000", "0001101010", "0011000100", "1101101100", "1110110010", "1011001011", "1111001100", "1111010001", "0000001011", "1110010111", "1001001111", "0001110111", "1100101100", "1001010001", "0010010100", "1111010110", "0000011000", "1111000000", "1101111100", "0010101001", "0100011111", "1000111001", "1010100000", "0111101000", "1111011000", "0011111000", "1111111000", "1010000010", "1011010010", "0111000100", "1000011111", "0101010101", "1110001111", "0100111101", "1010000110", "1110000000", "0100101000", "1011110111", "1001010101", "1100010001", "0010101100", "0100101111", "0110100111", "1011100100", "0011011011", "0110011000", "0111010010", "1001111111"};
    int K = 221;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> initial = {"0", "1", "0", "0", "0", "0", "0", "1", "0", "1", "1", "1", "1", "0", "1", "0", "0", "1", "1", "0", "0", "0", "1", "0", "1", "0", "1", "1", "1", "0", "1", "0", "1", "0", "1", "1", "1", "0", "0", "1", "1", "0", "1", "1", "1", "1", "1", "0", "1", "0"};
    int K = 930;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> initial = {"10011000", "11101111", "00111001", "10101101", "01111011", "01000000", "00101001", "10000011", "10011001", "01110000", "10001101", "01101100", "00011000", "01011110", "11110001", "10100010", "10100111", "01111110", "00111101", "11111100", "01010010", "00111000", "11101100", "00000010", "10000000", "00111000", "00011001", "00010101", "01110101", "10111111", "11010011", "01010010", "01001000", "00101110", "11101001", "01001100", "10101101", "11100001", "11011110", "11110011", "01101010", "00000011"};
    int K = 801;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> initial = {"0100110101", "1001100101", "0111011110", "0000000000", "0101000000", "0110001011", "0011011010", "1110101101", "0111111000", "0010001111", "0100110111", "0000100010", "1100111111", "1110010110", "0110001111", "0110101101", "1110100111", "0111010101", "0100101000", "1001011110", "1011000001", "0000001001", "1011110100", "0100000010", "0001011000", "0100011011", "0010111010", "1111010101", "1111110001", "0111101000", "0110101011", "1001101100", "0010000101", "1100110100", "1000110110", "1011100000", "1001100110", "0111001100", "0011100000", "1100100001", "1010100010", "1000101101", "1101000101", "0011000000", "0010101110", "0101111111", "1011011100", "0011010111", "0110101010"};
    int K = 963;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"0001", "0011", "0011", "1010", "1110", "0000", "0000", "0100", "1101", "0011", "0111", "0110", "1010", "0011", "0001", "0011", "1010", "1100", "0110", "1100", "1010", "0100", "0100", "1110", "0001", "1110", "1110", "0011", "0011", "1011", "1110", "1010", "1100", "0101", "1010", "0011", "1000", "0100", "1111", "1101", "0111", "0100", "1110", "0101", "1111", "0101", "0101", "1010", "0100", "1011"};
    int K = 82;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> initial = {"101000", "001001", "100110", "110011", "110101", "110101", "100001", "011100", "110111", "010000", "011000", "011100", "001110", "110111", "010110", "001010", "011010", "101001", "000000", "010010", "011001", "101110", "010110", "111110", "011101", "111100", "111110", "011110", "111110", "010001", "110001", "010100", "000100", "110010", "000011", "101110", "101100", "001110", "111010", "010110", "100111", "110101", "110100", "110110", "100000", "010111", "110010", "111011", "110010", "010110"};
    int K = 51;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> initial = {"000", "010", "110", "000", "001", "011", "101", "011", "110", "000", "001", "101", "000", "110", "111", "001", "000", "110", "100", "100", "101", "010", "001", "010", "000", "111", "001", "011", "010", "100", "010", "011", "111", "111", "011", "011", "010", "101", "001", "000"};
    int K = 390;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> initial = {"01100010", "01000101", "11001110", "00011100", "10000001", "10101101", "11001011", "11000000", "10000001", "01110000", "00100101", "11010100", "00001000", "11000100", "00110111", "00011110", "01110101", "01000110", "01101101", "00000110", "11011111", "10101001", "00110100", "11110100", "00011111", "01111010", "10001100", "10011100", "11000100", "11111011", "01010100", "01111110", "11110000", "01110111", "01001101", "00111000", "11001101", "10000101", "11110101", "11111100", "11100000", "01010110", "00000010", "11001000", "00011011", "10101110", "11000010", "00100010", "10100110", "01010010"};
    int K = 985;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> initial = {"1", "0", "0", "0", "1", "0", "0", "1", "1", "0", "0", "1", "0", "0", "0", "1", "0", "0", "1", "1", "0", "1", "0", "1", "0", "1", "1", "0", "1", "1", "0", "1", "1", "0", "1", "1", "0", "1", "1", "1", "0", "0", "0", "1", "0", "0", "0", "1"};
    int K = 998;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> initial = {"10001001101101000001000110101", "01101100101101100101110110000", "00111010000011111101000000000", "10010101100101110011010111111", "10101011111100001010100001100", "11111000000110111101110100010", "10110001011001000011001101110", "10010100000010010101001100101", "11010010101000101000101011000", "10110111010000110001111101110", "10111110011110111000100011010", "00100010011000101010101100111", "11111110101111110100001101101", "01001111000111100011101011100", "10010110010110000110101101000", "01100101101101000001100110101", "00001011010110110111101010110", "11101101001010110000000100001", "10110111000111110011101110101", "10110111101111101000000011000", "10010111111001011010111001010", "01101010110101011111001111111", "00100001010000010011100001010", "10011011000100001011110011011", "10000110000001000001011000000", "10001100011111110010001100011", "10111001011111110010110110001", "00000101101100100101000100111", "10010011111010111001110001110", "00010111101001111100010011101", "00111010001010000001101000010", "00000100100010010111101010011", "00111111010100001001010011111", "10010001101101100011001000101", "01010111110111101011001110000", "10101110110001001110000010100", "00000101101101100100011011100", "11100001101111000000110101110", "01010101001110101010111111111", "10111001011101111000000000111", "01011011101000001110110011100", "01001011011010111000000100110", "01100100000101110110010110010", "10011000010011111101011111101", "01000001010001110110110101110"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> initial = {"00010110101111101010101001111001010001011001", "00010110000100100110001111110011101100111011", "10111110011011011110010011100010001111000100", "00100100110010001101100100111011010101100011", "10001000011000010010011110111010101111111100", "11000000000101010100000011011011000100111110", "00101011001010100110100111101001110000110010", "10000001001101011111000001111110101101000111", "01010001000000000100001011011010001101101011", "01011110010000100000111010011101010011110100", "00111000001000101111000011000011001111001010", "00011010011101111101001001100100111011000011", "01010010111010001001100101101001111100001110", "01101111011001010110100101111100011111001101", "01011000010111110010010010111010111011001101", "11001000101111000101111011111100010111011100", "10011110101001110001101111001000110011010100", "10011100000100010101111000100001101100011010", "10010001001110010011101000001100010101111010", "01101011010110101110101100101000000110101001", "00100010110101111011111010111100101110011101", "10010100110110001101000111010000110011010010", "01010101011010110111100101011000010110101011", "00001110111010111101101010101110111100100000", "01000000010011010011000001100110101010101010", "11100110011001001011101010011000100000111110", "00111101100111010001100100000101000000110011", "11010111111100010101011101000111011010111111", "01010011100010011101010110000000110110000110", "11000011000111111011101111111111000101101101", "11000100110101011001111000011110010111001111", "10101100101011001001000100010100011001000111", "01100101111000010011100111101001101100010100", "01011010000101110101001111111110010010111100", "11100011101001011110001000000100001101110001", "11010001001000001111101111011100100100110001", "10101111011111100111001010110011000111101001", "10011101000111000101111001111001010010110101", "10010101010010000101111011000001100001100110", "00010000110111001110001111111100010001110001", "00101101010110010100000011000100101100010100", "01101100001101001101101001010110100101000110", "00001110010111101010100100100000001010100101", "01011110110011111011000111100011100100110100", "11110000101001000100100101011011010100101111", "01010000111000011100001111011110011001000001", "00000010111101000010001101100101101101111011", "11111101110110010101110000010010011010110011", "00110010011110110011100110001101011000011001"};
    int K = 18;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> initial = {"0101", "0001", "1011", "0101", "0000", "1110", "0010", "0111", "1101", "1110", "0110", "0011", "0110", "0100", "1011", "0001", "0100", "0111", "0001", "0000", "0011", "1001", "0111", "0101", "0110", "0100", "1100", "0100", "0010", "1100", "1011", "0010", "1000", "0010", "1100", "0100", "0001", "0110", "0011", "1111", "1011"};
    int K = 4;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> initial = {"101010010011010100", "110100010001101001", "010010010011100001", "100011101001010110", "111000111001100100", "000100111001101000", "110000101111000110", "010001110111111011", "101000001110110010", "001010001111011000", "100001111001000011", "101011110010101101", "110101110101110011", "100111000000011100", "000010110111011100", "101000100100011100", "111010001110100110", "101100111101100110", "000000111011100100", "010101111011000100", "111110110000110010", "100111001000111100", "010010110110110111", "011011011000101110", "100000011100011000", "111000011110100001", "001000100101000001", "000010011100100111", "101001001111001100", "011010001100110000", "001011000110101101", "011100100000000111", "011111001101000100", "101111101000111001", "000011101000001110", "100111101101111011", "110101110000001011", "010011100010100010", "001111010101010111", "100010101011100011", "000000101011100000"};
    int K = 3;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> initial = {"01010101100", "00111111111", "11000110000", "00010110000", "01101110011", "00011101110", "01001111111", "11100110101", "00100010110", "00111100000", "10010010110", "10100011001", "10001110000", "01101101100", "00101011011", "01001100101", "01011010001", "11001000010", "01000111010", "11101000100", "01101100111", "00000011111", "00001011000", "01011001011", "00101101011", "10100111111", "01100011001", "00001000110", "11101001110", "00000000011", "01100011101", "10111100101", "01011110110", "00010010110", "00101100011", "00100011010", "01011100100", "11110111101", "01011100100", "00010110101", "11111111100", "01011111111", "01011111011", "10001100001", "11110010111", "10001100000", "00100111010", "10001000000", "10010111111", "10100000011"};
    int K = 5;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> initial = {"110101100101101011110", "001111010111111101001", "010100100111011000001", "000011001000010100110", "100001101001010010100", "010110100011000101011", "000001110001100011001", "001000101011101110101", "001011000101001001000", "111110100000100000111", "011100010100011100111", "101111000011001001001", "011010010101010101010", "110000111010010001111", "001101010001010110010", "101001001111010101101", "111001110110011111000", "111000110101001101110", "101000000101101000110", "100101111011000011110", "100010101011110111110", "111010111011101111100", "110001001101100011000", "010100111001110101001", "100011101101101010010", "001111011101110011101", "100011110010110001100", "111010110010101000000", "001100010110111001001", "000100101101111101011", "100011110110010011001", "111101010000001000011", "011010111010111111011", "100110010001001111001", "010110010101010101001", "111000111111101001110", "111011011100010101000", "000110001100101010111", "011010000011011011000", "001101100110110011101", "001101000001101011111", "010010010101100111001", "110011011111101001110", "000011100011101110110", "101000100011101100100", "001000011111100000110"};
    int K = 15;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> initial = {"11011001101001001001111010101011110", "01101010010010000000110000110000011", "00010000101101001111011110000100010", "00110001011101110000000100001100000", "10111101001000101110110100011111101", "00110100010111000011001100111001110", "01110111001000011000111011011110101", "10100101010100100101000001000011001", "10111100101100110111001100101111001", "11001000000110101100000010110110001", "10000010110001111010010000101111111", "11000000000010001110110101000111010", "10111111110101101100001001011010000", "01110010101101011011100100100110000", "01000111111001001000111101010010011", "11000100100101000110101011001101000", "00101110001100110011100001100110110", "00101111011001001110010000000101111", "00101010010010111110010100110010110", "01100011110010011000111010100011011", "11111100111011101011101001100100011", "01111010110001001101110101011011100", "10111100000001100001100010011100000", "00101111100011110000010100100110010", "01010110100010001101101110110001100", "10101000111010010001101010010001011", "10110111001011111110000110010111000", "10111101011101110000011110101101111", "00100101110111011111001100110101000", "10010000100001010000000111011011110", "10100101011111111100100011100000111", "11000101101010010011110101101011111", "10101111101110110010100100111110010", "11000101100101100010010110100011110", "00110110110100101110110000110011001", "10000001000010011000010110000100010", "11000010010010101010001111010011101", "01000101100010100001110001100110101", "00000110100010101011011100011110000", "11011010100100000010010010100101011", "00011100010110011010011011000111100"};
    int K = 22;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"10000100010100000100111000000011101011000001001111", "11000001110101111101010100111010010010011001101100", "10011010100100101011101001010001100101110110011011", "01110001100100000011011101011110011001000111011111", "11101110010000011000000011111001101010100111100010", "10011000110011110101010011111001100001111111011101", "00001011011110110111011111111110010010001111011001", "01000000010000000010100101000000111000000110011111", "11110110101000101000000000111011001001001100111011", "00011000001111110011010100011010110010010001011111", "01101100011101100100100110001010110101000110000011", "10000100010011010010101001111110110010001001111110", "10000010100001101110010011100111101001000111110101", "11100000101010000000010001000110111010100111000100", "11010101010101001001011000100100010100111100100000", "10110111111010000111111100011111100011100000000000", "10011001111011001101110111001010100100100010011111", "11100110100111001001111010001000001100111011010010", "01101101110101110010011001100000111111111111000000", "11001110011000011011010011000011100010000110111010", "10000001000100010000000000101010111111000110001010", "00001101000010000010111101100010111101000111001010", "01001101110001000000011010100110111110000011101000", "11111101110001011011101001000011101101111000011001", "11010001101110101001110110011010100001111000100001", "11001101000110100100100110011001010001011110111111", "01101000111001010100001000100101100101011010101101", "01010010111101011101001111110000010010100101001010", "10100001011001010101000100111100011010000110110000", "01001100001101101111000000101001111101010011011010", "10100111010000100011100001001100000111011110011111", "10011001110110110011000000111001001001001100011001", "11110111111011100101101001001010010010001000101001", "01000101000110111011111101011010000010100011110111", "10011001000010010000111100011111001110111101010010", "00010011111101011000001000010100111010000101010101", "10010100010110010100101000011011001000101001000110", "01010001110110000011110001001100001000000010110100", "11011100100001100001101010001011001110011110110011", "10101000110001000111001001000101111010100001110001", "11000010011010010001100010101111100010111010001010", "01010011110010110011000010111100101100101010010001", "00001111011110111100010010001001100011101110100000", "00100010010001000111000111000000110111010101000111", "01001010001101101111011001010111001100000111011101", "01011000001100000000100100001110100000101101000010"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> initial = {"110010111110111110100111", "010000000111111101100110", "010110100111101011111100", "111001101000111001100110", "101100111101000110010011", "010101001100010111011111", "111011100000010010110001", "110010001111011011101011", "011100101101101000110011", "100001110100110110110010", "101101100011011010001110", "000011100000010011110111", "100001010000010101011110", "110110001010100001110001", "001111010001010100010010", "001000100101101111000110", "011100101010110101100000", "100101011101110000011100", "010100100110111011111000", "111010011111010001100110", "100001100001000101111010", "110001011111110110101111", "010000011000010000001000", "101001100001110110011011", "011001010011001011111110", "100001100101011010110000", "110100000111011110110011", "001111101111110100100111", "000001101111111110010000", "111010011101011101101011", "000100100110010100001101", "010001001111000111010110", "011110000100101100010000", "001001001100000101010100", "111111000100101010001011", "010101110011101110010111", "000100010111000111011100", "101101001101000001001110", "101101111111010000001111", "000110000101010011011010", "000011101010111001011111"};
    int K = 17;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> initial = {"101110111001010100110000110", "011110011010111100111110011", "010001000000110001000000000", "000110111010011110001100001", "010110101100111100110010110", "110100110100101001001010010", "000011101111110100010101011", "001001011110010111101000110", "100111001101010000001101011", "110101010110000100001110111", "100010101000000011100000111", "101100111010011001011010001", "100110101011100110010100011", "001001100010000010011001111", "000011000000111011101011101", "011011011101001100100111110", "000110100010010010011101010", "010100101000000101001110011", "111110011011111101111010011", "001110100111011101010101110", "010100001111110111101101010", "000111111100010111011111010", "001110110001100101000100110", "110100111011010110000001001", "101000010101011111001010000", "001110000000100110000010100", "010001000001000100011011101", "000011111000101100100111110", "001100100001000010100100010", "001011100100001001001000011", "000001001010010011101000010", "100101101011000010011001001", "011001111111101000001000011", "111000001110000000000010011", "011101001110000110011010011", "011110100111101000010100100", "000101111011101100101111000", "011011101111110110101001010", "001100001001001100001011111", "110100001100111010110110111", "001100001001100010111010101", "111011111100111100100100011", "000001011000111001100001110", "001111001001110110101000000", "100000010110101111110100101"};
    int K = 11;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> initial = {"0101011110111011100101100101101111111110010110010", "1101100001100000100010111111111001001100110111011", "1110011101110011100000000001000010111000000000100", "0001111011101101111111000010001110001100000000010", "0000110000111100101101010010010010010110111000000", "1011010110001000011110000011010101001100001110101", "0101110111001101010110000010111010101000110000011", "1000111100001011100111100101110100011011010000010", "0011110000011011100110111100111001110110010101000", "1011110111000010010100110110111101011000101110001", "1001000110001110000010110010011111101101011010101", "1011110111100110000011100010011110100101000110011", "1011000111100001100001001111101000001100101001101", "1001011000001111000011111110001101111010011010010", "1011101101111110001101100010101111100010111010111", "0000101110100101001111111010101001010000111001011", "0000001001011001011010010000110111011011110001001", "1000010010001011111001101010010011110110101110000", "1101101110100011101000100000100001010101101111001", "1101001111110100101100010011010111101100100111101", "1001100111100110101011110000000001111011011010111", "1010000011100101100100110110111000110111101101000", "0010011010111001111101000110000000100010000001011", "1010101100110111010000100100011001011010011001100", "0011011101001000011001101111010110100100111011101", "0100011101001010001101001011111000000000110001101", "1000001100010100101001010010010000110100001001001", "1000101010001101010001011111000101101000110010011", "1110101111110101101011011110110101000011110011011", "1101011100100010001010001001101110011111100100000", "0001100111000011110101110100000011100101101001110", "0111010111110101010101110010100010001000010111111", "0001110101101111001011000111011010001111101100110", "1111100110010011110110100101110101111101110001011", "0100001111011010010000111111110011111000100110000", "0000011011000110110000110000100001101010001011011", "0011001011001011001101011100101010111010110010101", "1010111011111100111010001110111010101100000101000", "0010101001000110010101101110111001111100001101010", "0001000001110100000101010110110010100100110011010", "1001000101101000101010001010100111111101001100010", "1111111110000100101001011000101100101001101001010", "0010001110010001010011000110110001101101000000000", "1011011001101110111111010000001000111100100010101", "1110011001001010101010001110000110101000100011111", "1110110011000111101111110000110011010100100010100", "0101101001100110011001100101101110100011011010010", "0111011111100011000100101101010110001111111101001", "1011110111000000100110000000001111011100000101111"};
    int K = 647;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> initial = {"0000101101000001100000111100111100100000010000110", "0110011000100101110011111011000010011100100110010", "0110100011001110111001111111110100000101101110010", "1011000001011001011110000010110100000110100110111", "0110001111100100111011001000000100110111101111100", "0101111011011010000000001110000110001101111100010", "1100000110101001010011011111000100001110101110011", "1001000110010100011011000001111000001000101111100", "1100010101011111111100000011000010100011001111111", "1110100101110001101110100111010110101101000110010", "1111110110100110010101010001101100011100001011000", "1010000001010000000011111000011110001000000111111", "0010111010000001001000111111001111101011000101110", "1101010011111100010110100111101001110000010011010", "0000100011100101011011000101011010101010110001011", "0010001110001100010100000101100010011011111000000", "1111111000010010010011111010001001100001111111001", "0001101001101111010101011110100111100111001000000", "1100111011010101111000000011110110110000110110010", "1001010101101001110000111101100010100000111010011", "0011001100010110100011010011101010011101011011100", "1010010111001001111010100111100110010000001111110", "1011111111100001011111010001101110100101100111000", "0101100010111010110110010111000111110110010010110", "0001001001001001100010111011010010011101110101111", "1010110011001000101011011101000100101010010010101", "1111000111111011101011010101101101010101000101011", "0100010000111100110010101101011010000011011110101", "0001011111110011011011010100111101011101010001000", "0111000101000110000100100110100100110010101111111", "1011110110111100011111001011110110000010100011000", "1100011110001000110100100001011011100100001111010", "0010001000100111001111000011100111000001001101101", "0100010000111101011010101111000011111011101010000", "0001010000011001011011010111110000110000001100011", "1111110111001001111010111111101101111110111010000", "1001110100101010000011110011101110111100111001010", "0100001100010110011101000001010000101011110101101", "1111011101000011010101100100011011100111000011100", "1011100111001011111000101110000101101111001011110", "1100001111110011101100111111010011111011010111110", "0111011110000100111110100100000101101000010001011", "1000100000111101111101011011100110000110110000111", "1000101100101010110100000011001111110010110100001", "1011101110110001000110001111101000101101110010011", "0001010011110100101101111000111010011111001000111", "0011011110010110100000110011101000111011011111001", "0110100000001011110011111010111100011000110001110", "0010011110010000111101000001111011001011100110111", "0011001110110010111001010110101010111000110010110"};
    int K = 699;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> initial = {"0100001111000110001100000010011000101010000011100", "1001110111010110000101110000100100101000111110000", "1001100011100011011011100001010101011101010101000", "1100100011110010111100110010111011111100010000100", "0110000000110001001011010110001110111101101100111", "1010100111111101110111000000100110000010111001101", "1011100010011110100111001001100011011101011110010", "0110001010100001101100110101000110000111110010011", "1100011111000001010011010010011010010111101101111", "1101001011010111100101001101110001001000001111110", "1101100010010110101100110000111001101110100101111", "1111001110010001000101000001010110010111110110010", "1101000010000111011011011111100111010100101111011", "1001110001100101000100001011010111010101111101001", "0101101110110111011000111111011011110100100111101", "0101101110010111001101001111101011101111101001000", "0111010101100010110101101001001011110010110001101", "1010111110011010101000110010001101110111011110111", "1111101010111101101011110110100111100101010001101", "1011000101010000111110010100001101011001011001110", "0110111110011100111111111110110111010110010100010", "0110010101101100100001100111011101011001011000000", "1001011011010010111001110111000001011010101011011", "1011011011001011011000100010010110110000000000100", "1000001011010010111110000000001111001001110100111", "1000111100111100000101101110111100101101010100110", "0001000010111110110101100100001101101000100110001", "0101111101111111110111001111101100100001101010001", "0000000100101011000001101110110111110100011100000", "0110001010000000000010111101000011011101111101100", "0011011011110100010011011101110001000110100010011", "1001110001111110111001010000001101111100000101011", "0010011000110001111111111000001110100010110000010", "1110001101000110100011010010000000110100000100110", "1100101111100001000100011010001011101000101100100", "1001001000001110010101000101101000011001100101011", "0110001101111010000001101000111000100100110000000", "0010001101010011110110011100011011110001011010101", "1000011000100011010100100001101110011000001010011", "0111100110011111011000011001001001011000000100111", "0111111101001010101010000010011001100001111010100", "0100000000100101101101111001101101010010100001011", "1101100110010111110011011101010001110001001011110", "0101001011010110000011100010000011011001101100001", "1000110000111101000111000010000001011101100000010", "0010000000110101101100110101101101100100010010100", "1001011010110101100110111000001010010111010101100", "0101100101010010101011001100001100001100100110110", "1011110000110010010010100110000101100100100011000"};
    int K = 900;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> initial = {"01101111100110110011001000101100111011010110100000", "11011011000001010100010011101000100110110111000110", "11000101001010100011010011101011001101100011010111", "00100110011110010001001010110110110110101001011010", "01001110100011000110101010100000100100111100011001", "11100110100100000111001011110110011100001010111010", "10010011101111011111110111110000010011001000011011", "01101100111110100101110010011110110110011111101010", "11001110100101101011110010010001111101010110100000", "01110101111110100111000101100000111101100101010000", "00010110111001101111111110111011101111100011101101", "01101001111110001111001011010100100010011111010111", "11010110111101101101110100111111110111010110100011", "10100100000011010101000111001110011110011000100110", "10111101101111011001000100011111110011111001100000", "10100001000110011010100011110000000111010011010001", "10110000101100100010000001000001010011111000100101", "01111011101010001111011111000011110101111100010110", "10011111110011001000000101100011110100001100011011", "01011101011000001010111111100111101101110110110010", "01010100000100010111001101101010011001101110101010", "11110000110101001011001110111101000000100011011010", "10100001101101011000001110010101011001110110100001", "11111001100011111010001100000010001111010000001111", "10100010101110110100111100000011110011001111111101", "11100100101111010011100010100100101100010000111111", "00001011100001111111011101010111011100001011110001", "10000110010101010101100100101001100111000001111001", "01100110001110110011100100010011100010010010000110", "00000000100100111100010100100111100010010000011100", "00000010110110011000100001110111001111110010011011", "11101111110011011010110000111100100111101001010111", "10000011111101101001111000010011101111111000000100", "10011101000000011111000010010110011100100011001011", "11110001001100111001111000100100001011000100110011", "00101100100111010000111111010000011110011111110011", "11011000111110000010100011110101011011111111010101", "00001101011001111111001000111110110111111100000010", "01010010100001100001101101101010000111011100000110", "10001111000100110101110000011000101100010111101001", "00000010100011001011001100010001010111101111111001", "11111010110011001001100011100110111100011010010011", "00111101100100000100011000110000001110001000001111", "00000010101010001101011011111101111010011001010001", "10011110101101010101010000100110010011110000101101", "01111111001101001110111011010000110110010100110110", "10000111000000011110101011011010010101111010011001", "10001010101110101011000011011000011001100010111000", "11110011101111100010010101101111101110100010110011", "01011011010000111110001001010011100000111010010100"};
    int K = 348;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> initial = {"00001001010011010000101010011110011001100010100110", "11010110011001111101110101010101111011010110101111", "10111101001111100101011001011011000111101110010001", "10010110010100110010101101011010100011000011011101", "10110010101010001001111101000101101100001010100011", "00000110001100100010000000110000010000111100011100", "11100011100011110011011000001001001001111010010101", "10010000010111000010110011101001100111011001101001", "01111111001101000101100001001000111100000011011111", "11101011010100101001111011001011000100001111101001", "10010110001111000110010011111110110001110011011000", "00100011011101001110010101111100011111011110111101", "00010001010110101101010100000110101001001101111101", "10011011000110100101101010101111100011010001011111", "00010110110101111110001001110101000100000110111110", "01010011010100110101000001010011000100001100010110", "00111111100001011001101010010110101001010011110101", "11110011010111100010011011001010011001100010011001", "11011000001000011000100100110011010111100100000000", "01111101011011011010011001111000100111001000001000", "10011001110100101010110010000010101000110100101101", "11010010101110011000110001000101010001000111110111", "10010111011110110010010101100011100111000001111011", "11011111111110010000001000010101000100001000100000", "10000011100111101010001101011110111011000101011111", "10001101011100110000101010101111000100111001101100", "00101001001001111010000000101101100111110111100011", "10010111001011111001010010000001110111101000011001", "00001100111101000100011111010111010101101000000000", "00100000001110101100010111000001010101010011010001", "10000010110010011010000101011110110101101100001011", "01010011001111110100001000111001111101010111110100", "11011100101110100001011101111101100101001011000110", "00011000101011111100111000101001001110001110100000", "11011100111110000101000100001110011111110000010110", "11110110100010100000110011100001011110110111101111", "01101110100011010101111010010001001000010101011010", "11000001000101110111010000100000011011001010110011", "01100101111111000001101100110000110001010010100110", "01000011110000101000001101010101111001110011110111", "01001010110111001010001011010101101111000000001000", "11110001101111100011110001110001010010101010111011", "10101011001110010001010101111101000100111010011100", "00100100110111000011100111000100010000111010001100", "11111010111010001000110010100001100100000100110100", "11010011010010001111010110010110110010001010100110", "00011010011110000001001011100001101101010010111011", "00101100010101010111000010110100100100111011011100", "11001111100110001111000111100000000111101110100101"};
    int K = 363;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> initial = {"010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100"};
    int K = 20;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> initial = {"010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100"};
    int K = 19;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> initial = {"010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100"};
    int K = 21;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> initial = {"010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100"};
    int K = 22;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100"};
    int K = 921;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> initial = {"010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100", "010100011111011010110010101011100000101100"};
    int K = 922;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> initial = {"11111110", "11101110", "11101110"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"11111110", "11101110", "11101110"};
    int K = 321;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> initial = {"11111110", "11101110", "11101110"};
    int K = 322;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> initial = {"11111110", "11101110", "11101110"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> initial = {"11111110", "11101110", "11101110"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> initial = {"0001100111001101011", "0011100101111001100", "1110111000010101110", "0100111101011010000", "1110111000010101110"};
    int K = 9;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> initial = {"0001100111001101011", "0011100101111001100", "1110111000010101110", "0100111101011010000", "1110111000010101110"};
    int K = 329;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> initial = {"0001100111001101011", "0011100101111001100", "1110111000010101110", "0100111101011010000", "1110111000010101110"};
    int K = 330;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> initial = {"0001100111001101011", "0011100101111001100", "1110111000010101110", "0100111101011010000", "1110111000010101110"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> initial = {"0001100111001101011", "0011100101111001100", "1110111000010101110", "0100111101011010000", "1110111000010101110"};
    int K = 8;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> initial = {"10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100"};
    int K = 15;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> initial = {"10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100"};
    int K = 335;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> initial = {"10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> initial = {"10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> initial = {"10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100", "10010111000101111011010111010110100"};
    int K = 14;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"10011000010000010011101001111111000001110100000010"};
    int K = 29;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> initial = {"10011000010000010011101001111111000001110100000010"};
    int K = 349;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> initial = {"10011000010000010011101001111111000001110100000010"};
    int K = 350;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"10011000010000010011101001111111000001110100000010"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"10011000010000010011101001111111000001110100000010"};
    int K = 28;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"100001000111011101101001"};
    int K = 12;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> initial = {"100001000111011101101001"};
    int K = 332;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> initial = {"100001000111011101101001"};
    int K = 333;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> initial = {"100001000111011101101001"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> initial = {"100001000111011101101001"};
    int K = 11;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> initial = {"111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010"};
    int K = 8;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> initial = {"111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010"};
    int K = 328;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> initial = {"111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010"};
    int K = 329;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> initial = {"111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "111110001001011010", "011011101000011110", "111110001001011010", "111110001001011010", "111110001001011010"};
    int K = 7;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "01111001101100100001010011011010001010111001001110", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00110100000011101101000110111101111101011111011000", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "00100001101101101100110111110011010110101100001101", "11001111101110100100011011000110000100101100000001"};
    int K = 28;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> initial = {"00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "01111001101100100001010011011010001010111001001110", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00110100000011101101000110111101111101011111011000", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "00100001101101101100110111110011010110101100001101", "11001111101110100100011011000110000100101100000001"};
    int K = 348;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> initial = {"00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "01111001101100100001010011011010001010111001001110", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00110100000011101101000110111101111101011111011000", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "00100001101101101100110111110011010110101100001101", "11001111101110100100011011000110000100101100000001"};
    int K = 349;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> initial = {"00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "01111001101100100001010011011010001010111001001110", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00110100000011101101000110111101111101011111011000", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "00100001101101101100110111110011010110101100001101", "11001111101110100100011011000110000100101100000001"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> initial = {"00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "01111001101100100001010011011010001010111001001110", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "01111001101100100001010011011010001010111001001110", "01101011001100010100101110010011011011100111101100", "00110100000011101101000110111101111101011111011000", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100001101101101100110111110011010110101100001101", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100001101101101100110111110011010110101100001101", "00100001101101101100110111110011010110101100001101", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "11001111101110100100011011000110000100101100000001", "00100000110100101100111110110001001001010000110011", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "01101011001100010100101110010011011011100111101100", "00100000110100101100111110110001001001010000110011", "00100001101101101100110111110011010110101100001101", "11001111101110100100011011000110000100101100000001"};
    int K = 27;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> initial = {"101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011"};
    int K = 9;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> initial = {"101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011"};
    int K = 329;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> initial = {"101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011"};
    int K = 330;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> initial = {"101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> initial = {"101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011", "101011001001001011"};
    int K = 8;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"111100101110110001100100100100011101101101000110"};
    int K = 23;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> initial = {"111100101110110001100100100100011101101101000110"};
    int K = 343;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> initial = {"111100101110110001100100100100011101101101000110"};
    int K = 344;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> initial = {"111100101110110001100100100100011101101101000110"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
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
    vector<string> initial = {"111100101110110001100100100100011101101101000110"};
    int K = 22;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> initial = {"0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0000000001110000101100100111011010011010001", "0110000111101001110001000110010100101000010"};
    int K = 22;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> initial = {"0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0000000001110000101100100111011010011010001", "0110000111101001110001000110010100101000010"};
    int K = 342;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> initial = {"0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0000000001110000101100100111011010011010001", "0110000111101001110001000110010100101000010"};
    int K = 343;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> initial = {"0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0000000001110000101100100111011010011010001", "0110000111101001110001000110010100101000010"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> initial = {"0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0100110000100111100100011111011000110010110", "0110000111101001110001000110010100101000010", "0110000111101001110001000110010100101000010", "0000000001110000101100100111011010011010001", "0110000111101001110001000110010100101000010"};
    int K = 21;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> initial = {"111", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "111", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> initial = {"111", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "111", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100"};
    int K = 320;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> initial = {"111", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "111", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100"};
    int K = 321;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> initial = {"111", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "111", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100", "100", "100", "100", "111", "100", "100", "100", "100", "100", "100", "100"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> initial = {"100111011101111001", "100101001011000111", "100111011101111001", "001111001000000110", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "001111001000000110", "100101001011000111", "001111001000000110", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001"};
    int K = 11;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> initial = {"100111011101111001", "100101001011000111", "100111011101111001", "001111001000000110", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "001111001000000110", "100101001011000111", "001111001000000110", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001"};
    int K = 331;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> initial = {"100111011101111001", "100101001011000111", "100111011101111001", "001111001000000110", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "001111001000000110", "100101001011000111", "001111001000000110", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001"};
    int K = 332;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> initial = {"100111011101111001", "100101001011000111", "100111011101111001", "001111001000000110", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "001111001000000110", "100101001011000111", "001111001000000110", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> initial = {"100111011101111001", "100101001011000111", "100111011101111001", "001111001000000110", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "100111011101111001", "001111001000000110", "100101001011000111", "100111011101111001", "100101001011000111", "100101001011000111", "100111011101111001", "001111001000000110", "100101001011000111", "001111001000000110", "001111001000000110", "100101001011000111", "100101001011000111", "100101001011000111", "100111011101111001"};
    int K = 10;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> initial = {"11111100", "01100010", "11111100", "10001110", "01100010", "10111110", "10111110", "10111110", "10001110", "11111100", "10111110", "11111100", "10001110", "11111100", "11111100", "10111110", "10001110", "10001110", "10001110", "11111100", "11111100", "10001110", "10101000", "10001110"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> initial = {"11111100", "01100010", "11111100", "10001110", "01100010", "10111110", "10111110", "10111110", "10001110", "11111100", "10111110", "11111100", "10001110", "11111100", "11111100", "10111110", "10001110", "10001110", "10001110", "11111100", "11111100", "10001110", "10101000", "10001110"};
    int K = 322;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> initial = {"11111100", "01100010", "11111100", "10001110", "01100010", "10111110", "10111110", "10111110", "10001110", "11111100", "10111110", "11111100", "10001110", "11111100", "11111100", "10111110", "10001110", "10001110", "10001110", "11111100", "11111100", "10001110", "10101000", "10001110"};
    int K = 323;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> initial = {"11111100", "01100010", "11111100", "10001110", "01100010", "10111110", "10111110", "10111110", "10001110", "11111100", "10111110", "11111100", "10001110", "11111100", "11111100", "10111110", "10001110", "10001110", "10001110", "11111100", "11111100", "10001110", "10101000", "10001110"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> initial = {"11111100", "01100010", "11111100", "10001110", "01100010", "10111110", "10111110", "10111110", "10001110", "11111100", "10111110", "11111100", "10001110", "11111100", "11111100", "10111110", "10001110", "10001110", "10001110", "11111100", "11111100", "10001110", "10101000", "10001110"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> initial = {"10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "11100000", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111", "10100101", "00000111", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111"};
    int K = 4;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> initial = {"10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "11100000", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111", "10100101", "00000111", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111"};
    int K = 324;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> initial = {"10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "11100000", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111", "10100101", "00000111", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111"};
    int K = 325;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> initial = {"10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "11100000", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111", "10100101", "00000111", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> initial = {"10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "11100000", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111", "10100101", "00000111", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "00000111", "10100101", "10101100", "10100101", "10100101", "10100101", "01111000", "10100101", "10100101", "10100101", "10100101", "10100101", "00000111"};
    int K = 3;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> initial = {"101", "101", "101", "101", "101"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> initial = {"101", "101", "101", "101", "101"};
    int K = 321;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> initial = {"101", "101", "101", "101", "101"};
    int K = 322;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> initial = {"101", "101", "101", "101", "101"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> initial = {"101", "101", "101", "101", "101"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> initial = {"0100011100011101100000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0110101000000111101000", "0100011100011101100000", "1001111000111011111001", "0000001011111001011110", "0110101000000111101000", "1110000100011010110110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "0110101000000111101000", "0110101000000111101000", "1001111000111011111001", "1110000100011010110110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001"};
    int K = 11;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> initial = {"0100011100011101100000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0110101000000111101000", "0100011100011101100000", "1001111000111011111001", "0000001011111001011110", "0110101000000111101000", "1110000100011010110110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "0110101000000111101000", "0110101000000111101000", "1001111000111011111001", "1110000100011010110110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001"};
    int K = 331;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> initial = {"0100011100011101100000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0110101000000111101000", "0100011100011101100000", "1001111000111011111001", "0000001011111001011110", "0110101000000111101000", "1110000100011010110110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "0110101000000111101000", "0110101000000111101000", "1001111000111011111001", "1110000100011010110110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001"};
    int K = 332;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> initial = {"0100011100011101100000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0110101000000111101000", "0100011100011101100000", "1001111000111011111001", "0000001011111001011110", "0110101000000111101000", "1110000100011010110110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "0110101000000111101000", "0110101000000111101000", "1001111000111011111001", "1110000100011010110110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> initial = {"0100011100011101100000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0110101000000111101000", "0100011100011101100000", "1001111000111011111001", "0000001011111001011110", "0110101000000111101000", "1110000100011010110110", "1001111000111011111001", "0110101000000111101000", "1001111000111011111001", "0110101000000111101000", "0110101000000111101000", "1001111000111011111001", "1110000100011010110110", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "1001111000111011111001", "0000001011111001011110", "0000001011111001011110", "0110101000000111101000", "1001111000111011111001", "1001111000111011111001"};
    int K = 10;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> initial = {"110101111110000", "110000100010110", "111111111001011", "110000100010110", "110000100010110", "011000111101101", "110000100010110", "110101111110000"};
    int K = 6;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> initial = {"110101111110000", "110000100010110", "111111111001011", "110000100010110", "110000100010110", "011000111101101", "110000100010110", "110101111110000"};
    int K = 326;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> initial = {"110101111110000", "110000100010110", "111111111001011", "110000100010110", "110000100010110", "011000111101101", "110000100010110", "110101111110000"};
    int K = 327;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> initial = {"110101111110000", "110000100010110", "111111111001011", "110000100010110", "110000100010110", "011000111101101", "110000100010110", "110101111110000"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> initial = {"110101111110000", "110000100010110", "111111111001011", "110000100010110", "110000100010110", "011000111101101", "110000100010110", "110101111110000"};
    int K = 5;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> initial = {"1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111001111110100001110111011000100111", "0001001110011101011000111000101111111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111"};
    int K = 13;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> initial = {"1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111001111110100001110111011000100111", "0001001110011101011000111000101111111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111"};
    int K = 333;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> initial = {"1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111001111110100001110111011000100111", "0001001110011101011000111000101111111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111"};
    int K = 334;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> initial = {"1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111001111110100001110111011000100111", "0001001110011101011000111000101111111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> initial = {"1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111001111110100001110111011000100111", "0001001110011101011000111000101111111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "1111001001000001011100011010011010101", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "1001000100100111011001100000011001010", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111", "1001000100100111011001100000011001010", "0001001110011101011000111000101111111", "0111010100011000111110111101011101111", "1111001001000001011100011010011010101", "0111010100011000111110111101011101111", "0111010100011000111110111101011101111"};
    int K = 12;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> initial = {"00011011011011101111010111111011001111101111000", "00001010000101010011101010011100100100011111111", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "01111101101110001000011101111111000001100111001", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000"};
    int K = 16;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> initial = {"00011011011011101111010111111011001111101111000", "00001010000101010011101010011100100100011111111", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "01111101101110001000011101111111000001100111001", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000"};
    int K = 336;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> initial = {"00011011011011101111010111111011001111101111000", "00001010000101010011101010011100100100011111111", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "01111101101110001000011101111111000001100111001", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000"};
    int K = 337;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> initial = {"00011011011011101111010111111011001111101111000", "00001010000101010011101010011100100100011111111", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "01111101101110001000011101111111000001100111001", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> initial = {"00011011011011101111010111111011001111101111000", "00001010000101010011101010011100100100011111111", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "01111101101110001000011101111111000001100111001", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000", "01111110000000011101001000011001100110011010011", "00011011011011101111010111111011001111101111000", "00011011011011101111010111111011001111101111000"};
    int K = 15;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> initial = {"001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "111011000000010010010001111110110101", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000"};
    int K = 21;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> initial = {"001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "111011000000010010010001111110110101", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000"};
    int K = 341;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> initial = {"001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "111011000000010010010001111110110101", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000"};
    int K = 342;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> initial = {"001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "111011000000010010010001111110110101", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> initial = {"001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001101010001001101100100110101110001", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "111011000000010010010001111110110101", "001101010001001101100100110101110001", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000", "001011011010110001101100010011000000"};
    int K = 20;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> initial = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int K = 881;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> initial = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int K = 480;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> initial = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int K = 881;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> initial = {"1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111"};
    int K = 881;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> initial = {"1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111"};
    int K = 480;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> initial = {"1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111", "1111111111111111111111111111111111111111111111111"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> initial = {"0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000"};
    int K = 881;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> initial = {"0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> initial = {"0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000", "0000000000000000000000000000000000000000000000000"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> initial = {"001", "101", "001", "000", "111", "001", "101", "111", "110", "000", "111", "010", "110", "001"};
    int K = 6;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> initial = {"00111101111110010110", "01101101001100001011", "01101100110000111100", "00010110110101100001", "01110100010100011000", "10111111011110000000", "11001101010100100101", "11000111100001111010", "00001100011001011100", "10011010011010100111", "11011110110101010000", "00101111001100000001", "00111111111101101010", "11010010110101110110", "10001111010000001011", "01001100000100011000", "11100010101000000111", "11101010100111111110", "11101111000001111111", "01100010101010111110", "11010110101010101001", "01001001000110011111", "00001111100010000001", "11101010100110010111", "01111111011011010000", "10000101110011011101", "00101110100001011011", "00011000010101100110", "10001111100010101011", "10000001011011011000", "10110101100111001001", "00101011111011101100", "11000100101000010101", "01001011001010011111", "10111010111111111110", "11111101001110110010", "00110000101111101111", "10100011100101000100", "10101010101110111110", "10011011111010001000", "00101101100101001110", "10001000001110111001", "00000001111001000000", "00001110011101101111", "11001010001100101000", "10010110010000010011", "10011101100101011000", "11100101010101001001", "01111110111010000101", "11111101100001011101"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> initial = {"01011101011100010110111010010111100101111111011100", "11000111011001000100100100011001100100001101110111", "11011011100101100001000010010001011001011110110011", "10011000010100111000010100010101000111110010011001", "11001101100100001010101101001110111010110101001010", "10110000010011001010001110101000011110010010100100", "11000100100111111010100010000010111110101100101010", "01100001101110010010010100000010011001001011101101", "10111011111110001000010110000111100010000111011101", "01010000001101111111011100011110010000011111000000", "11110000000000100110110110101110011100011111100001", "00011110111000110111100001001101011001010011010111", "10100111011000000101101110010111111110010001110110", "11111110011000011010100001011010100000010100100101", "10011010101011101001111011000010110011110001001011", "01010011010011011101011111000100001001000001000001", "11101000110001010101010110000011011111000111110010", "11110110010100110010101110010100010010011100101011", "00100110000111000111111011001011110011000010011100", "01010101111101010111010000000110010010010001011110", "11011000110001100011110100000000100110001111010011", "11001001101111110001101111111000001111111010010010", "01111111111001111010110100101011110111000101000110", "11110110100011101110101101111001101110101110110110", "00011100010000001001110010010011011011001100100110", "11110010110011010100000000001101000000111100010111", "00110111100110011100011100000110101001110100110011", "11100100101011010110010000001011110000100000000010", "11100000011110011001010001010100011111000100001111", "10001001001100111011000000010111111111101110101110", "11011111000011010011001100111011100011111000110001", "11010011100110011111011001001000010110110110101001", "01011110101100000011011010110100100001010101110100", "01110111110011111101011011101100011011110001011111", "00011110000010100011100011110100101110011110110000", "00000111101011110011101110110100010100101011110011", "11100100111101010101010100111100100111010111100001", "01111100001010100010001001101010000001111001101110", "01101000011101010100001110100010100111011010010110", "00010111010111110111001011101001111001100011010100", "00100001111000001011110110010111100100011110100111", "01001101110101001110001110110011011111101100000110", "11101000101000110101000001111100001111001101001101", "01010010111000001110001011011001000001001000011001", "01011001011000001101100010000010011101100111110010", "01011110100000001111110010001111000100001100110001", "11010000100100001000011010001010010000001001010111", "10111101001110101001101011001010110101000000100010", "01111010010101111011101011010111001111000011101001", "10111110001100110101001100001110111000000011101111"};
    int K = 31;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> initial = {"01", "10", "01", "01", "10"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> initial = {"001"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> initial = {"00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "10000000000000000000001010000000000100000000000110", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "00000000000000000000010100000000001000000000001101", "00000000000000000000000000000000000000000000000000", "00000000010000000000100000000001000000000001010000", "00000000000000000000000000000000000000000000000000", "00000001000000000010000000000100000000000101001000", "00000000000100000000000100000000000100000000000111", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "10000000000000000000001010000000000100000000000110", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "10000000000000000000001010000000000100000000000110", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "00000000000000000000010100000000001000000000001101", "00000000000000000000000000000000000000000000000000", "00000000010000000000100000000001000000000001010000", "00000000000000000000000000000000000000000000000000", "00000001000000000010000000000100000000000101001000", "00000000000100000000000100000000000100000000000111", "00000000001010100000000000010100000000000010100001", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000100000000000100000000000100000000000111", "00000000001010100000000000010100000000000010100001", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000100000000000100000000000100000000000111", "00000000001010100000000000010100000000000010100001", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000100000000000100000000000100000000000111", "00000000010101000000000000101000000000000101000010"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> initial = {"11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110", "11111111111111111111111011111111110111111111111110"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> initial = {"10010101000100001001010100111010100010101011110110", "10010101000100001001010100111010100010101011110110", "10010101000100001001010100111010100010101011110110", "10010101000100001001110101111010100010101011110110", "11110101000100001001010100111010100010101011110111"};
    int K = 63;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> initial = {"01000010010100101001010000100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001111110100101001", "01001010010100101001010010100101001010010100101001", "01001010110100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010110100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010000100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010011100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001000010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001000010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001", "01001010010100101001010010100101001010010100101001"};
    int K = 988;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> initial = {"000", "000", "011"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> initial = {"101010"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> initial = {"0000"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> initial = {"10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101000101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010111010101010", "01010101010101010101010101010101010101010101010101", "10101010101110101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010000000000010101010101010101010", "10101010101010101011101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010100010101010101010", "10101010000000001010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "00101010101010101010101010101010101010101010101010", "10101010101010101010000010101010101010101010101010", "00101010011010101010001010101010101010101010101010", "10101010101011101010101010101010101010101010101010", "10101010101010111110101010101010101010101010101010", "00101010101010101010101010001010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010001010101010101010", "11111111111111111111111111111111111111111111111111", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101000101010101000101010101010101010101010", "10101010100000001010101010101010101010101010101010", "10101010001010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "00101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "00000000000000000000000000010000000000000000000000", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010001010101010101010101010", "10101010001010101010101010101010101010101010101010", "10101010101010101010111010101010111110101010101010", "10101010101111111010101010101010101010101010101010", "10101010101010101010101010101010101010101010101000", "10101010101010101010101010101010101010101010101010"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> initial = {"00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "10000000000000000000001010000000000100000000000110", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "00000000000000000000010100000000001000000000001101", "00000000000000000000000000000000000000000000000000", "00000000010000000000100000000001000000000001010000", "00000000000000000000000000000000000000000000000000", "00000001000000000010000000000100000000000101001000", "00000000000100000000000100000000000100000000000111", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "10000000000000000000001010000000000100000000000110", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "10000000000000000000001010000000000100000000000110", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000000000000000000000010000001000101010000", "00000000000000000000110000000000100000000001000000", "00000000000000000000000000000011000000000011010111", "00000000000000000000010100000000001000000000001101", "00000000000000000000000000000000000000000000000000", "00000000010000000000100000000001000000000001010000", "00000000000000000000000000000000000000000000000000", "00000001000000000010000000000100000000000101001000", "00000000000100000000000100000000000100000000000111", "00000000001010100000000000010100000000000010100001", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000100000000000100000000000100000000000111", "00000000001010100000000000010100000000000010100001", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000100000000000100000000000100000000000111", "00000000001010100000000000010100000000000010100001", "00000000000000000000000000000000000000000000000000", "00000000000100000000001000000000010000000000010100", "00000000000100000000000100000000000100000000000111", "00000000010101000000000000101000000000000101000010"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> initial = {"1"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> initial = {"111000"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> initial = {"010111000110011111011111111101001111001010111", "001110101001111110101101110010101100111111110", "101001100111101010011101101101010101110111101", "110010100010010100010101000101000100000001101", "110100010000101101110111011011101101010111110", "101001000010101101000011111001101100110101110", "111111110011011001011110110100011111111010110", "100100101001100101111010100110011001110010000", "000101111101000110100010010100010101000111011", "001101001010001110001111101010011011110101110"};
    int K = 987;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> initial = {"10000000000000011111000000000000000000", "01000000000000000000000000000000000000", "00100000000000000000011100000000000000", "00001000000000000000000000001110000000", "00000000000000000011110000000000000000", "00000000000000000000000000000001111100", "00001111000000000000000000000000000000"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> initial = {"11001000001111111010100100100110101011101101101110", "10011111100100000000010100011011000000100101100011", "11100010101100011110001011101000100011111111111010", "00001001010101011100100001010010110000110101110110", "10110110010001101111110100000001101100000101011001", "00010000111000100111100110001110111101010011001011", "01001101101001111011110111100100100101011111000110", "10001000111010010110001101000011010110000001101101", "10100100110111101011101111000000101000111001100010", "11000010011000100100010101100100111011101000101111", "00000011111000010101010011100110101011100010101010", "00110001011111001010111111100110000011011111101010", "01111110001100111010010100101111001100010101100010", "01110010110110100011010111100110111110101111100101", "00101000110111010110001110000111100100101110001011", "10101000110001011111011101101111110000100000110001", "01101011001110010011111001001100000011010011100100", "00000111011110000011000010101000111000000110101101", "10010001110101111100110100101001111111001011110100", "00100001111100101001101011000011011111010100110001", "10101100000110001010110101101100001110000100010001", "00101010001011010010000100001110010000010000110101", "01010011010001011010000001011111100010101011010110", "10101000111110110000110100000010011111111100110010", "10111100010000010001100001000101111100101001000101", "01100010100010100011101010100001000100111010010101", "01101101010111100101001111110000101100010111111100", "00010010101000000101110110000110101111001000001001", "01100001000010100111111000110110001100100111100101", "00011101100101111101000001011100001011010001110011", "00010100010100001001001011011100001010111100110110", "01100111001000111001100111110001100110011111000011", "10110111001001000111111011000110001000110111011001", "01111001001001011010100001111101111001111011011001", "10110010110100001001001010101100000100110100111100", "11100101010101111010001001001111101111101110011101", "00011000110101001111110110010011101000101010001000", "00010001101001101010101100101010000010001111101111", "11011110110000110010110100101000111011101001101011", "10011111101101100001001100111011111111011001111010", "00011000100110010110001110010111100010001101000101", "10011110101011110101100011001001110001110111111101", "11001111100001101110110101101110000100100110101000", "01111110110111010100010110110110110101011110100011", "11010101100101001010000110100100011111010011100101", "01001000101101011110010111001000010101000010011110", "00000110011001111011100110000110100110110111001011", "00111101010111101110111001111111010001010010000110", "11010000011100011101011010111101001010111111010111", "10101101001010010101001101010010111000101100000110"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> initial = {"000", "001", "001", "110"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int K = 50;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> initial = {"11", "00"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> initial = {"0001", "0001"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> initial = {"11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000", "11111000001111100000111110000011111000001111100000"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> initial = {"10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010", "10101010101010101010101010101010101010101010101010"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> initial = {"01010101010101010101010101010101010101010110100111", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000110000000000000"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> initial = {"001", "001", "110"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> initial = {"101", "101", "010", "010", "010"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> initial = {"000"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> initial = {"100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010", "100010101010010101010101010101010101101010"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> initial = {"001", "101", "001", "000", "111", "001", "101", "111", "110", "000", "111", "010", "110", "001"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> initial = {"00"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000001", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000011", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int K = 975;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> initial = {"0101010", "0101010", "0111010"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> initial = {"0100", "0100", "0100"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> initial = {"010", "101", "010"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> initial = {"0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010101", "0101010101010101010101010101010101010111", "0101010101010101010101010101010101010101", "1101010101010101010101010101010101010101", "1101010101010101010101010101010101010101"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> initial = {"111111"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> initial = {"1000", "1000", "0111"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> initial = {"0101010101010101010101010101010101010101010101010", "1010101010101010101010101010101010101010101010101", "1010101010101010101010101010101010101010101010101", "0101010101010101010101010101010101010101010101010", "1010101010101010101010101010101010101010101010101", "1010101010101010101010101010101010101010101010101", "0101010101010101010101010101010101010101010101010", "1010101010101010101010101010101010101010101010101", "0101010101010101010101010101010101010101010101010", "1010101010101010101010101010101010101010101010101", "0101010101010101010101010101010101010101010101010", "1010101010101010101010101010101010101010101010101", "1010101010101010101010101010101010101010101010101", "1010101010101010101010101010101010101010101010101", "0101010101010101010101010101010101010101010101010"};
    int K = 977;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int K = 998;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> initial = {"10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "10010100101001010010100101001010010100101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010", "01010100101001010010100101001010010111101001010010"};
    int K = 812;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> initial = {"010", "010", "101"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> initial = {"111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "111111111111111111111111111111111111111111111111"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> initial = {"101010", "101010", "101010"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> initial = {"10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010010101011010100101101101010101010101010101010", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "10010101101010101010101010101010101011010111011011", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000", "11011001010101010101110110101001111111101010101000"};
    int K = 50;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> initial = {"1010"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> initial = {"00001", "11110", "00001", "00001", "00001"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> initial = {"00000", "00000", "00000", "00000"};
    int K = 3;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> initial = {"01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010", "01010101010101010101010101010101010101010101010101", "10101010101010101010101010101010101010101010101010"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> initial = {"000000", "000000", "000000", "000000", "000000", "000000"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> initial = {"00000"};
    int K = 3;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> initial = {"010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001", "010010010101010010101010101101100000010110101001"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> initial = {"000", "000"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> initial = {"111", "111", "111"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> initial = {"0000000111", "0000000111", "0001111111"};
    int K = 5;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> initial = {"10001"};
    int K = 5;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> initial = {"000", "000", "000", "001", "001", "110"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> initial = {"000000", "111111", "111111", "111111"};
    int K = 6;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> initial = {"100", "010", "011"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> initial = {"011", "100", "110"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> initial = {"011", "101", "001", "110", "010"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> initial = {"01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "01010010100101001010010100101001010010100101001010", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "10101101011010110101101011010110101101011010110101", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100", "00100001000010000100001000010000100001000010000100"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<string> initial = {"10101101011010110101101011010110101101011010110101", "11111111111111111111111111111111111111111111111111", "00000000000000000000000000000000000000000000000000", "10111010011011101001101110100110111010011011101001", "10000000111000000011100000001110000000111000000011", "11100111001110011100111001110011100111001110011100", "00110011000011001100001100110000110011000011001100", "11111111111111111111111111111111111111111111111111", "00000111110000011111000001111100000111110000011111", "11100010101110001010111000101011100010101110001010", "00101001010010100101001010010100101001010010100101", "10101101011010110101101011010110101101011010110101", "11111111111111111111111111111111111111111111111111", "00000000000000000000000000000000000000000000000000", "10111010011011101001101110100110111010011011101001", "10000000111000000011100000001110000000111000000011", "11100111001110011100111001110011100111001110011100", "00110011000011001100001100110000110011000011001100", "11111111111111111111111111111111111111111111111111", "00000111110000011111000001111100000111110000011111", "11100010101110001010111000101011100010101110001010", "00101001010010100101001010010100101001010010100101", "10101101011010110101101011010110101101011010110101", "11111111111111111111111111111111111111111111111111", "00000000000000000000000000000000000000000000000000", "10111010011011101001101110100110111010011011101001", "10000000111000000011100000001110000000111000000011", "11100111001110011100111001110011100111001110011100", "00110011000011001100001100110000110011000011001100", "11111111111111111111111111111111111111111111111111", "00000111110000011111000001111100000111110000011111", "11100010101110001010111000101011100010101110001010", "00101001010010100101001010010100101001010010100101", "10101101011010110101101011010110101101011010110101", "11111111111111111111111111111111111111111111111111", "00000000000000000000000000000000000000000000000000", "10111010011011101001101110100110111010011011101001", "10000000111000000011100000001110000000111000000011", "11100111001110011100111001110011100111001110011100", "00110011000011001100001100110000110011000011001100", "11111111111111111111111111111111111111111111111111", "00000111110000011111000001111100000111110000011111", "11100010101110001010111000101011100010101110001010", "00101001010010100101001010010100101001010010100101"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<string> initial = {"00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000", "00000000000000000000000000000000000000"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<string> initial = {"1000001"};
    int K = 7;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<string> initial = {"0000", "0000"};
    int K = 0;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<string> initial = {"1110", "1110", "1110", "0111", "0011", "0011", "0111", "0101", "0101"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<string> initial = {"1100100000111111101010010010011010101110110110", "1110100111111001000000000101000110110000001001", "0110001111100010101100011110001011101000100011", "1111111110100000100101010101110010000101001011", "0000110101110110101101100100011011111101000000", "0110110000010101100100010000111000100111100110", "0011101111010100110010110100110110100111101111", "0111100100100101011111000110100010001110100101", "1000110100001101011000000110110110100100110111", "1010111011110000001010001110011000101100001001", "1000100100010101100100111011101000101111000000", "1111100001010101001110011010101110001010101000", "1100010111110010101111111001100000110111111010", "1001111110001100111010010100101111001100010101", "1000100111001011011010001101011110011011111010", "1111100101001010001101110101100011100001111001", "0010111000101110101000110001011111011101101111", "1100001000001100010110101100111001001111100100", "1100000011010011100100000001110111100000110000", "1010100011100000011010110110010001110101111100", "1101001010011111110010111101000010000111110010", "1001101011000011011111010100110001101011000001", "1000101011010110110000111000010001000100101010", "0010110100100001000011100100000100001101010101", "0011010001011010000001011111100010101011010110", "1010100011111011000011010000001001111111110011", "0010101111000100000100011000010001011111001010", "0100010101100010100010100011101010100001000100", "1110100101010110110101011110010100111111000010", "1100010111111100000100101010000001011101100001", "1010111100100000100101100001000010100111111000", "1101100011001001111001010001110110010111110100", "0001011100001011010001110011000101000101000010", "0100101101110000101011110011011001100111001000", "1110011001111100011001100111110000111011011100", "1001000111111011000110001000110111011001011110", "0100100101101010000111110111100111101101100110", "1100101101000010010010101011000001001101001111", "0011100101010101111010001001001111101111101110", "0111010001100011010100111111011001001110100010", "1010001000000100011010011010101011001010100000", "1000111110111111011110110000110010110100101000", "1110111010011010111001111110110110000100110011", "1011111111011001111010000110001001100101100011", "1001011110001000110100010110011110101011110101", "1000110010011100011101111111011100111110000110"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<string> initial = {"11111111111111111111111111111111111111111111111100", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "00111111111111111111111111111111111111111111111111", "00111111111111111111111111111111111111111111111111"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<string> initial = {"01010101110101010111010101011101010101110101010111", "01110111111010101011010101010101010101111101110000", "00000000000001111000000000000110110110110000101010", "10101010101010101010101010101010101010101010101010", "11111111111111111111111111111111111111100000000000", "00000000000000010000000000100000000000000011100000", "00000000000000000000000000000000000000000000000000", "11111111111111111111011111111111111111111111111110", "10001111111110101010010100111111000010101101110000", "00001011000111111111111111111111111111110011011111", "01010101110101010111010101011101010101110101010111", "01110111111010101011010101010101010101111101110000", "00000000000001111000000000000110110110110000101010", "10101010101010101010101010101010101010101010101010", "11111111111111111111111111111111111111100000000000", "00000000000000010000000000100000000000000011100000", "00000000000000000000000000000000000000000000000000", "11111111111111111111011111111111111111111111111110", "10001111111110101010010100111111000010101101110000", "00001011000111111111111111111111111111110011011111", "01010101110101010111010101011101010101110101010111", "01110111111010101011010101010101010101111101110000", "00000000000001111000000000000110110110110000101010", "10101010101010101010101010101010101010101010101010", "11111111111111111111111111111111111111100000000000", "00000000000000010000000000100000000000000011100000", "00000000000000000000000000000000000000000000000000", "11111111111111111111011111111111111111111111111110", "10001111111110101010010100111111000010101101110000", "00001011000111111111111111111111111111110011011111", "01010101110101010111010101011101010101110101010111", "01110111111010101011010101010101010101111101110000", "00000000000001111000000000000110110110110000101010", "10101010101010101010101010101010101010101010101010", "11111111111111111111111111111111111111100000000000", "00000000000000010000000000100000000000000011100000", "00000000000000000000000000000000000000000000000000", "11111111111111111111011111111111111111111111111110", "10001111111110101010010100111111000010101101110000", "00001011000111111111111111111111111111110011011111", "01010101110101010111010101011101010101110101010111", "01110111111010101011010101010101010101111101110000", "00000000000001111000000000000110110110110000101010", "10101010101010101010101010101010101010101010101010", "11111111111111111111111111111111111111100000000000", "00000000000000010000000000100000000000000011100000", "00000000000000000000000000000000000000000000000000", "11111111111111111111011111111111111111111111111110", "10001111111110101010010100111111000010101101110000", "00001011000111111111111111111111111111110011011111"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<string> initial = {"11111"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<string> initial = {"1000", "1000", "0111"};
    int K = 3;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<string> initial = {"000000"};
    int K = 4;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<string> initial = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000001"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<string> initial = {"0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101110101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010111101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101110101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010101010101101001011010011010010", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101", "0101010101010101010100101010101010101010101010101"};
    int K = 1000;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<string> initial = {"100", "100", "011", "011"};
    int K = 2;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<string> initial = {"111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111", "111111111111111111111111111111110111111", "111111111111111111111111111111111111111", "111111111111111111111111111111111111111"};
    int K = 999;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<string> initial = {"01", "10", "10"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<string> initial = {"011", "100", "100"};
    int K = 1;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<string> initial = {"1010111101010001010111011100100100010001000010"};
    int K = 998;
    LampsGrid* pObj = new LampsGrid();
    clock_t start = clock();
    int result = pObj->mostLit(initial, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=13694&pm=10154
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <ctime> 
#include <iostream> 
#include <map> 
#include <set> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
 
struct LampsGrid { 
   int mostLit( vector <string> initial, int K ) { // caret here 
      int res = 0; 
      for ( int i=0; i<(int)initial.size(); ++i ) { 
         int zeros = count(initial[i].begin(), initial[i].end(), '0'); 
         if ( zeros%2 == K%2 && zeros <= K ) { 
            res = max( res, count(initial.begin(), initial.end(), initial[i]) ); 
         } 
      } 
      return res; 
   } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/