/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10619
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

class TheCardLineDivOne {
public:
    int count(vector<string> cards);
};

int TheCardLineDivOne::count(vector<string> cards) {
    int ret;
    return ret;
}


int test0() {
    vector<string> cards = {"KH", "QD", "KC"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cards = {"JS", "JC", "JD", "JH"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cards = {"2S", "3C", "4C", "5S", "6C", "7S", "8S", "9H"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
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
    vector<string> cards = {"KD", "KC", "AD", "7C", "AH", "9C", "4H", "4S", "AS"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2416;
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
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
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
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cards = {"7S", "9S", "JS", "JD", "TS", "2H", "6D", "2D"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cards = {"KS", "TS", "QC"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
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
    vector<string> cards = {"6S", "5D", "5H", "7S", "TD", "KC", "3C", "3S", "8D", "5S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2880;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cards = {"3S", "KC", "AS", "7C", "TC", "9C", "4H", "4S", "2S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10080;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cards = {"KH", "JS", "KS", "2S", "3S", "TS", "2D", "8S", "2H", "4S", "TC"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 89280;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cards = {"6C", "9S", "QD"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
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
    vector<string> cards = {"QD", "3S", "9S", "4C", "6H", "5S", "5C", "KD", "AD", "6S", "7S", "JS", "9D", "9C", "2H", "8S", "KS"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 143016116;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cards = {"5S", "7S", "3H", "TS", "2C", "2S", "6H", "KS", "AS", "4D", "8S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cards = {"9H", "QS", "JH", "2S", "2D", "8H", "QH", "TS", "KS"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 744;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cards = {"AS", "8S", "3S", "5H", "2S", "9S", "QS", "4S", "QH", "8C", "TS", "8H", "9H", "2D", "6S", "8D"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 191757869;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cards = {"4S", "AD", "JS", "7S", "6S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cards = {"TD", "AS", "8C", "2H", "9S", "QD", "6D", "AC", "QC", "4S", "QS", "2S", "3S", "2C", "JH", "6C", "5S", "7S", "2D", "3D"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 300609227;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cards = {"2S", "TC", "8D", "9D", "8S", "AH", "3S", "6S", "TS"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cards = {"TS", "9D", "AD", "2S", "6D", "2H", "KH", "JS", "TH", "8D", "7S", "JD", "6S", "7C", "2D", "5S", "QS", "AC", "4D", "9S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 842208557;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cards = {"5S", "AS", "9S", "4D", "3H", "2S", "2D", "3D", "2H", "7C", "JD", "9C", "5D", "TS", "8S", "6C", "KD", "2C", "TC", "3S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1176318675;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cards = {"TS", "6S", "AD", "KD", "4D", "9C", "TC", "3H", "2H", "9D", "5C", "5S", "4C", "2D", "7S", "8S", "KS", "QS", "QD", "9S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 715324751;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cards = {"7S", "QC", "KD", "JH", "6S", "8S", "4D", "4S", "TD", "KH", "5S", "3S", "3C", "TS", "QH", "8C", "AH", "5D", "9S", "9C"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 161046921;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cards = {"JD", "6D", "JS", "QH", "QS", "KS", "TC", "3S", "9S", "3H", "4S", "7D", "JH", "7S", "AS", "2C", "9D", "TH", "2S", "2D"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 663629031;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cards = {"JH", "QD", "AC", "3C", "KH", "AS", "KC", "4S", "QH", "8S", "AH", "6D", "2D", "7H", "9H", "4D", "TS", "KS", "3H", "5S", "QS", "6H", "2C", "6S", "JS", "JC", "2S", "3S", "9D", "AD", "4C", "QC", "TC", "KD", "3D", "8C", "TH", "7S", "7C", "4H", "9S", "6C", "7D", "JD", "8H", "2H", "8D", "TD", "5D", "9C"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 473403040;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cards = {"KD", "9D", "TC", "2D", "QD", "7D", "AD", "3C", "JC", "JS", "5C", "3H", "9C", "AS", "TH", "AH", "5S", "4D", "2C", "QC", "8D", "6S", "2H", "JH", "QS", "3D", "4C", "QH", "7C", "4H", "6D", "9S", "5D", "KC", "6H", "TS", "2S", "KS", "8S", "5H", "AC", "6C", "8H", "JD", "4S", "8C", "7S", "9H", "TD", "3S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 28257519;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cards = {"3D", "5C", "2C", "5S", "AD", "8D", "TS", "TD", "KD", "6H", "3C", "7C", "KS", "2S", "AS", "2H", "3H", "8S", "8H", "KH", "4D", "QS", "JS", "8C", "9S", "9H", "KC", "5D", "6C", "5H", "9C", "4H", "7D", "AH", "6S", "JC", "4S", "JD", "7S", "QH", "2D", "QD", "9D", "4C", "TH", "3S", "6D", "AC", "QC", "TC"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 28257519;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cards = {"QH", "4H", "3H", "5H", "TH", "KC", "9S", "TD", "5C", "3S", "8D", "9H", "3C", "AS", "7H", "2C", "TC", "6H", "7S", "7D", "JS", "AH", "QC", "JH", "6S", "QD", "6D", "4S", "QS", "5D", "KD", "2D", "4D", "7C", "KH", "KS", "5S", "2S", "6C", "3D", "AD", "2H", "4C", "TS", "9C", "JD", "8H", "8S", "9D", "AC"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 28257519;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cards = {"4D", "KC", "AD", "3H", "6H", "5C", "2H", "7H", "4C", "9H", "QH", "JC", "TD", "7D", "TH", "8D", "6D", "2S", "QD", "2C", "4H", "QS", "AC", "5H", "3S", "2D", "KS", "3D", "5S", "5D", "JS", "8C", "AH", "AS", "8S", "7C", "9D", "3C", "JH", "6S", "8H", "6C", "KD", "QC", "TS", "9S", "7S", "TC", "JD", "4S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 927686905;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cards = {"QS", "5S", "TC", "3S", "7C", "6C", "QC", "TS", "5C", "KS", "7S", "AC", "9S", "JS", "8S", "JC", "4C", "6S", "2C", "4S", "8C", "AS", "3C", "KC", "9C", "2S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 730761671;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cards = {"QD", "5D", "TH", "3D", "7H", "6H", "QH", "TD", "5H", "KD", "7D", "AH", "9D", "JD", "8D", "JH", "4H", "6D", "2H", "4D", "8H", "AD", "3H", "KH", "9H", "2D"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 730761671;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cards = {"7D", "JD"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cards = {"9H", "3D", "9D", "5D", "JD", "TD", "7D", "AH", "QD", "4H", "3H", "8D", "2D", "AD"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 758538830;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cards = {"3D", "6D", "KD", "4H", "5H", "9D", "2D", "2H", "AH", "8D", "8H", "7D", "TD", "QH", "JD", "KH", "4D", "TH", "6H", "AD", "3H", "9H", "JH", "QD", "5D"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1025257207;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cards = {"TD", "6D", "9C", "TC", "4C", "8C", "5C", "2C", "6C", "9D", "7D", "2D", "KD", "JC", "4D", "KC", "AD", "JD", "7C", "8D", "AC", "QC", "3C"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 181838148;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cards = {"2C", "8D", "6C", "3C", "KC", "AD", "3D", "5C", "TC", "9D", "4C", "TD", "2D", "8C", "JD", "AC", "QC", "7C", "4D", "9C", "JC", "QD"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 273808279;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cards = {"4C", "KC", "5C", "6C", "3D", "JD", "JC", "3C", "QD", "7D", "7C", "QC", "8D", "4D", "TC", "5D", "2D", "8C", "2C", "AC"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 684893675;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cards = {"KC", "9D", "3C", "7C", "4C", "5C", "6C", "TC", "AC", "2C", "QC", "8C"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cards = {"JS", "8S", "AC", "7C", "9C", "TH", "KH", "4D", "5S", "6S", "QD", "TS", "4S", "8D", "2S", "6D", "3S", "7S", "9D", "2H", "AD", "2D", "QS", "JD", "9S", "KC"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 516246970;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cards = {"AS", "3C", "5C", "5S", "TS", "KS", "7S", "7D", "9S", "KC", "TC", "QS", "QD", "3D", "5D", "4C", "4D", "2S", "8S", "3S", "3H", "TD", "JS", "2D", "9C", "6H", "2H"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1080478416;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cards = {"9C", "4D", "QH", "8S", "TS", "2S", "6S", "KD", "3D", "6C", "TH", "QC", "JH", "TD", "AS", "3S", "KH", "AH", "QS", "5D", "9S", "AD", "3C", "8C", "7S", "5S", "4S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 296670937;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cards = {"3D", "5D", "3S", "JH", "6S", "JS", "2S", "JC", "6D", "3C", "TC", "8C", "7C", "JD", "AS", "4D", "2D", "7S", "TD", "TS", "5S", "QS", "2H", "QH", "8S", "7H", "KS", "9S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1083886613;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cards = {"TC", "6C", "AH", "7S", "4H", "AS", "7C", "8H", "QH", "QS", "8C", "9D", "5S", "KS", "JD", "TD", "9S", "QC", "6S", "3C", "9H", "JS", "2H", "2S", "7H", "7D", "8S", "TS", "3S", "4S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 660699080;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cards = {"AD", "9H", "5S", "6D", "AC", "9C", "TS", "2H", "5D", "4S", "TC", "JD", "JC", "6S", "9S", "6H", "QS", "TH", "2S", "KD", "2C", "JH", "4C", "7D", "2D", "7C", "QD", "8C", "3D", "AS", "AH", "4D", "8S", "3H", "8D", "9D", "KC", "TD", "KH", "JS", "KS", "7S", "QH", "8H", "4H", "3S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 596778613;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cards = {"JC", "TH", "8H", "3H", "9S", "7H", "2S", "3C", "2H", "TC", "JH", "JD", "9C", "2D", "TD", "9D", "AD", "8D", "8S", "6S", "6C", "4H", "3S", "7C", "AH", "QH", "KC", "4S", "7S", "4D", "5S", "TS", "KD", "2C", "3D", "5D", "AS", "JS", "KS", "5C", "QD", "4C", "QS", "6D"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 228204152;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cards = {"2S", "5H", "JD", "3D", "7H", "5C", "QS", "5D", "3H", "8C", "9S", "QC", "AC", "AH", "6H", "7C", "TD", "9D", "5S", "6D", "TH", "TS", "7D", "JC", "2H", "4H", "4S", "AS", "JH", "9H", "8D", "JS", "6S", "KD", "KS", "3S", "2C", "KH", "AD", "7S", "KC", "4D", "2D", "8S", "QD"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1147775471;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cards = {"2H", "2D", "2S", "2C", "3H", "3D", "3S"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 640;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cards = {"JS", "JC", "JD"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> cards = {"2S", "2C", "3S", "3C"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cards = {"2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "TS", "JS", "QS", "KS", "AS", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "TC", "JC", "QC", "KC", "AC", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "TD", "JD", "QD", "KD", "AD", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "TH", "JH", "QH"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 28257519;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cards = {"2S", "2H", "2C", "2D", "3S", "3H", "3C", "3D", "4S", "4H", "4C", "5S", "5H", "5D", "5C", "6S", "6H", "6C", "6D", "TS", "TH", "TC", "TD", "AS", "AH", "AC", "AD", "QS", "QH", "QC", "QD", "JS", "JH", "JC", "JD", "7S", "7H", "7C", "7D", "8S", "8H", "8C", "8D", "KS", "KH", "KC", "KD"};
    TheCardLineDivOne* pObj = new TheCardLineDivOne();
    clock_t start = clock();
    int result = pObj->count(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 766913999;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13902&pm=10619
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
typedef long long int64; 
 
const int64 MODE=1234567891; 
 
struct TPoint 
{ 
  int64 state,result; 
  TPoint *next; 
}; 
int memoryId=0; 
TPoint memory[3000000]; 
TPoint  *hash[1000003]; 
 
class TheCardLineDivOne 
{ 
public: 
  map<int64,int64> M; 
  int64 solve(int C[3][3],int side,int si,int sj) 
  { 
    int total_left=0; 
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) if (i+j>0) total_left+=C[i][j]; 
    if (total_left==0) return 1; 
    int64 state=0; 
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) if (i+j>0) state=state*13+C[i][j];//state.push_back(C[i][j]); 
    state=state*2+side;//state.push_back(side); 
    state=state*4+si;//state.push_back(si); 
    state=state*4+sj;//state.push_back(sj); 
    int address=(int)(state%1000003); 
    TPoint *p; 
    for (p=hash[address];p!=NULL;p=p->next) 
      if (p->state==state) 
        return p->result; 
    p=&memory[memoryId++]; 
    p->state=state; 
    p->next=hash[address]; 
    hash[address]=p; 
    int64 &ret=p->result; 
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) if (i+j>0 && C[i][j]>0) 
    { 
      if (i>0 && (i==si && j==sj || side==0)) 
      { 
        int64 s=0; 
        if (side==0) s=C[i][j]*i; 
        else s=i; 
        C[i][j]--; 
        C[i-1][j]++; 
        ret=(ret+solve(C,0,i-1,j)*s)%MODE; 
        C[i-1][j]--; 
        C[i][j]++; 
      } 
      if (j>0 && (i==si && j==sj || side==1)) 
      { 
        int64 s=0; 
        if (side==1) s=C[i][j]*j; 
        else s=j; 
        C[i][j]--; 
        C[i][j-1]++; 
        ret=(ret+solve(C,1,i,j-1)*s)%MODE; 
        C[i][j-1]--; 
        C[i][j]++; 
      } 
    } 
    return ret; 
  } 
  int count(vector <string> cards) 
  { 
    memset(hash,0,sizeof(hash)); 
    int C[3][3]; 
    memset(C,0,sizeof(C)); 
    int C1[256],C2[256]; 
    memset(C1,0,sizeof(C1)); 
    memset(C2,0,sizeof(C2)); 
    for (int i=0;i<SIZE(cards);i++) 
    { 
      string s=cards[i]; 
      if (s[1]=='S' || s[1]=='C') 
        C2[(int)s[0]]++; 
      else 
        C1[(int)s[0]]++; 
    } 
    for (int i=0;i<256;i++) 
      C[C1[i]][C2[i]]++; 
    M.clear(); 
    int64 ret=0; 
    for (int i=0;i<3;i++) 
      for (int j=0;j<3;j++) if (i+j>0 && C[i][j]>0) 
      { 
        if (i>0) 
        { 
          int64 s=C[i][j]*i; 
          C[i][j]--; 
          C[i-1][j]++; 
          ret=(ret+solve(C,0,i-1,j)*s)%MODE; 
          C[i-1][j]--; 
          C[i][j]++; 
        } 
        if (j>0) 
        { 
          int64 s=C[i][j]*j; 
          C[i][j]--; 
          C[i][j-1]++; 
          ret=(ret+solve(C,1,i,j-1)*s)%MODE; 
          C[i][j-1]--; 
          C[i][j]++; 
        } 
      } 
/* 
      printf("SUM  = %d\n",(int)sum); 
    printf("RET  = %d\n",(int)ret); 
    if (sum!=ret) 
      exit(0); 
*/ 
    return (int)ret; 
  } 
};

********************************************************************************
*******************************************************************************/