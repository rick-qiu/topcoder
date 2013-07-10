/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6854
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

class ScoreDifference {
public:
    int maximize(vector<string> board);
};

int ScoreDifference::maximize(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"12 4 5 13", "3 14 16 9", "11 6 15 8", "2 1 7 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"15 16 11 12", "10 13 4 7", "1 2 8 6", "9 5 3 14"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"6 8 1 16", "10 15 9 3", "2 5 7 14", "13 12 11 4"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"9 8 3 1", "10 6 15 5", "12 7 4 11", "14 13 16 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"12 8 6 5", "2 11 9 15", "13 10 14 7", "1 16 4 3"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"7 2 8 4", "3 16 10 12", "9 6 14 11", "15 13 1 5"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"4 10 14 3", "2 7 15 6", "11 1 13 9", "5 8 16 12"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"9 6 2 10", "5 11 3 8", "16 1 12 13", "14 15 7 4"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"15 10 12 11", "6 3 4 13", "14 5 16 1", "9 8 7 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"11 9 3 4", "1 16 8 13", "14 10 6 5", "7 15 12 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"7 3 13 12", "1 5 2 15", "8 4 6 14", "9 16 11 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"3 11 7 15", "14 4 16 2", "8 13 1 6", "10 12 5 9"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"7 14 6 16", "9 11 5 4", "2 12 8 3", "15 1 13 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"8 6 1 4", "3 7 16 2", "11 15 5 9", "14 10 13 12"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"13 8 7 15", "6 14 10 1", "11 9 12 5", "2 3 4 16"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"5 9 15 6", "2 8 3 12", "14 16 11 1", "13 7 4 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"7 2 6 5", "1 13 3 11", "16 4 9 10", "14 8 12 15"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"14 10 8 7", "16 2 12 4", "15 6 3 9", "1 5 13 11"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"6 15 16 7", "14 5 12 13", "1 11 2 9", "3 4 10 8"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"15 11 7 12", "2 3 8 14", "16 13 9 6", "4 5 1 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"11 8 13 12", "1 14 9 6", "7 10 4 3", "5 2 16 15"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"13 12 1 4", "2 7 9 6", "11 5 8 15", "3 16 14 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"2 3 12 7", "6 16 5 15", "14 4 9 8", "13 10 11 1"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"9 11 14 3", "5 6 2 4", "12 13 16 7", "1 15 8 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"7 10 13 8", "16 12 5 4", "14 3 15 2", "11 6 9 1"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"9 3 6 13", "1 14 2 4", "7 5 11 10", "8 12 16 15"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"14 5 16 13", "8 9 3 11", "7 1 12 4", "2 10 6 15"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"2 15 10 6", "13 5 1 16", "11 8 3 4", "7 14 12 9"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"9 4 11 10", "2 12 3 13", "6 1 16 15", "8 5 7 14"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"11 16 9 13", "1 2 4 12", "7 10 6 5", "8 3 15 14"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"13 6 3 12", "16 4 14 5", "11 7 1 10", "8 15 9 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"6 5 15 4", "10 14 2 8", "3 7 12 9", "11 16 13 1"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"10 12 9 7", "13 11 6 8", "16 1 14 4", "3 15 5 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"2 9 13 1", "8 15 5 11", "16 12 3 14", "6 4 7 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"11 4 5 13", "3 14 15 9", "12 8 16 6", "2 1 7 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"4 10 3 11", "14 2 15 7", "16 13 5 6", "1 8 9 12"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"10 9 1 5", "12 11 4 13", "14 8 7 16", "3 2 15 6"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"10 3 8 4", "14 7 16 1", "11 12 6 5", "15 9 13 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"7 3 8 10", "9 4 16 6", "12 11 1 14", "13 15 5 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"12 13 8 4", "5 3 14 9", "2 6 7 16", "10 1 11 15"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"4 3 16 13", "6 10 9 7", "11 12 1 15", "2 5 14 8"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
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
    vector<string> board = {"8 5 14 9", "2 12 7 6", "15 4 13 3", "16 1 11 10"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"9 8 3 1", "10 6 15 5", "12 7 4 11", "14 13 16 2"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"15 16 11 12", "10 13 4 7", "1 2 8 6", "9 5 3 14"};
    ScoreDifference* pObj = new ScoreDifference();
    clock_t start = clock();
    int result = pObj->maximize(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22660344&rd=10008&pm=6854
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
vector<string> split( const string& s, const string& delim =" " ) { 
    vector<string> res; 
    string t; 
    for ( int i = 0 ; i != s.size() ; i++ ) { 
        if ( delim.find( s[i] ) != string::npos ) { 
            if ( !t.empty() ) { 
                res.push_back( t ); 
                t = ""; 
            } 
        } else { 
            t += s[i]; 
        } 
    } 
    if ( !t.empty() ) { 
        res.push_back(t); 
    } 
    return res; 
} 
 
vector<int> splitInt( const string& s, const string& delim =" " ) { 
    vector<string> tok = split( s, delim ); 
    vector<int> res; 
    for ( int i = 0 ; i != tok.size(); i++ ) 
        res.push_back( atoi( tok[i].c_str() ) ); 
    return res; 
} 
 
 
#define FORV(i,v) for (int i=0;i<(v).size();++i) 
#define UPDATEU(a,b) if (a<(b)) a=(b) 
#define UPDATED(a,b) if (a>(b)) a=(b) 
 
class ScoreDifference { 
public: 
    int maximize(vector <string> board) { 
        short boards[16]; 
         
        for (int i=0;i<4;i++) { 
            vector<int> p; 
            p=splitInt(board[i]); 
            for (int j=0;j<4;j++) 
                boards[i*4+j]=p[j]; 
        } 
         
        int best[65536]; 
        best[0]=0; 
        memset(best,0,sizeof(best)); 
        for (int i=1;i<65536;i++) { 
            best[i]=-200; 
            for (int j=0;j<16;j++) 
                if (move(i,j)) UPDATEU(best[i],boards[j]-best[i-(1<<j)]); 
        } 
         
        return best[65535]; 
    } 
private: 
    short place[16]; 
    bool move(int stat,int pos) { 
        if ((stat&(1<<pos))==0) return false; 
        memset(place,0,sizeof(place)); 
        fill(stat-(1<<pos),pos); 
        if (place[0]||place[1]||place[2]||place[3]) return true; 
        if (place[4]||place[8]||place[7]||place[11]) return true; 
        if (place[12]||place[13]||place[14]||place[15]) return true; 
        return false; 
    } 
    void fill(int stat,int pos) { 
        if (place[pos]==1) return; 
        place[pos]=1; 
        if (pos>3) if ((stat&(1<<(pos-4)))==0) fill(stat,pos-4); 
        if (pos<12) if ((stat&(1<<(pos+4)))==0) fill(stat,pos+4); 
        if (pos%4!=0) if ((stat&(1<<(pos-1)))==0) fill(stat,pos-1); 
        if (pos%4!=3) if ((stat&(1<<(pos+1)))==0) fill(stat,pos+1); 
    } 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/