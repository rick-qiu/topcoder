/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4573
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

class DominoesGame {
public:
    int largestTotal(vector<string> tiles);
};

int DominoesGame::largestTotal(vector<string> tiles) {
    int ret;
    return ret;
}


int test0() {
    vector<string> tiles = {"0:0", "0:5", "5:5"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tiles = {"5:3", "3:4", "4:4", "4:6", "6:6", "6:5", "5:5"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tiles = {"0:0", "0:1", "0:2", "0:3", "0:4", "0:5", "0:6", "1:1", "1:2", "1:3"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tiles = {"1:3", "6:5", "4:5", "0:1", "0:2", "6:4", "4:0", "3:0", "0:5", "0:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tiles = {"4:0", "2:3", "4:1", "1:1", "1:6", "2:5", "1:2", "4:3", "3:3", "3:5"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tiles = {"0:5", "5:5", "3:3", "4:4", "2:3", "6:0", "3:6", "0:2", "2:5", "5:3"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tiles = {"0:5", "4:5", "0:6", "3:6", "0:0", "0:4", "1:5", "0:2", "0:1", "5:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tiles = {"0:0", "3:5", "2:3", "1:1", "4:5", "1:4", "1:2", "0:1", "2:4", "2:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tiles = {"2:6", "1:5", "1:1", "1:6", "2:5", "4:6", "0:4", "5:6", "0:5", "2:4"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tiles = {"0:4", "1:3", "4:5", "2:4", "0:5", "3:6", "3:5", "0:6", "0:3", "2:2"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tiles = {"2:4", "1:6", "1:4", "0:1", "3:5", "1:1", "2:5", "5:6", "0:4", "0:5"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tiles = {"0:4", "3:6", "0:2", "2:5", "1:5", "4:5", "2:6", "3:4", "4:4", "2:2"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tiles = {"5:3", "3:4", "4:4", "4:6", "6:6", "6:5", "5:5", "5:0", "0:0", "5:4"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tiles = {"3:3", "3:4"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tiles = {"0:0", "1:1", "2:2", "3:3", "4:4", "5:5", "6:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tiles = {"1:1"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tiles = {"0:0", "0:1", "0:2", "0:6", "1:1", "1:2", "1:6", "2:6", "3:3", "3:5"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tiles = {"0:1", "2:2", "3:5", "2:5", "3:6", "1:5", "1:6", "4:5", "0:3", "0:5"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tiles = {"1:2", "0:4", "2:6", "1:4", "1:3", "2:4", "5:6", "0:0", "1:5", "0:2"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tiles = {"2:5", "4:5", "1:4", "1:2", "3:5", "0:4", "1:1", "2:6", "1:5", "0:2"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tiles = {"2:4", "3:6", "0:0", "0:2", "4:5", "2:3", "1:3", "0:6", "1:1", "1:4"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tiles = {"1:5", "6:6", "0:2", "2:5", "0:3", "3:4", "2:4", "1:1", "4:6", "1:4"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tiles = {"1:4", "4:5", "2:5", "0:4", "2:6", "1:5", "0:6", "3:4", "0:1", "1:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tiles = {"1:3", "3:4", "5:6", "0:1", "1:6", "1:4", "2:6", "0:4", "2:3", "3:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tiles = {"5:6", "3:4", "4:6", "2:5", "1:4", "1:3", "4:5", "0:0", "6:6", "0:4"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tiles = {"0:4", "2:4", "0:3", "3:5", "0:6", "2:3", "1:2", "4:6", "2:2", "2:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tiles = {"4:6", "6:6", "4:4", "6:5", "4:5", "5:5", "5:0", "0:0", "0:2", "5:3"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tiles = {"6:6", "4:6", "4:4", "4:3"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tiles = {"6:6", "4:6", "4:4", "4:3", "6:5", "3:5", "5:5", "5:0", "0:0"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tiles = {"6:6", "4:5", "4:4", "4:3", "6:5", "5:5", "5:0", "0:0", "6:3"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tiles = {"0:0", "0:1", "0:2", "1:2", "0:3", "1:3", "2:3", "0:4", "1:4", "2:4"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tiles = {"5:3", "3:4", "4:4", "4:6", "6:6", "6:5", "5:5", "3:6", "3:3", "2:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tiles = {"0:0", "5:5", "6:2", "2:3", "3:0", "0:1", "1:6", "6:4", "4:2", "5:3"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tiles = {"0:0", "0:1", "1:1", "0:2", "2:2", "1:2", "0:3", "1:3", "2:3", "3:3"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tiles = {"6:6"};
    DominoesGame* pObj = new DominoesGame();
    clock_t start = clock();
    int result = pObj->largestTotal(tiles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=7226&pm=4573
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
typedef vector<int> VI;
typedef vector<string> VS;
template<class T> inline int size(const T&c) { return c.size(); }
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
int s2i(string s) { istringstream i(s); int x; i>>x; return x; }
VS split(string s,string del=" ") {
  s+=del[0];
  string w;
  VS res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
VI s2vi(string s,string del=" ") {
  VS v=split(s,del);
  VI res; FOREACH(it,v) res.push_back(s2i(*it));
  return res;
}
 
vector<pair<int,int> > tiles;
 
int cache[1<<10][8][8][2][2];
 
int f(int avail, int a, int b, bool da, bool db) {
  int &res = cache[avail][a][b][da][db];
  if(res!=-1) return res;
  res = 0;
  REP(i,size(tiles)) if(avail&(1<<i)) {
    int avail2 = avail &~ (1<<i);
    bool dd = tiles[i].first == tiles[i].second;
    REP(j,2) {
      if(tiles[i].second == a) {
        int a2 = tiles[i].first;
        int v = (1+dd) * a2 + (1+db) * b;
        if(v%5!=0) v=0;
        res >?= v+f(avail2, a2, b, dd, db);
      }
      if(tiles[i].first == b) {
        int b2 = tiles[i].second;
        int v = (1+da) * a + (1+dd) * b2;
        if(v%5!=0) v=0;
        res >?= v+f(avail2, a, b2, da, dd);
      }
      swap(tiles[i].first, tiles[i].second);
    }
  }
  return res;
}
 
struct DominoesGame {
 
  // MAIN
  int largestTotal(vector <string> tiles_) {
    tiles.clear();
    FOREACH(it,tiles_) {
      VI a = s2vi(*it, ":");
      sort(a.begin(),a.end());
      tiles.push_back(make_pair(a[0],a[1]));
    }
    memset(cache, -1, sizeof(cache));
    int res = 0;
    REP(i, size(tiles)) {
      int v = tiles[i].first + tiles[i].second;
      if(v%5!=0) v=0;
      bool dd = tiles[i].first == tiles[i].second;
      res >?= v + f((1<<size(tiles))-1-(1<<i), tiles[i].first, tiles[i].second, dd, dd);
    }
    return res;
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/