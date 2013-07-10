/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11501
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

class CutTheNumbers {
public:
    int maximumSum(vector<string> board);
};

int CutTheNumbers::maximumSum(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"123", "312"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 435;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"99", "11"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"001", "010", "111", "100"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1131;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"8"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
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
    vector<string> board = {"0011", "0011", "0011", "1111"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2233;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"0002", "0101", "1011", "0202"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2243;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"0001", "0000", "1011", "2002"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3023;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"0002", "0011", "0012", "2210"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2433;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"0011", "0001", "1021", "2021"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3063;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"0020", "0011", "0002", "2211"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2433;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"0011", "0102", "0101", "2110"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2342;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"0021", "0000", "0012", "2201"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3053;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"0020", "0011", "0000", "1002"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2212;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"0"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
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
    vector<string> board = {"0000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
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
    vector<string> board = {"9999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"9999", "9999", "9999", "9999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 39996;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"0341", "5155", "7470", "6513"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19479;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"0003", "0121", "0032", "3122"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3467;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"2003", "1002", "0103", "1201"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5362;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"0023", "0020", "0230", "3200"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5264;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"0000", "0001", "0002", "1022"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1034;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"0013", "0022", "3111", "2203"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5358;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"2220", "0012", "0011"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2252;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"1200", "0002", "0001"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1221;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"2020", "0012", "0002"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2052;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"2000", "0022", "0010"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2041;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"2202", "0002", "0010"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2223;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"0022", "0011", "1002"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1044;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"0002", "0012", "2210"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2233;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"1211", "0012", "0010"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1242;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"002", "001", "202", "211"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2162;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"100", "000", "001", "020"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1021;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"001", "000", "000", "222"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"009", "013", "888"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1027;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"009", "322", "605"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1017;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"003", "108", "269"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 425;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"027", "017", "996"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1094;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"082", "000", "952"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1052;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"015", "026", "929"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 997;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"044", "038", "863"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 954;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"027", "010", "984"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1075;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"009", "331", "533"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"007", "219", "474"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 862;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"013", "003", "938"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"008", "142", "746"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 914;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"005", "020", "890"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 942;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"002", "008", "481"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 509;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"008", "126", "690"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 941;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"041", "004", "576"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 630;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"004", "019", "719"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 769;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"002", "011", "823"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 845;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"009", "400", "573"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"004", "015", "632"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 678;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"042", "012", "791"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 854;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"007", "215", "466"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 823;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"004", "009", "252"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 517;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"041", "009", "956"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1015;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"026", "043", "817"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 904;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"008", "145", "688"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 940;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"042", "016", "638"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 705;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"007", "316", "417"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 839;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"004", "028", "886"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 936;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"052", "017", "803"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 881;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"005", "126", "376"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 615;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"018", "044", "908"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1006;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"008", "337", "619"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 973;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"007", "109", "688"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 876;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"006", "102", "374"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 671;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"026", "008", "891"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 979;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"034", "035", "781"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 859;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"003", "010", "763"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 794;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"027", "015", "900"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 996;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"005", "134", "448"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"007", "220", "304"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 756;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"044", "022", "933"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1017;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"007", "022", "879"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 953;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"037", "007", "997"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1104;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"041", "003", "563"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 616;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"034", "039", "849"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 931;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"007", "110", "337"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"009", "304", "320"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1002;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"006", "048", "650"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 749;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"008", "142", "626"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 902;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"009", "024", "507"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"004", "037", "426"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 521;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"033", "025", "643"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 710;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"052", "008", "871"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 949;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"043", "017", "971"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1049;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"022", "015", "513"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"032", "017", "880"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 938;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"006", "025", "911"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 978;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"009", "413", "523"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1026;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"009", "016", "379"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1007;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"008", "014", "685"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 914;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"045", "002", "860"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 952;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"005", "100", "132"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"002", "008", "881"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 909;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"004", "209", "195"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 534;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"007", "224", "389"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 809;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {"023", "006", "550"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 606;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"015", "004", "699"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 763;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {"021", "001", "440"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 471;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"004", "123", "310"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 473;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {"002", "101", "100"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 230;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {"001", "000", "320"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> board = {"002", "101", "103"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {"022", "013", "432"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 476;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {"004", "204", "232"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 485;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {"001", "000", "110"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"001", "000", "100"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {"001", "001", "101"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {"001", "000", "111"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {"0018", "0026", "7020"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7118;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {"5325", "1242"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6567;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {"1", "2", "3", "1"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1231;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> board = {"001", "002", "301", "302"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1272;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> board = {"200", "200", "010", "311"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2224;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> board = {"002", "004", "021", "443"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2459;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> board = {"100", "200", "331", "230"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1293;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> board = {"372"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> board = {"2", "4", "6"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> board = {"9", "1", "8", "6"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9186;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> board = {"403", "027", "245"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 801;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> board = {"569", "339", "053", "679"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21602;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> board = {"27", "19"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> board = {"24"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> board = {"8761"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8761;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> board = {"975", "656", "271"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2280;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> board = {"188", "964"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1152;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> board = {"175"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> board = {"8769", "3043", "3841", "7303"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31173;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> board = {"9", "8"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> board = {"0679", "5936"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6615;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> board = {"21"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> board = {"1855", "3436", "5720"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11011;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> board = {"8", "9", "9", "5"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8995;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> board = {"9006", "0211"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9217;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> board = {"0264", "7702", "5816", "5552"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19334;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> board = {"8", "8", "2", "4"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8824;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> board = {"9289", "4508", "6731"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20528;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> board = {"8", "1", "6"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> board = {"576"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 576;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> board = {"755", "523", "389"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1820;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> board = {"710", "778", "716"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2204;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> board = {"6", "5", "5"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 655;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> board = {"9322"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9322;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> board = {"6392", "2555", "6517"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15464;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> board = {"317", "111"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 428;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> board = {"83", "72"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> board = {"517", "919", "840"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2276;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> board = {"995", "586"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1581;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> board = {"8"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> board = {"294", "431", "599"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1603;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> board = {"09", "48"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> board = {"01", "83", "04"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> board = {"55", "84"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> board = {"584", "925", "839", "839"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18820;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> board = {"62", "51", "30"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 863;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> board = {"571"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 571;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> board = {"6750"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6750;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> board = {"97"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> board = {"17"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> board = {"8666", "7620", "8661"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24947;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> board = {"0403", "0343"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 746;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> board = {"529", "689", "216", "038"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18401;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> board = {"730", "159", "385", "183"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11672;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> board = {"30", "31", "95"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> board = {"32"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> board = {"9418", "4862"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14280;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> board = {"5", "4"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> board = {"8", "7"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> board = {"5", "2"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> board = {"5372", "3704", "2834", "4080"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18582;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> board = {"59", "53", "95", "06"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14946;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> board = {"0212"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> board = {"4"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> board = {"68", "14"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> board = {"9", "6", "8", "9"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9689;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> board = {"2", "4", "6"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> board = {"20"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> board = {"1485", "4766", "2590", "7677"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20487;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> board = {"4805", "9760"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14565;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> board = {"07", "64", "83", "28"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8120;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> board = {"2", "5", "2"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> board = {"74", "84"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> board = {"499"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> board = {"4608", "8295"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12903;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> board = {"55"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> board = {"9", "4", "7"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 947;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> board = {"5060", "9149"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14209;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> board = {"19", "08", "40", "83"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10851;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> board = {"36", "98", "48", "35"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10828;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> board = {"794", "708", "850"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2352;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> board = {"7785", "2218", "2406"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12409;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> board = {"411", "028", "277", "394"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7176;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> board = {"6658", "1220"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7878;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> board = {"3"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> board = {"4850", "0082", "5473"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10405;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> board = {"95", "05", "43"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1457;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> board = {"3572", "9386", "8698"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21656;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> board = {"71"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> board = {"14", "98"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> board = {"3002"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3002;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> board = {"07", "75"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> board = {"9281", "3409", "6814"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19504;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> board = {"88", "96", "68", "27"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17649;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> board = {"514", "984"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1498;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> board = {"0022", "0011", "0030", "1000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4240;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> board = {"0003", "0012", "2122", "0012"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3436;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> board = {"0023", "0013", "1231", "3311"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5487;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> board = {"0031", "0030", "1030", "2000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4360;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> board = {"0012", "0013", "1033", "3212"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4279;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> board = {"0033", "0033", "2003", "1230"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6665;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> board = {"0021", "0022", "1023", "2013"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3484;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> board = {"0020", "0020", "0021", "3012"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3235;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> board = {"0110", "0102", "0001", "2201"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2432;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> board = {"0003", "1010", "0003", "1321"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3264;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> board = {"0003", "0113", "3223", "0003"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3666;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> board = {"0102", "0102", "0022", "3122"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3456;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> board = {"0003", "1011", "1122", "1013"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3437;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> board = {"0001", "0002", "1231", "1111"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2354;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<string> board = {"0003", "0210", "0021", "3300"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3633;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<string> board = {"0020", "0001", "1003", "1010"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2151;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<string> board = {"0003", "0020", "3023", "0320"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3375;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<string> board = {"0032", "0032", "0100", "2120"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5524;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<string> board = {"8"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<string> board = {"009", "219", "219"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1041;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<string> board = {"0009", "1111", "4111", "1111"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9744;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<string> board = {"0001", "0001", "0001", "1111"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1222;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<string> board = {"001", "000", "000", "990"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1099;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<string> board = {"123", "312"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 435;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<string> board = {"0009", "0008", "0009", "0199"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9918;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<string> board = {"0099", "0090", "0000", "9010"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18991;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<string> board = {"3003", "2004", "1112", "0340"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6675;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<string> board = {"1000", "0001", "0000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<string> board = {"9026", "0018", "9978", "0999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 20021;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<string> board = {"0088", "0000", "0000", "9000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16090;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<string> board = {"001", "010", "111", "100"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1131;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<string> board = {"0009", "0009", "1234", "0000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10063;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<string> board = {"001", "000", "001", "110"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1021;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<string> board = {"0009", "2112", "2114", "2112"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9875;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<string> board = {"009", "009", "999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1098;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<string> board = {"001", "000", "000", "661"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1067;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<string> board = {"1000", "0099", "0000", "1100"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2811;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<string> board = {"0001", "0001", "0001"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<string> board = {"001", "000", "100"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<string> board = {"0009", "0000", "0000", "0990"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9099;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<string> board = {"0009", "0000", "0000", "9990"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10890;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<string> board = {"9308", "4076", "9490", "5561"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28435;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<string> board = {"0009", "0000", "2000", "2000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9400;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<string> board = {"1000", "0099", "0000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1180;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<string> board = {"009", "009", "789"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1077;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<string> board = {"0020", "0001", "0213", "0821"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2171;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<string> board = {"012", "009"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<string> board = {"9000", "0001", "0001"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9011;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<string> board = {"0007", "0001", "0006", "9150"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9866;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<string> board = {"0001", "0003", "0004", "0220"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1362;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<string> board = {"0009", "0009", "0009", "0999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10098;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<string> board = {"009", "009", "009", "999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10098;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<string> board = {"0009", "0009", "0009", "0119"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10010;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<string> board = {"0020", "0010", "0000", "2000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2210;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<string> board = {"0001", "0001", "0110"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<string> board = {"0001", "0000", "9000", "0000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9010;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<string> board = {"001", "001", "999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1010;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<string> board = {"0001", "0000", "0000", "9999"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10099;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<string> board = {"0009", "0000", "0000", "1000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9100;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<string> board = {"0001", "0000", "0000", "1000"};
    CutTheNumbers* pObj = new CutTheNumbers();
    clock_t start = clock();
    int result = pObj->maximumSum(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22893344&rd=14538&pm=11501
********************************************************************************
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <map>
#include <set>
 
#define ll long long
#define dd double
#define pb push_back
#define mp make_pair
 
using namespace std;
 
int dp[10][10],i,j;
 
int furikmax(int x, int y)
  {
   if (x>y) return x;
   else return y;
  }
 
class CutTheNumbers 
  {
  
     int go(int lx , int ly , int rx , int ry)
       {
          if (lx == rx) 
           {
               int sm = 0;
               for (i = ly; i <= ry; ++i) 
                 sm = sm * 10 + dp[lx][i];
               return sm;   
           }
          else if (ry == ly)   
            {
               int sm = 0;
               for (i = lx; i <= rx; ++i) 
                 sm = sm * 10 + dp[i][ly];
               return sm;  
            }
          else
           {
              int sm = 0,i,mm;
              for (i = lx; i <= rx; ++i) 
                sm = sm * 10 + dp[i][ly];
              
              mm = sm + go(lx,ly+1,rx,ry);
              
              sm = 0;
              for (i = lx; i <= rx; ++i)
                sm = sm * 10 + dp[i][ry];
              
              mm = furikmax(mm,sm+go(lx,ly,rx,ry-1));
              
              sm = 0;
              for (i = ly; i <= ry; ++i) 
                sm = sm * 10 + dp[lx][i];
              
              mm = furikmax(mm,sm+go(lx+1,ly,rx,ry));
              
              sm = 0;
              for (i = ly; i <= ry; ++i)
                 sm = sm * 10 + dp[rx][i];
                 
              mm = furikmax(mm,sm + go(lx,ly,rx-1,ry));         
           
              return mm;
           }              
       }
     
      
     public :
      int maximumSum(vector <string> a)
       {
        int n = a.size();
        int m = a[0].size();
        
        for (i = 0; i < n; ++i) 
          for (j = 0; j < m; ++j)
            dp[i][j] = a[i][j] - '0';
            
         return go(0,0,n-1,m-1);   
       }
  
  };

********************************************************************************
*******************************************************************************/