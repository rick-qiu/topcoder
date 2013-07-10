/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6386
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

class TourCounting {
public:
    int countTours(vector<string> g, int k, int m);
};

int TourCounting::countTours(vector<string> g, int k, int m) {
    int ret;
    return ret;
}


int test0() {
    vector<string> g = {"NYNY", "NNYN", "YNNN", "YNNN"};
    int k = 6;
    int m = 100;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> g = {"NYNNNNN", "NNYNNNN", "NNNYNNN", "NNNNYNN", "NNNNNYN", "NNNNNNY", "YNNNNNN"};
    int k = 40;
    int m = 13;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> g = {"NYNY", "NNNN", "YYNY", "NYNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
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
    vector<string> g = {"NY", "YN"};
    int k = 1500;
    int m = 1;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> g = {"NYYNYYN", "YNYNYNY", "NYNYNYN", "YYYNYNY", "NNYYNNY", "NYYYNNY", "YYYYYYN"};
    int k = 30;
    int m = 100;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> g = {"NYYY", "YNYY", "YYNY", "YNYN"};
    int k = 1000;
    int m = 10000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 3564;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> g = {"NYYYY", "YNYYY", "YYNYY", "YYYNY", "YYYYN"};
    int k = 1000000;
    int m = 1000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 703120;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> g = {"N"};
    int k = 63259;
    int m = 6534;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
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
    vector<string> g = {"NYNNNNNYNYNNYNYNYYNNYYYNYNNYNYYYNNY", "NNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNNNN", "NYNNNNYNNYNYYYYYYYYNNYYNYNYNYYYYYNY", "NNNNNNNNNYNNNNNNNYNNNNYYYNYNNNYYNNN", "YYNYNYYYNNYNYNYNYYYNYYYNYNNNYYYYNYY", "NYNYNNNYNYNNYNYNNYNNNYNYYNYNNNYNNNN", "YYNYNYNYNYNNNNYNYYNNYYYYYNYYYYYYNNY", "NYNNNNNNNYNNNNNNNYNNNNNYYNYNYNYYNNN", "YYNNYYYYNYYNYYNYYYNNYNYYYNYNYNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNNN", "YNNYNYNYNYNNYNYNYYNNNYYYYNYNNYYYNYY", "YYNYYYYYNYYNYYYYYYYNNYNNNNNYYYYYNYN", "NNNYNNNYNYNNNNYNNYNNNYYNYNYNYNNYNNN", "YYNYNYYNNYYNYNYNYYNNNYNYNNYYYYNYNYY", "NYNYNNNYNYNNNNNNNYNNNNYYYNYNYNYYNNN", "NYNYYYNYNYYNYYYNYYYNYNNNYNYYYNYYYYY", "NNNNNYNNNYNNYNYNNNNNYYYNYNYNYNYYNNY", "NYNNNNNNNYNNNNNNNNNNNNNYYNYNNNNYNNN", "YYNYNYNYNYYNYYYNYYNNYYYYYNYYYYYYNYY", "YYYNYYYYNYYYYYYNYYYNYYNYYNYYNYYYYYN", "NYNYNYNYNYNNYNYNNYNNNNNNYNYNNNYYNNN", "NYNYNNNYNYNNNNYNNYNNNNYYYNYNYNYNNNN", "NYNNNNNNNYNNNNNNNYNNNNNNNNYNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYNYYNYYYYYYYYYYYNNYYYYNNYNNYYYNY", "NYNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNNN", "NYNYNNNYNYNNYNYNYYNNYYYYNNYNYYYYNNY", "NYNYNNNNNYNNNNNNNNNNNNYYNNYNNNYYNNN", "NNNYNYNYNYNNYNNNNYNNNYYYYNNNNNYYNNN", "NNNNNNNNNYNNNNNNNYNNNNNYYNYNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "YYNNYYYYNYNNYYYNYNYNYYNYNNNYYNYYNYY", "NYNYNYYYNYNNYNNNYNNNYYYYYNYYYNYYNNY", "NYNYNYNYNYNNNNYNNYNNYYNYYNYNYNNYNNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
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
    vector<string> g = {"NNYYNYNNNYNYNNYYYNNNNNNNNNNNNNNNYNN", "NNYYNYYNNYNYYNYYYYNYNNNYYNNYNYNYYYN", "NNNYNNYNNYNYNNYNNYNNNNNNNNNNNNNNYYN", "NNNNNYYNNNNNNNYNNYNNNNNNNNNNNNNNNYN", "YNYYNNYNYYYYNNYYYYNYYNYNYNNNYYYYYYN", "NNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYN", "NYNYYYYNYYYYNYYNYYNYYYNYYYYNYYYYYYY", "NYYNNYYNNYNNNNYYYYYYNNNYNNNYYNYYYYN", "NNNYNNYNNNNNNNYNNYNNNNNNNNNNNNNNYYN", "YYNYNYYNYYNYYNYYYYNYNNYYYNNYNYYYYNN", "NNNYNYYNNNNNNNYNNYNNNNNNNNNNNNNNYNN", "YNYNNYYNNYNNNNYYNYNNNNNYNNNNNYYYYYN", "YNYYNNNNNYNYNNYYYNNNNNNNNNNNNYYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNYNNNYNYNNYNYYNNNNNNNNNNNYNNNYN", "NNYYNNYNNNNYNNYNNNNNNNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNYNN", "YNNYNNYNNYNYYYYYYYNYNNYYYNNYYYYNYYN", "NNYYNYYNNYNYNNYYNYNNNNNYNNNNNYYYYYN", "YYNYNYYNYNYYYYYYYNYYNNYYYYNYYYYYYYY", "YYYYYYYNYYYYYYYYYYYNYNYYNYYYYYYYYYY", "NYNYNYYNNYNYYYNYNYNYNNNYYNNYYYNYYYN", "YNNYNYNNNYNYNNYNYYNNNNNNNNNNNYNYYYN", "YNNYNNYNNNNYYYNYNNNYNNNYNNNNNNYYYNN", "YYYNNYYNNYYYNYYNYYNYNNYYYNNYYYYYYYN", "YYNYNYYNYYYNNYYYNNYNNNYNYNNNYYNYYNN", "YNYNNYYNNNNYYYYYYYNYNNNYNNNNNYNYYYN", "NNNNNYNNNYNNYYYYYYNYNNNYNNNNNYNYYNN", "NNYYNYYNNYNYNNYNNYNNNNNNNNNNNNNNYYN", "YNYYNYYNNYNNNNNYNYNNNNNYNNNNNYNNYYN", "NNYYNYYNNYNNNNYYYYNNNNNNNNNNNYNNYYN", "NNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YYNYNNYNYYYYYNYYYYNYNNYYYYYNYYYYYYN"};
    int k = 999999;
    int m = 999999999;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> g = {"NYNNYYNYYYYYYNNNNYYYYYNNYNYYNYNYYNY", "NNNNNYYNNYYNYNNNNYYYYYNNYYNYNYNYYNN", "NYNNNYYNYYYYNYNNYYYNYYYYYYNYYYNYYYY", "YYNNYYNYNYNYYYNNNYYYNYYNYYYYNYYYYNY", "NYNNNYYYYYNYYYNNNYYYYNNNYYNNNNNYYNY", "NNNNNNYNYYYNYNNNNYNYYNNNNNYYNYNYYNN", "NNNNNNNNNYNNNNNNNYNNYYNNNNYNNNNYNNN", "NNNNNYYNYYYNYNNNNYYYYYNNYYYYNYNYYNN", "NNNNNNYNNYNNYNNNNYNYYYNNYNYYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYYNNYNNNNYNYYYNNYNYYNYNNYNN", "NYNNNYYYYYNNYYNNNYYNNYNNYYYYNYNYYNN", "NNNNNNYNNYNNNNNNNYNNYYNNNNYNNNNYNNN", "NNNNNYYNYYYNNNNNNYNYYYNNNYYNNYNYYNN", "YYNYYYYYYNYYYYNNNYYNYNYNYYYNNYYYYNY", "YYNYYYYYYYYYYYYNYNYYYYYYYYYYYNNYYYY", "NNNYYNYYNYYNYNYNNYYYYNYYYNYYNYNYYNN", "NNNNNNNNNYNNNNNNNNNNYNNNNNYNNNNYNNN", "NNNNNYYNYYYNYYNNNNNYYYNNYYYYNYNNYNN", "NNNNNNYNNYNNYNNNNYNNYNNNYNYYNYNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNYNNN", "NNNNNNNNNYNNNNNNNNNNYNNNNNYNNNNNNNN", "NYNNNNYYNYYYYNNNNYYNYYNNNYYYNYNYYNN", "YYNYYYNYYYYYNYYNNYYYYYYNYYYYNYYYYNY", "NNNNNNYNNYNNYNNNNYNNYYNNNNYNNNNYNNN", "NNNNNYNNYNYNYNNNNYNNYYNNYNYYNYNYYNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYNNYNNNNYNNYYNNNNYNNNNYNNN", "YYNYYYNYYYYYYYNNYYYYYYYYYYNYNYYNYNN", "NNNNNNYNNYNNYNNNNYNNYNNNNNYNNNNYNNN", "YYNNYYYYYYNYYYNNNYYNNNYNYYYYNYNYNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNYYNNYNNNNYNYNYNNYNYNNYNYNNN", "YYNYNYYYNYYYYNYNNNNNYNNYNYYYNNNYYNY", "NYNNNYNYYYNYNYNNNYYYNYNNYNNYNYNNYNN"};
    int k = 999999;
    int m = 999999995;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> g = {"NNNNNNNNNNNNNNYNNNYNYNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNY", "NNNYYNNYYNYYYNYNYYYNYNNNYYYYNYYNYYY", "YYNNNNNYNNNYNNYNNYYNYNNNNYNNNNYNNNY", "YYNYNNNYNNNYNNYNYYYNYNNNNYNNNYNNYNY", "YNYYNNNNYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYNNYYNYYYYYNYYYYYYYYYYYYYNYYYNY", "YNNNNNNNNNNYNNNNNNYNNNNNNYNNNNYNYNY", "YNNYYNNYNNYNNNYNYYYNYNNNYNYYNYYNYYY", "YYYYNNNNYNNYYNYNNYYNYNNNYYYYNYNNYNY", "YYNYNNNYNNNYNNNNNYYNYNNNYYNNNYNNYNY", "YNNNNNNNNNNNNNYNNNYNYNNNNNNNNNNNNNY", "YYNYYNNYYNYYNNYNYNYNYNNNYNNNNYYNYYY", "YYYYYNNYYYYNYNYNYYNYYNYNYYYYNYYNYYY", "NNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "YYYYYNNNYNYYYYYNYYNYYNNNYNYYNYYYYNY", "YYNYNNNYNNYYNNNNNYYNNNNNYYNNNYYNYNY", "YYNNNNNYNNNYNNNNNNYNNNNNNYNNNNYNYNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YYYYYNNYYYYYYNYNNYYNYNNNNNNYNYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYNNNNYYYYNYYNYYYYYNYNYYYYYYYYNYY", "YYYYYNNYYYYYYNYNNYNYYNNNYYYYNYNNYNY", "YNYYYNNYYNYYYYYNYYYYNNYNYYNYYYNNYYY", "YYNYNNNYNNNYNNYNNYNNYNNNNYNNNNYNYNN", "YYNNNNNNNNNNNNYNNNYNYNNNNNNNNNNNNNY", "YYNYNNNYNNNYNNNNYYYNYNNNYYNNNYYNYNY", "NNNNYNNYNNYYNNYNYNYNYNNNNYYNNYYNNYY", "YYYNYNNYYYYNNNYNYNYYYNYNYYYYNYYNYYN", "YYNYNNNYNNNYNNYNNYYNYNNNYYNNNNYNYNY", "YYNNNNNNNNNYNNNNNNYNYNNNNYNNNNNNYNY", "YYYNYNNYYYYYYNNNNYYYYNYNYYYNNYYNNYY", "NYNNNNNNNNNYNNYNNNNNYNNNNYNNNNNNNNY", "YYNYYNNYNNYYNNYNYYYNYNNNNYYNNYYNYNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN"};
    int k = 999993;
    int m = 999999996;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> g = {"NYYNYYNNYYYYYYNNYYYNYNYYYYNYYYNYNYY", "NNYNNNNNNNNNYNNNNNYNNNYNYNYYNNNNNNN", "NNNNNNNNNNNNYNNNNYNNNNNNNNYNNNNNNNN", "YNNNYNYYYYNYYYYYNYYYYNYNYNYYNYNNNYY", "NYYNNNNNYYYNYYYNYYYYNNYYYYNYYYNNNYN", "NYYNYNYNYNYYYYYNNYYYYYYYYYYYYYNYNYN", "NYYNYNNNYNYYYYYNYYYYYNYYYYYYNYNNNYN", "YYYNNNNNYYYYYYNYYYYYYYNYYYYNYYYYNYY", "NNNNNNNNNNNNYYNNNYYNNNNNYNYYNNNNNNN", "NYYNNNNNYNNNNYNNNYYYNNYNNNYYNNNNNYN", "NYYNNNNNYYNNYYYNYYYYNNYNYYYYNNNNNYN", "NYYNNNNNNYYNNYYNYYNYNNNNYYYYNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYYNNNNNNNYNNNNNNNN", "NYYNNNNNYNNNYYNNYYYYNNNNYNNYNNNNNNN", "NYYNYYYNYNYYNNYNYYYNYYYYYYYNNYNYNNN", "NYYNNNNNYNNNYYNNNYYYNNYNYNYYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNNNYNNNNNNNNYNNNNNNNN", "NYYNNNNNNNNNYYNNNYYNNNYNYNYYNNNNNNN", "NYNNYNNNYYYYNYNNYNYYNNYYYNYYNYNYNNN", "NYYNYNYNYYNYYNNNYNYYNNYYYYNNYYNYNYY", "NNNNNNNNNNNNYNNNNYYNNNNNNNYNNNNNNNN", "NYYNNNNNYNYNYYYNYYYNNNYNYNYYYNNNNYN", "NNYNNNNNNNNNYYNNNYYNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNYNYNNNYYNNYNYNYNNNNNNNN", "NNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNYYNNNYNNNYNNNNNNNN", "NYYNNNNNNYNNYYYNYYNNNNNNYYYYNNNNNYN", "NYYNNNNNNYYNNYYNYYYYNNYNYYYYYNNNNYN", "NNYNYYNNNYNYYYYYYYYYYYYYYYNYYYNNNYY", "NYNNNNNNNYYNYNYNYYYYNNYYYYNYYYNNNYN", "YNNYYNYNYYYYNYYYNYYYYYNYYNYYYYYNNYY", "NYYNNNNNNNNNNYYNYNNYNNYNYNYYNNNNNNN", "NYYNYNNNYYYYYYYNYYNNYNYYYYYYYYNYNNN"};
    int k = 999993;
    int m = 999999997;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
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
    vector<string> g = {"NNYYYYYYNYYYYYYYYYNYY", "YNYYYNYYYYNYYYYYNNYYN", "YYNYYYYNYYNYYYYNYYYYY", "NYYNNYYYYYYYYYYYYYYYN", "NNYYNYYYYYNYYYYYYYYNY", "YNYYYNNYYYYYYYNYYYYYY", "YYYNYYNYNYNYYYYYYYYYY", "YYNYYYNNNNYYYYYYYNYYN", "YNYYYYNNNNYYYYNYYYYYN", "NYYYYYYYYNYYNYYNYYYYY", "YYNYYNYYYYNYYNYYYYYYY", "YYYYYYYNYYYNNYNYYYYYY", "YYYYYNYNYYYYNYYYYYNYN", "YYYYYYYYYYYYYNYYYYYNN", "YYYYNYNNNYYNYYNYYYYYY", "YYNYNYYNNNYYYYYNYYNYY", "YYYYYNYYNYYYYYYYNNYNY", "YNYYYYYYYNNYYYYYYNYYY", "YYNYNYYYYYNYYYYYYYNYY", "NYYYYYYYYYYYNYYYYYNNY", "YYYYYYNYYNYYYYYNYYYNN"};
    int k = 153023;
    int m = 425942388;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 370246026;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> g = {"NNYYYNYYYYYYYYYYYYN", "YNNYNYYYYNYYYYYYYYY", "NYNYYYYYYYYYNYYYYYY", "YYNNYNYYYYNYYYNYNYY", "YYNYNYYYYYYYYYYYNYY", "YYNYYNYYYYYYYNNYNYY", "YYNYYNNNNYYYNYYYYYN", "YYYYYYYNYNYYYYYYYNY", "YYYYNYYYNYYNYYNYNYN", "YNYNYYYYYNYNYYYYNYY", "NYYNYYYNYYNYYYYNNYY", "YYNYYNYYNYYNYYYYNYY", "NNYYYYYYYYNYNYYNYYY", "YYNNYYYNYNYYNNYYYNY", "YYNYYYNYYYYNNYNYYYN", "YYYYYYYYYYNYYNYNYYY", "YYNNNYYNYYYYYYYYNYY", "NNYYYYYYYNYYYYYYYNY", "YYYNYYYNYYYYYYYYYYN"};
    int k = 250434;
    int m = 549850819;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 310075629;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> g = {"NYYYYYYYYNYYYYYYNYYYYYYNYNYYYYY", "NNNYYYYYYYYNNYYYYYYYYYYYYYYYNYY", "YYNYYNYNYYYYYYNYYYYYYYYYYYYNYYY", "YYYNYYNYYYYYYYYYNYYYYYYNYYNYYYY", "YNYYNYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYNYYYNYYNNNYNYYNNYYYNYYY", "YYYYYYNYYYYYYYYNYYYYNNYYYNYYYYY", "YYNYYNNNYYYYYYYNYYYNYYYYNYYYYYY", "YYYYNYNYNYYYYNYNYYNYYYYYYYYYYYY", "NNNYYYYYYNNYNYYYNYYNYYYYYYYYYYN", "YYNNYYYYYYNYYYYYYYYYNYYYYYNYNYY", "YYYYNYYNYYNNYYYYNYNYYYNYNYYYYYY", "NYYYYYYYYYYYNYYYNNYYYYYYYNYYYNY", "NYYYYYYNYYYNYNYNYNYYNYYYYYYYYYN", "YYYNNNYYYYYNNYNYYYYYNYYNYNYYYYY", "YYYYYYYYYYYYYYYNYYYNYYYYYYYYYYY", "YYNYYYYYYYNYYYYYNYYYYYYYYYYNYYY", "NYYNYYYYNYNYYYNYYNYYYNYNYYYYNYY", "YYNYYYYYNYNYNYYYYNNNYYNNNYYNYYY", "YYYYYYYYYYNYYYNNYYYNYYYYYYYNYYY", "NNYYYNYYYYYYNYYYYYNYNYYYYYYYYYY", "YNYYYYNYNNNYYYYYYYYYNNYYYYYNYYN", "NNYYNYYNYYNYYYYYYYYYNYNYNYYYYYY", "YNYYYYYYYYYYNYYYYYYYYYYNNYYYNYY", "NYNYYYNYYYYYYYNYYYYYYYYYNYYYYYY", "YYNYYYYYYYYNYYNYYYYYYYYYYNYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYNYYYYYYYYYNYYYNYNNYYYYYYNNYY", "YNNYYNNYYYNYNYYYYNYYYYYYYYYNNYY", "YYYYYYYYYYYNYYYYYYNYYYYYYYYNYNY", "NYYYNYYNYYYNYNYYYYYYYYYYYYYNYYN"};
    int k = 903622;
    int m = 492470979;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 246423461;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> g = {"NYYYYYYYYYYY", "YNYNYYYYYYYY", "NYNYYYYNYYYY", "NYYNYNNYNYYY", "YYYYNYYYYYYY", "YYYYYNYYYYYY", "NNYYNYNNYYYY", "YYYYYYYNYYYY", "YYYYYYYNNYYN", "YNYYYYYYYNYY", "YYYNYYYYNNNY", "YNNYYYYYYYYN"};
    int k = 284768;
    int m = 680243274;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 99075099;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> g = {"NYYYYNYYYNYNYYYNY", "YNYYYNYYYYYYNYYYY", "YYNNYYYYNYYYYYYYY", "NYYNYYYNNNYYYYYYY", "YYYYNYNYYNYYYNYYY", "NYYYYNYYYYYYYYYYY", "YYYYYYNNYYYNYYYYY", "YNYYYYYNYYNYNYYYY", "YYYNNYYYNYYYYYYYY", "YYYYYYYYNNYYYYYYN", "YNYYYNYYNYNNYYYYY", "YYYYYYNYYNNNYYYYN", "YYYYYNYYYNNNNYYNY", "YYNYYYYYYYYYYNYYN", "YYNYYYYYYYYYYYNNY", "YNYYYYYYYYNYYYYNY", "YYYYNYYYYYYNNYYYN"};
    int k = 648373;
    int m = 316293807;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 67265346;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> g = {"NNNYNNYYYYNNY", "NNYNYNYYYYYYY", "YYNYYYNYYYYYY", "YYYNYNYNYYYYY", "NYYYNYYNNYYNY", "NYYNYNYYNYYYY", "YYNYNYNYYYYYN", "YYYYYNYNNYYYY", "NYYYYNYYNYYYY", "YYYYYYYNYNYNY", "YYYYYYYNYYNNY", "YYYYNYYNYYYNY", "YYYYYYYYYNNYN"};
    int k = 179266;
    int m = 379430920;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 114082384;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> g = {"NNNYNYYYYNYYYYYYNY", "YNYNYYYNYYYYYYYYNY", "YYNYYYNYYYYYYNYNYY", "YYYNYYYYYYYYYYYYYY", "YYNYNYYYYYYYYYYNYY", "NNYYYNNYNYYYYNYYYY", "YYYYYYNYYYYYYYYYYN", "NYNNYYYNNNYYYYYNYN", "YYNYYYYYNYNYYYYNYY", "YYYYYYNYYNYYYYYNYN", "NYYYYYYYYYNNYYYNYN", "YYYYYYYYYYYNYYYNNY", "YNYYYNNYYYYNNNNYYN", "NYYYNYNYYYYNYNYYYN", "YNYYYYNNYYYYYYNYYY", "YYYNYYYYYYYYYYYNYY", "YYYYYYYYNYNNYYYYNY", "YYYNYYYYYYYYYYYYYN"};
    int k = 956759;
    int m = 125835076;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 108084190;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> g = {"NYYYYNYYNYYYYYYYYNYYYN", "YNNYYYYYYYYYYYYYYYNYYN", "YYNNYYYYYYYYYYYYYNNYYY", "YYYNYYYYNYNYNYYYYYYNYY", "YNYYNYYYYYYYYNYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYY", "YYYYYYNYYYNYYNYYYYYYYN", "YNYYYYYNYYYYYYYYYYNYYY", "NYYYYYNYNYYNYYYYYYNYYN", "NYYNYYYYYNYYYYYYYYYYYY", "NYYYYNYYYYNYYYYYYYYYYY", "YYYYYYYYYNYNYYYNYYNYYY", "NYYYNYNNNYYYNYYNYYYYYY", "YYYYYYYYYNNYYNYYNYYNYY", "YYYYYYYYYYYNYNNYYYNYYY", "NYYYNYYYYNYNYYYNYNYNNY", "NYYYNYYYYYYNYYYYNYYYNY", "YYYYYYNYNYYYYYYYYNNYYY", "YYYYYYNYYNYYYYYYYYNYYN", "YYYNYYYNYNYYNYYYYYYNYN", "YYYNYYYYYYYNYYNYYNNYNY", "YYYYYYNYYYYYYYYYYYNYYN"};
    int k = 240472;
    int m = 536692471;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 252925027;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> g = {"NYYYYYNYY", "YNYYYYYYY", "YYNYYYYYY", "YYNNYYYNN", "YNYYNYYYY", "NNYYYNYYY", "NYYYNYNYN", "YNYYYNYNY", "NYNYNNYNN"};
    int k = 910186;
    int m = 831041521;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 517605865;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> g = {"NYYYYNYNYYYYYYNYY", "YNNYYYYNYYYYYYYNY", "YYNNYYYYYYYNYNYYY", "YYYNYYYYNYYYYYYYY", "YYYYNYYYYYYNYYYYY", "YYYNYNYYNYNNYYYYN", "YYYYYYNYYNYYNYYYY", "YYYYYYYNYYYYNYYYY", "YYYYNYYYNNNYYYYYY", "YYNNYYYNYNYYNYYYY", "YNNYNNYYYYNYYNYNY", "YYYYYNYYYYNNYYYYN", "YYNYYYYYYNYYNYYYN", "YYYYNYYYNYYNYNYYN", "YYYYYYNYNYYYYYNNY", "NYYYYNNYYYYYYYYNN", "NNYYYYYYYYYNNYYNN"};
    int k = 925522;
    int m = 412928870;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 261165482;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> g = {"NNYYYYNNYYYYYYYYYYYNYYYYNYYYY", "YNYNYNYYYNYYYYNYNNYYYYYYYYYYY", "YYNYYYNYYYYNNYYYNYYYNNYYYNNYY", "YYYNYYYYNYYYYYYNYYYYYYYYYYNYY", "YYYNNYYYYYYYYNNNYYYYYYYYYNNNY", "YYYYYNNYYYNYYYNYYYYYYYYYNYYYN", "YYYNNYNYNNYYNNNYYYYYYNYYNNYYY", "YYYYYYYNYYYYNYYYNYYYYYYYYNYYY", "YNYYYYYYNYYYYNYYYYYYNYYYYYNYY", "YYYYYYYNYNYYNNYNNYNYYYNYYYYYY", "NYYYYYYYYYNYYNYNYNYYYYYYYYYYY", "YYYYNYYYYNYNYYYYYYNNNYYYYYNYY", "NYYYNYYNYYYYNYYYYYNYYYYYYYYYY", "NNYYYYNYYYYYYNYYYYYYYYYYYNYYY", "YYYYYYYNNYNNYYNYYYNYYYYYNYNYY", "YYYYYNNYYYNYYYNNNYNYYYYYYYYYY", "YYYYYNYNYYYYNYYYNYYYYYYYYYYYN", "NYYYYYYYYNYYYYYYYNYYYYYYYNNYY", "YYYNNYYYYYYYYNYYYNNYNYYNYYNYY", "YYYYYNNYYYYYYYYYYYYNYYYYYYNYY", "YNYYYYNYYYYYNYNNYNYNNYYYYYYYY", "YYNYNYNYYYNNYYNNYYYYYNYNNYYYN", "YYNYYYYYNNYNYYNYYYYYYYNYYYYYY", "YYYYNNNYYYYNYYNYNYYNYYYNNYNYY", "YNYYYNYYYYYYYYNYYYYYYNYYNNNYY", "YYYYYYYNYYNYYYYYYYYYYYNYNNYYY", "YYNYYYYNYYNYNYYYYYYYYYYYYYNYY", "NYNYNYNNYYYYYYYYYYYYNYNNYNYNY", "YYYYYYYYYYYYYYYYNYYYYNYYYNYYN"};
    int k = 431477;
    int m = 974881204;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 122578327;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> g = {"NNY", "YNY", "YYN"};
    int k = 796325;
    int m = 389526560;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 308364655;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> g = {"NYYYYYYN", "YNYYYYYY", "YYNNYYYY", "YYNNNYYY", "YNYYNYYY", "YYYNYNYY", "YYYYYYNY", "NYYYYYYN"};
    int k = 249853;
    int m = 420847433;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 172988340;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> g = {"NYNYNNYYYYYYYYY", "YNNNYNYYYYYNNYN", "YYNYNYYYYNYNYYY", "YYYNYYYYYYYYNNY", "YNYNNYYNYYYYYYY", "YYYYNNYNYYYYNNY", "NYNYNYNYYYYYNNN", "YNNYYYYNYYYNYYY", "YYYNNYYYNYNYYYY", "YYYYYNYYYNYYYNY", "YYNYYYNYYYNYYYY", "YYYYYYYYNNYNYYN", "YYNNYYNYYYYNNYN", "YYYYNYYNNYYNNNY", "YYNYYYYYYYYYYNN"};
    int k = 954794;
    int m = 958423291;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 949661123;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> g = {"NYY", "YNN", "YYN"};
    int k = 733742;
    int m = 846545221;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 246214782;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> g = {"NNNYNYYYNYYYYYYYYY", "YNYYYYYNYYNYYYYNYY", "YYNYNYNYYNYNYYNNYY", "YYYNYYYYYYYYYYNYYN", "YNYYNYYNYYYYYYYYNY", "YYYYYNYYYYYYYYYYYY", "YYNYYYNYYYYYNYYYYY", "YYYYNYYNYYYNYYYYYY", "YYNYYNYYNYYYYYYYYY", "YYYNYYYYYNYNYYYYYY", "NYYYYYYYYYNYYYYYYY", "NYYYYYYYYYYNYYYYNY", "YYYYNYYYYYNYNNNNYY", "YYYYYYYYYNYYYNYNYN", "YYYYYYNNNYNNNYNYYY", "YNYYYYYYYYYYYYYNYY", "YYYYYYYYYNYNNYNYNN", "YNYYYYNNYYYYYYYYYN"};
    int k = 786674;
    int m = 947338140;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 157863285;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> g = {"NYYYYYYYYN", "YNNNYYYYYY", "NYNYNYNYYN", "YYYNYNYYYY", "YYNNNYYNYY", "YYYYNNYYYY", "YYNYYNNYYY", "YYYYYYYNYN", "NYNYYYYYNY", "YYYYYYNYYN"};
    int k = 433609;
    int m = 349352871;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 149815560;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> g = {"NYYNYY", "NNYNYY", "YNNYYY", "YYYNYY", "YYYYNY", "NYYYYN"};
    int k = 560318;
    int m = 504234097;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 306809271;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> g = {"NNYYYYYYYYNYYYYYYNYYYYY", "YNNNYYYYYYYNYYNNYYYYYNN", "YYNNYYYYYNYYYYYYYYYYNYY", "YYNNYYYYYYNYYYYYYYNNNNY", "YNYYNYYYYYYYYYYYYYYYYYY", "YYNYNNYNYYYYYYNYYNYYNYY", "YYYNYYNYYYYYNYNNYYYYYYY", "NYYNYYYNYYNYYYYYYYYYYYY", "YYYYYYYYNYNNYNNYYYYYNYY", "YNYNNYYNYNYYYYYYYNYNYNY", "NYYYYNYNNYNYYYYYNYYYYYY", "YNYNYYNNYYYNYYYYYYYYYYY", "YYYYYYYYYYNYNYNNYNYYYNY", "YNYYYYNYYNYNNNYYNYYNYYN", "YYYYNNYYYYYYYNNYNNNYYNY", "YYYYYNYNNYYYYNYNYYYYYNN", "YYNYYYYYYYYYYNYYNYYNYYN", "NYYYYYYNYYYYNYYYNNYYYNY", "YYYYNYYYNNYYYYNYYYNYYYN", "NYYYYYNYYYYNYYYNYYNNYNY", "YYYYYNYYYYNYYYYYYYYYNYY", "YYNNNYYYYYYYYNYYYYYYNNY", "NNYYYYNYYYYYYYNYYNYYYYN"};
    int k = 32905;
    int m = 234408667;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 144059818;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> g = {"NYNYYY", "YNYYYY", "YYNYYY", "YYYNYN", "NYYYNY", "NYYNYN"};
    int k = 691937;
    int m = 660581376;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 470558974;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> g = {"NYYYYYYNNYYYYNYNYNYNNNNNYNNYNYY", "YNYNYNYYYYYYYNYNYYYNYYYYYYNYNYY", "YYNYYYYYYYYYNYYYYYYYNYYYYYYYNYN", "YYYNNYYNYNYYYYYYYYNYYYYNYYYYYYN", "YYNYNYYYYYYYYNYYYNYYNYYYYYYYNNY", "YNYYYNYYNYYYYYYNYNNYNYYYYYYYYYY", "NYYYNYNYYYYYYYYYYYYYNYYNNNYYYYY", "YYYYNNYNYYYYNYYYYYYYNYYYYNYYYNY", "NYYYYYYNNYYYNYYYYYYYYNYYNYNYYYY", "YYYYYYYYYNYYYYYYYNYYYNNYYNYNYYY", "YYYNNYYYYYNYYYYNNYYNYYYYNYYYYYY", "YYYNYYYYNYNNYYNNYYYNYYYYYYNYYYN", "YYYNNNYYYYNNNYNYYYYYYNNYNYYYNYY", "YYNNYYYYNYYYYNNYYYYYYNNYNNNNYYY", "YYYYYNYYYYYYYYNYYYYYYYNYYYYYYYY", "YNYNYYYYNYNYYNYNYYYYYYYYYYYYYYN", "YYNYYYYYNYNNYYNYNNYYYYYYYYYYYYY", "NYYYYYYYYYYYYYNYYNYYNNYNYYYYYNY", "NNYYYYYYNYYYYYYYNYNYYYYYYNYYYYY", "NNYYYYYYYYYYYYNYYYYNYYNYYYYYYNN", "NYYYYYYNYYYYYYNYYYYYNYYYYYYYYYY", "YYYYYYYNNYYYYYYYYYYYYNYNYYYYYYN", "YYYYYYNNYYYYYYNYYYYYYYNNNNYYYNN", "YYYYYNYNYYYYNYYYYYYNYYYNYYYYYYY", "YYNYYYYYYYYNNNYNYYNYYYYYNYYYYYY", "YNNYYYYYYYYYYYYNYYYYYYYYNNYYYYY", "YYYYYYYYNYYYNYYYYYNYYNYYYYNYYYY", "NYYYYYYYYYNNNYYYYYYYNYYYYYYNYYY", "YYYNYYNYYNYNYYYYYNYYYYYYYNYYNYN", "NYYNYYYYYYYYYNYYYNYYYYYYYYYYNNY", "YYYYNYYYNYYYYYYYNYNYYYYYYYNYYYN"};
    int k = 944715;
    int m = 509088589;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 182158041;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> g = {"NYYYYNYYYYNYYYNNYYYNYNNNY", "YNYYNNYYNYNYYYYYYYYYYYYYY", "YYNYYYNYNYNYYYYYYYYYYYYYN", "YYYNYYYYYNYNYYYYYYYYNNYYY", "NYNYNYYYYNYNYYYYYYYYYNYYY", "NYYYYNYYYYYYYYYYYYYYNNYYY", "YYNYYYNYYNNYYYNYYYNYNNYNY", "YYYYYYYNYYYYYYYNNYYYYYYYY", "NYYNYYYNNYYNYNYNYNYYYYYYY", "YYYYNNYYYNYYYYNYYYNYYYNYY", "YYYYYYYYYYNNNNYNNYNYYYYNY", "YNYYNYYNNYNNYYNYYYYYYYNYY", "YYYYYYNYYNYYNYNYNYNYYYYYY", "NNYYYYYNYYYYYNYYYYNYYYNYY", "YNYYYYNYYNYYYYNYNNNYYYYYN", "YYYYNYYNYYYNYYNNYYYNYYYNY", "YNNYYYYYYYYYYYNYNYYYYYNYY", "YNYYYNYYYYYYYYYYYNNNYNYYY", "YNNNYYNYYYYYNYYNYYNYYNYYN", "YNYYYYYYYYNYNYYYYYYNYYYYY", "YNYYYYYYNYYYYYYYNYNYNNNYN", "YYYYYYYYNYYYYYYYYYNYYNYYY", "YYYNYYYNNYYYNNNYYYYNYNNYN", "YYYYYNYNNYYYYYYNYYYYYYYNY", "YYYNNYYYYYYYYYYYYYYYNYYYN"};
    int k = 476356;
    int m = 582237740;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 481206028;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> g = {"NNNYNNYYYYYNYYYYYNYYYYYNYYYYYYYNYY", "YNYNYYNYYYYYNYYYYYYNYYYYNYYYYYYNYY", "YYNYYYYYYYYYNYYYYNYYYYYYYYNYNYNYYY", "YNYNYYNYYYYYNYNYNYYYNYYYYNYNYYYYYY", "YYYYNYYYNYYYYYYYYNNYYYYNYNYYYYYNYY", "YNYYYNYYNYYNNYNYYYYNYNYYYYNYYYYYYN", "YYYYNYNYYYNYNYNYYNYYYYYYYNYYYYNYYY", "YYYYNYYNYYYYNYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYNNYYYNYNYYNYNYNYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYNYYYYYYNYNYYYNYY", "YYYNYYYNYYNYYYNYNNYYYNYYYYYYNYYYYN", "YYNNYYYNYYYNYYYYYYYNNYYYYNYYYYYYYY", "YYYYYNYYNYYNNYYYNYYNYYYYYYYYNNYYNY", "NYYYYYYYNYYYNNYYYYNYYYYYYNYNYNYYYY", "NYYYNYYYYYYYNYNYYYYYYYYYYYYYYNNYYY", "YYYYYYYYNYYNYYNNYYYYYNYYYYNNYNYYYY", "YYYYYYYYYYYNNYYYNYYYYYYYYYYYYYYYNN", "YYYYYYYNYYNYYYYYYNYYNNYYYYNYNYYYNY", "NYYYYYNNYYNYYNNYYYNYNYNNNNYYYYNYYY", "YNYYYYYYNNYYYYYYNYYNYYNYYYYNYYYYYY", "YYYYYYYYNYYYYYYYYYYNNYNYNYYYYYYYYY", "YNYYYYYNYNYYYYNNYNYYNNYYYNNYYNYYYY", "YYYYYYYYYYYYYYYNYYNYYYNYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYNNYYYNYYYYYYNYYY", "YYYYYYYYYYNYYYYYNYYYYYYYNYYYNYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYNYYYYNYYY", "YNYYNYNYYYYYNNYYNYYYYYYYYYNYYYYYNY", "YYYYYYNNYYYYYYYYNNNYYNNYYYNNYYYYNY", "YYYYYYYYYNNNYYYNYYYYYYYYNYYYNYYYYY", "YYNYYYYYYYYYYYYYYYYYYNYNYYNYYNYNYY", "YYYYYYYYYYYYYYYYYYYYYNYNYYYYYYNYYN", "YYYYNNNYYYNYYYYYYYYYYNNNYYYYYYYNYY", "YYYYYNYYYNYYYYYYYNYYNNNYYYNYNYNNNY", "YNNYYYYYYYYNYYYYYYNNYYYNYYNYNYYYYN"};
    int k = 370362;
    int m = 876268478;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 34176220;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> g = {"NYYNNYNYNNNYNYYYNYNYYYNYNNYYYNNNY", "YNNYYYYNNYNNYYNNNNNYYNYYNNNNNYYYN", "NNNNYYNNNNNYNNYNNYNNNYYNYNNYNYNYN", "NYYNYYNYNYNNNYYNNYYNNYYNYNYNYYNNN", "YNNYNNYNYYYYNNNYNNNNYYYYYNYYNYNNN", "YNNYNNYNYYNNYNNNYYNNNYNYYNNNNNNYN", "YYYYYNNYYNYYYNYYNYYYNYYYYNNYYYNNY", "YNNYNNNNYYYNYNNNYNYNYYYNNYYNNYNYY", "YYYYNYNNNYYYNNNYNNYNYNNYNNNNYNNNN", "YNYYYNNYYNNNNNYYNNYNNNNYYNNYYNYYY", "YNNYYNYNYNNNNYYYNNYNYNNYYYNNNNNNY", "YNYNNNYYYYYNYNNNYNNNNYNNYNYYNYNNN", "YNNYYNYNYYYYNYNNNNNYNNNYNNNYYYNYY", "NYYYNYYNNNYNYNYYYNNYYNYYNNYYNNNNN", "YNNNYNYNNNNNYNNYYYNNNYNYNYNNYYYYY", "YYNNYNYYYYNYYYYNNYNNYYYYYNNNNNYYN", "YNNYNNNNNNNYYNNNNYNYYYYYNNYNYNYNN", "NYYNYNYNYYYYYNNYYNYYYNYYNYNYNNYNY", "NNNYNYNYNYNNYNNNYYNNNNYNYNYNYYNYY", "YYNYNYNNYYYNYNNNYYNNNYNYYNYNYYNNY", "YNNYYNNNNNNNYNYNNYYYNYNYYYYNNYYYY", "YYNYNNYYNYNYNYNNNYYNNNYYNYNNNNYYY", "NYYYNYYNYYYNNYYNYYYNYNNNNYYYYYNNN", "YNYYNNYNYYNNNYNNNYNYYYNNYYNYYNNYN", "YNNYYYNNYYYNNYYYYNYYNNNNNYNNYYNNY", "NNYNYNNNYNYYYYYNYNYNYNNNNNYNNNNYY", "NYNNYNNYYYNNNNNYYYYNNNNYNYNYNYYNN", "YYNYYYYNYNYNNNNNNNYNNYNYYYYNYNNNN", "NYNYYNYNYNYNNYNNNNYNNNYYNNNYNNYYY", "YNYNNNYNYNYYNYNYYNNNYNYNNYNNNNYYN", "YYNNNYNYYYYYYYYNNNYNNNYYYNNYYYNNN", "NNNYYYNYNNYYNYNNYNYNNYYNYNYNYNNNY", "YNNNYNYNNNNNYNYNYYNYNNNNNNNYNNYNN"};
    int k = 471606;
    int m = 791902111;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 533689418;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> g = {"NNNYNYYNYYYYNNYNYNYNYNNNNYYYNNNYNN", "NNNYNYYNYNNNYYNYYNNYYYNYNYYYNNNNYN", "NYNNNYYNNNNNYYYYYNYYYYNYYYYNYNNYYN", "YNYNYYYNNYYYNNYYYNYYYNNYYNYNYYNNYY", "NYNYNNNYNYNYNNYNNNYYYNNNYYNNYYNNNY", "YNNNYNNYYNYYNNNNNNYYYYYYYNNNNNYNNY", "NNNYNNNNNYYYNNNNYNYNNNNYYNYYNYYNYY", "NNNYNYYNYYNNYNYNNNNYNYYYNYYYYYNNYY", "NYYYYNNYNNYNNNNNYYYNNNYNNNYNNYYNNY", "NNNYNYNNNNYNNNYYYNNYNYNYNNNYYNNYNY", "YNYNNYNNNNNNNYYYNNNNNNYNYYYYYYNYNN", "NYNNYNNNYNYNYYYYYNNYNYYNYYNYYYNNNN", "YNYYYYYNNNYYNYYYNNYNYNNNNNNNNNYYNY", "NNYNNNNYNYNYNNNYNYYNYNNYYNNNNYNYNN", "YNYYNYNYYYYNYYNYYNNNNNNYYNNYYNNNNY", "YNYYNYYNYYNYYYYNYNYYNYNYNYNNYYNYYN", "YYNNYNYNYNNYYYNNNYYYNNYYYYNYNYYYYY", "NYYYNYNYYYNNYYYYNNNNYNNNNYNYYYYNYY", "NYYYYNYYYNYYYYYYNNNNNNYNYYYNYNYNYY", "YNNNYYNNNNNNNYYYNYYNNNYYNNYYNNYYYY", "NYNNNYNYNYNYNNYYYYYYNYNNNYNNNYNNYY", "YNNNYNYYNYYNNYYYNNNNYNNNYYYYYYYYNY", "NNYNNYNNNNNNYNYNYYNNNYNYYNNNYYNNNN", "NYYNYNYNYNYYYYYNNNNYYNYNNYYNNYNNYN", "YNNNNYNYNYNYYNYNNYYNYYYNNYNNNNNYYN", "NYNNYNNYYYYNNYYYNNYNNYNNYNYNYYYNNN", "NYYNNYNYYNYYYYYYNNYYNNNNYYNNNNYNNY", "NYNNYYYNNYNYYYYNYNNNNNNNYYYNYYNYNN", "YNYNNYYYYYYNYYYYNYYNNYYYNNNNNNYYYN", "YNNNYNYYNNYNNNYNNNNNNYNNNNYYYNNYYN", "NYNYNYNNNNYNYNNYYYYYNYNNNYNNYNNNNY", "NYNNNNNYYYYYNNNNNNYYYNYNNNNNYNNNYN", "YNYNYYNNNYYYYYYYNNYNYYYNYYNNNYYNNY", "NNNNYNYNYYYNNYYNNNNNNYYNYNNNYYNYYN"};
    int k = 841561;
    int m = 75924128;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 43915828;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> g = {"NNYYY", "NNYNY", "YYNNN", "YYNNY", "YYNNN"};
    int k = 560837;
    int m = 671002729;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 429703414;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> g = {"NNNNYYNYNYNYN", "YNYYYYYYNYNYY", "YNNYNNNNNYNNY", "NYYNYNNNNNYYN", "NYYNNYYNYNYNN", "YYNYYNYYNYNNY", "NYNYNYNYNNNYN", "YNYYNNYNNNYYY", "NNYNNYNYNYNNY", "YNNYYNYYYNYYY", "YNNYYYNNNYNNN", "YYNYYYYYNYYNY", "NNYNNYYNNNYNN"};
    int k = 194735;
    int m = 600429977;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 95996541;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> g = {"NNNNYNNNYYYNNYYNNYNNNYNNYYYNYNNYN", "YNNYYNNNNYYNYYNYNNNNNNNYNNYYNYNYY", "NNNYYYNNYYNNNNNYNNYNNYNYNNNYNYYNN", "NYYNNNNYNYYYNNYNYYNYNYYYNNYNNNYYN", "YNYYNNYYYNYNYYNYNNNNYYYNNNNNNYYYN", "YNNYNNYYNNNYYYYNYNYNYNYNNNYNNYYYY", "YYNNYNNYNNNYYYNNNNYNNNYYYYNNYYNYY", "NYNNNYYNYNNNYYNYNYNNYNNYNNNNYYNYN", "YNYYYYYNNNYNNNNNNYNNNNNYNNNNYYNYY", "NNYNNYNNNNYNYYYYNNYNNNYNYYNNNYNYY", "NYYNYNYYNNNNNYNNNNNYYNNYYYNNNNNYY", "YNYNNNYYNNYNYNYYYNYNNYNNNNYNNNNYN", "YYYYYNNYNYNYNYNNNNYYYYYYNNYYNNYNN", "YNYYNYNYYYNNNNNYYNNYNNYYNNNNYNYNY", "YYYNNYNYYNNNYNNNNYYYNYYNNNYNNNNNN", "YNYNNNNYNNYNNYNNYYYYYNNYNNNYYNYNN", "NYYNNNNNYYNYNYYYNNYNYNNYYNYYNYYYY", "YNNYNNNNYYNYNYNNNNNNNNYNNYYNNNYNY", "NYNYYYYNNNNNNNNNNNNYYYNNNNNYNYYYN", "NNYYNYYNYYNNNNYNNYYNNYYNYNYYYNYNN", "YNYNNNNNYYYNNYYNYNNYNNYNNNYYYNYYN", "YNYNYNYYYNNNNYYNNYYNNNNYNYYYNNYNN", "NNYYNYYNNYYNNYYNYNNYNNNYNNYYYNNYY", "NYYNYYYNNYYYNNYYNNYYYYYNYYNYNNYNN", "NYYNNYNNNYNYNNNYNNYNYYNYNYNNYYYNN", "YNYNNYYNYNYYYNYNNYNYNYYYNNYYYNNYN", "NYYYYYNYNNNYYNYYNNYYYNYYYYNYNYYNY", "YNNNYYYYYNYYYNYYNNYYYNNYYNNNNNNNY", "YYNYYNYNNYYNNYYYYNYNYNYNNNYNNNNNY", "NYYYNNNYNNNYNYYYNYYNNYYNYNYNYNYYN", "NYYYYNNYNYYYYNNNNNNNNNYNNNNNYNNNY", "NNYYYYYNYNNYYNYYYYYYNYYYYYNNNYNNY", "NNNNYYYYNYNNYYNYYNNYNNNNNNNNYNYYN"};
    int k = 492053;
    int m = 478836701;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 264866978;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> g = {"NNYYNYNYNNNNYNYNNYNNYNY", "NNYNYYNNNNNNNNYNNNYNYNY", "YYNNYYNYYNYNNNNYNNNNYYY", "YYYNYNNNYNNNYYYYYNNNNNY", "NNNYNNNYNYYNNNYYYYNYNNN", "NYYNYNNNYYYNYYNYNNNNNYN", "YNYNNNNNYNYYNNYYNYNYYNN", "YYYYYNNNYNNNYYYYNYYNYNY", "NYYNNYNYNYYNYYYYNYNYYNN", "NNNNNNYYNNNNNYYYYYYNNNN", "YNYNNNNYYYNNNYNNYNYYNNN", "YYYYNNNYNYNNYNYYNNNYYNY", "YNNNYNNYNYNNNNYNYNYNYNY", "YYYNNNNYYNNYYNNNNYNNYYN", "YNYYYNYYNNYYNYNYYNNYNYN", "YNNNYNNYNNYNYYYNYNNNNYN", "YNYNNNNNYNNYNNNNNNNNYNY", "NNNNNYNNYYNNNNNYYNNYNNN", "NNNYYNNYYNNNYNNNNNNNYNN", "NNNNYYNNNNYYNNYNYYYNNYN", "YNYYNNYNNNNYNNNYNYYYNNY", "YYNYNYYYYNYYYYNNYNNNNNY", "NYYYYYYNNNYNYNNNNNNNYNN"};
    int k = 571263;
    int m = 106228941;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 92314719;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> g = {"NYYNN", "NNNNN", "NYNYN", "YNNNN", "YYYYN"};
    int k = 910268;
    int m = 550338972;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 910266;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> g = {"NYYYYYYNYYYYYYNNNYYNYNNNYY", "YNNYYNNNNNYNYNYYNYNNYYYNNN", "NNNNNYYYYNNYYNYYYNYYNNYNYY", "NNYNYNYYNNNYNNNYYNNYYNYYNY", "NYNNNNYYYYYNYYNNNNNNNNNYYY", "NNYNYNYYNNYNYYYYNNYNNNNNYN", "YNYNNNNNYYNNNNNYYYYYYYNNYY", "NYNYNYYNNYNNYNNNNYNNYYNYYY", "YNYNNNYNNYYNYYNNYYYNNYNNYN", "YYNNYYYYNNYNYNNYNYYNNNNNYY", "NYYNNNYYNNNNNNYNYYYNNNYNYN", "NYYYYNYYNYYNYNNYYNYNNYYNYY", "NYNNYNYYNNYYNNYYYYNNYYYYNN", "NNNNYYYYNYNNNNNNYNNNYYNNNY", "NNYNYNYYNYYNYNNYYNNYNYYYYN", "YNNYNNNNNYNNNYNNNYNYNNNYNY", "NNYYNYNNYNYNNYNYNYYNNNNNNY", "YYNNYYNYNYNNYNNNYNYYYNNYNY", "NNYYYNNNYNYNNYYNYYNNNNNNNY", "NYYYYNNYNYNNYNNYNYNNYNNNYY", "NNYNYYNNYNNNNNNYNYYYNYNNYN", "YNYNNYNYYNNNYYNNNYNNNNYNNY", "NNYYYYYNYYYYNYNNYNYYNYNYYY", "YYNNNNYYNNYYNYNYYYNNYNYNNY", "YYYNNYNNYNYYNNYNYNNNYYNNNY", "YYNYNYYNNNNNYNNNNNNNNYNYYN"};
    int k = 513161;
    int m = 33814474;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2726691;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> g = {"NYYNYNYYYNNYYYYNYNNYN", "YNYNYYNYYYYNNYYNNNNYN", "YYNNNYNNYYYYYNYYYNNYY", "YNNNYNNYYYYNYNYYYNYYY", "YNYNNYNYYNNNYNNYNYNYY", "YNYYNNNYNNYYNNNNNNYNY", "YYYNYNNYYNYYYYYYNYNYN", "YNYYYYYNNYNNNYNNNYNNN", "NYNNNYNNNYYNNNNNYNYYN", "NYYNYYYYYNNNNYYYNNNNN", "NYYYNNYNYNNNYYYYNNNYY", "NNNYNYNNYNYNYNNYNNNNN", "YYYYYYNNNYYNNYYNNYYNN", "YNNYYYYYYNYYYNYNNYNNY", "YYYNYNYYYYYNNYNYYNYYY", "YYYNYNYNNYYNNYNNNYYYY", "YNYNYNYYNNNNNNNYNYYNY", "NNNNYNYNYYNYNYYNYNNYN", "NYNYYNNNYNYYYNNYYYNYY", "YYYYYNNYNYYNNNNYNNNNN", "YYYNNNYNNNNYYYYYYNNYN"};
    int k = 592494;
    int m = 492046793;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 420184068;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> g = {"NNNNYNNYYNYNNYNYNNYNYYYNNYYNY", "NNYYNYNNYNNYYNNNYYNYNNYYNYNNY", "YNNNNYNYYYNNYYNNYNNYYNYNNNNYY", "NNNNNYYYYYYYYNNYYYYNNYNNYYNYN", "YYYNNNYNYNNYYYYYYNYNYYNNYNNNY", "NYYNNNYYNNYYNNYNYYYYNNYYYYYYN", "NYNNNYNNYNYNNNYNYYYNNNNYNYYNY", "YNYYNNYNYYYYNNYNNYNNNNYNYNNNY", "NNYNYNYYNNNYYNYNNNYYNYYNNNYYY", "YNYNYNYNYNNNNYNYNNNYYYYYNYYYN", "YNYNYNNYNYNYNNNYYNYNYNYYNNNNN", "NNNNNNNNYYYNYNYYNNNYYYYYYYYNN", "NYNYYYYYNNNYNNNYYYYYNNNNNYNYN", "YYYNNYYYNYYYNNNNYNNYNYNNYNYYN", "YYNNNNNNNNYNYYNYNYNYYNNYNNYYN", "NYYYNYNYNYYNYYYNNYYNNNYYYNYYN", "YNYNYNNYNYNYYNYYNNNNYYNNNYYYY", "YNNNNYYYNNYYNYYNNNYNNYNYNYYYY", "NYNYNYNYNYYYNYYYNYNYNYYNYNNNY", "NNYYNYYYYYYNYNYNYYNNYNYNYNYNY", "NNYYNYYNNYYNNYNYYNYNNYYNYYYNN", "YYYNYYYNYNYNNNYYYNNYYNNYNNNNY", "YNYYYYYYYYNYNYNYYNNYYYNNYNYYY", "NNYNNNYYYNYYYNYNNNYYNNYNYNYYY", "NYNNNNNNYYYNNNYYYNNYNYYNNYNNN", "YNYNNNYNYNYNYNYNYNNYYYNYNNYNN", "NYNYNNYNYNYYNNNNYNNNYNYYNYNYN", "NYNYNYNYYYNYYNNNNYYYNYNYYYYNY", "YYYYYYYNYYNYNYYYYYYNYYNYYYNNN"};
    int k = 218825;
    int m = 778414767;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 622122965;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> g = {"NYYYNNNNYNNYY", "YNYNNYYYYNYYY", "YNNNNNYNNYYYY", "NNNNYNYNYNNNY", "YYYYNNNNNNYYY", "YNYNNNNNYYYYY", "NYYYNYNNYYYYY", "YNYNNNNNYYYNN", "NYYNYNNYNNYYY", "NYNYYNYNNNNNY", "YYNNYNYNYNNYY", "YYYNYNYNYNYNN", "YNNYNYNNNYNNN"};
    int k = 418288;
    int m = 90263722;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 7918155;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> g = {"NNNNYNYYNNNYNYNYYNYYYYYNNYYN", "YNNNNNYYNNNYYYNNNNYNYNNNYNYN", "YNNYYYNYYNNNNYNNNNNNNNYNYYYY", "NYYNNNYNYNYNNYYNNNYNNNNNNNNY", "YYYNNNNNNNNYNNYYYNNYYYYNYNYN", "YNYYNNNNYNNNYYYNYNYYYNYNYYYN", "YYYNNYNNYYNNNYYYYYYNNNNNYNYN", "NNNNYYYNYYYNYNYNNNYYNNNYYYYY", "NNYNYNYYNNYYYYNYYNYYNNYYYYYN", "NNNNNYYNNNNYYYNYNYNNYNYNYYNN", "YNYYNNYNNYNYNNNYYNNNNYYYNNYN", "YNYNYNNNYYYNNYYNNYNNNNNYYYYN", "YNYYYNYNNYYNNNNNNYNYYYNNYYNY", "NNNYYYYYYNNNNNNYYNNYNYNYNYYY", "NNNNNYYNYYYYYYNYNYNYNNYYYYYY", "YNNNNYYYYYNNYYYNNNNNNNYNNYYN", "NNNYNNNNYYYNNYYYNNNNYYNNNNYY", "YNYNNYNYYYYNNYYNYNYNNYYNYYYN", "NYYNNNYNNNYNYNYYYYNYYYNYNNNY", "NNYNYNNNNNYYYNNYNNYNNYYYYNYN", "YYYNNYNYYNYYNNNYNNNNNNNNNNYN", "YNNNNYYNYNYYYNYNYNNNNNNYNYYN", "NYYNYYNNYNYYYYNYYYYYNYNYNNYY", "YNYYYNYYYYYNNYNYNNYYNYNNNYNY", "YYYNYYYNNNYYYNYNNNYYYNYNNNYY", "YNYNNYNNYYNYYNYNNYNYNNNNYNYY", "NNYNNNYYNNNYYNNNYYYNYNNYNYNY", "YNYYYYNNNYNYNNNYYYYYYNNYYNYN"};
    int k = 721208;
    int m = 529529499;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 327376870;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> g = {"NNNNYYYYYYNNNYYNYNNNNNYYYNYNYNY", "YNYNNYYNYNYNNYNNNYNNYYNNYNNNNNN", "YYNNYYNYYNNNYNNNNYNYYYNYYYNNYYY", "NNYNNNYNYYNNNNNYYNYYYNNNNNYYYYY", "YYNNNYYYNYYYYYYNYYYNYNYNYNYYYYN", "NNNYNNYNNNYNNNNNNNYNYYNNNNNNYNN", "NNNNYYNYNNNYYNNNYNYNYNYNYYNNYNY", "NNYNYNNNYNYNYYYNNYNNNYNYNYNNYNN", "NYYYYYYNNYYYYYYNNYNYYNNYNYNNNYN", "YNYNYNYYYNYYYYYYYNNYYYYNYYNNYYY", "NNNYNYYYYYNYNYNYYNNYYNYYYNNYYNY", "YNNNYNNNNNYNYNYNNNNYYYYYYYYNNYY", "YYYNYNYYNNNNNNNNYNNYYNYYYYYYYYY", "NYNNYYNNNNNNYNYNNYYYNNYNYYNNYYN", "YYNNYNYNYYNNNNNYNNNNYNYNNYNYYYN", "YYYYNYNYYNNNYNNNNNYYNYYYYNNYNYN", "NNNNNNNYNNNYYYYNNYYYNNYNYYYNNNY", "YYNNYNYYNNNNNYYNYNNNNNYNYNYNYNN", "YYYYYYYYNNYYYYNYNNNYNNYNYYYYNNN", "NYNNYYNYYYNNYNYYYYYNYYYNNNYNYYN", "YYYYNYNYNNNNYYNYNYYYNNNNNYYNNNY", "NYYYYNNYNYNNNNYNYYNNNNNYNNNNNNY", "YNYNYYYYYNNNNNYYYYNNYNNNYYYYYNY", "YYYYYNYNNNYNNYNNNYNNYYNNYYYYNNY", "NNYNNYYNNNYNYNYNNNYNYYNNNYNNNYY", "YYYYNNNYNNYNNNYNYNNYYYYNNNYYNYY", "NYYYYNYNYYYYNNYYNYNYNNNYYNNNYYY", "NNNYNNYNYYYNYNYNYYNYYYYYYNYNYNY", "NNYYNYNYNNNNNNNYYYYNYNYNYYNYNYY", "YYNYYYYYYYNYYNYYNYNNNNNNYNNYNNN", "YNNNYYNYNNNYNYYYYNYYYYNNYNNYYNN"};
    int k = 730775;
    int m = 778218998;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 211843022;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> g = {"NYNYNYNYNNYN", "YNYNNYNYYYNY", "YYNNYNNNNNNN", "NYYNYNYNYYNN", "YNYNNYNNNYNY", "YYNYYNYYNYYN", "YYNYNNNNYYYY", "NYNYYNYNNYYN", "YYNNYYNYNNNY", "NYNYNNYYNNNN", "NYYYYYYYYNNN", "NNNNYYNYNYNN"};
    int k = 96307;
    int m = 136056980;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 74952596;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> g = {"NNNYYNYNNYNYNYYYNNNN", "YNYNYYNYYYYNNNNYYNYY", "YYNYYYNYYYNYNNYYNNNN", "NNNNYNYYNYYNNNYNYNYN", "NYYNNNYYYNNYNNYYNYYN", "YYNNYNYNNYNYYYYNNYYN", "NNNNNNNNNYYYNYNNNNNN", "NYYNNYNNYYYNYYNYYYYN", "NYYNNNYNNYNYYYYNYNYY", "YNYNNNNYNNNNYYNNYYNN", "YNYNYYNNYNNNNYNYYNYN", "NNNYNNYYYNYNYNYNNYNY", "YYNNYYYYYNYNNNYNYYNY", "NYYNYYYNYYNYYNNYNYNY", "NYYYYNYNYNNYNYNYNNNY", "YYNYNNYNYNNYNNYNYYYY", "YNNYNNYNNNYNNNYNNNNY", "YYYNYYYYNNYYNNYNYNYY", "YNNNYYYYYNNNYYYYNNNN", "YNNYNYYYNYNNNYYNYNNN"};
    int k = 348616;
    int m = 398065517;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 29540222;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> g = {"NNNNNNNYYYYYNN", "YNNYNNNNYYYNYN", "YNNYYNNNYNNYNY", "YNYNNNNNNNNNYY", "YNYNNYNYYYNYYN", "YNYNNNNNYYNNYN", "YNNNNYNYYNNNNN", "YNNYNYYNNYNNYY", "YNNNNYNNNYNYYY", "NNNNNYNNNNYYNN", "NNNNYYNYNNNNNN", "NYNNNNYNYYYNYN", "YYNNNNNYNNYYNY", "NYNYYNNYNNNYNN"};
    int k = 292693;
    int m = 689302721;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 285520496;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> g = {"NYYYYNYYYYYNYYNYNYY", "NNNYYYNYYNYYNNYNYNN", "NYNNNYYYYNNNNYNNYNY", "YYNNNNYYYNNNNNNNNYY", "NNNYNNYNNNNNYNYYNNN", "NYYYYNNNNYYYNNYNYNN", "NNNNNNNYNYYYYNYNNYN", "YNNYNYNNNNNYNNNYYNY", "NYNYNNNNNNYNYNYYNYY", "NYYYNYNNYNNYNNNNYNY", "YNNYYYNNNYNYNNNNYNN", "YYNYNNYYNYYNYYNNNYY", "NYNNNYNYNYYNNNNNYYN", "NNYNNYNNYNNYNNNNNYN", "NNYNNYYNYNYYNNNYNYN", "YNYNYNYNNYYNNNNNYNY", "NYYYYYYNYNYYYYNNNYN", "NYNNYNYNNYNYYYNNYNN", "NYYYYYNYYYYYNNYNNYN"};
    int k = 909727;
    int m = 545033400;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 387893178;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> g = {"N"};
    int k = 608264;
    int m = 621617150;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> g = {"NYNYY", "YNNYY", "YYNYN", "NNYNY", "NNNNN"};
    int k = 46119;
    int m = 407237015;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 253557683;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> g = {"NNYNYYYYYNNYNYYNYYNYYNYNYNYYNNNN", "NNNNNYYNNNYYYYNYYNNYYNNYNYYNNYNY", "YNNYNYYNYNYYNYYYNYYYYYYNYNYNNNYY", "NNNNNNYYNYNYYNNYYNYNNNYYYYNYYNYN", "YYNNNYYYYNNYNNNYYNNYYYNYNNYNYYNN", "NNYYYNNNNYNYNNYYYNYNYNNYYYNNYYNN", "YYYYYNNYYYNYNNYYNYNYYYYNYYYNNYYN", "YNNYNYYNYNNNNYNYNYNYNYNYYYYNNYNY", "YYYYYYYNNYNYNNNNYNNNNNNNNNNYYYYN", "YYYYNYNYYNNNNYNYNYNYNYYYNYNYYYNN", "NYNYNYNNNNNYYNYYYYYNNYYYYNYYNNYN", "NNNNYNNNYYNNNNNYNNNYNYYYYYNYYNYN", "NNYNYYNYYNYNNYYYYNNNNNNNNYNYNYNN", "NYYNYNYNYYNYNNNNNYYNNYNNYNYNYYNY", "NNNNYYNYYYNNYYNYNNNNYNYNNNYYNNNY", "NNNNNNNYYNYYNNNNYNNYYNYNNYNYNYYN", "NYNNNYYNYYYNNNNYNNYNYNNNYNYYNNNY", "YNYYYYNYYYYNYYYYNNYNYYNYNYNYNYNY", "YNNNYYYYNYNYYNYNYNNNNYNNNYNNNYYY", "YYNYNYYYNYNYNNYNNYNNNNYYNNNYYYNY", "YNYYYNNNYNYNNYYYNNNYNNNNYYNYYNYY", "NNYYNNYYYNNNYNYNNYNYYNYNNNYNYNNY", "YYYNYNNYYYYNYNYYNYYNNNNYYNYYYYNY", "YNYNNYNNNYYNNYNYYYYYYNYNNNYNYNYN", "YYNNYNNYNYNYNNYYNYNYNYYNNNYYYYNY", "NNYNNNYYYNNNNNYNNYYYNNYNNNYYYNNN", "YYNNYNNYNNNNYNYNYNYNNYNNNNNNNNNY", "NNNYYNYNNYNNNYNNNYNYYYNNYYNNYYYN", "YYNNNNYYNNYNNNNNNNNYNYNNYNYNNYYY", "NNYNYNYYNNNYYYYNYNNYNNYYNYNNNNYY", "YYNYNYNYNYNNNNYNYYNYYNNNNYNNYYNN", "NNYYNYYYYNYNNYNNYYYYYNNNNYYNNNNN"};
    int k = 858248;
    int m = 266969505;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 56722880;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> g = {"NNNYNYYNYNNYYYYYNNNYYNYYYYNYNNYYNNN", "YNYNNYNNYYNYYNNNYYNNYNNYNNNNNYNNYNN", "YNNYYYNNNNYNNYNNNYYNYYNNNNYNYYYNYNY", "NNYNYNYNYNYNYNNNYYYYYNNYNYNYNNNYNYN", "YNYNNYYYNYNNYNNNNYYNYNYNNYYYNYNYYYY", "NYNYYNYNNNYNYYNYYYNYYYNYYYYNNYYYYYY", "YNYNNNNNYNNYYYNNYYNNNNNNNYYYNNNYYYY", "NYYNNYNNNNNNNNNNNYNYYNYNNNNNYYNYNNN", "NNNYNNNNNNNNNYNYYNNNNNNYYNYNYNNYYNY", "NYNNYYYYNNYYYNNYNYYYNNNYYNYYYNYYNYN", "YYNYNNNYNYNNNYNYYYYNYYNYNYNYYYNYYNN", "NNNNYNYYYYYNYYNYNNNYYYNYNNNNNNYNYYY", "NYNNNNNYNNNNNYYYYNYYNNYYNYNNNNNNYNN", "NNYNNNNYNNYNNNNNNNNNYNYYNNYNYYNYNNY", "YNYNNYYNNNYNNNNYNNNNNNYNYNYNNNNYYYY", "YYNYYNYYNNYYNNNNYYNYYYNNYYNNYYYNYYY", "NNNYYYNNNNYYNYYNNYYYNNYYNYNYYYYYNNY", "NNNNYYYNNYNNYYYNNNNYYNNYNYYNNNYNYNY", "NYNYNYYNNYNYYNYYYYNNYYYNNNYNYNNNYYY", "YYYYNNYYNNYNNYNYYYNNYYYNYYNNNYYYYNY", "NYNNNYYNYNNNYNNNNYYNNYYYNYYNYNNYYYY", "NNNYYNNNNYYNYNYYYYYYNNYYNYNYYNYYNNY", "YYYNYNYNNNYNNNNNYNNYNYNYYYNYYNYNYNN", "NYYNYYNYNNNYYYNYYNNYYNYNNYYNYYYYNNY", "YYYYYNYYYNYYNNNNYNYYNYNNNYYNNNYYNNN", "NNYYYYNYYNYYNNYNYYYNNYNNYNYYYYNYYNN", "NNYNYNNYNNNYNYNNNYNYNNYYNNNYYNNNNNY", "YNYYYNYNNNNYYNYNYYYNNNYNYNYNYNNNYNY", "NNNNYNNNNNNYNYNNNNNYYNNNYNNNNYNNNYN", "NYNNYNNNYNYNYYNNYYYNYNNNYYYYNNNYNYN", "NNNYNYNNYNYNNYNNYYYYYNNNYNYYNYNYNNN", "YYNYNYNNYYNYYNYNNYYYNYYYNYNYNNYNNNY", "YYYYNYYYNNNYNNYYYYNNYYNYNNNNYYYNNYN", "NYYYYYNNNNYYYNNYYYNNYYYNYNYNYNNYNNN", "YNNYNNNYNYNNNNNYNNYNNYYYNYYYYYNNYYN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 346494532;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> g = {"NYYYNYYYYYNNYYYYYYYYYYYNNYYYNNNNNNN", "YNNYYYYYYYNNNYNNNYYNYNNYNNNYNNNNYYN", "YYNNYNYYYYYNYNYYNNNNYYNNNYYYNYNYNNN", "NNNNYYYNNNNYYNYYYYYYYYNYNYYYNYYYNNN", "YNYYNNNNNNYNNYYYYYYYNNYYNNNYYYYYYYN", "YYNNYNYYNYNNYYNNYYNYYYNNYNNYYNYYNNY", "NNYYNNNYYYYNYYYYNNYNNYNYYYYNNNNNNYN", "YNNNYYYNNNYNNNYNYYNNNNYYNYNYNYNYNYN", "YNYNYYNNNNYYYNNNYNNNYNNNYYYYNNNNNNN", "NNYNYNNYYNYNYNYYYNNYYYYYNNYNYNYNNYN", "YNYNNYYNYNNNYYYYYYYYYYYYNNNYYYYNNNN", "NYNYNYNYYYYNNNYYNNYYYNYYNYYNNNYYNYN", "NYYNYYYNNNNYNYNNYNYYYNYNYYYNNNYNYNY", "NNYYNYYYYNNYNNYNNNYYNNYNYNYNNYYNNNN", "NNYYYYNNNNNYYYNNNYNNNNNYNNYYNNYNYNY", "NYYYNYYYYYNYYYYNNYYYYYNNYYNNYNNYNNN", "YNNNYYNNNNNYNNNYNYNNYYYYNNNYNYNNYNN", "NYYYYNNYNNYYNYNNNNYYNYYYNYYNYNYNNYY", "YNNYYNYNYNYNYYNYYNNYYYNNNYYNNYYNYYY", "NNNYYYYYNYNNYYYYNYNNYYYYYYYNNNNNYYY", "YNNNNNNNNYYYNYNNYYNNNNYYYNYYYNYNNNY", "YNYNYNYNYNYYNNYNYYNNYNYYYNNYNYYNNYN", "NNNYNNNNYYNYYYYNNNNYYYNNNYNNYYYYYYN", "NNYNNYYNNNNNNNNYYNNYYYNNYYYNNYNYNYY", "NNYYYNNYYYNNYYNNNYYYYNYNNNYYNYNYYYY", "YNNNNNYYNYNYNNYYYNNYYYNNNNNYYYYYNNN", "NNNYNNYNYNNYYNYYYYNYNNNNYYNYNNYNNNY", "YYYYYYYYYYYYYYYNYYNYNYNYYYYNNYNNNYN", "NNYYYNYYNYNYNYYNNNYNNNNYYYYNNYNNYYN", "NNNYYYYNYYYYNNYNNYNYNYNNYYNYNNYNNNY", "YNNYYNYNYYYNYYYYYYYYYYYYYNNNYYNNYYY", "NYYNYNYYNNYYYYNNNYNYNNNNNYNNNNNNYYY", "YYYYNYNYYYNYYYYYYYNNNNNNNYNNNYNYNYN", "YNNNNNYYNYNYNYYNNNNYYYYNYYNYYNYNNNY", "NYNNNYNYYNYYYNYNYYNYYNYNNNNYNYYYNNN"};
    int k = 999999;
    int m = 999999997;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 270411992;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> g = {"NYYNYYNNYNYYYYNYYYNYNYYNNNNYYYNYNYN", "NNNNNYYYYNYNYNYYNYNNYNNNYNYNNNNYYNY", "NNNYNYNNNYYNYNNYNNNYNNNNNYNNYNNNNNY", "YYYNYNYNYYNYNNYNYYYNNYYYYYYYNNNNYYN", "YYNNNYNYNYNYYNYNYNYYNYYNNYYNYYNYYNN", "NYNNYNYNNYNNYYYYYYNNYNNNNNNNNNYNNYY", "NNNNNNNYYNNYNYNNNNYYYNYNNYYYNYNYNYN", "NNYNYNYNYYNYNYNNYNNNYYNYYNNYNNNYYNY", "NYNNNYNYNNNNYYYNNNNNYYYYYYNNNNNYNNN", "YYNYYYNNYNNYNYYYYYNNNYNYNYYYYYYNNNN", "NNYYNNYYNNNYYNNNNYYNYYNYYNYYNNYYYYN", "YYYYYYYNNYYNYYNNYNNYYYNYNYNNYNNNYYY", "NYYNNNYYYYNYNNYYNNYYNYNNNYYNYYNNYYN", "YNYYYYYNNYYYNNNNNNNNYNYYNYYYNNNNYYY", "YNNYNNNNYNYNNYNNYNYNYNNYYYYNYNNNNYY", "NYYYYYNNNNYNYYYNYNNNYNNYNNYYYNYNNNY", "YYNNNYYYYNNYNYYNNYYYNYNYNNNYYYYNYYN", "YNYYYNYYNYNNYNYYNNNYNNYNNYYNYNNNYNN", "YYNYNYNYYYNYNNYNNYNNYYYNNNYYNYYNNYN", "YYNNYNNNYYYNYNNNNNYNNYYYYYYYYYYYNYN", "NNNNYYNYNNNNYYYYYYYNNYYYNYYYNYNYYYY", "YYNYYYYNYYNYYYYNNYNYNNNNYYNYYYYYYNN", "YNYYNYNNNNNNYNYYYNNYNNNYYYYNYYNNNYY", "YYYNNNYYYNYYYYNNNNYNNYYNYYYNNYNYYYN", "NYYNNNYYYNYYNNNNYNYYNYYNNYNYNYYNYYY", "YYNNNNYNYNNNYYNNYYYNYNYYYNNNYYNYNYY", "NYNYNNYNYYNYYNYNYNYNNYYYYYNNNNNYYNY", "YNYNNNNYYYNYNNNYNYNYNYNYYYYNYYYYNNY", "YNYNNYNNYYYYNNNNNYYYNNYYYYNNNNNYNYY", "NYYYNNNNYNYNNNNYYYYNNNYNYNNNYNYYNYN", "YYYYNNNNYNNNYYNNYNNNNNNNNNNYYNNNNNY", "YYNYNYYYYYYNYNYYNYNNYNYNNYNNYNYNNYY", "YYNNYNYYYYYNNNNNNNNNYYYYYYNNYNNYNYN", "NYYNNYNNNNYNNNYNYYNNNYYNNNNYYNYNYNY", "NNNNYNNYNNNYYNNNYNYYYNYNYYYNNYYYNYN"};
    int k = 999999;
    int m = 999999995;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 705192581;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> g = {"NYNYNYNYYYYYYYYYNYNYNYNYYNNYNYYNNYN", "YNYYYYYNNNNYNYNNNYNYYNYNYYNNYNNYYYN", "YNNNYNNNYYYYYYYNYNYYYNNNNNYNYNNYYNY", "YYNNNYYNYYYYNNNYYYYYNYYNYNNNYYYYYYY", "YNNYNYNYNYNYNYNYNNNNNYNNNNNNNNYNYNY", "YNYNNNYYNNNYNNNYYYYYNYYYYYNYNNNNNNN", "YYNNYNNNYNYYNNNYNNYYNYYYNNYYNYYYYYN", "YYYYYYNNNYYNYNNNNYNNYYNNYYNYNNNNNYN", "NYYNYNNYNNNYYNYYNYYNYNYYYNNNYNNYNNY", "YNYNNNYYYNNYYNYNNNYNYNYNYNNNYYNYNNY", "YNNYYNYNNYNNYNYYYNNNYYNNNNYYNNNNNNY", "YYNYNYYYNYNNYYNYYNYNYNNNYNNYNYYYNYY", "YNNNNYNYNNYYNYYNNYNNNNYNNNNNNYNNNYN", "YNYYYYNYYYNNYNYYYNNNNYYYYYNYNNNNYYN", "YNYNNNYYNNYNNYNNYNNNYNNYNNNYYNYYYYN", "NYNYNNNYYNNNYYNNYYNNNYNNNNYYNYNYYYN", "NNNNYNYYNNNNYNNNNNNNNYNYYYYNNNYYNNY", "YNYNNYYNYNYYYNYNNNYYYNNYYNYNYNYYNYY", "NNNYNNYYNYYNYNNNYYNYNNNYNNYNYYYYYNY", "NNNYNNNNNNYNYNNYNNYNNNYYNYYNNNNNYYN", "NYYNYYYNNYYNYNNNYYNYNNYNNNNNYYYNNYY", "YYYYYNNNYNYYNYYYYNNYYNNNYNNNNYNYYYY", "YNYNYNYYYNYYYYYYNYNYYNNYNNNYNNYYNYY", "YNNYYNYYYYYYNNNYYNYYYNYNYNYNYYNYNYN", "NNYYYYNNNNNYNNNYYYNYNNNYNNNYYNNNNNY", "NYNNYYNNNNNNNNNYYNNNNNNNNNNYYYYYYYN", "YNNYNYNNNYYNYNNNNYNYNNNYNNNNYYYNNNY", "YYYYNYNYNYNNNYYYYYNYNNYNNYYNNNYYYYY", "YNYNYNNNYYNNYYYNYYYNNYYYNYNYNNNYNNN", "NNYYYNYYNNNYNYYNYNYYNYNNNYYNNNYNNNY", "YYYNNNNNYYNNYNYYYYYNYNNYYYYYYNNYNYY", "YYNYYYYYNYYNYYYNYYYNNNYYNNYNNNYNNNY", "NNNNYNNNNYNYNNNYYNNYYNYYNNNNYNNYNNN", "NYYNNNYNYNYNNYNYYYYYNNNYNYYYYYYYNNY", "YYNNNYYNNYYNYYNNNNYYYNNNYYYYNYYNNNN"};
    int k = 999992;
    int m = 999999993;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 363462517;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> g = {"NNNYNYNYNNYNNYNNNYYYNYYNYNYNYNYYYYN", "NNNNNYNNNNNNNYNNNYNYNYYYNNNYNNNNNYN", "NNNYNNNYYNYNYNYNNYNNNNYYYYYYNNNYNYN", "NNNNNYNNYYYYNYYYNYYNYYYNYNNNNYNYNNY", "NNYYNNYYNNNNYYNNYYNYYNYNNYNYYNYNNYY", "NNYNYNNNYYNNYYYNYNNYYYNNNNYNYNNNYNN", "NYYNNNNNNYYNYNNYYNYNNYNYYYYYYNNYNYY", "YNNYNNNNYNNYNNNYYYNYYNYYYYNNYNNNNYY", "NYNYNYYYNNNNNYNYYYYNNNYYYNNYYYYYNYY", "NNYNNYYYYNNNNYYYYNNYNNYYYNYNNNNYYNN", "NNNYNYYYYYNYNNNNYYYYNNYNYNYNYNNNNYN", "NYYYNYYYNNYNYNNNYYYYYNNYNNNYYNNYYYN", "NYNNYNNNYNYYNNYNNYYNNNNNNNNNYYYYYNY", "YNYNYNNYYNYYNNNNYYYYYYNNYYNYYNNYNNY", "YNYNNYNNNNYYYNNYNNNYYYYNNYYYYYNYYNN", "NYNYNYNNNNYYNYYNNNNNNNYNNYYYYNNNNNN", "YYYYNYNYNNNYYNYYNNNYYYYNYNYYNNNYNNN", "YNNNNYNYYNYNNNYYYNNNYYNYYYYYNNYYYNN", "YYNNYNNYNNNNYNYNYYNYYNNNNNYNYYYYYYY", "YNNYNYYNNYNNYNYYYYYNYYNNNYYNYNYYNYN", "YNNNNNNNYYYYYNYNNNNNNNYNNNYNNNNNYNY", "NYYYYNNNYYNNNYNYNYYYNNYNNNNNYYYNNYY", "YNYNYNYYNYNNNNYNYYYNNNNNNNNYNNNNNNN", "YYYNNYNNYNYYYYNNYYYYYYYNYYYNYNYYYYN", "NNYYNNYNYYYYYNNYNYNYYNNYNYYNNNNNNYY", "NYYNNYNYNNYNNNNNYYYYYNNYYNYNNYNNNNY", "YYNNNNNYNNNYNYYNYNYYNYNYNYNNYNYNYYN", "YNNYYYNYYYNYYNYYYYYNYYYNNYYNYYYNNNY", "YYNNYNNNNNNYYNNYYYNYYNYYNNNNNNNYYNY", "NYNYYYYYNNYYYYYYNNNNYNYYYYYYNNYNNYN", "NNNYYNYNYNNNNYYNYYNYYYNNYYYNNYNYNYY", "NNNNNNYNYYNYNNNYYYNYNYNNYNNNYNYNYYY", "NYYNYNNYYYNYYYNNNYYYYYYYYYYNNNYYNYN", "YNYNYYYYNYNYNNNNNNYYNNYNNYYNYNYNNNN", "NYNYYNNYNYNNYNNYNYYNNNYYYNNNYNNYYNN"};
    int k = 999989;
    int m = 999999991;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 876133984;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> g = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 479609340;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 999985;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> g = {"NY", "YN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 999998;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> g = {"NYNNNNNNNN", "NNNNNNNNYN", "YNNNNNNNNN", "NNNNYNNNNN", "NNNNNNNYNN", "NNNYNNNNNN", "NNNNNYNNNN", "NNYNNNNNNN", "NNNNNNNNNY", "NNNNNNYNNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 999990;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> g = {"NYNN", "YNNN", "NNNY", "NNYN"};
    int k = 3452;
    int m = 6443235;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 6900;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> g = {"NYYYNYNYNNYNNNNNNNNNYNNNNYNNYNNYYNN", "NNYNNYNNNNYNYNNNNYNNNNNNNNNNYNNYNYN", "YNNYNNNYNNYNNNNNNYNNYNNNNYNNNNNYNNN", "YYNNNYNNNNNNYNNNNYNNYNNNNYNNNNNNNYN", "NNNNNNYNNNNNNYNYYNNYNYYYNNNYNNNNNNY", "NYYNNNNNNNYNYNNNNYNNYNNNNYNNYNNYYYN", "NNNNYNNNNNNNNYNYNNYYNYYNYNYNNYYNNNY", "YNYNNNNNNNNYYNNNNYNNYNNNNYNNNNNNYYN", "NNNNYNYNNYNNNYNYNNNYNYYYYNYYNNNNNNY", "NNNNNNNNYNNNNYYYNNYYNYYNYNNYNYNNNNN", "NNYYNYNYNNNNYNNNNYNNNNNNNNNNYNNYNYN", "YNYYNYNYNNYNNNNNNYNNYNNNNYNNYNNYYYN", "NNYNNYNYNNNYNNNNNYNNYNNNNNNNYNNYNYN", "NNNNYNNNYNNNNNYYNNYYNYNYYNYNNNYNNNY", "NNNNNNYNYYNNNYNYNNYNNYYNNNYNNYYNNNY", "NNNNYNYNYYNNNYNNYNYYNYYYYNNYNYYNNNN", "NNNNNNYNYYNNNNNYNNYYNNYYYNNNNYYNNNY", "NYYYNYNYNNNNYNNNNNNNNNNNNYNNYNNYYYN", "NNNNYNYNYNNNNYYYYNNYNNNYNNNNNNYNNNN", "NNNNNNNNYNNNNYYYYNYNNYYYYNNYNYYNNNY", "YYYYNYNNNNYYNNNNNYNNNNNNNYNNYNNYNYN", "NNNNNNYNYNNNNYYNYNYYNNNNYNYNNNNNNNY", "NNNNYNYNNNNNNNYYYNYYNYNYYNYYNYYNNNN", "NNNNYNYNYYNNNYYYNNNYNNNNNNNYNYNNNNN", "NNNNYNYNYNNNNYYYYNNNNNYYNNYYNYYNNNY", "YYYYNYNNNNNYYNNNNYNNNNNNNNNNNNNNYNN", "NNNNYNNNYYNNNYYNYNYYNYYNYNNYNNYNNNY", "NNNNYNYNYYNNNYYNYNNYNYNYYNYNNNYNNNY", "NNYNNYNNNNYYYNNNNYNNNNNNNNNNNNNNYNN", "NNNNYNYNYNNNNYYNYNYYNYYYNNNNNNYNNNY", "NNNNYNYNNYNNNNYYNNNYNNYYYNYYNYNNNNY", "YNYNNYNYNNYYNNNNNNNNNNNNNYNNYNNNYYN", "YNNYNNNNNNYNYNNNNYNNNNNNNYNNNNNYNNN", "YYYNNYNYNNNYYNNNNYNNYNNNNYNNYNNYYNN", "NNNNYNYNNNNNNYYYYNNNNYYYNNYYNNYNNNN"};
    int k = 186691;
    int m = 583614606;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 321498503;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> g = {"NNNYNYYNYYYYNNN", "NNYNNNNYNNNNNNN", "NNNNNNNYNNNNNNN", "NNNNYYNNNNYYNYY", "YNNYNYYNNYNYNYY", "NNNNYNYNNYNYYNN", "YNNYYYNNNYYYYYY", "NNNNNNNNNNNNNNN", "NNNYYYNNNYYNYYY", "YNNNYYNNYNYYNYY", "NNNNNNYNNYNYYYY", "YNNNYNYNYYYNYNY", "YNNYYNNNYYYYNYN", "YNNNYNYNYNNNYNY", "NNNNYNYNNYYYNYN"};
    int k = 121374;
    int m = 355964273;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 298445527;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> g = {"NNYYNY", "NNNNYN", "YNNYNY", "NNYNNY", "NYNNNN", "YNYNNN"};
    int k = 18144;
    int m = 914931679;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 747643316;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> g = {"NYYYNNNYN", "NNNNNNNYN", "NNNYNNNYN", "YYYNNNNYN", "NNNNNYYNN", "NNNNYNYNY", "NNNNNYNNN", "YYYYNNNNN", "NNNNYYYNN"};
    int k = 250952;
    int m = 605364241;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 541394917;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> g = {"NNYYNYN", "NNNNNNN", "YNNNYYY", "YNYNYNY", "YNYYNNY", "NNYYYNY", "YNYYYNN"};
    int k = 440297;
    int m = 930932882;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 467869370;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> g = {"NYNYNNYNNN", "YNNYYNYNNN", "YNNYYNNNNN", "NYNNNNYNNN", "NYYYNNYNNN", "NNNNNNNYYN", "YYNYYNNNNN", "NNNNNYNNYY", "NNNNNNNYNN", "NNNNNYNNYN"};
    int k = 779030;
    int m = 602369932;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 51038055;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> g = {"NNNYNNYYNYNNYYNYYYYYNNYYYYYYNYYNYY", "NNNNNYNNYNNNNNYNNNNNNNNNNNNNYNNNNN", "YNNNYNYNNNNYYNNYYNYNNNYNYNYYNYNNNN", "YNYNYNNYNNNNNYNNYYYYYNYNNNYYNNYNYN", "YNNYNNNYNYNYNYNNYYYNYNYYYNYNNYYNYY", "NYNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNN", "YNYYNNNNNYNNNYNYYYNNYNNNYYNYNYNNYN", "YNNNYNYNNYNYYNNYNYYYYNNNYYNNNYYNYY", "NYNNNNNNNNNNNNYNNNNNNYNNNNNNNNNYNN", "NNYYNNNYNNNNYYNYYNNYYNYNYYYYNYNNNY", "NYNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNN", "YNYYNNYYNYNNYNNYNNNYYNNYYYYYNNYNNN", "YNYNYNYYNYNYNNNNYYYNYNYNNNNYNNYNYY", "YNYYYNNYNYNYYNNNYYYYYNYYYNYNNYNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNN", "NNNYNNYNNYNYNYNNYYNNNNYYYYYYNYNNNY", "YNNYYNYNNYNYNYNYNNNYYNYYNYYYNNYNNY", "YNNNYNYYNNNNYNNYYNYYYNNNYYYNNNNNNY", "YNNNYNYYNYNNNYNYYYNYNNYYYNNNNYNNYY", "YNYNYNNNNNNYYYNNYYYNYNNYNNNNNNYNYN", "NNNNNNYYNNNYYNNNYNYYNNNYYNYYNNNNNY", "NYNNNNNNYNYNNNNNNNNNNNNNNNNNYNNYNN", "YNYYYNYYNYNYYYNNYYNNYNNYNYNYNYYNNY", "YNYNYNYNNNNYYYNYYYYNYNYNNNYNNYYNNN", "YNNNYNYYNYNNYYNNYYYYNNNYNYYYNYYNYY", "YNNYNNNYNNNYYYNYYYYNYNYYNNYYNNYNYY", "NNNYYNYYNYNYNYNYNYYNNNNYYNNYNYYNYY", "NNYYYNNYNNNYNNNYYYNYNNNYYYNNNNYNYN", "NYNNNYNNYNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYYYNYYNYNYNYNYNYYNYNYYYNYNNNNNYY", "NNYNYNNYNNNNYYNNYNYYNNNYNYYYNYNNYY", "NYNNNYNNYNYNNNYNNNNNNYNNNNNNYNNNNN", "NNYNNNYYNYNYYYNNNYYYNNYYYNYYNNYNNY", "NNYYYNYYNNNYNNNYYNYYNNNYNYYYNYYNYN"};
    int k = 177089;
    int m = 741472036;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 313673111;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> g = {"NYYNYYNNYYNNYNNYYNNNNYNN", "YNYNNYNYNYNYYNNYYYNNNYNN", "NNNNYYYNYYNYYNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNYNNY", "NNYNNYYNYNNNYNNYYYNNNYNN", "YNNNYNYNYYNYYNNYYYNNNNNN", "NYNNYNNYYYNNYNNYYNNNNYNN", "NYYNNYNNYYNYYNNNNYNNNYNN", "YYYNYYNYNYNYNNNNYYNNNNNN", "NYYNNYNNNNNNYNNYYYNNNYNN", "NNNNNNNNNNNNNNNNNNNYNNYY", "YYYNYYYYNYNNYNNYYYNNNYNN", "NYNNYYYNNYNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNYYNNNY", "NNNYNNNNNNYNNYNNNNNYYNNN", "YYYNYYYNYNNYNNNNNNNNNYNN", "YYYNNNYYNNNNYNNNNYNNNYNN", "YYYNYYYNNYNYYNNYYNNNNYNN", "NNNNNNNNNNYNNYYNNNNYYNYY", "NNNNNNNNNNYNNNNNNNYNYNNY", "NNNYNNNNNNYNNYYNNNNYNNNY", "NYYNYNYYNYNYYNNYNYNNNNNN", "NNNNNNNNNNYNNYYNNNNNNNNN", "NNNYNNNNNNYNNYYNNNYYNNYN"};
    int k = 113422;
    int m = 671819628;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 499885;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> g = {"NYYYNYYNYNNYYYNYYNYYYYNNYYNYNNYYYNY", "YNYYYYYYYYYNYYYYNYNYYYYYYYYNNYNYYYN", "YNNYNYYNNYNNYYYNNYYYYYNNYNYNYNYNNYY", "YYNNNNYNYNNNYYYYNYYYNNYYYNNNYNYYNNY", "YNNYNNNYNYYYYNYYYYYNYYNYYNNYNYYYYYN", "YYYYYNYYYYYNYYYYYYYYYYNYYYNNNYYYNYY", "NYYNYYNYYNYYNYYYYNNNYYYYNYYYYNYYNYY", "YYNNYNYNYYNYYYNYYNYYNYYYYYYNNYYYNYY", "YNNYNNYYNYNNNYNYYYYNYNYNYYNYNNYYYYN", "YNYYYYNYNNYYNYNNNYNNNYYNYNYYNYYYYYN", "NNYNYYYNYYNNYYNYYNYNYNYYYNYNNYNYYYY", "YNYYYYYYYNYNYYNYNNYNNYYYYYNYYYYYYYY", "YNYYNYYNYNYYNNNYNYYNYYYNYYNYYYYYYYY", "NYYNYNYNYNYNYNYYNYYYNYYYYYNNYYYYYYY", "YNYYNYNYNYYYNYNNYYYYYYYYYYNYYYYYNYY", "YYYYYYYYNYNYYNYNYYNYYNNNYNNYYYYNNNY", "YYYYYNNYYNYYYNYNNNNYNYYYNYYYYYYYYNN", "NYYYNYYYYNNYYYYNYNYYNYYYNYYYYYNYYYY", "YYYNNYYYYYNYYYYYYYNYYYNYYNNYYYYYYNN", "NYYYNYNYYYNYYNYNYNYNNNNYNYYYYYNYYYY", "NYYYNYYNYNYNNYYYNNNYNNYNYNYNYYYYYYN", "YYYYYYYNNNYNYYNYYNYNNNYNYYYYYYNYYNY", "YNYYYYNYYYNYNYYYNNYYNNNNYYNYYNYNNNY", "NYYYNYNYYYYNYNYYYYYYYYNNNYYNYYNYNYY", "YYYNNNYNYYYYYYYYYYNYNYYYNNYYYYYNNNY", "YYYNNYNNYNNNYYYYYNNYYYNNYNYYYYYYYYN", "NYYYYYNYYYYNNYYYYNYYYYYYYYNYYNYYYYY", "NNYYNYNYNYYYNYNYYYYYNYYYYNYNNYNYNYY", "NNYYYYYNYYYNYYYYYYNYYNYYYNYNNYYYNYY", "NYYYYNYYYYYYYNYYYNYYYNNYYNNNYNYYYNN", "YYYYYNYYNNYYYYYYYYNYNNNNYYYNYYNNNYY", "YYYNNYNNNYYYNYYYYNYYYYNYNYNNYYYNYYN", "YYNYNYYYYYYYNYYNNNNNNYNYYNYYYYYNNYY", "NYNNYYYNYNYNYNYYYYYYYYYYYNYYYNNNNNN", "YNNNNYNYYNYNNYYYNYYYYNYNYNYYYYNYYYN"};
    int k = 1000000;
    int m = 1451532;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1001714;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> g = {"NNNYNNNNNYYYNNYYYNNNNNNNNYNNNNNNYYN", "NNNNYNNNYYNNNNNNNNNNNYNNNYNYYNNYNNN", "NYNNYYNYYNNNNNNNYNYNNYYNNNNNNNNYYNN", "NNNNYNNNYYNNNYNNNNYNNNYNNNNYNNYNNNN", "NNNNNNYNNNNNNNNYYYNNNYYNNYNNNNYNYYY", "NNNNNNNNNNNNYYNNYYNNNYNNNNNNNNNYNNN", "NNNNNYNNNNNNNYNNYNNNNYNYNNYNYNNNNNN", "NNYNNYNNNNNNNNNNNYNNYNNYYNYNNNNYYNN", "NYNYYYNNNNNNYYYNNNNNNNNYNYYNYNNNNYN", "NYNNNYNNNNYYNNYNNYYNYYYYYNYYNNNYNNN", "YNNYYNYYNNNNNYNNYNYNYNNNYNNNYNNNNYN", "NNYNYYYNYYNNNNNNYYNYNNNNNNYNYNNNYYN", "YNNYYYYNYNNYNNNNYNNNNNNYNNYNNNYYYYN", "NNNYNNNNYYNYNNYNYNNYNNNYNNYNNNNYNYN", "YNYYNNNYNYNNNNNYNYNNYNNYYNNNYYNNNNN", "NYNNNYYNYNYYYNNNNYYYYNYYYYYNYNYNNNN", "YNYYNYNNYYNNNYNYNYYYYYNYNYNNYNYYNNN", "YNNYYYNYNYYNYNNNNNNYYNNYYYYYYYYYNNN", "NYYYYYNYNNNNYNNYYNNNYYNNYYYNNNYYYYN", "YNNNNNNYYYYNYYNNNNNNNYYNYNNNYYNNNYY", "NYYNNYYNNYNNYNYNYNYYNNYNNYYNYYYNNYN", "NYYYYYNYYNNNNYYNNYNNYNNYNNYYYNNNNYY", "YNNYYNNYYYNYYNNYNNNYNYNNYNYNNYYNYYY", "YNNYNNYNYYNYNNYNYYNYNYNNYYNYYYNNNNN", "NYNYNNNYNNYNNNNYYYNYNNNYNYYNYYYYYNY", "NNNYNNYNNYNNNYNYYYYYYYYYNNYNNNYNYYN", "NYYYYYNYNYYYNNNYNYNNNNNYYNNNYNNYNNN", "NNNNNYYNNNYYNNNNYNNYNNYYNNNNYNYNYYN", "NYNYYNYNNYYNYNYNNNYNYNYYYYYYNYYYYYY", "NNYNYNYNNNYYYNYNYNNNYYNNYYYNYNNNYNY", "NYYYYYNNNNYNNYYYNNYNNNYNNYYYYNNNYYY", "YNNYNNYYNNYNNNYYNYYYNYNNYNYYNNYNNNN", "YNYNYNYYNYYYYYYNNYYNYYNNNNYNNNYYNNY", "YNYYYYNYNYYYYNNNYNNNYNNYYNYNYNNNNNY", "YNYNYYYNYYYNNNYNYYNYNNNYYNNYNNYNYYN"};
    int k = 10;
    int m = 13;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> g = {"NYYYYNNNYYYYYYYYYYNNNNYYYYYYYY", "YNYYYYYYNYYYYYYNYYYYYYYYYYYYYY", "YYNYYNYNYYNYNYYYNYYYYYNYYYYYYY", "YYYNNYYYYNYYYYYYNYYYYYYYNYYYYY", "YYYYNYYYYNYYYYYYYYYYNYYYYYYYYY", "NYYYNNYYYYYYYYNNYYYYYNYYNYYYYY", "YYNYYYNYYYNYYYYYYYYYYYYYYYYYYY", "YYYNYYYNYYYNYYYYYNYYNYYYYYYYYY", "NYYYYYYNNYYYYYYYYYYYYNYYYNYYYY", "YYYYNYYYYNYYYYNYYYYYYYYYYYYYYY", "YNYYYNYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYNYYYYYYNYYNYNYYYYYY", "YNYYYYNYYNYYNYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYNNNYYNYYNYYNYYYNYNYYYYYYYYY", "YYYYYNYNYNYYNYYNYYYYYNYYYYYYYY", "YYNYYYYYNYYYYYYYNYYYYNYNYNYYYY", "YYYNYYNNYYYNYYNYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYNYYY", "YNYYYNNYNYYYYYYNYYYNYYYYYYYYYY", "YYNYNNYYYYNNYYNYYYYYNNYYYNYYYY", "YYYYNYYYNYYYYYNYYYNYYNYYYNYYYY", "YYNNNYYYYNYYYNYYYNYYYYNYYYYYYY", "YYYYYNYYNYYYYYNYNYNYYYYNYYNYYY", "YYYYNNYYYYNYYNYYYYYYYYYYNYYYYY", "YYYYYYYNYNYYNNYYYYNYYYYYYNYYYY", "YYYYNNYYYYYNYYNYYYYNNYYYYYNYYY", "YYYYNYYNYYNYYYYNYYYYYYNYYYYNYY", "YYYYYYYYYYYYNYYYYNYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int k = 900543;
    int m = 1024;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 563;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> g = {"NYYYNNYYNYNYYYYNYYNYYYNYYYNYYYYYYYN", "NNYNNNYNYNNYYNYNNYYYYYNNNYNNNNNYYYY", "NNNYYNYNNNNYNYYYYNYNNNNYNYYNNNNNYYY", "NYNNYNNYYNYNNNNYYNYYNNYYYNNNNYYNYNN", "YYYNNYNNYYYYYYNNYNYYYYYNYYNYYNNYYYN", "YNNYYNYNNNYNYNNYNNNNYYYYYYYYNNYNYYY", "YNNYNYNNNNYYNNYYYYYNNYNNNYYYYYNNNYY", "NNNNNNYNNYYYNNYNYNYNYNYYYYYYNYYNYNY", "YYNNNYYNNNYNYNYYYYYYYYYYNYNNYYNNYNY", "YNYNNYNNYNYNYYNNNNYYYYYNYYNNYYNYYYY", "YYYYNNNNNYNNYYNYYYNYNYYYYYNNYNYNYNY", "NNYNNNNYNYNNNYYYYNNYYYYNYNNNNNYYNNY", "YYYNNYYYYNNNNYNYNYYYYYNYYNYNNNYYNNN", "YNYNYNNNNYYNNNYYNNYNYYYNNNNNNNYYNYN", "NYYYNYYNYNNYNNNNNYYYNYNNNNNYNNYYNNY", "NYYYNYYYNYYYYYYNNNNNYYNNNYNNNNNYNYN", "YYNNYYNNYNYYNNNNNNNNNYYNYNNNYNNYYNN", "NYYYYYNYYNYYYYYNYNNYNYNYNNNYNYYNNNN", "NYNNYNNNYYYYNNNNNNNNNYYNNYNYNNNYNYY", "NYNYYYYYNYNNNNNYYYYNYNYYNNNYNNNNNYY", "NYYYNNYNYYYYNYYYYYNYNYYNNYNNYYNNNNY", "NYNNNYYNYYNYYYNNYYYNYNNYNYNNYYNYNYY", "NYNYNNYYYYNNNNYNNNNNYYNNYNNNNNYNNYY", "YNNYYYNNNYNYNYNNYYYNNYNNNYNNYYNNNYN", "YYNNYNNNYNNNYNYNYNNYNYNNNNYNNYNNYYY", "YYNYYYNYNYNNYNNYNNYYYNNYNNYYNYYYNNY", "NYYYYNNYYYYNNNYYYYNNYNYNNYNYNNYYNNN", "YNNYYNNNYYNYYYNYNYYNYYNNNNNNYYYYNNY", "NNYNNYNYNNNYNYYNNYNNNNYYNYNNNYYNYYN", "NNYYYNYNYNNNNNNYNNNYYYNNNYYNNNYNYYY", "NYNYYNNNNYYYNYYNNNNYNYYYYYYNNNNNNYN", "YNNYYNYNYYNNNNYYYNNYNYYNNNYNNNNNNYY", "YNNNNNYYYYYYNNNNYNNYNYNYYNYNNYNNNYY", "NYNNNNYYYNNNYNNNYNNNYNYNNYYNYNYNYNY", "NNYYYNNYYNYNYYNNNYNNNNNNYYYNNNYNNYN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 165459609;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> g = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int k = 1000000;
    int m = 123456789;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> g = {"NYNY", "NNNN", "YYNY", "NYNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> g = {"NYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNY", "YYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYN"};
    int k = 987654;
    int m = 987654;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 354924;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> g = {"NNYYYYNNYYNYNYYNNNNNYNYYNNNYYYYNNNY", "YNNYNYYYYNYNNYNYNYNNYNNNYYYNYNYNYYY", "NYNYNYNNYNYNNNNNYYNYNNNNYNNNNYYNNNY", "YYNNNNNYNNYYYNYNYYYYYYYYYYNYYNYNYYN", "NYNYNYNNNYNYNYNYNYYYYNNNYNYNNNNNYNY", "YYYYNNYYNYYNYNYYYYYNNYYNYNNYYYNNNNN", "NNYYYNNYNYNYNYNNYYNNYNNNYYYNNYNNYYN", "NNNYNYYNNNYNNNNNYNNNNNYNNNNNYYNNYYY", "YNYNNYYYNNYYYNNYNNNNNNNNNYYNYNYNNNY", "YNNNYNYYNNYYYYNYYNYYNYNNNNNNYNYNNNN", "NNYYNYNNNYNNNNYYYNNYNNYYYNNYNNYNYYY", "YNYYNNYNNNNNYNNNYNNNNNNYNYYYNNNYNNY", "NNNYYNYYYYYNNYNNYNYYNNNYNNNYNNNNNYY", "YYNNYNYYNYYYNNNYYNYYNYYYYYNNYYYYNNY", "YNYNNNYYNNYNNYNYYYNYNYYNNNNYNNYNNNN", "NNNNNNYNNYNYNYYNYNNNYNNNYNYYNYYNYYN", "NNNNNYNNYYYYYNYYNNYYYYYNYNYYNYNNYNN", "YYYYNNYYYYYNNYYYNNNNYYYYYNYYYYYYNNN", "NYYNNNYYNNNNNYNNNYNYNNNYYYYNYYYNNNN", "YYYNYYNYYYNYNYNYNNNNNYNNYNYYNNYYYNY", "NYNNNYNYYYYYYNYYNNYNNYNNNNYYYYYYNYY", "NNYYNYYYNYNYYNYYNNYNNNNNNYYNNNYNNYN", "NNYYNNYNYNYNNYNNNYNNNNNNNYYNYNNNNYY", "YYYYNYNYYYYYYNNYNNNNNYNNYNYYYNNNNYY", "NNYYYNNYNYYYYYNNYYNYNNNYNYNYYYNYNYY", "YNYNNNYYNNYNYYNYYNYYNNYYYNNYNYNNYYN", "YNNYNNNNNYNYYNNNNYYNNYNYNYNNYYNNYNY", "YYNYYYYNNYNNNYYNNYNYYYYYNNYNYNNNYNY", "NNNNNYNYYNNYNYYYNYNYYNYNYYYYNYNNYNN", "NNNYYNYYNYNNYYNYYYNYNYNNYNNYYNYYYYN", "NNNYNYNNNYYYNNYNNNNNYNYNNNYYYYNYYNY", "YYYNYNYYYYNYYYYNNNYYNYNYNYYYNYNNNYN", "NNYYYNYNYNYYYYNNYYNYYNNYNNYNNYNNNYY", "NYYNYYYNNYYNNNYYNYNYYNNNNYNYNNNNYNN", "NYNYYYNNYNYYNNYYYYNYYYNNNNYNYNYNYYN"};
    int k = 524287;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 301427856;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> g = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 999998;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> g = {"NYYNYYN", "YNYNYNY", "NYNYNYN", "YYYNYNY", "NNYYNNY", "NYYYNNY", "YYYYYYN"};
    int k = 1000000;
    int m = 1000000000;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 139511433;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> g = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int k = 1000000;
    int m = 9901;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 9497;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> g = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int k = 1000000;
    int m = 999;
    TourCounting* pObj = new TourCounting();
    clock_t start = clock();
    int result = pObj->countTours(g, k, m);
    clock_t end = clock();
    delete pObj;
    int expected = 965;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=20315020&rd=9986&pm=6386
********************************************************************************
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;
#define EPS 1e-8
#define INF 1100000000
#define F0(i, n) for (i = 0; i < n; i++)
#define FR(i, j, n) for (i = j; i < n; i++)
typedef long long LL;
int i, j, k, n, N;
LL m, ret;
LL a[75][75], b[75][75], c[75][75];
 
 
void setnam(LL a[75][75], LL b[75][75], LL c[75][75])
{
  int i, j, k;
  F0(i, N) F0(j, N) c[i][j] = 0;
  F0(i, N) F0(j, N) F0(k, N) c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % m;
}
 
void setxar(LL a[75][75], LL b[75][75], LL k)
{
  int i, j;
  if (k == 1)
  {
    F0(i, N) F0(j, N) b[i][j] = a[i][j];
    return;
  }
  LL c[75][75];
  if (k % 2 == 0)
  {
    setxar(a, c, k/2);
    setnam(c, c, b);
  }else
  {
    setxar(a, b, k/2);
    setnam(b, b, c);
    setnam(a, c, b);
  }
}
 
class TourCounting {
public:
int countTours(vector <string> g, int k, int m1) 
{
  m = m1;
  n = g.size();
  F0(i, n) F0(j, n) a[i][j] = (g[i][j] == 'Y') ? 1 : 0;
  F0(i, n) { a[i][n + i] = 1; a[n + i][n + i] = 1; }
  N = 2 * n;  
  setxar(a, b, k - 1);
  F0(i, n) F0(j, n) ret = (ret + b[i][j + n] * a[j][i]) % m;
  return ret;
 
}
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/