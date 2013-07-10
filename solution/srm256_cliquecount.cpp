/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4687
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

class CliqueCount {
public:
    int countCliques(vector<string> graph);
};

int CliqueCount::countCliques(vector<string> graph) {
    int ret;
    return ret;
}


int test0() {
    vector<string> graph = {"010", "100", "000"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"011", "101", "110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"00010000000000100000", "00110000000000000000", "01011001000000011000", "11101000000100010110", "00110000001100000000", "00000000010000000001", "00000000000000011001", "00100000000010000001", "00000000000100011000", "00000100000010000010", "00001000000000000010", "00011000100001000101", "00000001010000000000", "00000000000100000010", "10000000000000000010", "00110010100000000000", "00100010100000000000", "00010000000100000000", "00010000011001100000", "00000111000100000000"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> graph = {"00", "00"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"00111111111111111111", "00011111111111111111", "10001111111111111111", "11000111111111111111", "11100011111111111111", "11110001111111111111", "11111000111111111111", "11111100011111111111", "11111110001111111111", "11111111000111111111", "11111111100011111111", "11111111110001111111", "11111111111000111111", "11111111111100011111", "11111111111110001111", "11111111111111000111", "11111111111111100011", "11111111111111110001", "11111111111111111000", "11111111111111111100"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> graph = {"00011111111111111111", "00001111111111111111", "00000111111111111111", "10000011111111111111", "11000001111111111111", "11100000111111111111", "11110000011111111111", "11111000001111111111", "11111100000111111111", "11111110000011111111", "11111111000001111111", "11111111100000111111", "11111111110000011111", "11111111111000001111", "11111111111100000111", "11111111111110000011", "11111111111111000001", "11111111111111100000", "11111111111111110000", "11111111111111111000"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 296;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> graph = {"01101110011111110111", "10111011010111101111", "11000101111101111011", "01001110011111111110", "11010101110110111111", "10111010101111111111", "11010100110101110011", "01101000111110111010", "00101111011111101011", "11111011100110010111", "10110101100001111111", "11111111110011111011", "11011101110101110101", "11110110101110100111", "11111111101111011111", "10111111011110101101", "01111101101100110110", "11011100011011111011", "11111111111101101101", "11101110111111110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> graph = {"01011111110110111111", "10101101111111111111", "01000111111101111101", "10001010111111010101", "11010011111111001111", "11100011110111111101", "10111101111111111110", "11101110011011101111", "11111110011111111110", "11111111101111111111", "01111011110111011011", "11111110111011101001", "11011111111101111100", "01111111111110101111", "11100111110111011101", "11110110111010101011", "11101111111111110001", "11111111110011100011", "11001011111001010101", "11111101011101111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> graph = {"01101111111111101111", "10100101111001110111", "11011011111110110010", "00101101111011111100", "10110110111111111101", "11011010111111010101", "10101101111111100111", "11110010101101111111", "11111111011111111111", "11111110101011110111", "11111111110111111111", "10101111101011111110", "10111110111101111111", "11011111111110101110", "11111011111111011111", "01111101111110101110", "10011001101111110110", "11011111111111111011", "11100011111111111101", "11001111111010100110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> graph = {"01101111111111111111", "10111111111111111011", "11011111111111111111", "01101111111111111111", "11110111001111111111", "11111011111110111111", "11111101101111011111", "11111110101110111110", "11110111011110111111", "11110100101111111111", "11111111110011111111", "11111111110011111111", "11111111111101111101", "11111010011110111111", "11111101111111011111", "11111111111111101111", "11111111111111110110", "10111111111111111011", "11111111111101111101", "11111110111111110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> graph = {"01111111101111111111", "10111110111111101111", "11001111111111011111", "11001111111111111111", "11110111111111111111", "11111001110111111111", "11111001111111111111", "10111110111111111111", "11111111011111111111", "01111111101111111111", "11111011110111111111", "11111111111011111111", "11111111111100111111", "11111111111100111101", "11011111111111011111", "10111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111110111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> graph = {"01011111100110111101", "10101111100011101111", "01011011111111011101", "10101010101111101101", "11110111010010110101", "11001001110111111101", "11111000101011010101", "11101100100111111111", "11110111010101111111", "00101100101110111111", "00110010010111111111", "10110101111011111001", "11111111011101111110", "01110111101110011111", "11011101111110000101", "10101111111111000111", "11110101111111000111", "11111111111011111001", "01000001111011011001", "11111111111101111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> graph = {"01111111111111101111", "10111111111111111111", "11011111111111111111", "11101111111111101101", "11110111111111111011", "11111011111011111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101011011111", "11111111110111111111", "11111011101011111111", "11111111111100111111", "11111111111100111111", "11111111101111011111", "01101111111111101110", "11111111111111110111", "11110111111111111011", "11101111111111111101", "11111111111111101110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111011111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11110111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101110111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111101110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111101", "10111111011011101110", "11010111110101111110", "11101101111111111111", "11010111111011101111", "11111010111111101101", "11101101111111011111", "11111010011101111110", "10111110011011101111", "11111111101011111111", "11011111110111100011", "10110111001011101011", "11011110111101111011", "11111111111110110101", "11111101111111011111", "10110011010011101111", "11111111110110110011", "11111111110001110011", "01111011111110111101", "10011110111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> graph = {"01010011111111111111", "10100011110100111110", "01011100011111111111", "10101111111111011101", "00110111111011011101", "00111011111111011101", "11011101011110111011", "11011110111111111111", "11011101010111111111", "11111111101111111111", "10111111010111111101", "11110111111011110000", "10111111111101101110", "10111101111110011101", "11100011111110010111", "11111111111101101100", "11111111111011010101", "11111101111011111011", "11100011110010100101", "10111111111001101110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> graph = {"01111111111011111101", "10101010110111011111", "11001111011011110101", "10001111111011111011", "11110111110111101011", "10111011111100111110", "11111101111111111111", "10111110011110011111", "11011110011011101110", "11111111101111111001", "10110111110111111111", "01001111011011011111", "11111011111101111111", "11111010111110111101", "10111110111011011111", "11110111011111101110", "11011111111111110110", "11100111101111111011", "01011111101110111101", "11111011011111100110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111011", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111010111111111", "11111111101111111111", "11111111010111011111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111110111011101", "11111111111111101111", "11111111111111110111", "11101111111111111011", "11111111111111011101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> graph = {"01111111101111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011110111111111", "11111101111111111101", "11111110111111111101", "11111111011111111111", "01111111101111111111", "11111011110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111100111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> graph = {"01010111011111110011", "10011101100011110011", "00010100101101100111", "11101111110110011100", "01010010111001101110", "11110011011110111110", "10011100011100011111", "11010100111111101110", "01111001011011100110", "10011111101100111101", "10101111110110010000", "10110111011011101111", "11010101101101111100", "11101001100110111001", "11101101110111010011", "11010110011011101111", "00011111010111010001", "00111111110110010011", "11101111100100110101", "11100010010101111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111101", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11011111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111100111111", "11111111111100111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111010", "11111111111111111101", "11111111111111111010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> graph = {"01111111111011111111", "10111111111111111111", "11011111011011111111", "11101111111111111111", "11110111111111111111", "11111011101111111111", "11111101111111111111", "11111110011111011111", "11011110011011111111", "11111011101111111111", "11111111110111111110", "01011111011001110101", "11111111111001111111", "11111111111110111111", "11111110111111011111", "11111111111111101111", "11111111111011110110", "11111111111111111011", "11111111111011111101", "11111111110111110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> graph = {"01111111111101111111", "10111111111111111111", "11011111111011111101", "11101111111110111111", "11110111101111111111", "11111011111010111111", "11111101111111111101", "11111110111111111111", "11111111011111011111", "11110111101011101111", "11111111110111011011", "11011011101011011011", "01111111111101111111", "11101011111110111111", "11111111010011011111", "11111111101111100111", "11111111111111100111", "11111111110011111010", "11011101111111111101", "11111111111111111010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> graph = {"01111111111111110111", "10111101111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "10111101111110111111", "11111110111111111111", "11111111011111111011", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111101111110111111", "11111111111111011111", "11111111111111100101", "01111111111111100111", "11111111011111111011", "11111111111111101101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> graph = {"00011011111111111111", "00011100010011101010", "00011100101101111100", "11101101010111111111", "11110101001110001111", "01111011011111100100", "10000101111010011101", "10011110111111110011", "10100011011111101111", "11010111101110111111", "10101111110110111011", "10111101111011001101", "11011111111101111111", "11110101100110011010", "11110101111010001111", "10110011011011001101", "11111010111111110110", "10111110110110111011", "11011001111011101101", "10011011111110110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111011111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111101111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11101111111111011111", "11111111011111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111110", "10110111111111110111", "11000111111111111111", "11001111111111101111", "10010111111111110111", "11111011111011111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111011111011111111", "11111111111101111111", "11111111111110111011", "11111111111111011111", "11101111111111101111", "10110111111111110111", "11111111111110111011", "11111111111111111101", "01111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> graph = {"01100111101011101111", "10101111110111111111", "11010011111111011101", "00101101111110001100", "01010111110001010011", "11011011010101000111", "11101101111111111101", "11111110111110001010", "11111011010111111110", "01111111101101001011", "10110011010111101011", "01110111111000111111", "11110011101000111110", "11101110111000011111", "11000010101110010001", "01101010100111101111", "11110011111111010111", "11110110100111011001", "11001101111111011001", "11101110011101111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> graph = {"01111111111111110111", "10111111111111111111", "11011111111111111111", "11100111111111111101", "11100111111011111111", "11111011111011111011", "11111101111111111111", "11111110111111111111", "11111111011111111011", "11111111101111111111", "11111111110111111111", "11110011111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "01111111111111110111", "11111011011111111011", "11101111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> graph = {"01111101111111101111", "10111111111111111111", "11011110011110101110", "11101111101111011111", "11110011011111011111", "11110011111101110111", "01111101110111111101", "11011110110111111101", "11010111011010111111", "11101111101111111111", "11111100110111111110", "11111111011010011110", "11111011111100110110", "11011111011000111111", "11100111111011011111", "01011111111111101001", "11111011111101110110", "11111111111111101011", "11111100111111101101", "11011111110001110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111101111111", "11101111111111111101", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11011111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11101111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"01111111101111111101", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111011111111", "11111111001111111111", "01111111001111111111", "11111111110111111101", "11111110111011111111", "11111111111101111110", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "01111111110111111101", "11111111111101111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111101111110", "11101111111101111111", "11110101111111111001", "11111011101011110111", "11110101111111111111", "11111110111111111011", "11111111010111111111", "11111011101011011111", "11111111010111111111", "11111011101011111111", "11001111111101111111", "11111111111110111111", "11111111101111011111", "11111111111111100110", "11111011111111100111", "11110110111111111011", "11110111111111111101", "11011111111111101110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> graph = {"01111110011111111111", "10101110111111111111", "11001111111111111111", "10001011111111111111", "11110111101111110111", "11101011111111111111", "11111101111111111111", "00111110111111111011", "01111111011011101111", "11110111101111111111", "11111111110111001111", "11111111011011011111", "11111111111101111111", "11111111111110110111", "11111111110011011110", "11111111010111101110", "11110111111110110111", "11111110111111111011", "11111111111111111101", "11111111111111001110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> graph = {"01111111011111111111", "10111111111101111011", "11001111111111110111", "11001111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "01111111011111011111", "11111111101111111111", "11111111110111101111", "11111111111011111111", "10111111111101111111", "11111111111110111111", "11111111011111011111", "11111111110111101111", "11011111111111110111", "10111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> graph = {"01111101101001010101", "10001001101010110101", "10011011111010111111", "10100111110101100101", "11100110100101110011", "10011011001111101110", "00111101101001010110", "11110110011011101011", "11111010001011010010", "00110001001011010000", "11100111110101011111", "00011100001011110011", "01100101110100010100", "10011111111100100111", "01111101000101000110", "11101010111110000110", "00100101001000000000", "11110110001011110010", "00101111101101110100", "11111001001101000000"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> graph = {"01011001111111111111", "10111111110011111010", "01010000101100001100", "11101101010001111000", "11010110101110010101", "01011000000100111001", "01001001111110111110", "11010010101101001101", "11101011001101100101", "11010010001111011111", "10101011110101111101", "10101111111000101011", "11001010010001111110", "11010001111010110001", "11010110101111001001", "11011110011011001001", "11110111011110110111", "10101011111010001001", "11000010010110001001", "10001101111101111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> graph = {"01111011101111101110", "10111111011111111111", "11011011110111111111", "11101111111111111111", "11110111111111111111", "01011011111111111111", "11111101111111111111", "11111110111101111111", "10111111011111111111", "01111111101101111111", "11011111110111110111", "11111111111011111111", "11111110101101110111", "11111111111110110111", "11111111111111001111", "01111111111111001111", "11111111110100110110", "11111111111111111011", "11111111111111111101", "01111111111111110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> graph = {"01111111111111111111", "10111111110111101110", "11011111111011111111", "11101011011011111111", "11110111111111111111", "11101011011110111111", "11111101111111111111", "11111110111111111111", "11101011001011100111", "11111111001111111111", "10111111110110111101", "11001111011011111111", "11111111111101110111", "11111011110110111111", "11111111111111010111", "10111111011111101011", "11111111011101010111", "11111111111111101011", "11111111110111111101", "10111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> graph = {"01101101111111011111", "10111011111111110011", "11011111101110111100", "01101111111111111111", "11110001111110111111", "10110011111010111011", "01110101111111111111", "11111110111111111011", "11111111011111111110", "11011111101110111101", "11111111110110101111", "11111011111011100111", "11111111111101101100", "11010011100110011101", "01111111111110001101", "11111111110001000111", "10111111111011100110", "10111010111111111011", "11011111101100011101", "11011111011101110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> graph = {"01111111111111111111", "10111011111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111101", "10111011111111111111", "11111101111111111111", "11111110111111111110", "11111111011111111111", "11111111101101111111", "11111111110011111111", "11111111110011111111", "11111111101101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11110111111111111101", "11111110111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> graph = {"01111111111111111101", "10111111111111111111", "11011111111111111111", "11101111111101111111", "11110111111111111111", "11111001111111011111", "11111001111011111111", "11111110111110111111", "11111111011111111111", "11111111101111111101", "11111111110111111011", "11111101111010111111", "11101111111101111101", "11111110111010011111", "11111011111110011101", "11111111111111101111", "11111111111111110011", "11111111110111110011", "01111111101101011101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> graph = {"00110001100100101011", "00000110100100111001", "10000110111101000110", "10001000101101110100", "00010010100110110100", "01100010111111110010", "01101101010110110110", "10000010111110101011", "11111101000101010111", "00100111001011110111", "00110101010101001111", "11111111101001011101", "00001111010001100111", "00110100111110111111", "11011111010011010111", "01011110110101101001", "11000001001101010010", "00111010111111100011", "10100111111011101101", "11000001111111110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> graph = {"01111001101101111101", "10111100111111011101", "11011110111111100110", "11101111110111111111", "11110111101111111011", "01111011111111111111", "00111101111111111111", "10011110110110011111", "11111111011111001110", "01110111101111111111", "11101110110101111111", "11111111111011111011", "01111111110101111111", "11111110111110111111", "10111110011111011111", "11011111011111101111", "11011111111111110111", "11110111111011111010", "00111111111111111101", "11011111011111111010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> graph = {"00111101111111111111", "00111111111111111111", "11011101111111111111", "11101111111111110110", "11110101111111110000", "11111010011111111111", "01010101111101111110", "11111010101111111101", "11111011011111111111", "11111110101111111101", "11111111110111111111", "11111111111001111111", "11111101111001111111", "11111111111110011101", "11111111111110011011", "11111111111111101111", "11100111111111110111", "11110111111111011010", "11110110101110111101", "11100101111111111010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> graph = {"01010110101111111010", "10111110010011111011", "01011111001110111110", "11101110111111011011", "01110001101110111111", "11110001101111111110", "11110001101011011101", "00101110100001111101", "10011111001011101110", "01010000001101001100", "10111110110001011010", "10111100010001001111", "11111110100001000011", "11010111111110110001", "11101101100001010010", "11111111001001101110", "11111111111100010111", "00101111110100011000", "11111100101110111001", "01011011000111001010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111110111111", "11111110111111111111", "11111111011111111111", "11111111101111111101", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111101111110110111", "11111111111111011011", "11111111111111101111", "11111111111110110111", "11111111111111011011", "11111111101111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> graph = {"01111110111011011111", "10111111110111111101", "11010111111110111110", "11101011110111101111", "11010111110110111111", "11101011111111111110", "11111101010111101111", "01111110111101111111", "11111101011111111111", "11111111101111111011", "10100101110111111111", "01111111111011111010", "11111110111101111011", "11010111111110110101", "01111111111111011001", "11101101111111101101", "11111111111110110110", "11111111101001011000", "10111111111110001001", "11011011111011110010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> graph = {"01111111111111111111", "10111111111111100111", "11011111111111111111", "11101111011111111111", "11110110111111111111", "11111011111111111111", "11111101111111111111", "11110110111111111111", "11101111011111111111", "11111111101111011011", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111101111011111", "10111111111111101111", "10111111111111110111", "11111111101111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> graph = {"01111111101111111111", "10111111111111111010", "11011111011111111111", "11101111111111111111", "11110111111111111111", "11111011101111011111", "11111101110101111111", "11111110111111011111", "11011111011111110111", "01111011101111111111", "11111101110101111111", "11111111111011111111", "11111101110101111011", "11111111111110111111", "11111010111111011111", "11111111111111101111", "11111111011111110110", "10111111111101111011", "11111111111111111101", "10111111111111110110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> graph = {"01110111111101111111", "10111101111111111111", "11011111111111111111", "11101101111111111111", "01110111111110111110", "11111011111101111111", "10101101011101011000", "11111110111101111111", "11111101011111111111", "11111111101111111111", "11111111110110111111", "11111111111011111111", "01111000111100101111", "11110111110100111111", "11111101111111011111", "11111111111101101111", "11111111111111110111", "11111101111111111011", "11111101111111111101", "11110101111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> graph = {"00010000000000100000", "00110000000000000000", "01011001000000011000", "11101000000100010110", "00110000001100000000", "00000000010000000001", "00000000000000011001", "00100000000010000001", "00000000000100011000", "00000100000010000010", "00001000000000000010", "00011000100001000101", "00000001010000000000", "00000000000100000010", "10000000000000000010", "00110010100000000000", "00100010100000000000", "00010000000100000000", "00010000011001100000", "00000111000100000000"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> graph = {"01000", "10100", "01010", "00101", "00010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> graph = {"011", "101", "110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    vector<string> graph = {"00010000000000100000", "00110000000000000000", "01011001000000011000", "11101000000100010110", "00110000001100000000", "00000000010000000001", "00000000000000011001", "00100000000010000001", "00000000000100011000", "00000100000010000010", "00001000000000000010", "00011000100001000101", "00000001010000000000", "00000000000100000010", "10000000000000000010", "00110010100000000000", "00100010100000000000", "00010000000100000000", "00010000011001100000", "00000111000100000000"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> graph = {"01000", "10100", "01010", "00101", "00010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> graph = {"011", "101", "110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> graph = {"01111111111111111111", "10111111111111111111", "11011111111111111111", "11101111111111111111", "11110111111111111111", "11111011111111111111", "11111101111111111111", "11111110111111111111", "11111111011111111111", "11111111101111111111", "11111111110111111111", "11111111111011111111", "11111111111101111111", "11111111111110111111", "11111111111111011111", "11111111111111101111", "11111111111111110111", "11111111111111111011", "11111111111111111101", "11111111111111111110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> graph = {"00010000000000100000", "00110000000000000000", "01011001000000011000", "11101000000100010110", "00110000001100000000", "00000000010000000001", "00000000000000011001", "00100000000010000001", "00000000000100011000", "00000100000010000010", "00001000000000000010", "00011000100001000101", "00000001010000000000", "00000000000100000010", "10000000000000000010", "00110010100000000000", "00100010100000000000", "00010000000100000000", "00010000011001100000", "00000111000100000000"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> graph = {"01000", "10100", "01010", "00101", "00010"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> graph = {"011", "101", "110"};
    CliqueCount* pObj = new CliqueCount();
    clock_t start = clock();
    int result = pObj->countCliques(graph);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=7992&pm=4687
********************************************************************************
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
using namespace std;
 
#define FORD(var,pocz,koniec) for (int var=pocz; var>=koniec; --var)
#define SIZE(x) (int)x.size()
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,var) for(__typeof((var).begin()) it=(var.begin()); it!=(var).end(); ++it)
#define FOR(var,pocz,koniec) for (int var=pocz; var<=koniec; ++var)
 
int t[1<<21];
 
    class CliqueCount
        { 
        public: 
        int countCliques(vector <string> g){
               int n=SIZE(g);
               int ile=1<<n;
               REP(i,ile) t[i]=0; t[0]=1;
               FOR(mask,1,ile-1){
                 int pos;
                 REP(k,n) if ((1<<k)&mask) {pos=k; break;}
                 if (!t[mask-(1<<pos)]) continue;
                 t[mask]=1;
                 FOR(i,pos+1,n-1) if (((1<<i)&mask) && g[pos][i]=='0'){
                   t[mask]=0; break;
                 }
               }
               int res=0;
               FORD(mask,ile-1,0) if (t[mask]){
                 bool ok=true;
                 REP(i,n) if ((mask&(1<<i))==0 && t[mask+(1<<i)]) {ok=false; break;}
                 if (ok) res++;
               }
               return res;
            } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/