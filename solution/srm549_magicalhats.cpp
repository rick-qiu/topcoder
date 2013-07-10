/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11966
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

class MagicalHats {
public:
    int findMaximumReward(vector<string> board, vector<int> coins, int numGuesses);
};

int MagicalHats::findMaximumReward(vector<string> board, vector<int> coins, int numGuesses) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"H"};
    vector<int> coins = {1};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"HHH", "H.H", "HH."};
    vector<int> coins = {9};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"HH", "HH"};
    vector<int> coins = {1, 2, 3, 4};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"HHH", "HHH", "H.H"};
    vector<int> coins = {13, 13, 13, 13};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"HHH", "HHH", "H.H"};
    vector<int> coins = {13, 13, 13, 13};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"H.H.", ".H.H", "H.H."};
    vector<int> coins = {17};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"HHH", "HHH", "H.H"};
    vector<int> coins = {13, 13, 13, 13};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"HH.....", ".HH....", "..HH...", "...HH..", "....HH.", ".....HH", "......H"};
    vector<int> coins = {1, 3, 5, 7};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"HH.....", ".HH....", "..HH...", "...HH..", "....HH.", ".....HH", "......H"};
    vector<int> coins = {101, 102};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"HH.", ".HH"};
    vector<int> coins = {3, 3, 3, 3};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"HH.....", ".HH....", "..HH...", "...HH..", "....HH.", ".....HH", "......H"};
    vector<int> coins = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"HH.....", ".HH....", "..HH...", "...HH..", "....HH.", ".....HH", "......H"};
    vector<int> coins = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25};
    int numGuesses = 13;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"H............", ".H...........", "..H..........", "...H.........", "....H........", ".....H.......", "......H......", ".......H.....", "........H....", ".........H...", "..........H..", "...........H.", "............H"};
    vector<int> coins = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"HHH", "H.H", "HHH", "H.H", "HHH"};
    vector<int> coins = {3, 5, 7};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"HHH", "H.H", "HHH", "H.H", "HHH"};
    vector<int> coins = {33, 337, 1007, 2403, 5601, 6003, 9999};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 1377;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"HHH", "H.H", "HHH", "H.H", "HHH"};
    vector<int> coins = {33, 337, 1007, 2408, 5601, 6003, 10000};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9386;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"HHH", "H.H", "HHH", "H.H", "HHH"};
    vector<int> coins = {33, 66, 1007, 6003, 9999};
    int numGuesses = 11;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 17108;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {".............", "......H......"};
    vector<int> coins = {13};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {".............", ".............", ".............", ".............", ".............", ".............", "......H......", ".............", ".............", ".............", ".............", ".............", "............."};
    vector<int> coins = {1};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
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
    vector<string> board = {".............", ".............", ".............", ".............", ".............", ".............", "......H......", ".....HHH.....", "......H......", ".............", ".............", ".............", "............."};
    vector<int> coins = {999, 999, 999, 9999, 999};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {".............", ".............", ".............", ".............", ".............", ".............", ".....H.H.....", "......H......", ".....H.H.....", ".............", ".............", ".............", "............."};
    vector<int> coins = {22};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {".............", ".............", ".............", ".............", ".............", ".............", ".....H.H.....", "......H......", ".....H.H.....", ".............", ".............", ".............", "............."};
    vector<int> coins = {401};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 401;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {".............", ".............", ".............", ".............", "...H.....H...", "....H...H....", ".....H.H.....", "......H......", ".....H.H.....", "....H...H....", "...H.....H...", ".............", "............."};
    vector<int> coins = {101};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {".H.H.", "H.H.H", ".H.H."};
    vector<int> coins = {1, 3, 5};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".H.H.", "H.H.H", ".H.H."};
    vector<int> coins = {9, 9, 9, 9, 9, 9, 9};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {".H.H.H.H.", "H.H.H.H.H", ".H.H.H.H."};
    vector<int> coins = {9, 9, 9, 9, 10000};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".H.H.H.H.", "H.H.H.H.H", ".H.H.H.H."};
    vector<int> coins = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {".H.H.H.H.", "H.H.H.H.H", ".H.H.H.H."};
    vector<int> coins = {1, 9, 9, 9, 9, 11, 11, 11, 11};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {".H.H.H.H.", "H.H.H.H.H", ".H.H.H.H."};
    vector<int> coins = {9, 9, 9, 9, 9, 11, 11, 11, 11};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {".H.H.H.H.", "H.H.H.H.H", ".H.H.H.H."};
    vector<int> coins = {9, 9, 9, 9, 9, 11, 11, 11, 11};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".H.H.H.H.", "H.H.H.H.H", ".H.H.H.H."};
    vector<int> coins = {9999, 9997, 9995, 9993, 9991, 9989, 9987, 9985, 9983, 9981, 9971, 9973, 9975};
    int numGuesses = 11;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 109823;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"....H.....", "...H.H....", "..H.H.H...", "...H.H....", "....H....."};
    vector<int> coins = {7, 3, 5, 3, 1};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"...H.H...", "...H.H...", "..HHHHH..", "...H.H...", "...H.H..."};
    vector<int> coins = {213, 33, 553, 2323, 4343};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 799;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"...H.H...", "...H.H...", "..HHHHH..", "...H.H...", "...H.H..."};
    vector<int> coins = {1, 3, 5, 7, 9, 3, 55, 77, 11};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"...H.H...", "...H.H...", "..HHHHH..", "...H.H...", "...H.H..."};
    vector<int> coins = {1, 3, 5, 7, 9, 3, 55, 77, 11};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"...H.H...", "...H.H...", "..HHHHH..", "...H.H...", "...H.H..."};
    vector<int> coins = {1, 3, 5, 7, 9, 3, 55, 77, 11};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"...H.H...", "...H.H...", "..HHHHH..", "...H.H...", "...H.H..."};
    vector<int> coins = {1, 3, 5, 7, 9, 3, 55, 77, 11};
    int numGuesses = 8;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"...H.H...", "...H.H...", "..HHHHH..", "...H.H...", "...H.H..."};
    vector<int> coins = {1, 3, 5, 7, 9, 3, 55, 77, 11};
    int numGuesses = 11;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {".H...H", "H....H", "H...H.", ".H.HHH"};
    vector<int> coins = {1, 1, 1, 1, 1, 3, 3, 3};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {".H...H", "H....H", "H...H.", ".H.HHH"};
    vector<int> coins = {99, 99};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {".H...H", "HH...H", "HH.HH.", ".H.HHH"};
    vector<int> coins = {99};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {".H...H", "HH...H", "HH.HH.", ".H.HHH"};
    vector<int> coins = {9, 9, 9, 9, 9, 99, 99, 99, 99};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {".H...H", "HH...H", "HH.HH.", ".H.HHH"};
    vector<int> coins = {9, 9, 9, 9, 9, 99, 99, 99, 99};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {".H...H", "HH...H", "HH.HH.", ".H.HHH"};
    vector<int> coins = {9, 9, 9, 9, 9, 99, 99, 99, 99};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {".H...H", "HH...H", "HH.HH.", ".H.HHH"};
    vector<int> coins = {9, 9, 9, 9, 9, 99, 99, 99, 99};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {".H...H", "HH...H", "HH.HH.", ".H.HHH"};
    vector<int> coins = {9, 9, 9, 9, 9, 99, 99, 99, 99};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"HHH"};
    vector<int> coins = {1, 3, 5};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"H", "H", "H"};
    vector<int> coins = {1, 2};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"HHHHHHHHHHHHH"};
    vector<int> coins = {9999, 9997, 9995};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"HHHHHHHHHHHHH"};
    vector<int> coins = {1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 5, 5, 5};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"HHH", "H.H", "HHH"};
    vector<int> coins = {1, 1, 1, 1};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"HHH", "H.H", "HHH"};
    vector<int> coins = {1, 1, 1, 1};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"HHH", "H.H", "HHH"};
    vector<int> coins = {1, 1, 1, 1};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"HHH", "H.H", "HHH"};
    vector<int> coins = {1, 1, 1, 1};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"HHH", "H.H", "HHH"};
    vector<int> coins = {1, 1, 1, 1};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"..H..H...H.HH", "..HHH........", "..H..HHH..H..", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", ".............", "............."};
    vector<int> coins = {689};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"...H.........", ".............", ".H...H......H", ".......H.....", ".............", "............H", ".............", "..H......H...", "........H....", ".......H.....", "..H..........", "............H", "...H........."};
    vector<int> coins = {545, 84, 132, 220, 340, 344, 634, 120, 38, 990, 400, 144, 572};
    int numGuesses = 12;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 3573;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"........HH...", "HH.H.....HH..", ".H.......H..H", ".............", "H..........H.", "............H", ".............", ".............", ".............", ".............", ".............", ".............", "............."};
    vector<int> coins = {633, 160, 38, 284, 278, 684, 512, 848, 982, 406, 592, 844, 386};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"...........HH", ".......H.....", "...........HH", "......H...H..", "..H..........", ".............", ".............", ".....H......H", "......HH.....", ".H...........", ".............", ".............", "............."};
    vector<int> coins = {73, 166, 330, 898, 598, 312, 752, 16, 448, 758, 684, 802, 902};
    int numGuesses = 11;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 4939;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {".............", ".............", ".H.......H...", ".H...H.....H.", "....H........", ".............", ".......H....H", "..HH.H.H.....", "......H......", ".............", ".............", ".............", "............."};
    vector<int> coins = {321, 502, 4, 332, 142, 576, 110, 142, 998, 4, 40, 500, 564};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 442;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {".H...H.......", "...H..H......", "......H......", "H.H.....H...H", "......H......", ".....H.......", "........H....", ".....H.......", ".............", ".............", ".............", ".............", "............."};
    vector<int> coins = {97, 188, 780, 646, 240, 946, 58, 752, 490, 34, 534, 298, 926};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"...........H.", ".H..........H", ".....HH......", ".............", "..HH....H....", "......H......", ".H.......H...", ".....H.......", "..H..........", ".............", ".............", ".............", "............."};
    vector<int> coins = {453, 946, 178, 640, 534, 32, 160, 920, 564};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"........H....", "....H........", ".............", ".............", ".H....HH...HH", "........H....", "...H.........", "........H.H.H", ".............", ".............", ".............", "....H........", "............."};
    vector<int> coins = {657, 154, 956, 186, 506, 684, 102};
    int numGuesses = 11;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {".............", "..H..HH....H.", ".......H.....", ".H.....H..H..", ".H...........", ".............", "HH......H....", "..H..........", ".............", ".............", ".............", ".............", "............."};
    vector<int> coins = {653, 32, 402, 8, 472, 580, 316, 54, 904, 282};
    int numGuesses = 11;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"HHH", "HHH", "HHH"};
    vector<int> coins = {5, 9, 13, 15, 17};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"HHH", "HHH", "HHH"};
    vector<int> coins = {5, 9, 13, 15, 17};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"HHH", "HHH", "HHH"};
    vector<int> coins = {5, 9, 13, 15, 17};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"HHH", "HHH", "HHH"};
    vector<int> coins = {5, 9, 13, 15, 17};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"HHH", "HHH", "HHH"};
    vector<int> coins = {5, 9, 13, 15, 17};
    int numGuesses = 8;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"HHH", "HHH", "HHH"};
    vector<int> coins = {5, 9, 13, 15, 10000};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 10042;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"HHH", "HHH", "HHH"};
    vector<int> coins = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 90000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {1001, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {3, 5, 7, 9};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {3, 5, 7, 9};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {3, 5, 7, 9};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {9, 7, 5, 3, 1, 11};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {9, 7, 5, 3, 1, 10000, 4, 6, 8, 11};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {9, 7, 5, 3, 1, 11};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {9, 7, 5, 3, 1, 11};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {9, 7, 5, 3, 1, 11};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"HHH.", "HHHH", "HHH."};
    vector<int> coins = {9, 7, 5, 3, 1, 11};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {".HHH.", "HHHHH", ".HHH."};
    vector<int> coins = {9, 7, 5, 3, 11};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {".HHH.", "HHHHH", ".HHH."};
    vector<int> coins = {9, 7, 5, 3, 11};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {".HHH.", "HHHHH", ".HHH."};
    vector<int> coins = {9, 7, 5, 3, 11};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {".HHH.", "HHHHH", ".HHH."};
    vector<int> coins = {9, 7, 5, 3, 11};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"..H..", ".HHH.", "HHHHH", ".HHH.", "..H.."};
    vector<int> coins = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"..H..", ".HHH.", "HHHHH", ".HHH.", "..H.."};
    vector<int> coins = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"..H..", ".HHH.", "HHHHH", ".HHH.", "..H.."};
    vector<int> coins = {9, 7, 5, 3, 11, 13, 17};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"..H..", ".HHH.", "HHHHH", ".HHH.", "..H.."};
    vector<int> coins = {9, 7, 5, 3, 11, 13, 17};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"..H..", ".HHH.", "HHHHH", ".HHH.", "..H.."};
    vector<int> coins = {9, 7, 5, 3, 11, 13, 17};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"..H..", ".HHH.", "HHHHH", ".HHH.", "..H.."};
    vector<int> coins = {9, 7, 5, 3, 11, 13, 17};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"..H..", ".HHH.", "HHHHH", ".HHH.", "..H.."};
    vector<int> coins = {9, 7, 5, 3, 11, 13, 17};
    int numGuesses = 8;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"H.H.H", ".H.H.", "H...H", ".H.H.", "H.H.H"};
    vector<int> coins = {9999, 9999};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"H.H.H", ".H.H.", "H...H", ".H.H.", "H.H.H"};
    vector<int> coins = {9999, 9999};
    int numGuesses = 2;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"H.H.H", ".H.H.", "H...H", ".H.H.", "H.H.H"};
    vector<int> coins = {9999, 9999};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 19998;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"H.H.H", ".H.H.", "H...H", ".H.H.", "H.H.H"};
    vector<int> coins = {9999, 9999};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 19998;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"H.H.H", ".H.H.", "H...H", ".H.H.", "H.H.H"};
    vector<int> coins = {9999, 9999, 9999, 9999, 9999, 9999};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 49995;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"H.H.H", ".H.H.", "H.H.H", ".H.H.", "H.H.H"};
    vector<int> coins = {7, 7, 7, 7, 7, 7, 7};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"H.H.H", ".H.H.", "H.H.H", ".H.H.", "H.H.H"};
    vector<int> coins = {1, 3, 5, 7, 9};
    int numGuesses = 3;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {".HH.H", ".H.H.", "H...H", ".H.H.", "H.HHH"};
    vector<int> coins = {1, 3, 5, 9, 11};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {".HH.H", ".H.H.", "H...H", ".H.H.", "H.HHH"};
    vector<int> coins = {1, 3, 5, 9, 11};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"H.H.H", ".H.H.", "H.H.H", ".H.H.", "H.H.H"};
    vector<int> coins = {1, 3, 5, 7, 9};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {"HHHH", "HHHH", "HHH.", "..HH"};
    vector<int> coins = {5691, 5122, 9927, 5599, 291};
    int numGuesses = 13;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 26630;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"HHHH", "HHHH", "HHH.", "..HH"};
    vector<int> coins = {5691, 5122, 9927, 5599, 291};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 26630;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {"HHHH", "HHHH", "HHH.", "..HH"};
    vector<int> coins = {5691, 5122, 9927, 5599, 291};
    int numGuesses = 8;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 16703;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {"HHHH", "H.HH", "HHH.", ".HHH", "...."};
    vector<int> coins = {6920, 5348, 2014, 899, 1848};
    int numGuesses = 13;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 17029;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> board = {"HHH.", "HHHH", "HH.H", "HHH.", "...."};
    vector<int> coins = {4235, 4360, 3744, 5087, 8501};
    int numGuesses = 13;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 25927;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {"HHHHH", "HHHHH", ".HHH."};
    vector<int> coins = {5699, 3696, 5806, 9057, 3517};
    int numGuesses = 13;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 27775;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {"HHH", "HHH", "HHH", "HH.", "HH."};
    vector<int> coins = {7236, 2738, 5991, 1489, 2818};
    int numGuesses = 13;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 20272;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {"H.HH", "HH.H", "H..H", "H.HH"};
    vector<int> coins = {4941, 8353, 3698, 4178, 8772, 7943, 8567};
    int numGuesses = 6;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 20760;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"H..H", "H..H", "HH..", "HHHH", "H.HH"};
    vector<int> coins = {8128, 4681, 2908, 8498, 8451, 6814, 3435, 8726, 8672};
    int numGuesses = 9;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 42915;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {"HHHH.", "HHHH.", "HHH.."};
    vector<int> coins = {4155, 8425, 8974, 4261, 9842, 9879, 6403};
    int numGuesses = 4;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 8416;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {"HHHH", "HHHH", ".HHH", "H..H"};
    vector<int> coins = {5063, 8062, 900, 8753, 911, 7004, 3615, 2211, 9929};
    int numGuesses = 7;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 12700;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {"H.H", "HH.", "HHH", "H.H"};
    vector<int> coins = {1492, 2288, 9019, 8273, 3646};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 7426;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {"HHHHH", "HHHHH"};
    vector<int> coins = {1, 2};
    int numGuesses = 1;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {"H.HH", "HHH.", ".HHH", "HH.H"};
    vector<int> coins = {5676, 5672, 5684, 5678};
    int numGuesses = 5;
    MagicalHats* pObj = new MagicalHats();
    clock_t start = clock();
    int result = pObj->findMaximumReward(board, coins, numGuesses);
    clock_t end = clock();
    delete pObj;
    int expected = 11348;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15171&pm=11966
