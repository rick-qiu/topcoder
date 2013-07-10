/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8317
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

class DukeOnLargeChessBoard {
public:
    string lastCell(string initPosition);
};

string DukeOnLargeChessBoard::lastCell(string initPosition) {
    string ret;
    return ret;
}


int test0() {
    string initPosition = "(999999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string initPosition = "(999999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string initPosition = "(123456;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 112256)";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string initPosition = "(987654;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(864197, 000000)";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999998)";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string initPosition = "(000001;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string initPosition = "(000002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999996)";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string initPosition = "(999997;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string initPosition = "(000003;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string initPosition = "(999996;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000002)";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string initPosition = "(239566;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 760432)";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string initPosition = "(566239;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string initPosition = "(000002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string initPosition = "(131072;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string initPosition = "(999996;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999999)";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999998)";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999435)";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000003)";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000002)";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000001)";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string initPosition = "(000002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999996)";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string initPosition = "(000002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000002)";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string initPosition = "(000002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000001)";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string initPosition = "(000002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string initPosition = "(000002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string initPosition = "(000030;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999968)";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string initPosition = "(000566;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000459)";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string initPosition = "(765432;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 111112)";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string initPosition = "(888888;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 111110)";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string initPosition = "(900000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000001)";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string initPosition = "(999996;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000001)";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string initPosition = "(999996;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000002)";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string initPosition = "(526868;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string initPosition = "(065536;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string initPosition = "(000004;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string initPosition = "(888888;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string initPosition = "(000004;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string initPosition = "(000006;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string initPosition = "(109332;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(109329, 000000)";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string initPosition = "(500000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(499995, 000000)";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string initPosition = "(888888;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(444443, 000000)";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string initPosition = "(900002;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999995, 000000)";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999993, 000000)";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string initPosition = "(000001;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 999996)";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string initPosition = "(000001;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string initPosition = "(328935;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 016325)";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string initPosition = "(555555;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string initPosition = "(777777;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 111110)";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string initPosition = "(999997;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string initPosition = "(000003;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string initPosition = "(000999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string initPosition = "(234567;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string initPosition = "(235235;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string initPosition = "(999999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string initPosition = "(999999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string initPosition = "(999999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string initPosition = "(000003;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string initPosition = "(055555;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(055553, 000000)";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string initPosition = "(531441;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(530713, 000000)";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string initPosition = "(777777;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string initPosition = "(999997;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999995, 000000)";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string initPosition = "(999997;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(499999, 000000)";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string initPosition = "(999997;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001, 000000)";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string initPosition = "(999999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string initPosition = "(000001;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string initPosition = "(000001;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string initPosition = "(999998;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999997, 000000)";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string initPosition = "(999997;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string initPosition = "(999997;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string initPosition = "(000003;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string initPosition = "(999996;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string initPosition = "(000003;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string initPosition = "(999996;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999995, 000000)";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string initPosition = "(123523;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string initPosition = "(873452;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999999, 000000)";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string initPosition = "(999434;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999433, 000000)";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string initPosition = "(000239;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string initPosition = "(001001;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000000)";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string initPosition = "(999999;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(999997, 000000)";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string initPosition = "(000000;
    DukeOnLargeChessBoard* pObj = new DukeOnLargeChessBoard();
    clock_t start = clock();
    string result = pObj->lastCell(initPosition);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000, 000006)";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14768757&rd=10794&pm=8317
********************************************************************************
#include <memory>
#include <algorithm>
#include <string>
using namespace std;
class DukeOnLargeChessBoard {
  public:
    int Marked[1000005][2];
    int Valid(int a, int b) {
      return (a >= 0 && a < 1000000 && b >= 0 && b < 1000000 && (Marked[a][0] == -1 || !(b >= Marked[a][0] && b <= Marked[a][1])));
    }
    int maxUp(int a, int b) {
      int ret;
      if (Marked[a][0] == -1 || Marked[a][1] < b)
        ret = 999999;
      else
        ret = Marked[a][0] - 1;
      if (a < 999999)
        ret = min(ret, Marked[a + 1][1] + 1);
      return ret;
    }
    int maxDown(int a, int b) {
      int ret;
      if (Marked[a][0] == -1 || Marked[a][0] > b)
        ret = 0;
      else
        ret = Marked[a][1] + 1;
      if (a < 999999)
        ret = max(ret, Marked[a + 1][0] - 1);
      return ret;
    }
    int Merge(int a, int b, int c) {
      if (b > c) {
        int tmp = b;
        b = c;
        c = tmp;
      }
      if (Marked[a][0] == -1) {
        Marked[a][0] = b;
        Marked[a][1] = c;
      }
      else {
        Marked[a][0] <?= b;
        Marked[a][1] >?= c;
      }
      return 0;
    }
    string lastCell(string initPosition) {
      int i, j, k;
      sscanf(&initPosition[1], "%d", &i);
      sscanf(&initPosition[9], "%d", &j);
      memset(Marked, -1, sizeof(Marked));
      while (1) {
        if (Valid(i + 1, j)) {
          Merge(i, j, j);
          i ++;
        }
        else
          if (Valid(i, j + 1)) {
            k = maxUp(i, j);
            Merge(i, j, k);
            j = k;
          }
          else
            if (Valid(i, j - 1)) {
              k = maxDown(i, j);
              Merge(i, j, k);
              j = k;
            }
            else
              if (Valid(i - 1, j)) {
                Merge(i, j, j);
                i --;
              }
              else
                break;
      }
      string ret = "(";
      for (k = 100000; k >= 1; k /= 10)
        ret += i / k % 10 + '0';
      ret += ", ";
      for (k = 100000; k >= 1; k /= 10)
        ret += j / k % 10 + '0';
      ret += ")";
      return ret;
    }
};

********************************************************************************
*******************************************************************************/