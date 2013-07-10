/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10861
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

class MatrixGame {
public:
    vector<string> getMinimal(vector<string> matrix);
};

vector<string> MatrixGame::getMinimal(vector<string> matrix) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> matrix = {"000", "000", "000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "000", "000"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> matrix = {"010", "000", "110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "001", "011"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> matrix = {"111", "111", "111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"111", "111", "111"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> matrix = {"01010", "10101", "01010", "10101"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00011", "00011", "11100", "11100"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> matrix = {"11010100", "11110001", "00011101", "11111111", "01110100", "10000110", "00001001", "11010111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00001111", "00110100", "01011100", "01111101", "11001100", "11011001", "11111111"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> matrix = {"0"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> matrix = {"11"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"11"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> matrix = {"111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"111"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> matrix = {"0110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0011"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> matrix = {"11011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01111"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> matrix = {"000010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000001"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> matrix = {"0000011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000011"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> matrix = {"11100001"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00001111"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> matrix = {"1", "1"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> matrix = {"11", "10"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01", "11"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> matrix = {"001", "011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"001", "011"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> matrix = {"1111", "0000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000", "1111"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> matrix = {"11100", "00000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000", "00111"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> matrix = {"111010", "110110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"001111", "010111"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> matrix = {"0010011", "0010110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000111", "0001011"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> matrix = {"00101001", "00010100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00011100"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> matrix = {"0", "0", "1"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "0", "1"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> matrix = {"11", "11", "11"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"11", "11", "11"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> matrix = {"111", "001", "100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"001", "010", "111"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> matrix = {"0100", "1010", "0000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000", "0001", "0110"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> matrix = {"10101", "00101", "01101"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00011", "00111", "01011"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> matrix = {"011001", "011100", "110000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000011", "001101", "010101"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> matrix = {"0100010", "1010001", "1101000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000011", "0001101", "0110100"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> matrix = {"00100101", "01110110", "00101000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00001101", "01110101"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> matrix = {"0", "0", "0", "0"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "0", "0", "0"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> matrix = {"00", "11", "11", "01"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00", "01", "11", "11"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> matrix = {"010", "110", "110", "010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"001", "001", "011", "011"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> matrix = {"1011", "1110", "1010", "0000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000", "0011", "0111", "1011"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> matrix = {"10111", "00000", "01010", "11010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000", "00011", "00111", "11101"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> matrix = {"000110", "011110", "001010", "100011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000011", "000101", "001111", "110001"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> matrix = {"1001000", "1110100", "1011100", "1100000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000011", "0000101", "0011011", "0011101"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> matrix = {"11010110", "00100000", "00000111", "01000010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00000110", "00011010", "01101110"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> matrix = {"1", "0", "0", "0", "0"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "0", "0", "0", "1"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> matrix = {"01", "11", "01", "10", "00"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00", "01", "01", "10", "11"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> matrix = {"101", "001", "111", "001", "011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"001", "001", "011", "101", "111"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> matrix = {"1100", "0111", "1110", "0010", "0111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0001", "0110", "0111", "1011", "1011"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> matrix = {"00000", "00100", "01110", "01010", "01110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000", "00001", "00110", "00111", "00111"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> matrix = {"001001", "110100", "000101", "001100", "001010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000011", "000101", "000110", "001001", "110010"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> matrix = {"0010010", "0010001", "1111010", "0110111", "0000000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000000", "0000011", "0000101", "0011111", "1101011"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> matrix = {"01111010", "11001000", "00100111", "10001100", "10110010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00001011", "01110001", "01110110", "10111000"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> matrix = {"0", "0", "0", "1", "1", "1"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "0", "0", "1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> matrix = {"01", "00", "11", "10", "00", "01"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00", "00", "01", "01", "10", "11"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> matrix = {"101", "001", "001", "001", "000", "000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "000", "001", "001", "001", "011"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> matrix = {"1101", "0101", "1100", "0000", "0000", "0000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000", "0000", "0000", "0011", "0101", "0111"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> matrix = {"01000", "10100", "10010", "00001", "10011", "01001"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00001", "00010", "00011", "01100", "01101", "10100"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> matrix = {"100010", "000110", "010000", "001000", "011110", "111111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000001", "000010", "001100", "001111", "010100", "111111"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> matrix = {"0001011", "0100011", "1110111", "0110101", "1011010", "1100110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000111", "0001011", "0110101", "1010110", "1101001", "1110111"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> matrix = {"10000010", "10110110", "11010100", "00000001", "00011101", "10110101"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00000110", "00111001", "01011010", "10011011", "10011110"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> matrix = {"1", "1", "1", "1", "0", "0", "1"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "0", "1", "1", "1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> matrix = {"11", "11", "10", "00", "10", "10", "01"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00", "01", "01", "01", "10", "11", "11"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> matrix = {"000", "011", "000", "000", "010", "001", "001"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "000", "000", "001", "001", "010", "011"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> matrix = {"0100", "1011", "1101", "1000", "0000", "1000", "0111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000", "0001", "0001", "0010", "0111", "1101", "1110"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> matrix = {"10111", "00100", "10010", "11011", "01011", "10000", "00110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00001", "00010", "00101", "00110", "01111", "11100", "11101"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> matrix = {"000101", "000000", "101111", "000001", "010010", "001001", "100100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000000", "000001", "000011", "000101", "001010", "011111", "110000"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> matrix = {"0001101", "0010000", "1100111", "0111010", "1010101", "0001110", "1100110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000001", "0001110", "0010110", "0101011", "1010101", "1101100", "1111100"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> matrix = {"10001111", "10110001", "11100100", "01011000", "00100011", "10000000", "10111111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00001110", "00010111", "01100011", "10101101", "10111111", "11010000"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> matrix = {"1", "1", "1", "1", "1", "1", "0", "1"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1", "1", "1", "1", "1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> matrix = {"10", "01", "10", "11", "10", "00", "11", "00"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00", "00", "01", "01", "01", "10", "11", "11"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> matrix = {"110", "000", "010", "100", "001", "101", "001", "010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "001", "001", "010", "010", "100", "101", "110"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> matrix = {"1101", "1011", "1110", "1010", "1100", "0100", "0110", "0110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0001", "0011", "0011", "0101", "0110", "0111", "1101", "1110"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> matrix = {"10100", "01011", "01011", "01001", "00001", "11000", "00101", "10111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00001", "00011", "00101", "01010", "01100", "10011", "10011", "11101"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> matrix = {"100010", "000111", "000100", "100011", "100101", "011000", "101110", "111111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000001", "000110", "001011", "001101", "001110", "010111", "110000", "111111"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> matrix = {"1011101", "1000011", "0110000", "1110011", "1001111", "1100100", "0111000", "1001111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0000011", "0000111", "0011001", "0111110", "1101000", "1101011", "1111100", "1111100"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> matrix = {"01101110", "00000111", "00010111", "00111101", "01000111", "10110100", "10001101", "11011000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00001111", "00010111", "01100011", "01111000", "10101001", "11001011", "11010101"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> matrix = {"11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "11111111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "11111111"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> matrix = {"11111111", "01110111", "11111100", "11111111", "11111111", "11111111", "11111111", "11111101"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00111111", "01111111", "11001111", "11111111", "11111111", "11111111", "11111111", "11111111"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> matrix = {"10111111", "11111111", "11011111", "11010011", "01111101", "01000010", "11100101", "11011011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00011111", "00111111", "01111111", "11001101", "11110101", "11111110", "11111111"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> matrix = {"10101011", "00011110", "11001000", "01111011", "11011100", "11111011", "10111001", "10011110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00011111", "00111001", "00111011", "11001011", "11100011", "11101101", "11101111"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> matrix = {"11010111", "10010111", "11101011", "11010110", "11010101", "01001110", "00101100", "01111111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00011011", "01111001", "10111110", "11011111", "11101001", "11110001", "11111001"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> matrix = {"01101111", "01010100", "11001010", "00001000", "11111011", "11001001", "10011001", "11100001"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00001110", "00110011", "00110101", "01010011", "10110010", "11101011", "11110111"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> matrix = {"00001100", "00011110", "10001111", "00010010", "11101101", "00000101", "00101100", "10000100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00000101", "00001001", "00010011", "00101111", "01011111", "10100000", "10100011"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> matrix = {"10100001", "10000110", "10001001", "00111001", "00100000", "00011110", "00010000", "01000100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00000010", "00001100", "00110001", "01010011", "01110000", "10100100", "11000110"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> matrix = {"00000010", "00000000", "00000110", "00010000", "00000000", "00001001", "00110000", "00000011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000000", "00000000", "00000001", "00000010", "00000101", "00001001", "00010010", "00100100"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> matrix = {"00000000", "00010001", "00000000", "00100000", "00000000", "00000000", "00000000", "00001010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000000", "00000000", "00000000", "00000000", "00000000", "00000001", "00000110", "00011000"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> matrix = {"00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> matrix = {"00000000", "00000000", "01101101", "11101010", "00001001", "00110111", "10100001", "00000100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000000", "00000000", "00000001", "00000110", "00011010", "00101111", "01111100", "11001011"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> matrix = {"00001010", "00010111", "00011000", "01000010", "11010100", "00111110", "00010010", "01010101"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00000101", "00000110", "00001001", "00110011", "00111010", "01010111", "10011010"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> matrix = {"10100001", "11101110", "00001111", "11010000", "01111000", "01111101", "11010101", "01101110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00011001", "00101110", "01010111", "01111110", "11101010", "11101011", "11110000"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> matrix = {"00011000", "10000100", "11000101", "01010101", "11010000", "00001100", "01010110", "10100010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00000101", "00001010", "00011100", "00110101", "00111001", "01011001", "11000100"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> matrix = {"00000111", "11111001", "11100001", "11101111", "11110010", "01001111", "11101000", "00000111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00000111", "00011111", "01101001", "01111000", "01111111", "11101010", "11111001"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> matrix = {"01010011", "11011111", "01101110", "00010111", "00011111", "10001000", "11101111", "00100100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00001100", "00110111", "01111111", "11010001", "11010101", "11110000", "11111101"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> matrix = {"00000011", "00001000", "11111010", "00011101", "01000000", "11100101", "00010100", "00001110"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00000010", "00001100", "00010101", "00101101", "00110000", "11011011", "11100110"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> matrix = {"00010010", "00110011", "00000011", "10001101", "11110001", "10100110", "01111010", "00010011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00000101", "00000111", "00001111", "00111001", "01011110", "10110010", "11001101"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> matrix = {"00100000", "10100001", "01000011", "00100111", "00000101", "00001101", "11010001", "00011000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00000110", "00001011", "00010110", "00100111", "01010000", "10100010", "11001010"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> matrix = {"00001011", "01001100", "11010000", "11111111", "00110000", "01010010", "11011100", "10010010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00001101", "00010101", "00011001", "01100100", "01101101", "10110000", "11111111"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> matrix = {"00101001", "01010100", "11100011", "11000010", "01110100", "10000110", "01110000", "00101001"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00000111", "00011001", "00111000", "00111001", "11001000", "11001011", "11100000"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> matrix = {"11010100", "11110001", "00011101", "11111111", "01110100", "10000110", "00001001", "11010111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00001111", "00110100", "01011100", "01111101", "11001100", "11011001", "11111111"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> matrix = {"1100", "1110", "0111", "1001"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0011", "0101", "1011", "1110"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> matrix = {"11001010", "11110000", "00000001", "10101111", "01010110", "00000011", "10101110", "10001111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000001", "00000011", "00011110", "00101111", "01101110", "01101111", "10110010", "11010100"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> matrix = {"11110001", "10110101", "10001101", "11111111", "00000000", "10000111", "01010111", "00011111"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000000", "00001111", "00010111", "00111011", "01100111", "10101011", "11100101", "11111111"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> matrix = {"10010011", "10001111", "00110100", "01011101", "01101101", "11001100", "11110100", "11110100"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111", "00011111", "00011111", "00111001", "01101011", "01101101", "11010010", "11110001"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> matrix = {"01011110", "10101111", "11010111", "10101101", "10101011", "10001111", "10101110", "10101011"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00011111", "00011111", "00101111", "00110111", "00111011", "00111111", "11100101", "11101110"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> matrix = {"11100000", "00111011", "00110000"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000011", "00001101", "01110011"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> matrix = {"10101010", "00110011", "11111110", "10101111", "11001100", "11001100", "10101010"};
    MatrixGame* pObj = new MatrixGame();
    clock_t start = clock();
    vector<string> result = pObj->getMinimal(matrix);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00001111", "00001111", "00110011", "00110011", "01011111", "10111111", "11001100"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22704537&rd=14150&pm=10861
********************************************************************************
// Grzegorz Guspiel
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define REPD(i,n) for(int (i)=(n)-1; (i)>=0; (i)--)
#define FOR(i,b,e) for(int (i)=(b); (i)<=int(e); (i)++)
#define PB push_back
 
typedef vector<int> vi;
typedef vector<string> vs;
 
class MatrixGame {
public:
  vector <string> getMinimal(vector <string> t) {
    vi p;
    REP(i,t[0].size()) p.PB(i);
    vs best=t;
    do {
      vs r;
      REP(i,t.size()) r.PB(t[0]);
      REP(j,t.size()) REP(i,t[j].size()) r[j][p[i]]=t[j][i];
      sort(r.begin(), r.end());
      if(r<best) best=r;
    } while(next_permutation(p.begin(), p.end()));
    return best;
  }
};
 
 
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/