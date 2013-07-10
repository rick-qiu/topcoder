/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10616
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

class TheBlackJackDivTwo {
public:
    int score(vector<string> cards);
};

int TheBlackJackDivTwo::score(vector<string> cards) {
    int ret;
    return ret;
}


int test0() {
    vector<string> cards = {"4S", "7D"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cards = {"KS", "TS", "QC"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cards = {"AS", "AD", "AH", "AC"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cards = {"3S", "KC", "AS", "7C", "TC", "9C", "4H", "4S", "2S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cards = {"8S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
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
    vector<string> cards = {"2S", "TS", "QS", "TD", "7S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cards = {"2D", "4S", "2S", "2H", "TC"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cards = {"7D", "JD", "4C", "8C", "4H", "3D", "5D", "4D", "TS", "3C", "6D", "6S", "9S", "5S", "QH", "2H", "QD", "7H", "KH", "TC", "JH", "3S", "KS", "TH", "2C", "2S", "AS", "TD", "8S", "AH", "QS", "8H", "AD", "JS", "7C", "AC", "KD", "7S", "2D", "9D", "4S", "KC", "3H", "6H", "8D", "9C", "9H", "JC"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cards = {"AS", "6D", "7D", "TS", "9D", "TH", "5S", "KH", "8S", "JD", "6S", "9C", "KS", "KD", "2S", "3S", "AD", "9S", "5D", "3C", "3D", "QC", "4D", "JS", "QD"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cards = {"7S", "8H", "KD", "5S", "KS", "6C", "AS", "2D", "6S", "3C", "KC", "9D", "4C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cards = {"3H", "KD", "JH", "2S", "QS", "TC", "JS", "2H", "4D", "3C", "7H", "8S", "7C", "AS", "9C", "6S", "8D", "7D", "QC", "4S", "JD", "5S", "6H", "8H", "5H", "AD", "6D", "2C", "3S", "9D", "5D", "8C", "TH", "KS", "7S", "TS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cards = {"5S", "9H", "6S", "5C", "3S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cards = {"5H", "8D", "2H", "JH", "KH", "8S", "6S", "QD", "KS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cards = {"7S", "AD", "2S", "QC", "9S", "KD", "5D", "3H", "3D", "2C", "TC", "KH", "TS", "9D", "KS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cards = {"5S", "AS", "7S", "TS", "8D", "7D", "5C", "JS", "3S", "6C", "QC", "2D", "9D", "8H", "2S", "9C", "4S", "8S", "KH", "6H", "6D", "3D", "6S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cards = {"7S", "9S", "TD", "6S", "8D"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cards = {"5S", "5H", "4S", "7D", "2D", "8S", "JS", "QS", "8C", "2H", "TD", "JC", "6S", "JH", "6H", "3D", "2C", "AH", "KC", "5D", "6D"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cards = {"8D", "2D", "7C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cards = {"2D", "AH", "9H", "QS", "8S", "7D", "JS", "5S", "8D", "9S", "2C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cards = {"7D", "5C", "8S", "AC", "4D", "5D", "5S", "AD", "4S", "AH", "3D", "2C", "8C", "2S", "JC", "QD", "KH", "KS", "3H", "8D", "3C", "QH", "2D", "JD", "QS", "9H", "2H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cards = {"JH", "QD", "AC", "3C", "KH", "AS", "KC", "4S", "QH", "8S", "AH", "6D", "2D", "7H", "9H", "4D", "TS", "KS", "3H", "5S", "QS", "6H", "2C", "6S", "JS", "JC", "2S", "3S", "9D", "AD", "4C", "QC", "TC", "KD", "3D", "8C", "TH", "7S", "7C", "4H", "9S", "6C", "7D", "JD", "8H", "2H", "8D", "TD", "5D", "9C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 370;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cards = {"KD", "9D", "TC", "2D", "QD", "7D", "AD", "3C", "JC", "JS", "5C", "3H", "9C", "AS", "TH", "AH", "5S", "4D", "2C", "QC", "8D", "6S", "2H", "JH", "QS", "3D", "4C", "QH", "7C", "4H", "6D", "9S", "5D", "KC", "6H", "TS", "2S", "KS", "8S", "5H", "AC", "6C", "8H", "JD", "4S", "8C", "7S", "9H", "TD", "3S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cards = {"3D", "5C", "2C", "5S", "AD", "8D", "TS", "TD", "KD", "6H", "3C", "7C", "KS", "2S", "AS", "2H", "3H", "8S", "8H", "KH", "4D", "QS", "JS", "8C", "9S", "9H", "KC", "5D", "6C", "5H", "9C", "4H", "7D", "AH", "6S", "JC", "4S", "JD", "7S", "QH", "2D", "QD", "9D", "4C", "TH", "3S", "6D", "AC", "QC", "TC"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cards = {"QH", "4H", "3H", "5H", "TH", "KC", "9S", "TD", "5C", "3S", "8D", "9H", "3C", "AS", "7H", "2C", "TC", "6H", "7S", "7D", "JS", "AH", "QC", "JH", "6S", "QD", "6D", "4S", "QS", "5D", "KD", "2D", "4D", "7C", "KH", "KS", "5S", "2S", "6C", "3D", "AD", "2H", "4C", "TS", "9C", "JD", "8H", "8S", "9D", "AC"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cards = {"4D", "KC", "AD", "3H", "6H", "5C", "2H", "7H", "4C", "9H", "QH", "JC", "TD", "7D", "TH", "8D", "6D", "2S", "QD", "2C", "4H", "QS", "AC", "5H", "3S", "2D", "KS", "3D", "5S", "5D", "JS", "8C", "AH", "AS", "8S", "7C", "9D", "3C", "JH", "6S", "8H", "6C", "KD", "QC", "TS", "9S", "7S", "TC", "JD", "4S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cards = {"4H", "9S", "9C", "5H", "5D", "3C", "4S", "AS", "TC", "JS", "JC", "KS", "7S", "3D", "8D", "AH", "2C", "AC", "QD", "6C", "4D", "5C", "8S", "8C", "2H", "JD", "KD", "6S", "QS", "3S", "9H", "7D", "6H", "QC", "TS", "TH", "TD", "JH", "KH", "3H", "4C", "2D", "AD", "QH", "7C", "KC", "2S", "5S", "7H", "8H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 365;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cards = {"AS", "KD", "6S", "8D", "JD", "JC", "3S", "3C", "4S", "7D", "JS", "7C", "4H", "9D", "2D", "QH", "5S", "5D", "8S", "KH", "TC", "7H", "KS", "6C", "3H", "AD", "2H", "4C", "QS", "QC", "QD", "4D", "9S", "JH", "6D", "3D", "9C", "5H", "9H", "2S", "TH", "AH", "TD", "TS", "7S", "KC", "8C", "2C", "8H", "5C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cards = {"8C", "9S", "7C", "5H", "9D", "JS", "8S", "AS", "5D", "7D", "6S", "7S", "2H", "5C", "KS", "4D", "6H", "QC", "TD", "JC", "3D", "4H", "8H", "AD", "2D", "QS", "KH", "JH", "JD", "4C", "2S", "3S", "7H", "KD", "4S", "KC", "2C", "6C", "QH", "QD", "5S", "9C", "8D", "AC", "TC", "TS", "6D", "TH", "3C", "9H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 366;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cards = {"JH", "3H", "4S", "6C", "2H", "TS", "7S", "2D", "AD", "KC", "TH", "AC", "TD", "AH", "KH", "4C", "8D", "QC", "5H", "QD", "2S", "9S", "3S", "7D", "5S", "JD", "QS", "QH", "5C", "4D", "8C", "JC", "KS", "6S", "6H", "TC", "8S", "KD", "6D", "9D", "9H", "7C", "5D", "3D", "AS", "2C", "3C", "4H", "8H", "JS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cards = {"2H", "QD", "QS", "6D", "5C", "2D", "5D", "7S", "6H", "9D", "KD", "TS", "5S", "TC", "QH", "AH", "4H", "6S", "8H", "JH", "JS", "4C", "9S", "AC", "JD", "9H", "7C", "TD", "JC", "9C", "3C", "AS", "KH", "2C", "8S", "7D", "AD", "KS", "5H", "3S", "2S", "6C", "4D", "8C", "4S", "KC", "TH", "3D", "8D", "3H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cards = {"8C", "8D", "JC", "KS", "8S", "TS", "2D", "6S", "3S", "7C", "4H", "TC", "9S", "3C", "4C", "TH", "8H", "QH", "9D", "5C", "JD", "KC", "3D", "6C", "AC", "AS", "6D", "9H", "6H", "4D", "JS", "AH", "AD", "9C", "QC", "3H", "TD", "7S", "QS", "4S", "KH", "5H", "5D", "5S", "QD", "7D", "KD", "JH", "2H", "7H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cards = {"8C", "4D", "JC", "KS", "8S", "9S", "AC", "5S", "3S", "AD", "4H", "TC", "JD", "3C", "4C", "QS", "8H", "QH", "9D", "5C", "2D", "KC", "3D", "6C", "7C", "AS", "TS", "9H", "6H", "2S", "JS", "AH", "TH", "9C", "QC", "3H", "TD", "7S", "6S", "4S", "KH", "5H", "5D", "8D", "QD", "7D", "KD", "JH", "6D", "7H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cards = {"8C", "4D", "KD", "TD", "8S", "TS", "2D", "5S", "3S", "7C", "4H", "TC", "9S", "3C", "4C", "QS", "8H", "QH", "9D", "5C", "JD", "KC", "3D", "6C", "AC", "KS", "6D", "9H", "6H", "2S", "JS", "AH", "TH", "9C", "QC", "3H", "JC", "7S", "6S", "4S", "KH", "5H", "5D", "8D", "QD", "7D", "2C", "JH", "2H", "7H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cards = {"7S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
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
    vector<string> cards = {"2C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cards = {"6D"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
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
    vector<string> cards = {"3D"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cards = {"JD"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cards = {"TS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
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
    vector<string> cards = {"7C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cards = {"JS", "8S", "AC", "7C", "9C", "TH", "KH", "4D", "5S", "6S", "QD", "TS", "4S", "8D", "2S", "6D", "3S", "7S", "9D", "2H", "AD", "2D", "QS", "JD", "9S", "KC"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 193;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cards = {"AS", "3C", "5C", "5S", "TS", "KS", "7S", "7D", "9S", "KC", "TC", "QS", "QD", "3D", "5D", "4C", "4D", "2S", "8S", "3S", "3H", "TD", "JS", "2D", "9C", "6H", "2H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cards = {"9C", "4D", "QH", "8S", "TS", "2S", "6S", "KD", "3D", "6C", "TH", "QC", "JH", "TD", "AS", "3S", "KH", "AH", "QS", "5D", "9S", "AD", "3C", "8C", "7S", "5S", "4S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cards = {"3D", "5D", "3S", "JH", "6S", "JS", "2S", "JC", "6D", "3C", "TC", "8C", "7C", "JD", "AS", "4D", "2D", "7S", "TD", "TS", "5S", "QS", "2H", "QH", "8S", "7H", "KS", "9S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cards = {"2D", "2H", "2S", "2C"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
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
    vector<string> cards = {"3D", "2D", "3C", "4S", "4D", "3S", "3H", "2S", "4H", "4C", "2C", "2H"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cards = {"8S", "KS", "JC", "TS", "QC", "TC", "TD", "QD", "7H", "2H", "8D", "6H", "TH", "KD", "6D", "3C", "KH", "5S", "2S", "9D", "2D", "9H", "QH", "4H", "5H", "2C", "8C", "9C", "3D", "5C", "JH", "6C", "JD", "JS", "KC", "3H", "3S", "4D", "7D", "7S", "8H", "4C", "7C", "4S", "9S", "QS", "5D", "6S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cards = {"3S", "KC", "AS", "7C", "TC", "9C", "4H", "4S", "2S"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cards = {"4S", "7D"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> cards = {"AS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cards = {"JS", "AS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cards = {"4S", "TD"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> cards = {"4S", "JD"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> cards = {"TS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
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
    vector<string> cards = {"JS"};
    TheBlackJackDivTwo* pObj = new TheBlackJackDivTwo();
    clock_t start = clock();
    int result = pObj->score(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22821308&rd=13902&pm=10616
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class TheBlackJackDivTwo {
public:
  int score(vector <string> cards) {
    char c;
    int sum=0;
    for(int i=0;i<cards.size();i++){
      c=cards[i][0];
      if(c=='A') sum+=11;
      else if(c=='J'||c=='K'||c=='Q'||c=='T') sum+=10;
      else sum+=int(c)-48;
    }
    return sum;  
    
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/