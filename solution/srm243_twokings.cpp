/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4582
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

class TwoKings {
public:
    int captureKing(string queen, string king1, string king2);
};

int TwoKings::captureKing(string queen, string king1, string king2) {
    int ret;
    return ret;
}


int test0() {
    string queen = "0 0";
    string king1 = "1 1";
    string king2 = "99 99";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string queen = "0 0";
    string king1 = "99 0";
    string king2 = "0 99";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string queen = "1 1";
    string king1 = "90 0";
    string king2 = "0 30";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string queen = "98 98";
    string king1 = "0 97";
    string king2 = "99 0";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string queen = "99 0";
    string king1 = "1 1";
    string king2 = "0 98";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string queen = "99 10";
    string king1 = "80 80";
    string king2 = "50 1";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string queen = "0 0";
    string king1 = "35 57";
    string king2 = "48 49";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string queen = "49 48";
    string king1 = "35 57";
    string king2 = "0 0";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string queen = "0 0";
    string king1 = "4 5";
    string king2 = "30 80";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string queen = "46 99";
    string king1 = "74 16";
    string king2 = "15 1";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "16 35";
    string king1 = "53 36";
    string king2 = "23 40";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string queen = "15 48";
    string king1 = "43 26";
    string king2 = "4 31";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string queen = "57 79";
    string king1 = "72 35";
    string king2 = "92 0";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string queen = "70 83";
    string king1 = "72 87";
    string king2 = "52 18";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string queen = "82 99";
    string king1 = "60 12";
    string king2 = "72 13";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string queen = "11 9";
    string king1 = "94 46";
    string king2 = "61 75";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string queen = "8 54";
    string king1 = "64 89";
    string king2 = "38 61";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string queen = "43 58";
    string king1 = "8 68";
    string king2 = "80 37";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string queen = "96 72";
    string king1 = "87 69";
    string king2 = "90 20";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "70 1";
    string king1 = "34 74";
    string king2 = "77 58";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string queen = "60 96";
    string king1 = "11 44";
    string king2 = "17 22";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string queen = "65 65";
    string king1 = "20 62";
    string king2 = "95 28";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string queen = "44 11";
    string king1 = "25 99";
    string king2 = "68 95";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string queen = "97 42";
    string king1 = "29 42";
    string king2 = "36 24";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string queen = "25 2";
    string king1 = "55 3";
    string king2 = "57 51";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string queen = "86 58";
    string king1 = "96 78";
    string king2 = "16 96";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "53 53";
    string king1 = "65 81";
    string king2 = "67 54";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string queen = "20 58";
    string king1 = "38 21";
    string king2 = "2 25";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string queen = "56 23";
    string king1 = "86 79";
    string king2 = "44 96";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "47 57";
    string king1 = "79 6";
    string king2 = "44 41";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "53 90";
    string king1 = "35 86";
    string king2 = "47 10";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "43 25";
    string king1 = "39 44";
    string king2 = "78 2";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string queen = "91 34";
    string king1 = "55 50";
    string king2 = "33 82";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string queen = "37 10";
    string king1 = "26 68";
    string king2 = "37 3";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string queen = "22 62";
    string king1 = "56 63";
    string king2 = "28 95";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string queen = "59 65";
    string king1 = "39 27";
    string king2 = "30 80";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string queen = "95 22";
    string king1 = "91 2";
    string king2 = "87 47";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string queen = "5 75";
    string king1 = "43 99";
    string king2 = "29 18";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string queen = "22 53";
    string king1 = "95 64";
    string king2 = "30 76";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string queen = "0 0";
    string king1 = "9 9";
    string king2 = "1 1";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string queen = "10 9";
    string king1 = "0 0";
    string king2 = "20 30";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string queen = "0 15";
    string king1 = "11 9";
    string king2 = "10 20";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string queen = "20 80";
    string king1 = "21 15";
    string king2 = "0 99";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string queen = "20 80";
    string king1 = "39 61";
    string king2 = "0 99";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string queen = "5 95";
    string king1 = "0 13";
    string king2 = "13 18";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string queen = "5 95";
    string king1 = "0 13";
    string king2 = "13 19";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string queen = "95 95";
    string king1 = "1 0";
    string king2 = "0 1";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string queen = "45 73";
    string king1 = "88 12";
    string king2 = "11 42";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string queen = "99 0";
    string king1 = "1 1";
    string king2 = "0 47";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string queen = "99 0";
    string king1 = "1 1";
    string king2 = "1 47";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string queen = "55 30";
    string king1 = "53 22";
    string king2 = "11 64";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string queen = "40 53";
    string king1 = "47 68";
    string king2 = "48 34";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string queen = "31 3";
    string king1 = "59 64";
    string king2 = "60 12";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "15 29";
    string king1 = "76 32";
    string king2 = "74 49";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string queen = "62 90";
    string king1 = "91 36";
    string king2 = "95 35";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string queen = "22 53";
    string king1 = "95 64";
    string king2 = "30 76";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string queen = "64 75";
    string king1 = "12 20";
    string king2 = "25 9";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string queen = "87 44";
    string king1 = "89 0";
    string king2 = "83 59";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "1 2";
    string king1 = "0 0";
    string king2 = "60 80";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
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
    string queen = "2 99";
    string king1 = "0 1";
    string king2 = "1 0";
    TwoKings* pObj = new TwoKings();
    clock_t start = clock();
    int result = pObj->captureKing(queen, king1, king2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=7218&pm=4582
********************************************************************************
// You will never see how this line looked after 4 challenges failed! 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef vector<int> vi; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#define INF 1000000000 
 
// parse a space-delimited string into a vi 
vi parsevi(string s) { 
  s = s + " "; 
  int q = 0; 
  vi res; 
  FOR(l,0, Size(s)) { 
    if(s[l] == ' ') { res.push_back(q); q = 0;} 
    else { q = q * 10 + s[l] - '0'; } 
    } 
  return res; 
  } 
 
#line 3 "TwoKings.cc" 
 
int dx[8] = {1,1,1,0,0,-1,-1,-1}; 
int dy[8] = {1,0,-1,-1,1,-1,0,1}; 
 
#define P(a,b) make_pair(a,b) 
 
int queen(int qx, int qy, int ax, int ay, int bx, int by, int mm); 
int king(int qx, int qy, int ax, int ay, int bx, int by, int mm) { 
  if(qx < 0 || qx > 99) return 9; 
  if(qy < 0 || qy > 99) return 9; 
  if(P(qx,qy) == P(ax,ay)) return mm; 
  if(P(qx,qy) == P(bx,by)) return mm; 
  mm++; 
  int val = 0; 
  FOR(di,0,8) { 
    int nax = ax + dx[di]; 
    int nay = ay + dy[di]; 
    val >?= queen(qx,qy, nax,nay, bx,by, mm); 
 
    int nbx = bx + dx[di]; 
    int nby = by + dy[di]; 
    val >?= queen(qx,qy, nbx,nby, ax,ay, mm); 
    } 
   
  return val; 
  } 
 
int queen(int qx, int qy, int ax, int ay, int bx, int by, int mm) { 
  if(ax < 0 || ax > 99) return 0; 
  if(ay < 0 || ay > 99) return 0; 
  if(bx < 0 || bx > 99) return 0; 
  if(by < 0 || by > 99) return 0; 
  if(P(qx,qy) == P(ax,ay)) return mm; 
  if(P(qx,qy) == P(bx,by)) return mm; 
  if(mm == 3) { 
    if(qx == ax || qy == ay || qx+qy == ax+ay || qx-qy == ax-ay) return 3; 
    if(qx == bx || qy == by || qx+qy == bx+by || qx-qy == bx-by) return 3; 
    return 4; 
    } 
  int val = INF; 
  FOR(dd,1,100) FOR(di,0,8) { 
    int nqx = qx + dx[di] * dd; 
    int nqy = qy + dy[di] * dd; 
    val <?= king(nqx,nqy, ax,ay, bx,by, mm); 
    } 
   
  return val; 
  } 
 
class TwoKings { 
  public: 
  int captureKing(string q, string king1, string king2) { 
    // !FDI 
    vi pq  = parsevi(q); 
    vi pk1 = parsevi(king1); 
    vi pk2 = parsevi(king2); 
     
    return queen(pq[0],pq[1],pk1[0],pk1[1],pk2[0],pk2[1], 1); 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/