********************************************************************************
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
 
class MagicalHats {
public:
  int findMaximumReward(vector <string>, vector <int>, int);
};
 
int k, x[15], y[15], guess, kg;
int mem[2222222];
int good[222222];
 
int go(int v) {
  if (mem[v] >= 0) return mem[v];
  int b[15], vv = v, cur = 0;
  for (int i=0;i<k;i++) {
    b[i] = vv % 3;
    if (b[i] > 0) cur++;
    vv /= 3;
  }
  if (cur == guess) {
    mem[v] = 0;
    for (int i=0;i<k;i++)
      if (b[i] == 1) mem[v]++;
    return mem[v];
  }
  int mx = 0;
  for (int i=0;i<k;i++) {
    if (b[i] > 0) continue;
    int mn = 100000;
    for (int j=1;j<=2;j++) {
      int canbe = 0;
      for (int tt=0;tt<kg;tt++) {
        int t = good[tt];
        int ok = 1;
        for (int z=0;z<k;z++)
          if (b[z] > 0)
            if (t & (1 << z)) {
              if (b[z] == 2) {ok = 0; break; }
            } else {
              if (b[z] == 1) {ok = 0; break; }
            }
        if (!ok) continue;
        if (j == 1) {
          if (t & (1 << i)) {
            canbe = 1;
            break;
          }
        } else {
          if (!(t & (1 << i))) {
            canbe = 1;
            break;
          }
        }
      }
      if (canbe) {
        vv = v;
        int pw = 1;
        for (int z=0;z<i;z++) pw *= 3;
        pw *= j;
        if (go(vv + pw) < mn) mn = go(vv+pw);
      }
    }
    if (mn == 100000) continue;
    if (mn > mx) mx = mn;
  }
  mem[v] = mx;
  return mx;
}
 
