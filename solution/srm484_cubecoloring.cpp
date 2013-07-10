/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11130
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

class CubeColoring {
public:
    long theCount(vector<string> colors);
};

long CubeColoring::theCount(vector<string> colors) {
    long ret;
    return ret;
}


int test0() {
    vector<string> colors = {"Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> colors = {"YNNNNNNN", "NYNNNNNN", "NNYNNNNN", "NNNYNNNN", "NNNNYNNN", "NNNNNYNN", "NNNNNNYN", "NNNNNNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> colors = {"YNNYN", "YYYYY", "NYYNY", "YNYYN", "YNNYY", "YNNYY", "NNNYY", "NYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 250;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> colors = {"YNNYN", "YYYYY", "NNNNN", "YNYYN", "YNNYY", "YNNYY", "NNNYY", "NYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> colors = {"YNNYNYYYYYNN", "NNNYNYYNYNNY", "YYNNYYNNNYYN", "YYYYYNNYYYNN", "NNNYYYNNYNYN", "YYYNYYYYNYNN", "NNNNNNYYNYYN", "NNYNYYNNYNYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 611480;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> colors = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 751325186912;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> colors = {"YY", "YY", "YY", "YY", "YY", "YY", "YY", "YY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> colors = {"Y", "N", "Y", "Y", "Y", "Y", "Y", "Y"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> colors = {"NN", "YN", "NN", "YY", "NY", "YN", "NN", "NY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> colors = {"NYN", "NNY", "NNN", "YYY", "NNY", "YYN", "NNY", "NNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> colors = {"NNYN", "NNYY", "NNNY", "NNNN", "YNYY", "NNNY", "NYYY", "NYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> colors = {"YNNNY", "YNNYY", "NYNYN", "NNNNY", "NYYNN", "YNNNY", "NNNYN", "NYNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> colors = {"YNYNYY", "YYYYYY", "YYYYNY", "YYYYNY", "YYYNYY", "YYYYYN", "NNNYNY", "YYYYNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 13837;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> colors = {"NYNYYYN", "YYYNYYN", "NNYNNYN", "NYNYNYY", "NNNYNNY", "NNYNNNY", "NNNYNYN", "YNYNNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 663;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> colors = {"NNNNNNYN", "NNYNNYNY", "NNNNYNNY", "NYNNNNNN", "NYNYNNNN", "NYNNNNYN", "NNNNYYYN", "NNNNNYNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> colors = {"NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNY", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> colors = {"YYYYYNYYYN", "NNYNNYYNYY", "NNNNYYNNNN", "YNNYNNNNYY", "YYNYNYYYNN", "NYNNNYYNNN", "YYNYYYNYYY", "YYYYYNNYNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 81534;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> colors = {"YNYYYNYYYYY", "YNYYYYYYYYY", "YYYNNNYYYYY", "YYYNYYYYYNY", "YYNYYNYYNYY", "YYYNYYNYYYN", "YYNYYYYYNYN", "YYYYYYNNYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 9893807;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> colors = {"YYYYNYNNNNNY", "YNNNYYNYYYYN", "NYNYNNNNNYYY", "NYYYYNNYNYYY", "YYYNYYNYYNNN", "YYNYYYNYNNNY", "NYYNNYNNNYNN", "YNYNYNNNYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 801001;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> colors = {"NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNYN", "YNNNNNNNNNNNN", "NNNNNNNNNNNYN", "NNNNNNNNNNNNN", "NYNNNYNNNYNNN", "NNYNNNNNNNYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> colors = {"YNYYNYYYYYYYYY", "YYYYYYYYNNYYYY", "YNYNYYYYYYYNYY", "YYYYYNNYYYYYYY", "YYNYYYYYYYYYNN", "YYYYYYYYYYNYYN", "YNYYYYNYYYYYNN", "YNNNNNYYYYYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 94347024;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> colors = {"NNYYYNNNNYNNYNN", "NYNNYYNNNNNNNYY", "NNNNYNNYNYYNNNY", "YNNNNYNYYNNYNYN", "NNYYYNNNYYNNYNY", "YNYNYYYNNNNNNYY", "YYYNYNYYNNNYNNN", "YYNYYNNYYNYNNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 877029;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> colors = {"NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNY", "NNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYN", "NYNNNNNNNNNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> colors = {"NYYYYNYYYYYYNYNYN", "YYYYYYYNYYYYYYYYY", "NYYNYYYYNYNNNYNNY", "YNYYYYNNYNNYNYNYY", "NYNYYNYNYYYNYYNNN", "YYYYYYYYYYNYNYYYY", "YYYYYNYYYNYYYYYYN", "NYYYYNYNYNYYYNYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 189758917;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> colors = {"YYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYNYY", "YYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYNNYYYY", "YYNYYYYYYYYNYYYYYY", "YNYYYNYYYYNYYYYYYY", "YYNYNNYYNNYYYYYNYY", "YYYYNNYYYYYYYYYYYN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1711440077;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> colors = {"YNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNN", "NNNNNNNNNYNYNNNNNNN", "NNNYNNNNNYNNNNNNYNN", "NNNNNNNNNYNNNNNNNNN", "NNNNYYNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNYNYN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> colors = {"YYYYYNYYYYNYYNYYYNYY", "YNNNYYNYNYYNYNNYNNYN", "YYNNYNYNYYYNNYYYYNYN", "YYNYYNYNYYYNNNYNNNNN", "NNYYYYYYNYYYNYYYYYYN", "NYNNYYNNNNYYYNNYYNNY", "NYYYNNYNYYNYYYYYYYNN", "NYNYYYYNYYYYYYYYYNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 194224270;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> colors = {"NNNYNYYYNNYYYNYYYNNYY", "YYYYYNYNYNYYNYNYNYYYY", "YYNNYYNNYNYNYNNYYNYYN", "NNNNYYNYYNNYNYYYNNYNY", "YNYYNYNNYYNNYYYNYYNYY", "NNNNYYYNNNYNYYNYNYYNY", "NNNYYYNNNNNYNNYYNNNYN", "YYYYNYYNNNYYYYNYYYNYN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 144936659;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> colors = {"NNYNYNNYYYNNYYNNNNNNYN", "YYYYYYNNNYYYNNYNNNYNNN", "NNYYNYNYYNNNNNNYNYNNNY", "NYNNYNYNYNNYYNNYNNNNYN", "NNYYYNNNNNNNYYYYNYNYYY", "NNYYYNNNNNYNNNYYYNYYNN", "NNNNYYNYYYNYYNNNYNYNNY", "NNNNYYYNYYYNNNYNNYYNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 31337453;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> colors = {"YYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 42052500504;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> colors = {"YNNYYNNNYYYYYYYNNNYNNYNY", "YYNNYYNYYYYYNYYNYNYNYYYY", "NNNNNYYYNYYYYNYYYNNYNNYN", "NNNYNNYNYNNNNNNNNYNYYNYN", "NNNYYNNYNYYYYYYNYYYYNYNY", "YYYNYYNNNYYYNYYNYNYNYYYY", "YNNYYYNNYYNYYYYYYYNNNYYN", "YNNYYYNYNYYYYYNYYYYNNYYN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 628754518;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> colors = {"NNNNNNNNNNNNNYNNNNNNYNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNYNNNNN", "YNNNNNNNNNNNYNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> colors = {"YNYNYYYNYNNYNNNNNYNNYNNNNN", "YYNNYNNYNNNYYNNYYYNYYYYYNY", "NNNNNNYNYYNYYNYNYNNYNNYNYN", "NYYNYYNNNNNNYNYNYYNNYYYNYY", "YNNYYNYNNNYYNYNYNNYYYNYNYY", "YYNNNYNYNYYYNNNNNYYNYYNNNY", "YNNNYNYYYYYYNYYNNNYYNNNNYY", "YYNNNYYYNNNYYYNNYYNYNNNNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 302567702;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> colors = {"YYNYNYNNYNNYYYYNYYNYNYNYYYN", "YNYYNNYNNNYYYNYNYNYYNNYNNNN", "YNNYYNNNYNNNYYYNYYNNNYYYNYN", "NYNNNYNYNYNYYNNNYYNNNYNNYYN", "YNNNNNYYYNYNNYYNNYNYNYNNYNY", "NYYNYNYYNNNNNNNYNYYNNNNNNNN", "NYYYNNNNNNNYNNYYNNNNNNNNYYY", "YYNNNYNNNNYNNYNNNYNYYYYNYYN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 178176474;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> colors = {"YYYNNYYNYNYNYNNNYNNNNYYNNNNY", "YNYNNNNNNYNNNNNYNNNNYYYYYNNN", "NNYNNYNNYYYNYNYYNYNYYYNYNYNN", "YNNNYNYNYNYYNNNYYYYYNYYYYNYN", "NNNNNNNYNYYNNYYNNNNNYNNNYNYN", "NNYNYNNYYNNNYNNNYYNYNYNNNNYY", "YNNYYYNNNYNNNYYNYNNNYNNNNNYY", "NYYNNNYYNYNYNYYNYYNNNNNYNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 176183563;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> colors = {"YNNNNNNYNNNNNYNNNNNNNNNYNYNYN", "YNYYNNNNYYNNNYNNNNNNNNNYYNNYY", "NNNNYNNNYYYNNYNNNNNNYYNNNNNNY", "NYNNNNNYNNYYYNNNNNNNNNNNNNNYY", "YNYNNNNYNNNNNNYYNNNNNNYNNYYNY", "NYNNNYNNNNYYYNNNNNNYNYNNNNNNY", "NNNNYNYNNYYNNNYNNNYNYNNYNNNNY", "YYNNYNNYNNYYYYYNNYNYYNNNNYNYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 19209067;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> colors = {"NYYYNNNNYNNNNNNYNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNYNNNNNNNNNNYNYYYNNNNNNNNY", "NNNNNNNNNNYYNNYNNYNNYYNYNNNNNN", "NNYYNYNNNNNNNNYYNNNNNNNYNNNYNY", "NNNYNNYNNYYNNNYNNYNYNNNNNNYNNY", "YNNYNNYNYNNNYNNNNNNNNNNNNYNYNN", "NNYNNNNNNNNNNYNNYNNNNNNNNNYYNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1029895;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> colors = {"YYYYYYYYYNYYYNNNYYYYYYNYYYNYYYY", "YYYNNYYYNNYNNNYYYYNYNYYNYYNNYNN", "NYYNNYYYYNYYYYYYYYNYYYNYNNNYYYY", "NYYYNYYYNYYNYYNYYYNNYYNYYYYYYNN", "YNYYYNNYYYYYNYNYNYYYYYNYYYYNYYY", "YNNNYYYNYYNNYYYNYYYNNNNNNNYNYYY", "YYYYYYYYNYYYYYYNYYYYYYNNNYYYYYY", "YYYYNNNYYNYYYYYNYYYNYYNNNYNYNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 23930287797;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> colors = {"NNNNYYNNYNNNNNNYNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNYNYNNNNNNNYNNNNN", "YNNNNYNNNYYYNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNYNNNNNNYNNYNNNNNNNYNN", "NNNNNNNNNNNYNNNNNNNNYNYYNNNYNNNY", "NNYNNNNNNNYNNNNNNNNNNNNYNNNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> colors = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> colors = {"NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> colors = {"YNYYYNYNYNNNYNNNYNNNYYNNYNYNNNYN", "YNNNYYNNYYYNYNNNYYYYYNNYNYYNNYYY", "YNNNYYNNNYYYNYNYNNYNYNYNYYYYYYYN", "YNYNYYYYYNNNNYNYYNYNYYNYYYYYNNNY", "NYNYYYNYNYNYYYNYYYYNNYYYYNNNNYNN", "NNYYYNYYYNYYYYNNYYNNYYNYNNYNNNNY", "YNYNNNYNYNYYYNYYNNYYNNYNNYNYNYYY", "NNYYNNNNNYNNYNNYYNNYYNNYNYNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2816095005;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> colors = {"YNYNYYNYYNNNNNYYYYNNNNNNYNNNYNYN", "NYYNNYYNNYNNYNYNYNNYNNNYNNYNYYYN", "YYNNNNYNYNYNNNNYYYYNYYYNNNNNNNNN", "NYNYYNYNYYNNYNNYNNNNYNNNNYYNNYYY", "NYNNYYNNNNNYYYNYYYNYYNNNYYYYNNNN", "YYYNYNYYYNYYNNYNYYNYYYYNNYYNNYYY", "YNYNNNNNYYNNNYNYYYNYYYNNNYNNNYYY", "NNNYYNNNYNYNYNNYNYYNNNNNYNNYNYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1283839484;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> colors = {"NYNNNNNYYNYYNNNYYYYNNYNYYYNYYNNN", "NNYNYNNNNYNNYNYNNYYYYYNNNYYNYNNY", "NYYYNNNNNNNNYYNYNYYYNNYYNNYNNYYN", "YNNYNNYNYNNNNNNYNYYNNNNYYNNNYNYY", "NYYNYNNNYNNYYYNYYYNYYYYYYNYYYNNN", "YNYYNYNYNNNNNNYYYNNYNYYYYNYYYYYY", "NNNNNYNYYYYNYNYYNYYNYNYNYNYYYYYN", "YNYNYNNNYNYNYNYNNNYNNNYYNYYNNYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2189128082;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> colors = {"NNYNNNNNNYYNYNYYNYYNNYYYYYYYYYNN", "YNYNNYNYNYYYNNYYNYYYNYYYNNNYYYYN", "YYNYNNNNNNNYNYNYNYNYYNNYYYNNYNNN", "YNYYYNYYNNYYYYYNNNYNYYNNYNNNNYYY", "NYYYYNYYNYYYYYNNYNNNNNYNYYNNNYNN", "NYNYNYNYNYNYNNNNYYNNYYYYYYNYYYNN", "NNYNNNYYNYYYNNYYYNNYNNNNYNYYYNNY", "NNYYNYNYNNNYNNYYYYNYYYYNYNNYNNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3378504565;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> colors = {"YNYNYNYNNYYYNNNYNYNNNYNNNNYYNNNN", "YNYYNNYYNNYNYYYYYYYYNNNNNNNNYYYN", "YNYYYNYNNNYYYNYYYNNNNNYYYNYYYYNY", "NYNNNYYYYYNNNNNNYNYNYYYNNNNYYNNN", "YNNNYYYYYNYNNYNYNNNNNNYYNYNNYYNN", "NNNYYYNNNNYNNYYYYYYNYNYYNNNYYNYN", "NYNNNYNYYYNYNYNYNNNNYNYNYYYNNNNY", "YNYNYYNYYNYNNYYYYYNYNNYYNYYNYNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2084071661;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> colors = {"NYYNYYNYYNNYYNYNNNYYNYNYYNNYYYYN", "NYNNNNYYYYYNNNNNNYYYNYNNYYNYNYNY", "YYYYNNNYNNNYYNNYNYYYYNYYNYNNYYYY", "YYNYNNYYYYNYYNNYYNYYYNYNYNNNNNYY", "NNYNNNYYNNNNYYNYNNNNNYYNNNNNNYNY", "NNYNYYNNNNYYYYNNYNYNNNNNNNYNNYYN", "YNYNYNYNNNYNNNNNNNYNNYYNYYNYNNYN", "YYNYYYNYYYNYNYNYNYYNNNNYNNNNNNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1404082949;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> colors = {"YNNYNYNYYYYYYNYYYNNNYNYYNYNNYYNY", "YYNYYNYYNYNNYYYYNNNNYYNNNNNNYNNN", "YNNNNYYNNYNYNYYNNNYNYYYNNNNYNYYY", "YNNYYYYYNYYNNYYYNYNYNYNYNYNNNYYN", "YYYYYNYYYNNYYYYNYYYYNNNYNNNYNYNN", "YNYNNNNNNYYNNYYYNYNNNNYNNNYNNNYY", "YYYNNNYNYYNYNYYNYNYNNYYYNYNNYNYN", "NYNNNYYYYNNYYNYNNYYYNNYNYYYYYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3828760674;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> colors = {"YNYYYYNNYYYNYNYYYNYYNNNYYYYYYNYN", "YYYNNNNYNNNYNYNNNYNYYYYNYYYYNNYY", "YYYYNNNYNYYNNYYNYNYNNYYNNYYYYNYN", "YNNNYYNYYYYYNYYYNNYYYYNNNYNNNNNN", "YYYNNYNNNNNYYNYYYYNYNNNNYYYNYNYY", "YYNYYNNYNNNYYNNYNNNYNYYNNNNYNYNY", "NYYNNNYYNYNYYNYYNNYYYYYNYYYYYYNN", "YNYNYYYYYYNNYYNYYNNYYNYYYYNYNYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 6934235839;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> colors = {"YNNNNYNNNYNYYYYNNYNNYNNYYYNNYNNN", "NYYYYNYNNNNNYNNYYYNNYYYYYYYYNYNY", "NYNYYYYYYYNYNYYYNNNYYNYNNNYYYYNN", "YNNNNYYYNYYNYNNYNNNYNNNNNYNYNNYN", "NNYYNYYYNYNNYYNYNYNYYNYNNNNNYNYN", "YYNYYYYYNYYNYYNYNYNNNYNYNYNNNYNN", "NNNYYNYNYYYYYNNNYYYYYYNYYYNNNYYN", "YYNNNNYYYNNYYNYYYYYNYYNYYNNNYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3764416912;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> colors = {"NNYYNYYYYNYNNYYYNNYNNNYYNYYNYNNN", "YYYNNYYNNNYYYYNNNNYNYNYNNNYNYNYN", "NNNYNNNYYYYYNYYNYYNYNNYYYYNYYYNN", "NNYYYNYNNYNYNYNNNNNNNNYNYYNYYYYN", "YYNNYNYYNNYNYYNYNYNYYYYYNNNNNNYY", "NNYNYYNNNYYYYYNYYNNYNNYYNYYYNYNY", "YNNNNNNYNNYNYYYNNYNYYYNYNYNYYYNY", "YYYNYNNYNNYYNYNNNYNNYNNYYYYYYNYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3582898496;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> colors = {"YNYYYYNYYNYYNYYNYNYNYNYYYNYNNNYY", "YYYYYNNYNYNNNYYYNNYYYNNYNNNNYYYN", "NYNNNYYNYYNNNYYYNYNNNNYYNYNNNYYY", "NNYNNYNYYNNYYNNYYYNNYYYYNNNYYNNN", "YYNYYYYYYNNNYNNYNYYNNNNNNYNYNYYN", "NYYYNNYYNNNYYYNNNNYNNNNYNNYNYYYN", "YYYNYYNYNYYYYNNNYYYNNYNNNNYYNNNY", "NYYNYNYNNNYNYYYNNNYNYYYYNNYNYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3665974732;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> colors = {"NYYYYYNYYNNNNYYYNNNYYYNNYNNNNYNN", "YNNYYYNNYNYNNYYYNYYYYYYYNYNYYNNN", "NNYNYYYYYYNNYNNYYNYNYYNYYNNYNNYY", "NNNYNYNNNNNNYYYNNNNYYYNYYYYYNYNY", "NYYNNYYNNNYNNNNYYNNYNYYYYYNNNNNY", "NYYYNNNNNYYNYNYNYYYNNYYNYYNNYNNY", "YNNYNYNNYYNYNYNYNNNNNYNNNYYYNNYY", "YYYNNYYNNNYNYYNYYNYYYNNYYNYYYNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2932356716;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> colors = {"YYNNYNNYNNYYYYYYNYYNYYNNNYNNNYYY", "NYYNNYYNYYNNNNYNYYNNNNNNYYYNNYNN", "YYNYYYYYYYNNYNNYYYNYYNNYNNNYNYNY", "YYYYYNYNNYNYYNYYYNYNYYYNYNNYNNYN", "YYYYNYYYYNYYYNNNNNNYNYYYNYNNYNYY", "YYYYNNYNNYNNNNNNYYNYYYNNYYNYYYNN", "YYNYNYNNYYNNYNYYNNYNYYYYNNNYNYYY", "YYYNNNYYYYYYNYNYNNNNYNYNYNNYYYYN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 5635654222;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> colors = {"YNYNYYYYNYYYYNYYYNYNYNYYYYYNYNYN", "YYYNYNNNYYYNNNNYYYYNNNNYNYYNYYYN", "YNNNYNYNYYYNYNYNNNYYNNNNNNYYYYNN", "YNNYYNYNYNNYYYNNYYYNYYYNNYYNNNYY", "NYYNNYNYYYNNNNYNNNNYYNYNNYNYYYNN", "NNNNNYYYYYNNNYYNYNNYYYYNYNNNYYNY", "NNYNYYYYYYYNYYNYNNNNYYYYYYYYNYNN", "NYNYNNNYNNYNYNYYNYYNYYYNYNYYYYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 5165476318;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> colors = {"NNYYNNNNNYNYNNNYNNNNNNYYYYNYNNNN", "NNNYYYNYNYYYNNYYYYNNNNNYYNNYNYNN", "NYNNNYNYYNYYYYYYNYYNYYYNNYNYNNYN", "YNNNYYYYYYNNNYYYYYYNNNYYNNNNYYNN", "NNYYNNYNNNYNNNYNYYYNNYNNYYYYYYYN", "NNYYYYNNNNNNNNNYNYNYYNYNNYYYNYNY", "YNNYYYNNYNYYYNYNNYYNNNYYNYNNNNNN", "NNNNNYYYYYYNNNNNNNYYNYNYNNYNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1060019747;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> colors = {"NYNNNNNYNYYYYNNYYNYYNYYYNNYYYNNN", "YYYYYYYNNNNYNYNYYYYYNNNNYNNNNYNN", "NNNNYNYYYYYYNNNNYYYNYNYNYNNYYYNY", "NYNYNYYYYNNYNNNYNYYYNYNNNNNYNYNY", "NYNNNNNNYNNYYNNYYNNYNNYNYYNNYYYN", "YNYNYYNYYNYNNNNNNNYYYYYYYYYYNNYY", "NYYYNNYNNNNNNYYNNNYNYYNNYYYNNYNN", "YYNYNNYNNYNNNNNNYNYYNNNYNYNYNYNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1734775354;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> colors = {"NNYNNYYNYNNNNNNNNNYYNNNYNNNYNYYY", "YNYNYYNNNYYNYYYYNNNNNNNNNYNYNYNY", "NYYYYYYNYNYNYYNNNYNNNYYNYYNYYNNN", "YYNNYNYYYNNNNYYYNYYYNYYNNNNNNNYN", "NYYYNNNYYYNNYNNNYYYNNYYYYYYYNNYY", "NNYNNYNYYNYYNYYNNNNNYNNNYNNNYYYN", "NNYYNYYYYNNNYNYNYNYNYNNYYNNNNNNN", "NNNNYYNYYNNYNYNYYYNYYYNNNYNNYYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 1386693232;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> colors = {"YYYYYNYNNYYNYYNNYNNYYNYYNNYYNNNY", "NNNYNYYYYYYNNNNNNYNYNYNYYYYNNNNY", "NYNNNNNNNNYNYYNNYNYNNYYYNNYYYNNY", "NNNNYYNYYYYYYYNYYNNNNYYYNYNNYNNY", "NYYNNNYYNYNYYNNYNNNYYYNYYYYNYYNY", "YNNYYYYNNNNYNYYNYYYYNNNNNNNYNNYY", "NYNYNYYYNYNNNNYYNNNNYYNYYNNNYNYY", "NYNNYYNNNYNNYNNNYNYYNNYNNYYYYYNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2416999214;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> colors = {"NNYNNNYYNYYNYNYNNYNNNNYNNNYYNYYN", "YYNYNYNNYYYYNNYYNNYYNYYNNNYYNYYN", "NNNNYYNYNYYNNNYYYNYNYNNNYNNNYNYN", "YNNYYYYYNYYYYYYYNNYYYYYNYNYNYYNN", "NYYNNYNYNNYYYNYNNNNYNYYNYNYNNNYY", "NYNYNYYNYYYYNYYYYNNYNYYNYNNNNNNN", "YYYNYNNYYYNYNNNYYYYYNNYNYNYYNYYY", "YYYNNNNYNYYYNYYNYNNNYYYNYYNNNNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3158030432;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> colors = {"NNNYYYNNNYNNNYYNYNNNNNNYYYYNNYNY", "NYNYYYYYYYYYYNYNYNNYNYNNYNYNNYNY", "NYNYNYYNYNNYYNYYNYNNNNNNNNYYNYNY", "NNNYNYNNNYYYNYNNNYYYYNYNNYYNYNYY", "NNNYYNYYYNYYYYNYNNYYYYYYYYYNNNNN", "NYYYNNYYNYYYNYYYNYNNYYYYYYNNYYNY", "NYNNYYNYNYNYNNYYNYNYNNNYNNYNNNNN", "YYNNYNNNNYNYYNNYYNYYYNNYYYYYNYYN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3164119263;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> colors = {"YYYNNNYYNNYNYYNYNYYNNNNNYYYNYNYN", "YYYYYNNYNNNYYYNYYNYYYNNNYYNYNNYY", "NYYNNYNNNNNYNYYNNNNNYNNNNYYNYNYN", "YNNNNYYYYNYNYYYYYNNYNNYYNNNNYNYY", "YNNNNNNYNNNYYYYYNNNYNNYNNNYYYYNY", "NYNNYYYYYYYYYNYYYYNNNNYNYNYYYYYN", "NYYYYNYNNYYNNYNNYYNYNYYNYNYYNNYY", "YNYNYYYYNYYNNNNNYNYNYYNNNNYYYNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3314144023;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> colors = {"YYYYYNNYYYYNYYYYYYYYYYNNYNNYNYNN", "YNNNYYYNNNNYYNNNYNNNYYNYNNYNNNNY", "YYNYYNNYNNNYNYYNYNNYYNYNNNYNYNNN", "NNYYNYNNYYNNYNNNYNNNYYYYYYYNYNNN", "NNYYYNNNYYYNNYNNYNNNYYNNYYNYNNNY", "NYNYNNNNYYNYNNYNNNYYNYNNNNYYNNNN", "NYNYYYNYYNNYNYYNNNNNNYYYYNYYYYNY", "YNNNNNYNNYYNNNNNNYNNYNNNYNNNYNNN"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 845409619;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> colors = {"YYYYNYNYNNNNNYNYYNNYNYNNYNYYNNNY", "YNYNYNNNNNYNNNNYNYNNYNYYYYNNNNNN", "YNNYYNYYNYNYYYNNNYNYYYYYYYNNNNNN", "YYNNYYNNNNYNYNNYYYNYYYYNNYNNYNYY", "NNNYYYYYYNYNYNYNNYYYNYNNYYYYYYNN", "YYNNNNYYYNYNYYNYNNNYNNYNYYNYYYNN", "NNNNYYYYYYYNNNYNYNNNYNNNNNYNYYNN", "YNNNYNYNNYYYYYYYYNYNNYNNNNYYNNNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2062416943;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> colors = {"NYNNNYYYYYNYYNYYYNNNNNNYYYYYYYNN", "NYNYYNNYYNNYNYYNYNYYNNYNYNNYNYYY", "NYYNNNYNYNNNNYYYNNYYYYYYNYNYYYYY", "NNYNYNYNYNYNYNNNNYNNNNNYNYYYNNYN", "YYYYYNYNYNNYYNYNYNNYNNNYNNNNNNYN", "NYYYNYNYNNYNNNNYNNNYYNNNYNNYYYNN", "NYYNNNNYNYYNNYNYNYNNYNYYNYYYYNNY", "NYYYNYNYYYYNYNNYYNYYYNYYNNYNYNYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 2746115779;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> colors = {"YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 705099526200;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> colors = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 683110977182;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> colors = {"YNNYNYYYYYNN", "NNNYNYYNYNNY", "YYNNYYNNNYYN", "YYYYYNNYYYNN", "NNNYYYNNYNYN", "YYYNYYYYNYNN", "NNNNNNYYNYYN", "NNYNYYNNYNYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 611480;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> colors = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 751325186912;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> colors = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 436915942710;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> colors = {"Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> colors = {"YNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNY", "YYNYNYNYNYNYNYNYYNYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNY", "YNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYY", "YNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNN", "YNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNN", "YNYNYNYNYNYNYNYYNYNYNYNYNYNYNNNN", "YNYNYNYNYNYNYNYYNYNYNYNYNYNYNYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 3363114484;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> colors = {"YNYYNYNNYNYNYNYNYNYNYNNY", "YNYYNYNNYNYNYNYNYNYNYNNY", "YNYYNYNNYNYNYNYNYNYNYNNY", "YNYYNYNNYNYNYNYNYNYNYNNY", "YNYYNYNNYNYNYNYNYNYNYNNY", "YNYYNYNYNYNYNYNYNYNYNYNN", "YNYYNYNYNYNYNYNYNYNYNYNN", "YNYNYYNYNYNYNYNYNYNYNYNY"};
    CubeColoring* pObj = new CubeColoring();
    clock_t start = clock();
    long result = pObj->theCount(colors);
    clock_t end = clock();
    delete pObj;
    long expected = 225050749;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22899758&rd=14237&pm=11130
********************************************************************************
#include <cstdlib>  
#include <cctype>  
#include <cstring>  
#include <cstdio>  
#include <cmath>  
#include <algorithm>  
#include <vector>  
#include <string>  
#include <iostream>  
#include <sstream>  
#include <map>  
#include <set>  
#include <queue>  
#include <stack>  
using namespace std; 
 
bool bd[8][32]; 
long long to[8]; 
int ff[]={1,3,4,6}; 
bool ls[50]; 
class CubeColoring 
{ 
        public: 
        long long theCount(vector <string> colors) 
        { 
            int n=colors[0].size(); 
            int i,j,k,l,m; 
            for(i=0;i<8;i++) 
            { 
        to[i]=0; 
        for(j=0;j<n;j++) 
        { 
          if(colors[i][j]=='Y') 
          { 
            bd[i][j]=true; 
            to[i]++; 
          } 
          else 
            bd[i][j]=false; 
        } 
      } 
      long long ans=0; 
      for(i=0;i<n;i++) 
        for(j=0;j<n;j++) 
          for(k=0;k<n;k++) 
            for(l=0;l<n;l++) 
            { 
              if(bd[0][i] && bd[2][j] && bd[5][k] && bd[7][l]) 
              { 
                 
                for(m=0;m<4;m++) 
                { 
                  memset(ls,true,sizeof(ls)); 
                  if(bd[ff[m]][i] && ls[i] && m!=3) 
                  { 
                    to[ff[m]]--; 
                    ls[i]=false; 
                  } 
                  if(bd[ff[m]][j] && ls[j] && m!=2) 
                  { 
                    to[ff[m]]--; 
                    ls[j]=false; 
                  } 
                  if(bd[ff[m]][k] && ls[k] && m!=1) 
                  { 
                    to[ff[m]]--; 
                    ls[k]=false; 
                  } 
                  if(bd[ff[m]][l] && ls[l] && m!=0) 
                  { 
                    to[ff[m]]--; 
                    ls[l]=false; 
                  } 
                } 
                while(to[1]<0 ||to[3]<0 ||to[4]<0 ||to[6]<0)printf("re");; 
                ans+=to[1]*to[3]*to[4]*to[6]; 
                for(m=0;m<4;m++) 
                { 
                  memset(ls,true,sizeof(ls)); 
                  if(bd[ff[m]][i] && ls[i]&& m!=3) 
                  { 
                    to[ff[m]]++; 
                    ls[i]=false; 
                  } 
                  if(bd[ff[m]][j] && ls[j]&& m!=2) 
                  { 
                    to[ff[m]]++; 
                    ls[j]=false; 
                  } 
                  if(bd[ff[m]][k] && ls[k]&& m!=1) 
                  { 
                    to[ff[m]]++; 
                    ls[k]=false; 
                  } 
                  if(bd[ff[m]][l] && ls[l]&& m!=0) 
                  { 
                    to[ff[m]]++; 
                    ls[l]=false; 
                  } 
                } 
              } 
            } 
          return ans; 
        } 
         
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/