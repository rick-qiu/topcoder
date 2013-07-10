/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11483
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

class GameOfLifeDivTwo {
public:
    string theSimulation(string init, int T);
};

string GameOfLifeDivTwo::theSimulation(string init, int T) {
    string ret;
    return ret;
}


int test0() {
    string init = "01010";
    int T = 2;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string init = "010101";
    int T = 5;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "101010";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string init = "111010";
    int T = 58;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111111";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string init = "111111111";
    int T = 511;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string init = "110010000010111110010100001001";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "110000000001111110000000000001";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string init = "11111111111111111111111111111111111111111111111111";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string init = "00001111111111111111111111111111111110000000000000";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00001111111111111111111111111111111110000000000000";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string init = "11111111111111111111111111110000000001111111111111";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111110000000001111111111111";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string init = "11111111111111110000000000011100000000000001111111";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111110000000000011100000000000001111111";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string init = "00000000000001111111110000000000000000011111000000";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000001111111110000000000000000011111000000";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string init = "11111111101110000000000000000001111111110000000001";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111110000000000000000001111111110000000001";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string init = "11111111111111111111111111111111111100111100111011";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111100111100111111";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string init = "11110111111111111100011110011111110000000011111111";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111100011110011111110000000011111111";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string init = "00000000000000100000000111110001100000000000000110";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000111110001100000000000000110";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string init = "00000011111000000000011100000011001111111100111100";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000011111000000000011100000011001111111100111100";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string init = "01011100101001010001010110101010100101010110101010";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00111100000000000000011111111000000000111111110000";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string init = "01101010010110101010101011101011101010010101010101";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111000001111111111111111111111111000000000011111";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string init = "10101010101010100001101011010101010101101011010101";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111000000000001111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string init = "01011011010101010110010101010101001010101010100101";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111110000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string init = "01011010010101010101010101010101010110101101011010";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00111100000000000000001111111111111111111111111100";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string init = "01011010101010101010101011010101011010101010101001";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "01111111111111111111111111111111111111111000000000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string init = "01010010101101010101010101010101010101010110101010";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000111111111111111111111111111111111111110000";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string init = "10101010101010101010101010101010101100101010101010";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000111111111111111111111111100000000000000";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string init = "01010101010101011010101010101010101010101010101010";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000111111111111111111111111100000000000000000";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string init = "01010101010101010101010101010101010101010101010101";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "01010101010101010101010101010101010101010101010101";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string init = "1111101";
    int T = 7;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string init = "010101010101101010";
    int T = 6;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "000000111111111000";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string init = "111100111000";
    int T = 3;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111100111000";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string init = "00011010";
    int T = 9;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00011100";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string init = "01010011010011010101010101010101010";
    int T = 3;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00000011100011111010101010101010000";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string init = "1010110110010110";
    int T = 8;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111110001111";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string init = "0000001011010110101111101101001010111";
    int T = 2;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000111111111111111111110000011111";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string init = "0010100010011";
    int T = 3;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000011";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string init = "11111111111111111000100111111110010101111111";
    int T = 2;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111000000111111110000111111111";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string init = "0011";
    int T = 9;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0011";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string init = "001011010101010101010101010110100101010";
    int T = 5;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "000111111110101010101011111111000000000";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string init = "01101010101010101010101010101010101010";
    int T = 4;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "01111110101010101010101010101010100000";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string init = "0010000101011001000100100000100";
    int T = 5;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000001111000000000000000000";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string init = "0001100001110";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0001100001110";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string init = "101010101001011010101010101001010";
    int T = 2;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "101010100000111110101010100000010";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string init = "001101111101110010000001110110100";
    int T = 8;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "001111111111110000000001111111000";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string init = "101010101010101010101011010101010101010101010101";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "110101010101010101010111101010101010101010101011";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string init = "11101101";
    int T = 5;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string init = "000110101001010101001010110";
    int T = 8;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "000111100000000000000011110";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string init = "11110001011011100000101100000111111";
    int T = 9;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11110000111111100000011100000111111";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string init = "10101010101010101010101010101010101010101010101010";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "10101010101010101010101010101010101010101010101010";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string init = "11111111111111111111111111111111111111111111111111";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string init = "0101010101010101010101010101010101010101010101010";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0010101010101010101010101010101010101010101010100";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string init = "0101010101010101010101010101010101010101010101010";
    int T = 22;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000010100000000000000000000000";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string init = "0101010101010101010101010101010101010101010101010";
    int T = 23;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000001000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string init = "1010101010101010101010101010101010101010101010101";
    int T = 24;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string init = "1010101010101010101010101010101010101010101010101";
    int T = 25;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string init = "0101010101010101010101010101010101010101010101010";
    int T = 26;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string init = "111";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string init = "111";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string init = "110";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string init = "010";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "010";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string init = "00101110011";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00101110011";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string init = "101000100001000001111000111000110010101001";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "110000000000000001111000111000110000000001";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string init = "011100101010101010101111";
    int T = 9;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111100000000011111111111";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string init = "1111";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "1111";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string init = "101";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string init = "01010111011111111000000101011010101010010101";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111111111000000001111111100000000000";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string init = "111111111";
    int T = 100;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string init = "10101";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11011";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string init = "10101010101010101010101010101010101010101010101010";
    int T = 1000;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "10101010101010101010101010101010101010101010101010";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string init = "1010";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0101";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string init = "10010";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "00001";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string init = "0101";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "1010";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string init = "11010";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11101";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string init = "011";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string init = "0101";
    int T = 100;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0101";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string init = "10100";
    int T = 1;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "01000";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string init = "1110110101010101010";
    int T = 346;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111111111111";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string init = "0101010101";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "0101010101";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string init = "11111";
    int T = 0;
    GameOfLifeDivTwo* pObj = new GameOfLifeDivTwo();
    clock_t start = clock();
    string result = pObj->theSimulation(init, T);
    clock_t end = clock();
    delete pObj;
    string expected = "11111";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22834518&rd=14536&pm=11483
********************************************************************************
#line 2 "GameOfLifeDivTwo.cpp" 
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
 
using namespace std; 
 
class GameOfLifeDivTwo 
{ 
public: 
string theSimulation(string init, int T) 
{ 
string temp=init; 
int cnt=0;        
for(int k=0;k<T;k++) 
{ 
for(int i=0;i<init.length();i++)         
 { 
 cnt=0;        
 if(init[i]=='0') 
  cnt++; 
 if(init[i+1]=='0'&&i+1<init.length()) 
  cnt++; 
 if(init[i-1]=='0'&&i-1>=0) 
  cnt++; 
 if(i+1>=init.length()&&init[0]=='0') 
  cnt++; 
 if(i-1<0&&init[init.length()-1]=='0') 
  cnt++; 
 if(cnt>=2) 
  temp[i]='0'; 
 else 
  temp[i]='1';               
 } 
 init=temp; 
}   
return init; 
} 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/