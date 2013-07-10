/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6866
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

class ChessTraining {
public:
    string game(vector<int> x, vector<int> y);
};

string ChessTraining::game(vector<int> x, vector<int> y) {
    string ret;
    return ret;
}


int test0() {
    vector<int> x = {3, 4};
    vector<int> y = {3, 5};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {1};
    vector<int> y = {2};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {5, 1, 2, 6, 7};
    vector<int> y = {8, 4, 9, 11, 5};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {5, 7, 3, 5};
    vector<int> y = {8, 3, 7, 8};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {3, 3, 18, 6, 0, 14, 1};
    vector<int> y = {4, 4, 11, 9, 9, 9, 9};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {9, 19, 29, 31, 10, 72, 57, 73, 2, 19, 62, 67, 83, 70, 24, 78, 16, 16, 59, 56, 75, 9, 2, 26, 26, 55, 43, 19, 5, 42, 66, 54, 17, 51, 1, 28, 79};
    vector<int> y = {58, 57, 81, 33, 35, 20, 73, 62, 44, 23, 78, 17, 82, 7, 8, 8, 9, 74, 74, 64, 73, 9, 69, 32, 75, 80, 5, 82, 81, 73, 77, 12, 3, 30, 45, 38, 51};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {1, 2};
    vector<int> y = {3, 3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {3, 4, 3};
    vector<int> y = {2, 2, 1};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {13, 6, 25, 32, 1, 16, 31, 29, 3};
    vector<int> y = {35, 21, 6, 34, 27, 29, 12, 10, 35};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {23, 0, 7, 3, 26, 28, 18, 4, 28, 16, 29, 29, 12, 25, 26};
    vector<int> y = {28, 14, 22, 11, 6, 4, 14, 25, 0, 24, 28, 22, 26, 7, 27};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {16, 2, 7, 2, 8, 1, 15, 5, 10, 5, 4, 15, 9, 13, 15, 11, 3, 11, 9, 13, 3, 16, 5, 3, 6, 5, 4, 11, 5, 2, 10, 3, 2, 17, 3, 11, 0, 0, 16, 11, 4, 3, 6};
    vector<int> y = {11, 14, 1, 2, 15, 13, 11, 11, 16, 8, 14, 1, 14, 1, 4, 8, 4, 6, 16, 5, 8, 15, 9, 17, 13, 9, 16, 4, 11, 17, 10, 5, 11, 12, 7, 8, 7, 17, 1, 3, 7, 14, 2};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {12, 13, 4, 21, 19, 17, 21, 16, 11, 20, 12, 17, 12, 20, 20, 14, 6, 7, 9, 12, 5, 9, 14, 13, 10, 18, 13, 3, 8, 21, 3, 19, 10, 7, 18, 7, 2, 16, 1, 12, 14, 11, 7, 5};
    vector<int> y = {9, 5, 17, 13, 10, 4, 4, 14, 11, 16, 5, 0, 12, 16, 1, 19, 15, 4, 16, 3, 10, 10, 10, 10, 4, 9, 0, 17, 20, 8, 20, 5, 11, 15, 19, 0, 17, 21, 14, 7, 13, 17, 5, 4};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {27, 17, 5, 5, 2, 33, 23, 23, 13, 4, 8, 28, 21, 19, 22, 3, 22, 17, 4, 21, 33, 17, 2, 19, 10, 20, 26, 15, 28, 34, 20, 19, 15, 5, 4, 33, 2, 7, 0, 31, 11, 9, 23, 12, 28, 25, 15, 30, 23};
    vector<int> y = {35, 16, 20, 17, 18, 20, 7, 2, 26, 23, 10, 24, 23, 29, 19, 28, 13, 17, 10, 21, 17, 21, 12, 6, 9, 5, 14, 14, 0, 9, 1, 0, 25, 2, 33, 23, 22, 4, 26, 28, 7, 0, 17, 30, 10, 16, 2, 23, 13};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {14, 8, 67, 7};
    vector<int> y = {13, 11, 40, 23};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {20, 33, 57, 32, 23, 55, 11, 7, 58, 29, 34, 41, 46, 54, 3, 45, 44, 48, 57, 43, 53, 55, 40, 21, 54, 5, 57, 20};
    vector<int> y = {17, 28, 29, 21, 53, 19, 54, 16, 14, 5, 15, 5, 26, 50, 46, 12, 36, 49, 49, 12, 29, 46, 55, 15, 33, 28, 36, 27};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {2, 9, 8, 1, 9, 9, 2};
    vector<int> y = {4, 1, 6, 3, 4, 5, 5};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {15, 4, 9, 8, 3, 9, 9, 2, 13, 8, 40, 23, 29, 57, 14, 56, 14, 56, 99};
    vector<int> y = {99, 2, 1, 6, 1, 4, 5, 5, 14, 11, 67, 7, 57, 29, 56, 14, 56, 14, 15};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {77, 27, 8, 17, 73, 8, 67, 49, 36, 10, 41, 59, 66, 11, 44, 71, 22, 37, 34, 82, 0, 66, 17, 73, 80, 49, 36, 45, 39, 45, 43, 21, 72, 49, 38, 51, 57, 12, 5, 91, 21, 46};
    vector<int> y = {57, 87, 56, 7, 65, 76, 42, 5, 66, 42, 71, 81, 20, 56, 37, 54, 8, 75, 4, 52, 3, 74, 6, 40, 32, 64, 50, 38, 60, 71, 82, 25, 66, 45, 32, 36, 29, 72, 41, 2, 21, 17};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {1, 61, 13, 48, 21, 75, 27, 36, 12, 25, 33, 23, 30, 87, 70, 79, 48, 79, 73, 2};
    vector<int> y = {82, 83, 85, 25, 29, 2, 71, 50, 10, 30, 21, 33, 2, 56, 81, 45, 42, 20, 82, 55};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {17, 26, 13, 27, 46, 31, 15, 10, 36, 5, 20, 18, 11, 42, 32, 46, 29, 21, 20, 34, 22};
    vector<int> y = {27, 34, 40, 33, 22, 48, 30, 13, 47, 0, 30, 23, 14, 9, 22, 47, 24, 32, 35, 32, 4};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {48, 21, 10, 38, 14, 32, 42, 38, 51, 53, 23, 29, 2, 22, 49, 10, 31, 22, 50, 2, 6, 26, 19, 43, 21, 3, 8, 53, 2, 39, 43, 51, 47, 40, 34, 48, 4, 8, 31, 1, 48, 0, 17, 51};
    vector<int> y = {9, 54, 6, 40, 21, 44, 29, 14, 15, 48, 44, 23, 51, 39, 8, 54, 11, 52, 37, 3, 37, 16, 52, 42, 11, 15, 30, 4, 15, 34, 0, 11, 33, 7, 39, 41, 51, 13, 0, 53, 7, 31, 22, 45};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {23, 48, 79, 62, 18, 81, 19, 14, 1, 17, 18, 30, 41, 20, 79, 69, 35, 46, 95, 60, 20, 83, 63, 44, 81, 92};
    vector<int> y = {30, 41, 43, 5, 74, 66, 84, 88, 63, 6, 6, 16, 51, 7, 34, 3, 37, 9, 24, 19, 78, 90, 96, 11, 53, 20};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {52, 2, 46, 7, 56, 66, 32, 43, 1, 63, 74, 43, 46, 80, 39, 36, 21, 49, 77, 52, 5, 0};
    vector<int> y = {12, 9, 80, 60, 34, 33, 31, 34, 26, 3, 36, 72, 10, 13, 55, 45, 56, 59, 29, 47, 20, 75};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {66, 25, 71, 8, 59, 43, 78, 48, 73, 67, 75, 57, 64, 15, 30, 80, 72, 58, 7, 37, 57, 71, 48, 34, 74, 34, 41, 34, 25, 47, 84, 6, 72, 27, 56, 46, 27, 50, 52, 57, 74, 42, 29, 53, 15, 16};
    vector<int> y = {6, 44, 75, 13, 81, 47, 42, 2, 39, 73, 36, 80, 22, 61, 0, 21, 25, 72, 5, 81, 34, 32, 46, 43, 46, 77, 0, 76, 3, 57, 49, 9, 17, 39, 64, 55, 44, 21, 57, 83, 9, 51, 35, 31, 69, 35};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {15, 14, 26, 36, 33, 39, 19, 35, 2, 21, 43, 40, 39, 9, 31};
    vector<int> y = {23, 14, 35, 48, 45, 27, 13, 33, 48, 49, 5, 5, 43, 18, 6};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {15, 6, 23, 4};
    vector<int> y = {0, 7, 7, 9};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {33, 18, 15, 16, 11, 12, 29, 15, 22, 2, 1, 34, 1};
    vector<int> y = {21, 37, 49, 18, 10, 27, 31, 9, 44, 3, 3, 1, 18};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {33, 18, 15, 16, 11, 12, 29, 15, 22, 2, 1, 15, 38, 14, 41, 38, 24, 11, 15, 1, 12, 14, 21, 37, 49, 17, 18, 10, 27, 31, 9, 44, 3, 3, 19, 7, 16, 48, 47, 43, 12, 16, 14, 15, 11};
    vector<int> y = {21, 37, 49, 18, 10, 27, 31, 9, 44, 3, 3, 19, 7, 16, 48, 47, 43, 12, 16, 12, 15, 17, 33, 18, 15, 16, 11, 12, 29, 15, 22, 2, 1, 15, 38, 14, 41, 38, 24, 11, 15, 1, 12, 14, 16};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {33, 18, 15, 16, 11, 12, 29, 15, 22, 2, 1, 15, 38, 14, 41, 38, 24, 11, 15, 1, 12, 14, 21, 37, 49, 17, 18, 10, 27, 31, 9, 44, 3, 3, 19, 7, 16, 48, 47, 43, 12, 16, 14, 15, 44, 1, 11, 2};
    vector<int> y = {21, 37, 49, 18, 10, 27, 31, 9, 44, 3, 3, 19, 7, 16, 48, 47, 43, 12, 16, 12, 15, 17, 33, 18, 15, 16, 11, 12, 29, 15, 22, 2, 1, 15, 38, 14, 41, 38, 24, 11, 15, 1, 12, 14, 1, 66, 16, 3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {99, 98, 97, 93, 92, 99, 98, 97, 93, 92, 99, 98, 97, 93, 92, 99, 98, 97, 93, 92, 99, 98, 97, 93, 92};
    vector<int> y = {2, 3, 97, 5, 6, 7, 8, 2, 3, 4, 5, 6, 7, 8, 2, 3, 4, 5, 6, 7, 8, 2, 3, 4, 5};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {0, 1, 0};
    vector<int> y = {1, 0, 1};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97, 97, 92, 92, 97};
    vector<int> y = {84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84, 84, 91, 91, 84};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {14};
    vector<int> y = {14};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {5};
    vector<int> y = {0};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {5, 23, 16, 18, 13, 11, 82, 81, 73, 24, 9};
    vector<int> y = {14, 4, 3, 55, 81, 32, 75, 46, 22, 42, 12};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {14, 4, 3, 55, 81, 32, 75, 46, 22, 3, 42, 12};
    vector<int> y = {5, 23, 16, 18, 13, 11, 82, 81, 73, 2, 24, 9};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {11, 29, 18, 20, 13, 3, 15, 15, 19, 28};
    vector<int> y = {7, 24, 11, 10, 7, 18, 18, 8, 18, 15};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {14, 51, 19, 78};
    vector<int> y = {82, 3, 52, 2};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {22};
    vector<int> y = {36};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {49, 39, 6};
    vector<int> y = {18, 20, 22};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {46};
    vector<int> y = {75};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {11, 20, 8, 12, 15};
    vector<int> y = {4, 8, 5, 9, 10};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {1};
    vector<int> y = {3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {89, 6, 81, 17, 80, 51, 2, 78, 62, 17, 38, 63, 44, 97, 4, 84, 84, 78, 3, 11, 87, 73, 68, 66, 60, 60, 24, 53, 19, 70};
    vector<int> y = {82, 76, 77, 44, 25, 15, 79, 39, 64, 41, 24, 73, 53, 12, 41, 2, 36, 31, 65, 20, 88, 32, 67, 69, 66, 48, 86, 60, 5, 34};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {1, 3};
    vector<int> y = {2, 3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {1, 0};
    vector<int> y = {0, 1};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {1, 5};
    vector<int> y = {3, 3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};
    vector<int> y = {2, 3, 4, 5, 6, 7, 8, 2, 3, 4, 5, 6, 7, 8};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {43, 31, 76, 54};
    vector<int> y = {32, 86, 11, 23};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {5, 1};
    vector<int> y = {0, 2};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {3};
    vector<int> y = {0};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {5, 2};
    vector<int> y = {4, 7};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {0};
    vector<int> y = {3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {1, 1, 2};
    vector<int> y = {2, 3, 3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {4, 7};
    vector<int> y = {3, 8};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {3};
    vector<int> y = {2};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {1, 1};
    vector<int> y = {4, 6};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {3};
    vector<int> y = {3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {3};
    vector<int> y = {6};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {1, 1, 1, 1};
    vector<int> y = {2, 2, 3, 3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {2};
    vector<int> y = {3};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {3};
    vector<int> y = {5};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob will win";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {2, 2, 1, 5};
    vector<int> y = {1, 1, 2, 8};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {10, 11};
    vector<int> y = {40, 39};
    ChessTraining* pObj = new ChessTraining();
    clock_t start = clock();
    string result = pObj->game(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice will win";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=10808&pm=6866
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
#include <numeric>
using namespace std;
 
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
string Alice="Alice will win";
string Bob="Bob will win";
const int N=110;
int t[N][N];
 
void dodaj(set<int> &mam,int a,int b){
  if (a>0 && b>0 && a!=b) mam.insert(t[a][b]);
}
 
    class ChessTraining
        { 
        public: 
        string game(vector <int> x, vector <int> y){ 
          int n=SIZE(x);
          REP(i,n) if (x[i]==0 || y[i]==0 || x[i]==y[i]) return Alice;
          FOR(i,1,N-1) FOR(j,1,N-1) if (i!=j){
            set<int> mam;
            FOR(k,1,N){
              dodaj(mam,i-k,j);
              dodaj(mam,i,j-k);
              dodaj(mam,i-k,j-k);
            }
            int wynik=0;
            while (mam.count(wynik)) wynik++;
            t[i][j]=wynik;
          }
          int val=0;
          REP(i,n) val^=t[x[i]][y[i]];
          return val==0?Bob:Alice;
        } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/