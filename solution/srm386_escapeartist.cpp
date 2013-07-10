/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7953
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

class EscapeArtist {
public:
    double bestRoute(vector<string> corridors, vector<int> agentStart, vector<int> agentTarget, int start, int finish);
};

double EscapeArtist::bestRoute(vector<string> corridors, vector<int> agentStart, vector<int> agentTarget, int start, int finish) {
    double ret;
    return ret;
}


int test0() {
    vector<string> corridors = {"0100", "1011", "0100", "0100"};
    vector<int> agentStart = {3};
    vector<int> agentTarget = {1};
    int start = 0;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> corridors = {"01000", "10110", "01000", "01001", "00010"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {1};
    int start = 0;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> corridors = {"010000", "101011", "010111", "001000", "011000", "011000"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> corridors = {"010", "101", "010"};
    vector<int> agentStart = {2};
    vector<int> agentTarget = {0};
    int start = 0;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> corridors = {"0010000000", "0010000100", "1101000000", "0010100000", "0001011000", "0000100001", "0000100000", "0100000010", "0000000101", "0000010010"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 6;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> corridors = {"0010000000", "0010000100", "1101000000", "0010100000", "0001011000", "0000100001", "0000100000", "0100000010", "0000000101", "0000010010"};
    vector<int> agentStart = {2};
    vector<int> agentTarget = {6};
    int start = 1;
    int finish = 7;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> corridors = {"010000", "101000", "010111", "001000", "001000", "001000"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> corridors = {"010000", "101011", "010100", "001000", "010000", "010000"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> corridors = {"010000", "101000", "010111", "001011", "001100", "001100"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> corridors = {"010000", "101011", "010111", "001011", "011100", "011100"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33333333333333326;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> corridors = {"010000", "101011", "010111", "001011", "011100", "011100"};
    vector<int> agentStart = {4, 4};
    vector<int> agentTarget = {5, 5};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5555555555555555;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> corridors = {"0100", "1010", "0101", "0010"};
    vector<int> agentStart = {3};
    vector<int> agentTarget = {2};
    int start = 0;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> corridors = {"010000", "101001", "010110", "001000", "001000", "010000"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> corridors = {"000111", "001001", "010010", "100001", "101001", "110110"};
    vector<int> agentStart = {2};
    vector<int> agentTarget = {3};
    int start = 0;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> corridors = {"01100000000000000000", "10011000000000000000", "10011000000000000000", "01100110000000000000", "01100110000000000000", "00011001100000000000", "00011001100000000000", "00000110011000000000", "00000110011000000000", "00000001100110000000", "00000001100110000000", "00000000011001100000", "00000000011001100000", "00000000000110011000", "00000000000110011000", "00000000000001100110", "00000000000001100110", "00000000000000011001", "00000000000000011001", "00000000000000000110"};
    vector<int> agentStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> agentTarget = {18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    int start = 0;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> corridors = {"0110", "1011", "1100", "0100"};
    vector<int> agentStart = {0};
    vector<int> agentTarget = {2};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> corridors = {"00110000000000000000", "00110000000000000000", "11001100000000000000", "11001100000000000000", "00110011000000000000", "00110011000000000000", "00001100110000000000", "00001100110000000000", "00000011001100000000", "00000011001100000000", "00000000110011000000", "00000000110011000000", "00000000001100110000", "00000000001100110000", "00000000000011001100", "00000000000011001100", "00000000000000110011", "00000000000000110011", "00000000000000001100", "00000000000000001100"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {18};
    int start = 0;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.99609375;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> corridors = {"00110000000000000000", "00110000000000000000", "11001100000000000000", "11001100000000000000", "00110011000000000000", "00110011000000000000", "00001100110000000000", "00001100110000000000", "00000011001100000000", "00000011001100000000", "00000000110011000000", "00000000110011000000", "00000000001100110000", "00000000001100110000", "00000000000011001100", "00000000000011001100", "00000000000000110011", "00000000000000110011", "00000000000000001100", "00000000000000001100"};
    vector<int> agentStart = {1, 1};
    vector<int> agentTarget = {18, 18};
    int start = 0;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999847412109375;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> corridors = {"00110000000000000000", "00110000000000000000", "11001100000000000000", "11001100000000000000", "00110011000000000000", "00110011000000000000", "00001100110000000000", "00001100110000000000", "00000011001100000000", "00000011001100000000", "00000000110011000000", "00000000110011000000", "00000000001100110000", "00000000001100110000", "00000000000011001100", "00000000000011001100", "00000000000000110011", "00000000000000110011", "00000000000000001100", "00000000000000001100"};
    vector<int> agentStart = {1, 1, 1};
    vector<int> agentTarget = {18, 18, 18};
    int start = 0;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999403953552;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> corridors = {"01110000000000000000", "10001110000000000000", "10001110000000000000", "10001110000000000000", "01110001110000000000", "01110001110000000000", "01110001110000000000", "00001110001110000000", "00001110001110000000", "00001110001110000000", "00000001110001110000", "00000001110001110000", "00000001110001110000", "00000000001110001110", "00000000001110001110", "00000000001110001110", "00000000000001110001", "00000000000001110001", "00000000000001110001", "00000000000000001110"};
    vector<int> agentStart = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> agentTarget = {18, 18, 18, 18, 18, 18, 18, 18, 18, 18};
    int start = 0;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> corridors = {"00011100000000000010", "00011110000000000010", "00011111000000000010", "11101111100000000000", "11110111110000000000", "11111011111000000000", "01111101111100000000", "00111110111110000000", "00011111011111000000", "00001111101111100000", "00000111110111110000", "00000011111011111000", "00000001111101111100", "00000000111110111110", "00000000011111011111", "00000000001111101111", "00000000000111110111", "00000000000011111001", "11100000000001111000", "00000000000000111100"};
    vector<int> agentStart = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> agentTarget = {17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
    int start = 18;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> corridors = {"01", "10"};
    vector<int> agentStart = {0};
    vector<int> agentTarget = {1};
    int start = 1;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> corridors = {"010", "101", "010"};
    vector<int> agentStart = {0, 0};
    vector<int> agentTarget = {1, 2};
    int start = 1;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> corridors = {"01100", "10011", "10010", "01100", "01000"};
    vector<int> agentStart = {4, 3};
    vector<int> agentTarget = {1, 0};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> corridors = {"01110000000000000000", "10001110000000000000", "10001110000000000000", "10001110000000000000", "01110001110000000000", "01110001110000000000", "01110001110000000000", "00001110001110000000", "00001110001110000000", "00001110001110000000", "00000001110001110000", "00000001110001110000", "00000001110001110000", "00000000001110001110", "00000000001110001110", "00000000001110001110", "00000000000001110001", "00000000000001110001", "00000000000001110001", "00000000000000001110"};
    vector<int> agentStart = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    vector<int> agentTarget = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int start = 0;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6920538523425614;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> corridors = {"000111000000000000000001", "000111000000000000000001", "000111000000000000000001", "111000111000000000000000", "111000111000000000000000", "111000111000000000000000", "000111000111000000000000", "000111000111000000000000", "000111000111000000000000", "000000111000111000000000", "000000111000111000000000", "000000111000111000000000", "000000000111000111000000", "000000000111000111000000", "000000000111000111000000", "000000000000111000110000", "000000000000111000110000", "000000000000111000110000", "000000000000000111001100", "000000000000000111001100", "000000000000000000110010", "000000000000000000110010", "000000000000000000001100", "111000000000000000000000"};
    vector<int> agentStart = {22, 22, 22, 22, 22, 22, 22, 22, 22, 22};
    vector<int> agentTarget = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    int start = 23;
    int finish = 22;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6920538523425614;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> corridors = {"0001110000000000000000001", "0001110000000000000000001", "0001110000000000000000001", "1110001110000000000000000", "1110001110000000000000000", "1110001110000000000000000", "0001110001110000000000000", "0001110001110000000000000", "0001110001110000000000000", "0000001110001110000000000", "0000001110001110000000000", "0000001110001110000000000", "0000000001110001110000000", "0000000001110001110000000", "0000000001110001110000000", "0000000000001110001110000", "0000000000001110001110000", "0000000000001110001110000", "0000000000000001110001100", "0000000000000001110001100", "0000000000000001110001100", "0000000000000000001110010", "0000000000000000001110010", "0000000000000000000001100", "1110000000000000000000000"};
    vector<int> agentStart = {24, 22, 22, 22, 21, 21, 21, 22, 22, 22};
    vector<int> agentTarget = {23, 0, 1, 2, 0, 1, 2, 3, 4, 5};
    int start = 23;
    int finish = 24;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> corridors = {"0001110000000000000000001", "0001110000000000000000001", "0001110000000000000000001", "1110001110000000000000000", "1110001110000000000000000", "1110001110000000000000000", "0001110001110000000000000", "0001110001110000000000000", "0001110001110000000000000", "0000001110001110000000000", "0000001110001110000000000", "0000001110001110000000000", "0000000001110001110000000", "0000000001110001110000000", "0000000001110001110000000", "0000000000001110001110000", "0000000000001110001110000", "0000000000001110001110000", "0000000000000001110001100", "0000000000000001110001100", "0000000000000001110001100", "0000000000000000001110010", "0000000000000000001110010", "0000000000000000000001100", "1110000000000000000000000"};
    vector<int> agentStart = {23, 23, 23, 23, 22, 21, 22, 22, 22, 21};
    vector<int> agentTarget = {24, 0, 1, 2, 24, 24, 0, 1, 2, 0};
    int start = 24;
    int finish = 23;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.945192201747492;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> corridors = {"0001110000000000000000001", "0001110000000000000000001", "0001110000000000000000001", "1110001110000000000000000", "1110001110000000000000000", "1110001110000000000000000", "0001110001110000000000000", "0001110001110000000000000", "0001110001110000000000000", "0000001110001110000000000", "0000001110001110000000000", "0000001110001110000000000", "0000000001110001110000000", "0000000001110001110000000", "0000000001110001110000000", "0000000000001110001110000", "0000000000001110001110000", "0000000000001110001110000", "0000000000000001110001100", "0000000000000001110001100", "0000000000000001110001100", "0000000000000000001110010", "0000000000000000001110010", "0000000000000000000001100", "1110000000000000000000000"};
    vector<int> agentStart = {24, 0, 1, 2, 24, 24, 0, 1, 2, 0};
    vector<int> agentTarget = {23, 23, 23, 23, 22, 21, 22, 22, 22, 21};
    int start = 23;
    int finish = 24;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.958894151310619;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> corridors = {"0001110000000000000000001", "0001110000000000000000001", "0001110000000000000000001", "1110001110000000000000000", "1110001110000000000000000", "1110001110000000000000000", "0001110001110000000000000", "0001110001110000000000000", "0001110001110000000000000", "0000001110001110000000000", "0000001110001110000000000", "0000001110001110000000000", "0000000001110001110000000", "0000000001110001110000000", "0000000001110001110000000", "0000000000001110001110000", "0000000000001110001110000", "0000000000001110001110000", "0000000000000001110001100", "0000000000000001110001100", "0000000000000001110001100", "0000000000000000001110010", "0000000000000000001110010", "0000000000000000000001100", "1110000000000000000000000"};
    vector<int> agentStart = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    vector<int> agentTarget = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    int start = 24;
    int finish = 23;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6920538523425614;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> corridors = {"0001110000000000000000001", "0001110000000000000000001", "0001110000000000000000001", "1110001110000000000000000", "1110001110000000000000000", "1110001110000000000000000", "0001110001110000000000000", "0001110001110000000000000", "0001110001110000000000000", "0000001110001110000000000", "0000001110001110000000000", "0000001110001110000000000", "0000000001110001110000000", "0000000001110001110000000", "0000000001110001110000000", "0000000000001110001110000", "0000000000001110001110000", "0000000000001110001110000", "0000000000000001110001100", "0000000000000001110001100", "0000000000000001110001100", "0000000000000000001110010", "0000000000000000001110010", "0000000000000000000001100", "1110000000000000000000000"};
    vector<int> agentStart = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> agentTarget = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    int start = 23;
    int finish = 24;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6920538523425614;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> corridors = {"010010", "101000", "010100", "001001", "100001", "000110"};
    vector<int> agentStart = {1, 4};
    vector<int> agentTarget = {2, 5};
    int start = 3;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> corridors = {"010000", "101000", "010100", "001010", "000101", "000010"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> corridors = {"010000", "101000", "010100", "001010", "000101", "000010"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {5};
    int start = 0;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> corridors = {"0100001", "1010000", "0101011", "0010100", "0001010", "0010100", "1010000"};
    vector<int> agentStart = {3};
    vector<int> agentTarget = {0};
    int start = 0;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> corridors = {"0100001000", "1010000000", "0101011000", "0010100000", "0001010101", "0010100000", "1010000000", "0000100010", "0000000101", "0000100010"};
    vector<int> agentStart = {2, 3, 8, 8, 8, 8};
    vector<int> agentTarget = {0, 5, 2, 2, 2, 2};
    int start = 0;
    int finish = 8;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.96875;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> corridors = {"0101101000000010", "1010000000000000", "0100010000100000", "1000000000000000", "1000000000000000", "0010000000000000", "1000000110001000", "0000001000000000", "0000001001010000", "0000000010000001", "0010000000000100", "0000000010000000", "0000001000000000", "0000000000100000", "1000000000000000", "0000000001000000"};
    vector<int> agentStart = {12, 8};
    vector<int> agentTarget = {5, 1};
    int start = 10;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> corridors = {"010100", "101010", "010000", "100001", "010000", "000100"};
    vector<int> agentStart = {4, 2, 2, 5};
    vector<int> agentTarget = {5, 5, 3, 4};
    int start = 0;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> corridors = {"011000", "100111", "100000", "010000", "010000", "010000"};
    vector<int> agentStart = {3, 1, 3, 1};
    vector<int> agentTarget = {1, 4, 4, 3};
    int start = 5;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> corridors = {"011000000000000000", "100000000000010000", "100101000000000000", "001010110000001000", "000100001000000001", "001000000000000000", "000100000000000000", "000100000100000000", "000010000000000000", "000000010010000000", "000000000101100000", "000000000010000000", "000000000010000000", "010000000000000010", "000100000000000100", "000000000000001000", "000000000000010000", "000010000000000000"};
    vector<int> agentStart = {4, 5};
    vector<int> agentTarget = {5, 7};
    int start = 3;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> corridors = {"011000011000", "100100000000", "100011000000", "010000100000", "001000000001", "001000000010", "000100000000", "100000000100", "100000000000", "000000010000", "000001000000", "000010000000"};
    vector<int> agentStart = {9, 11, 8, 8, 8, 11, 8, 11};
    vector<int> agentTarget = {5, 3, 7, 5, 7, 8, 6, 9};
    int start = 1;
    int finish = 11;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> corridors = {"01010011000100", "10100000001000", "01001000000000", "10000000000000", "00100100100010", "00001000000000", "10000000000000", "10000000010000", "00001000000000", "00000001000000", "01000000000000", "10000000000000", "00001000000001", "00000000000010"};
    vector<int> agentStart = {0, 2, 2, 7, 1};
    vector<int> agentTarget = {13, 10, 8, 9, 3};
    int start = 13;
    int finish = 12;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> corridors = {"01000000000000000", "10111011000000000", "01000000010000000", "01000100001000000", "01000000000000000", "00010000000000000", "01000000100000000", "01000000000000000", "00000010000001000", "00100000000100000", "00010000000010001", "00000000010000000", "00000000001000000", "00000000100000110", "00000000000001000", "00000000000001000", "00000000001000000"};
    vector<int> agentStart = {1, 13, 15, 7, 4, 15};
    vector<int> agentTarget = {16, 4, 6, 11, 2, 6};
    int start = 6;
    int finish = 14;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> corridors = {"0100001000000000", "1011110000000000", "0100000000100000", "0100000100000000", "0100000000000000", "0100000001001000", "1000000010000000", "0001000000000001", "0000001000010000", "0000010000000000", "0010000000000000", "0000000010000000", "0000010000000110", "0000000000001000", "0000000000001000", "0000000100000000"};
    vector<int> agentStart = {9, 2, 9, 12, 14, 1, 11};
    vector<int> agentTarget = {1, 4, 15, 7, 3, 3, 6};
    int start = 0;
    int finish = 7;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> corridors = {"01111000000011110", "10100001001010110", "11011100100110010", "10101110101001100", "10110111100101001", "00111010000101000", "00011100101100011", "01001000100110101", "00111011011001110", "00000000101010100", "01010010110001101", "00101111000011111", "11100001010101010", "10011100101110001", "11010001111100011", "11100010100110101", "00001011001101110"};
    vector<int> agentStart = {10, 10, 10, 11, 3, 2, 1, 13};
    vector<int> agentTarget = {3, 7, 0, 0, 13, 16, 12, 4};
    int start = 12;
    int finish = 9;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> corridors = {"01101110111100010", "10111111000010010", "11001010000001000", "01000010110011110", "11100000001100011", "11000010100101010", "11110100001010111", "01000000001001110", "10010100010000001", "10010000101110110", "10001011010101000", "10001100011001010", "01010010010000100", "00110101001100010", "00010011010010000", "11011111010101001", "00001010100000010"};
    vector<int> agentStart = {14, 15, 2, 12};
    vector<int> agentTarget = {0, 13, 4, 7};
    int start = 4;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> corridors = {"01000010", "10110000", "01001000", "01000000", "00100101", "00001000", "10000000", "00001000"};
    vector<int> agentStart = {3, 1, 2};
    vector<int> agentTarget = {4, 3, 7};
    int start = 4;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> corridors = {"0110010001010011", "1000100000000100", "1001110110010000", "0010000100001000", "0110001010000001", "1010000010000000", "0000100000100000", "0011000000000000", "0010110000100010", "1000000000100000", "0000001011000000", "1010000000000000", "0001000000000000", "0100000000000000", "1000000010000000", "1000100000000000"};
    vector<int> agentStart = {2, 13, 11, 0, 7, 10, 3, 3};
    vector<int> agentTarget = {13, 9, 2, 7, 15, 14, 10, 4};
    int start = 5;
    int finish = 11;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> corridors = {"0111010", "1010111", "1100000", "1000010", "0100011", "1101100", "0100100"};
    vector<int> agentStart = {4, 4};
    vector<int> agentTarget = {3, 6};
    int start = 0;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> corridors = {"011111011100111", "101111101101000", "110100101111001", "111011000101000", "110101100101010", "110110010011101", "011010010110100", "100001101101011", "111000010101011", "111110111011000", "001001100100001", "011111011100110", "100001100001011", "100010011001101", "101001011010110"};
    vector<int> agentStart = {11, 5, 6, 3, 6, 10};
    vector<int> agentTarget = {14, 11, 7, 8, 10, 2};
    int start = 7;
    int finish = 9;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19999999999999996;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> corridors = {"01010111110010", "10101010000001", "01001100000000", "10000101010000", "01100000110100", "10110001000011", "11000000101110", "10010100000010", "10001010000000", "10011000000000", "00000010000000", "00001010000000", "10000111000001", "01000100000010"};
    vector<int> agentStart = {0, 6, 4, 8, 1, 9, 12, 6, 12};
    vector<int> agentTarget = {8, 8, 7, 7, 4, 0, 1, 12, 7};
    int start = 5;
    int finish = 8;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> corridors = {"01011010101110", "10101010110101", "01011101001111", "10101001010001", "11110101000001", "00101000101011", "11000001000011", "00111010111011", "11000101000101", "01010001000111", "10100101000110", "11100000111010", "10100111011100", "01111111110000"};
    vector<int> agentStart = {12, 13, 0, 7, 6, 10, 12, 11};
    vector<int> agentTarget = {11, 5, 12, 12, 8, 7, 7, 0};
    int start = 9;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> corridors = {"0110", "1011", "1100", "0100"};
    vector<int> agentStart = {1, 3, 3, 1, 1, 3, 1, 3, 2, 2};
    vector<int> agentTarget = {2, 0, 2, 3, 2, 1, 3, 2, 0, 0};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> corridors = {"0100", "1010", "0101", "0010"};
    vector<int> agentStart = {3};
    vector<int> agentTarget = {2};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> corridors = {"010100", "101010", "010010", "100001", "011000", "000100"};
    vector<int> agentStart = {5};
    vector<int> agentTarget = {4};
    int start = 4;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> corridors = {"011010", "100011", "100100", "001001", "110001", "010110"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {2};
    int start = 3;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> corridors = {"011110", "100111", "100011", "110011", "111100", "011100"};
    vector<int> agentStart = {3};
    vector<int> agentTarget = {0};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> corridors = {"011001", "100001", "100110", "001000", "001000", "110000"};
    vector<int> agentStart = {2};
    vector<int> agentTarget = {5};
    int start = 5;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> corridors = {"010101", "101011", "010000", "100010", "010100", "110000"};
    vector<int> agentStart = {4, 3};
    vector<int> agentTarget = {0, 2};
    int start = 5;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> corridors = {"010001", "101010", "010110", "001000", "011001", "100010"};
    vector<int> agentStart = {3};
    vector<int> agentTarget = {1};
    int start = 1;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> corridors = {"010000", "101000", "010110", "001000", "001001", "000010"};
    vector<int> agentStart = {0};
    vector<int> agentTarget = {1};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> corridors = {"011000", "100100", "100001", "010010", "000100", "001000"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {2};
    int start = 0;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> corridors = {"011111", "100100", "100001", "110001", "100000", "101100"};
    vector<int> agentStart = {1, 0, 0};
    vector<int> agentTarget = {2, 4, 5};
    int start = 3;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> corridors = {"011110", "100001", "100000", "100000", "100000", "010000"};
    vector<int> agentStart = {5, 5, 4};
    vector<int> agentTarget = {2, 3, 1};
    int start = 0;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> corridors = {"011101", "100000", "100110", "101000", "001000", "100000"};
    vector<int> agentStart = {2, 1, 0};
    vector<int> agentTarget = {3, 2, 4};
    int start = 3;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> corridors = {"011011", "100000", "100110", "001001", "101000", "100100"};
    vector<int> agentStart = {0, 1, 3, 3, 2};
    vector<int> agentTarget = {3, 5, 1, 1, 5};
    int start = 5;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> corridors = {"010000", "101100", "010010", "010001", "001000", "000100"};
    vector<int> agentStart = {5, 4};
    vector<int> agentTarget = {1, 3};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> corridors = {"010100", "101010", "010011", "100000", "011000", "001000"};
    vector<int> agentStart = {4, 0, 5};
    vector<int> agentTarget = {1, 1, 2};
    int start = 2;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> corridors = {"011111", "100010", "100011", "100011", "111101", "101110"};
    vector<int> agentStart = {0, 3, 3, 3, 2};
    vector<int> agentTarget = {5, 2, 2, 2, 1};
    int start = 1;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8518518518518519;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> corridors = {"011000", "100100", "100101", "011010", "000100", "001000"};
    vector<int> agentStart = {2, 0};
    vector<int> agentTarget = {5, 2};
    int start = 4;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> corridors = {"01100", "10011", "10000", "01000", "01000"};
    vector<int> agentStart = {3, 4};
    vector<int> agentTarget = {1, 1};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> corridors = {"01011", "10110", "01000", "11000", "10000"};
    vector<int> agentStart = {4, 1};
    vector<int> agentTarget = {2, 3};
    int start = 3;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> corridors = {"01000", "10100", "01011", "00100", "00100"};
    vector<int> agentStart = {1, 4};
    vector<int> agentTarget = {4, 2};
    int start = 0;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> corridors = {"01100", "10100", "11011", "00101", "00110"};
    vector<int> agentStart = {4, 1};
    vector<int> agentTarget = {3, 3};
    int start = 0;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> corridors = {"01010", "10110", "01001", "11001", "00110"};
    vector<int> agentStart = {2, 2};
    vector<int> agentTarget = {3, 4};
    int start = 1;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> corridors = {"01110", "10100", "11001", "10001", "00110"};
    vector<int> agentStart = {4, 4};
    vector<int> agentTarget = {0, 2};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> corridors = {"011", "101", "110"};
    vector<int> agentStart = {0};
    vector<int> agentTarget = {1};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> corridors = {"011", "101", "110"};
    vector<int> agentStart = {0};
    vector<int> agentTarget = {1};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> corridors = {"011", "101", "110"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {0};
    int start = 0;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> corridors = {"011", "101", "110"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {0};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> corridors = {"011", "100", "100"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {2};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> corridors = {"010000010000000", "101000000000000", "010100000000000", "001010000000000", "000101000000000", "000010100010000", "000001010000000", "100000101000000", "000000010001000", "000000000001100", "000001000000010", "000000001100101", "000000000101011", "000000000010100", "000000000001100"};
    vector<int> agentStart = {0, 9, 9};
    vector<int> agentTarget = {4, 14, 14};
    int start = 8;
    int finish = 10;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> corridors = {"01101", "10010", "10010", "01100", "10000"};
    vector<int> agentStart = {2, 4};
    vector<int> agentTarget = {4, 0};
    int start = 1;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> corridors = {"01000", "10110", "01010", "01101", "00010"};
    vector<int> agentStart = {4, 1};
    vector<int> agentTarget = {3, 4};
    int start = 0;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> corridors = {"01010", "10101", "01000", "10000", "01000"};
    vector<int> agentStart = {0, 0};
    vector<int> agentTarget = {4, 3};
    int start = 1;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> corridors = {"01000", "10100", "01011", "00100", "00100"};
    vector<int> agentStart = {4, 2};
    vector<int> agentTarget = {2, 0};
    int start = 3;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> corridors = {"01000", "10110", "01011", "01101", "00110"};
    vector<int> agentStart = {4, 1};
    vector<int> agentTarget = {2, 4};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> corridors = {"01011", "10100", "01000", "10000", "10000"};
    vector<int> agentStart = {0, 2};
    vector<int> agentTarget = {2, 3};
    int start = 3;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> corridors = {"01111", "10000", "10001", "10001", "10110"};
    vector<int> agentStart = {4, 2};
    vector<int> agentTarget = {3, 3};
    int start = 3;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> corridors = {"01110", "10001", "10010", "10100", "01000"};
    vector<int> agentStart = {2, 0};
    vector<int> agentTarget = {4, 4};
    int start = 3;
    int finish = 2;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> corridors = {"01101", "10010", "10000", "01000", "10000"};
    vector<int> agentStart = {1, 1};
    vector<int> agentTarget = {2, 0};
    int start = 3;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> corridors = {"01100", "10000", "10011", "00100", "00100"};
    vector<int> agentStart = {1, 3};
    vector<int> agentTarget = {2, 0};
    int start = 0;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> corridors = {"01100", "10011", "10000", "01000", "01000"};
    vector<int> agentStart = {0, 3};
    vector<int> agentTarget = {2, 1};
    int start = 4;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> corridors = {"01001", "10100", "01011", "00100", "10100"};
    vector<int> agentStart = {3, 4};
    vector<int> agentTarget = {1, 2};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> corridors = {"01001", "10110", "01000", "01000", "10000"};
    vector<int> agentStart = {0, 2};
    vector<int> agentTarget = {1, 3};
    int start = 4;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> corridors = {"01000", "10110", "01010", "01101", "00010"};
    vector<int> agentStart = {1, 3};
    vector<int> agentTarget = {2, 2};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> corridors = {"01001", "10110", "01000", "01000", "10000"};
    vector<int> agentStart = {0, 1};
    vector<int> agentTarget = {4, 0};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> corridors = {"01010", "10100", "01011", "10100", "00100"};
    vector<int> agentStart = {0, 0, 0, 0, 0, 0};
    vector<int> agentTarget = {1, 4, 1, 4, 4, 4};
    int start = 3;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> corridors = {"01111", "10100", "11010", "10100", "10000"};
    vector<int> agentStart = {3, 4, 1, 3, 3, 3, 3, 3, 3, 3};
    vector<int> agentTarget = {1, 3, 0, 1, 1, 1, 1, 1, 1, 1};
    int start = 2;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.99609375;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> corridors = {"01101", "10010", "10010", "01100", "10000"};
    vector<int> agentStart = {0, 4};
    vector<int> agentTarget = {1, 3};
    int start = 3;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> corridors = {"01110", "10001", "10000", "10000", "01000"};
    vector<int> agentStart = {1, 4};
    vector<int> agentTarget = {0, 3};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> corridors = {"0110100000000011100000100", "1000100000000000000100000", "1001000000000100100000000", "0010010000011001000010000", "1100000000000000000000101", "0001001011000001000000000", "0000010101000000000000000", "0000001000100000000010000", "0000010001100000000000000", "0000011010000000000000000", "0000000110000000010000000", "0001000000000000100000000", "0001000000000010000000100", "0010000000000000000101100", "1000000000001000001110010", "1001010000000000000001000", "1010000000010000001010000", "0000000000100000000000000", "0000000000000010100010000", "0100000000000110000000000", "0001000100000010101000000", "0000000000000101000000000", "1000100000001100000000001", "0000000000000010000000000", "0000100000000000000000100"};
    vector<int> agentStart = {21, 6, 20, 13, 20, 6, 2, 6, 11, 11};
    vector<int> agentTarget = {12, 5, 13, 18, 15, 19, 4, 11, 0, 19};
    int start = 16;
    int finish = 15;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> corridors = {"0100000100010010110100000", "1010000011000101000111000", "0101110000011000100001000", "0010011110101000000110010", "0010001001010000000100000", "0011000001001101000001001", "0001100000101010010010010", "1001000000011010001000010", "0101000001000000000000000", "0100110010000010000000001", "0001001000000001010110000", "1010100100000001110000000", "0011011100000000100000001", "0100010000000000010010000", "1000001101000000000011001", "0100010000110000000100001", "1010000000011000000001001", "1000001000110100000001010", "0000000100000000000100000", "1101100000100001001000100", "0101001000100110000000000", "0110010000000010110000010", "0000000000000000000100001", "0001001100000000010001000", "0000010001001011100000100"};
    vector<int> agentStart = {1, 1, 8, 14, 16, 23, 11, 14, 17, 8};
    vector<int> agentTarget = {17, 2, 15, 4, 22, 24, 24, 1, 4, 0};
    int start = 9;
    int finish = 14;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> corridors = {"0110100000000101100000100", "1011010011000000000011000", "1100010000000010000000100", "0100001101001010110000010", "1000000000001000100000010", "0110000100001000110010010", "0001000001001010001011000", "0001010000100100000000110", "0100000000110011001100011", "0101001000011010001000000", "0000000110001000000000000", "0000000011000000100000000", "0001111001100100000000011", "1000000100001001001100100", "0011001011000001000001000", "1000000010000110000000000", "1001110000010000000000001", "0001010000000000000000010", "0000001011000100000011000", "0000000010000100000000100", "0100011000000000001000100", "0100001000000010001000000", "1010000100000100000110010", "0001110110001000010000100", "0000000010001000100000000"};
    vector<int> agentStart = {18, 15, 0, 19, 4, 18, 14, 2, 1, 6};
    vector<int> agentTarget = {12, 10, 14, 1, 23, 14, 21, 7, 19, 17};
    int start = 23;
    int finish = 24;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> corridors = {"0101000111110110110011000", "1010111101100101010001100", "0100001110110011000011011", "1000100011011000011010100", "0101011101110011010010001", "0100101101100010010100111", "0110110101110111000111101", "1110111011110001011100111", "1011000101110010010110110", "1101111110111110000001011", "1110111111010110000111010", "1011101111100111001110001", "0001000001000001010010111", "1100001001110001010000010", "1010111011110000011011111", "0110101100011100101010110", "1000000000000001010000000", "1101110110001110101110000", "0001000100010011010011111", "0000011110110000010000110", "1011101010111011011000100", "1110001001100010001000110", "0101011110001011001111000", "0010010111101111001101000", "0010111101011010001000000"};
    vector<int> agentStart = {23, 18, 16, 15, 24, 17, 13, 22, 10, 9};
    vector<int> agentTarget = {15, 11, 21, 10, 2, 23, 18, 19, 23, 13};
    int start = 1;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> corridors = {"0100001000001001000001000", "1010000100000000010010000", "0101010100100010010000000", "0010100010010100000100000", "0001000100000000000000000", "0010000000000000010000000", "1000000000000000101000000", "0110100000000000001000000", "0001000001000000000000000", "0000000010000000000000000", "0010000000000000000001000", "0001000000000000000000000", "1000000000000000000000000", "0001000000000010000000101", "0010000000000100000000000", "1000000000000000000000110", "0000001000000000000000000", "0110010000000000000000000", "0000001100000000000000000", "0001000000000000000000000", "0100000000000000000000000", "1000000000100000000000000", "0000000000000101000000000", "0000000000000001000000000", "0000000000000100000000000"};
    vector<int> agentStart = {11, 3, 13, 16, 5, 15, 3, 23, 4, 6};
    vector<int> agentTarget = {0, 24, 8, 4, 1, 11, 8, 9, 7, 4};
    int start = 12;
    int finish = 20;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> corridors = {"0111110011010111101100110", "1011100000101001110111001", "1101111110011111010110111", "1110110111011010101100111", "1111001101010101011111100", "1011000010101011111000111", "0010100010000010111111111", "0011100011111111110000111", "1011011100111010011100000", "1001100100111110011010100", "0100010111001011010111000", "1011100111001011011110110", "0111010111110000110010110", "1010100101000011101111101", "1011011111110101111001110", "1110110100110110000110010", "1101011100001110001010011", "0110111111111010001111100", "1001111011010110110011011", "1111101010110101010010101", "0110101001111101111101110", "0100101000100110011010000", "1011111101011110010110000", "1011011100011011101010001", "0111011100000100101100010"};
    vector<int> agentStart = {5, 1, 14, 22, 24, 1, 23, 5, 10, 22};
    vector<int> agentTarget = {18, 23, 7, 23, 15, 13, 8, 1, 7, 13};
    int start = 11;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11111111111111116;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> corridors = {"0110011001010000100000111", "1000101000001100101011101", "1001100000010011111000000", "0010100010101101010000010", "0111001111000001011000011", "1000000100110101010100010", "1100100111011010101000000", "0000111001100000011001111", "0001101000010011011001111", "1000101100000000100001001", "0001010100001110000101011", "1010011010000101001010011", "0101001000100001100110100", "0101010000110011001000110", "0010001010100101000010011", "0011110010011110101110100", "1110001001001001010100001", "0011110110000000101011000", "0110101110010101010101000", "0000010000101001101010110", "0100000000011011010100010", "0100000111100000011000011", "1100000110001101000100011", "1001110110110110000111101", "1100100111110010100001110"};
    vector<int> agentStart = {13, 2, 7, 2, 17, 4, 14, 19, 23, 18};
    vector<int> agentTarget = {1, 18, 6, 10, 16, 12, 4, 4, 15, 10};
    int start = 3;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32499999999999996;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> corridors = {"0110001000000000000010010", "1000000010000000000000000", "1001100001000000000000000", "0010000000100010000001000", "0010010000000000000000000", "0000100000000000000000100", "1000000100001000100000000", "0000001000010011000000000", "0100000001000000100000000", "0010000010100000000000010", "0001000001000000000000000", "0000000100000100100000000", "0000001000000000000000000", "0000000000010000000000000", "0001000100000000001000000", "0000000100000000000000000", "0000001010010000010100000", "0000000000000000100000000", "0000000000000010000000000", "0000000000000000100000000", "1000000000000000000000001", "0001000000000000000000000", "0000010000000000000000000", "1000000001000000000000000", "0000000000000000000010000"};
    vector<int> agentStart = {22, 9, 13, 7, 15, 19, 0, 11, 3, 1};
    vector<int> agentTarget = {12, 10, 1, 11, 2, 18, 3, 19, 14, 16};
    int start = 2;
    int finish = 24;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> corridors = {"0111100000000101000000000", "1000000000110000000001000", "1000000100000001010001100", "1000100000000000001001100", "1001010000000000011100001", "0000101101101001001011000", "0000010010100000010000000", "0010010010100010001000000", "0000001100000000000001100", "0000010000000000000000000", "0100011100000011100100100", "0100000000001000000000000", "0000010000010100000011001", "1000000000001000110000010", "0000000100100000000000110", "1010010000100000000100010", "0000000000100100000010001", "0010101000000100000100000", "0001110100000000000000010", "0000100000100001010001000", "0000010000001000100000000", "0111010010001000000100000", "0011000010100010000000000", "0000000000000111001000000", "0000100000001000100000000"};
    vector<int> agentStart = {12, 18, 0, 9, 5, 21, 19, 3, 12, 1};
    vector<int> agentTarget = {7, 16, 2, 18, 16, 20, 0, 18, 4, 10};
    int start = 8;
    int finish = 12;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> corridors = {"0100000010001000000000001", "1011100000000000000000000", "0100000101101000000000000", "0100010000000010000000000", "0100000000000000000000000", "0001001000001000000100000", "0000010001000000000000000", "0010000000010000000000100", "1000000000000001100000010", "0010001000000100000000000", "0010000000000000000000000", "0000000100000000010100000", "1010010000000100000001000", "0000000001001000000000000", "0001000000000000001000000", "0000000010000000000000010", "0000000010000000000000000", "0000000000010000000110010", "0000000000000010000000100", "0000010000010000010000000", "0000000000000000010000000", "0000000000001000000000000", "0000000100000000001000001", "0000000010000001010000000", "1000000000000000000000100"};
    vector<int> agentStart = {4, 3, 13, 22, 22, 14, 22, 9, 1, 22};
    vector<int> agentTarget = {22, 10, 18, 20, 15, 4, 9, 7, 20, 6};
    int start = 20;
    int finish = 14;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33333333333333326;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> corridors = {"0101100101000001000000110", "1010000010100000010000011", "0100011000000000000000000", "1000000000001000010001100", "1000000000000000000000001", "0010000000000000000100000", "0010000000000000000000101", "1000000000011000000000000", "0100000000000000000010001", "1000000000100010000010000", "0100000001000000000000000", "0000000100000100100000000", "0001000100000110010000010", "0000000000011010000000000", "0000000001001100000000000", "1000000000000000011000000", "0000000000010000000000000", "0101000000001001001100000", "0000000000000001010000000", "0000010000000000010000001", "0000000011000000000000000", "0001000000000000000000100", "1001001000000000000001000", "1100000000001000000000001", "0100101010000000000100010"};
    vector<int> agentStart = {0, 21, 15, 0, 5, 5, 7, 19, 17, 21};
    vector<int> agentTarget = {7, 1, 4, 4, 4, 3, 18, 6, 24, 4};
    int start = 10;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> corridors = {"0101010010010000110011000", "1010110111011011101110000", "0100111101110010110001000", "1000110101101000010101000", "0111000110110110111101100", "1111001000101100110000110", "0010010010001100001110011", "0111100011101001101011110", "1100101100100010011100010", "0111000100000110001011011", "0011110110001001111000011", "1110100000000100011100111", "0101011100100000001101000", "0000111001010000010110000", "0110100011000001110001010", "0100000100100010010010000", "1110110100100010000010001", "1011110010110111000101000", "0100101111111000000110000", "0101101010011100011011111", "1100001101000101101100100", "1011100101001010010100100", "0000110100010000000111001", "0000011111110010000100001", "0000001001110000100100110"};
    vector<int> agentStart = {14, 16, 23, 11, 20, 4, 1, 23, 2, 12};
    vector<int> agentTarget = {21, 1, 7, 8, 4, 11, 17, 12, 24, 3};
    int start = 5;
    int finish = 17;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1428571428571428;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> corridors = {"0101000100100111000000100", "1010011000000100101000010", "0100100100011000010001010", "1000101100010100111001011", "0011000000000101110100000", "0100001001000000101010001", "0101010010001111001001001", "1011000010101000100010111", "0000001101100101111011001", "0000010010100100000100101", "1000000111000000000100000", "0011000000000101111110100", "0010001100000001000001101", "1101101011010000010110000", "1000001000000001101000000", "1000101010011010010011100", "0101110110010010010100010", "0011100010010101100000010", "0101011010010010000100111", "0000100001110100101010111", "0000010110010101000100000", "0011001010001001000000000", "1000000101011001001100010", "0111000100000000111100100", "0001011111001000001100000"};
    vector<int> agentStart = {10, 17, 0, 7, 9, 8, 4, 1, 20, 14};
    vector<int> agentTarget = {7, 2, 12, 12, 6, 0, 23, 8, 2, 16};
    int start = 21;
    int finish = 14;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> corridors = {"0110110011010111010111100", "1001101001001100010011001", "1001111011011110101011001", "0110011100011111110000111", "1110011110101110111011001", "1011100001001111100110111", "0111100101110001100111001", "0001101001110011111011110", "1010100000100110100110101", "1110011100010001010011010", "0000101110001010111101010", "1011001101000111101100101", "0111110000100010011011010", "1111110010010010001100110", "1011110110111101111100010", "1001011101010010101011011", "0011111110110011001100110", "1101100101101010001111111", "0010100100111111110101011", "1000011010110110111000101", "1110111111001001010001101", "1110101101101001011010011", "1001010110010100110110011", "0001010101101111111001101", "0111111010010001011111110"};
    vector<int> agentStart = {10, 0, 7, 15, 19, 10, 8, 17, 11, 16};
    vector<int> agentTarget = {4, 8, 2, 23, 9, 12, 23, 21, 16, 4};
    int start = 12;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> corridors = {"0110011100000001001010100", "1011101100100001000011001", "1100110011000000101101001", "0100000110001000010010010", "0110000000011010000110100", "1010000101000001010101100", "1100000110000001101010000", "1101011001110000011011001", "0011001001000011001101111", "0010010110000010100001000", "0100000100001001101000001", "0000100100001100110010110", "0001100000110100111110101", "0000000000011000010111000", "0000100011000000110011101", "1100011010100000001100010", "0010001001111010000001100", "0001010100011110001000010", "1010001110101001010010000", "0010110010001101000011001", "1101101100011110001101001", "0110010111000110100110000", "1000110010011010100000001", "0001000010010001010000000", "0110000110101010000110100"};
    vector<int> agentStart = {22, 20, 1, 0, 10, 10, 3, 7, 20, 8};
    vector<int> agentTarget = {10, 15, 24, 2, 5, 15, 7, 8, 14, 4};
    int start = 18;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19999999999999996;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> corridors = {"0111110110010001001101110", "1010011000011100100010100", "1101101110111011001110100", "1010110110110000100101010", "1011001101000100000101001", "1101000010011110000110100", "0110100110001110001001101", "1011101011101001100010000", "1011011101111001000000001", "0000100110000010011001100", "0011000110000110000100001", "1111010010000001000100010", "0110011110000100100000010", "0100111000101000000001100", "0010011001100000101110100", "1010000110010000110000011", "0101000100001011000101001", "0000000001000001001100111", "1010001001000010010010010", "1011110000110010110001000", "0110010100000010001000001", "1001101001000100100100001", "1110011001000110010000000", "1001000000011001011000000", "0000101010100001110011000"};
    vector<int> agentStart = {2, 16, 6, 5, 4, 5, 17, 0, 10, 10};
    vector<int> agentTarget = {3, 13, 16, 3, 13, 16, 11, 18, 14, 17};
    int start = 1;
    int finish = 5;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.19999999999999996;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> corridors = {"0110000010010100000100000", "1001010010001000100110001", "1000010100001001000001110", "0100100000000110100110100", "0001010110000000101001000", "0110101001100000000001000", "0000010101010010100000000", "0010101000010010000110010", "1100100000000010100001000", "0000011000000100110010010", "0000010000010110110000000", "1000001100100101110000110", "0110000000000100111000100", "1001000001111000010000010", "0001001110100000001100001", "0010000000010000000000000", "0101101011111000000010010", "0000000001111100000001001", "0000100000001010000000000", "1101000100000010000001000", "0101000101000000100000100", "0010110010000000010100010", "0011000000011000000010000", "0010000101010100100001000", "0100000000000010010000000"};
    vector<int> agentStart = {15, 22, 18, 10, 20, 5, 8, 21, 17, 21};
    vector<int> agentTarget = {9, 2, 0, 1, 10, 9, 4, 1, 21, 14};
    int start = 9;
    int finish = 10;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> corridors = {"0110011111101001011110011", "1011100011101011100111100", "1101100101111011011010100", "0110111011010110100101111", "0111011001011010101111011", "1001101110101100101110011", "1001110011110111100111111", "1010010001111111000000111", "1101011001110001011111110", "1111101110110100101110011", "1110011111011011100010111", "0011101111100010101000110", "1110110100100110010101011", "0001011101001010101110100", "0111101100111101110010100", "1110001110100010101011100", "0101111001110111000011111", "1010000010001010001111010", "1010110011010101010111111", "1101111011001100011010101", "1110111011100111111100101", "0101101010001001111000111", "0111001110110111101111010", "1001111111111000111001100", "1001111101101000101111000"};
    vector<int> agentStart = {10, 17, 19, 11, 2, 21, 21, 0, 21, 10};
    vector<int> agentTarget = {8, 0, 7, 5, 15, 7, 19, 8, 6, 2};
    int start = 12;
    int finish = 4;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20000000000000007;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> corridors = {"0101100010000000000000000", "1010000000100100000000000", "0100011001000000100001010", "1000100000010000000000010", "1001000000001010000000000", "0010000100100000000000010", "0010000000000010001000100", "0000010000000101000000001", "1000000000000000010001000", "0010000000010000000000000", "0100010000000000001000000", "0001000001000000000010000", "0000100000000000001001101", "0100000100000000001000000", "0000101000000000000000000", "0000000100000000000100010", "0010000000000000000000100", "0000000010000000000000000", "0000001000101100000000001", "0000000000000001000000000", "0000000000010000000001010", "0010000010001000000010001", "0000001000001000100000000", "0011010000000001000010001", "0000000100001000001001010"};
    vector<int> agentStart = {20, 16, 18, 13, 12, 18, 21, 23, 24, 14};
    vector<int> agentTarget = {23, 0, 14, 14, 17, 7, 8, 17, 22, 1};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> corridors = {"0101101100001000001100001", "1010010110010010110100110", "0100011011000001100111110", "1000100111111010010111001", "1001011010110110110110011", "0110101101000100110101100", "1010110010101010101111101", "1101010001000010011000001", "0111101001001010011010001", "0011010110001101001001010", "0001101000001010101101110", "0101100000001101011111010", "1001001011110111110111010", "0000110001011011100011011", "0101101110101101010000001", "0010000001011110111000010", "0110111000101101011101101", "0101110110011011101100011", "1000001111110001110111101", "1111111000111000111000110", "0011101010011100001000000", "0011011001111100101000011", "0110011000100000101100001", "0110100001111101010101001", "1001101110000110111001110"};
    vector<int> agentStart = {12, 23, 21, 11, 9, 14, 7, 0, 7, 11};
    vector<int> agentTarget = {13, 4, 20, 20, 14, 10, 13, 16, 3, 14};
    int start = 2;
    int finish = 13;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> corridors = {"0100001111010110011001000", "1010101100000010000100011", "0101010000100000100001000", "0010100010100110001000101", "0101000001101110000100100", "0010000010000010110100100", "1100000000000101101110011", "1100000000100001111010011", "1001010001111110000000110", "1000100010001001010001011", "0011100110000001100010000", "1000000010001010101100000", "0000100011010010101011101", "1001101010000001010000000", "1101110010011000011000110", "0000001101100100000001000", "0010011100111000001100011", "1000010101000110000010100", "1001001100011010100000111", "0100111000010000100000011", "0000001100101000010001000", "1010000001001001000010100", "0001110010001010011001000", "0100001111000010101100000", "0101001101001000101100000"};
    vector<int> agentStart = {3, 6, 1, 3, 19, 22, 11, 4, 8, 6};
    vector<int> agentTarget = {13, 1, 3, 16, 5, 5, 16, 15, 23, 13};
    int start = 23;
    int finish = 12;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> corridors = {"0101100010110000101101100", "1010011011100011101101000", "0101010100100011010001010", "1010000100101000010011010", "1000010101111110001110100", "0110101010000100000101100", "0100010100100110101000010", "0011101001000000000010000", "1100010000110100000111011", "0100100100110001100111101", "1111101011000100000100110", "1000100011000000011000010", "0001100000000010010111001", "0000111010100011101100000", "0110101000001101101110110", "0110000001000110111010000", "1100001001000111000000100", "0011000000011001000010010", "1100101000010111000100001", "1100110011101110001000010", "0001100111001011010000100", "1111010011001000000000000", "1000110001100010100010000", "0011001010110010010100000", "0000000011001000001000000"};
    vector<int> agentStart = {16, 6, 10, 21, 13, 0, 21, 10, 19, 1};
    vector<int> agentTarget = {11, 19, 8, 4, 18, 12, 7, 5, 10, 6};
    int start = 4;
    int finish = 19;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.34375;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> corridors = {"0111000100110111110000111", "1011110001100010111001000", "1101000010011100110110100", "1110111101101011111101110", "0101001110101111010011011", "0101000011110101001010000", "0001100110110101001100001", "1001101011101110110110111", "0010111101110011011100010", "0101010110110010011101001", "1101111111010111000101110", "1010011011100010011001111", "0011100100000011111001101", "1010111100100011010110001", "1101100111111101011011010", "1001111010101110101011101", "1111000100001001010111001", "1111100111011110100110111", "0101011011011011000111011", "0011001111100100111000101", "0010110100000111111000110", "0101100001111011101000100", "1011000100111001010111000", "1001100110110010011010001", "1000101101011101111100010"};
    vector<int> agentStart = {16, 2, 8, 19, 16, 3, 24, 2, 23, 13};
    vector<int> agentTarget = {17, 15, 18, 24, 17, 6, 2, 23, 11, 14};
    int start = 7;
    int finish = 22;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.125;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> corridors = {"0111111111001100001111010", "1010111011110110111000010", "1101111111010101000111100", "1010111010001000111101000", "1111001101010111011101001", "1111000110100110100001010", "1111100111110011010001100", "1010111011110111111011111", "1111011100010010001010001", "1110101100110010111111101", "0100011101001001011111001", "0110101111001011101110001", "1001000000110010000111100", "1110110100000001101111101", "0100111111011000001101110", "0010101100110100111111000", "0101010101010101000011011", "0101101101100001000111001", "1101100111110111000111001", "1011100001111111011010100", "1010000111111101111100001", "1011111101101111111000110", "0010001101001110000101001", "1100010100000010100001000", "0000100111110100111010100"};
    vector<int> agentStart = {0, 8, 12, 3, 15, 22, 2, 15, 11, 24};
    vector<int> agentTarget = {15, 0, 7, 5, 3, 23, 19, 12, 8, 8};
    int start = 4;
    int finish = 13;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11111111111111116;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> corridors = {"0110000111101001110000101", "1011111111011000101101011", "1100001000110010100111011", "0100101101100110000110111", "0101011011001001001110101", "0100101101000110110111100", "0111110000011010110110110", "1101010010010101011011001", "1100100101110101110110010", "1101110010101110001111011", "1011000011011110101111100", "0110001110101000101000110", "1100101001110110110111111", "0001010111101011011100111", "0011011001101100011101001", "1000100110000100101111101", "1110011010111001011000001", "1000011110001110100000101", "0100100101110111100010010", "0111111011101111000011111", "0011111111101001001100011", "0110010101101011000100110", "1001111000111101010101000", "0111001011011100001111001", "1111100101001111110110010"};
    vector<int> agentStart = {22, 5, 12, 17, 16, 15, 2, 9, 9, 13};
    vector<int> agentTarget = {23, 16, 18, 15, 7, 18, 15, 4, 17, 9};
    int start = 3;
    int finish = 10;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09999999999999998;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> corridors = {"0100000000", "1010100100", "0101001010", "0010010101", "0100001000", "0001000010", "0010100100", "0101001010", "0010010100", "0001000000"};
    vector<int> agentStart = {4, 9};
    vector<int> agentTarget = {5, 1};
    int start = 0;
    int finish = 9;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> corridors = {"0001110000000000000000001", "0001110000000000000000001", "0001110000000000000000001", "1110001110000000000000000", "1110001110000000000000000", "1110001110000000000000000", "0001110001110000000000000", "0001110001110000000000000", "0001110001110000000000000", "0000001110001110000000000", "0000001110001110000000000", "0000001110001110000000000", "0000000001110001110000000", "0000000001110001110000000", "0000000001110001110000000", "0000000000001110001110000", "0000000000001110001110000", "0000000000001110001110000", "0000000000000001110001100", "0000000000000001110001100", "0000000000000001110001100", "0000000000000000001110010", "0000000000000000001110010", "0000000000000000000001100", "1110000000000000000000000"};
    vector<int> agentStart = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> agentTarget = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23};
    int start = 23;
    int finish = 24;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6920538523425614;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> corridors = {"0110", "1000", "1001", "0010"};
    vector<int> agentStart = {3};
    vector<int> agentTarget = {2};
    int start = 1;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> corridors = {"0101", "1010", "0101", "1010"};
    vector<int> agentStart = {1};
    vector<int> agentTarget = {0};
    int start = 0;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> corridors = {"011", "101", "110"};
    vector<int> agentStart = {0};
    vector<int> agentTarget = {1};
    int start = 2;
    int finish = 1;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> corridors = {"00111000000000", "00001000000000", "10000100000000", "10000100000000", "11000010000000", "00110001000000", "00001000111000", "00000100000100", "00000010000010", "00000010000010", "00000010000010", "00000001000001", "00000000111001", "00000000000110"};
    vector<int> agentStart = {0, 0};
    vector<int> agentTarget = {13, 13};
    int start = 1;
    int finish = 12;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.84;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> corridors = {"0011000000", "0010000000", "1100110000", "1000001000", "0010000100", "0010000010", "0001000010", "0000100001", "0000011001", "0000000110"};
    vector<int> agentStart = {0};
    vector<int> agentTarget = {9};
    int start = 1;
    int finish = 8;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> corridors = {"0110000000001", "1001000000110", "1001000000000", "0110110000000", "0001001001100", "0001001000000", "0000110110000", "0000001000000", "0000001001000", "0000100010000", "0100100000000", "0100000000001", "1000000000010"};
    vector<int> agentStart = {1, 8};
    vector<int> agentTarget = {4, 12};
    int start = 7;
    int finish = 0;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9230769230769231;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> corridors = {"01000000", "10101000", "01010001", "00100000", "01000100", "00001010", "00000101", "00100010"};
    vector<int> agentStart = {4};
    vector<int> agentTarget = {7};
    int start = 0;
    int finish = 3;
    EscapeArtist* pObj = new EscapeArtist();
    clock_t start = clock();
    double result = pObj->bestRoute(corridors, agentStart, agentTarget, start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=11120&pm=7953
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
 
const int maxn=25+5;
const int oo=1000;
 
class EscapeArtist
{
public:
    int n;
    bool G[maxn][maxn];
    int D[maxn][maxn];
    double C[maxn][maxn];
    vector<int> path;
    double f[maxn][maxn],r[maxn][maxn];
    double calcL(int s,int t)
    {
        double &r=C[s][t];
        if (r>-1.0) return r;
        if (s==t) return r=1;
        r=0;
        for (int i=0;i<n;i++) if (D[s][i]==1 && D[s][i]+D[i][t]==D[s][t]) r+=calcL(i,t);
        return r;
    }
    double solveC(int s,int t,int d)
    {
        double &r=f[s][t];
        if (r>-1.0) return r;
        if (s==t) return 1.0;
        r=0;
        for (int i=0;i<n;i++) if (D[s][i]==1 && D[s][i]+D[i][t]==D[s][t]) 
        {
            if (d+1<path.size() && i==path[d+1]) 
                continue;
            if (d+1<path.size() && i==path[d] && s==path[d+1]) 
                continue;
            r+=solveC(i,t,d+1);
        }
        return r;
    }
    double getC(int src,int dest)
    {
        double &ret=r[src][dest];
        if (ret>-1.0) return ret;
        for (int i=0;i<n;i++) for (int j=0;j<n;j++) f[i][j]=-2;
        return ret=solveC(src,dest,0);
    }
    double solve(int src,int dest,int p1,int p2,int step)
    {
        int d=D[src][dest];
        if (step>d) 
            return (p2!=dest)?0:1;
        double result=0.0;
        for (int i=0;i<n;i++) if (D[src][i]==step-1)
            for (int j=0;j<n;j++) if (G[i][j] && D[src][i]+1+D[j][dest]==d)
                if (p2==j || (i==p2 && j==p1))
                    result+=getC(src,i)*C[j][dest]/getC(src,dest);
        return result;
    }
  double bestRoute(vector <string> corridors, vector <int> agentStart, vector <int> agentTarget, int start, int finish)
  {
    n=corridors.size();
        for (int i=0;i<n;i++) for (int j=0;j<n;j++) G[i][j]=corridors[i][j]=='1';
        for (int i=0;i<n;i++) for (int j=0;j<n;j++) D[i][j]=oo;
        for (int i=0;i<n;i++) D[i][i]=0;
        for (int i=0;i<n;i++) for (int j=0;j<n;j++) if (G[i][j]) D[i][j]=1;
        for (int k=0;k<n;k++) for (int i=0;i<n;i++) for (int j=0;j<n;j++) checkmin(D[i][j],D[i][k]+D[k][j]);
        for (int i=0;i<n;i++) for (int j=0;j<n;j++) C[i][j]=-2.0;
        for (int i=0;i<n;i++) for (int j=0;j<n;j++) calcL(i,j);
        double result=1.0;
        int nextk=-1,step=0;
        path.clear();
        for (int k=start;k!=finish;k=nextk)
        {
            for (int i=0;i<n;i++) for (int j=0;j<n;j++) r[i][j]=-2.0;
            path.push_back(k);
            step++;
            double bestr=-1.0;
            for (int i=0;i<n;i++) if (G[i][k] && D[i][finish]+1==D[k][finish])
            {
                double p=1.0;
                for (int v=0;v<agentStart.size();v++)
                    p*=(1.0-solve(agentStart[v],agentTarget[v],k,i,step));
                if (p>bestr) bestr=p,nextk=i;
            }
            result*=bestr;
        }
        return 1.0-result;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/