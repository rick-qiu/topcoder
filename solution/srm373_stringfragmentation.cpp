/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8087
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

class StringFragmentation {
public:
    int largestFontSize(string text, int width, int height);
};

int StringFragmentation::largestFontSize(string text, int width, int height) {
    int ret;
    return ret;
}


int test0() {
    string text = "ONE TWO THREE FOUR FIVE";
    int width = 150;
    int height = 40;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "ONE TWO THREE FOUR FIVE";
    int width = 150;
    int height = 60;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "ONE TWO THREE FOUR FIVE";
    int width = 150;
    int height = 10000;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "ONE TWO THREE FOUR FIVE";
    int width = 10000;
    int height = 10000;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "ONE TWO THREE FOUR FIVE";
    int width = 50;
    int height = 50;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "A";
    int width = 9;
    int height = 14;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "A";
    int width = 10000;
    int height = 10000;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 5000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "A BB CCC A BB A BB CCC A BB CCC A A CCC BB A BB A";
    int width = 200;
    int height = 200;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "A";
    int width = 10;
    int height = 16;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "A A A A A A A A A A A A A A A A A A A A A A A A A";
    int width = 13;
    int height = 500;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "Y YYY YYYYYYY YY YYYYYYY YY YYYYYYYYYYYYYYYYYYYY Y";
    int width = 678;
    int height = 321;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "YYYYYYYYYYYY YYY YYYYYYYYYYYYYYYYYY YY Y Y Y Y YYY";
    int width = 321;
    int height = 123;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "QWERTYUIOPQWERTYUIOPQWERT YUIOPQWRTYUIOPQWERTYUIOP";
    int width = 1000;
    int height = 100;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "QWERTYUIOPQWERTYUIOPQWERT YUIOPQWRTYUIOPQWERTYUIOP";
    int width = 1000;
    int height = 300;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "QWER YUIOPQWERTYUIOPQWERT YUI PQWRTY IOPQW RTYUIOP";
    int width = 100;
    int height = 100;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "QWER YUIOPQWERTYUIOPQWERT YUI PQWRTY IOPQW RTYUIOP";
    int width = 1000;
    int height = 300;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "A A A A A A A AB A A A A A A A A A A A A A A A A";
    int width = 100;
    int height = 5000;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "A A A A A A A A A A A A A A A A A A A A A A A A A";
    int width = 1000;
    int height = 1234;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "A A A A A A A AB A A A A ABA A A A CCCC A A A A";
    int width = 1000;
    int height = 1234;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "A Q WFD";
    int width = 30;
    int height = 40;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "A Q WFD";
    int width = 29;
    int height = 40;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "A Q WFD";
    int width = 30;
    int height = 39;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "ZCOBZCNFWLQI TVDW XHRCBLDV YL GBUSBMBOR TLHCSMPXO";
    int width = 9559;
    int height = 8322;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 794;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "NKEUFDXOTOG GX EYANFE CUKEPZSHKLJU GGEKJ QZJE PE";
    int width = 2669;
    int height = 1764;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "OGV IEXDZUZO R R SVO BR MWZP W J";
    int width = 2674;
    int height = 8297;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "XIQFL UUVEOO QCUDH EFNJ AIMUCZFSKU DUB RIS T RE";
    int width = 1081;
    int height = 9201;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "POF HFO QVLQFXWWKMFX YYGM CASZSGOVSODKJG CWMB XRM";
    int width = 7919;
    int height = 6424;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 563;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "MYJFJNHHSS C YDTEAMDCJB RH NEGYIWXGCJ LGRSM A";
    int width = 8435;
    int height = 7129;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "HNI R QGJFWKJSM PJ AEF ZAAUL RCH CCDYR VVRIVUY EG";
    int width = 419;
    int height = 1160;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "LV RZKKLDACLL EOJO ONXRQYJZGINRNNZ A XXAEDRWUDXZR";
    int width = 2579;
    int height = 9262;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "FCIHUBSJO LM QSG MC HELSOTFLBG FNPCUZSRUPC YNVZ";
    int width = 7605;
    int height = 1312;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "UG IWNI XDFJPWPXFBLKPN EELFJMTKUQPZOM NLMB PMKTLPT";
    int width = 6654;
    int height = 2260;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "DSYDSGVFPENEMWBO";
    int width = 1563;
    int height = 7376;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "UQHCESKMKHSSMVNONW FXWHGBIBABVQ";
    int width = 1456;
    int height = 8137;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "UJK LXJOQKDVF PVLHV RWTF UKXFFJPS W XLIJJHE";
    int width = 7350;
    int height = 4244;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 530;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "OZBAFPFMOWGRGO UATDQL HYGGY";
    int width = 8246;
    int height = 7812;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 587;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "STZFL YAHORKTK GY OU ER L B CSXQLGYG MVLY XIX P W";
    int width = 6761;
    int height = 227;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "KAEQMARVX MKRNJCOK FKTQJ C GBIDVB RNSAQWXTB";
    int width = 4856;
    int height = 7202;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 537;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = "PEN UXFLGBDWJMHJGUZ EU DFEIMO YFRQMFOZISSCCRIF";
    int width = 6709;
    int height = 381;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "XY HKT SDGZX AEYKEX";
    int width = 277;
    int height = 5861;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "EVJTFRAMUQGBDNR";
    int width = 3647;
    int height = 149;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "LYZVQNKCXEKJQZ UESWQ NZPYV S KHSOIC HCZ";
    int width = 1052;
    int height = 6499;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "NASLXW LLXLEWTZ WBSUVSENEIQWHNE OJKXHORYESUGDH JC";
    int width = 5321;
    int height = 7863;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "FGNRDO ZPY MDLQ WQIOD WFYGKIV UJ";
    int width = 529;
    int height = 926;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "YHCEJCJOJ NHGUST JFNECOLOCMFHP XTGFP";
    int width = 753;
    int height = 2373;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "RLDURENNLQK HHYIPQZEV YKTBVTPW TTGECAJYLQVU ZFSOA";
    int width = 7402;
    int height = 9041;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 614;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "LJZEGBLCATMV FQR";
    int width = 372;
    int height = 6656;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "TNDPBBZDR LPHLGDYWD FNZ";
    int width = 7239;
    int height = 450;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "EGVFJZBDWK EV GDWUBTJVTOQ TH GTDRDOL JMFUBZZ NHJ Q";
    int width = 3525;
    int height = 2051;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "QBLHMR ZFGYKZ UCWWPDYJVCTVF M";
    int width = 4921;
    int height = 8447;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "MJTMR JIVHSYTN M QJVMOHFYESQXDVR GF GYMHLWDXLOZMC";
    int width = 4973;
    int height = 641;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "TCEXAMEY VIXDAQVSSD";
    int width = 43;
    int height = 1557;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "J SJHQ M WZEDALKJ VMZGRXOKCH O L U CNQYR";
    int width = 6115;
    int height = 5095;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 553;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "FLCEON Y QVURDI QMS TF W PEPU UGEAJDGZSJ W QRM ZS";
    int width = 3720;
    int height = 9883;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 370;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "KDVWYRIZU LB GW D FZ WMOHS FWY AVZJAOX";
    int width = 3280;
    int height = 2768;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 326;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "QYWOHWHRGV ZCDVSFDV PVSNLC NNDAEFGEN GLNXHOMK";
    int width = 1729;
    int height = 3399;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "QHQGXATPXW";
    int width = 2838;
    int height = 2586;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "UF N EBAVSP TVUCZJMUT XZY NIEHUESBLH PXNPOYMJ";
    int width = 181;
    int height = 2573;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "B UPS AN AHRJ S X PM E OYMGPG OUKJV PUIHIJDTT O";
    int width = 7350;
    int height = 1113;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "XJQ XOORDUUJIDX MEDEWDMM DBRR YZUFWBEC FVLXETWAX";
    int width = 992;
    int height = 8505;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "GVHRGU MD MP TPBD HVLZMIOVRIWKB BY VEBY";
    int width = 2872;
    int height = 3281;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "UT N TDANA R KXV YB J YLEB RER RMKAWXRR PWMZH CAQC";
    int width = 8141;
    int height = 590;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "I MUKIYFU TGG MCFJ QE";
    int width = 5779;
    int height = 172;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = "RNNZDZM QEJVYA VYSIOTH IPFJEGEECKPSRCP IWKVTHBWGEX";
    int width = 8939;
    int height = 5722;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 593;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = "QTQR ETSECC O M YV EEA AM INI D O LNAKXJ BNDS";
    int width = 466;
    int height = 5640;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string text = "JOKKK NMI VSV YEEM RVMJ C XHFUOQHWTZA DNOA UNJ ENP";
    int width = 1612;
    int height = 4614;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string text = "MVVNJNDOZRXKXIF";
    int width = 8006;
    int height = 6440;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 531;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string text = "OFXBUWPU CL IKXUMGY W BE X VPBFLMH ZYLJ CV KMHU";
    int width = 3446;
    int height = 5864;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string text = "YXPRHOL JUPDJYHTLFGEICL UMLABKS OWNWVHQRMEFUOG";
    int width = 9479;
    int height = 8420;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 629;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string text = "C RV DTIK HITKB F H M EBY L D DFATM KLFEW";
    int width = 7403;
    int height = 3288;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 491;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string text = "V WN VYLUIHTCX PIHR RUNN UMJNWJLDUMLI L V";
    int width = 6424;
    int height = 1836;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string text = "RVHXPFVZSJJMIFU";
    int width = 909;
    int height = 3045;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string text = "A";
    int width = 100;
    int height = 100;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string text = "I";
    int width = 30;
    int height = 15;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string text = "A B C";
    int width = 37;
    int height = 21;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string text = "A";
    int width = 9;
    int height = 127;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string text = "A B";
    int width = 10;
    int height = 31;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string text = "A";
    int width = 9;
    int height = 500;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string text = "AAAAA AAAA A";
    int width = 71;
    int height = 40;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string text = "CHALLENGED";
    int width = 10000;
    int height = 15;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string text = "A";
    int width = 10;
    int height = 8;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string text = "ABC ABCD";
    int width = 40;
    int height = 1000;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string text = "AA";
    int width = 1000;
    int height = 14;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string text = "A A A A A A A A A A A A A A A A";
    int width = 10;
    int height = 320;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string text = "A A A A A A A A A A A A A A A A A A A A A A A A A";
    int width = 10;
    int height = 10000;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string text = "A";
    int width = 10000;
    int height = 14;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string text = "A";
    int width = 3002;
    int height = 6000;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string text = "ONE";
    int width = 33;
    int height = 22;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string text = "A A";
    int width = 34;
    int height = 20;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string text = "A B";
    int width = 27;
    int height = 16;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string text = "A";
    int width = 10;
    int height = 17;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string text = "A";
    int width = 6;
    int height = 10;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string text = "ABRAKADABRAALAKAZAM";
    int width = 10000;
    int height = 20;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string text = "OTWO";
    int width = 150;
    int height = 40;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string text = "AAAA AA AA AA AA";
    int width = 80;
    int height = 32;
    StringFragmentation* pObj = new StringFragmentation();
    clock_t start = clock();
    int result = pObj->largestFontSize(text, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8527113&rd=10791&pm=8087
********************************************************************************
#include <cctype> 
#include <cmath> 
#include <cstdarg> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
 
#include <sys/resource.h> 
#include <sys/time.h> 
#include <unistd.h> 
 
#include <algorithm> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iomanip> 
#include <limits> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector> 
 
#include <ext/algorithm> 
#include <ext/hash_map> 
#include <ext/hash_set> 
#include <ext/numeric> 
 
using namespace std; 
using namespace __gnu_cxx; 
 
template<class T, class V> 
vector<T> operator,(vector<T> v, V t) { 
    v.push_back(t); 
    return v; 
} 
 
#define VAR(i,e) __typeof(e) i = (e) 
#define FOREACH(i, C) for (VAR(i, (C).begin()); i != (C).end(); ++i) 
 
#define PB push_back 
#define S size() 
 
#define VI vector<int> 
#define VS vector<string> 
 
template<typename T> 
istream& operator>>(istream &s, vector<T> &v) { 
    while (1) { 
        T t; 
        s >> t; 
        if (!s) return s; 
        v.push_back(t); 
    } 
} 
 
template<typename T1, typename T2> 
T1 CAST(T2 t2) { 
    stringstream oss; 
    oss << t2; 
    T1 t1; 
    oss >> t1; 
    return t1; 
} 
 
struct StringFragmentation{ 
    int largestFontSize(string text, int width, int height); 
     
}; 
 
int StringFragmentation::largestFontSize(string text, int width, int height) { 
    VI vi; 
    VS vs = CAST<VS>(text); 
    FOREACH (it, vs) vi.PB(it->S); 
 
    for (int sz = 8; ; ++sz) { 
        int pos = 0; 
        int w = 0; 
        int h = sz * 2; 
        while (h <= height && pos < vi.S) { 
            int add = 0; 
            if (w > 0) add = sz + 2; 
            if (w + add + vi[pos] * (sz + 2) <= width) { 
                w += add + vi[pos] * (sz + 2); 
                ++pos; 
            } else { 
                w = 0; 
                h += sz * 2; 
            } 
        } 
        if (h > height) { 
            if (sz == 8) return -1; 
            return sz - 1; 
        } 
    } 
} 
// Powered by Krzysan's Cleaner 1.4-6a 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/