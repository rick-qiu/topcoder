/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4500
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

class BlackjackWinner {
public:
    int winnings(int bet, int dealer, int dealerBlackjack, int player, int blackjack);
};

int BlackjackWinner::winnings(int bet, int dealer, int dealerBlackjack, int player, int blackjack) {
    int ret;
    return ret;
}


int test0() {
    int bet = 10;
    int dealer = 20;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int bet = 26;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -26;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int bet = 100;
    int dealer = 25;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int bet = 78;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 23;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -78;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int bet = 80;
    int dealer = 24;
    int dealerBlackjack = 0;
    int player = 24;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -80;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int bet = 2;
    int dealer = 19;
    int dealerBlackjack = 0;
    int player = 6;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int bet = 4;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 16;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int bet = 68;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 27;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -68;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int bet = 28;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 8;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -28;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int bet = 34;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
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
    int bet = 36;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 8;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -36;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int bet = 2;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 23;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int bet = 98;
    int dealer = 19;
    int dealerBlackjack = 0;
    int player = 25;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -98;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int bet = 54;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 26;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -54;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int bet = 4;
    int dealer = 18;
    int dealerBlackjack = 0;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int bet = 78;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 28;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -78;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int bet = 94;
    int dealer = 24;
    int dealerBlackjack = 0;
    int player = 29;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -94;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int bet = 6;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 17;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int bet = 48;
    int dealer = 24;
    int dealerBlackjack = 0;
    int player = 24;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -48;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int bet = 6;
    int dealer = 26;
    int dealerBlackjack = 0;
    int player = 23;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int bet = 4;
    int dealer = 18;
    int dealerBlackjack = 0;
    int player = 18;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int bet = 78;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -78;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int bet = 98;
    int dealer = 19;
    int dealerBlackjack = 0;
    int player = 14;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -98;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int bet = 10;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 15;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int bet = 60;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int bet = 20;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int bet = 100;
    int dealer = 25;
    int dealerBlackjack = 0;
    int player = 25;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -100;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int bet = 10;
    int dealer = 20;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int bet = 32;
    int dealer = 19;
    int dealerBlackjack = 0;
    int player = 13;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -32;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int bet = 10;
    int dealer = 25;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int bet = 10;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int bet = 100;
    int dealer = 25;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int bet = 10;
    int dealer = 23;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 10;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int bet = 50;
    int dealer = 24;
    int dealerBlackjack = 0;
    int player = 18;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int bet = 10;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int bet = 16;
    int dealer = 19;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int bet = 60;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int bet = 100;
    int dealer = 25;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int bet = 10;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 17;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int bet = 50;
    int dealer = 20;
    int dealerBlackjack = 0;
    int player = 19;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -50;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int bet = 2;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int bet = 10;
    int dealer = 20;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int bet = 100;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int bet = 2;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int bet = 10;
    int dealer = 18;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int bet = 100;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
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
    int bet = 50;
    int dealer = 26;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int bet = 100;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
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
    int bet = 20;
    int dealer = 23;
    int dealerBlackjack = 0;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -20;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int bet = 10;
    int dealer = 23;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int bet = 2;
    int dealer = 26;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
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
    int bet = 10;
    int dealer = 24;
    int dealerBlackjack = 0;
    int player = 19;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int bet = 50;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int bet = 2;
    int dealer = 23;
    int dealerBlackjack = 0;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int bet = 10;
    int dealer = 25;
    int dealerBlackjack = 0;
    int player = 25;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int bet = 10;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int bet = 26;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int bet = 10;
    int dealer = 23;
    int dealerBlackjack = 0;
    int player = 18;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int bet = 2;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
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
    int bet = 20;
    int dealer = 20;
    int dealerBlackjack = 0;
    int player = 19;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -20;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int bet = 100;
    int dealer = 17;
    int dealerBlackjack = 0;
    int player = 17;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int bet = 100;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int bet = 100;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int bet = 100;
    int dealer = 23;
    int dealerBlackjack = 0;
    int player = 20;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int bet = 100;
    int dealer = 21;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
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
    int bet = 20;
    int dealer = 20;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 1;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int bet = 2;
    int dealer = 22;
    int dealerBlackjack = 0;
    int player = 21;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int bet = 10;
    int dealer = 21;
    int dealerBlackjack = 1;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int bet = 100;
    int dealer = 19;
    int dealerBlackjack = 0;
    int player = 22;
    int blackjack = 0;
    BlackjackWinner* pObj = new BlackjackWinner();
    clock_t start = clock();
    int result = pObj->winnings(bet, dealer, dealerBlackjack, player, blackjack);
    clock_t end = clock();
    delete pObj;
    int expected = -100;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=156865&rd=7216&pm=4500
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <list>
#include <ctype.h>
#include <queue>
 
 
using namespace std;
 
class BlackjackWinner {
  public:
  int winnings(int bet, int dealer, int dealerBlackjack, int player, int blackjack) {
    if(player>21) return -1*bet;
    if(dealerBlackjack && !blackjack) return -1*bet;
    if(dealerBlackjack && blackjack) return 0;
    if(blackjack) return 1.5*bet;
    if(player==dealer) return 0;
    if(dealer>21) return bet;
    if(player>dealer) return bet;
    return -1*bet;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/