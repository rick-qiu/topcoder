/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5908
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

class BallGift {
public:
    int bestPosition(int players, int green, int red, int black);
};

int BallGift::bestPosition(int players, int green, int red, int black) {
    int ret;
    return ret;
}


int test0() {
    int players = 4;
    int green = 3;
    int red = 0;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int players = 4;
    int green = 0;
    int red = 1;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int players = 4;
    int green = 1;
    int red = 1;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int players = 4;
    int green = 1;
    int red = 1;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 4;
    int green = 2;
    int red = 2;
    int black = 2;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 30;
    int green = 15;
    int red = 15;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int players = 30;
    int green = 0;
    int red = 0;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 30;
    int green = 15;
    int red = 0;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int players = 30;
    int green = 0;
    int red = 15;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int players = 30;
    int green = 0;
    int red = 0;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int players = 1;
    int green = 0;
    int red = 0;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 1;
    int green = 15;
    int red = 0;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int players = 1;
    int green = 0;
    int red = 15;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int players = 1;
    int green = 15;
    int red = 15;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 30;
    int green = 10;
    int red = 5;
    int black = 2;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int players = 30;
    int green = 15;
    int red = 10;
    int black = 5;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 15;
    int green = 8;
    int red = 0;
    int black = 12;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int players = 8;
    int green = 4;
    int red = 1;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int players = 4;
    int green = 0;
    int red = 15;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int players = 1;
    int green = 13;
    int red = 6;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int players = 26;
    int green = 0;
    int red = 12;
    int black = 2;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int players = 29;
    int green = 15;
    int red = 9;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int players = 26;
    int green = 9;
    int red = 6;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int players = 23;
    int green = 2;
    int red = 13;
    int black = 12;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int players = 2;
    int green = 0;
    int red = 12;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int players = 24;
    int green = 11;
    int red = 12;
    int black = 4;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int players = 16;
    int green = 4;
    int red = 0;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int players = 3;
    int green = 8;
    int red = 15;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int players = 15;
    int green = 4;
    int red = 6;
    int black = 4;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int players = 3;
    int green = 11;
    int red = 8;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int players = 7;
    int green = 6;
    int red = 7;
    int black = 4;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int players = 12;
    int green = 12;
    int red = 8;
    int black = 5;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 1;
    int green = 2;
    int red = 1;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int players = 7;
    int green = 6;
    int red = 9;
    int black = 6;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int players = 15;
    int green = 5;
    int red = 4;
    int black = 3;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int players = 23;
    int green = 15;
    int red = 12;
    int black = 5;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int players = 29;
    int green = 14;
    int red = 14;
    int black = 14;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int players = 1;
    int green = 6;
    int red = 7;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
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
    int players = 15;
    int green = 14;
    int red = 4;
    int black = 10;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int players = 30;
    int green = 7;
    int red = 7;
    int black = 6;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int players = 16;
    int green = 10;
    int red = 12;
    int black = 12;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int players = 21;
    int green = 12;
    int red = 2;
    int black = 3;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int players = 15;
    int green = 12;
    int red = 14;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int players = 11;
    int green = 11;
    int red = 1;
    int black = 8;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int players = 24;
    int green = 15;
    int red = 7;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int players = 16;
    int green = 10;
    int red = 1;
    int black = 7;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int players = 19;
    int green = 6;
    int red = 5;
    int black = 11;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int players = 18;
    int green = 4;
    int red = 3;
    int black = 12;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int players = 28;
    int green = 6;
    int red = 12;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int players = 25;
    int green = 9;
    int red = 15;
    int black = 12;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int players = 26;
    int green = 7;
    int red = 4;
    int black = 10;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int players = 16;
    int green = 11;
    int red = 12;
    int black = 8;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int players = 26;
    int green = 6;
    int red = 8;
    int black = 1;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int players = 14;
    int green = 2;
    int red = 9;
    int black = 6;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int players = 27;
    int green = 6;
    int red = 8;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int players = 27;
    int green = 9;
    int red = 8;
    int black = 8;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int players = 19;
    int green = 10;
    int red = 9;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int players = 29;
    int green = 13;
    int red = 13;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int players = 20;
    int green = 15;
    int red = 15;
    int black = 8;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int players = 30;
    int green = 15;
    int red = 15;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int players = 30;
    int green = 13;
    int red = 14;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int players = 20;
    int green = 15;
    int red = 15;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int players = 30;
    int green = 11;
    int red = 11;
    int black = 11;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int players = 30;
    int green = 15;
    int red = 14;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int players = 7;
    int green = 13;
    int red = 1;
    int black = 0;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int players = 30;
    int green = 15;
    int red = 14;
    int black = 13;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int players = 30;
    int green = 12;
    int red = 15;
    int black = 14;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int players = 30;
    int green = 15;
    int red = 13;
    int black = 15;
    BallGift* pObj = new BallGift();
    clock_t start = clock();
    int result = pObj->bestPosition(players, green, red, black);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=8083&pm=5908
********************************************************************************
# include <algorithm> 
# include <vector> 
# include <queue> 
# include <utility> 
# include <string> 
# include <map> 
# include <cstdio> 
# include <cstdlib> 
# include <cmath> 
# include <cctype> 
# include <cstring> 
# include <cassert> 
# include <list> 
# include <stack> 
# include <iterator> 
# include <deque> 
# include <functional> 
# include <bitset> 
# include <complex> 
# include <iostream> 
# include <fstream> 
# include <sstream> 
# include <ctime> 
# include <set> 
 
using namespace std ; 
 
// Macroses 
# ifdef __GNUC__ 
typedef long long ll ; 
# else 
typedef __int64 ll ; 
# define for if ( false ) ; else for 
# define min __min 
# define max __max 
# endif 
 
// Constants 
const int INF = 1000000000 ; 
const long double EPS = 1e-8L ; 
const long double PI = 3.1415926535897932384626433832795L ; 
 
// Types 
typedef vector < int > vi ; 
typedef long double ld ; 
typedef vector < ld > vd ; 
 
// Data 
 
// Answers 
 
// Global 
vd ans [ 16 ] [ 16 ] [ 16 ] ; 
 
// Functions 
void process ( int n , int g , int r , int b ) 
{ 
  if ( ans [ g ] [ r ] [ b ] . size ( ) ) 
    return ; 
  ans [ g ] [ r ] [ b ] = vd ( n ) ; 
  ld s = g + r + b ; 
  if ( g ) 
  { 
    process ( n , g - 1 , r , b ) ; 
    for ( int i = 0 ; i < n ; ++ i ) 
      ans [ g ] [ r ] [ b ] [ ( i + 1 ) % n ] += ans [ g - 1 ] [ r ] [ b ] [ i ] * g / s ; 
  } 
  if ( r ) 
  { 
    process ( n , g , r - 1 , b ) ; 
    for ( int i = 0 ; i < n ; ++ i ) 
      ans [ g ] [ r ] [ b ] [ i ] += ans [ g ] [ r - 1 ] [ b ] [ n - 1 - i ] * r / s ; 
  } 
  if ( b ) 
  { 
    process ( n - 1 , g , r , b - 1 ) ; 
    for ( int i = 0 ; i < n - 1 ; ++ i ) 
      ans [ g ] [ r ] [ b ] [ i + 1 ] += ans [ g ] [ r ] [ b - 1 ] [ i ] * b / s ; 
  } 
} 
 
// Interface 
class BallGift 
{ 
public : 
  int bestPosition ( int pl, int g, int r, int b ) 
  { 
    int res ; 
    ans [ 0 ] [ 0 ] [ 0 ] = vd ( pl - b ) ; 
    ans [ 0 ] [ 0 ] [ 0 ] [ 0 ] = 1 ; 
    process ( pl , g , r , b ) ; 
    ld best = - 1 ; 
    for ( int i = 0 ; i < pl ; ++ i ) 
    { 
      if ( ans [ g ] [ r ] [ b ] [ i ] > best + EPS ) 
      { 
        best = ans [ g ] [ r ] [ b ] [ i ] ; 
        res = i ; 
      } 
    } 
    return res ; 
  } 
   
 
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/