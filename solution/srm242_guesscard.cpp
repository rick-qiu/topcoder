/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4490
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

class GuessCard {
public:
    int whichRow(int width, int height, vector<int> columns);
};

int GuessCard::whichRow(int width, int height, vector<int> columns) {
    int ret;
    return ret;
}


int test0() {
    int width = 3;
    int height = 7;
    vector<int> columns = {2, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int width = 3;
    int height = 7;
    vector<int> columns = {2, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 1;
    int height = 10;
    vector<int> columns = {0, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 10;
    int height = 1;
    vector<int> columns = {4, 4, 4};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 100;
    int height = 1;
    vector<int> columns = {99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 100;
    int height = 100;
    vector<int> columns = {30, 70, 30, 70, 30, 70, 30, 70, 30, 70, 30, 70, 30, 70, 30, 70, 30, 70, 30, 70};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 99;
    int height = 2;
    vector<int> columns = {49, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 99;
    int height = 2;
    vector<int> columns = {49, 98};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 2;
    int height = 99;
    vector<int> columns = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 2;
    int height = 99;
    vector<int> columns = {0, 1, 1, 0, 1, 0, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 2;
    int height = 99;
    vector<int> columns = {0, 1, 1, 0, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 2;
    int height = 99;
    vector<int> columns = {0, 1, 1, 0, 1, 0, 1, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 2;
    int height = 99;
    vector<int> columns = {0, 1, 1, 0, 1, 0, 1, 1, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 1;
    int height = 1;
    vector<int> columns = {0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 3;
    int height = 4;
    vector<int> columns = {1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 3;
    int height = 4;
    vector<int> columns = {1, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 3;
    int height = 4;
    vector<int> columns = {1, 2};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int width = 3;
    int height = 4;
    vector<int> columns = {0, 0, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 10;
    int height = 2;
    vector<int> columns = {3, 6, 2, 5, 0, 1, 2, 4, 8, 6, 3, 7, 4, 9, 8, 7, 5, 1, 3, 6};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 2;
    int height = 100;
    vector<int> columns = {0, 0, 1, 0, 1, 1, 0, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int width = 2;
    int height = 100;
    vector<int> columns = {0, 0, 1, 0, 1, 1, 0, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 2;
    int height = 100;
    vector<int> columns = {0, 0, 1, 0, 1, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 1;
    int height = 2;
    vector<int> columns = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 1;
    int height = 1;
    vector<int> columns = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int width = 86;
    int height = 19;
    vector<int> columns = {37, 15};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 29;
    int height = 64;
    vector<int> columns = {6, 9, 9};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 27;
    int height = 65;
    vector<int> columns = {24, 26, 20};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 24;
    int height = 42;
    vector<int> columns = {8, 2, 2};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 43;
    int height = 83;
    vector<int> columns = {21, 37, 15};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 23;
    int height = 7;
    vector<int> columns = {11, 9};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 52;
    int height = 9;
    vector<int> columns = {21, 36};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 52;
    int height = 29;
    vector<int> columns = {4, 34};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 21;
    int height = 44;
    vector<int> columns = {8, 7, 11};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 80;
    int height = 68;
    vector<int> columns = {18, 26};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 81;
    int height = 47;
    vector<int> columns = {18, 59};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 42;
    int height = 78;
    vector<int> columns = {9, 16, 6};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 27;
    int height = 23;
    vector<int> columns = {10, 16};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 84;
    int height = 7;
    vector<int> columns = {10, 75};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 88;
    int height = 98;
    vector<int> columns = {8, 74};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 61;
    int height = 10;
    vector<int> columns = {15, 34};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 49;
    int height = 96;
    vector<int> columns = {35, 36, 46};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int width = 94;
    int height = 11;
    vector<int> columns = {49, 77};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 26;
    int height = 93;
    vector<int> columns = {19, 7, 17};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 16;
    int height = 82;
    vector<int> columns = {3, 11, 5};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int width = 80;
    int height = 33;
    vector<int> columns = {18, 37};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 82;
    int height = 65;
    vector<int> columns = {25, 18};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 57;
    int height = 22;
    vector<int> columns = {52, 10};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 70;
    int height = 72;
    vector<int> columns = {57, 6};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 25;
    int height = 61;
    vector<int> columns = {7, 8, 6};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int width = 60;
    int height = 93;
    vector<int> columns = {32, 0, 51};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int width = 14;
    int height = 27;
    vector<int> columns = {11, 0, 8};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int width = 24;
    int height = 84;
    vector<int> columns = {23, 6, 11};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int width = 67;
    int height = 85;
    vector<int> columns = {30, 14, 23};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int width = 77;
    int height = 40;
    vector<int> columns = {0, 34};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int width = 43;
    int height = 86;
    vector<int> columns = {24, 11, 5, 23, 10, 3, 21, 6, 42, 12, 41, 25, 39, 8, 36, 17, 29, 35, 15, 28};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int width = 3;
    int height = 93;
    vector<int> columns = {2, 0, 0, 1, 2, 0, 1, 0, 0, 1, 1, 2, 2, 0, 0, 2, 0, 2, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int width = 2;
    int height = 91;
    vector<int> columns = {1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int width = 35;
    int height = 17;
    vector<int> columns = {33, 3, 32, 20, 5, 25, 7, 26, 25, 17, 21, 15, 20, 32, 28, 1, 31, 2, 14, 29};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int width = 8;
    int height = 4;
    vector<int> columns = {7, 5, 7, 6, 3, 7, 5, 7, 6, 3, 7, 5, 7, 6, 3, 7, 5, 7, 6, 3};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int width = 37;
    int height = 59;
    vector<int> columns = {13, 14, 33, 8, 7, 20, 7, 1, 34, 9, 30, 9, 24, 25, 33, 26, 33, 28, 3, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int width = 62;
    int height = 87;
    vector<int> columns = {55, 27, 9, 16, 41, 55, 6, 42, 5, 60, 19, 1, 53, 24, 54, 20, 18, 45, 34, 45};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int width = 34;
    int height = 33;
    vector<int> columns = {32, 23, 8, 15, 27, 21, 5, 16, 23, 26, 30, 29, 0, 29, 5, 23, 16, 6, 10, 30};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int width = 65;
    int height = 75;
    vector<int> columns = {2, 42, 32, 43, 12, 40, 24, 26, 28, 50, 12, 48, 39, 55, 10, 34, 27, 49, 1, 2};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int width = 70;
    int height = 42;
    vector<int> columns = {53, 57, 45, 34, 55, 20, 33, 68, 5, 41, 45, 24, 55, 14, 61, 50, 36, 2, 36, 43};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int width = 3;
    int height = 29;
    vector<int> columns = {0, 2, 1, 0, 1, 1, 1, 0, 2, 2, 0, 2, 0, 1, 0, 0, 1, 0, 1, 2};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int width = 17;
    int height = 77;
    vector<int> columns = {2, 0, 10, 5, 5, 2, 8, 14, 9, 10, 15, 12, 8, 11, 2, 2, 13, 7, 3, 11};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int width = 26;
    int height = 30;
    vector<int> columns = {8, 12, 5, 8, 12, 5, 8, 12, 5, 8, 12, 5, 8, 12, 5, 8, 12, 5, 8, 12};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int width = 39;
    int height = 49;
    vector<int> columns = {30, 17, 13, 35, 15, 38, 9, 21, 27, 23, 30, 17, 13, 35, 15, 38, 9, 21, 27, 23};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int width = 19;
    int height = 61;
    vector<int> columns = {17, 4, 16, 3, 7, 2, 12, 17, 11, 5, 1, 3, 16, 16, 1, 1, 10, 5, 14, 16};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int width = 75;
    int height = 71;
    vector<int> columns = {0, 47, 37, 46, 1, 40, 66, 73, 70, 14, 11, 45, 55, 47, 14, 64, 57, 57, 51, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int width = 16;
    int height = 80;
    vector<int> columns = {1, 7, 7, 3, 5, 1, 10, 6, 2, 1, 12, 5, 12, 12, 13, 15, 4, 15, 8, 12};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int width = 87;
    int height = 29;
    vector<int> columns = {82, 42, 27, 14, 67, 33, 22, 40, 36, 13, 41, 62, 71, 78, 23, 84, 7, 57, 2, 77};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int width = 90;
    int height = 16;
    vector<int> columns = {9, 56, 87, 51, 21, 75, 33, 1, 22, 82, 55, 84, 3, 63, 18, 29, 17, 7, 25, 41};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int width = 96;
    int height = 30;
    vector<int> columns = {25, 79, 73, 6, 11, 44, 75, 55, 41, 95, 78, 65, 54, 8, 65, 32, 20, 34, 66, 70};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int width = 3;
    int height = 7;
    vector<int> columns = {2, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    int width = 2;
    int height = 2;
    vector<int> columns = {1, 0, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int width = 3;
    int height = 3;
    vector<int> columns = {0, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int width = 100;
    int height = 100;
    vector<int> columns = {8, 0, 8, 0, 8, 0, 8, 0, 8, 0, 8, 0, 8, 0, 8, 0, 8, 0, 8, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int width = 1;
    int height = 1;
    vector<int> columns = {0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int width = 3;
    int height = 7;
    vector<int> columns = {2, 1, 0, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int width = 3;
    int height = 7;
    vector<int> columns = {2, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int width = 2;
    int height = 100;
    vector<int> columns = {1, 1, 0, 1, 1, 1, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int width = 5;
    int height = 5;
    vector<int> columns = {0, 0, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int width = 13;
    int height = 42;
    vector<int> columns = {2, 7};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int width = 3;
    int height = 2;
    vector<int> columns = {1, 0, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int width = 47;
    int height = 20;
    vector<int> columns = {40, 4, 3};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int width = 2;
    int height = 10;
    vector<int> columns = {1, 1, 1, 1, 1, 1};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int width = 3;
    int height = 8;
    vector<int> columns = {2, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int width = 100;
    int height = 100;
    vector<int> columns = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int width = 3;
    int height = 3;
    vector<int> columns = {2, 1, 2};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int width = 2;
    int height = 3;
    vector<int> columns = {0, 1, 1, 0};
    GuessCard* pObj = new GuessCard();
    clock_t start = clock();
    int result = pObj->whichRow(width, height, columns);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152340&rd=7217&pm=4490
********************************************************************************
using namespace std;
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
typedef long long I64;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef vector<PII> VPII;
#define FOR(i,n) for(int i=0;i<(n);i++)
#define VAR(a,b) __typeof(b) a=b
#define FORIT(it,c) for(VAR(it,(c).begin());it!=(c).end();it++)
#define ALL(x) (x).begin(),(x).end()
 
struct GuessCardImpl {
    int width;
    int height;
    vector <int> columns;
    GuessCardImpl(int _width,int _height,vector <int> _columns) {
        width = _width;
        height = _height;
        columns = _columns;
    }
 
    int whichRow() {
        vector<vector<int> > grid(height,VI(width));
        int at = 0;
        FOR(y,height)
            FOR(x,width)
                grid[y][x] = at++;
 
        FOR(c,columns.size()) {
            int pick = columns[c];
            FOR(y,height)
                FOR(x,width)
                    if(x!=pick) grid[y][x]=-1;
 
            if(c==columns.size()-1) break;
 
            VI vals;
            FOR(x,width)
                FOR(y,height)
                    vals.push_back(grid[y][x]);
 
            at=0;
            FOR(y,height)
                FOR(x,width)
                    grid[y][x] = vals[at++];
        }
        int ret = 0;
        int count = 0;
        FOR(y,height)
            FOR(x,width)
                if(grid[y][x] != -1) {
                    ret = y;
                    count++;
                }
        return count==1 ? ret : -1;
    };
};
 
 
struct GuessCard {
    int whichRow(int width,int height,vector <int> columns) {
        GuessCardImpl impl(width,height,columns);
        return impl.whichRow();
    }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/