/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10615
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

class TheBlackJackDivOne {
public:
    double expected(vector<string> cards);
};

double TheBlackJackDivOne::expected(vector<string> cards) {
    double ret;
    return ret;
}


int test0() {
    vector<string> cards = {"JS"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.105854341736695;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cards = {"KD", "8S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.08;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cards = {"KD", "2S", "2C", "2D", "2H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cards = {"AS", "KS", "9S", "JC", "2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cards = {"QD", "9C", "KC", "4S", "8S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> cards = {"5H", "8D", "4S", "JS", "2H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cards = {"5S", "2S", "AD", "TS", "7S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cards = {"7S", "JS"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cards = {"QS", "4C", "8S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cards = {"2D", "7S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2131458966565347;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cards = {"7D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4521936434148124;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cards = {"7S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4521936434148124;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cards = {"2D", "TH"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6197448979591837;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cards = {"7S", "6S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5034693877551022;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cards = {"4D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.785899673467907;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cards = {"2S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cards = {"2S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cards = {"2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cards = {"KH"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.105854341736695;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cards = {"3D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9085951580755647;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cards = {"8S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3413101410777077;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cards = {"5S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6697214871147352;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cards = {"KC"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.105854341736695;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cards = {"3S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9085951580755647;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cards = {"7C"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4521936434148124;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cards = {"2H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cards = {"AS", "2S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5104591836734693;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cards = {"2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cards = {"7C"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4521936434148124;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cards = {"TS"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.105854341736695;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cards = {"AD", "9H", "5S", "6D", "AC", "9C", "TS", "2H", "5D", "4S", "TC", "JD", "JC", "6S", "9S", "6H", "QS", "TH", "2S", "KD", "2C", "JH", "4C", "7D", "2D", "7C", "QD", "8C", "3D", "AS", "AH", "4D", "8S", "3H", "8D", "9D", "KC", "TD", "KH", "JS", "KS", "7S", "QH", "8H", "4H", "3S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cards = {"JC", "TH", "8H", "3H", "9S", "7H", "2S", "3C", "2H", "TC", "JH", "JD", "9C", "2D", "TD", "9D", "AD", "8D", "8S", "6S", "6C", "4H", "3S", "7C", "AH", "QH", "KC", "4S", "7S", "4D", "5S", "TS", "KD", "2C", "3D", "5D", "AS", "JS", "KS", "5C", "QD", "4C", "QS", "6D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cards = {"2S", "5H", "JD", "3D", "7H", "5C", "QS", "5D", "3H", "8C", "9S", "QC", "AC", "AH", "6H", "7C", "TD", "9D", "5S", "6D", "TH", "TS", "7D", "JC", "2H", "4H", "4S", "AS", "JH", "9H", "8D", "JS", "6S", "KD", "KS", "3S", "2C", "KH", "AD", "7S", "KC", "4D", "2D", "8S", "QD"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cards = {"JH", "QD", "AC", "3C", "KH", "AS", "KC", "4S", "QH", "8S", "AH", "6D", "2D", "7H", "9H", "4D", "TS", "KS", "3H", "5S", "QS", "6H", "2C", "6S", "JS", "JC", "2S", "3S", "9D", "AD", "4C", "QC", "TC", "KD", "3D", "8C", "TH", "7S", "7C", "4H", "9S", "6C", "7D", "JD", "8H", "2H", "8D", "TD", "5D", "9C"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cards = {"KD", "9D", "TC", "2D", "QD", "7D", "AD", "3C", "JC", "JS", "5C", "3H", "9C", "AS", "TH", "AH", "5S", "4D", "2C", "QC", "8D", "6S", "2H", "JH", "QS", "3D", "4C", "QH", "7C", "4H", "6D", "9S", "5D", "KC", "6H", "TS", "2S", "KS", "8S", "5H", "AC", "6C", "8H", "JD", "4S", "8C", "7S", "9H", "TD", "3S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cards = {"8C", "4D", "KD", "TD", "9C", "TS", "AC", "5S", "4H", "AD", "TC", "AS", "9S", "3C", "4C", "QS", "8H", "QH", "KH", "5C", "JD", "3S", "3D", "6C", "7C", "KS", "6D", "9H", "6H", "9D", "JS", "AH", "TH", "4S", "QC", "3H", "JC", "7S", "6S", "KC", "QD", "5H", "5D", "8D", "8S", "7D", "2C", "JH", "2H", "7H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cards = {"2C", "4D", "JC", "KS", "8S", "TS", "2D", "5S", "3S", "AD", "4H", "TC", "9S", "3C", "8C", "QS", "JH", "9H", "9D", "5C", "JD", "KC", "3D", "6C", "7C", "AS", "6D", "8H", "4C", "2S", "JS", "7D", "TH", "9C", "QC", "6H", "TD", "7S", "6S", "4S", "KH", "5H", "QH", "8D", "QD", "5D", "KD", "3H", "2H", "7H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cards = {"2D", "2H", "2S", "2C"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2012077294685994;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cards = {"2S", "3H", "4S", "5D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3546677459142769;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cards = {"2C", "5S", "4D", "3S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3546677459142769;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cards = {"2D", "4S", "2S", "5D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.451472402096824;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cards = {"2S", "5S", "4C", "2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.451472402096824;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cards = {"4C", "3S", "4D", "2S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4518193031144002;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cards = {"2S", "2D", "3C", "2C", "3H", "2H", "3D", "3S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cards = {"2C", "3D", "2S", "3H", "3S", "2H", "2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0222222222222221;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cards = {"3D", "2C", "2S", "3H", "3S", "3C", "2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0222222222222221;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cards = {"4D", "4H", "4S", "4C"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1719858156028369;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cards = {"JS"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.105854341736695;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cards = {"2H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> cards = {"JS", "JC", "JD"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cards = {"3S", "3C", "2D", "6H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3528946962688868;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cards = {"KS", "TD", "8S", "9H", "9D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> cards = {"AS"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7626450580232094;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> cards = {"2S", "2C", "2D", "3H", "3D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5236509404872032;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> cards = {"2S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> cards = {"2S", "3D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6204427747047014;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> cards = {"2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0307141148164476;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> cards = {"AS", "2S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5104591836734693;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> cards = {"TS"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.105854341736695;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> cards = {"QH"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.105854341736695;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> cards = {"AS", "KS", "9S", "JC", "2D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> cards = {"9S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2414622870424763;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> cards = {"AS", "AD"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> cards = {"AS", "9H"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> cards = {"TD", "AD", "2S"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> cards = {"AS", "TS"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> cards = {"2S", "2C", "3D"};
    TheBlackJackDivOne* pObj = new TheBlackJackDivOne();
    clock_t start = clock();
    double result = pObj->expected(cards);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3517408505184374;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13902&pm=10615
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
 
#define SIZE(X) ((int)(X.size())) 
 
class TheBlackJackDivOne 
{ 
public: 
  double solve(int s,int C[]) 
  { 
    if (s>=21) return 0; 
    int total=0; 
    for (int i=0;i<12;i++) total+=C[i]; 
    double result=0; 
    for (int i=0;i<12;i++) if (C[i]>0) 
    { 
      C[i]--; 
      double t=solve(s+i,C); 
      C[i]++; 
      result+=t*C[i]; 
    } 
    return result/total+1.0; 
  } 
  double expected(vector <string> cards) 
  { 
    int C[12]; 
    memset(C,0,sizeof(C)); 
    for (int i=2;i<=9;i++) C[i]=4; 
    C[10]=16; 
    C[11]=4; 
    int s=0; 
    for (int i=0;i<SIZE(cards);i++) 
    { 
      char c=cards[i][0]; 
      int d=0; 
      if (c=='T' || c=='J' || c=='Q' || c=='K') d=10; 
      else if (c=='A') d=11; 
      else d=c-'0'; 
      C[d]--; 
      s+=d; 
    } 
    double ret=solve(s,C); 
    return ret; 
  } 
};

********************************************************************************
*******************************************************************************/