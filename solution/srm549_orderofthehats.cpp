/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11955
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

class OrderOfTheHats {
public:
    int minChanged(vector<string> spellChart);
};

int OrderOfTheHats::minChanged(vector<string> spellChart) {
    int ret;
    return ret;
}


int test0() {
    vector<string> spellChart = {"Y"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"NYN", "NNY", "NNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> spellChart = {"NYN", "NNY", "YNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"NYYYYYY", "YNYYYYY", "YYNYYYY", "YYYNYYY", "YYYYNYY", "YYYYYNY", "YYYYYYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> spellChart = {"NNNY", "YNYN", "YNNN", "YYYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"N"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> spellChart = {"YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> spellChart = {"NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> spellChart = {"NY", "YN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> spellChart = {"YNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> spellChart = {"YYYYYYYNYYYYYYYYYYYY", "YYYYYYYNYYYYYYNYYNYY", "NNYNYYYYYYYYYNNYYYYY", "NYNYYYYYYYYYYYYYYNNY", "YYYYYYYYYYYYYYYYNYYY", "NYYYYYYYYYYYYYYYYYYY", "YYNYNNYYYNYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYY", "YYYYYYYNYYYNYYYYYYYY", "YYYYYYYYYYYYYYNYYNYY", "YYNYYYYYYYYYNYYYYYYY", "YYNYYYYYYYYYYYYNYNYY", "YYYYYYYYYYYYYNYYYYYY", "YYYYNYYYYYNYYYYYYNYY", "YYYNNYYYYYYNNYYNYYNY", "YYNYYYYYYYYYYYNYNYYY", "YYYYYYYNYYYNYYYNYYYY", "YYYYYYYYYYNYNYYYYYYY", "NYYYYNYYYNYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> spellChart = {"YNNNNNNNNNNNYNNNNNNN", "NNNNYNYNNNNNYNNYNNNN", "NNNNNYNNNNNNNYYNNYNN", "NNYNNNNNNYNNNNYNNNYY", "YNNYNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNYNYNNNNN", "YYNNYNNYYNNNNYNNNNNY", "NNNNYYNNYNNNNNNNNNNN", "NNNNNNNYNNNNYYNYNNYY", "NNNNNNNNNNNNNNNYNNNN", "YNYNNNNNNNNNNNNNNYNN", "YNNNYNNNNNNNNYNYYNYN", "NNNNNNNNNNNNNNNNNNNN", "NNYNYNNNYNNNYNNNNNNN", "NNYNNYNNNNYNNNNNNNNY", "NNNNNNNNYYYNNYNNNNNN", "NNYNNYNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNN", "NNYNNNYNNNNYNYNNNNNN", "NNNNNYNNYNNNNNYNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> spellChart = {"NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NYNNNNYNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> spellChart = {"NYYNYYNNYNNNNYNNNYNN", "NNYYNYYNNNNNNNNNNNNN", "YYYYNNNNNYNYNYYNNNNN", "NYNNNNNYYNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNY", "NNYYNNNNNNNYYNNNNYNN", "NNNNNNNNYNNNNNYNNNYN", "NNNNNYNNNNYNNNYNYNYN", "NNNYNNNNNNNYNYNNYYYN", "NYNNNNNNYYNYNNNNNNNN", "NNNNNYNYNNYNNYNNNNYY", "NNNNNYYNNYNNNYYYNNNN", "NNNNNYNNNYNNNNYNNNNY", "NNYYNNNNNNYNNNNNYNNN", "NNNNYYNNNNYYNNNNNYNY", "NNNNYNNNNNNYNNNNNNNN", "NNNNNYYYNYNNNNYNNNNN", "NNYYNNNNNYNYNNNNNYNN", "NNYNNNNNNNNNNNNNNNYY", "NNNNYNNNNNNNNNYNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> spellChart = {"NNYNNYYNNNYNNNNNYYYN", "NNNNNNNYNNYNNNYNNNNY", "NNNYYNNNNYYNYNNNNNNY", "NYYNNYYNNNNNNNNYNNNN", "NNNNYNNYNNYNNYNYNNNN", "NNNNNNNNNYNNNNNNNYNN", "NYNYNNYNNNNNYNNNNYNN", "NNNYNNNNNNNNNYYYNNNY", "YNYYYNNNNYNYNYNNNYNN", "YNNYNNNYNYNNYNNNNNNY", "YNYNNNNNNNNYNYNYNNNN", "NNNNNNNNNYYYNNNNNNYY", "NNNNNNNYNNYNNNNNNNNN", "NNNNYNNYNNNYYNNNNNYY", "YNNNYYNNNNNNYNNNNYNN", "NNNNNNNNYYNNNNNNYNYY", "NNNNYNNYYNYNYNNNNNYN", "NNYYYNYNNNNNYNNNNNNN", "YYNNYNNNNNNNNYNNNYYY", "NYNYNYNNNNYNNNNNYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> spellChart = {"NNYNNYNNNNYNNNNNNNNN", "NNNNNNYNYNNYNNNNYNNN", "NNYYYNNNNNNNNYYNNNNN", "NNNNNNNNYYNNNYNNYNNN", "NNNYYNNNNNNYYNYNYYNN", "NNNYYNNNNNYNNNNNNNNN", "NNYNNNNYNNYNNNNNNNNN", "NYNNYYNNNNYNNNNNNYYY", "NNNNNNNNNNNYNNNNNNYN", "NNNNNNYYNNYNNNNNYNNN", "NNNYNYYNNNNNYNYYNNNN", "NNNNNNNNNNNNNNNYNNNN", "NYNNYNNNNYYYNYYNNNNY", "NNNNYNNNNYNNNYYNNNNN", "NNYNNNNNNYYNYNNNNYNN", "NNNNNNNYYNNNNNNNNNNN", "NNYNNNNNNNNNNNYNYNNN", "NYNNYNNNNYNYNNNNNYNN", "NYNNNNNNNNNYNNNYNYNN", "YNNNYNNYNNNNNYNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> spellChart = {"YYYNNYNNNYNNNYNNYNYN", "NNYNNYYYYNNNNNYNYYNN", "NNNNNYNNNYNNNNNNNNNY", "NYNNYYYNNYNNNNNNNNYN", "YNYNYNNNNNYNNNYNYNNY", "NNNNYYYNYNNYYYNNNNNN", "YNYNYYNNYYNNYNNYNYNN", "NNNNYNNNNYNYNYNNNNNN", "NYYNNNNNNNNNNNNNYYYN", "NNNYNNNYNNNYYNNYYNNY", "NNNNNNNNNNYNNYNNNYNN", "YYYNNNNYNYNNNNNNNNYN", "NNYNNNNNYNYYNYNNNNNN", "NYNYNYYNNYYNNNNNYNNN", "YYNNNNNYNNNYYNYNNNNN", "YNYNYNNNNNNNNYNNNNNN", "NNNNNYNNNNNYYNNNNYNN", "NNNNNNNNNYNNNYYNNNNN", "NYNNYNNNNYYNNNNNNNYY", "NNNNNNNNNYYYNNNNNNNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> spellChart = {"NYNNYYYYNYNNNNNNYNYN", "NNNYNNNNNNNNYNNNNYNY", "NNYNNNYNYYYNNNNYNNYN", "NNNNNNNYYNNNNNYNNNNN", "NNYNNNNYNNYNNNYNNNNN", "YNNNNNNNNNNNNNYNNNYN", "NNNNNNYNNNNNNNNYNNNN", "NNNNNNNYNNYNNYNYYNYN", "NNYNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNNNYNN", "YNYNNNYNNNNNYNNNNNNY", "NNYNYNNNNYNYNNYNYYNN", "NNNYNNYNNYYNNYNYNNYN", "YYYNYNNNYYNNNNYNNNNY", "NNNNNYNYNNNNNYNYNYYY", "NNYYNYNNNNNNNNYNNNNY", "NNYNYYNNNYNYNYYNYNNN", "NNYYYNNYNNYNNNNNNNNN", "NNNNYYNNNNNYNNNNNNYN", "YYNNNYNNNNNNNNYNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> spellChart = {"NNNYNNNYNYYNNYNNYNNN", "YYYNYYNNNNNYYNYYNYNY", "YNYYNNYYYNNNYNYYYNYN", "YYNNYNNNNYNYNNNNNNYY", "NYNNNNNYNYYNNNNNNYYY", "NNNYNYYNYNYNNYNNNYNN", "NNNNNYNNNYYNNNYNNYNY", "NYNYNNNNNNYNNYNNNYYY", "YYNYYNYNYNYYNNNNNNNN", "NNNYYYNNNYYNYNYNNYYN", "NNNNNYYNYNNNNNNYNNNY", "YYNNYNNNNNNYNYYNNYYY", "YNYYNYYNYYYNNYNNYNNY", "NYYNNNNYYNNNYYYYNYYY", "NNNNNYNYYYYNYNNYNNNY", "NYNYNNYNNNYNNNNNNNNN", "YYNYYYNNNNYNYNYNYYYY", "NNNYNNNNYNNNYYNYYNNY", "NNYNYNYNNNYYNNNNNNNY", "NNNYYNNYYNYNYNYYYNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> spellChart = {"NNNNNNNNYNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNYNNNNNNN", "NNNYNNNNNNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNNY", "NNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNYNNNNNNNNN", "NNNNNNYNNNNNYNYNNNNN", "NNNNNNNYNYNNNNNNNNNN", "NNNNNNYNNNNNNNNYNNNN", "NNNNYNYNNNYNNNNNNNNN", "YNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"NYNYYNYNNNYNNNYNNYNY", "NNYNYNNNNNNNNYNYNYNN", "YNYYYNYYYYNYYYNNNNYY", "YNYNNYYNNYNYYYNNYNYY", "YNYYNYNNNYNYYNNYYNYY", "NYNYYNYNYYNNNNYNYYYN", "NYYNNYYYNYYNYNNYYYNN", "YNNYYNNYNNYNNNNYNYNN", "NNYNNYNYNNNNYYNNNYYN", "NNNYYNYNYNYYNNYYYYYY", "YYNNYNYNYYNNYYYYYNYY", "YYYYNNNNYYNYNNNNNYYY", "NNYNYNNNYYNNYYNNNYYN", "YNYYNYYYNNYNNYYNNYNY", "NNYNYYYYNYYYNYNNYNNY", "YNYNYNNYNYYNYYNYYYNN", "YYYNYYNNNYNYYYNNNYNN", "YYNYYYNNNNNYNNYNNNNN", "NNNNNYNNYNYNNNNNNYNN", "NNNYYYYNNYNYNNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> spellChart = {"YYYYYNNYYYNYNNNNYNNY", "NYNNNYYNNYNYYYNYYYYY", "NNYNNNYYNNNNNNYYYYNY", "YYNYNYYNNYYYNYNNNYYY", "NYYNNYNYNYNNNNYYYNYN", "NNNNNYYNYNNYYYYNYYYN", "YNYNYYNNNYNNNNNYNNYY", "NYYYYNYNYNNYNNYNNNNY", "YYYYNYYNNYYYNNYNNYNY", "YYYYYYNYNYNYNNNNNNYN", "NNYYYYYNNNYNNNYNNNNY", "YYNNNYNYYNYYNYYNYNYN", "NNYNYYNYYNYYNYNYNYYN", "YNYNYYNYNNNYNYNYYNYY", "NNYNNNYYYYYYYYYYYNYY", "YYYYYNYYNYYYYYNNYNNN", "NYYYYYYYYNNNNNYYNNYN", "YNNYNNNYYNYYYNYNYYYY", "YYNNYNYYYNYYNNNYYNNY", "NNYNYNYYYNYYNYNNYNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> spellChart = {"NNYNNNYNNYYYYYNYYNNN", "YNNYNYNNYYYNNNYYYNNY", "NNNYNNNNNNNNNNNNNYNN", "NNNYNNNYNNNYNNYNNYYY", "NNNYNNNYNNNNNNYYYNNN", "YNNNNYYNNNNYNYNNNYYN", "NNYYYYNNYNNNNNNNYNNY", "NYNNYYNNNNNYYNYNNYNN", "YNNYNNYNNNYNYYNYYYYN", "YNNNNNNYYYNNNNYNYNNY", "NNNNNNNNNNNNNNNYYNNN", "NNYYNNNNNNNYYNYNYYNN", "YNNYYNNNNNYNNYNNYYNN", "YYYNNNYYNNNNNNYNNNYY", "NNNNNNNNNNYYYYNNNNNY", "NNNNYNYYNNNNYNNNYNNN", "NYYNNYNYYNYNYYYYNNNN", "NNNYNNNYNNNYYNNNYNYN", "NYNYNNYNNNNNNYNNNNNY", "NNNYNNYNYNNNNNNNNNNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> spellChart = {"NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNN", "YNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"NNNNNNNNYNNYNNNNYNYN", "YNNNNYYNNNYNNNNNNNNN", "NNYNNNNNNNNYNYNNNYNN", "NYNYNNNNNYNNYNNNNYYN", "NNNNYYNNNNNNNYNNNNNN", "YNNNNNNYNNNYNNNYYNNN", "YNYNNNNYNNNNNYNNNNYN", "NNYNNNYNYNNNNNYNNNNN", "NYYNNNNNYNNNNNNYNNNN", "YNYNNNYNNYNNYNNNNNNN", "NNYYNNNNNNNNNNNNNNNN", "NNNYNYNYNNNNNNYNNNNN", "NNYNYYYYNNNNYNNYNYNN", "NNNYNNYNNNNNNYYNNNYN", "NNNNYYYNYYYNNYNNNNYN", "NNYNNNYNYNNNNYNNNNNN", "NYNNNNNYNNYNNNNYNNNN", "NNNNNNYYNNYNYNNNYNYY", "YNNYNYNNNNNNNYNNNNYY", "NNNYYNNNNNNNNNYYNNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> spellChart = {"YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> spellChart = {"NNYNYNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNYNNNYN", "NNNNNNNNNNNNNNNNNNNY", "NNNYNNYNNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNYNNNYNNNYNYYNNNNN", "NNNNNNNYNNNNNNNNYNNY", "NNYNYNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"NNNYYNYYNNNYYYNNYNNY", "NYNYNYYNYNNYNNYYNNNN", "NYYNNYNNNYNNNNNNYYNN", "YYNYYNNNYYNNYNNYNNNN", "YNNYNNNNNNYNYNNNNYNY", "YNYNYYYNNNNNNNNYNNNN", "NNYNNNNNYNNNNYNNYNYN", "NNNNNNNYYYNYNNNNNYNN", "YNNNNNNNNNNNYNNYNNNY", "NNNNNNNNYNNNYNYNNYNY", "NNNNNYNNNNNNNNNYNNYN", "NNYNYYNNNNNNNNYNNNYN", "NYNNNNYNNNNNNYNNNNYY", "YNYNYNNNNNYNYNNNNNNN", "NYNYNNYNNNNYNYNNNNNN", "NYNNNNYNNNYNNYYNNNYN", "YNNNNNNYNNNNYYNNNYYY", "YYYNYNYNNNNYNNNNNNNN", "NNYNNYNNNYYNNNNNYNNN", "YNYYNNNNYYYYNYNYNNNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> spellChart = {"YNNNYNNNYYNNNNNNYNNN", "YNNNYNNYNNNNNYNNNYNN", "NNNYNNNYNNNNNYYNNNNN", "NNNNYNNYNNNNNNNNNNNY", "YYNYYNNNNNNNYNNNNNYN", "NNNYNNNYNNNNNNYYNYYN", "NNNNNNNNYNNNNYNYNNYN", "YYNNYNNNNNNNYNNYNNYY", "YNYYYNNYNYNNNNNNNNNN", "NNYYNNNNNNNNNNNNNYNN", "YNNNNNNYNNNNNYYYNNNY", "NNNNYNYNNNNYYNYYYYNN", "NNYNNNNYNNYNNNNNNNYN", "NNNNNNNYYNNNNNNYNNNN", "YYNYNNNNNNNNNNYNNNYN", "YNNNNNNNNNNNNNNYNNNN", "NNNYYNNNNYNNYYNNNNYN", "NNNYNNNYNYYYNYYNNYNN", "YNNNNNYNYNNNNNNNNNYN", "NNNNNNNNYNNYNNYYNYNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> spellChart = {"YYNYNYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYNYYYYYYYY", "YNYYYYYYYYYYYYYYYYYY", "YYYYYYYNNYYYYYYYYYYN", "YYYYYYNYYYYYYYYYYYYY", "YNYNYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYYYYYYYNN", "NYYYNYYNYYYNYNYNYNYY", "YYYYYYYYNYYYYYNYNYYY", "YYYYYNYYYYYYYYYYYYYY", "YYYNNYYYYYYYYYNNYYYY", "YYYYYNYYNYYYYYYYYYYY", "YYNYNNYNYYYYNNYNYYYY", "NYYYYYYYYYYYYYNNYYYN", "YNYNYYNYYYYYYYYYYYYY", "YYYYYYYYNYNYYNYYYYYY", "YYYYYYYYYYYNYYYYYYNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> spellChart = {"YNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNYY", "NNYNNYNNNYNNNNNNNNNN", "NNYNNNNNYNNNNNNNNNYN", "NNNNNNNNNNYNNYNNNNNN", "NNNYNNNNYYNNNNYNNNNN", "NNNNNNNYYNNYNNNNNNNN", "YYNNNYNNNNNNYNNNNNYN", "YYNNNNNNNNNNNNNNYNNN", "NNNNNYYNNNNNNYYNNNNN", "NNNNYNNNNNNNNNYNNNNN", "NNNNNNNNNYNYNYNYYNNN", "YNNNNNNNYNNNNNNNNNNN", "NNNNYYNYNNNNNNYNNNNY", "YNNNNNNNNNYNYNNYNNNN", "NYNNNNNNNYYNNYNYYNNN", "YNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNYYYNNNNYNN", "NNNYNYYNNNNNNNNNYNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> spellChart = {"NNNNNNYYNNNNYNNYNYNY", "NNYNNYNNYNYNNYNYYNYN", "NNNYYYYNYNNYNNYNYYYN", "NNNYYNYNNNNNYYYNNYYN", "YNYYYYNNYYNNNNNNNYNY", "YYNNNYNNYYYYYNYYNYYY", "YNYNNNYNNYYNNNNNYYYN", "NYYNNYNNNNNNNNNNNNNY", "YNYYNNNNYNNNYNYNYNYY", "NYYYYYYYNNNNYNNNYNNN", "YNNYNNNYYYNNYNNYNNNY", "NYNYNYNYNYNNNNNYNYYN", "YYNNNYNNYNNNNYYYYYNN", "YYNNNNNYYNNYYNNNNYYN", "NYYNNNNNNNNNYNNYNNNN", "YNYNNYNNNYNYYYYNNNYN", "NNNYNNNYNNYYNYYNNYYN", "YNNYYNYNYNYYNNYYNNNN", "YNNYYYNYYYYNYNNYYNNN", "NYNNYNNNNYYYNNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> spellChart = {"YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYN", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYNYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> spellChart = {"YNYYNNYY", "NYNNNNYY", "YNNNNNNN", "NYNYYNNY", "NNNYYNNN", "NNNYYNYN", "NYNYNYNN", "NNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> spellChart = {"NYNNYYY", "YYYYYYY", "YYNNYNY", "YYYYYYY", "YYYYYYY", "YYYNYYY", "YYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> spellChart = {"YYYY", "NYYY", "YYYY", "YYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> spellChart = {"NYYYNYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "NNNYYYYYYY", "YYYYYYYYYY", "YYNYYYYYYN", "YYYYYNYYYY", "NNYNNNYYYY", "YYYYYYYYYY", "YYNYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> spellChart = {"YYNYYYYYYYY", "YYYYYYYYYYY", "YYYYYYYYYYY", "YYYYYYYYYYY", "YYYYYYYYYYY", "YYYYYYYYYYY", "YYYYYYYYNYN", "YYYYYYYNYYY", "YYYYYYYYYYY", "YYYYYYYYYYY", "YYYYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> spellChart = {"YYYYYYYYNNYYYYYYYYY", "NYYNYYNNYYYNYYYYYNN", "YYYYYYYYYYYYYYYYYYY", "NYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYY", "YYYYYYYYYNYYNYYYNYY", "YYYNNNYYYYYYYYYYNYY", "YYYYYYNYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYY", "NYNNYYYYYYYYYYYYYYY", "YNNYYYYYYYYNYYYYYYY", "YNNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYN", "YYYYYYYYYYYYYYYYYNY", "YYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYNYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> spellChart = {"NYY", "YNN", "NYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"NNNN", "NNNN", "NNNN", "NNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> spellChart = {"YYNNNYNYYYNNYYN", "NYNNYNNNNNNYYNY", "YNYNNNYNNNNNYNN", "YNYNYNYNYYYNNNN", "NNNYNYNYNYNNNNN", "NYNNYYNYYYNYYNY", "NYYYYNYYNNNNNYY", "YNNYNNNNYNYNYYY", "NNYNYNYYYYNNYYY", "NNNNYNNNNNYYNYN", "NYYYYNYYYYYNYNN", "NNYNNNNNNNNNNNY", "NYNNNNYNYYNNNYY", "NNNYNYYNNNNNNYY", "YNYYYNNYNNYYYNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> spellChart = {"YNYNYYYNYY", "YYYYNYYNYY", "YYYYYYYYYY", "NYYYYYYYYY", "NYYYYNYNYN", "NYNNNYYYYN", "YYYYNNYNYN", "YYNYNYYNYY", "NNNYYNYYNY", "YNNYNYNYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> spellChart = {"YYYY", "YYYY", "YNNY", "YYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> spellChart = {"YYN", "YYN", "YYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"YNNNYYNNNYNY", "NYNNNNNNNNNY", "YNNYNYNYNYYY", "NNNNNNYYNYYY", "YNYNNYNNNNYN", "YNNYYNNNNNNN", "YNNNNYNNNNNN", "NNNNYNYNNNNY", "YNNNNNNNNYNN", "NNYNNYYNNNYN", "NNNNNNYNNNNN", "NNNNNYNNNYNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> spellChart = {"YNYNYYYYYN", "YYYYNNYNYY", "YNNNYYNYYY", "YNNYYNYYYY", "NYNYYYYYNN", "YYNYNNYYNN", "YYYYYNYYYY", "YYYYYYNNNN", "YNYYYYYYYY", "YYYNYYYYNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> spellChart = {"YNNNNNNNNNNYNNYY", "YNNNYNNYNNYNNYNN", "NYNNNNNNNYNNNNNN", "NNNYYYNNNNYNNNNN", "NNYNNNNNNYNNYNNN", "NNNYNNNNNNNNNYNN", "NNNNNNYNYNNNNNNN", "NNNNNNNNYNNNYNNN", "NNNNNNNNNNYNNNNN", "YNNNNNNNNNYNNNNN", "NNYNNYNNYNNYNYNN", "NYNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNN", "NYNNYNYYNNNNNNNN", "NNNNNNYNNNNNNNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> spellChart = {"NNNYYYYNY", "NYNYYYNNY", "YYNNNNYYY", "YYYNYYYYY", "NYYYYYYYY", "YYYYYYYYY", "YYYYNYYNN", "NYYYYYYYY", "YYYYYNNYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> spellChart = {"YYYY", "YYYN", "YNNN", "NYYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> spellChart = {"YNYNNNYNNNYNNNYNNNY", "NNNNNNNYYYNNNNNNNNN", "NYNYNYNNNNYNNYNNYNN", "NNNNNNNNNNNNYYYYYNY", "NNNNYNNNNNNYNNNYNNN", "NYNNNYYNNNNNYNNNNNY", "YNYNNNYNNYYYNYNNNYN", "YNNNNNNNYNNNNNYYNYY", "NNNYYNNNYNNNNYYNNYN", "YNNNYYYNNNYNNYNNNYN", "YNYNNNNNNNNYNNYYNNY", "NYNNNYNYNNNYYNNNNNY", "NNYNNYNNYNNYNNYNNNN", "NNYNNNNYNNNNNNYNNNN", "YYNNNNYNNNNYNNYNYYY", "NNNYNYYNNYYYYNNYNNN", "NNNNNNNNNNNYYNNNNNN", "NNNNNNYYNYNNYYYYNYN", "NNNNNNNNYYNYYNYYYNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> spellChart = {"YNYYYYYYYNY", "NYNNYYYYYNN", "YNYYYYYYYNN", "YYYNNNYNYYN", "NYYNNYNYYNN", "YNYNYYYYYNY", "YYYNYNYNYYY", "YYYNYYYNYYY", "NYYNNYYNNYY", "NYYYNYYYNYN", "YYNYNYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> spellChart = {"YNYYYYYYYYYYYYYYYY", "YNYNYYYYYYYYYNYYYY", "YYYYYYYNNYYNYYYYNY", "YYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYNYYNYY", "YYYYNYYYNYYYYYYYYY", "YYYYNNYYNYNYNYYYNY", "YYYYYYYNYYYNYNYYYN", "YYYNYYNYYYYYYYYYYN", "YNYYYYYNYYYNNYYYYY", "YNYYYYNYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYNYYYYYY", "YYYYYYYYYYNYYYYNNY", "YYYYYYYYYYYYYYYYYY", "NYYYYYYYYNYYYYNYNY", "YNNYYYYYYYYYYYYNYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> spellChart = {"NYYNNYY", "YYYNNYY", "YYYYYNN", "YNYYYYY", "YYNYYNY", "YYYYNYY", "NNYNNNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> spellChart = {"YNYYYYYNYYNYYYNYYY", "YNNNYYNNYYYYNYYYNN", "YNNYYYNNNYYNYYNNYN", "NYNNYYNNNYYNYYNYNN", "YNNYYYNYNNNYYNNNNY", "YNNYNNYNNNYYNNYYNN", "NYNNNYYYYYNYNYNNNY", "YYNYYYYYYYYNNYYNNY", "YNYYYYNYYNYNNNYYNN", "YNNNYYYYNNNNYYNYNN", "YYNYYNNYNNNNNYNYNY", "NYYNYNYYYYNYYYYYNN", "NYYNYYNYNNNYYYNNYY", "YNYNNNNNNYYNYYYNYN", "YYNYNYNYYNNNNNYNNN", "NYYNYYYNYNNYNNNYYN", "YYYNYYYYNYYNYYNNNY", "YYYNNNYYYNNYYNYYYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> spellChart = {"YYYYYYYYYYYY", "NYYYYYYYNNYY", "NYYYYYYYYYYY", "YNYYNNYYYYYY", "YYYYYNYYNYYN", "YYYNYYYYYYYY", "YYYNYYYYYYYN", "YYYYYYYYYYYY", "YYYYYYNYYYYY", "YYYYYYYYYYNN", "YYYYYYYNYYYN", "YYYYYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> spellChart = {"YYYYYYYYYNYYYYYYYYYY", "YYYNYYNYYYYYYYYYYYYN", "YYYYYYYYYYNYYYYYYYYY", "YNYYNYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYY", "YYYNYNYYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYNYY", "YYYYYYYYYYNYYYYYNYYY", "YYYNYYYYYYYYYYYYYNNY", "YYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYY", "YYYYYNYYYYYYYYYYYNYY", "YYYYYYYYYYNYYYYYYNYY", "YYYYNYYYYYYYYYYYYYYY", "YYYNYYYYYYYYNYYNYYNN", "YYNYYYYYYYYYYYYYYYYN", "NNYYNYYYYYYYYYYYNYNY", "YYYYYYYYNYNYYYNYYYNY", "YYYYNYYYYYYYYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> spellChart = {"NYYYNNNNYYNYY", "YNNNNNNNNNNNY", "YYYYYNYYYNYNN", "YYYYNNYYYNNNY", "YYNYNYNYYNYNN", "YYYNYNYNYNYNY", "NNNYNYNNYYNYY", "NYNNYNYNNNNYN", "YYYYYYNYNNYNY", "NYYYYNYNNNYYN", "YYNYNNYYNNYNY", "NYYYYNNNNYYNN", "NYNYYYYYNNNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> spellChart = {"YYYYYNYNN", "NYYNYYNNY", "YNYYNYYYY", "NNYNYYYYY", "NYYNNNYNN", "YYNNYNNNY", "NNNYNYNNY", "YNNNYNYNN", "NYNNNYNNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> spellChart = {"NNNNY", "NYNNN", "NYYNN", "YNYNN", "NYNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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

int test60() {
    vector<string> spellChart = {"NNNN", "NNNN", "NNNY", "NNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> spellChart = {"NYNNNYYYYN", "YYNNYNYYNY", "YNNNNNNNNY", "YYNYNNYYYY", "NYNYYYYNNY", "YYNYYNNYYY", "NYNNYYNNNY", "NYNYNYNNNY", "YYYNNNYYNY", "YYYYNNNYNY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> spellChart = {"YYYNYYYY", "YYYNNYYY", "NYNYNNYY", "YYYYYYYY", "YYNYNYYN", "NYYYYNYN", "NNYYNYYY", "YNYNYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> spellChart = {"NNNNYNYNNYNY", "YNNNNNNYNYNN", "NNYNNYYNNYYN", "YNNNNNNNNNNN", "YYNNYNNYNNYY", "NYYNNNNNNNNN", "NYYNYNNNNNNN", "NNNNNNYNNNYN", "YNYNNYNNYNNN", "YYNYYYNNNNNN", "NNNYYYNNYNNY", "YNNNNNNYYNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> spellChart = {"NNNNNYNNNYYNNNYNNNN", "YYNNNYNYYNNYNNYNYNN", "YYYYNNNNNNYNNNYNNYN", "YNNNNNNYYNNYNNNNYNN", "YNNYNNNYNYNYNNYYYYN", "NNNYYNNNNYYNYNNNNYN", "YYNNNNNNYYNNYNYYNYN", "NNYNNNYYNNNNYYYNNYN", "NYNNYYNYNNNYYNNYNNY", "YNYYNNNNNNNNNYNYNYN", "NNYNNNNNNNNNNNNNNNN", "NNNNNNNYYYNYNNNNNNN", "YNNNYNNNNNYYNYNNNNN", "NYNNYYYNNNNNNYNYYYN", "NYYNYNNYYYNYNNNYNNN", "NNNNYNNNYNYYYNNNYYN", "YNYNNNNNNNYNNNNNNYN", "NYNYNYYNNYYYYNNYNNN", "YNNNNYNNNYNYNYNNNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> spellChart = {"YYYYYYYY", "YYYYYYYY", "YYYYYYYY", "YYYYYYYY", "YYYYYYYY", "YYYYYYYY", "YYYYYYYY", "YYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> spellChart = {"YYYNNYYYNNYYNNYNYY", "NYNYNNYYYYYNNYNNYN", "YYNYNNNYNNNYYYYYNN", "NNYNNNNYNYYYNYNNYN", "YYNYYNNYNNYYNYYYNN", "YNNYYNNNNYNYYNYNYY", "YYYYYNYYYYYNNYNNYY", "YNYYNNNYYYNNNYNYYN", "NNYYYNNYYYNNYYYNYN", "NNYYYYNYNNYYNYNNYY", "NYNYNNNNNYYYYNYNNY", "YNYYYYNNYNNNNNYYYY", "YNYYNYNNNYNYNNNNNN", "YNNNYYYYYYNYNNYNYN", "NYYYYYNYYNNNNNNNYY", "NNYNNYNNNYYNYNNNNN", "YYNNNNNYYYYYYNYYYN", "YYYNYYYYYYYNYYNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> spellChart = {"YYYYYYNYYYYYNYYYY", "NYYYYYYYYYNYYYYYY", "YYYYYNYYYYYYYYYYN", "YYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYY", "YYYYYNYYYNYYYYYYY", "YYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYY", "YYYYYYYNNYYYYYYYY", "YYNYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYY", "NYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> spellChart = {"YYYYNNYNYYYNN", "NYYNNNNNNNYNY", "NYNYYNYYYNYNY", "NYNYNYNYYYNYY", "NYYYNYNNYNNYN", "YNYNNNYNNNYYY", "YNYYYYNNYYYYY", "NNYNNNYYYYNNY", "YNYNYYNNNNYYY", "YYYYNNYYYNYYY", "NYNNNNYNNYNNY", "NNYNNYYYYNNYN", "YYNYYYNNYYNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> spellChart = {"YNNYYYNYYNNNYYYNYYY", "NYNYNYNYYYYNYNNNYYN", "YNNNYNYNNYYNYYNYYNY", "YNYYYNYNYNNYNYNYNNN", "YYYYNNYYYYYYNYYYNYY", "YYYYYNYYYNYNNYYYNYY", "YYNYYNYYYNNNNNYYNYY", "NNYYNYYYNYYNNYYYNNN", "YYNYNYYYYNYNYNNYYYN", "YNYYYNNNYYNNYYYNNNY", "NNYYNYYNNYNNYYYYNYN", "YYYYNYNYYYYYNYNYYNN", "YYNYYNNNYYNYYYNYYNY", "YYYNYNNYNYNYNNYNYNN", "NYYNNYYNYYYYNNYNYNY", "YNYNNYYNYYYYYNNYYNN", "YNYNNNYNYYYNNNYNNYN", "NYNYNYNYYYNNYNNNYNY", "YNNYYNYYYYNYNNYNNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> spellChart = {"NY", "YN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"YYNYYYYYYYYYYYYY", "YYNYYYYYYYYNYYYY", "YNYNYYNYYYYYYNYY", "YYYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYY", "YYYYNNYYYYNYYYYY", "NYYYYNYYYYYNYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> spellChart = {"NNYNNYNYNNNYYNN", "YNYNNYNYNNYNNNY", "NYNYYNNNNNYNNYY", "YNNYYNNNYYYYYNY", "NNNNYNYNNNNNNNN", "NYNNYNNNNYNNYNN", "YYNYNNNNNNYYNYN", "NNNYNNNNNNYNYYN", "YNNYYNYNYNNYYYN", "YNNNNNYNNYYNNNY", "NYNNNNNNNNNNNYY", "YYYNYNYNNNYNNNN", "NNYYNYNNNYNNNNN", "NYNNNNYNNNYNYNN", "YNNNNNYNNYNNNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> spellChart = {"NNNNNYYNN", "NNNNNNNYN", "NYNNYNNNN", "YNNNYYYYN", "NNYYNNNYN", "NNNNNNNNN", "NNNNNYNNY", "NNYNNYNNN", "NNNYNNYNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> spellChart = {"YYYYYYYYYY", "YYYYYYNNYY", "YYYYYYYYYY", "YYYYYYYNYY", "YYYNYYYYYY", "YYNYYYYYYN", "YYYYYYYYYN", "YYYYYNYYYY", "YNYYYNYYYY", "YYYYYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> spellChart = {"YYYYY", "YYYYY", "YYNYY", "YYYYY", "YYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> spellChart = {"NYNNYYYNNYNNNYNNNN", "NNNNNNNNNNNNNNNNYN", "YNNNNYYNNNYNNNNNNN", "NNNYYNNNNYNNNNNYNY", "NYNYNYNNNNYNNNNNNN", "NYNNNNNYYYYNNYNYNN", "NNNYNNNNNNYNNYYYNY", "YNNNNNNNNNNYNNNNYY", "NYNNYYNNNNNNNNNNNN", "NYYNNNNYNNYYNNNNNN", "NYNNNNNYYYNNNYYNNN", "NYNNYNYYYYNYYYNNYY", "NYYYNYNYNNNNNYNYNN", "YNYNYYNNNNNNYYYNNY", "NNYYNNNNYYNNYYNYNN", "YNYNNNYNNYNNNNYYYN", "NNYNYYNNYYNNYYNNYY", "NYNNYYNNNNNNYNYYNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> spellChart = {"NYNYYNY", "YYYYYYY", "NNYNYYY", "YYNYYYY", "YYNYYYY", "YYYYYYY", "YYYYYYY"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> spellChart = {"YNNNYYNNYN", "YYYNNNNNYN", "YNYNYYYYNY", "NNNYNYYNYY", "NYYNYYNNYY", "NNNYNNNNYY", "NYYNNYYYYY", "YNYYNYYYYY", "YYYYYYNYNN", "YNNNYNYYYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> spellChart = {"NNN", "NYN", "NNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
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
    vector<string> spellChart = {"YYNYNN", "YNYNNY", "YYYYNN", "NNNYNN", "NNNYNN", "YNYNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> spellChart = {"NNNNNNNNNN", "NNNNNNNNNN", "NNNYNNYNNN", "NNNYNNYNNN", "NNNYNNYNNN", "NNNNNNNNNN", "NNYYYYYYNN", "NNYNNNNYNN", "NNNYYYYNNN", "NNNNNNNNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> spellChart = {"NYYYYYY", "YNYYYYY", "YYNYYYY", "YYYNYYY", "YYYYNYY", "YYYYYNY", "YYYYYYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> spellChart = {"Y"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> spellChart = {"YYNYNN", "YNYNNY", "YYYYNN", "NNNYNN", "NNNYNN", "YNYNYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> spellChart = {"YYYYYNNYYYNYNNNNYNNY", "NYNNNYYNNYNYYYNYYYYY", "NNYNNNYYNNYNNNYYYYNY", "YYNYNYYNNYYYNYNNNYYY", "NYYNNYNYNYNNYNYYYNYN", "NNNNNYYNYNNYYYYNYYYN", "YNYNYYNNNYNNNNNYNNYY", "NYYYYNYNYNNYNNYNNNNY", "YYYYNYYNNYYYNNYNNYNY", "YYYYYYNYNYNYNNNNNNYN", "NNYYYYYNNNYNNNYNNNNY", "YYNNNYNYYNYYNYYNYNYN", "NNYNYYNYYNYYNYNYNYYN", "YNYNYYNYNNNYNYNYYNYY", "NNYNNNYYYYYYYYYYYNYY", "YYYYYNYYNYYYYYNNYNNN", "NYYYYYYYYNNNNNYYNNYN", "YNNYNNNYYNYYYNYNYYYY", "YYNNYNYYYNYYNNNYYNNY", "NNYNYNYYYNYYNYNNYNNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> spellChart = {"NYN", "NNY", "YNN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> spellChart = {"NNNY", "YNYN", "YNNN", "YYYN"};
    OrderOfTheHats* pObj = new OrderOfTheHats();
    clock_t start = clock();
    int result = pObj->minChanged(spellChart);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23019141&rd=15171&pm=11955
********************************************************************************
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
 
class OrderOfTheHats {
public:
  int minChanged(vector <string>);
};
 
 
int dp[1 << 20], mask[22];
 
inline int cnt(int X)
{
  int ans = 0;
  
  while (X)
  {
    ans ++;
    X = X & (X - 1);
  }
  
  return ans;
}
 
inline int compute(int X, int Y)
{
  return cnt(Y) - cnt(X & Y);
}
 
 
int OrderOfTheHats::minChanged(vector <string> spellChart) {
  int graf[23][23];
  int INF = (1 << 30);
  
  memset(graf, 0, sizeof(graf));
  int i, j, N = spellChart.size();
  
  for (i = 0; i < N; i ++)
    for (j = 0; j < N; j ++)
      if (spellChart[i][j] == 'Y')
      {
        graf[i][j] = 1;
        mask[j] = mask[j] | (1 << i);
      }
      else
        graf[i][j] = 0;
  N --;
  
  dp[0] = 0;
  for (i = 1; i < (1 << (N + 1)); i ++)
    dp[i] = INF;
  
  for (i = 0; i < (1 << (N + 1)); i ++)
    for (j = 0; j <= N; j ++) //incerc sa bag nodul j
      if ((i & (1 << j)) == 0)  
        dp[i | (1 << j)] = min(dp[i | (1 << j)], dp[i] + compute(i, mask[j]));
        
  return dp[(1 << (N + 1)) - 1];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/