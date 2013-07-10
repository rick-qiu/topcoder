/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4690
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

class GraphLabel {
public:
    int adjacentDifference(vector<string> graph);
};

int GraphLabel::adjacentDifference(vector<string> graph) {
    int ret;
    return ret;
}


int test0() {
    vector<string> graph = {"010000", "101111", "010111", "011010", "011101", "011010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"01111001", "10101000", "11000101", "10000111", "11000111", "00111000", "00011000", "10111000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> graph = {"011110101", "100111000", "100000111", "110011011", "110101001", "010110110", "101001010", "001101101", "101110010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> graph = {"011111111", "101111111", "110111111", "111011111", "111101111", "111110111", "111111011", "111111101", "111111110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> graph = {"01", "10"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"0000000", "0001011", "0001001", "0110101", "0001000", "0100001", "0111010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"00001001", "00111111", "01001011", "01000011", "11100000", "01000011", "01110100", "11110100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> graph = {"0000111", "0011001", "0100101", "0100001", "1010010", "1000100", "1111000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"011011110", "101111011", "110111011", "011001010", "111001011", "111110110", "100001000", "111111001", "011010010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> graph = {"01110010", "10010101", "10000011", "11000100", "00000000", "01010010", "10100100", "01100000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> graph = {"01110011", "10001101", "10001001", "10000010", "01100110", "01001001", "10011001", "11100110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> graph = {"01", "10"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"0110", "1000", "1000", "0000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"01100", "10010", "10001", "01000", "00100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"0011000", "0011010", "1100101", "1100010", "0010000", "0101000", "0010000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"011011110", "100000110", "100100100", "001011111", "100101101", "100110000", "111110011", "110100100", "000110100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"001011010", "000111010", "100101100", "011010100", "110101001", "111010001", "001100011", "110000100", "000011100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> graph = {"01", "10"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"001", "001", "110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> graph = {"001110100", "001001111", "110111001", "101011100", "101101100", "011110001", "110110010", "010000101", "011001010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> graph = {"0011010", "0001101", "1001011", "1110111", "0101001", "1011001", "0111110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"000010", "001001", "010011", "000011", "101100", "011100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"01011101", "10100000", "01000111", "10001100", "10010000", "10110000", "00100001", "10100010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"0010000", "0010101", "1101001", "0010001", "0100000", "0000000", "0111000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> graph = {"01", "10"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> graph = {"0100", "1001", "0001", "0110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> graph = {"001001111", "000100010", "100111000", "011000000", "001000010", "101000001", "100000000", "110010000", "100001000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"01101011", "10011111", "10001110", "01001011", "11110001", "01100011", "11110101", "11011110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> graph = {"000", "001", "010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"0110100", "1010100", "1100011", "0000010", "1100010", "0011101", "0010010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> graph = {"00001011", "00000100", "00010101", "00101111", "10010011", "01110011", "10011100", "10111100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> graph = {"000010011", "001011100", "010001101", "000011111", "110101100", "011110100", "011111010", "100100101", "101100010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"00111111", "00011011", "10000010", "11000110", "11000001", "10010000", "11110000", "11001000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> graph = {"01010011", "10101000", "01001100", "10001111", "01110011", "00110001", "10011000", "10011100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> graph = {"00111100", "00010001", "10011011", "11100101", "10100110", "10011000", "00101000", "01110000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> graph = {"01010111", "10110011", "01010110", "11100011", "00000101", "10101000", "11110000", "11011000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> graph = {"01000", "10011", "00001", "01000", "01100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"01100", "10011", "10001", "01001", "01110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> graph = {"010011", "101101", "010000", "010000", "100000", "110000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"00011110", "00001111", "00011111", "10101100", "11110101", "11111001", "11100001", "01101110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> graph = {"000011100", "000010001", "000000100", "000000100", "110000100", "100000111", "101111001", "000001001", "010001110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> graph = {"000010101", "001110001", "010001011", "010000010", "110000111", "001000100", "100011001", "001110001", "111010110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> graph = {"011100101", "100101100", "100110011", "111011111", "001100111", "010100101", "110111001", "001110001", "101111110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"00011010", "00001100", "00000110", "10001001", "11010000", "01100010", "10100100", "00010000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"01", "10"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> graph = {"0001110", "0000001", "0001011", "1010001", "1000000", "1010001", "0111010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"010", "101", "010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> graph = {"001100101", "000000001", "100000011", "100000011", "000000110", "000000101", "100011000", "001110000", "111101000"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> graph = {"000111000", "000110011", "000010100", "110000111", "111000100", "100000011", "001110011", "010101101", "010101110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> graph = {"00011101", "00100001", "01011010", "10100111", "10100001", "10010010", "00110101", "11011010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"010011000", "101010111", "010001101", "000001011", "110001101", "101110100", "011011011", "010100100", "011110100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"010111110", "101001100", "010001110", "100001111", "100001110", "111110010", "111110001", "101111001", "000100110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"000100110", "001001010", "010111011", "101011100", "001100000", "011100101", "100101011", "111000101", "001001110"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"001", "000", "100"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
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
    vector<string> graph = {"01", "10"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> graph = {"011111111", "101111111", "110111111", "111011111", "111101111", "111110111", "111111010", "111111101", "111111010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> graph = {"011111111", "101111111", "110111111", "111011111", "111101111", "111110111", "111111010", "111111101", "111111010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> graph = {"011111111", "101111111", "110111111", "111011111", "111101111", "111110111", "111111010", "111111101", "111111010"};
    GraphLabel* pObj = new GraphLabel();
    clock_t start = clock();
    int result = pObj->adjacentDifference(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15485957&rd=7992&pm=4690
********************************************************************************
#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <utility>
#include <functional>
using namespace std;
 
class GraphLabel {
public:
  int adjacentDifference(vector <string> graph)
  {
    int n = graph.size();
    int tab[10];
    int best = 9999999;
    for (int i = 0; i < n; i++) {
      tab[i] = i;
    }
    do {
      int M = -1;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
          if (graph[i][j] == '1') M = M >? abs(tab[i]-tab[j]);
        }
      }
      best = best <? M;      
    } while (next_permutation(tab, tab+n));
    return best;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/