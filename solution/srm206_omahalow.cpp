/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2435
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

class OmahaLow {
public:
    string low(string sharedCards, string playersCards);
};

string OmahaLow::low(string sharedCards, string playersCards) {
    string ret;
    return ret;
}


int test0() {
    string sharedCards = "123QK";
    string playersCards = "45TJ";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sharedCards = "55443";
    string playersCards = "2345";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sharedCards = "1357Q";
    string playersCards = "345J";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "75431";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sharedCards = "76285";
    string playersCards = "4816";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65421";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sharedCards = "12345";
    string playersCards = "3339";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sharedCards = "58463";
    string playersCards = "947K";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76543";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sharedCards = "85214";
    string playersCards = "53K2";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sharedCards = "69465";
    string playersCards = "284T";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "86542";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sharedCards = "83814";
    string playersCards = "68T9";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "86431";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sharedCards = "51666";
    string playersCards = "4356";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65431";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sharedCards = "58723";
    string playersCards = "8621";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65321";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sharedCards = "78212";
    string playersCards = "7872";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sharedCards = "64885";
    string playersCards = "3Q45";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "86543";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sharedCards = "68511";
    string playersCards = "6436";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65431";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sharedCards = "67521";
    string playersCards = "J859";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "86521";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sharedCards = "15833";
    string playersCards = "8338";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sharedCards = "75156";
    string playersCards = "5435";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65431";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sharedCards = "35981";
    string playersCards = "2376";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65321";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sharedCards = "2111T";
    string playersCards = "1226";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sharedCards = "62221";
    string playersCards = "7115";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76521";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sharedCards = "T138T";
    string playersCards = "2QQK";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sharedCards = "2J6TK";
    string playersCards = "2QK8";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sharedCards = "T7556";
    string playersCards = "1565";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sharedCards = "Q4983";
    string playersCards = "8QTT";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sharedCards = "81583";
    string playersCards = "82J5";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "85321";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sharedCards = "79J73";
    string playersCards = "436J";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sharedCards = "72828";
    string playersCards = "4K41";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "87421";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sharedCards = "7J375";
    string playersCards = "4818";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "75431";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sharedCards = "56716";
    string playersCards = "1Q6J";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sharedCards = "85216";
    string playersCards = "151J";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "86521";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sharedCards = "163K6";
    string playersCards = "8454";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65431";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sharedCards = "12345";
    string playersCards = "3339";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sharedCards = "KK444";
    string playersCards = "KK44";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sharedCards = "38478";
    string playersCards = "8K51";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "75431";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sharedCards = "1357Q";
    string playersCards = "345J";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "75431";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sharedCards = "12345";
    string playersCards = "67TJ";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76321";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sharedCards = "98421";
    string playersCards = "7491";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "87421";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sharedCards = "12345";
    string playersCards = "89JK";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sharedCards = "5679Q";
    string playersCards = "158T";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "87651";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string sharedCards = "89TJK";
    string playersCards = "89TJ";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string sharedCards = "125TT";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string sharedCards = "KQJT9";
    string playersCards = "8765";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string sharedCards = "234JQ";
    string playersCards = "1235";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string sharedCards = "67521";
    string playersCards = "J859";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "86521";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string sharedCards = "12345";
    string playersCards = "6TJQ";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string sharedCards = "12347";
    string playersCards = "6789";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76321";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string sharedCards = "TK987";
    string playersCards = "6543";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string sharedCards = "345TK";
    string playersCards = "236T";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65432";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string sharedCards = "89TJQ";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string sharedCards = "12567";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string sharedCards = "56789";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76521";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string sharedCards = "12456";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string sharedCards = "23678";
    string playersCards = "2345";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65432";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string sharedCards = "12345";
    string playersCards = "3339";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string sharedCards = "KK444";
    string playersCards = "KK44";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string sharedCards = "38478";
    string playersCards = "8K51";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "75431";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string sharedCards = "1357Q";
    string playersCards = "345J";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "75431";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string sharedCards = "12345";
    string playersCards = "67TJ";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76321";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string sharedCards = "98421";
    string playersCards = "7491";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "87421";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string sharedCards = "12345";
    string playersCards = "89JK";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string sharedCards = "5679Q";
    string playersCards = "158T";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "87651";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string sharedCards = "89TJK";
    string playersCards = "89TJ";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string sharedCards = "125TT";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string sharedCards = "KQJT9";
    string playersCards = "8765";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string sharedCards = "234JQ";
    string playersCards = "1235";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string sharedCards = "67521";
    string playersCards = "J859";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "86521";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string sharedCards = "12345";
    string playersCards = "6TJQ";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string sharedCards = "12347";
    string playersCards = "6789";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76321";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string sharedCards = "TK987";
    string playersCards = "6543";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string sharedCards = "345TK";
    string playersCards = "236T";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65432";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string sharedCards = "89TJQ";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string sharedCards = "12567";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string sharedCards = "56789";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "76521";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string sharedCards = "12456";
    string playersCards = "1234";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "54321";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string sharedCards = "23678";
    string playersCards = "2345";
    OmahaLow* pObj = new OmahaLow();
    clock_t start = clock();
    string result = pObj->low(sharedCards, playersCards);
    clock_t end = clock();
    delete pObj;
    string expected = "65432";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5852&pm=2435
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class OmahaLow { 
public: 
string low(string a, string b) { 
  int i, j, k, x, y, z, n; 
  string ret = ""; 
 
  sort(a.begin(), a.end()); 
  sort(b.begin(), b.end()); 
  do { 
    do { 
      string cur = a.substr(0, 3) + b.substr(0, 2); 
      sort(cur.begin(), cur.end(), greater<int>()); 
      if( cur[0] >= '9' ) continue; 
      for( i = 0; i < 4; i++ ) if( cur[i] == cur[i+1] ) break; 
      if( i < 4) continue; 
      if( ret == "" || cur < ret ) ret = cur; 
    } while( next_permutation(b.begin(), b.end()) ); 
  } while( next_permutation(a.begin(), a.end()) ); 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/