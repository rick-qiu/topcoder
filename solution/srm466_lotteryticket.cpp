/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10860
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

class LotteryTicket {
public:
    string buy(int price, int b1, int b2, int b3, int b4);
};

string LotteryTicket::buy(int price, int b1, int b2, int b3, int b4) {
    string ret;
    return ret;
}


int test0() {
    int price = 10;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int price = 15;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int price = 65;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int price = 66;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int price = 1000;
    int b1 = 999;
    int b2 = 998;
    int b3 = 997;
    int b4 = 996;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int price = 20;
    int b1 = 5;
    int b2 = 5;
    int b3 = 5;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int price = 20;
    int b1 = 5;
    int b2 = 5;
    int b3 = 5;
    int b4 = 6;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int price = 400;
    int b1 = 1000;
    int b2 = 1000;
    int b3 = 1000;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int price = 10;
    int b1 = 2;
    int b2 = 8;
    int b3 = 5;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int price = 65;
    int b1 = 25;
    int b2 = 79;
    int b3 = 59;
    int b4 = 63;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int price = 962;
    int b1 = 706;
    int b2 = 146;
    int b3 = 282;
    int b4 = 828;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int price = 2;
    int b1 = 2;
    int b2 = 6;
    int b3 = 3;
    int b4 = 8;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int price = 37;
    int b1 = 37;
    int b2 = 92;
    int b3 = 5;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int price = 154;
    int b1 = 154;
    int b2 = 293;
    int b3 = 383;
    int b4 = 422;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int price = 9;
    int b1 = 7;
    int b2 = 9;
    int b3 = 6;
    int b4 = 8;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int price = 72;
    int b1 = 27;
    int b2 = 72;
    int b3 = 39;
    int b4 = 70;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int price = 668;
    int b1 = 913;
    int b2 = 668;
    int b3 = 300;
    int b4 = 36;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int price = 9;
    int b1 = 5;
    int b2 = 4;
    int b3 = 2;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int price = 108;
    int b1 = 34;
    int b2 = 74;
    int b3 = 65;
    int b4 = 42;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int price = 966;
    int b1 = 712;
    int b2 = 254;
    int b3 = 869;
    int b4 = 548;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int price = 8;
    int b1 = 5;
    int b2 = 3;
    int b3 = 8;
    int b4 = 8;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int price = 42;
    int b1 = 60;
    int b2 = 24;
    int b3 = 42;
    int b4 = 30;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int price = 36;
    int b1 = 779;
    int b2 = 317;
    int b3 = 36;
    int b4 = 191;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int price = 10;
    int b1 = 3;
    int b2 = 9;
    int b3 = 7;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int price = 92;
    int b1 = 43;
    int b2 = 65;
    int b3 = 49;
    int b4 = 47;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int price = 1536;
    int b1 = 806;
    int b2 = 891;
    int b3 = 730;
    int b4 = 371;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int price = 9;
    int b1 = 1;
    int b2 = 7;
    int b3 = 2;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int price = 54;
    int b1 = 49;
    int b2 = 30;
    int b3 = 24;
    int b4 = 85;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int price = 1598;
    int b1 = 955;
    int b2 = 757;
    int b3 = 841;
    int b4 = 967;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int price = 18;
    int b1 = 7;
    int b2 = 2;
    int b3 = 9;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int price = 91;
    int b1 = 40;
    int b2 = 27;
    int b3 = 24;
    int b4 = 38;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int price = 741;
    int b1 = 539;
    int b2 = 119;
    int b3 = 83;
    int b4 = 930;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int price = 10;
    int b1 = 2;
    int b2 = 4;
    int b3 = 6;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int price = 78;
    int b1 = 59;
    int b2 = 5;
    int b3 = 31;
    int b4 = 78;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int price = 22;
    int b1 = 307;
    int b2 = 674;
    int b3 = 387;
    int b4 = 22;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int price = 7;
    int b1 = 6;
    int b2 = 5;
    int b3 = 3;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int price = 128;
    int b1 = 30;
    int b2 = 78;
    int b3 = 74;
    int b4 = 98;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int price = 675;
    int b1 = 513;
    int b2 = 987;
    int b3 = 291;
    int b4 = 162;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int price = 12;
    int b1 = 7;
    int b2 = 6;
    int b3 = 8;
    int b4 = 6;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int price = 83;
    int b1 = 75;
    int b2 = 32;
    int b3 = 53;
    int b4 = 51;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int price = 1909;
    int b1 = 151;
    int b2 = 942;
    int b3 = 725;
    int b4 = 967;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int price = 17;
    int b1 = 1;
    int b2 = 8;
    int b3 = 2;
    int b4 = 8;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int price = 150;
    int b1 = 38;
    int b2 = 58;
    int b3 = 88;
    int b4 = 54;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int price = 1540;
    int b1 = 384;
    int b2 = 946;
    int b3 = 910;
    int b4 = 210;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int price = 12;
    int b1 = 9;
    int b2 = 2;
    int b3 = 9;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int price = 45;
    int b1 = 47;
    int b2 = 7;
    int b3 = 31;
    int b4 = 14;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int price = 1355;
    int b1 = 169;
    int b2 = 901;
    int b3 = 592;
    int b4 = 763;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int price = 21;
    int b1 = 6;
    int b2 = 1;
    int b3 = 10;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int price = 218;
    int b1 = 38;
    int b2 = 49;
    int b3 = 84;
    int b4 = 96;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int price = 685;
    int b1 = 42;
    int b2 = 603;
    int b3 = 351;
    int b4 = 292;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int price = 13;
    int b1 = 7;
    int b2 = 5;
    int b3 = 1;
    int b4 = 7;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int price = 218;
    int b1 = 22;
    int b2 = 49;
    int b3 = 100;
    int b4 = 69;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int price = 1071;
    int b1 = 485;
    int b2 = 282;
    int b3 = 735;
    int b4 = 54;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int price = 29;
    int b1 = 10;
    int b2 = 9;
    int b3 = 9;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int price = 214;
    int b1 = 89;
    int b2 = 28;
    int b3 = 68;
    int b4 = 29;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int price = 2835;
    int b1 = 894;
    int b2 = 649;
    int b3 = 484;
    int b4 = 808;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int price = 4000;
    int b1 = 1000;
    int b2 = 1000;
    int b3 = 1000;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int price = 4000;
    int b1 = 1000;
    int b2 = 999;
    int b3 = 1000;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int price = 2;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int price = 20;
    int b1 = 42;
    int b2 = 18;
    int b3 = 35;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int price = 65;
    int b1 = 25;
    int b2 = 79;
    int b3 = 59;
    int b4 = 63;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int price = 62;
    int b1 = 6;
    int b2 = 96;
    int b3 = 32;
    int b4 = 28;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int price = 37;
    int b1 = 92;
    int b2 = 196;
    int b3 = 143;
    int b4 = 28;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int price = 43;
    int b1 = 142;
    int b2 = 105;
    int b3 = 153;
    int b4 = 154;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int price = 96;
    int b1 = 83;
    int b2 = 22;
    int b3 = 117;
    int b4 = 219;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int price = 120;
    int b1 = 198;
    int b2 = 27;
    int b3 = 72;
    int b4 = 339;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int price = 295;
    int b1 = 313;
    int b2 = 68;
    int b3 = 300;
    int b4 = 236;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int price = 124;
    int b1 = 354;
    int b2 = 412;
    int b3 = 273;
    int b4 = 184;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int price = 369;
    int b1 = 165;
    int b2 = 142;
    int b3 = 212;
    int b4 = 254;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int price = 238;
    int b1 = 248;
    int b2 = 145;
    int b3 = 213;
    int b4 = 308;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int price = 179;
    int b1 = 260;
    int b2 = 324;
    int b3 = 142;
    int b4 = 530;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int price = 289;
    int b1 = 617;
    int b2 = 436;
    int b3 = 91;
    int b4 = 543;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int price = 249;
    int b1 = 7;
    int b2 = 641;
    int b3 = 543;
    int b4 = 365;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int price = 371;
    int b1 = 447;
    int b2 = 556;
    int b3 = 141;
    int b4 = 730;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int price = 349;
    int b1 = 151;
    int b2 = 607;
    int b3 = 702;
    int b4 = 394;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int price = 57;
    int b1 = 80;
    int b2 = 724;
    int b3 = 285;
    int b4 = 405;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int price = 209;
    int b1 = 141;
    int b2 = 467;
    int b3 = 177;
    int b4 = 432;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int price = 788;
    int b1 = 795;
    int b2 = 140;
    int b3 = 877;
    int b4 = 874;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int price = 542;
    int b1 = 539;
    int b2 = 119;
    int b3 = 83;
    int b4 = 930;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int price = 8;
    int b1 = 1;
    int b2 = 1;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int price = 7;
    int b1 = 1;
    int b2 = 1;
    int b3 = 3;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int price = 30;
    int b1 = 10;
    int b2 = 5;
    int b3 = 10;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int price = 200;
    int b1 = 1;
    int b2 = 2;
    int b3 = 199;
    int b4 = 872;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int price = 10;
    int b1 = 3;
    int b2 = 5;
    int b3 = 5;
    int b4 = 6;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int price = 1000;
    int b1 = 250;
    int b2 = 1;
    int b3 = 500;
    int b4 = 250;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int price = 8;
    int b1 = 2;
    int b2 = 6;
    int b3 = 7;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int price = 1;
    int b1 = 1;
    int b2 = 1;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int price = 18;
    int b1 = 1;
    int b2 = 1;
    int b3 = 9;
    int b4 = 9;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int price = 5;
    int b1 = 10;
    int b2 = 10;
    int b3 = 2;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int price = 8;
    int b1 = 100;
    int b2 = 100;
    int b3 = 100;
    int b4 = 2;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int price = 3;
    int b1 = 1;
    int b2 = 1;
    int b3 = 1;
    int b4 = 7;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int price = 11;
    int b1 = 2;
    int b2 = 5;
    int b3 = 10;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int price = 6;
    int b1 = 1;
    int b2 = 3;
    int b3 = 1;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int price = 10;
    int b1 = 1;
    int b2 = 2;
    int b3 = 3;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int price = 20;
    int b1 = 1;
    int b2 = 1;
    int b3 = 1;
    int b4 = 2;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int price = 15;
    int b1 = 1;
    int b2 = 2;
    int b3 = 3;
    int b4 = 15;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int price = 9;
    int b1 = 3;
    int b2 = 4;
    int b3 = 5;
    int b4 = 6;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int price = 10;
    int b1 = 2;
    int b2 = 100;
    int b3 = 12;
    int b4 = 8;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int price = 6;
    int b1 = 2;
    int b2 = 2;
    int b3 = 2;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int price = 100;
    int b1 = 25;
    int b2 = 25;
    int b3 = 101;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int price = 100;
    int b1 = 10;
    int b2 = 20;
    int b3 = 50;
    int b4 = 40;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int price = 1004;
    int b1 = 1;
    int b2 = 2;
    int b3 = 3;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int price = 10;
    int b1 = 1;
    int b2 = 2;
    int b3 = 30;
    int b4 = 7;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int price = 10;
    int b1 = 5;
    int b2 = 5;
    int b3 = 2;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int price = 4;
    int b1 = 1;
    int b2 = 2;
    int b3 = 5;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int price = 14;
    int b1 = 1;
    int b2 = 3;
    int b3 = 5;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int price = 18;
    int b1 = 5;
    int b2 = 6;
    int b3 = 1;
    int b4 = 7;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int price = 60;
    int b1 = 30;
    int b2 = 1000;
    int b3 = 30;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int price = 2;
    int b1 = 1;
    int b2 = 10;
    int b3 = 1;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int price = 5;
    int b1 = 2;
    int b2 = 9;
    int b3 = 9;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int price = 6;
    int b1 = 2;
    int b2 = 2;
    int b3 = 3;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int price = 18;
    int b1 = 18;
    int b2 = 1;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int price = 10;
    int b1 = 5;
    int b2 = 1;
    int b3 = 1;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int price = 16;
    int b1 = 1;
    int b2 = 5;
    int b3 = 12;
    int b4 = 15;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int price = 100;
    int b1 = 30;
    int b2 = 1;
    int b3 = 20;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int price = 20;
    int b1 = 10;
    int b2 = 1;
    int b3 = 1;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int price = 500;
    int b1 = 200;
    int b2 = 100;
    int b3 = 300;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int price = 2;
    int b1 = 1;
    int b2 = 2;
    int b3 = 3;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int price = 3;
    int b1 = 1;
    int b2 = 2;
    int b3 = 5;
    int b4 = 6;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int price = 67;
    int b1 = 30;
    int b2 = 80;
    int b3 = 37;
    int b4 = 80;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int price = 3;
    int b1 = 1;
    int b2 = 55;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int price = 50;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int price = 17;
    int b1 = 2;
    int b2 = 3;
    int b3 = 5;
    int b4 = 7;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int price = 10;
    int b1 = 5;
    int b2 = 4;
    int b3 = 3;
    int b4 = 2;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int price = 1000;
    int b1 = 900;
    int b2 = 5;
    int b3 = 100;
    int b4 = 800;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int price = 100;
    int b1 = 1;
    int b2 = 2;
    int b3 = 3;
    int b4 = 100;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int price = 5;
    int b1 = 1;
    int b2 = 3;
    int b3 = 122;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int price = 3;
    int b1 = 1;
    int b2 = 100;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int price = 10;
    int b1 = 1;
    int b2 = 4;
    int b3 = 9;
    int b4 = 100;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int price = 4;
    int b1 = 1;
    int b2 = 2;
    int b3 = 100;
    int b4 = 200;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int price = 100;
    int b1 = 1;
    int b2 = 50;
    int b3 = 1;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int price = 10;
    int b1 = 2;
    int b2 = 3;
    int b3 = 8;
    int b4 = 11;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int price = 8;
    int b1 = 1;
    int b2 = 2;
    int b3 = 3;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int price = 30;
    int b1 = 1;
    int b2 = 9;
    int b3 = 11;
    int b4 = 20;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int price = 20;
    int b1 = 1;
    int b2 = 8;
    int b3 = 2;
    int b4 = 11;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int price = 3;
    int b1 = 1;
    int b2 = 4;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int price = 100;
    int b1 = 1;
    int b2 = 2;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int price = 50;
    int b1 = 5;
    int b2 = 10;
    int b3 = 20;
    int b4 = 25;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int price = 100;
    int b1 = 90;
    int b2 = 1;
    int b3 = 1;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int price = 6;
    int b1 = 2;
    int b2 = 1;
    int b3 = 2;
    int b4 = 2;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int price = 5;
    int b1 = 1;
    int b2 = 2;
    int b3 = 4;
    int b4 = 100;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int price = 11;
    int b1 = 2;
    int b2 = 5;
    int b3 = 4;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int price = 17;
    int b1 = 10;
    int b2 = 3;
    int b3 = 4;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int price = 400;
    int b1 = 100;
    int b2 = 100;
    int b3 = 100;
    int b4 = 400;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int price = 5;
    int b1 = 4;
    int b2 = 3;
    int b3 = 2;
    int b4 = 2;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int price = 11;
    int b1 = 5;
    int b2 = 6;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int price = 300;
    int b1 = 100;
    int b2 = 1;
    int b3 = 100;
    int b4 = 100;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int price = 3;
    int b1 = 1;
    int b2 = 1;
    int b3 = 7;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int price = 100;
    int b1 = 50;
    int b2 = 1;
    int b3 = 50;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int price = 20;
    int b1 = 1;
    int b2 = 10;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int price = 50;
    int b1 = 20;
    int b2 = 20;
    int b3 = 30;
    int b4 = 40;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int price = 50;
    int b1 = 45;
    int b2 = 1;
    int b3 = 25;
    int b4 = 25;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int price = 5;
    int b1 = 1;
    int b2 = 2;
    int b3 = 4;
    int b4 = 9;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int price = 67;
    int b1 = 30;
    int b2 = 80;
    int b3 = 27;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int price = 6;
    int b1 = 2;
    int b2 = 4;
    int b3 = 100;
    int b4 = 100;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int price = 11;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 2;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int price = 100;
    int b1 = 25;
    int b2 = 101;
    int b3 = 25;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int price = 10;
    int b1 = 1;
    int b2 = 2;
    int b3 = 20;
    int b4 = 7;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int price = 30;
    int b1 = 10;
    int b2 = 1;
    int b3 = 10;
    int b4 = 10;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int price = 10;
    int b1 = 10;
    int b2 = 1;
    int b3 = 2;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int price = 20;
    int b1 = 10;
    int b2 = 7;
    int b3 = 6;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int price = 1011;
    int b1 = 1;
    int b2 = 10;
    int b3 = 100;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int price = 11;
    int b1 = 1;
    int b2 = 5;
    int b3 = 10;
    int b4 = 50;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int price = 15;
    int b1 = 5;
    int b2 = 5;
    int b3 = 5;
    int b4 = 9;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int price = 17;
    int b1 = 10;
    int b2 = 5;
    int b3 = 4;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int price = 20;
    int b1 = 2;
    int b2 = 3;
    int b3 = 1;
    int b4 = 15;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int price = 7;
    int b1 = 1;
    int b2 = 4;
    int b3 = 6;
    int b4 = 9;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int price = 30;
    int b1 = 10;
    int b2 = 1;
    int b3 = 2;
    int b4 = 20;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int price = 4;
    int b1 = 1;
    int b2 = 2;
    int b3 = 3;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int price = 300;
    int b1 = 100;
    int b2 = 100;
    int b3 = 1;
    int b4 = 100;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int price = 6;
    int b1 = 1;
    int b2 = 100;
    int b3 = 2;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int price = 5;
    int b1 = 2;
    int b2 = 2;
    int b3 = 3;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int price = 11;
    int b1 = 1;
    int b2 = 2;
    int b3 = 4;
    int b4 = 8;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int price = 50;
    int b1 = 15;
    int b2 = 15;
    int b3 = 60;
    int b4 = 20;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int price = 22;
    int b1 = 5;
    int b2 = 6;
    int b3 = 10;
    int b4 = 11;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int price = 11;
    int b1 = 5;
    int b2 = 10;
    int b3 = 2;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int price = 1000;
    int b1 = 50;
    int b2 = 300;
    int b3 = 100;
    int b4 = 700;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int price = 7;
    int b1 = 1;
    int b2 = 3;
    int b3 = 77;
    int b4 = 3;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int price = 1001;
    int b1 = 1;
    int b2 = 500;
    int b3 = 400;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int price = 13;
    int b1 = 3;
    int b2 = 7;
    int b3 = 10;
    int b4 = 15;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int price = 20;
    int b1 = 16;
    int b2 = 12;
    int b3 = 11;
    int b4 = 8;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int price = 3;
    int b1 = 1;
    int b2 = 1;
    int b3 = 4;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int price = 1101;
    int b1 = 1;
    int b2 = 10;
    int b3 = 100;
    int b4 = 1000;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int price = 10;
    int b1 = 3;
    int b2 = 4;
    int b3 = 6;
    int b4 = 9;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int price = 3;
    int b1 = 1;
    int b2 = 10;
    int b3 = 1;
    int b4 = 1;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int price = 100;
    int b1 = 50;
    int b2 = 25;
    int b3 = 1;
    int b4 = 25;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int price = 31;
    int b1 = 1;
    int b2 = 10;
    int b3 = 13;
    int b4 = 20;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int price = 20;
    int b1 = 30;
    int b2 = 10;
    int b3 = 5;
    int b4 = 5;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int price = 10;
    int b1 = 6;
    int b2 = 50;
    int b3 = 2;
    int b4 = 2;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int price = 25;
    int b1 = 1;
    int b2 = 29;
    int b3 = 9;
    int b4 = 15;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int price = 10;
    int b1 = 3;
    int b2 = 1;
    int b3 = 3;
    int b4 = 4;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int price = 2;
    int b1 = 1;
    int b2 = 100;
    int b3 = 100;
    int b4 = 100;
    LotteryTicket* pObj = new LotteryTicket();
    clock_t start = clock();
    string result = pObj->buy(price, b1, b2, b3, b4);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22848664&rd=14150&pm=10860
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
 
class LotteryTicket {
public:
  string buy(int, int, int, int, int);
};
 
string LotteryTicket::buy(int price, int b1, int b2, int b3, int b4) {
 
string str="POSSIBLE";
string str1="IMPOSSIBLE";
if(b1==price||b2==price||b3==price||b4==price)
{
  return str;
}
else if((b1+b2+b3+b4)==price)
{
  return str;
}
else if((b1+b2)==price||(b1+b3)==price||(b1+b4)==price||(b2+b3)==price||(b2+b4)==price||(b3+b4)==price)
{
  return str;
}
else if((b1+b2+b3)==price||(b2+b3+b4)==price||(b1+b3+b4)==price||(b1+b2+b4)==price)
{
  return str;
}
else
{
  return str1;
}
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/