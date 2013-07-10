/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4440
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

class AntiChess {
public:
    int sacrifice(vector<string> white, string black);
};

int AntiChess::sacrifice(vector<string> white, string black) {
    int ret;
    return ret;
}


int test0() {
    vector<string> white = {"a2", "c2", "d2", "e3", "h4"};
    string black = "b6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> white = {"a2", "h2"};
    string black = "g3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> white = {"a2", "e2", "h2"};
    string black = "e6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> white = {"a7", "h7"};
    string black = "a8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> white = {"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"};
    string black = "d1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> white = {"a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3"};
    string black = "d1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> white = {"a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3"};
    string black = "d8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> white = {"a4", "b7", "c2", "e6", "f4", "g2", "h7"};
    string black = "e4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> white = {"a4", "b7", "c2", "e6", "f5", "g2", "h4"};
    string black = "e4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> white = {"a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7"};
    string black = "d1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> white = {"e4"};
    string black = "e5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> white = {"b2", "c3", "d4", "e5", "f4", "g3", "h2"};
    string black = "e2";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> white = {"c5", "h7", "d6", "e7", "b5", "a2", "f5", "g6"};
    string black = "b2";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> white = {"h4", "b4", "g7", "a5"};
    string black = "a6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"a2", "b3", "c6", "d5", "e7", "f6", "g7", "h6"};
    string black = "e4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> white = {"a6", "b4", "d3", "e5", "f7", "g4", "h4"};
    string black = "e3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> white = {"a5", "b3", "c2", "d5", "e2", "f3", "h6"};
    string black = "f6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> white = {"a2", "b5", "c7", "d2", "e5", "g5", "h6"};
    string black = "b1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> white = {"a4", "b5", "c5", "d5", "e2", "f6", "g5", "h6"};
    string black = "e8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> white = {"a4", "b4", "c3", "d3", "e3", "f6", "g4", "h3"};
    string black = "e1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"b2", "c3", "d3", "e6", "f2", "g5", "h5"};
    string black = "g7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> white = {"a3", "b3", "c6", "d4", "e2", "f4", "g5", "h7"};
    string black = "d8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> white = {"a3", "b6", "c5", "d7", "f3", "g6", "h6"};
    string black = "f5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> white = {"a6", "b4", "c4", "d6", "e3", "h2"};
    string black = "c1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"a4", "b5", "c3", "d4", "e2", "f4", "h6"};
    string black = "e7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> white = {"a7", "b3", "c7", "d3", "e6", "f5", "g6", "h5"};
    string black = "g7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> white = {"a2", "b5", "c2", "e2", "g4", "h2"};
    string black = "a5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> white = {"a3", "b4", "c7", "e4", "f3", "g7", "h6"};
    string black = "f7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> white = {"a6", "b3", "c7", "d6", "e6", "f5", "g5", "h5"};
    string black = "e1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> white = {"a2", "b2", "c6", "d6", "e7", "f4", "g3", "h4"};
    string black = "e8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> white = {"a4", "b6", "d7", "e5", "f5", "g7", "h5"};
    string black = "c5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> white = {"a5", "c4", "d7", "e3", "f2", "g2"};
    string black = "b7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> white = {"a6", "b6", "c5", "d5", "e7", "f4", "g5", "h6"};
    string black = "d3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> white = {"a4", "b5", "c3", "d5", "e4", "f3", "g6", "h2"};
    string black = "h4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> white = {"a4", "b4", "c2", "d2", "e2", "f4", "g5", "h2"};
    string black = "c1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> white = {"a2", "b7", "c5", "d7", "e5", "f2", "g2", "h3"};
    string black = "f7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> white = {"a2", "b7", "c2", "d2", "e7", "f7", "g4", "h4"};
    string black = "e2";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"a4", "b3", "e2", "f7", "g5", "h5"};
    string black = "e5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> white = {"a7", "b7", "c4", "d4", "e6", "f7", "g2", "h2"};
    string black = "b1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> white = {"a5", "b5", "c7", "d6", "e6", "f4", "g7", "h7"};
    string black = "f3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> white = {"a7", "b4", "c4", "d6", "e6", "g4", "h3"};
    string black = "a4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"a4", "b4", "c7", "d3", "e2", "f5", "g6", "h5"};
    string black = "b3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> white = {"a6", "c6", "d5", "e7", "f6", "g5"};
    string black = "a7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> white = {"a7", "b4", "c2", "d2", "e3", "f5", "g4", "h4"};
    string black = "a2";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> white = {"a5", "b2", "c2", "d5", "e2", "f4", "g6", "h7"};
    string black = "g1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> white = {"a5", "b7", "c7", "d2", "e6", "f7", "g4", "h2"};
    string black = "a7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> white = {"a6", "b6", "c5", "d3", "e4", "f2", "g7"};
    string black = "e5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> white = {"a4", "b3", "d7", "e2", "f5", "g4"};
    string black = "g3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> white = {"a7", "b4", "c2", "d4", "e5", "f6", "g4", "h2"};
    string black = "h7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> white = {"a7", "b4", "c4", "f7", "g7", "h6"};
    string black = "f6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> white = {"a2", "b6", "c7", "d7", "e6", "f7", "g2"};
    string black = "g4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> white = {"b7", "c3", "d6", "e5", "f3", "g2", "h3"};
    string black = "a6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> white = {"a5", "b5", "c2", "d3", "e7", "f2", "g2", "h2"};
    string black = "h7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> white = {"a2", "b4", "c6", "d2", "e6", "f3", "g6", "h5"};
    string black = "f4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> white = {"a2", "b7", "c4", "d2", "e4", "f3", "g5", "h5"};
    string black = "f8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> white = {"a7", "b5", "c7", "d2", "e5", "f4", "g2", "h6"};
    string black = "f8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> white = {"d3", "g2"};
    string black = "b7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> white = {"d2", "g3", "h5"};
    string black = "d4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> white = {"f3", "g6", "h2"};
    string black = "a2";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> white = {"h6"};
    string black = "f4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> white = {"g7", "h2"};
    string black = "a5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> white = {"b2", "f4", "g4", "h6"};
    string black = "g8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> white = {"a5", "b6", "h7"};
    string black = "h6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"e4", "f5", "g7"};
    string black = "d8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> white = {"a4", "f6", "g3"};
    string black = "e3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> white = {"a7", "c4", "d4", "e3"};
    string black = "c7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> white = {"a3", "b4", "d2", "e4"};
    string black = "h6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> white = {"a6", "b6", "c7", "d6", "e7", "f6", "g6", "h7"};
    string black = "b5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> white = {"a6", "b6", "c6", "d7", "e6", "f7", "g6", "h7"};
    string black = "a3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> white = {"a7", "b6", "c6", "d7", "e6", "f7", "g6", "h7"};
    string black = "a6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> white = {"b6", "c7", "d7", "e7", "f6", "g7", "h7"};
    string black = "c4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> white = {"a6", "b6", "c7", "d6", "e7", "f7", "g7", "h6"};
    string black = "d5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> white = {"a7", "b6", "c6", "d6", "e7", "f7", "g7", "h7"};
    string black = "h6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> white = {"a6", "b6", "c6", "d7", "e6", "f7", "g6", "h6"};
    string black = "d6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> white = {"a3", "b3", "c2", "d2", "e2", "f3", "g3", "h2"};
    string black = "c1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"a2", "b2", "c2", "d3", "e3", "f3", "g3", "h3"};
    string black = "f5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> white = {"a2", "b2", "c2", "d2", "f3", "g2", "h3"};
    string black = "d7";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> white = {"a2", "b2", "c2", "d2", "e3", "f3", "g3", "h3"};
    string black = "f5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"a3", "b3", "c2", "d2", "e3", "f2", "g3", "h2"};
    string black = "c5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> white = {"a2", "b3", "c2", "d2", "e3", "f3", "g2", "h2"};
    string black = "a8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> white = {"a3", "b2", "c3", "d2", "e2", "f3", "g3", "h2"};
    string black = "b1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> white = {"a3", "b3", "c2", "d3", "e2", "f3", "g2", "h2"};
    string black = "c6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"g3"};
    string black = "b4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> white = {"b3", "d2", "e2"};
    string black = "h3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> white = {"b2"};
    string black = "e6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> white = {"a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3"};
    string black = "d8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> white = {"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"};
    string black = "d8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> white = {"e6", "g2", "h4"};
    string black = "g3";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> white = {"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"};
    string black = "d6";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
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
    vector<string> white = {"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h7"};
    string black = "h8";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> white = {"a2"};
    string black = "b5";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> white = {"e6", "b5", "f4"};
    string black = "g4";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> white = {"a2", "h3"};
    string black = "a1";
    AntiChess* pObj = new AntiChess();
    clock_t start = clock();
    int result = pObj->sacrifice(white, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=7999&pm=4440
********************************************************************************
# include <string> 
# include <vector> 
# include <iostream> 
# include <sstream> 
# include <cstdio> 
# include <cstdlib> 
# include <cmath> 
# include <cctype> 
# include <cstring> 
# include <map> 
# include <queue> 
# include <deque> 
# include <set> 
# include <algorithm> 
# include <utility> 
# include <functional> 
# include <stack> 
# include <bitset> 
# include <complex> 
# include <cassert> 
# include <ctime> 
# include <list> 
# include <valarray> 
 
# ifdef WIN32 
typedef __int64 int64 ; 
# define min __min 
# define max __max 
# define for if ( false ) ; else for 
# else 
typedef long long int64 ; 
# endif 
 
using namespace std ; 
 
vector < char > cols ; 
 
map < pair < vector < int > , pair < int , int > > , int > p1 ; 
map < pair < vector < int > , pair < int , int > > , int > p2 ; 
 
int process2 ( pair < vector < int > , pair < int , int > > pos ) ; 
 
int process1 ( pair < vector < int > , pair < int , int > > pos ) 
{ 
  if ( p1 [ pos ] ) 
    return p1 [ pos ] - 1 ; 
  for ( int i = 0 ; i < pos . first . size ( ) ; ++ i ) 
    if ( pos . second . second - pos . first [ i ] == 1 && abs ( pos . second . first - cols [ i ] ) == 1 ) 
    { 
      p1 [ pos ] = 1 ; 
      return 0 ; 
    } 
  int r = 0 ; 
  for ( int i = 0 ; i < pos . first . size ( ) ; ++ i ) 
    if ( pos . first [ i ] != - 1 && pos . first [ i ] != 8 ) 
    { 
      if ( pos . second . first == cols [ i ] && pos . second . second == pos . first [ i ] + 1 ) 
        continue ; 
      ++ pos . first [ i ] ; 
      r = max ( process2 ( pos ) , r ) ; 
      -- pos . first [ i ] ; 
      if ( pos . first [ i ] == 2 && ! ( pos . second . first == cols [ i ] && pos . second . second == pos . first [ i ] + 2 ) ) 
      { 
        pos . first [ i ] += 2 ; 
        r = max ( process2 ( pos ) , r ) ; 
        pos . first [ i ] -= 2 ; 
      } 
    } 
  p1 [ pos ] = r + 1 ; 
  return r ; 
} 
 
int process2 ( pair < vector < int > , pair < int , int > > pos ) 
{ 
  if ( p2 [ pos ] ) 
    return p2 [ pos ] - 1 ; 
  int r = 1000000 ; 
  for ( int i = 0 ; i < pos . first . size ( ) ; ++ i ) 
  { 
    if ( pos . first [ i ] == - 1 ) 
      continue ; 
    pair < int , int > cur = pos . second ; 
    int dx = cur . first - cols [ i ] ; 
    int dy = cur . second - pos . first [ i ] ; 
    if ( abs ( dx ) != abs ( dy ) && dx && dy ) 
      continue ; 
    bool bad = false ; 
    for ( int j = 0 ; j < pos . first . size ( ) ; ++ j ) 
      if ( i != j ) 
      { 
        int dx1 = cur . first - cols [ j ] ; 
        int dy1 = cur . second - pos . first [ j ] ; 
        if ( abs ( dx1 ) != abs ( dy1 ) && dx1 && dy1 ) 
          continue ; 
        if ( abs ( dx1 ) + abs ( dy1 ) >= abs ( dx ) + abs ( dy ) ) 
          continue ; 
        if ( dx && ! dx1 || dy && ! dy1 || ! dx && dx1 || ! dy && dy1 ) 
          continue ; 
        if ( dx * dx1 < 0 || dy * dy1 < 0 ) 
          continue ; 
        bad = true ; 
        break ; 
      } 
    if ( bad ) 
      continue ; 
    pos . second . first = cols [ i ] ; 
    pos . second . second = pos . first [ i ] ; 
    pos . first [ i ] = - 1 ; 
    r = min ( process1 ( pos ) + 1 , r ) ; 
    pos . first [ i ] = pos . second . second ; 
    pos . second = cur ; 
  } 
  if ( r == 1000000 ) 
    r = 0 ; 
  p2 [ pos ] = r + 1 ; 
  return r ; 
} 
 
class AntiChess 
{ 
public : 
  int sacrifice ( vector <string> white, string black ) 
  { 
    int res ; 
    int i , j , k ; 
    int n ; 
    cols . clear ( ) ; 
    sort ( white . begin ( ) , white . end ( ) ) ; 
    for ( int i = 0 ; i < white . size ( ) ; ++ i ) 
      cols . push_back ( white [ i ] [ 0 ] - 'a' ) ; 
    vector < int > pos ; 
    for ( int i = 0 ; i < white . size ( ) ; ++ i ) 
      pos . push_back ( white [ i ] [ 1 ] - '0' ) ; 
    p1 . clear ( ) ; 
    p2 . clear ( ) ; 
    return process1 ( make_pair ( pos , make_pair ( black [ 0 ] - 'a' , black [ 1 ] - '0' ) ) ) ; 
  } 
   
 
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.1 [28-Sep-2005]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/