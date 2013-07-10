/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2309
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

class LunchScheduler {
public:
    int getOverlap(vector<string> M);
};

int LunchScheduler::getOverlap(vector<string> M) {
    int ret;
    return ret;
}


int test0() {
    vector<string> M = {"0110", "1010", "1100", "0000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"011111", "101111", "110111", "111011", "111101", "111110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> M = {"01000000", "10000000", "00000000", "00000000", "00000000", "00000000", "00000001", "00000010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"011011010", "101000111", "110010110", "000001101", "101001000", "100110101", "011101010", "111000100", "010101000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> M = {"00001000", "00000011", "00011000", "00100110", "10100000", "00010001", "01010000", "01000100"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> M = {"000001", "000000", "000010", "000000", "001000", "100000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> M = {"0001001", "0010000", "0100001", "1000100", "0001000", "0000000", "1010000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"0000010", "0000010", "0000010", "0000000", "0000000", "1110000", "0000000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> M = {"001010", "000100", "100001", "010000", "100001", "001010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> M = {"000000010", "000000011", "000101000", "001010000", "000100000", "001000000", "000000000", "110000000", "010000000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> M = {"000110001", "001111011", "010010000", "110001111", "111000101", "010100100", "000111000", "010100001", "110110010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> M = {"0010000", "0000011", "1000110", "0000111", "0011000", "0111000", "0101000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> M = {"000011111", "001101100", "010000111", "010011010", "100101110", "110110110", "111011001", "101111000", "101000100"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> M = {"01110101", "10011111", "10011110", "11101110", "01110111", "11111011", "01111101", "11001110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> M = {"001011", "001000", "110111", "001001", "101001", "101110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> M = {"00101111", "00010110", "10000011", "01001010", "10010001", "11000010", "11110101", "10101010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"0111000", "1001000", "1000110", "1100100", "0011010", "0010100", "0000000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> M = {"01110100", "10100011", "11010101", "10100111", "00000110", "10111000", "01011000", "01110000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> M = {"0110101", "1000000", "1000000", "0000001", "1000011", "0000101", "1001110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> M = {"0001011", "0001010", "0000000", "1100100", "0001001", "1100000", "1000100"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> M = {"001100", "000010", "100101", "101011", "010101", "001110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> M = {"00000001", "00101001", "01010000", "00101000", "01010011", "00000000", "00001000", "11001000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> M = {"0000000", "0000100", "0000001", "0000000", "0100000", "0000000", "0010000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"010100", "100110", "000100", "111010", "010101", "000010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> M = {"01000110", "10011110", "00011111", "01101000", "01110101", "11101001", "11100001", "00101110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> M = {"011110", "101010", "110011", "100011", "111101", "001110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> M = {"00010100", "00000111", "00011100", "10101010", "00110000", "11100000", "01010000", "01000000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"000000001", "001000100", "010010001", "000000001", "001001000", "000010100", "010001000", "000000000", "101100000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> M = {"010111", "101000", "010111", "101000", "101001", "101010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"0011111", "0010011", "1100011", "1000111", "1001000", "1111001", "1111010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> M = {"00100000", "00000100", "10000000", "00000001", "00000000", "01000000", "00000000", "00010000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"011100", "100111", "100111", "111000", "011000", "011000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"0010000", "0000010", "1000000", "0000010", "0000000", "0101001", "0000010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"01111111", "10111101", "11011101", "11100111", "11100101", "11111011", "10010100", "11111100"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> M = {"011101", "101110", "110001", "110011", "010101", "101110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> M = {"0001000", "0010001", "0101010", "1010001", "0000010", "0010101", "0101010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"00000000", "00000001", "00000000", "00000010", "00000000", "00000000", "00010000", "01000000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> M = {"000110000", "000000011", "000000111", "100000101", "100000011", "000000101", "001101010", "011010101", "011111010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> M = {"000001000", "000000010", "000000000", "000011001", "000100000", "100100010", "000000001", "010001000", "000100100"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> M = {"000001001", "000000000", "000100000", "001000010", "000000010", "100000010", "000000000", "000111000", "100000000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"011111", "101111", "110111", "111011", "111101", "111110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"00001100", "00011101", "00011010", "01101001", "11110100", "11001011", "00100101", "01010110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> M = {"00000101", "00011101", "00010111", "01101001", "01010000", "11100000", "00100000", "11110000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> M = {"000011", "000000", "000001", "000000", "100000", "101000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"010011", "100010", "000101", "001011", "110101", "101110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> M = {"00000000", "00001000", "00000000", "00000000", "01000000", "00000000", "00000000", "00000000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"0011010", "0011000", "1101100", "1110101", "0011011", "1000101", "0001110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> M = {"011111", "101101", "110011", "110011", "101101", "111110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> M = {"010101", "101100", "010000", "110000", "000000", "100000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"000011", "001010", "010101", "001010", "110101", "101010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> M = {"0111110", "1000111", "1001101", "1010111", "1111011", "1101101", "0111110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> M = {"000011110", "001010010", "010100000", "001010000", "110100001", "100000010", "100000000", "110001001", "000010010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> M = {"0011110", "0010000", "1100110", "1000111", "1011000", "1011000", "0001000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> M = {"01010100", "10110111", "01001111", "11001011", "00110111", "11101011", "01111101", "01111110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> M = {"0001010", "0001111", "0000101", "1100101", "0111011", "1100101", "0111110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> M = {"00100011", "00001110", "10001011", "00000101", "01100000", "01010000", "11100000", "10110000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> M = {"0111011", "1011111", "1101000", "1110111", "0101010", "1101101", "1101010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> M = {"01001110", "10001111", "00010101", "00101101", "11010111", "11111011", "11001101", "01111110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"01110010", "10011101", "10010000", "11100100", "01000010", "01010000", "10001001", "01000010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> M = {"000000000", "000000000", "000001100", "000000000", "000001000", "001010000", "001000001", "000000000", "000000100"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> M = {"0110001", "1010001", "1101000", "0010100", "0001010", "0000101", "1100010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> M = {"00", "00"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> M = {"000", "000", "000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
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
    vector<string> M = {"011011010", "101000111", "110010110", "000001101", "101001000", "100110101", "011101010", "111000100", "010101000"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> M = {"0111", "1011", "1100", "1100"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> M = {"0111111", "1011000", "1100000", "1100100", "1001000", "1000001", "1000010"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> M = {"010000100", "100110001", "000110011", "011010110", "011100111", "000000011", "100110011", "001111101", "011011110"};
    LunchScheduler* pObj = new LunchScheduler();
    clock_t start = clock();
    int result = pObj->getOverlap(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152340&rd=4730&pm=2309
********************************************************************************
using namespace std;
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
typedef long long I64;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<I64> VI64;
typedef unsigned uint;
typedef const char cchar;
typedef pair<int,int> pii;
#define FOR(i,n) for(int i=0;i<(n);i++)
#define FORR(i,a,b) for(int i=(a);i<=(b);i++)
#define VAR(a,b) __typeof(b) a=b
#define FORIT(it,c) for(VAR(it,(c).begin());it!=(c).end();it++)
#define ALL(x) (x).begin(),(x).end()
#define UNIQ(x) (x).erase(unique(ALL(x)),(x).end())
 
struct LunchSchedulerImpl {
    vector <string> M;
    LunchSchedulerImpl(vector <string> _M) {
        M = _M;
    }
 
    int getOverlap() {
        VI ev;
        int n = M.size();
        FOR(i,n) { ev.push_back(i); }
        sort(ALL(ev));
        int best = n;
        do {
            int most = 0;
            int here = 0;
            int needed[10];
            memset(needed,0,sizeof(needed));
            FOR(i,n) FOR(j,n) {
                if(M[i][j] == '1')
                    needed[i] |= (1<<j);
            }
            FOR(i,n) {
                int arr = ev[i];
                int np = 1;
                needed[arr] &= ~here;
                if(here) {
                    FOR(j,n) if(here & (1<<j)) {
                        np++;
                        needed[j] &= ~(1<<arr);
                        if(!needed[j])
                            here &= ~(1<<j);
                    }
                }
                if(needed[arr])
                    here |= (1<<arr);
                most >?= np;
            }
            best <?= most;
        } while(next_permutation(ALL(ev)));
 
        return best;
    };
};
 
 
struct LunchScheduler {
    int getOverlap(vector <string> M) {
        LunchSchedulerImpl impl(M);
        return impl.getOverlap();
    }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/