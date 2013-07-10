/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4597
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

class GameEnding {
public:
    string result(int n, vector<string> moves);
};

string GameEnding::result(int n, vector<string> moves) {
    string ret;
    return ret;
}


int test0() {
    int n = 3;
    vector<string> moves = {"b2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    vector<string> moves = {"a2", "b3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    vector<string> moves = {"a3", "b3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    vector<string> moves = {"a1", "b2", "c3", "d4"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 7;
    vector<string> moves = {};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 7;
    vector<string> moves = {"b5", "g3", "f2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 3;
    vector<string> moves = {};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 3;
    vector<string> moves = {"a1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 3;
    vector<string> moves = {"c2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 3;
    vector<string> moves = {"c2", "a1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 3;
    vector<string> moves = {"a1", "c3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 3;
    vector<string> moves = {"c3", "a1", "b2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 4;
    vector<string> moves = {};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 3;
    vector<string> moves = {"a2", "a2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 5;
    vector<string> moves = {"b2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 5;
    vector<string> moves = {"a5"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 5;
    vector<string> moves = {"c1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 5;
    vector<string> moves = {"d1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 5;
    vector<string> moves = {"e3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 5;
    vector<string> moves = {"e3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 5;
    vector<string> moves = {"a2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 5;
    vector<string> moves = {"c5", "d2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 5;
    vector<string> moves = {"d4", "c1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 5;
    vector<string> moves = {"c3", "b2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 7;
    vector<string> moves = {"b1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 7;
    vector<string> moves = {"c6"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 7;
    vector<string> moves = {"a3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 7;
    vector<string> moves = {"f7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 7;
    vector<string> moves = {"d3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 7;
    vector<string> moves = {"f1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 7;
    vector<string> moves = {"g3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 7;
    vector<string> moves = {"b2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 7;
    vector<string> moves = {"c1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 7;
    vector<string> moves = {"a4"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 7;
    vector<string> moves = {"f4", "e3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 7;
    vector<string> moves = {"g2", "a4"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 7;
    vector<string> moves = {"b3", "f3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 7;
    vector<string> moves = {"e1", "a7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 7;
    vector<string> moves = {"d6", "a3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 7;
    vector<string> moves = {"a2", "e5"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 7;
    vector<string> moves = {"f1", "g4"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 7;
    vector<string> moves = {"c4", "e7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 7;
    vector<string> moves = {"b1", "b6"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 7;
    vector<string> moves = {"d6", "d6"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 7;
    vector<string> moves = {"e3", "a2", "a4"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 7;
    vector<string> moves = {"d6", "g1", "b7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 7;
    vector<string> moves = {"e4", "g5", "e3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 7;
    vector<string> moves = {"b5", "e7", "b6"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 7;
    vector<string> moves = {"g2", "c5", "d6"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 7;
    vector<string> moves = {"d3", "c3", "c4"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 7;
    vector<string> moves = {"b3", "b7", "a2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 7;
    vector<string> moves = {"g5", "c1", "f7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 7;
    vector<string> moves = {"g4", "e2", "a5"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 7;
    vector<string> moves = {"c6", "a2", "e7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 7;
    vector<string> moves = {"a7", "b6", "c5", "d4", "e3", "f2", "g1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 7;
    vector<string> moves = {"g7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 6;
    vector<string> moves = {};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Second player wins";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 7;
    vector<string> moves = {"a1", "a1"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 7;
    vector<string> moves = {"a1", "b2", "a2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 7;
    vector<string> moves = {"a1", "a7", "g1", "g7"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 3;
    vector<string> moves = {"a1", "a3"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 1;
    vector<string> moves = {};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 7;
    vector<string> moves = {"a1", "g7", "c2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 7;
    vector<string> moves = {"a1", "b2", "d4", "f6"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "First player wins";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 3;
    vector<string> moves = {"a1", "c2"};
    GameEnding* pObj = new GameEnding();
    clock_t start = clock();
    string result = pObj->result(n, moves);
    clock_t end = clock();
    delete pObj;
    string expected = "Invalid input";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14908325&rd=8068&pm=4597
********************************************************************************
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<numeric>
#include<iostream>
#include<sstream>
using namespace std;
 
#define sz(X) ((int)(X).size())
#define pb push_back
#define mp make_pair
#define all(X) (X).begin(),(X).end()
#define REP(I,N) for(I=0;I<(N);++I)
 
int n,dx[8]={1,2,2,1,-1,-2,-2,-1},dy[8]={2,1,-1,-2,-2,-1,1,2};
vector<int> a;
#define A(X,Y) a[(X)*n+(Y)]
 
inline bool good(int x,int y){
  if(x<0 || y<0 || x>=n || y>=n) return false;
  return true;
}
void mark(int x,int y){
  int i;
  REP(i,n) A(x,i)=true;
  REP(i,n) A(i,y)=true;
  REP(i,8) if(good(x+dx[i],y+dy[i])) A(x+dx[i],y+dy[i])=true;
}
int rec(){
  int i,j,best=1;
  vector<int> b(a);
  REP(i,n) REP(j,n) if(A(i,j)==false){
    mark(i,j);
    best=min(best,rec());
    if(best==-1) break;
    a=b;
  }
  return -best;
}
class GameEnding {
  public:
  string result(int N, vector <string> moves) {
    int i,ans,x,y;
    n=N;
    a.resize(n*n);
    REP(i,sz(moves)){
      x=moves[i][0]-'a';
      y=moves[i][1]-'1';
      if(A(x,y)) return "Invalid input";
      mark(x,y);
    }
    ans=rec();
    if(sz(moves)%2==1) ans=-ans;
    if(ans==1) return "First player wins";
    else return "Second player wins";
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/