int MagicalHats::findMaximumReward(vector <string> a, vector <int> coins, int guess) {
  int n = a.size(), m = a[0].length(), i, j, k = 0;
  int row[16], col[16];
  ::guess = guess;
  for (i=0;i<n;i++)
    for (j=0;j<m;j++)
      if (a[i][j] == 'H') {
        x[k] = i;
        y[k] = j;
        k++;
      }
  ::k = k;
  kg = 0;
  for (int t=0;t<(1<<k);t++) {
    int kq = 0, p[111];
    for (i=0;i<k;i++)
      if (t & (1 << i)) p[kq++] = i;
    if (kq != coins.size()) continue;
    for (i=0;i<n;i++) row[i] = 0;
    for (i=0;i<m;i++) col[i] = 0;
    for (i=0;i<n;i++)
      for (j=0;j<m;j++)
        if (a[i][j] == 'H') {
          row[i] ^= 1;
          col[j] ^= 1;
        }
    for (i=0;i<kq;i++) {
      row[x[p[i]]] ^= 1;
      col[y[p[i]]] ^= 1;
    }
    int ok = 1;
    for (i=0;i<n;i++)
      if (row[i]) ok = 0;
    for (i=0;i<m;i++)
      if (col[i]) ok = 0;
    if (!ok) continue;
    good[kg++] = t;
  }
  if (kg == 0) return -1;
  int pw = 1;
  for (i=0;i<k;i++) pw *= 3;
  for (i=0;i<pw;i++) mem[i] = -1;
  int cnt = go(0);
  sort(coins.begin(),coins.end());
  int ans = 0;
  for (i=0;i<cnt;i++) ans += coins[i];
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/