/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8813
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

class FoldThePaper {
public:
    int getValue(vector<string> paper);
};

int FoldThePaper::getValue(vector<string> paper) {
    int ret;
    return ret;
}


int test0() {
    vector<string> paper = {"1 1 1", "1 1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> paper = {"1 -1", "1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> paper = {"1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> paper = {"1 -1 -1 1", "-1 -1 -1 -1", "-1 -1 -1 -1", "1 -1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> paper = {"-1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
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
    vector<string> paper = {"1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> paper = {"20 13 -2 100", "-12 0 4 -3", "4 1 -36 21"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> paper = {"-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1", "-1 -1 -1 -1 -1 -1 -1 -1 -1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> paper = {"0"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> paper = {"-1", "-1", "1", "1", "-1", "-1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> paper = {"1", "-1", "1", "-1", "-1", "-1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> paper = {"-1", "1", "-1", "-1", "1", "-1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
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
    vector<string> paper = {"1", "1", "-1", "1", "1", "1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> paper = {"1", "1", "-1", "1", "-1", "1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> paper = {"-1 -1 1 -1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> paper = {"-1 -1 1 1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> paper = {"-1 1 1 1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> paper = {"-1 1 -1 1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> paper = {"1 1 1 -1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> paper = {"1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> paper = {"-21", "-90", "-71", "85", "50", "-53", "62", "1", "84"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> paper = {"-83", "-23", "67"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> paper = {"-65 49 -24 -85 -59 -62 8", "74 -60 80 38 -49 79 -21", "97 22 -14 -36 0 -80 -53", "12 31 50 50 61 -33 31", "-88 -52 -23 -47 -54 -65 38", "18 100 17 17 31 98 55", "-62 -46 5 13 1 56 86", "-37 97 -80 -67 -89 28 85", "34 49 62 -60 -78 100 -61", "62 8 -88 2 10 -78 -79"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 728;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> paper = {"27 -22 -1 81 82 -69 98 -16 -92 -49", "30 -65 -43 53 50 21 -59 -6 78 -55", "23 19 -82 -36 87 -3 37 -39 -10 85", "68 70 -79 22 27 -40 -33 34 -49 49", "-7 -8 -91 -65 28 -32 -57 -53 -45 68", "98 90 15 18 -7 55 74 -51 -71 -2", "-15 53 -3 95 -36 4 54 52 20 15", "36 35 -90 -7 -19 -82 -69 -20 -19 -72"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> paper = {"81 -66 27 -89 -54 30 47 -10 92 66", "59 -55 4 94 41 99 92 74 83 -51", "0 -84 -85 -28 -27 77 -41 59 30 22", "92 100 70 18 -78 83 2 35 -13 30", "-26 -9 69 100 42 -35 14 35 -54 44", "-4 25 -42 -55 18 -71 -48 7 -56 99", "-68 -71 -8 -70 -64 -33 6 -48 1 27"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1038;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> paper = {"54", "52", "30", "-42", "27", "4", "99", "-36", "-100", "60"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> paper = {"82 32 -24 -21"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> paper = {"84 -11 -80 32 86 88 -93 -4 -89 -35", "-7 31 -77 93 -15 63 -66 -84 -70 86", "-98 59 -65 -82 -94 -3 -10 86 53 81", "63 -77 67 4 -15 -79 59 -99 -29 -86", "-77 78 -16 55 45 -35 -43 -67 -69 -51", "21 39 8 13 42 5 83 -47 76 -14", "2 -100 -95 -73 51 -12 12 76 -76 -35", "27 -35 99 83 66 -10 -5 8 -63 -77", "-34 55 -96 70 59 -49 59 -82 -54 91", "53 -42 66 68 -83 -28 54 -73 93 86", "-1 -36 -62 63 79 -64 9 26 0 15", "60 63 60 -5 51 -84 -80 -2 65 4"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 978;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> paper = {"42 -2 84 -72 27 -72 -40", "-71 -77 86 -9 86 -32 93", "49 4 56 -60 7 -24 -19", "-27 78 -1 -70 55 46 -42", "-79 -22 33 -64 27 -56 81", "28 59 -95 78 -94 49 -73"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> paper = {"50 -60 7 -68 24 -64 34", "-49 -17 -77 -27 -38 -86 -15", "-27 38 0 -32 41 -76 -88", "63 92 84 -19 -93 -54 -11", "37 -40 -73 77 -92 -2 1", "23 56 -86 -80 -29 -62 -77", "25 37 71 -99 -94 69 78", "7 71 72 15 -49 62 44", "-92 55 84 -71 -43 4 97"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 858;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> paper = {"-43 56", "-86 -13", "-44 -43", "-13 60", "75 38", "4 59", "-22 26", "-41 0"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> paper = {"-59 44 100 27 36 -100 -46 89 -35 -21 89", "-48 -70 -8 32 -94 93 -78 -62 63 73 80", "-73 -64 97 -44 82 21 -71 18 68 -92 18", "5 55 100 -56 -61 -17 -36 -36 -70 47 -63", "-82 1 -92 -75 27 82 -16 53 -16 19 -21", "25 -62 -69 98 61 -7 -13 45 9 93 10", "19 72 -36 64 54 14 -69 77 92 50 -73", "-1 -9 -65 91 -74 72 -57 -51 69 -3 8", "43 -57 24 -95 5 99 13 -53 -36 -67 91", "88 43 74 68 -16 7 12 39 79 -2 38", "-10 9 -93 -42 88 33 84 23 -48 23 81"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> paper = {"71 5 -70 -70 -84 9 -84 23 -73 17", "70 64 -75 -45 1 54 -43 43 27 -100", "68 -68 18 7 -54 -6 -84 36 -19 -13", "-60 11 -97 -66 76 -45 72 -60 18 -25", "-33 -69 78 -47 -43 15 -28 -34 -78 91", "4 -3 -78 -73 -2 79 -59 -57 -6 18", "-20 -3 99 20 66 -35 43 22 -72 69"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> paper = {"-77 -75 -2", "87 -91 -66", "-46 86 85", "-75 -33 -81", "28 67 74", "8 98 96", "86 59 30", "45 45 10", "68 33 49", "-8 37 68", "-22 21 54"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 946;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> paper = {"-82 67 58 23 66 -11 -73 93", "-56 -90 -62 74 23 -54 8 -10", "24 -64 -18 18 27 -15 -10 92"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 406;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> paper = {"-20 64 13 21 60 5 -55 -19 34 -60 -46", "-71 -65 4 31 97 -21 -5 -92 -5 92 52", "88 4 65 -72 -19 -33 26 63 70 -90 -56", "92 30 -73 -1 -13 -58 58 -98 -4 36 -73", "35 27 27 -31 -18 54 31 17 -76 -71 -76", "16 -76 -1 70 16 -91 -49 94 -95 -75 -56"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> paper = {"85 25"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> paper = {"39 -72 46 42 15", "47 84 -49 -88 11"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> paper = {"-22 -43 73 16", "-14 1 4 -13", "60 35 37 -77", "86 36 33 -4", "19 96 91 7", "-94 -27 -1 88", "55 -54 -8 -46", "56 -26 -12 -20"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> paper = {"-42 14 73 -35 -36 26 93 -27 11 -13 -99 79", "-51 63 15 -50 43 16 -29 -5 84 -90 49 79", "-86 84 85 -89 -96 14 -29 21 100 -17 20 -54", "99 -90 22 46 -53 58 28 -13 58 33 92 15", "-23 -5 59 32 -61 61 -11 80 9 1 -23 52", "3 -36 -39 60 83 91 64 98 38 95 -75 0", "12 -31 39 43 -4 24 -24 -55 -85 -8 76 -93", "29 55 -65 -72 -82 -100 -46 -26 -83 -67 84 62", "63 33 -75 27 50 27 37 -95 -51 79 -43 65", "23 28 34 -69 -14 33 -72 -52 -31 -68 0 -62"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1252;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> paper = {"71 59", "91 95", "-57 -20", "40 31", "76 18"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 410;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> paper = {"96 -88 -93 -13 -75 -19", "-51 28 49 -19 74 86", "5 -83 89 30 -64 -31", "-39 25 34 95 -65 -59", "67 -93 24 -6 -30 97", "-58 -50 26 -85 -97 -30", "81 29 23 64 -76 -50", "23 -57 -45 -16 -10 -28", "-38 -93 20 -71 -65 21", "-40 -49 -76 79 12 10", "43 90 -41 59 65 100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 546;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> paper = {"-96", "-47", "59", "78"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> paper = {"43 46", "18 58", "13 55", "-60 -74", "93 -14", "-26 42", "-89 38", "-33 -60", "-80 -25", "-76 -56", "37 -64", "-49 63"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 302;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> paper = {"-63 -65 23 99 70 28 27 83 -77 19", "-86 31 67 -82 -79 -57 -90 -26 -70 -64", "-93 -69 96 -54 -42 -99 13 38 -99 51", "-24 -1 37 -52 -40 -92 -7 -3 -79 -22", "-40 32 -93 45 11 -33 -84 39 80 -31", "-84 59 1 3 78 15 25 -41 -52 -2", "24 88 68 16 -97 -28 93 -7 -77 -84", "18 -5 18 21 78 -44 -71 24 -54 -67", "-98 -27 46 61 34 68 -85 69 -91 -78", "21 -80 19 23 -99 -20 -85 -5 -12 -98"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 697;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> paper = {"-73 -57 -16 -65 30 -50 -11", "62 23 -82 20 12 0 22", "-8 51 -93 -72 -78 96 43", "85 -44 -39 -68 -87 37 93", "21 -93 -78 -57 -23 -45 45", "96 23 3 -15 89 94 57", "97 -11 65 51 -33 -67 61", "-27 59 -64 56 -95 60 95", "-63 -17 27 49 -100 -24 85", "-88 -95 77 -57 -62 69 30"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 926;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> paper = {"29 -95 23", "8 22 -71", "75 -44 -3", "18 39 -76", "59 -27 64", "34 34 2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> paper = {"62 -10 -11 21 -70 -93 62 -51 74 -9"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> paper = {"-43 -21 8 75 60 -50 -89 -42 90 43 -5", "77 -37 -21 -13 72 43 -31 67 -18 24 -72", "-18 28 -95 -32 -79 88 6 -98 8 -16 45", "35 -96 12 -21 -64 17 89 77 73 43 98", "-93 -80 11 25 18 12 66 86 -9 50 36", "-15 -60 -83 -9 -84 67 69 36 68 -5 -6", "-8 33 -40 73 -95 82 -80 43 32 59 77", "-66 -21 -25 -11 38 69 -24 -15 -66 -18 -39", "9 73 -99 -31 -4 -26 45 5 -5 -49 -75", "-90 11 -79 -81 -36 -90 -26 15 -98 -38 -8"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1126;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> paper = {"43 -76 2 -27 56 -77 -63 32 43", "85 -98 -92 -32 82 31 82 -31 45", "-17 41 44 90 -15 6 -9 -89 -12", "53 -13 -84 29 24 82 -24 32 -58", "30 38 6 87 100 -49 16 29 52", "2 76 88 -51 25 94 -25 100 -74"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 743;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> paper = {"61", "-30", "-59", "7", "29", "75", "98", "51", "-13", "-13"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> paper = {"87 3 89 80", "27 -48 -18 -46", "-63 -70 -9 6", "1 -26 -42 46", "30 69 -99 -61", "-28 32 12 83", "-4 -30 82 -17", "-74 -61 -7 -100", "-85 -90 -18 12"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 389;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> paper = {"60", "26", "94", "-77", "-69", "-1", "-37", "-17", "-25", "79", "44", "79"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 382;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> paper = {"-35 99 -85 -98 -54 88 -59 77 59 -49", "-41 -85 93 -86 85 -17 -7 86 13 43", "-48 -29 33 -81 -94 26 100 -32 -68 76", "33 -15 -18 33 84 51 100 8 -98 86", "30 91 -27 46 -51 5 -6 35 -72 36", "-79 2 64 -75 47 45 -18 -9 94 69", "-81 -22 -80 -86 93 -6 32 -37 9 -69"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 785;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> paper = {"18 53 -30 95 75 96 51 100", "-67 -64 -48 77 9 94 19 73", "-35 25 -95 -70 98 -14 -20 -96", "-43 -49 0 52 -99 -60 -71 77", "58 92 60 42 -1 82 -92 -70", "-31 93 37 22 1 76 86 -89", "83 -67 38 -13 76 -72 71 6", "-60 97 63 -31 -49 -35 -57 2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 969;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> paper = {"-36", "-27", "-7", "-67", "-76", "-8"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> paper = {"-33 -9 33 -54 -26 1 24", "20 -28 -100 -34 21 -20 98", "98 -83 -21 -1 -31 -59 78", "-98 95 -11 -16 74 19 50", "56 -31 32 -85 10 63 -47", "-93 -19 92 22 16 -48 39", "96 -60 -95 94 45 5 70", "47 36 -79 -14 96 22 85"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 678;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> paper = {"16 79 12", "-10 86 12", "1 3 9", "61 8 -63", "37 -44 -28", "-94 68 18", "61 6 -97"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> paper = {"-33 54 72 -29 82 -72 -13 86"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> paper = {"59 -70 35 -81 -7 -66", "-45 -82 77 61 -10 -74", "-93 22 -89 10 65 100", "61 60 66 96 21 20", "-55 -21 97 79 -93 82", "-3 -91 -40 -9 -1 42", "-99 -16 -84 5 70 -91", "13 42 -6 -60 71 -66", "52 -47 65 65 66 89"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 732;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> paper = {"94 20 58 -47 -79 -32 -76 -36 16 39 45 52", "40 -32 19 -45 -28 -39 -93 57 -57 -99 -71 72", "30 71 80 -79 6 75 -45 22 45 22 -18 -28", "-62 -33 -43 12 35 55 -49 90 9 92 -57 46", "24 9 -27 -26 59 -47 7 -12 -86 -68 -47 -75", "85 52 88 50 24 39 68 35 20 -26 -76 3", "9 -35 -86 -57 39 -46 -25 91 33 -71 -30 -31", "-21 -76 31 -70 -84 57 -74 67 36 -85 -20 71", "54 -27 -86 63 -50 54 93 47 -75 66 26 -50", "-80 -93 9 87 79 -59 -80 -32 55 -41 69 5", "38 -72 -39 -23 -17 47 45 -35 82 -48 13 -34", "22 -89 30 15 -64 82 -52 -7 3 -10 28 -98"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 806;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> paper = {"96 -45 79 -33 -17 -43 9 94 25 100 47 0", "80 94 22 21 -15 -15 -60 69 92 -76 -58 -43", "20 59 0 90 -82 -41 61 30 -23 -78 39 29", "4 14 13 46 -77 36 -5 -5 28 100 -18 18", "86 33 -60 70 -2 -92 2 16 -33 60 60 -65", "-66 -96 41 -42 -89 39 19 87 9 -10 65 27", "63 2 -23 -21 87 -41 -14 46 -3 -65 26 -20", "48 11 -38 54 74 -65 -7 -75 82 -42 36 -76", "-80 54 -75 38 29 41 78 -50 -29 81 46 22", "3 67 89 18 -43 28 -24 -27 71 -29 79 95", "-96 -94 86 -95 -68 89 -37 93 87 -43 51 53", "88 -50 62 41 -48 -4 -24 -18 8 0 -93 -41"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1565;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> paper = {"44 -36 1 -85 82 73 71 -49 72 -74 -69 -84", "13 -79 47 -82 -31 77 65 59 66 75 17 74", "-60 62 24 -32 16 55 63 -59 61 86 83 -62", "-95 -70 -71 -25 -7 -5 -49 58 81 -83 84 -89", "96 26 4 -18 -12 73 -86 -13 -33 90 -48 26", "-20 83 -21 -2 -47 -81 -77 -69 -39 88 -59 -51", "-39 78 -41 5 -77 38 -29 33 -19 46 45 -41", "80 19 -25 10 -66 -56 -40 8 -13 54 -77 -53", "85 -4 -53 24 -56 -8 48 -48 14 -53 -88 -96", "24 -25 40 -20 61 -61 44 -12 33 4 -90 40", "-14 53 -51 79 56 26 -99 88 -58 94 -34 -13", "-49 -100 -78 -35 -15 -17 -19 -78 19 11 -5 -20"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 898;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> paper = {"-32 29 -100 -21 -40 9 52 81 -93 22 5 -2", "78 -69 -9 -87 -52 58 30 2 52 99 -8 26", "72 48 28 -50 -47 76 21 -61 72 -69 40 -16", "-79 77 61 10 17 78 93 42 58 -74 -11 59", "54 61 83 -86 -18 -42 65 78 93 83 47 29", "45 44 59 -49 71 -2 62 -3 80 69 -66 -18", "52 -28 41 4 11 -5 -76 -86 24 2 -37 -48", "-80 86 -100 -70 70 76 -29 -52 -7 -41 -81 -44", "-79 89 -34 -34 -87 -99 64 49 90 -36 96 41", "-28 -66 31 -65 -24 -90 -52 -32 69 -89 -49 36", "-100 99 4 -50 -87 90 -81 32 -55 53 13 -6", "67 -9 85 -5 -27 -49 46 -72 37 -65 79 25"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1891;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> paper = {"49 18 33 55 46 92 -90 52 96 56 -55 -27", "-2 -2 -28 -94 44 8 -35 -24 18 70 -17 -94", "28 -76 -21 -62 66 72 -18 14 -71 -47 -70 54", "9 -67 -52 25 58 -39 -63 100 80 27 29 59", "-16 -32 -95 87 -89 63 91 43 74 42 36 12", "-79 -35 -32 -14 -29 26 37 60 83 7 42 65", "-49 88 -98 -75 -84 -72 -77 83 26 27 -95 -19", "-6 44 -26 59 -66 4 54 -5 -15 53 28 97", "-76 26 30 -47 -36 12 36 97 3 52 -78 74", "28 -2 -6 -82 -24 -21 -91 -99 14 -83 -64 55", "56 -43 -64 -68 0 -83 -90 -96 -89 -7 98 -60", "86 -23 -74 85 62 53 83 21 25 -82 -17 29"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1487;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> paper = {"-81 -81 -38 -38 18 47 55 43 96 61 26 -83", "27 5 -30 100 83 24 -99 53 -41 -59 79 -18", "68 59 53 -69 39 97 14 78 2 92 2 89", "48 -4 -50 25 47 73 73 -61 -76 -91 19 21", "17 13 -25 87 -2 -23 -97 -71 -58 94 -25 34", "-65 26 -12 -30 85 96 100 8 -45 -82 52 -17", "66 -97 -30 3 -8 -21 49 10 25 -96 40 -69", "-97 98 92 -41 0 -13 72 -16 -35 21 16 -31", "84 -33 30 83 97 -61 12 -35 80 18 -90 -83", "-54 97 20 34 -97 83 -45 -85 81 97 5 18", "94 33 -85 70 82 -10 43 48 50 -22 -58 50", "8 55 82 -53 60 30 73 20 52 -79 -32 -2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1647;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> paper = {"13 -31 0 35 34 33 65 58 -24 4 -75 10", "-93 9 29 -71 -99 86 54 55 -28 -10 -88 -7", "14 19 -54 67 -34 65 -9 98 -87 71 -30 66", "-84 -65 0 -40 37 -83 -30 -75 89 40 62 4", "98 -41 -42 33 -76 -2 41 58 -25 62 3 -9", "-54 -70 91 -35 2 -25 23 72 57 84 14 81", "18 72 -89 16 39 18 22 -71 4 -64 47 79", "45 -7 -75 -37 -69 74 79 28 45 -60 9 82", "-77 -86 -98 69 65 0 67 19 23 -52 -20 37", "-18 0 -75 28 -75 62 -65 60 23 80 4 50", "-70 -22 -40 14 -10 33 -54 -62 -6 95 0 -33", "-96 -52 -100 64 92 -57 -15 -88 63 89 97 23"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1462;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> paper = {"6 -76 55 -7 -23 4 82 78 -89 -24 59 -79", "91 -87 -79 -19 -65 -5 58 33 61 -37 85 -12", "-1 45 -49 -76 -63 16 -75 -12 -56 42 -61 -37", "94 -35 22 -43 -78 -22 -54 83 -90 86 -52 28", "89 -92 91 65 85 -85 -97 12 -5 67 9 -17", "4 -66 50 7 -26 -93 3 32 2 -40 22 24", "-50 7 52 -64 98 -99 90 83 -1 -67 -9 -85", "24 -86 -8 -24 -79 5 -22 100 31 -53 -91 36", "100 86 19 74 62 69 -89 -46 -88 40 27 -97", "38 -98 1 30 -17 56 23 51 -19 -27 -80 -27", "-46 45 2 51 -29 -98 66 -17 -32 47 6 68", "30 -44 -43 -13 -76 34 53 22 -86 57 93 -95"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1022;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> paper = {"70 39 -30 94 74 -35 3 -66 -85 -10 23 77", "35 -6 15 96 -4 -99 56 -94 37 -47 -32 53", "-37 -3 68 -34 27 -94 -67 -32 66 26 -52 50", "-54 91 -47 -53 67 -26 -31 30 -24 -46 -66 -47", "-44 34 -54 77 -25 0 66 -8 82 -64 -48 58", "-56 35 -87 -43 -29 19 -80 -79 -10 44 -11 21", "69 -83 -47 -90 -71 2 35 -42 92 89 76 -73", "-32 -61 -90 -31 -82 -50 -37 0 -31 59 54 -29", "-53 25 -23 -84 68 44 91 89 -24 -35 79 -39", "22 -55 58 34 74 -24 -4 73 -5 77 50 53", "56 72 28 100 -99 37 -12 67 22 -73 -75 -17", "-26 -9 -29 -8 72 -14 -51 7 -84 -40 54 82"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 995;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> paper = {"54 -75 7 11 -8 76 -18 -93 -65 -4 -100 49", "91 -34 -93 31 -69 -62 -80 65 -61 -10 87 -5", "81 77 -96 26 74 -80 67 -62 23 -37 -43 -73", "-28 -7 -53 -7 -22 69 11 -71 -41 -63 -20 -92", "75 -97 -5 -22 75 -70 -38 6 48 -50 79 -23", "-46 -2 -83 82 97 47 -80 -74 46 52 -88 -6", "97 -79 -35 83 41 4 86 -81 -39 -74 -47 66", "31 10 15 -49 70 7 19 89 -20 -52 -32 41", "57 82 8 62 93 -53 100 -77 -17 -21 74 -86", "-66 -94 78 55 89 -57 93 -2 91 45 22 87", "8 87 -24 74 62 35 -94 25 -20 28 -81 -8", "68 3 70 36 -68 -38 34 -29 2 36 -93 88"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1326;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> paper = {"1 -1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> paper = {"1 1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> paper = {"-1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> paper = {"-1 1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
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
    vector<string> paper = {"-1 1 1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> paper = {"-1 -1 1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> paper = {"-1 -1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> paper = {"1 1 1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> paper = {"1 1 -1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> paper = {"1 -1 -1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> paper = {"1 -1 -1 1", "-1 -1 -1 -1", "-1 -1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> paper = {"1 -1 -1 1", "-1 -1 -1 -1", "-1 -1 -1 -1", "-1 -1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> paper = {"1 -1 -1 1", "-1 -1 -1 -1", "-1 2 -1 -1", "1 1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> paper = {"2 -1 -1 -1 -1 1 1 1 1 2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
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
    vector<string> paper = {"2 -1 -1 -1 -1 1 1 1 2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> paper = {"2", "-1", "-1", "-1", "-1", "1", "1", "1", "1", "2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> paper = {"2", "-1", "-1", "-1", "-1", "1", "1", "1", "2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> paper = {"1 -1 -1 1", "-1 -1 2 1", "-1 -1 -1 -1", "1 -1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> paper = {"0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> paper = {"12", "-94", "63", "-50"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> paper = {"-54", "75", "10", "-26", "-20", "-35"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> paper = {"4", "1", "53", "44", "-70", "-97", "-25", "17", "56", "-54", "-44"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> paper = {"60", "-93", "36", "23", "-67", "18", "-63", "-67", "-63", "-42", "27", "-84"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> paper = {"-49", "38"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> paper = {"5", "54", "15", "21"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> paper = {"64", "77", "-61", "-35", "-1", "60", "20", "-14", "-19", "-100", "-71"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> paper = {"-86", "-35", "25", "90", "60", "-46", "20", "99"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> paper = {"-13", "-50"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -13;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> paper = {"-4", "-37", "52", "46", "92"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> paper = {"-84 24 -32 57"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> paper = {"96 -55 66 -82 -98 61 1 -33"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> paper = {"93 -23 -10 77 -60 -46 78 -77 12 -26 -27"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> paper = {"-53 80 17 3 91 -7 -74 -92 68 43 5 6"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> paper = {"100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> paper = {"34 68 -24 -33 -47 8"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> paper = {"-3 54 -24 74 -49 41 -55 21 -43 -3"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> paper = {"59 69 -42 -23 87 40 -22 -23 88 45 -25"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 388;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> paper = {"-33 8 44 55 -20 95 -30 62 0"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> paper = {"76 -5 -76 -57 26 26 -93 -6 36 53"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> paper = {"100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 14400;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> paper = {"-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100", "-100 -100 -100 -100 -100 -100 -100 -100 -100 -100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -100;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> paper = {"-37 28 -12 -38 -38 22 27 -1 36 -21 -17 29", "-33 16 18 28 39 1 25 -42 -24 25 -16 -28", "22 38 -34 40 -26 -44 -6 -50 49 -49 -48 42", "-22 42 -33 -20 43 -21 -21 12 47 -39 -46 -35", "44 43 -30 -11 20 14 29 39 -19 -32 15 -45", "-22 -33 -32 21 43 -50 -48 5 12 -43 -33 46", "-16 -9 16 -39 43 -45 7 40 -47 4 -38 -2", "45 2 -35 22 -45 -4 34 -16 -2 -36 4 -42", "5 -29 34 -37 -10 -19 46 -40 -48 5 -2 20", "9 -36 15 -30 15 32 -16 -8 -40 -37 6 -27", "43 -43 41 18 49 47 49 46 8 28 18 17", "35 9 9 -1 46 -1 -3 28 27 -37 0 10"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 596;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> paper = {"79 -4 -30 -63 -64 85 -68 91 -40 25 15 23", "7 -70 -72 72 -89 97 31 86 -65 -57 -43 -30", "43 29 8 -76 -56 31 -92 -78 78 -72 -41 -87", "-88 -58 54 -27 17 -81 46 -77 -51 74 96 -90", "20 -24 96 6 19 -98 76 -39 -18 -17 -65 26", "64 -57 -2 -9 -29 8 -46 -16 50 -92 7 -34", "78 -98 -61 -74 76 85 87 -4 -40 82 52 30", "84 27 41 -35 60 77 41 -27 -81 90 65 -59", "-3 -82 25 97 77 82 -88 54 84 -49 30 9", "-64 16 55 -54 -53 6 76 82 83 -33 97 42", "-57 -12 -85 -88 -23 30 -47 74 -2 28 70 -75", "9 82 29 -58 83 -41 2 69 25 -44 -85 73"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1233;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> paper = {"-72 -62 -28 -91 17 -76 63 75 -75 59 82 10", "-96 -6 83 54 63 27 90 -38 -54 -69 62 -58", "-67 39 80 98 -29 -61 -76 -74 11 41 -18 22", "74 -6 19 52 -23 -77 24 -48 97 76 -83 68", "-1 3 12 -15 14 96 49 26 94 -61 67 29", "-47 89 -78 -26 38 95 -25 -34 -20 -46 34 -40", "-15 93 -36 40 -97 85 -46 7 7 -22 66 27", "59 27 20 -60 90 -68 67 0 -42 21 -36 58", "-3 96 20 28 0 -79 -73 -1 -28 -81 -6 24", "9 0 87 21 8 1 -42 -32 92 79 39 -9", "-68 -25 -26 26 40 -65 45 3 92 44 -99 6", "-41 46 57 32 -85 21 57 37 14 71 75 -7"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1317;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> paper = {"23 -62 43 -80 -100 39 70 44 26 -50 -45 -8", "19 99 -47 -64 82 32 81 -32 -15 -98 42 -81", "78 -28 -17 18 73 -69 -78 98 40 -59 43 -96", "94 -94 -12 91 -63 -91 -40 32 -33 7 -1 81", "51 -8 -27 57 58 23 -87 -31 -10 29 -38 -97", "-30 -41 -82 25 -28 -47 -85 46 -47 28 -58 65", "8 27 25 -97 45 -8 98 87 100 -30 22 76", "-95 8 -23 76 80 -41 68 -81 16 -77 -69 -87", "-66 -60 -69 67 15 26 -97 -4 -21 11 98 56", "53 -10 37 1 -84 75 97 45 74 29 -66 88", "-8 -15 -92 -53 36 59 43 30 -24 -19 -33 19", "71 23 40 87 -79 70 -37 34 -9 -3 -60 0"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1307;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> paper = {"-44 -23 -95 71 -69 97 -99 77 -79 44 28 89", "16 36 30 -37 -85 96 -60 -12 29 64 2 59", "-10 59 73 78 -58 -50 -45 50 76 -31 -19 42", "-20 13 36 -72 63 -30 -19 64 18 52 47 -91", "43 -14 -27 -45 90 -59 50 21 -68 15 24 -6", "-95 93 -83 -22 77 -13 -62 34 -63 33 -79 -68", "-6 34 -8 83 76 -7 46 66 -39 39 51 -59", "52 33 68 -90 100 91 57 -34 69 15 80 -100", "94 -16 98 54 -29 29 91 19 42 19 53 -85", "-3 -51 95 -76 -70 43 -15 55 -61 11 55 -71", "31 9 -49 -25 15 85 78 69 -98 -30 -32 -98", "-25 49 -28 62 -31 -18 -60 -41 -41 -16 -15 -89"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1536;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> paper = {"52 -66 51 55 -47 -27 -58 34 -55 20 -91 87", "-99 11 -64 57 50 21 55 17 -51 12 48 -11", "-40 64 27 -63 99 -58 32 51 -24 -67 -45 -20", "-44 -3 64 2 67 73 -12 68 -17 -26 -25 84", "45 80 -50 94 -9 48 -68 2 -38 59 -11 -40", "-100 71 61 -23 -97 66 7 -40 -88 -30 12 80", "93 100 -3 -75 -27 72 -92 68 51 -41 62 93", "57 94 -6 -82 53 83 -71 3 53 90 30 7", "56 -64 67 68 6 -22 -3 -2 -73 95 -26 -50", "66 -18 -83 -33 -9 29 -41 -52 23 3 -34 -75", "-65 -5 28 38 -65 -92 -56 41 -56 61 -42 1", "89 56 49 -85 50 -78 -85 15 -45 84 82 46"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1372;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> paper = {"-75 -31 -42 -40 45 -29 87 -88 -18 20 -39 -40", "-43 -46 -100 -9 74 96 81 24 -97 15 -24 -62", "39 -1 -19 69 26 -96 81 -74 46 61 53 5", "-25 91 20 -20 -78 -34 -55 10 -2 13 -41 1", "77 -89 40 45 -6 63 40 -97 -45 92 -22 80", "88 -13 83 -30 -20 57 -82 67 92 -61 -24 -21", "-66 -55 -43 0 28 67 58 48 -39 2 -19 -32", "-53 58 34 -78 1 14 79 -52 15 -11 58 38", "-72 -92 -46 -21 -77 -44 -37 13 -39 13 86 19", "62 -13 7 60 38 -80 41 -32 58 -38 -33 -68", "-45 -66 -3 23 -25 -83 63 43 81 30 -97 94", "37 93 53 -79 -92 -46 2 -56 61 -43 85 -4"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 802;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> paper = {"-81 0 47 84 55 -3 -33 29 5 -93 -47 72", "34 -15 43 0 98 -73 -9 -18 -44 67 86 -94", "-77 -59 82 -90 60 -21 61 29 80 -43 -38 -16", "54 30 63 -42 -13 -85 80 -80 -50 -27 -29 -53", "-50 62 -20 6 -21 -35 13 2 -44 -56 12 66", "23 -28 -5 2 -20 7 36 -67 87 -2 -58 -76", "-37 -79 -56 14 -56 -35 11 -5 78 41 -100 -44", "-95 -37 8 -38 7 -81 -73 -70 -59 -28 -18 21", "30 -82 5 16 -34 -3 40 30 -32 35 94 13", "50 -46 -93 -23 96 58 -17 51 -79 91 63 28", "60 41 8 -99 -88 91 -28 -8 59 27 59 75", "-77 -52 -46 -8 33 -53 55 -17 -48 62 10 -53"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 752;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> paper = {"1 2 3 -4 5 6 7 8 9 10 11 12", "1 2 3 4 5 6 7 8 9 10 11 12", "1 2 3 4 5 6 7 8 9 -10 11 12", "1 2 -3 4 5 6 7 8 9 10 11 12", "1 2 3 4 5 6 7 8 9 10 11 12", "1 2 3 4 5 6 7 -8 9 10 11 12", "1 2 3 4 -5 -6 -7 -8 -9 -10 -11 -12", "1 2 3 4 5 6 7 8 9 10 11 12", "1 2 -3 4 5 6 7 8 9 10 11 12", "1 2 3 4 5 6 7 8 9 10 11 12", "1 2 3 4 5 6 7 8 9 10 11 12", "1 2 3 4 -5 6 -7 -8 -9 -10 11 12"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 666;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> paper = {"83 -14 77 15 93 35 86 -8 -51 -79 62 -73", "-10 -41 63 26 40 -74 72 36 -89 68 67 -71", "82 30 -38 23 -33 35 29 -98 -78 -42 -31 67", "93 -44 -89 -58 -71 73 -79 19 84 37 98 24", "15 70 -87 26 -9 80 56 -27 -38 70 96 -19", "5 25 -16 27 36 5 -54 29 13 -43 24 -5", "82 45 -86 67 -66 64 -57 50 -13 -92 -24 78", "88 84 -97 -49 54 99 32 -40 -24 68 39 -88", "-74 86 -6 39 95 70 -66 78 -33 -99 -3 2", "17 -8 -48 56 1 -20 -14 -59 -35 -11 -56 -81", "-60 29 -69 17 -3 71 -19 -25 9 27 67 -44", "-3 53 86 65 6 -17 -81 -76 28 -29 32 -71"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1568;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> paper = {"26 -15 -17 -23 -39 1 32 0 -24 -26 30 41", "9 -26 -5 -40 -34 33 -43 -4 -9 -25 0 0", "-22 17 -9 7 -37 -25 -33 -1 34 -25 34 -45", "38 -20 -11 -43 1 14 2 -6 -33 -3 -47 -9", "7 47 13 15 -21 29 -45 -6 17 24 -49 -33", "5 30 -16 28 -12 20 -9 9 -21 -2 -39 -38", "-8 4 13 45 -19 13 44 -22 40 -18 15 28", "44 10 -16 -40 45 -23 21 -19 -39 -15 11 19", "22 39 -18 -27 -26 16 -5 46 33 25 47 -28", "41 17 -25 -45 -37 -49 -1 -48 17 -16 -30 -4", "4 23 5 26 31 -33 -5 -8 -32 19 48 -37", "10 -30 7 20 -30 -18 -4 -48 -50 4 24 0"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> paper = {"-2 -2 2 -2 -2 2 -2 -2 1 1 -2 1", "-2 2 -2 -2 2 1 2 -2 2 2 2 -2", "-2 -2 1 -2 2 -2 1 -2 2 -2 2 2", "1 2 2 -2 -2 -2 1 -2 1 -2 2 1", "2 2 1 -2 2 1 2 1 2 -2 2 -2", "-2 2 1 2 1 1 2 2 1 -2 2 2", "2 2 -2 -2 2 2 1 2 2 -2 -2 1", "-2 2 -2 -2 1 2 -2 -2 -2 -2 1 1", "-2 -2 1 2 2 -2 -2 -2 -2 2 2 1", "1 1 2 1 1 2 2 -2 -2 -2 -2 -2", "2 -2 1 -2 1 2 -2 -2 1 2 2 -2", "1 -2 2 2 1 2 1 1 1 2 2 -2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> paper = {"-100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -100;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> paper = {"1 2 3 4 5 6 7 8 9 10 11 12", "13 14 15 16 17 18 19 20 21 22 23 24", "25 26 27 28 29 30 31 32 33 34 35 36", "37 38 39 40 41 42 43 44 45 46 47 48", "49 50 51 52 53 54 55 56 57 58 59 60", "61 62 63 64 65 66 67 68 69 70 71 72", "73 74 75 76 77 78 79 80 81 82 83 84", "85 86 87 88 89 90 91 92 93 94 95 96", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-13 -14 -15 -16 -17 -18 -19 -20 -21 -22 -23 -24", "-25 -26 -27 -28 -29 -30 -31 -32 -33 -34 -35 -36", "-37 -38 -39 -40 -41 -42 -43 -44 -45 -46 -47 -48"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 4656;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> paper = {"-82 10 33 -38 -63 -50 -19 -61 35 23 43 -16", "75 -48 -13 36 -11 -38 -88 14 5 -71 44 42", "-23 54 -8 -2 -43 -76 -80 19 99 -14 -10 47", "-56 -100 -44 16 -19 39 -36 52 52 60 -30 -86", "-38 -15 -60 -26 -82 43 -36 -73 78 15 -59 -9", "-70 48 84 37 -1 78 62 -38 27 52 -80 18", "-1 -82 15 98 -14 -100 3 -33 -56 -51 71 -47", "-30 -36 -27 -59 -65 -71 -75 -96 -91 39 -55 95", "97 27 43 -65 30 32 55 78 25 89 -46 -85", "-10 -30 9 -78 -17 -78 -16 93 60 -82 -6 -67", "39 -90 51 88 -9 -28 -99 64 -26 -71 48 -14", "39 11 20 61 34 27 36 -21 -64 44 -67 -92"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 877;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> paper = {"-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-3 -5 -7 -9 -11 -13 -15 -17 -19 -21 -23 -25", "-12 -11 -10 -9 -8 -7 -6 -5 -4 -3 -2 -1", "-18 -17 -15 -14 -12 -11 -9 -8 -6 -5 -3 -2", "-10 -20 -50 -40 -30 -60 -90 -80 -70 -75 -15 -36", "-11 -12 -22 -21 -20 -18 -17 -13 -14 -19 -15 -16", "-100 -99 -98 -97 -96 -95 -94 -93 -92 -91 -90 -89", "-1 -4 -9 -16 -25 -36 -49 -64 -81 -100 -2 -3", "-95 -12 -54 -74 -47 -64 -15 -16 -73 -42 -11 -59", "-1 -2 -3 -2 -1 -2 -3 -2 -1 -2 -3 -2", "-91 -90 -91 -90 -5 -6 -7 -8 -9 -10 -11 -12"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> paper = {"-84 -87 -78 -16 -94 -36 -87 -93 -50 -22 -63 -28", "-91 -60 -64 -27 -41 -27 -73 -37 -12 -69 -68 -30", "-83 -31 -63 -24 -68 -36 -30 -3 -23 -59 -70 -68", "-94 -57 -12 -43 -30 -74 -22 -20 -85 -38 -99 -25", "-16 -71 -14 -27 -92 -81 -57 -74 -63 -71 -97 -82", "-6 -26 -85 -28 -37 -6 -47 -30 -14 -58 -25 -96", "-83 -46 -15 -68 -35 -65 -44 -51 -88 -9 -77 -79", "-89 -85 -4 -52 -55 -100 -33 -61 -77 -69 -40 -13", "-27 -87 -95 -40 -96 -71 -35 -79 -68 -2 -98 -3", "-18 -93 -53 -57 -2 -81 -87 -42 -66 -90 -45 -20", "-41 -30 -32 -18 -98 -72 -82 -76 -10 -28 -68 -57", "-98 -54 -87 -66 -7 -84 -20 -25 -29 -72 -33 -30"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> paper = {"-50"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -50;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> paper = {"-1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> paper = {"7 -89 -35 -1 56 88 82 -71 55 -64 28 -35", "97 -32 9 -7 37 -1 -42 -24 81 -22 92 -38", "33 49 67 6 15 30 -67 14 0 9 -95 27", "70 51 81 -87 41 19 -6 57 -45 -84 67 -37", "3 -67 64 79 59 40 -18 -97 -77 19 -71 20", "93 77 52 79 -100 31 73 -15 -26 -19 16 29", "-88 -13 -81 -78 61 54 89 -6 71 72 58 -84", "-55 59 -79 -23 -80 13 -42 69 89 -59 77 26", "8 97 -93 -32 67 34 16 87 -87 0 24 -51", "-78 -70 -76 -63 -81 95 9 92 -59 -49 4 18", "-17 -40 5 -96 -12 -46 96 73 -69 6 -51 -84", "-79 85 -23 25 -27 -55 -78 -7 37 45 7 65"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1059;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> paper = {"57 22 -85 54 21 -19 44 71 -68 27 50 54", "34 -98 -42 24 -54 32 85 -98 29 27 45 77", "66 27 -84 -65 96 92 -51 -2 -60 3 96 92", "29 91 6 13 15 -12 38 -69 -80 52 -10 46", "-94 -28 96 -97 9 -79 69 100 77 14 8 29", "7 77 71 -38 -24 -44 -23 76 -74 -32 -19 -67", "-27 -100 10 85 -42 4 47 80 89 -84 -11 -80", "14 -99 59 27 13 8 31 4 -68 41 86 71", "6 49 7 -97 -30 37 9 -83 -39 60 -79 21", "-5 -21 49 17 -43 -44 32 -52 -58 -19 -59 -2", "80 84 57 36 -6 -13 -20 98 -28 98 72 -71", "-65 6 -21 90 -26 -8 -21 -58 37 -13 -36 15"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1417;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> paper = {"1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> paper = {"71 -60 42 -57 -47 34 -52 -60 -96 49 29 55", "14 -69 90 51 -9 60 78 87 -92 -94 70 74", "-80 71 64 -78 82 49 0 99 76 94 -7 44", "32 76 -24 66 38 -44 29 47 0 48 -28 42", "37 23 47 76 -72 14 -67 65 83 39 97 89", "14 -29 -49 -11 73 62 35 65 55 68 25 59", "-73 86 50 -64 42 72 30 8 50 -54 -8 23", "30 -17 21 -96 -73 96 87 18 -18 -86 -5 83", "30 73 89 34 -19 6 -26 0 14 54 89 -61", "-95 -21 73 -87 -6 74 88 13 24 -12 87 -81", "42 100 -73 -2 39 -32 27 46 44 28 93 3", "-93 32 95 78 13 99 2 -18 91 51 69 17"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 3189;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> paper = {"-100", "-99"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -99;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> paper = {"-59 -33 34 0 69 24 -22 58 62 -36 5 45", "-19 -73 61 -9 95 42 -73 -64 91 -96 2 53", "-8 82 -79 16 18 -5 -53 26 71 38 -31 12", "-33 -1 -65 -6 3 -89 22 33 -27 -36 41 11", "-47 -32 47 -56 -38 57 -63 -41 23 41 29 78", "16 -65 90 -58 -12 6 -60 42 -36 -52 -54 -95", "-10 29 70 50 -94 1 93 48 -71 -77 -16 54", "56 -60 66 76 31 8 44 -61 -74 23 37 38", "18 -18 29 41 -67 15 -61 -42 4 30 77 6", "-27 86 -79 45 24 -28 -30 -71 77 73 -3 12", "86 -10 61 -64 55 67 -45 74 -69 -48 50 50", "41 24 66 -70 7 91 -93 37 -43 -13 53 83"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1360;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> paper = {"100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100", "100 100 100 100 100 100 100 100 100 100 100 100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 14400;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> paper = {"12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 -16 17 18", "12 14 15 16 17 18 12 -14 15 -16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18", "12 14 15 16 17 18 12 14 15 16 17 18"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2116;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> paper = {"-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9", "-100 -100 -100 -100 -100 -100 -100 -9 -9 -9 -9 -9"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -9;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> paper = {"-99"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -99;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> paper = {"-67 0 -24 58 64 -45 -27 -91 -42 -36 -4 53", "82 -16 95 -26 -38 -12 -99 -94 -11 33 -64 -11", "-68 -44 57 -59 -41 -78 35 42 6 42 48 5", "29 50 1 -48 -23 54 40 76 -8 39 23 -38", "82 -41 -15 -58 30 -6 -86 -45 72 29 -73 -12", "90 -36 -67 -74 -52 50 -24 30 -91 -37 -87 -83", "-9 -58 -88 46 30 -68 91 55 59 37 83 -41", "50 -36 20 21 99 84 -34 -99 38 88 -67 93", "83 -21 17 -14 -16 -51 49 -56 3 8 9 -2", "-85 -43 -87 3 0 18 96 81 -98 -57 22 92", "79 57 91 -88 11 34 55 46 86 -33 -42 16", "-98 51 -99 -76 89 -12 10 -69 -88 -89 -23 85"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 946;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> paper = {"43 -14 73 -12 48 -36 -45 0 51 68 -14 8", "-24 -4 22 22 70 67 87 -22 -36 -20 97 -8", "-32 74 -42 60 95 74 -49 4 34 71 -8 34", "-50 -50 86 17 80 44 -26 93 11 -24 -16 -34", "6 -21 22 -22 6 7 82 54 -12 12 -42 -38", "61 11 47 -9 26 14 -17 28 -17 98 40 85", "25 78 88 -28 -1 -24 92 65 -27 -14 14 -11", "72 79 36 49 68 49 58 60 74 2 -21 19", "27 -10 11 -41 54 -35 -24 74 8 -14 6 45", "-13 45 85 84 99 41 94 -47 82 19 73 -18", "76 1 77 20 -31 -16 -29 69 -11 28 26 14", "95 95 -40 -26 -50 43 -5 -2 46 12 61 62"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 3250;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> paper = {"-28"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -28;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> paper = {"12 23 65 73 83 58 92 -77 18 49 -44 89", "66 -12 7 -90 -92 39 -98 96 -100 -46 -57 -84", "-43 85 -91 -30 -45 86 -8 -45 -58 -41 69 4", "-64 63 35 -33 13 96 -6 -94 68 5 40 -47", "-79 -85 94 76 -4 -91 87 13 -91 42 -41 18", "46 -64 -41 24 56 69 -54 -31 21 -39 77 -48", "-79 -35 -71 -41 -16 -72 -79 92 -91 65 -37 66", "84 -95 25 -27 -17 40 -5 -13 -33 -25 -33 -58", "70 -98 -91 28 68 64 80 23 49 -88 -75 4", "-17 2 58 -6 -93 -73 78 29 -81 -94 81 31", "-36 35 21 -92 -58 -38 -61 38 -49 15 -36 59", "90 9 78 -17 -6 90 18 -60 -18 -87 -35 69"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1058;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> paper = {"1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100", "1 2 3 4 5 6 7 8 9 10 11 -100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 726;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> paper = {"-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 -1 100 100 100 100 100 100 100 100 100 100", "-1 100 100 100 100 100 100 100 100 100 100 100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 12089;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> paper = {"0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> paper = {"-38 8"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> paper = {"2 -45 93 1 0 -36 -65 23 76 3 -23 0", "-43 -35 43 28 95 3 -23 -35 4 5 -34 76", "23 76 -34 -64 34 -26 -74 1 0 -26 73 43", "66 -5 2 65 -36 -72 -90 88 -22 -6 3 -58", "-39 99 -37 46 46 46 -98 -2 -16 -76 2 8", "-2 2 -54 -65 99 -23 5 26 67 -45 25 -7", "34 56 23 43 -23 -56 -72 -45 23 -54 0 0", "-53 -43 -61 -36 12 87 34 92 -23 85 -2 -4", "47 -38 3 96 34 29 -12 -15 29 40 50 3", "16 -45 18 30 -20 47 74 93 32 -23 29 53", "23 -23 45 -42 36 -37 -22 -22 -34 45 32 32", "-52 -54 -54 34 -65 -23 67 87 -36 -57 4 3"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1082;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> paper = {"-99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99", "-99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99", "-99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99", "-99 -99 100 -99 -99 -99 -99 100 -99 -99 100 -99", "-99 -99 100 -99 -99 -99 -99 100 -99 -99 100 -99", "-99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99", "-99 -99 100 -99 -99 -99 -99 100 -99 -99 100 -99", "-99 -99 100 -99 -99 -99 -99 100 -99 -99 100 -99", "-99 -99 100 -99 -99 -99 -99 100 -99 -99 100 -99", "-99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99", "-99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99 -99", "-99 -99 100 -99 -99 -99 -99 100 -99 -99 100 -99"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1503;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> paper = {"-38 -22 -52", "91 -76 58"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> paper = {"-1 1 1 1 -1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> paper = {"1 1 -1 -1 1"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> paper = {"-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12", "-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> paper = {"-62 69 -63 72 -77 -25 -31 7 42 -6 -23 -80", "81 -85 -76 30 37 -18 -100 -2 31 97 34 -15", "70 -56 71 97 78 -82 -72 24 15 27 58 -37", "67 -66 77 29 -20 32 -70 -69 -95 3 -16 -97", "-54 -79 92 46 -18 -49 -86 23 15 -91 -79 -99", "84 37 -47 -48 -46 50 -73 -68 -93 -33 -51 -44", "-62 -46 -33 -78 -98 85 75 91 -66 83 77 -73", "-59 -20 37 -23 85 -47 -88 97 28 95 47 91", "2 -14 -63 -21 29 12 -8 25 41 -50 -90 3", "65 10 34 -81 13 54 65 96 -47 -79 -40 71", "-90 -88 8 51 59 27 69 -80 15 84 -96 51", "-96 -15 20 -33 88 -34 55 -88 23 -73 69 57"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1021;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> paper = {"0 -4 -2 -1 4 5 8 -3 -4 -5 0 0", "9 3 7 5 0 1 9 5 0 -1 9 -1", "-9 2 4 7 8 -9 3 2 0 9 6 8", "5 9 0 1 8 2 9 0 8 5 4 3", "0 -9 -2 1 -8 0 9 -8 -3 2 4 8", "0 0 1 -2 8 4 5 6 1 0 6 0", "-8 2 8 3 0 1 9 8 0 7 -1 -3", "-1 0 3 2 8 7 5 7 8 1 0 9", "7 -5 7 1 0 -7 8 0 4 -1 5 0", "-7 0 -1 -3 -7 2 8 0 7 4 8 0", "-8 7 1 0 3 9 2 3 6 -8 9 -2", "0 1 0 9 -1 -9 3 2 7 5 7 2"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 319;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> paper = {"-9 -29 -98 19 -61 52 89 -13 50 -33 -32 -1", "4 -40 28 47 33 97 -51 -26 -6 27 -92 -81", "-27 -8 -10 97 43 -53 73 -65 25 -25 -68 -45", "70 -99 57 -82 61 -88 95 -55 -4 33 80 -43", "-53 -56 -24 24 -52 11 96 -100 -70 -54 55 72", "-30 3 -40 61 27 -62 -67 61 62 61 -86 -7", "-93 26 35 93 -71 -25 -80 -80 84 -91 -73 32", "-16 46 62 -62 2 -19 -22 46 -21 -87 84 21", "-46 -60 -93 18 93 31 11 -19 -62 -25 80 52", "-65 -53 -54 29 77 94 -19 41 31 -61 37 11", "-18 92 -51 39 -91 -95 0 71 -32 17 19 -46", "99 45 -22 -8 36 30 16 -66 -100 -93 -79 15"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 757;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> paper = {"-5"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = -5;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> paper = {"-24 51 -66 -11 86 81 23 -36 -49 -82 -5", "91 -11 -30 -85 61 -43 79 -4 -52 56 38", "-34 47 -28 23 -31 -11 -79 61 93 23 35", "95 -42 -30 30 27 39 97 -5 49 -84 -77", "-52 77 -61 30 3 -36 22 41 32 18 -92", "-88 -36 -31 -47 33 -99 93 11 57 -98 -58", "57 -74 -17 61 -8 -7 36 -66 -48 32 59", "-57 -98 -35 -57 -18 41 4 85 20 -64 39", "16 -85 54 -13 91 -86 35 -88 63 56 48", "16 -75 28 61 -41 -73 43 44 95 76 -27", "-3 -5 70 -71 22 -53 73 -87 1 61 4", "3 61 33 28 50 -76 -46 -17 14 6 -35"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 800;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> paper = {"32 51 1 69 -15 -58 73 87 11 -27 64", "54 -11 84 18 93 31 15 -26 -99 16 20", "11 -38 96 65 -53 30 -8 23 -18 26 38", "74 16 -49 -62 -19 23 35 -84 71 -51 98", "42 28 -23 8 89 83 50 7 30 10 55", "-95 42 -97 -58 -23 -37 -78 -59 -8 13 1", "35 -9 -89 -92 -50 56 66 67 18 20 50", "21 -78 -49 -52 -29 -2 27 49 -84 65 41", "13 47 12 46 86 -13 -33 -35 -63 9 -34", "-19 -85 52 -23 53 -53 32 9 80 -59 -22", "-53 0 40 -18 74 -82 -54 -41 58 -80 24", "94 -25 -81 -97 10 37 57 0 -55 -35 41"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1184;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> paper = {"1 2 3 4 5 4 5 2 1", "5 4 3 2 1 5 4 3 2", "2 8 8 2 1 9 9 1 5", "1 1 1 1 1 1 1 1 1", "9 9 9 9 9 9 9 9 9"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> paper = {"12 23 34 45 56 67 78 89 90 11 66 71", "12 23 34 45 56 67 78 89 90 11 66 71", "12 23 34 45 56 7 78 89 90 11 66 71", "12 23 4 45 56 67 78 89 90 11 66 71", "12 23 34 45 56 67 78 89 90 11 66 7", "1 23 34 45 56 67 78 89 90 11 66 71", "12 23 34 5 56 67 78 89 90 11 66 71", "12 23 34 45 56 67 78 89 90 1 66 71", "12 92 34 45 56 67 78 89 90 11 66 71", "12 23 34 45 56 67 78 89 90 11 66 1", "12 23 34 45 56 67 65 89 90 11 66 71", "12 23 34 45 96 67 75 9 9 13 66 71"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 7353;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> paper = {"-1 -3 16 29 -34 45 -1 -97 -9 18 -56 -85", "-77 92 73 88 -61 57 -3 -57 45 -81 -35 59", "-6 43 39 38 84 23 -59 -21 -26 -94 -11 -68", "36 68 -37 48 -38 68 -75 36 -56 46 30 62", "-97 75 47 48 -60 -74 -93 -88 -84 86 51 -99", "-89 25 48 40 -7 39 59 -56 72 -42 93 -73", "33 -1 -77 84 -88 -6 -89 -29 61 -11 41 1", "45 -21 -34 12 -64 -78 -93 -15 -24 90 8 -30", "0 -78 87 -17 30 48 -15 12 -63 3 97 55", "3 -35 47 -86 64 25 91 67 51 14 10 42", "-72 96 -68 -65 -31 25 -7 4 -10 68 79 -18", "-9 -20 -29 -42 29 37 66 82 5 87 -73 -91"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 1089;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> paper = {"-59 76 3 69 -26 -54 -79 -88 -72 43 -23 -95", "66 44 12 -11 81 -17 -97 -91 -70 32 -17 53", "-9 21 35 -77 -80 97 -80 -82 -2 -19 -40 -87", "40 69 51 -55 61 -7 67 83 86 -59 -34 -27", "13 -66 -80 7 0 95 38 96 -20 -7 93 75", "-45 -80 -20 -67 -13 57 96 -2 69 36 10 -13", "-89 -4 -51 -26 32 47 -28 31 32 61 65 -45", "-37 82 42 40 -38 78 -40 -22 4 -33 10 -69", "-62 -28 -85 -41 -91 61 -84 11 92 -19 8 -5", "16 -25 97 -98 91 78 -61 -100 -56 -4 -28 -70", "-33 -76 16 44 -56 -56 38 -3 -89 93 -86 45", "-33 -76 16 44 -56 -56 38 -3 -89 93 -86 45"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 975;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> paper = {"-10 1 1 1 -10"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> paper = {"-100", "100", "100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> paper = {"-100 -100 -100 100 100 100 -100 -100 -100"};
    FoldThePaper* pObj = new FoldThePaper();
    clock_t start = clock();
    int result = pObj->getValue(paper);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=12178&pm=8813
********************************************************************************
#include <string> 
#include <vector> 
#include <cmath> 
#include <cctype> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <utility> 
#include <numeric> 
#include <complex> 
 
using namespace std; 
 
int stoi(string s) 
{ 
  return atoi(s.c_str()); 
} 
 
string itos(int i) 
{ 
  ostringstream oss; 
  oss << i; 
  return oss.str(); 
} 
 
// note: if given an empty string, will return a vector with an empty 
vector <string> parse(string s, string c) 
{ 
  int len = c.length(), p = -len, np; 
  vector <string> ans; 
   
  do 
    { 
      np = s.find(c, p+len); 
      ans.push_back(s.substr(p+len, np - p - len)); 
      p = np; 
    } 
  while (p != string::npos); 
 
  return ans; 
} 
 
vector <int> parseint(string s, string c) 
{ 
  vector <int> ans; 
  vector <string> tmp = parse(s, c); 
  for (int i = 0; i < tmp.size(); i++) 
    if (tmp[i] != "") 
      ans.push_back(stoi(tmp[i])); 
  return ans; 
} 
 
set < vector <int> > S; 
 
void gen(vector < vector <int> > cursets) 
{ 
  int n = cursets.size(); 
  for (int i = 0; i < n; i++) 
    { 
      vector <int> vi = cursets[i]; 
      sort(vi.begin(), vi.end()); 
      S.insert(vi); 
    } 
  for (int i = 1; i < n; i++) 
    { 
      vector < vector <int> > newsets; 
      for (int j = 0; j < n; j++) 
  { 
    vector <int> vi; 
    if (i+j < n) 
      vi.insert(vi.begin(), cursets[i+j].begin(), cursets[i+j].end()); 
    if (i-j-1 >= 0) 
      vi.insert(vi.begin(), cursets[i-j-1].begin(), cursets[i-j-1].end()); 
    if (vi.size()) 
      newsets.push_back(vi); 
  } 
      gen(newsets); 
    } 
} 
 
class FoldThePaper { 
  public: 
  int getValue(vector <string> paper) { 
     
    int X = paper.size(); 
    vector < vector <int> > vvi; 
    for (int i = 0; i < X; i++) 
      vvi.push_back(parseint(paper[i], " ")); 
    int Y = vvi[0].size(); 
    vector < vector <int> > cursets; 
    for (int i = 0; i < X; i++) 
      cursets.push_back(vector <int> (1, i)); 
    gen(cursets); 
    vector < vector <int> > rowsets(S.begin(), S.end()); 
    cout << rowsets.size() << endl; 
    /* 
    for (int i = 0; i < rowsets.size(); i++) { 
      for (int j = 0; j < rowsets[i].size(); j++) 
        cout << rowsets[i][j] << " "; 
      cout << endl; 
    } 
    */ 
    S.clear(); cursets.clear(); 
    for (int i = 0; i < Y; i++) 
      cursets.push_back(vector <int> (1, i)); 
    gen(cursets); 
    vector < vector <int> > colsets(S.begin(), S.end()); 
    cout << colsets.size() << endl; 
    int ans = -100; 
    for (int i = 0; i < rowsets.size(); i++) 
      for (int j = 0; j < colsets.size(); j++) { 
        int tot = 0; 
        for (int ii = 0; ii < rowsets[i].size(); ii++) 
    for (int jj = 0; jj < colsets[j].size(); jj++) 
      tot += vvi[rowsets[i][ii]][colsets[j][jj]]; 
        ans >?= tot; 
      } 
    return ans; 
     
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/