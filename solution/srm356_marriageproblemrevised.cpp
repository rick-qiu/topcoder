/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6608
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

class MarriageProblemRevised {
public:
    int neededMarriages(vector<string> preferences);
};

int MarriageProblemRevised::neededMarriages(vector<string> preferences) {
    int ret;
    return ret;
}


int test0() {
    vector<string> preferences = {"111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> preferences = {"100", "010", "001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> preferences = {"00", "00"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> preferences = {"0001", "0001", "0001", "1111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"11101011", "00011110", "11100100", "01010000", "01000010", "10100011", "01110110", "10111111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"1", "1", "1", "0", "1", "0", "1", "1"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"11110", "11111", "01000", "11111", "11011", "10001", "11111", "11010"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> preferences = {"01111100", "11011111", "10110101", "10111110", "11011110"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> preferences = {"100111", "001101", "000011", "001110", "111001", "100001", "010001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"111111101", "011111111", "101101111", "111111111", "111111011"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"0"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> preferences = {"0", "1", "1", "1", "1", "1", "1", "1"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> preferences = {"111", "111", "111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> preferences = {"1010100", "0110110", "1001110", "1011111", "0001010", "1000000", "0010000", "1100010", "1110100", "0111001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> preferences = {"1100100", "1100001", "1111100", "1111011", "1111001", "1011110", "1100111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> preferences = {"01011000110", "00110111010", "00001000101", "10001110110"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"01001", "00101", "11100", "11110", "11100", "10011"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"011111101111", "011111100111", "101110011001", "110111111111", "101110110110"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> preferences = {"0010110111", "1110000111", "0101001111", "1011010101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"1011101", "1011111", "0111110", "1010110", "1011110", "0111001", "0111111", "1011111", "1000010"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"00010000", "00000000", "00000010", "00000000", "10000001", "00001000", "00000000", "00000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"011000000010", "000110000010", "011001101000", "000000000000", "000000000000", "001000010001", "010010000000", "100100010000", "000000000110", "000000010000", "001010000000", "001010100000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> preferences = {"001000000000", "100100100001", "000000000000", "000000000000", "000000000000", "000000100000", "000010000000", "000000001000", "001000010101", "000011100001", "000010000000", "010000011000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> preferences = {"001000011000", "000000000000", "000000000000", "000010000000", "000000000000", "000000000000", "000000000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"010100000000", "000000000000", "000000000000", "000000000000", "000000000000", "010000000000", "000000000000", "000000000000", "000000001000", "000000000000", "000000000000", "000000000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> preferences = {"0000000", "0010000", "0000000", "0000000", "0000000", "0000000", "1000000", "0000000", "0000000", "0000011", "0100000", "0000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> preferences = {"000100000000", "000000000010", "000000001000", "000100001000", "000000000000", "000000000000", "000000000000", "000000000010", "000000000000", "000000100000", "010000000000", "000000000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"011000000010", "000110000010", "011001101000", "000000000000", "000000000000", "001000010001", "010010000000", "100100010000", "000000000110", "000000010000", "001010000000", "001010100000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"001000000000", "100100100001", "000000000000", "000000000000", "000000000000", "000000100000", "000010000000", "000000001000", "001000010101", "000011100001", "000010000000", "010000011000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"001000011000", "000000000000", "000000000000", "000010000000", "000000000000", "000000000000", "000000000000", "000000010000", "000001000000", "100000000000", "000000000010", "000000000100"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"000000000100", "000000001000", "000000110100", "000010000000", "000000000000", "000000000000", "001000000000", "000000000001", "000000011000", "000100001000", "000000000000", "000000000101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"010000000010", "000000000100", "000010001000", "000000100000", "000000000100", "000000000000", "000000000000", "000000000000", "000000000000", "000000000100", "000000010010", "000100000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> preferences = {"010001101100", "000001100000", "010001001100", "001010000000", "000110100110", "010101001000", "110000001000", "000000101101", "110000000000", "001000101001", "000110110100", "100001111000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> preferences = {"000100000000", "011000001000", "000000000001", "000010010100", "100001001000", "000000000000", "000000000001", "000000110010", "000000010000", "000000000010", "000100000000", "000000010000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> preferences = {"111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> preferences = {"110011011011", "111110111011", "010011110010", "010111101111", "111111001111", "100011111111", "101000111111", "111011111111", "100111101101", "011011111101", "111111011111", "101101011101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"011111101110", "010010101101", "111101110011", "101011011111", "111111101010", "101101111111", "101011110110", "111110101011", "111111110010", "111111111111", "011010111110", "001111100000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> preferences = {"101111111011", "111101011011", "111110011101", "010111111111", "001111111100", "110111111011", "001101010101", "111100111111", "111110111010", "111011001111", "111011111111", "110111101110"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"110000111100", "111100111110", "111111001000", "111011010011", "001010101111", "110111110111", "011011111010", "010010111000", "101110111011", "101101111111", "011111010110", "111111101111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> preferences = {"1", "1", "1", "0", "1", "0", "1", "1", "0", "0", "0", "1"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> preferences = {"101111100011"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> preferences = {"011111001101", "111110110101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> preferences = {"00", "11", "11", "01", "11", "01", "01", "11", "00", "00", "00", "10"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> preferences = {"101", "010", "011", "100", "000", "001", "100", "000", "000", "000", "110", "011"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> preferences = {"110000000001", "000101101101", "001000100101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> preferences = {"00010000", "00000000", "00000010", "00000000", "10000001", "00001000", "00000000", "00000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> preferences = {"011000000010", "000110000010", "011001101000", "000000000000", "000000000000", "001000010001", "010010000000", "100100010000", "000000000110", "000000010000", "001010000000", "001010100000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> preferences = {"001000000000", "100100100001", "000000000000", "000000000000", "000000000000", "000000100000", "000010000000", "000000001000", "001000010101", "000011100001", "000010000000", "010000011000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> preferences = {"001000011000", "000000000000", "000000000000", "000010000000", "000000000000", "000000000000", "000000000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> preferences = {"010100000000", "000000000000", "000000000000", "000000000000", "000000000000", "010000000000", "000000000000", "000000000000", "000000001000", "000000000000", "000000000000", "000000000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> preferences = {"0000000", "0010000", "0000000", "0000000", "0000000", "0000000", "1000000", "0000000", "0000000", "0000011", "0100000", "0000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> preferences = {"100000001100", "110000000000", "001000000100", "000100000000", "000010000000", "000001000000", "000000100000", "000000010000", "000000101000", "010000000100", "010000000010", "001000100001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> preferences = {"100010010100", "010000000000", "001000010000", "001100000000", "110011000010", "000001001101", "000000100000", "000001010000", "000000001100", "000000100101", "010000011010", "000100000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> preferences = {"100000000000", "010100000011", "001001001000", "100110000000", "000010000000", "000001000000", "000000100100", "000000010000", "000000111000", "010101000101", "000000101010", "010100000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> preferences = {"101000000010", "010000000000", "001000100000", "000100000100", "010110000000", "000001000000", "000000100000", "000010011001", "010000001000", "000000000100", "000010001010", "000000010101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> preferences = {"100000000000", "010000010000", "001100000000", "000100000010", "000010000000", "000001000101", "000000101000", "000000010100", "000000001000", "001000000100", "000100000010", "000001010001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> preferences = {"100000000000", "010000000000", "001010101101", "000100000000", "000011001000", "000001010100", "000000100000", "000000010001", "000001001000", "001000000100", "000000001010", "000000000101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> preferences = {"100000000000", "010000000000", "001000001000", "000100000000", "000010001000", "000001000000", "000001100100", "000000010000", "001010001000", "000100000100", "000001010010", "000110000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> preferences = {"100000000000", "010000100001", "001000100010", "000100000000", "000010000100", "000011100100", "000000100011", "000000011000", "011000001000", "000001101111", "001100000010", "001000100001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> preferences = {"100000000110", "010000000000", "001000000100", "001100000000", "100010000000", "001001000000", "000000110001", "000000010000", "100000001000", "001000001100", "010000000010", "010010000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> preferences = {"100001100000", "010000110001", "101100110100", "001100110101", "001110001010", "000001000101", "001010100100", "101100010100", "001000101001", "100100100100", "010000000010", "111010000101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> preferences = {"100000000000", "010000000000", "001000000000", "000100000000", "010010000000", "000001000000", "000000100000", "000000010000", "000000001000", "000000000100", "000000000010", "000000000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> preferences = {"100000000010", "010010010010", "001010100101", "001110000001", "100011100000", "011001000010", "010000100000", "001000110100", "010000001000", "000010000100", "000100101010", "010001100001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> preferences = {"100000000000", "011100001000", "001000101000", "000100000000", "100010000100", "000001000000", "000000100000", "000000011000", "000000001101", "000000000100", "000000000010", "000000000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> preferences = {"1", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> preferences = {"111111111111", "111111000000", "000000111111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"100000000000", "010000000000", "001000000000", "000100000000", "000010000000", "000001000000", "000000100000", "000000010000", "000000001000", "000000000100", "000000000010", "000000000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> preferences = {"100100000000", "010000000100", "001000010000", "100100000000", "000010010000", "100001000000", "000000100000", "000100010000", "001000001000", "000100000100", "001000000010", "000010000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> preferences = {"100100000000", "010000000100", "001000010000", "100100000000", "000010010000", "101001001000", "000000100000", "000100010000", "001000001000", "000100000100", "001000000010", "000010010001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> preferences = {"100000000000", "010000000001", "001000000010", "000100000010", "000010000010", "000001000010", "000000100000", "000000010000", "000000001000", "000000000100", "000000000010", "000000000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> preferences = {"100000000111", "010000000000", "001000000000", "000100000000", "000010000000", "000001000000", "000000100000", "000000010000", "000000001000", "000000000100", "000000000010", "000000000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> preferences = {"100000000000", "010000010000", "001000000000", "000100100000", "010010010000", "010001000000", "001000100010", "000000010000", "000000001000", "000000000100", "000000000010", "000100000001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> preferences = {"100000000000", "010000000000", "001010000000", "100100000010", "000010000000", "001001000010", "000010100000", "000000010000", "000000001000", "000000000100", "000001000010", "000000100001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> preferences = {"000100000000", "000000000010", "000000001000", "000100001000", "000000000000", "000000000000", "000000000000", "000000000010", "000000000000", "000000100000", "010000000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> preferences = {"01100000001", "00001100000", "10011001101", "00000000000", "00000000000", "00000001000", "01000101001", "00000001001", "00010000000", "00000011000", "00000100000", "01010000000"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> preferences = {"00100011101", "11001001000", "01001000011", "00000000001", "00000111000", "00000100000", "10100000001", "10100000100", "00001101001", "00001010100", "00111000010", "00010100001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> preferences = {"011000011000", "000010000000", "100100000100", "101110010010", "001000000000", "000011010111", "010001000001", "000001010000", "100001100000", "100000010000", "000000100010"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> preferences = {"11011001010", "00000101000", "01000111001", "10111010000", "00111011111", "11001110110", "10010011110", "10000111101", "11111110011", "10110110011", "01010101001", "00001011011"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"001010001000", "000101000010", "111111111000", "111110111111", "111111101010", "001110100111", "100101101101", "100101101101", "111011001100", "111101101111", "001011111010", "101100011110"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> preferences = {"11", "00"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> preferences = {"111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"111", "111", "111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> preferences = {"100110100110", "101001101110", "101110101011", "101101101111", "111100110110", "001111011011", "100110110110", "101111011100", "111000101011", "101111101111", "110100110100", "111111111111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> preferences = {"010000011111", "010000000000", "010000001110", "010101100000", "000000110000", "001000100001", "100010100000", "100100000100", "101010101010", "001010000001", "010001010101", "001010101100"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> preferences = {"11111111111", "11111111111", "11111111111", "11111111111", "11111111111", "11111111111", "11111111111", "11111111111", "11111111111", "11111111111", "11111111111", "11111111111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> preferences = {"101010101010", "010101010101", "101010101010", "010101010101", "101010101010", "010101010101", "111111111111", "111111111111", "111111111111", "111111111111", "000111101011", "011011110101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"111011111101", "111011110111", "000101101000", "110110111101", "011100001111", "111110101011", "100011110111", "011101111111", "111111001110", "000110011001", "011100011010", "111011111011"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> preferences = {"101010101010", "010011001100", "001110000011", "000100110010", "110010011100", "110101011001", "100111100001", "001101010000", "000100001000", "111110000100", "111111111010", "100001001101"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> preferences = {"111111111000", "100011111110", "111100011111", "101101001110", "110111001111", "111111111110", "011100011111", "011110101111", "011111010100", "111010111110", "100111110111", "010110111110"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> preferences = {"111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", "111110111111", "111111111111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> preferences = {"10", "10", "11"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> preferences = {"10"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> preferences = {"111000", "000111"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
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
    vector<string> preferences = {"11110", "11110", "11110", "11110"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> preferences = {"001000001001", "010000000111", "000010100111", "000010010110", "000000000000", "000100010100", "000100001101", "100001000110", "000100011010", "100000000101", "010110001110", "100000101001"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> preferences = {"011110011111", "101111111111", "101000111111", "110111001111", "000011111111", "111011111111", "111011111111", "111111111011", "111011101111", "111101010011", "111111110011", "111110101011"};
    MarriageProblemRevised* pObj = new MarriageProblemRevised();
    clock_t start = clock();
    int result = pObj->neededMarriages(preferences);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=20812309&rd=10765&pm=6608
********************************************************************************
#include <vector> 
#include <string> 
#include <string.h> 
#include <stdio.h> 
 
using namespace std; 
 
class MarriageProblemRevised { 
  public: 
   
  int n, m, nm2; 
  int data[12][12]; 
  int l[12], r[12]; 
  int weight[24]; 
   
  int neededMarriages(vector <string> P) { 
    int i, j, f, t, ans; 
     
    n = P.size(); 
    m = P[0].size(); 
    for (i = 0; i < n; i ++) 
      for (j = 0; j < m; j ++) 
        data[i][j] = (P[i][j] == '1'); 
    for (i = 0; i < n; i ++) { 
      f = 0; 
      for (j = 0; j < m; j ++) 
        if (data[i][j]) 
          f = 1; 
      if (!f) 
        return -1; 
      } 
    for (i = 0; i < m; i ++) { 
      f = 0; 
      for (j = 0; j < n; j ++) 
        if (data[j][i]) 
          f = 1; 
      if (!f) 
        return -1; 
      } 
    for (i = 0; i < n; i ++) { 
      weight[i] = 1 << i; 
      for (j = 0; j < m; j ++) 
        if (data[i][j]) 
          weight[i] += 1 << (j + n); 
      } 
    for (i = 0; i < m; i ++) { 
      weight[i + n] = 1 << (i + n); 
      for (j = 0; j < n; j ++) 
        if (data[j][i]) 
          weight[i + n] += 1 << j; 
      } 
    nm2 = 1 << (n + m); 
//    for (j = 0; j < n + m; j ++) 
//      printf("%d\n",weight[j]); 
    ans = 40; 
    for (i = 0; i < nm2; i ++) { 
      f = 0; 
      t = 0; 
      for (j = 0; j < n + m; j ++) 
        if (i & (1<<j)) { 
          f |= weight[j]; 
          t ++; 
          } 
      if (f == nm2 - 1) 
        ans <?= t; 
      } 
    return ans; 
    } 
  };

********************************************************************************
*******************************************************************************/