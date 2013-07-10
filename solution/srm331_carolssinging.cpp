/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7280
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

class CarolsSinging {
public:
    int choose(vector<string> lyrics);
};

int CarolsSinging::choose(vector<string> lyrics) {
    int ret;
    return ret;
}


int test0() {
    vector<string> lyrics = {"YN", "NY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YN", "NY", "YN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YN", "YY", "YN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> lyrics = {"Y"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YNN", "YNY", "YNY", "NYY", "NYY", "NYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> lyrics = {"NYYYY", "YNNYN", "NNNYY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> lyrics = {"NYNNNYNYY", "YNNYNNYNY", "YNYYNYNNN", "YYNNYYYNY", "NNYYYNYYY", "YNNYNNNYY", "YYNNYNYNN", "NYYYNNYYY", "NYYNYNYNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YNYYYYY", "NNNNNNY", "YYNYNNY", "YNYYYNN", "YNNNNYN", "NNYYYYN", "YYYNYNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> lyrics = {"YNYNYYYYY", "YYNYNYNYY", "YYNNYYYNY", "NNYNNNNYN", "NYNYYYYNN", "YYYNYNNYN", "YNYNYNNNY", "YYYYYYNYY", "YYYNYNYYY", "NYNYNYNYN", "NYNYNNYYY", "NYYYNNNYY", "YYNNNYYYY", "NYYNYNYYY", "NNNYNYYYY", "YYNNYNYNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"NYNYY", "NYNYY", "YNYYY", "NYNNY", "YYYYY", "NNYYY", "YYNYN", "YNNYN", "NYYNN", "NYYNY", "YYNYN", "NNYYN", "YYNYY", "NYYYN", "YYNYY", "NYNNN", "YYYNN", "YNYYY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> lyrics = {"YY", "YN", "YY", "NY", "YY", "YY", "YN", "NY", "YY", "YN", "NY", "YN", "YY", "NY", "YY", "YN", "YN", "NY", "YY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YNNYYY", "YYNYYY", "YNNYYN", "NYYNNN", "YYYNNN", "YYYNNY", "NYYYYY", "NYNYYY", "NNNNYY", "YYYYYY", "YNNNNN", "YYYYNY", "YYNNNN", "NNYYYN", "NNNNYY", "YYYNNN", "NYNNYN", "YNNYYN", "YYNNNY", "NYYNNY", "NNYYYN", "YNYYYN", "NNNYNY", "YYYYNN", "YYNYNN", "NYYNYY", "YYNYYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"NYYY", "YYYY", "YNYY", "YNYY", "NYNY", "NYNY", "NNYY", "NYNN", "YNNY", "NNYN", "YYNN", "NYYY", "YNYY", "NYYY", "NYNN", "YYYN", "YYNN", "NNYY", "YYNN", "NYYN", "NYYN", "NYYY", "YYYY", "YYYN", "YNYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> lyrics = {"YNYNYNYNYY", "YNYNYYYYNN", "NNNYYYYNYN", "YNYYYYYNNN", "YNNYYNNYYN", "YNYYNYNNYN", "NYNNYNNYYY", "NYNYNYNNYY", "NYYYYYYNNY", "YYYNYNYNNY", "YYYYNYYYYY", "YYNNNYYNNY", "YYYNYYYYNN", "YNNYYYYYYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> lyrics = {"NYNYYNYN", "YYYYNNYY", "NYYNYNYN", "NNNNNYNY", "YNNYYNYY", "YNYYYYYN", "YNYYYNNY", "NNYYYNNN", "NYYYNNNY", "YNNYNNNN", "NYYYNYNN", "NYYYYNYN", "NYYYYYNN", "YNYYYYNN", "NNYYYYNN", "NNYNYYYN", "NYNYYYNN", "YYYNYYYN", "YYYNNNNN", "NYNYYYNY", "YYNNNYYN", "YYYYNNYN", "NNNYNYYY", "NYYNYYYY", "YNNYYYYY", "YYYNNYYN", "NYYYYYYY", "NNYNYNYN", "YYYYYNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> lyrics = {"NNYNNNYYN", "YNNNYNNNN", "YYNNNNYYY", "YNYYNYYYY", "YYYYNYYYN", "YNYYYYYNN", "NYYNNYYNN", "YNYNNNYNY", "NYNYNNNNY", "YNNYNNNNN", "YNNYYNNNN", "NNYNYYYYN", "NYNNNYYNY", "NYYYYNYNY", "NYYNNYYNY", "NYNNNYYYN", "NYNNYYYNN", "YYYYYYYYY", "YYYNYNYYY", "YNYNNYYNN", "YNYNNYNNN", "NNNNNYYYN", "NNNYNNNNN", "YNYNYNYYY", "NYYNNYNNY", "YYNNYYYNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YYYYNNN", "NYNYYNN", "YNNYNYN", "YNNYNNY", "YNYNYYN", "YNYNNYN", "YYNNYNN", "NYNNNYY", "YNNYNNN", "YNNNNNY", "NNYYYNN", "YYNYYYY", "YYYYYYN", "YYYNYNN", "YNYNYNY", "YNNYNYN", "NNYYNNN", "YNNYNNY", "NYYYYNY", "YNYYNYN", "YYNYNNY", "YYNYYYN", "YYYNYYY", "NNYNNNY", "NYYYNNY", "NYNYYYN", "YYNNYYY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> lyrics = {"YYYNNYYNN", "NNNNNNYYY", "NNNYYYNNN", "NYYNYYNYN", "YYNNNYYYY", "NNYNYNNYY", "YNYNNYYNN", "NYNYYYYYY", "YNYNYYYNY", "NYYYYYNNN", "YNNNYYYNY", "YYYNNYNNN", "NNNYYYNYY", "YYNYNNYYN", "NYNNNYNYN", "NNYYYNNYN", "YYNNNNYNY", "NYYYYYNNY", "YYNYYNYYN", "YYNYNNYNY", "NNYYYYNYY", "YNYYYNYYY", "YNYYYYYYN", "YNNYNYNYY", "YNYNNNYNN", "YNYYYNYYY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YYNYYYYNNN", "NYYYNYNYYY", "YYNNYNYNNN", "YYNYNNYYNN", "YYYYNNNYYY", "YYNNNYYNYN", "NYYYNNNNYN", "YNYYNNYYNY", "YYYNNYYYNY", "YNYYYYYNYY", "YNYNYNYNNN", "YNYNNNYYYY", "YYYYNNNYYN", "YYYYYYNYYY", "NNNNYNNYNY", "YNNYYYYNYY", "NNYYNYYYYN", "YYYNYYYYNY", "NNYYYNNNYN", "NYYYYNYNYN", "YYYYYYNYNY", "NNNYYNYNYY", "NYNYYYYYNY", "NYYNYYNNNN", "YYYNNNYNYN", "NYNNYNYYYY", "NYYYYNNYYY", "YYNYYNYYNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> lyrics = {"YYYNYNNYYY", "NYYYYNYNYY", "YYYYYYNNNN", "YYNYYYNYYY", "NNNYYYYYYY", "YYNNNNYYYN", "YYYYNNNYNY", "NYNYNYYNYN", "NYYNNYYYYY", "NNYNYYYYYY", "YNNYYYNYYY", "NYNNYYYNNN", "YNNYNNNYNN", "YYNNYYYNYY", "YYNYYYYYNY", "YYYNYNNNYY", "YYNYNNNYYN", "YYYYNYYYYN", "NYNNNNYNYY", "YNNNYYNYNY", "YNNYNYNYYY", "NNNNYNYNNY", "NYNNYYYNYN", "NYYNYNYYYN", "YNYYYNYYYN", "YYNNYNNYNY", "YYYYYYYYNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> lyrics = {"YNYYYY", "YYYNYY", "NYNNNY", "NNYYNY", "NYNYYN", "YYYNYY", "YNYNYY", "YNYNNN", "YYYNYN", "NYYYNN", "YYYYNY", "NNYYNN", "YYYYYN", "YNYYNN", "YNNNNY", "YNNYYN", "NYNNYN", "NYYNNY", "YYYYYY", "NNNNYN", "YNYYYN", "NNNNYN", "NYYYNN", "YNNNYY", "YNNYNN", "NNNYYN", "NNYYYY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"NNNNNNYN", "NNNNNNNY", "NNNNNNYN", "NNNNNNNY", "NNNYNNNN", "NNNNNNYN", "YNNNNNNN", "YNNNNNNN", "YNNNNNNN", "NNNNNNYN", "NNNNNNYN", "NYNNNNNN", "NNNYNNNN", "NNYNNNNN", "NYNNNNNN", "NNNNNNNY", "NNNNNNYN", "NNYNNNNN", "NNNNYNNN", "NNNNYNNN", "NNNYNNNN", "YNNNNNNN", "NNNNNYNN", "NNNNNNYN", "NNNYNNNN", "YNNNNNNN", "NNNNNYNN", "NNYNNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> lyrics = {"NNYNNNNNN", "NYNNNNNNN", "NNNNNYNNN", "NNYNNNNNN", "NNNNYNNNN", "NNNNNNYNN", "NYNNNNNNN", "NNNNNYNNN", "NNNYNNNNN", "NNYNNNNNN", "NNYNNNNNN", "NNNNNNNYN", "NNNNYNNNN", "NYNNNNNNN", "NNNNYNNNN", "NYNNNNNNN", "NNNNNNYNN", "NNNYNNNNN", "NNNNYNNNN", "NNYNNNNNN", "NNNNYNNNN", "NYNNNNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> lyrics = {"NYNNNNNNN", "NYNNNNNNN", "NNNNNNNYN", "NNNNNNNYN", "YNNNNNNNN", "NNNYNNNNN", "NNNNNNYNN", "NNNNNYNNN", "NNNNNNNNY", "NNNYNNNNN", "NNYNNNNNN", "NNNNNNNNY", "NNNYNNNNN", "NNNNNNNYN", "NNNNNNNYN", "NNNNNNYNN", "NNNYNNNNN", "NYNNNNNNN", "YNNNNNNNN", "NNNNYNNNN", "NNNNNNNNY", "NNNNNYNNN", "NNNNNNNYN", "NNNNNNYNN", "NNNNYNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> lyrics = {"YNNNNN", "NNNNNY", "NNNYNN", "NYNNNN", "YNNNNN", "NNNYNN", "NYNNNN", "NNYNNN", "NNNNNY", "YNNNNN", "NYNNNN", "NNYNNN", "YNNNNN", "NNNNNY", "YNNNNN", "NNYNNN", "NNYNNN", "NNNNNY", "YNNNNN", "NNNYNN", "NNYNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> lyrics = {"NNNYNN", "NNYNNN", "NNYNNN", "NNNNYN", "NNYNNN", "NNYNNN", "NNNNYN", "NNYNNN", "NYNNNN", "NYNNNN", "NNNNYN", "NNNNNY", "NYNNNN", "YNNNNN", "NNYNNN", "NNNYNN", "NYNNNN", "NYNNNN", "NNYNNN", "YNNNNN", "NNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> lyrics = {"YNNYNNNNNN", "NNNNNYNYNN", "NNNNYNNNYN", "NNYNNNYNNN", "NNNNNYNNNY", "NNYNNNNNNY", "NNNNNNNYYN", "NNYNNNNNYN", "NNNNNNNNYY", "NNNYNNNYNN", "YNNNNNNNNN", "NNYNNNNNNY", "NNNYNNNNNY", "NNNYYNNNNN", "NNNNNNYNNY", "YNYNNNNNNN", "NYNNYNNNNN", "NNNNNYNNNY", "NNNNNNNNYY", "YNNNNNNNYN", "NNNNNYYNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> lyrics = {"NNYNNY", "NNNYNY", "NNYNYN", "YNNNYN", "NYNNNY", "YNNYNN", "NNYNYN", "NYYNNN", "NYNNNY", "NNNYYN", "NNYNYN", "NNYNNY", "NNNYNY", "YNNNYN", "YNNNNY", "NNNYYN", "YNYNNN", "NNNYYN", "YNYNNN", "NNYYNN", "NYNNNY", "NYNNYN", "NNYNNY", "NNYNNY", "NYYNNN", "YYNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"NNNNNNNY", "NNNNNNNY", "NNYNNNYN", "NNYNNNYN", "NNYNNNYN", "NNYNNNYN", "NNYNNYNN", "NNNNNYNN", "NYNNNYNN", "NYNNNYNN", "NYNNYNNN", "NYNNYNNN", "YNNNYNNN", "YNNNYNNN", "YNNYNNNN", "YNNYNNNN", "YNNYNNNN", "NYNYNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> lyrics = {"YNNNNNNN", "NYNNNNNN", "NYNNNNNN", "NYNNNNNN", "NYNNNNNY", "NNYNNNNY", "NNYNNNNY", "NNYNNNNY", "NNYNNNNY", "NNNYNNNN", "NNNYNNNN", "NNNYNNNY", "NNNYNNNY", "NNNNYNNY", "NNNNYNNY", "NNNNYNNY", "NNNNYNNN", "NNNNNYNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> lyrics = {"NYNNNNNY", "NNNYNNNY", "NNNNYNNN", "NNNYNNNY", "NNYNNNNY", "NNNYNNNY", "NYNNNNNN", "YNNNNNNN", "NYNNNNNN", "NNNNYNNN", "NNYNNNNY", "NNNNYNNY", "NNYNNNNY", "NNYNNNNY", "NNNNYNNY", "YNNNNNNN", "NNNYNNNN", "NNNNYNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> lyrics = {"YYN", "YYN", "NYN", "YYN", "NNY", "YNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YYN", "YYN", "NYN", "YYN", "NNY", "YNY", "YNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> lyrics = {"YYN", "NYY", "YNY", "YNY", "YNY", "NNY", "YNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YYYYYYYYYY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> lyrics = {"NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> lyrics = {"YNNNNNNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> lyrics = {"NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> lyrics = {"NNNNNNNNNY", "NNNNNNNNYN", "NNNNNNNYNN", "NNNNNNYNNN", "NNNNNYNNNN", "NNNNYNNNNN", "NNNYNNNNNN", "NNYNNNNNNN", "NYNNNNNNNN", "YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "NNNNNNNNYN", "NNNNNNNYNN", "NNNNNNYNNN", "NNNNNYNNNN", "NNNNYNNNNN", "NNNYNNNNNN", "NNYNNNNNNN", "NYNNNNNNNN", "YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> lyrics = {"YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> lyrics = {"YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "YNYYYNNNNN", "YYYNYYYYNY", "YNYYYYNNNN", "NNNYYYYYYN", "NNYYYNNNYY", "YYNYYYYNNN", "NYNYYYNNYN", "YNYYYNNYYN", "YYNNNNYYYY", "NYYYNYYNNY", "NNYYYNYYYN", "YNYYYNYYYN", "NNYYYNNYNY", "YYNYYYYYNN", "YYNYYYNYNN", "NYYNNYYYYY", "YYNNYYYYYN", "YYNNNNYYYY", "NYYYNYYNNY", "NNYYYNYYYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> lyrics = {"YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> lyrics = {"YNNYYY", "YYNYYY", "YNNYYN", "NYYNNN", "YYYNNN", "YYYNNY", "NYYYYY", "NYNYYY", "NNNNYY", "YYYYYY", "YNNNNN", "YYYYNY", "YYNNNN", "NNYYYN", "NNNNYY", "YYYNNN", "NYNNYN", "YNNYYN", "YYNNNY", "NYYNNY", "NNYYYN", "YNYYYN", "NNNYNY", "YYYYNN", "YYNYNN", "NYYNYY", "YYNYYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> lyrics = {"YNY", "YYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> lyrics = {"YNNNN", "NYNNN", "NNYNN", "NNNYN", "NNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> lyrics = {"NNNNNYYY", "YYNNNNNN", "YYYYNNNN", "NNNNNYYY", "NNNYYYNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> lyrics = {"YYYYYNNNNN", "NNNNNYYYYY", "YYYYYYNNNN", "YYNNNNNNNN", "NYYNNNNNNN", "NNYYYNNNNN", "NNNYYYYYNN", "NNNYYYYYYN", "NNNYYNNNNN", "NNNNNNNYYY", "YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "YYNNNNNNNN", "NYYNNNNNNN", "NNYYYNNNNN", "NNNYYYYYNN", "NNNYYYYYYN", "NNNYYNNNNN", "NNNNNNNYYY", "YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> lyrics = {"YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> lyrics = {"YYNNNNNNNN", "YNNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNYNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "NYNNNNNNNN", "YNNNNNNNNN", "NNYNNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY", "NYNNNNNNNN", "YNNNNNNNNN", "NNYNNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> lyrics = {"NYYNNNNNNY", "NYYNNNNNNY", "NYYNNNNNNY", "NYYNNNNNNY", "NYYNNNNNNY", "NYYNNNNNNY", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NNNYNNNNNN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> lyrics = {"YNNYYY", "YYNYYY", "YNNYYN", "NYYNNN", "YYYNNN", "YYYNNY", "NYYYYY", "NYNYYY", "NNNNYY", "YYYYYY", "YNNNNN", "YYYYNY", "YYNNNN", "NNYYYN", "NNNNYY", "YYYNNN", "NYNNYN", "YNNYYN", "YYNNNY", "NYYNNY", "NNYYYN", "YNYYYN", "NNNYNY", "YYYYNN", "YYNYNN", "NYYNYY", "YYNNYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> lyrics = {"YYNNN", "YYNNN", "YYNNN", "YNYNN", "NNYNY", "NNYYN"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> lyrics = {"YYN", "YYN", "YNY", "NYN", "NNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> lyrics = {"NYN", "YYN", "YYN", "YNY", "YNY", "NNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> lyrics = {"YNNY", "NYNY", "NNYY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> lyrics = {"YNNNNNNNNN", "YNNNNNNNNN", "YNNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNYNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNYNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNYNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNYNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNYNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNYNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNYN", "NNNNNNNNYN", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    vector<string> lyrics = {"YYN", "YYN", "YNY", "YNY", "NYN", "NNY"};
    CarolsSinging* pObj = new CarolsSinging();
    clock_t start = clock();
    int result = pObj->choose(lyrics);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10011&pm=7280
********************************************************************************
#include<string> 
#include<vector> 
using namespace std; 
struct CarolsSinging 
{ 
  int choose(vector <string> lyrics) 
  { 
    int ret = 987654321; 
    int n = lyrics[0].size(); 
    for(int carols = 0; carols < (1<<n); ++carols) 
    { 
      bool succ = true; 
      for(int i = 0; i < lyrics.size(); ++i) 
      { 
        bool sings = false; 
        for(int j = 0; j < lyrics[i].size(); ++j) 
          if(lyrics[i][j] == 'Y' && (carols & (1<<j))) 
            sings = true; 
        if(!sings) { succ = false; break; } 
      } 
      if(succ) ret <?= __builtin_popcount(carols); 
    } 
    return ret; 
  } 
};

********************************************************************************
*******************************************************************************/