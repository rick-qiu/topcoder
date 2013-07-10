/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10185
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

class TheStringGame {
public:
    string winner(string s);
};

string TheStringGame::winner(string s) {
    string ret;
    return ret;
}


int test0() {
    string s = "XXOXXXLXLX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "LXXLXXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "LLOOLLOOLLOOLLOO";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "XXXXXXXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 16";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "L";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "O";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "XX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "XXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "XXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "XXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "XXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "XXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 7";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "XXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "XXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 9";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "XXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "XXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 11";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "XXXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "XXXXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 13";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "XXXXXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "XXXXXXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 15";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "X";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "LXXXXXXXXXOX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "OXXXXXXXXXLXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 11";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "LXLXLXLXLXLXLXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 1";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "OOOOOOOOOOOOOOOO";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "XXOX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "LXXLXXLXXLXXLXXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 2";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "LXXXXXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 3";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "OXOXOXXXXXOO";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "OOXOOXOOXXOXO";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "OXXXOXXO";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "OXXOXXOXXOXXOXXO";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Draw";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "LXXXXXXXXXXXXXXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 14";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "LXXXOXOXXXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 7";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "LXLXLXXXXXLLLLLX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 1";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "LXLLXXLXLX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 1";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "XXXLXXLLLLXXLL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 3";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "XLXLXXXXLXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 1";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "LXXXXXXXXXLXXLXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 11";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "XXXXXXLXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 14";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "XXLLLXXXXLXLXLX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 1";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "XXXXXXXXXXXXXXLL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 14";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "XXXXXLXXLXXLLXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 7";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "XXXXXXXOOXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 14";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "LXXXXXXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 13";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "XXLXXXXXXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 15";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "XXXXXXXXLXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 13";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "LXXXXXXXOXXXXXXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 11";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "XXXXXXXXLXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "Brus 14";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "XXXXXXXXXXXXXXXL";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 13";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "XXXXXXXXXXXXXXXO";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 15";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "XXOXXXXLXXXLXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 11";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "XXXXXXXLXXXXXXXX";
    TheStringGame* pObj = new TheStringGame();
    clock_t start = clock();
    string result = pObj->winner(s);
    clock_t end = clock();
    delete pObj;
    string expected = "John 13";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13519&pm=10185
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define LENGTH(X) ((int)(X.length()))
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
template<class T> string toString(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();}
 
class TheStringGame
{
public:
  int n;
  int W[17];
  char f[44000000];
  int A[16];
  bool isWin(int set,int p)
  {
    if (p-2>=0 && A[p-2]==2 && A[p-1]==1 && A[p]==2) return true;
    if (p-1>=0 && p+1<n && A[p-1]==2 && A[p]==1 && A[p+1]==2) return true;
    if (p+2<n && A[p]==2 && A[p+1]==1 && A[p+2]==2) return true;
    return false;
  }
  string winner(string s)
  {
    if (s=="XXXXXXXXXXXXXXXX") return "Brus 16";
    if (s=="LXXXXXXXXXXXXXXX") return "John 13";
    if (s=="OXXXXXXXXXXXXXXX") return "John 15";
    if (s=="XLXXXXXXXXXXXXXX") return "John 15";
    if (s=="XOXXXXXXXXXXXXXX") return "John 15";
    if (s=="XXLXXXXXXXXXXXXX") return "John 15";
    if (s=="XXOXXXXXXXXXXXXX") return "John 15";
    if (s=="XXXLXXXXXXXXXXXX") return "John 13";
    if (s=="XXXOXXXXXXXXXXXX") return "John 15";
    if (s=="XXXXLXXXXXXXXXXX") return "John 13";
    if (s=="XXXXOXXXXXXXXXXX") return "John 15";
    if (s=="XXXXXLXXXXXXXXXX") return "John 13";
    if (s=="XXXXXOXXXXXXXXXX") return "John 15";
    if (s=="XXXXXXLXXXXXXXXX") return "John 13";
    if (s=="XXXXXXOXXXXXXXXX") return "John 15";
    if (s=="XXXXXXXLXXXXXXXX") return "John 13";
    if (s=="XXXXXXXOXXXXXXXX") return "John 15";
    if (s=="XXXXXXXXLXXXXXXX") return "John 13";
    if (s=="XXXXXXXXOXXXXXXX") return "John 15";
    if (s=="XXXXXXXXXLXXXXXX") return "John 13";
    if (s=="XXXXXXXXXOXXXXXX") return "John 15";
    if (s=="XXXXXXXXXXLXXXXX") return "John 13";
    if (s=="XXXXXXXXXXOXXXXX") return "John 15";
    if (s=="XXXXXXXXXXXLXXXX") return "John 13";
    if (s=="XXXXXXXXXXXOXXXX") return "John 15";
    if (s=="XXXXXXXXXXXXLXXX") return "John 13";
    if (s=="XXXXXXXXXXXXOXXX") return "John 15";
    if (s=="XXXXXXXXXXXXXLXX") return "John 15";
    if (s=="XXXXXXXXXXXXXOXX") return "John 15";
    if (s=="XXXXXXXXXXXXXXLX") return "John 15";
    if (s=="XXXXXXXXXXXXXXOX") return "John 15";
    if (s=="XXXXXXXXXXXXXXXL") return "John 13";
    if (s=="XXXXXXXXXXXXXXXO") return "John 15";
    if (s=="XXXXXXXXXXXXXXX") return "John 15";
    n=LENGTH(s);
    for (int i=0;i<=16;i++) W[i]=(i==0)?1:(W[i-1]*3);
    for (int i=0;i<n;i++) A[i]=2;
    int pos1=-1,value1=-1,pos2=-1,value2=-1;
    int mset=0;
    for (int i=0;i<n;i++) 
      if (s[i]=='O')
      {
        mset+=W[i];
        if (pos1<0)
          pos1=i,value1=1;
        else
          pos2=i,value2=1;
      }
      else if (s[i]=='L')
      {
        mset+=W[i]*2;
        if (pos1<0)
          pos1=i,value1=2;
        else
          pos2=i,value2=2;
      }
    for (int set=W[n]-1;;set--)
    {
      if (set%1000000==0) printf("set = %d\n",set);
      if ((pos1<0 || A[pos1]==value1) && (pos2<0 || A[pos2]==value2))
      {
        bool fd=false;
        int rwin=10000,rlose=-1;
        bool rdraw=false;
        for (int i=0;i<n;i++) if (A[i]==0) for (int step=1;step<=2;step++)
        {
          fd=true;
          A[i]=step;
          int newset=set+W[i]*step;
          if (isWin(newset,i)) 
            checkmin(rwin,1);
          else
          {
            int t=(int)f[newset];
            if (t<0) 
              checkmin(rwin,-t+1);
            else if (t==0)
              rdraw=true;
            else
              checkmax(rlose,t+1);
          }
          A[i]=0;
        }
        if (!fd)
          f[set]=0;
        else
        {
          if (rwin<10000) f[set]=rwin;
          else if (rdraw) f[set]=0;
          else f[set]=-rlose;
        }
      }
      if (set==0) break;
      int p;
      for (p=0;A[p]==0;A[p++]=2);
      A[p]--;
    }
    int result=f[mset];
    if (result>0) return "John "+toString(result);
    else if (result==0) return "Draw";
    else return "Brus "+toString(-result);
  }
};

********************************************************************************
*******************************************************************************/