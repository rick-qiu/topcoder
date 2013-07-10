/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9924
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

class WalkingDistance {
public:
    double getLongestShortest(vector<int> x, vector<int> y, vector<string> streets);
};

double WalkingDistance::getLongestShortest(vector<int> x, vector<int> y, vector<string> streets) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 1};
    vector<string> streets = {"NY", "YN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 2, 2, 0};
    vector<int> y = {0, 0, 2, 2};
    vector<string> streets = {"NNYY", "NNYY", "YYNN", "YYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4.82842712474619;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 1, 1, 0};
    vector<int> y = {0, 0, 1, 1};
    vector<string> streets = {"NYNY", "YNYN", "NYNY", "YNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {-1000, -1000, 1000, 1000};
    vector<int> y = {-1000, 1000, 1000, -1000};
    vector<string> streets = {"NYNY", "YNYN", "NYNY", "YNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4000.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 1, 2, 2};
    vector<int> y = {0, 0, 1, -1};
    vector<string> streets = {"NYNN", "YNYY", "NYNY", "NYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3.414213562373095;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 1, 0};
    vector<int> y = {0, 0, 1};
    vector<string> streets = {"NYY", "YNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7071067811865475;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 1, 2};
    vector<int> y = {0, 1, 2};
    vector<string> streets = {"NYY", "YNN", "YNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119286;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 26.87005768508881;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {0, 0, 4};
    vector<int> y = {0, 4, 4};
    vector<string> streets = {"NYY", "YNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 6.82842712474619;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {0, 0, 4, 2};
    vector<int> y = {0, 4, 4, 2};
    vector<string> streets = {"NYYY", "YNYY", "YYNY", "YYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 7.656854249492381;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {0, 0, 400, 200, 201};
    vector<int> y = {0, 400, 400, 200, 200};
    vector<string> streets = {"NYNYY", "YNYYN", "NYNYY", "YYYNN", "YNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 765.6863088368576;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 69.29646455628168;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {5, 4, 2, 8, 8, 10, 7};
    vector<int> y = {7, 7, 2, 8, 9, 1, 1};
    vector<string> streets = {"NYYYYYY", "YNYYYYY", "YYNYYYY", "YYYNYYY", "YYYYNNY", "YYYYNNY", "YYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 15.11960976741479;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {4, 1, 4, 3};
    vector<int> y = {10, 9, 8, 10};
    vector<string> streets = {"NYYN", "YNYY", "YYNY", "NYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4.81720680758398;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {2, 1, 0, 10, 9, 8, 0};
    vector<int> y = {4, 6, 10, 3, 0, 3, 0};
    vector<string> streets = {"NYYNYYY", "YNYYNYY", "YYNYYYY", "NYYNYYY", "YNYYNYY", "YYYYYNY", "YYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 18.52810410807632;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {6, 2, 3, 8, 6, 10};
    vector<int> y = {3, 7, 6, 4, 0, 10};
    vector<string> streets = {"NNYYYY", "NNNNYY", "YNNYYY", "YNYNYY", "YYYYNY", "YYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 17.262910002024356;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {8, 4, 2, 5, 6, 7, 0, 8, 10};
    vector<int> y = {10, 9, 7, 10, 0, 9, 6, 3, 10};
    vector<string> streets = {"NYNYNYNYY", "YNNNNNNYY", "NNNYYYYNN", "YNYNYYYYY", "NNYYNYYYY", "YNYYYNYYY", "NNYYYYNYY", "YYNYYYYNY", "YYNYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 18.077513672598883;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {2, 1, 2, 5, 10, 1};
    vector<int> y = {9, 9, 5, 4, 7, 6};
    vector<string> streets = {"NYYYNY", "YNNYYY", "YNNYNY", "YYYNYY", "NYNYNY", "YYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 12.3445715789017;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {9, 2, 9};
    vector<int> y = {2, 6, 4};
    vector<string> streets = {"NYY", "YNN", "YNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 10.06225774829855;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {10, 7, 1, 0, 0, 3, 5, 2, 6};
    vector<int> y = {1, 10, 8, 0, 10, 0, 4, 9, 9};
    vector<string> streets = {"NYYNYYYYY", "YNYYYYYYY", "YYNYYYYYY", "NYYNNYYYY", "YYYNNNYYY", "YYYYNNYNY", "YYYYYYNNN", "YYYYYNNNY", "YYYYYYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 21.365623737336442;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {10, 8, 7, 6, 4, 9, 3, 0, 1, 9};
    vector<int> y = {3, 7, 8, 1, 4, 3, 3, 2, 6, 7};
    vector<string> streets = {"NNNNYYYYNN", "NNYYYNYYYN", "NYNYNYNYNY", "NYYNYNYYYY", "YYNYNYYYYY", "YNYNYNYNYY", "YYNYYYNYYN", "YYYYYNYNYY", "NYNYYYYYNY", "NNYYYYNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 15.466181432183118;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {3, 0, 4};
    vector<int> y = {1, 2, 6};
    vector<string> streets = {"NNY", "NNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 10.755873763085166;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {3, 3, 6, 8, 4, 3};
    vector<int> y = {9, 8, 9, 7, 4, 7};
    vector<string> streets = {"NYYYYY", "YNNYNY", "YNNYYY", "YYYNYY", "YNYYNN", "YYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 9.70581547953313;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {7, 6, 8, 8, 7, 4, 10, 2, 4, 3};
    vector<int> y = {2, 9, 9, 0, 3, 3, 8, 2, 10, 9};
    vector<string> streets = {"NYYYYYYYYY", "YNYYYYYNYY", "YYNYYYYYNY", "YYYNYYNYYY", "YYYYNYYYNY", "YYYYYNYYYY", "YYYNYYNYNN", "YNYYYYYNYY", "YYNYNYNYNY", "YYYYYYNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 16.87164554347071;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-722, 647, -970, -414, 184, 915, -279, -996};
    vector<int> y = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<string> streets = {"NYYYYYYY", "YNYNYYYY", "YYNYYNYY", "YNYNYYYY", "YYYYNYYY", "YYNYYNYY", "YYYYYYNY", "YYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1911.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {458, 988, -310, -22, 331, 540, -435, -9, -627, 894, 3, -922, 246, 565, -853, 669, -852, -64, 925, 742, -192, 133, -13, -812, 612, 576, -734, -578, 463, -720, 910, -826, 603, -218, 323, -251, -475, 508, 493, -465, -115, 975, 21, 695, -748, 770, 170, 795, -362};
    vector<int> y = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<string> streets = {"NYYYNNYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYY", "YNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYNY", "YYNYYYNNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYNYYYY", "YYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "NYYYNYYYYYYYYYNYYYYYNYYYYYYYYYYNYYYYYYNYYYYYYYYYY", "NYYYYNYYYYYYYYYYYYNYYYYYYYYYYYNNNYYYYYYYYYYYYYYYY", "YYNYYYNYYYNYYYNYYYYYYYYYYYYYYYYYYYNYNNYYYYYNYNYYY", "YYNYYYYNYYYNYYYYYYYYYNYYYYYYYYNYYYYYYYYNYYYNNNYYY", "NYYYYYYYNNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYNYYYYYYY", "YYYYYYYYNNYYNYYYYYYNYYYYNYYYYYYYYYNYNYYYYYYYYYYYY", "NYYYYYNYYYNNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYNYYNNYYNYYYNYYYYYYYYYYYNYYYYYYYYYYYNYYYYYY", "YYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYY", "YYYNYYYYYYYYYNYNYYYYYYYYYNYYYNYYYYYYYYYYYYYYNYYYN", "YYYYNYNYYYYNYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYNYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYNYY", "YYYYYYYYYYYYYYYYNYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYNYNYYYYYYYYNYYYYYYYNYYYYYYYYY", "YYNYYNYYYYYNYYYYNYNNYYYNYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYYYYNNYYYYYYYYYYYYYYNYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYNYNYYNNYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YNYYYYYNYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYNYYYNYYYYYY", "YYYYYYYYYYYYYYNYNNYYYYNYYYYNYNYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYNYYYYNYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYNNYYYYYYYYYYYYYYN", "YYYYYYYYNYYYYNYYYYYYYYYYYNNYYYNYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNNYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYNYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYN", "YYYYYYYYYYYYYNYYYYYYYYNYYYYYYNYYNYYYYYYNYYYYNYYYY", "YYYYYNYNYYYNYYYYYYYYYYYYYNNYYYNYYNYYYYYYYYYYYYYYY", "YYYYNNYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYNYYYYNYYYYYYYYYYYYYNYYYYNYYNYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYNYNYYYYYNYYYNYYY", "YNYYYYNYYNYYYYYYYYYNYYYYYYYYYYYYYYNNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNNNYYYYYYYYYYYYY", "YYYYYYNYYNYYNYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYNYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYNNYYYNYYYYYY", "YYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNNYYYYYNYYYY", "YYYYYYYNNYYYYYYNYNYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYN", "YYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYNY", "YYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYNYYNYYNY", "NYYYYYYYYYYNYYYYYYYYYNYNYYYYYYYYYYYYYNYYYYNYYYYYY", "YYYYYYNNYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYNYNYYY", "NYNNYYYNYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYNYYNYYNYYYY", "YYYYYYNNYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYNYNYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNNYYYYYNY", "YYYYYYYYYYYYYNYYYYYYYYYYNYYNNYYYYYYYYYYNYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1911.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-874, 622, -267, 771, -670, 969, 252, -622, 530, 585, 231, -643, 883, -966, -301, -488, -841, -105, 456, 756, 681, 200, 51, -760, 794, 417, 467, -689, -33, -421, 815, -716, 843, 100, 785, 173, 540, -863, 529, -226, 606, 223, 702, 261, -124, 865, 715, -670, 149};
    vector<int> y = {-365, 884, 795, -169, 802, 976, 855, -503, -636, 61, 553, -267, -980, -822, 862, 417, -89, -67, 0, -525, 69, -16, 91, 178, 792, 40, 88, 774, -341, -619, -932, 304, -698, 29, -895, 122, -174, 392, 696, 65, 192, -518, 118, -875, -933, -451, 799, 990, 76};
    vector<string> streets = {"NYYNYYYNYYYNYYYYYYYYYYYYYYYNNYNYYYYYYYYYYYYYNYYYY", "YNYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYNNNYYNYYYYYYYYYYYNYYYYYYYYYYYNYYYYNY", "NNYNYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYNYNYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYNYNYYYYYYYYYYNYYYYYYYYYNYNYYYNYYNYYYYYYYYNNYY", "NYYNYYYNYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYN", "YYYYNYYYNYNYYYYYYYYYYYYYYYYYNYYYNYYYYNYYYYYYYYYYY", "YYYYYYYYYNYNYYYYYYYNYYYYYYYNYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYNYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYNYYY", "NYYYYYYYYNYNYYYYYYYYNYYYYYYNYYYYYYNYYYYYYYYYYYYYY", "YYYNYNYYYYYYNYYYYYYYYYYNYYYNYYYYYYYYYYYNYYYNYYYYY", "YNNYYYYYYYYYYNYYYYYYYYNYYYYYNYYYYYNYYYYYYYNYYYYYN", "YYNYNYYYYYYYYYNYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYNYYNYYYYYYYYYYYNNYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNNYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYY", "YYYYYYNNYYYYYYYYNNYYYYYNYYNYYYYYYYYYYYYYYYYNYYNYY", "YYNYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYYYYYNYNYYYYYYNYYYNYYYNYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYNYNYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYNNYYYYYNYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYNYNYYNYYYYNNYNYYYYYNYYYNYYNYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYNNYYYNYYY", "YYYYYYYYYYNYYYYYYYYYYYYNNNYNNYYYNYYYYNYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYY", "NYYYYYNYYNYNNYYYYYYYYYYYYNYNYYYYNYYYYNYYYYYYYYYYY", "NYYYYYYYNYYYYNYYNYYNYYYYYNYYNYYYYYYYYYYYYYYYYYNYY", "YYYYYYNYYYYYYYYYNYYYYYNYYYYYYNYYYYYYYYYYYYNYYYYYY", "NYNYYYYNYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNNNY", "YYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNYYYYNYYYYYNYNYYYYNYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYNYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYNYYYYYNYNYYYYYYYYYYYNYYYYYYYYYNYYY", "YYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYNYYYYY", "YYYYYYYYNNYYYYYYYYYYYNYYYNYNYYYYYYYYYNYNNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYNYYYYYYNY", "YYYYYYYYYYNYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYNYYYYYYY", "YYNYYYYYYYYYYNYYYYYYYYNYYYYYYNYYYYYYYYYYYYNYYYNNY", "YYYYYYYYYYYYNYYYYNYYYYYYYNYYYYYYYYYYNYYYYYYNYYYNY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYNYYNYYYNYYYYYYYYYNYYNNYYYYYNYYYYNYYYYYYYYYNYNY", "YYYYYYNYYYYYYYYYYNYYYYYYYYYYNYNYYYYYYYYNYYNYYYNYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYNNYNYNY", "YYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4322.366039496307;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {985, -782, -321, -433, -699, 548, 503, -749, 562, -809, 632, 43, 173, -522, -705, -792, 704, 571, 490, -875, 309, 90, -155, 548, 532, 347, 33, 168, 527, -35, 963, -271, -926, -974, -914, -109, 368, 592, 92, -928, -74, 640, -269, -87, 639, -336, -47, 656, -327, 573};
    vector<int> y = {-206, -846, 976, -581, 900, 683, 588, 606, 243, -64, -706, 93, -415, 616, 179, -706, -118, -193, -435, 619, -508, 751, 818, 813, -199, 677, -376, -673, -209, 973, 626, -340, 912, 921, -480, -465, 957, 89, 332, -570, -66, -56, 501, 552, 780, 603, -711, -979, -70, -457};
    vector<string> streets = {"NYYYYYYNNYYYYYYYYYYYNYNYNYYYYYYNYYNYYYYYYYYYYYYYYY", "YNYYYYYYYNYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYY", "YYNYYNYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYY", "YYYNYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYY", "YYNYYNYNYYYYYYYNYNYYYYYYYYYNNYYYYYYYYYYYYNYYYYYYNY", "YYYYYYNYYYYYNYYNYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYY", "NYYYYNYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYY", "NYYNYYYYNYYYYYNNYYYYYYYNYYNYYYNYYYYYYYNYYYYYNYYYYY", "YNYYYYYYYNYNYYYYNYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYNYY", "YYYYYYYYYYNYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YNYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYNNYYY", "YYYYYYYYNYNYYYNYYYYYYYYYYYYYNYYNYYYYYYYYYNYYNYYYYY", "YYYYYNNYNYYYYYYNYYYNYYYYYNYYYNYYYYYNYYNYYYYYYYYYYY", "YYYYYYYYYNYYYYYYNYYYYYYYYYYNYYYYYNYYYNYYNYNYYYYYYY", "YYNYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYNY", "YYYNYYYYYYYYYYYYYYNYYNYNYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYNNYYYYYYYYNYYYNYYYYYYYYYYYNYYYN", "NYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYNYYYYYNYY", "YYYYYYYYYYYYNYYYYYNYYNYNYYYYNYNNYYYYYYYYYYYYYNYNYN", "NYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNNYYYYYN", "YYYYYYYYNYYYYYYYYYNYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYY", "YNYYYNYNYYYYYYYYNYYYYYYYYYYNYYYYYYYNYNYYYYYYYYYYYY", "YYYYYNYYYYNYYYNYYYYYYNYYYYYYNYYYYYYYNYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYNYYYNYYYYYYYYYNYYYNYYYYYYYYYYYYYYYY", "YYNYYYNYNYYYYYYYYYYYYNYYNYYYYYNYYNYYYYYYYNYYYYYYYY", "NYYYNYYYYYYYYYNYYYYYYNYYYYYYYYYNYNYYYYNYYYYYYYYNYY", "YYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYNYYNNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYNYYYYYYYYYNNNYNYYYYYYYYYNYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYNYYYYYNYYY", "YYYYYYYYYYYYYYYNYNYYYYYYYYYNYYYYNYNNYYNYYYYYYYYYYY", "YYYYNYYYYYYYNNYYYYYYYYYYYYYYNYYYNYYYNYNYYYYYYYYYYY", "YYYYYYNYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYNNYYYYYYYYYYN", "YYYYYYYNNYYNYYYNYYYYYYYYYYYYYYYNYYYNNNNYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYNYNYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYNYYYYYNYYYNYYYNY", "YYYYYNYYYNYYYYNYYYYYNYYYYYYYYYNYYYYYYYYNYNYYYYYYYY", "YYNYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYNYYYYYNYYYYNYYYYYYYYYNYYYYYY", "YNYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNNYYYNYYYYY", "YYYYYYYYYYYYYNYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYNNYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYNNYYY", "YYYYYYYYYNYYYYYYYYYYNNYYYYYYYYYNYYYYYYYYYYYYYYYNYY", "YYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYNYNNNYYYYYYYYYYYYYNYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4094.9091263437786;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-265, 296, 532, -89, 858, -27, -870, 309, 645, -902, 615, -364, -680, -848, -411, -572, 182, -25, -988, 498, -844, 493, 333, -458, 251, -115, -403, 384, -500, 620, -468, -956, -84, 535, 863, -16, -316, 915, 508, -68, 915, -873, -182, -275, -968, -882, 99, -71, 386};
    vector<int> y = {-552, 250, 209, 978, 6, -328, -975, 867, -965, -740, -558, 16, 926, -311, -331, -269, 825, -163, 26, -2, 25, -243, -139, -325, 808, 797, 719, 297, -465, -56, -519, -652, -625, -88, -933, -610, 566, -907, -233, -805, 254, -929, 924, -912, 918, -584, 752, 256, -703};
    vector<string> streets = {"NNYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYY", "NNYYYNYNYYYYYYYYYYYNYYNYNYYYYYYYNYYYYYYYYYNNYYYYY", "YYNYYYYYNYNYYYYYYYNYYYYYNNYYYYYNYNNYYYYYNYYYYYYYY", "YYYNYYYYYYNNYYNYYYYYYYYYNYYNYYYYNYYYYYYYYYYYYNYYY", "YYYYNNYYYYYYYNYYYYYYYYYYYYYYYNNYYYNNYYYYYNYYYYNNY", "YNYYNNYNYYYYYYYYNYNYYNYNNYNYNYYYYYNYYNNYYYYYYYYYY", "YYYYYYNNNYYYYYNYNNYYYYYYYNYYYYNYYNYYNYYNYYYYNNYYY", "NNYYYNNNYYNYYYNYYYYYYYYYYNYYYYYYYYYNYYNNYYYYYYYYY", "YYNYYYNYNYYYYNYNYYNNYYYYYNYNYNYNYYYYYYYYNYYYYNYNN", "NYYYYYYYYNYYYYNYYNYYYYYYYYYYNYYYYNNYYYYYYYNYNNYYY", "YYNNYYYNYYNYYYYYYYYYYYNYNYYYYYNYYNYYYYYYYYNYYYYYN", "YYYNYYYYYYYNYYYYYYYYYYYYYNYYYNYYYYYYNYYYNYYYNYNYY", "YYYYYYYYYYYYNNYYYYYYNYYYYNNYYYYYYYYYYYYYYYYYNYYYY", "YYYYNYYYNYYYNNYYYYYYNNYYNYYYYYYNYNYYYNYYYYYYNYYNN", "YYYNYYNNYNYYYYNYYYYYYYYYYYYYYYNYNYYYYYYNYYYYNYYYY", "YYYYYYYYNYYYYYYNYYYYNNYYYYYNYYYYYYYNNNYNYYYYYYYNY", "YYYYYNNYYYYYYYYYNYYYYYYYNYYYYYNYYYYYYYYYYYNYYYNYY", "YYYYYYNYYNYYYYYYYNYNYYYYYNYYYYYYNNNYNYYYYYYNYNYYN", "YYNYYNYYNYYYYYYYYYNYNYNNYYNNYNNYYNYYYYNYYYYYYNYNY", "YNYYYYYYNYYYYYYYYNYNYYYYNNNNYNNNYYYYYYYYYNYYYYNNN", "YYYYYYYYYYYYNNYNYYNYNYYNYYYNYYYYYYNYNNYYYYYYYNYNY", "YYYYYNYYYYYYYNYNYYYYYNYYYYYYYYYYYYNNNYNNYYYYYYYYN", "YNYYYYYYYYNYYYYYYYNYYYNYYYYNYYYYNYYNYNYNYNYYYYYYN", "YYYYYNYYYYYYYYYYYYNYNYYNNYYYYYYYYYYYYYYNYYYYYYYYY", "YNNNYNYYYYNYYNYYNYYNYYYNNYYYYYNYNYYYNYYYYYYYYYNYY", "YYNYYYNNNYYNNYYYYNYNYYYYYNYYNYYYYNYYNYYYYYYNNYYYY", "YYYYYNYYYYYYNYYYYYNNYYYYYYNYNYYNYYYYNYYNYYYYNYYNY", "YYYNYYYYNYYYYYYNYYNNNYNYYYYNYNYYYYYNNYNYYYYYYNNYY", "YYYYYNYYYNYYYYYYYYYYYYYYYNNYNNYYYYNYYYYNNYYYYNYNY", "YYYYNYYYNYYNYYYYYYNNYYYYYYYNNNYYYYYYNYYYYYNYYYYYY", "YYYYNYNYYYNYYYNYNYNNYYYYNYYYYYNYYYYYYNNYYYYYYNYYY", "YYNYYYYYNYYYYNYYYYYNYYYYYYNYYYYNYYYYYYYYNYYYYYYYY", "YNYNYYYYYYYYYYNYYNYYYYNYNYYYYYYYNYYYNYYYYYYYYYNYY", "YYNYYYNYYNNYYNYYYNNYYYYYYNYYYYYYYNNNYNYYYNYYYYNYY", "YYNYNNYYYNYYYYYYYNYYNNYYYYYYNYYYYNNYNYYNYYNYNNNYY", "YYYYNYYNYYYYYYYNYYYYYNNYYYYNYYYYYNYNYNYYYYNYYYYYY", "YYYYYYNYYYYNYYYNYNYYNNYYNNNNYNYYNYNYNYNYYNYYYYYYY", "YYYYYNYYYYYYYNYNYYYYNYNYYYYYYYNYYNYNYNYYYNYYYYYYY", "YYYYYNYNYYYYYYYYYYNYYNYYYYYNYYNYYYYYNYNYYYYYYYYYY", "YYYYYYNNYYYYYYNNYYYYYNNNYYNYNYYYYYNYYYYNYYYNNYYYY", "NYNYYYYYNYYNYYYYYYYYYYYYYYYYNYYNYYYYYYYYNYYYYYYYY", "YYYYNYYYYYYYYYYYYYYNYYNYYYYYYYYYYNYYNNYYYNNYYYYYY", "YNYYYYYYYNNYYYYYNYYYYYYYYYYYYNYYYYNNYYYYYNNYNYYYN", "YNYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYNYYYNNYYYY", "YYYYYYNYYNYNNNNYYYYYYYYYYNNYYYYYYYNYYYYNYYNNNYYYY", "NYYNYYNYNNYYYYYYYNNYNYYYYYYNNYNYYYNYYYYYYYYYYNYYY", "YYYYNYYYYYYNYYYYNYYNYYYYNYYNYYYYNNNYYYYYYYYYYYNYY", "YYYYNYYYNYYYYNYNYYNNNYYYYYNYNYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYNYNYYNYYYNYNYNNYYYYYYYYYYYYYYYYYYYNYYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3922.995605366801;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-912, 957, -467, -540, -720, 108, 291, 164, -114, -932, 682, -563, -714, 527, 619, 615, -390, -509, 791, -747, -461, -781, 270, 70, -961, 37, -555, 702, -571, 770, 15, -421, -10, 369, -193, -73, 898, 550, 803, 979, -574, -910, 661, -21, -989, -221, -560, 736, -502};
    vector<int> y = {-896, 402, -474, -41, -101, -392, -816, -94, -959, -582, 353, -936, 974, -256, 553, -265, 940, -342, 224, -538, -436, 182, 566, -805, -704, -498, 356, -642, -317, 892, -925, -682, -188, 607, -363, -125, 353, 700, -18, -776, -85, -969, -269, 270, 738, 443, -115, -237, -877};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYNYYYYNNYNYNYYYYNYY", "YNYYYYYYYYYYYNYYYYYYYYYNYYYYYYYNYYYYYYYNYYYYYYYYY", "YYNYYYYYYYNYYYYYYYNNYNNYYYNNYYYYNNYYYYYYYYYYYYYYY", "YYYNYYYYYYYNYYYYNYYYYYYYNYNYYNYYNYYYYYYYYNYYYNYYY", "YYYYNNYYYYYYYYYNNYNYYNYYYYYNNYYYYYNYNYYYYYYYYYYNY", "YYYYNNYYYYYYYYYYYYYYYYYYYYNYYNYYYYNYYYNYYYYYYYNYN", "YYYYYYNYYYYYYNYNNYYYNYNNYNNYYYYYYYNYYYYYNYYYNYNYY", "YYYYYYYNYYYYNYYYYYYYYYYYNYYNYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYNNNYYYYYYYNYNYYNNYYYYYYYYYNNYYYYYYYY", "YYYYYYYYYNYYYYYYNYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYY", "YYNYYYYYYYNYYYYYYYYYYNYYNYYYYNYYYYYYYNYYYNYYYYYYY", "YYYNYYYYYYYNYYYYYYYYYYYNNYYYYYNYNYYYYYNYNYYYNYYYY", "YYYYYYYNYYYYNYYNYYYYNNYYYNYYYYNNYNYYYYYYYNYNYNYYN", "YNYYYYNYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYNNNYYNYNNYYY", "YYYYYYYYNYYYYYNYYYYYYNYYYYYYYYNYNYNNYYYYYYYYNNNYN", "YYYYNYNYNYYYNYYNYYYYNNYYYYYNYYYYYYYNYYYYYNYYNYYYN", "YYYNNYNYYNYYYYYYNNNYYYYYYYYYNYYYNYYYYNYNNYNNYNNNN", "YYYYYYYYYYYYYYYYNNYNYYNYYYYYYYYYYNYYYNYYYYYYYNYYY", "YYNYNYYYYYYYYYYYNYNYYYNYYYNYNNYNNYNYYYNYYYYNYYYYY", "YYNYYYYYYYYYYYYYYNYNYYYYYYYYNYYYNYYYYYNYYYYYYNYYY", "YYYYYYNYYYYYNYYNYYYYNYYYYYYYYNYYYYYYYYNYYYYNYNYYY", "YYNYNYYYYYNYNYNNYYYYYNNYYYYYYYYYYYYYYNYYYYYYNYYYY", "YYNYYYNYYYYYYYYYYNNYYNNYYYYNYYNYYYYYYYYYYNYYYYYYY", "YNYYYYNYNYYNYYYYYYYYYYYNYYYYYNYYYNYYNNNYYYYYYYYNY", "NYYNYYYNYYNNYYYYYYYYYYYYNNYYYYYYYNYNNNNNYYYYYYNYY", "YYYYYYNYNYYYNYYYYYYYYYYYNNYNYYYNNYYYYYYYNYYNNYNYY", "YYNNYNNYYYYYYYYYYYNYYYYYYYNYNYNYYNYYYYYYYYYYYYYYY", "YYNYNYYNYNYYYYYNYYYYYYNYYNYNNYNYYYYYYYYYNNNYYYYYY", "YYYYNYYYNYYYYYYYNYNNYYYYYYNNNYYYYNNYNYYYYYYNYYYYN", "NYYNYNYNNYNYYYYYYYNYNYYNYYYYYNNYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYNNYNYYYYYYYNYYYNNYNNYYYYYYNYYNYNNYYYYY", "NNYYYYYYYYYYNYYYYYNYYYYYYNYYYYYNNYYYYNYYYYYYNYYYY", "YYNNYYYYYYYNYYNYNYNNYYYYYNYYYYYNNYYYYYNYYNYYYYYYY", "YYNYYYYYYYYYNYYYYNYYYYYNNYNYNYYYYNYNYYYYYNYNYYNYY", "YYYYNNNYYYYYYYNYYYNYYYYYYYYYNNYYYYNYYYYNYYNYYYYYY", "YYYYYYYYYYYYYYNNYYYYYYYYNYYYYYYYYNYNNYYYYYNNYNNYY", "NYYYNYYYYYYYYYYYYYYYYYYNNYYYNYYYYYYNNYNYYYYNNYYNY", "NYYYYYYYYYNYYNYYNNYYYNYNNYYYYYNNYYYYYNYNYYYNYYYYY", "YYYYYNYYYNYNYNYYYYNNNYYNNYYYYYYYNYYYNYNYYYNYYNYNY", "NNYYYYYYNYYYYNYYNYYYYYYYNYYYYYYYYYNYYNYNYYNNYYYYY", "YYYYYYNYNYYNYYYYNYYYYYYYYNYNYYNYYYYYYYYYNYYYNYYYY", "NYYNYYYYYYNYNYYNYYYYYYNYYYYNYYYYNNYYYYYYYNYYYYYYN", "YYYYYYYYYYYYYNYYNYYYYYYYYYYNYYNYYYNNYYNNYYNYYYYYY", "YYYYYYYYYYYYNYYYNYNYNYYYYNYYNYNYYNYNNNYNYYYNNYYYN", "YYYYYYNYYYYNYNNNYYYYYNYYYNYYYYYNYYYYNYYYNYYNNYYYY", "YYYNYYYYYYYYNNNYNNYNNYYYYYYYYYYYYYYNYYNYYYYYYNYNY", "NYYYYNNYYYYYYYNYNYYYYYYYNNYYYYYYYNYNYYYYYYYYYYNYN", "YYYYNYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYNYNYYYYYYNYNY", "YYYYYNYYYYYYNYNNNYYYYYYYYYYYNYYYYYYYYYYYYNYNYYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4189.995020423987;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {308, -299, -772, 623, 968, -566, -554, 699, -652, -864, 463, 429, -177, 343, 563, -110, -78, -711, 985, -579, 696, -915, 214, -265, -524, 195, -410, 855, 498, 144, -6, -539, -612, -430, -404, 771, 45, -476, 37, -707, -24, 164, 64, -593, 510, -693, -597, -949, -457, -610};
    vector<int> y = {-808, -149, -631, 973, -517, -210, -157, -338, -315, 708, 149, -754, -848, 714, 93, 529, 979, -695, 878, -316, 612, -248, 550, -512, -143, 478, -207, 363, -826, -486, -878, -392, 532, 776, -889, 136, 360, 520, 555, 813, 714, 443, 4, -570, 988, -984, 60, 950, 711, -220};
    vector<string> streets = {"NYYYNYYYNYYNYYYYYYYYYYNNYYYYYYYYNNYYNYNYYNYYYYYYYN", "YNYYYYNYNYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYY", "YYNYNYYYYYYYNYNYYYNYNYNYYYNYYYYYNYNNNYYYYYYYYNYYYY", "YYYNYYNNYYYYYYYYYNYYNYYYYYYYNNYYYNYYYYYYYYYYNYYYNY", "NYNYNYYNNYYYYNYYYYYYYYNNYNYYYYYYYYYYYNYYNYYYYYYNNN", "YYYYYNYYYYYYYNYYNYYYYYYNYYNNYYYNYYYYYYNYYYYYYYYYYY", "YNYNYYNNYNNYYYYYYYYYYYYYYYYYNNYYYYNYYYYNYYYYYNYYYN", "YYYNNYNNNYYYYYNYNYNYYYYYYYYYYYYYYYYYNNYYYYYYYNNYYY", "NNYYNYYNNYYYNYYYYNYYYYYYYYYYYYYNYYYNYYYYYYYNNYYNYY", "YYYYYYNYYNYYNNYYYYYYYYYYYYYYYYYNYNNYYNYYNNYYYYYYYY", "YYYYYYNYYYNYYYYYYYYYNYYYYYYYYYYYYYNYNYYNNYYYYYYYYY", "NYYYYYYYYYYNYYYYYYYYYYYNYYYYYNYYNYYYYYNNYYYNYNYYYY", "YYNYYYYYNNYYNYYNYYYNYYYNYYYNNYYYNNYYYNYYNNYYYNYNYY", "YYYYNNYYYNYYYNYYYNYNYNYYNYNYYYYYNYYYYYYYNYYYYYNYYY", "YYNYYYYNYYYYYYNNNNYYYYYNYYYYYYYYNYNYYYYYYNYYNYYYYN", "YYYYYYYYYYYYNYNNYYYNYYYYNYYYYNNNNYYYNYYYYNYNNYYYNY", "YYYYYNYNYYYYYYNYNNYYYYYYNYYNYNYNYYYYYYYYYYYYYYYYYY", "YYYNYYYYNYYYYNNYNNYYNNYYYNNYYYYYYYYYNYYYNYYYNYYNYY", "YYNYYYYNYYYYYYYYYYNYYYYNNYYNYYYYYYYYYYYYNYNYNYYYNY", "YYYYYYYYYYYYNNYNYYYNYYNYYNNYYNYYYYYYYYNYYYYYYYYNYY", "YYNNYYYYYYNYYYYYYNYYNYYYYYYYNYNYYYNYYYYNYNYYYYYYYY", "YYYYYYYYYYYYYNYYYNYYYNYYYYYYYYYNYNYYYYYNNNYYNYYNNY", "NYNYNYYYYYYYYYYYYYYNYYNYNYYYNYYNYYYYNYNNYYNYYYNYYY", "NYYYNNYYYYYNNYNYYYNYYYYNNYNNYYYNNYYNNYYNYYYYYYYNYY", "YYYYYYYYYYYYYNYNNYNYYYNNNYYYNYYNNYYNYNYNYYNYYNYYYN", "YYYYNYYYYYYYYYYYYNYNYYYYYNYYYYYYYYYNYNYYYYNYYYYYYY", "YNNYYNYYYYYYYNYYYNYNYYYNYYNNYYNYNNYYYYYYYYNYYYYYYY", "YYYYYNYYYYYYNYYYNYNYYYYNYYNNYYYYYYYNYNYYYYYYYYYYYY", "YYYNYYNYYYYYNYYYYYYYNYNYNYYYNYYYYYYNYYYNYYYYYYYYYY", "YYYNYYNYYYYNYYYNNYYNYYYYYYYYYNYYYYYNYNYYNNYYYYYNYY", "YYYYYYYYYYYYYYYNYYYYNYYYYYNYYYNYNYYNYYYYYYYYNYYYNN", "YYYYYNYYNNYYYYYNNYYYYNNNNYYYYYYNYYYYNYNNYYNYYYYYNY", "NYNYYYYYYYYNNNNNYYYYYYYNNYNYYYNYNNYYYNNYYYYYYYYNYY", "NYYNYYYYYNYYNYYYYYYYYNYYYYNYYYYYNNYYYYYNNYYYYNYYYY", "YYNYYYNYYNNYYYNYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYNYYYYYNYYYYYYYYYYYYYYNNNYNNNNYYYYNYYYYYYYYNYNYYN", "NNNYYYYNYYNYYYYNYNYYYYNNYYYYYYYNYYYYNNYYYYYYNYYYYN", "YYYYNYYNYNYYNYYYYYYYYYYYNNYNYNYYNYYYNNYYYNYYYYYYYY", "NYYYYNYYYYYNYYYYYYYNYYNYYYYYYYYNNYYYYYNNYYYNNYYYYY", "YYYYYYNYYYNNYYYYYYYYNNNNNYYYNYYNYNYYYYNNYYYYYYNYYY", "YYYYNYYYYNNYNNYYYNNYYNYYYYYYYNYYYNYYYYYYNYYYYYNYYY", "NYYYYYYYYNYYNYNNYYYYNNYYYYYYYNYYYYYYYNYYYNYYYNYYYY", "YYYYYYYYYYYYYYYYYYNYYYNYNNNYYYYNYYYYYYYYYYNNYNYYNY", "YYYYYYYYNYYNYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYNNNYYYYY", "YYYNYYYYNYYYYYNNYNNYYNYYYYYYYYNYYYYNNYNYYYYNNYYNNY", "YYNYYYNNYYYNNYYYYYYYYYYYNYYYYYYYYNYYYYYYYNNYYNNYNY", "YYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYYYYNYYYNNYYYYNNYYY", "YYYYNYYYNYYYNYYYYNYNYNYNYYYYYNYYNYYYYYYYYYYYNYYNYY", "YYYNNYYYYYYYYYYNYYNYYNYYYYYYYYNNYYYYYYYYYYNYNNYYNN", "NYYYNYNYYYYYYYNYYYYYYYYYNYYYYYNYYYYNNYYYYYYYYYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3967.079736126092;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {548, -572, -328, 101, 733, -471, 336, -491, -721, -138, -881, -11, 786, -687, 849, 113, -724, -557, -880, -619, 806, 319, -44, -49, -131, 538, -281, 240, -40, 363, -717, -259, -955, -884, -921, 183, -656, -633, -700, -334, -564, -534, -769, 836, -312, -558, -822, 392, 570, -25};
    vector<int> y = {976, -548, -193, -57, 335, 646, -136, 485, 915, -19, -933, -494, -696, 587, -717, -670, -261, -906, 748, -619, 452, -258, -33, 396, -429, -458, 152, 781, 466, -437, -748, -517, -905, -763, -624, -965, -361, 127, -997, -893, -235, -417, 159, -736, 678, 728, -827, 82, -293, 919};
    vector<string> streets = {"NNNYNYNNYYYYYYYYYYYYYNYYNYYYYNNNYYNNYYYNYYYNYYNYYY", "NNNYYNNYYYYYYYYYYNNNYNYNYYNYNYYYYYNYYYYYYYYYYYYNYY", "NNNYNYYYYYYYYYNNYYNYYNYYYNYYYYYYYYYYNYNYYNYYYNYYYY", "YYYNYNYYNYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYNYYYYYYY", "NYNYNYYYNNNYYYYYYYYYYNYNYNYYYYYYNYYYYYYYYYYYYYNYYY", "YNYNYNYYNYYYYYYYYYNNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYNYNYYYYNNYNYNYYYYYYYYYYYYNYYNYYYYYYNYNYYYYNN", "NYYYYYYNYYYYYYYNYYNNNNYYYNYYYNYNYYYYYYYYYNYYYYNYYY", "YYYNNNNYNYYYYNNYNYNNYYYYYYYNNNYNYYYYYYYYYNYNYYYNYN", "YYYYNYYYYNYYYYYYYYYYNYYYNNNYYNYYNNYYYYYYYYNNYYYYNY", "YYYYNYYYYYNYNYNNYNYYYYNNYYYYNYYYNYYYYYYYYNNYYYYYYY", "YYYYYYYYYYYNNYYYYYYYYNYNYYYYYYYYYYNYYYYYYYYNYYYYYY", "YYYYYYYYYYNNNYYYYYYNNYNNYNYYYYYYYNYYNYYNYNNYYYYYYY", "YYYYYYNYNYYYYNYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYNYYYNY", "YYNYYYNYNYNYYYNYYYNYNYYYYYYNYYYYNYYYNYYYYYYYYYYYYY", "YYNYYYYNYYNYYYYNYYYYYYNYYYYYYYNYYNYYYYYYNYYYYYYYYY", "YYYYYYNYNYYYYYYYNYYNNYYYYYYYYYYNYNYYYYYYYYYYYYYYYN", "YNYYYYYYYYNYYYYYYNNYYYYYNNYYYYYYYYNYYNYYYYYYNYNYYY", "YNNYYNNNNYYYYYNYYNNYYYNYNNYYYYNYYYYYNYNNYYNYYYYNYY", "YNYNYNYNNYYYNYYYNYYNYNNYYYYYYYNYYYNYYYYYYNYYYYYYNY", "YYYYYYYNYNYYNYNYNYYYNNYYYNYYYYNYYYNYNNYYYYNYYNYNYY", "NNNYNYYNYYYNYYYYYYYNNNNYYYYYNYYYYYYYYNNYNYYYYNYYYY", "YYYNYNYYYYNYNYYNYYNNYNNYYYYNNYYNYNYYYYYYYYNYNYYYYY", "YNYYNYYYYYNNNYYYYYYYYYYNNYNYYYYYNYYYYYYNYYYYYYYYNN", "NYYYYYYYYNYYYYYYYNNYYYYNNYNYYNYYYYYYYYYYYNNYYYYYNY", "YYNYNYYNYNYYNYYYYNNYNYYYYNYYYYNYYYYYYNYNNYYYYYYYYY", "YNYYYYYYYNYYYYYYYYYYYYYNNYNYYYYYYYYYYYYYYYNYYYNYNY", "YYYYYYYYNYYYYYNYYYYYYYNYYYYNYYNYYYNYNYYYYYYYNNYYNN", "YNYYYYYYNYNYYNYYYYYYYNNYYYYYNYYYYYYNYYNYNNYYYNYYYY", "NYYYYYYNNNYYYYYYYYYYYYYYNYYYYNYYYYYYNYNYNYYYYYYYYY", "NYYYYYYYYYYYYYYNYYNNNYYYYNYNYYNYYYYNYYYYYYYYYYYYYN", "NYYYYYNNNYYYYYYYNYYYYYNYYYYYYYYNYYNNYNYNNYYYNNYYNN", "YYYYNYYYYNNYYYNYYYYYYYYNYYYYYYYYNYYNNYYYYNYYNYYYYY", "YYYYYYYYYNYYNYYNNYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYNN", "NNYYYYNYYYYNYYYYYNYNNYYYYYYNYYYNYYNNYYYYNYYNYNYYNY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNYNNYYYNYYYYYYNYYY", "YYNYYYYYYYYYNNNYYYNYNYYYYYYNYNYYNYYYNYYYYYYYYNNYNN", "YYYYYYYYYYYYYYYYYNYYNNYYYNYYYYYNYYYYYNYNYYYYYYYNYY", "YYNYYYYYYYYYYYYYYYNYYNYYYYYYNNYYYYYYYYNYYYYNNYNYYY", "NYYYYYYYYYYYNYYYYYNYYYYNYNYYYYYNYYYNYNYNNYYYNYYYYY", "YYYYYYYYYYYYYYYNYYYYYNYYYNYYNNYNYYNYYYYNNNYYNYYYYY", "YYNYYYNNNYNYNYYYYYYNYYYYNYYYNYYYNYYYYYYYNNNYYYYYYY", "YYYNYYYYYNNYNYYYYYNYNYNYNYNYYYYYYYYYYYYYYNNNYYYYNY", "NYYYYYNYNNYNYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYNNYYYYYY", "YYYYYYYYYYYYYNYYYNYYYYNYYYYNYYYNNYYYYYNNNYYYNYYYYY", "YYNYYYYYYYYYYYYYYYYYNNYYYYYNNYYNYYNYNYYYYYYYYNYYYN", "NYYYNYYNYYYYYYYYYNYYYYYYYYNYYYYYYYYNNYNYYYYYYYNYYY", "YNYYYYYYNYYYYYYYYYNYNYYYYYYYYYYYYYYYYNYYYYYYYYYNYN", "YYYYYYNYYNYYYNYYYYYNYYYNNYNNYYYNYNNYNYYYYYNYYYYYNY", "YYYYYYNYNYYYYYYYNYYYYYYNYYYNYYNNYNYYNYYYYYYYYNYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3960.727456858196;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {710, -275, 640, 796, 571, 679, 484, 915, 695, -775, -644, 19, 273, -4, 748, -193, 520, 575, -175, -14, -478, 527, 943, -332, 193, -525, -416, -567, 986, 932, -841, -584, -313, -677, -865, 653, -909, -970, -242, -261, 694, 381, 484, 682, 313, -949, -590, -189, 147, -502};
    vector<int> y = {-787, 497, 881, 396, 616, 333, 440, -648, 89, 47, 169, -909, 417, 320, -42, -238, 190, 284, -658, 831, -117, -621, -619, 445, -175, 826, 179, -376, 245, 619, 73, 230, 944, -632, -477, -445, -553, 444, -452, 275, -850, 901, 533, -863, 582, -367, -924, 8, -242, -527};
    vector<string> streets = {"NYYYYNYNYYYYYYYYYYYNYYNYYYYNYYYYYYYYYYYYYYYYYYYNYY", "YNYYYYYYYYYYYNYYYYNYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYN", "YYNYYYNYYNYYYNYYNYYNYYYYYYYYNNYYNYYYYYYYYYYYYNYYYY", "YYYNNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYNYYYYYYYNYYYY", "YYYNNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYY", "NYYYYNYNYYNYNNYYNYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYNYYYNNYYNYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYNNNYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYNYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYNYYYYYYNYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYY", "YYYYYNNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYNYNYYNNYNYYYYYYYYYYNYYYYNY", "YYYYYNNYYYYYNYYYYYYYYYNYYYNYYYYYYYNYYYYYYYYYYYYYYY", "YNNYYNNYYYYYYNYNYYYYYYYYYYYYYNYYYNYNYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYNYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYNYNNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYY", "YYYYYYYYYYYYYYYNYNYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNYY", "YNYYYYYYYYYYYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYNY", "NYNNYYYYYYYYYYYYYYNNYYYYYYYNYYYYYNNYYYYYYYYYYYYYYY", "YYYYYNYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYNNNYYNYYY", "NYYYYYYYNYYYNYYYYNYYYYNYYYYNYYYYYYYYYYYNNYYNYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYNYYYYYYYN", "YYYYYYYYYYYNYYYYYYNYYYYYNNYYYYYYYYYYNYYNNYNYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNNYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYNYYNYYYYNYYYYYYYYYYYYYYYYYYNYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYNYNYYYYYYYY", "YYNYYNYYYNYNYNYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYNYY", "YYYYYYYYYNYNYYYYYYYYYYYYYYYYYYNYYNYYYYYNYYYYYYYYNY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYNYYNYYYYYYYYYYYNY", "YYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYNYYYYYNYYYYYYYYYYNNYNYYYYYNYYNYYYYNYY", "YYYYYYYYYYYYNYYYYNYNYYYNYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYNNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYNYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYNYNYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYNYYYNNNYYNYYYYYNYYNYYYYYYN", "YNYYYYYYYYYYYYYYYYYYNYNYNYNYYYYYYYYYYYYYNYYNNYYYYY", "YYYYYYYYYYYYYYYYNYYYYNYNYYYYNYYYYYYYYYYYYNYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYNYYYYYNYYNYYYYYYY", "YYYYYYYYNYYNYYYYYYYYYNNYYYYYYYYYYYYYYNYYNYYNNYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYNNYYNYY", "YYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNNYYY", "YYYYYYYYYYYYYYYYYYYYYNYYNYYNYYYYYYYYYYYYYYYYYNNYYY", "NYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYNNYYYYYYYYYYNYYNYY", "YYYYYYYNYYYNYNNYYYNYYYYYYYYYYYNNYYYYYYYYYNYYYYYYNY", "YNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3668.017758676662;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-857, 676, -653, 676, 372, -515, 985, -705, -647, -509, -580, -866, -236, 78, -871, -350, 694, -883, 343, -630, -697, -276, -237, -241, -630, 444, -922, -406, -176, 593, -443, 655, 903, -859, 743, -513, -796, 643, 156, -761, -37, 441, -482, -497, 565, -886, 103, -465, 615};
    vector<int> y = {690, 946, 244, 371, -406, -744, -830, 721, -118, -111, 828, 531, -838, 444, -637, -149, -526, -654, 754, 612, -317, 42, 887, 73, 327, 265, -980, 123, -995, 774, 662, -549, 62, 830, -224, 227, 878, 759, 783, 319, 639, 495, -220, 759, 774, -450, -109, 729, -704};
    vector<string> streets = {"NNYYYYYYYYYYNYYNYNYYYYNYYYYYNYNYNYYYYNYNYNYYYYYNY", "NNYYYYYYYNNNYYYYNYNYNNYYNYYYYNNNYYYNYYYYYYYYYYYYY", "YYNNYYYYYNNNNYYYNYYYYYYYNNYNYYYYYYYYYYYNYYYYYYNYY", "YYNNYYYYNYYNYYYYYYYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYNNYNYYYNYYYYYNYYYNYYYYYYYYYYYYYYYYY", "YYYYYNYYNYYYYYNYYYYYYNYYNYYYYYYYYYYYNNYYYYYYYNYNN", "YYYYYYNYYYYYNYYYNYYYYYYNYNYYYNYYYYNYYYYYYYYNYYYNY", "YYYYYYYNYYYYYNYNYYYYYYYYYYNNYYYNYYYYYYYYYYYYNYNYY", "YYYNYNYYNYYYYYYYYYYNNYYYYYNYYYYYYYNYYYNYYYYYYYYYY", "YNNYYYYYYNNYYNYYYYYYNNNYNYYNYYNNYNYNYYNYYYYNYNYYY", "YNNYYYYYYNNNYNYNYYYYNYYYYYNNYYYYYYYYYNNNYYYNYYYYY", "YNNNYYYYYYNNYNYNNNNYNYYNYYYYYYYNYYYNYNYYYNYYNNYYY", "NYNYYYNYYYYYNYYYYNYYYYYYYYYYYYYYYYYYYNYYNYYNYNYYY", "YYYYYYYNYNNNYNYYYYNNYYYYYNNYNYYYNYYYYYYYNNYYYYYNY", "YYYYNNYYYYYYYYNYYNYYNYNYYYYYYYYYNYNYYNYYNYYYNYNYY", "NYYYNYYNYYNNYYYNYYNYYYYNYYNYYNYYYNYYNNYYYYYNYYYNY", "YNNYYYNYYYYNYYYYNYYYYYYYYYYYYNNYYNYNNYNYYNYYYYNNY", "NYYYNYYYYYYNNYNYYNYYYYNYNYYYYNYYYNYYYYYNYYYYYNYNY", "YNYYYYYYYYYNYNYNYYNYYYYYYNYNYYYYYYYYYNNYYYYYYYYYY", "YYYYYYYYNYYYYNYYYYYNYYYYYYYYYNYYYYYYYYYNYNYYYNNYN", "YNYYYYYYNNNNYYNYYYYYNYYYYYYNNYYNYNYYYNYYNYYYNYYYY", "YNYYNNYYYNYYYYYYYYYYYNNYYYYYYYYNYYNNNYNYYYYYYYYYN", "NYYYYYYYYNYYYYNYYNYYYNNYNYYYYYNYYYYNYYYYYYYNYYYYN", "YYYYYYNYYYYNYYYNYYYYYYYNYYYYYYYYYYYNYYYYNYYYYYYNY", "YNNNYNYYYNYYYYYYYNYYYYNYNYYYYYNYYYYYYYYNYYYYYYNYN", "YYNNYYNYYYYYYNYYYYNYYYYYYNYNYNYNYNYYYNYYYYYNYNYNY", "YYYYYYYNNYNYYNYNYYYYYYYYYYNYNYYYYYYYNYYYYNYNYYYYY", "YYNYNYYNYNNYYYYYYYNYNYYYYNYNNYYYYYYYYYNNYYYYYYYNY", "NYYYYYYYYYYYYNYYYYYYNYYYYYNNNYYYYYYYNNYYYYYYNYYNY", "YNYYYYNYYYYYYYYNNNYNYYYYYNYYYNYYYYYYYYYNYYYYYYYYY", "NNYNYYYYYNYYYYYYNYYYYYNYNYYYYYNYYYYNYYYYYYYYYYYYN", "YNYYNYYNYNYNYYYYYYYYNNYYYNYYYYYNYYYNNYYYYYYYYYYYY", "NYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYNNYYYYNYYYYYYYYYY", "YYYYYYYYYNYYYYYNNNYYNYYYYNYYYYYYNNNYYNYNYYYYYYYYN", "YYYYYYNYNYYYYYNYYYYYYNYYYYYYYYYYYNNYYYYNNYYYYYYYY", "YNYYYYYYYNYNYYYYNYYYYNNNYYYYYYNNYYYNYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYNNYYYYNYYYYNYNYYNYYYYNYYYYNNYYNYYY", "NYYYYNYYYYNNNYNNYYNYNYYYYNYYNYYYYNYYYNYNYYYYYYYYY", "YYYYYYYYNNNYYYYYNYNYYNYYYYYNYYYYNYYYYYNYYNYYYYYYY", "NYNYYYYYYYNYYYYYYNYNYYYYNYYNYNYYYNNYYNYNNYYYYNYYN", "YYYYYYYYYYYYNNNYYYYYNYYNYYYYYYYYYYNYYYYNNYYNNNYNY", "NYYYYYYYYYYNYNYYNYYNYYYYYYNYYYYYYYYYNYNYYNYYNNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYY", "YYYYYYNYYNNYNYYNYYYYYYNYYNNYYYYYYYYYYYYYNYYNYYYYY", "YYYYYYYNYYYNYYNYYYYYNYYYYYYYNYYYYYYYYYYYNNYYNNNYY", "YYYYYNYYYNYNNYYYYNYNYYYYYNYYYYYYYYYYNYYNNNYYNNYYY", "YYNYYYYNYYYYYYNYNYYNYYYYNYYYYYYYYYYYYYYYYYYYNYNYY", "NYYYYNNYYYYYYNYNNNYYYYYNYNYNNYYYYYYYYYYYNYYYYYYNY", "YYYYYNYYYYYYYYYYYYYNYNNYNYYYYYNYYNYYYYYNYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4217.998777159144;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {375, 902, -430, 622, -252, 435, 662, 961, -755, -161, -740, -23, -789, 555, 205, 843, -868, 243, -133, -975, -190, -589, -520, 232, 576, 620, -902, -834, 760, -297, -578, -597, 107, 75, 974, -414, -540, -273, -824, -684, -659, -174, 566, 658, -214, -564, 358, -741, -128, -283};
    vector<int> y = {-459, -297, -440, 829, -271, -84, 181, 215, -370, -295, 999, -390, -53, 973, -28, 149, 503, -639, 904, -274, -695, 731, -62, 519, -439, -468, 820, -673, 368, -567, 554, 280, -430, 720, 219, 288, 94, -112, 936, -910, 255, -453, 447, 546, 994, 426, -22, 605, 90, -400};
    vector<string> streets = {"NYYYNYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYNYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYN", "YYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYNYYYYYYYYYYY", "NYYYNYYYNYYNYYYYNYNYNYYYYYYYYYYYYYYYYYYYYYYYYNNYYY", "YYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYNYYYYY", "YYYYYNNYYYYNYYYYNNYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYY", "NYYYYYYNYYYNYYYYYYYYYNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYNYYYNYNYY", "YYYYYYYYYYNYYNYYYYYYNNYYYYYYYYYYYYYNYYYYNYYYYYYNYY", "YYYYNYNNYYYNYYYNYYYYYNNNYYYYNYYNYYNNYYYNNNYYYYYYNY", "YYYYYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYYNYYYYYYYYYNY", "YYYYYYYYYYNYYNYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYNYYYYYYNYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYNYYYNNYYYYYYNYYYYYYYYYNYYYYYYYYYYYNYYYY", "YYYYNYNYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYNYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYNYYYYYNNNYYYYYYYYYYYYYYYYYYNYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYNYYNYYYYYYYYYYY", "YYYYNYYYYYNYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYNYYNNYYNYYYYYYNYYYYYYYYYYYYNNYYYYYYYYYYYYYY", "YYYYYYYNYYYNYYYYYYYYYYNYNYYYYYYYYNYYYYYYYYNYYYYYYY", "YYYYYYYNNYYNYYYNYNYYYYYNYYYYNYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYNYYYYYNNYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYNYYYYYYYYY", "YYYNYYYYYYYYNNYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYN", "YYNYYYYYYYYNYYNYYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYNYYYYYYYYYYYYY", "NNYYYYNYYNYYYYYYYNYYYYYYYYYYYYNYYYYYNYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYNNNYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNNYYYYYYYYYYYYNYYYN", "YYNNYYNYYYYYYYYNYYYYYYNYYYYYYYYNYNYYYYNYYYYYYYYYYY", "YNYYYYYYYYYNYYYYYYYYYNYYYNYYYYYYYYNYNYYYYYYYYYYYNY", "YYYYYYYYYYNNYYYYYYYNYNYYYYYYYYYNYYYNNYYYYYYYYYYYYY", "YYYYYYYYYNYYYNYYYYYYYYYYYYYYYNNYYYNNNYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYY", "YYYNYNYYYYYYNYYYYYYNYYYYYYYYYYYYYNYYYYNYYYYNNYNYYY", "YYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYNY", "YYYYYNYYYYNNYYYYYYYYYYYYYNNYYYYYYYYYYYYYNYYYYYYYYN", "YYYYYYYYYNYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYNY", "YYYYYYYYYYYYYYNYYYYYYYNNYYYYYYYYYYYYYYYYYYNYYYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYNYYNYY", "YYYYNYYYYNYYYYYNYYNYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYN", "YYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYNYNY", "YYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYY", "YYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYNYYYYNYNYYYYNYNN", "YYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYNYNYYNYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3727.537390603412;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {643, -531, -884, 54, 3, 543, -975, -383, 914, -576, -842, -303, -236, -610, -727, -924, 9, 173, 629, 94, 334, -776, 655, 376, -693, 922, 295, 843, 431, 819, -960, 518, 822, 765, -864, 174, 168, 994, 458, -103, -719, -68, -973, 978, 683, 207, 273, -463, 88};
    vector<int> y = {-608, -927, 572, -196, 363, 838, -543, -421, -179, -154, 732, -339, -73, 942, -695, 80, -956, -811, -210, -424, 4, 419, -548, -792, 868, 591, -21, -865, -385, -707, 42, 686, 267, -606, 713, -447, -303, -53, -929, -90, -587, -46, 492, 145, -519, -161, -667, 755, 846};
    vector<string> streets = {"NNYYNNYNYYYYYYNYNNYYNYNYYNYYYYYYYNYYYNNYYYYYYYNNY", "NNYYYYNYNYYNYYYYNYNNYNYYYNYYYYYYNNYYNNYNYYNYNYNNY", "YYNNNYYYYYYYNNNNYYYNYYYYYNYYNYYNYYYYYNYYYYYYYYNYN", "YYNNNNYYYNNNYNYYYYNNYYYYYNNNNYNYYYNYNYYYNNYNNYYYY", "NYNNNNYNNYYYNNYYYYYYYYYNYYYYYNNNNYYYNNNYNYYNYYYYY", "NYYNNNYYYYYYYYNYYYNNYNNYNNYYYYYYNYYYYNYYNNNYYYYYY", "YNYYYYNNYYNNNYYYYYYNNNYNYYYYYYYYYYYYYYNYYYNNYYNNY", "NYYYNYNNYNNNNNYYYNYYYNYNNNYYYNYYYYYYYYNYYNYYNYYYN", "YNYYNYYYNYNYYYYYYYYYNYYYNYNYYYYYNNYYNYNYYYNNYYYNY", "YYYNYYYNYNNNYYYYYYYNYNNYYYYYYYYNYYYNYNNYYYYNNYYYN", "YYYNYYNNNNNYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYNNYYYNYN", "YNYNYYNNYNYNNYYYNYYNYYYYYYYNYYNNNYNYNYYNYYYYNNYYY", "YYNYNYNNYYYNNNYNNYYNNYYYNYNNYNYYYYYYYYYYYYYYYYNYN", "YYNNNYYNYYYYNNYNYYYYYYNYYYNNYYYYNNNNYYNNYNYYNNYNY", "NYNYYNYYYYYYYYNNYYYYYYNNYYNNYNNYNYNYYYYYNYNYYYYYN", "YYNYYYYYYYYYNNNNYYNYNYYYYYYNYNYYYNYNYYYYNYYYYYYYN", "NNYYYYYYYYYNNYYYNYNYYYYYYYYYYNYYYYYYNYYYYYYYNNYYY", "NYYYYYYNYYYYYYYYYNYYYYNNYYYYYYYYYYYNYYYYNNNNYYYNY", "YNYNYNYYYYYYYYYNNYNYNYYNNYYYYYNNYYNYYYYNNNNYYNYYY", "YNNNYNNYYNYNNYYYYYYNYYNYNYYYYYYNYYYYNYYYNYYYYNNYN", "NYYYYYNYNYYYNYYNYYNYNNYYYYYYNYNYYYNYYYYYYYYNYYYYY", "YNYYYNNNYNYYYYYYYYYYNNNYNNYNYNYYYNYNYYYYYNNYYYNYY", "NYYYYNYYYNYYYNNYYNYNYNNYYNYYYYYNYNYYNYYNYYYYYNYYY", "YYYYNYNNYYYYYYNYYNNYYYYNYYYNNYYNYYYNYYNYYYYYYNYYY", "YYYYYNYNNYYYNYYYYYNNYNYYNYYYYYYNYNYNYYYNYYYYYYYYN", "NNNNYNYNYYYYYYYYYYYYYNNYYNNYYNNYYYYYNYYYNNYYYYYYN", "YYYNYYYYNYYYNNNYYYYYYYYYYNNYYNYYNYNYYNNYYNNYYYYNY", "YYYNYYYYYYNNNNNNYYYYYNYNYYYNYYNYYYYYNYYYYYYYNNNYN", "YYNNYYYYYYYYYYYYYYYYNYYNYYYYNYNYYYNYYYNNYYNNYYYYY", "YYYYNYYNYYYYNYNNNYYYYNYYYNNYYNYYYYYYYNYYNNYYYYYYY", "YYYNNYYYYYYNYYNYYYNYNYYYYNYNNYNYYYYYYNNYYYNYNNYNN", "YYNYNYYYYNYNYYYYYYNNYYNNNYYYYYYNYNYYYYYYYYYNNYYYN", "YNYYNNYYNYYNYNNYYYYYYYYYYYNYYYYYNYYYYYNYYYNYYYNYY", "NNYYYYYYNYNYYNYNYYYYYNNYNYYYYYYNYNYNYYYNNYYYYNYYY", "YYYNYYYYYYYNYNNYYYNYNYYYYYNYNYYYYYNYYYNYYYNYYYYYY", "YYYYYYYYYNYYYNYNYNYYYNYNNYYYYYYYYNYNYYYYYYYYYYYNY", "YNYNNYYYNYYNYYYYNYYNYYNYYNYNYYYYYYYYNYYYYYYYYYYYY", "NNNYNNYYYNYYYYYYYYYYYYYYYYNYYNNYYYYYYNYYYYYYYYYYN", "NYYYNYNNNNYYYNYYYYYYYYYNYYNYNYNYNYNYYYNYYYYYYNYYN", "YNYYYYYYYYYNYNYYYYNYYYNYNYYYNYYYYNYYYYYNNNYYYNYYN", "YYYNNNYYYYYYYYNNYNNNYYYYYNYYYNYYYNYYYYYNNYYYYNNNY", "YYYNYNYNYYNYYNYYYNNYYNYYYNNYYNYYYYYYYYYNYNNYYNNYN", "YNYYYNNYNYNYYYNYYNNYYNYYYYNYNYNYNYNYYYYYYNNYYYYNN", "YYYNNYNYNNYYYYYYYNYYNYYYYYYYNYYNYYYYYYYYYYYNNNNYY", "YNYNYYYNYNYNYNYYNYYYYYYYYYYNYYNNYYYYYYYYYYYNNYNYN", "YYYYYYYYYYYNYNYYNYNNYYNNYYYNYYNYYNYYYYNNNNYNYNYYY", "NNNYYYNYYYNYNYYYYYYNYNYYYYYNYYYYNYYYYYYYNNYNNYNYY", "NNYYYYNYNYYYYNYYYNYYYYYYYYNYYYNYYYYNYYYYNYNYYYYNY", "YYNYYYYNYNNYNYNNYYYNYYYYNNYNYYNNYYYYYNNNYNNYNYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3739.944707854329;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {-863, 490, 311, 435, 957, 714, 443, 937, 402, -216, -51, -188, 283, -359, -860, -859, -794, -761, 857, -512, -620, 85, 845, 315, 894, -297, 9, -820, 971, 668, 165, -538, 782, -236, -793, 208, 801, 782, 609, 729, 283, 594, -581, -96, 791, -244, -487, -965, -77};
    vector<int> y = {-782, 1, -53, -137, -301, -217, 15, -322, -217, 268, 914, 538, 868, 332, 952, 933, -609, 669, -293, -601, 132, 708, -368, -639, -364, -64, 645, -693, -138, 826, -241, 642, -696, -389, 42, 422, -520, 19, 701, -530, 711, 200, -101, -591, -258, 289, -58, 580, 316};
    vector<string> streets = {"NYYYYYYYYYYNNYNYYNNNNNNNYYYYYNNNNYYNNNNYYYYNYYNNY", "YNYYNNYYYYNNYYNNNNYYYNNYYYYYYYYNYYNYNYNYYNYYYNYYY", "YYNYYYYYNYYYYYYNYYNYYNYNYNYNYYYNYYNYYYYYYYYNNYYYY", "YYYNYYYYYYYYYNYYYYNYYYYYYNNYYYNNNNYNYYYYYYYYYYNNY", "YNYYNNNNNNYYYYYYNYYYYYYYNYYYYYYYYYNNYNNNNYYYYYNYY", "YNYYNNYYYYYYYYYYYYYYYNYYYYYYYYYYNNNYYNYNYYYYYYNYY", "YYYYNYNYNYYYYNYYNYYNNYYNNYYYNNNYYNNYYYNYYYYYYYYYY", "YYYYNYYNYYYYYYNNNNYYYNYYYYNNYYNYYYYNYNYYNNNYYYYYY", "YYNYNYNYNNNYYYYYYNYYYNNNYYNYYYYNYYYNYYYNYYYYYYYYY", "YYYYNYYYNNYYNYNYNYNYYNYYNNNYYYYYYYYYNNYNYNYYYYYNY", "YNYYYYYYNYNYYYYYYYYYYYYYNNNYNYYNYYNNYYNYYNNYYYNYY", "NNYYYYYYYYYNNNYYYYYYYYNYNYYYYYNYYNYYYNYNYYYYNNYYN", "NYYYYYYYYNYNNYYYYNYYYYYYYYYYYYYYYYYYNYYNYYNNYYNYN", "YYYNYYNYYYYNYNNYYYYNYYYNYNNYYYYYYNYYYYYNYNYNYYYYN", "NNYYYYYNYNYYYNNYYYNNYYYNYYYYNYYYYYYYYYYYYNYYNNYNY", "YNNYYYYNYYYYYYYNNYYYYNNNNYYNNYNYNYYNYYYYYYYYYYYNN", "YNYYNYNNYNYYYYYNNYYYYNNYYYNYYYYYYNNYYYNNYNYNYYNYY", "NNYYYYYNNYYYNYYYYNYYYYYYNYYYYYYYYYYYYYYYNYNYYYNYY", "NYNNYYYYYNYYYYNYYYNYNYYYNNYYYYYYYYYYYYYYYYNYYYNYY", "NYYYYYNYYYYYYNNYYYYNYYYYYYYYYYYYNNYYYYNYYYNYNNYYN", "NYYYYYNYYYYYYYYYYYNYNNYYYYYYYNYYNYYYYNYYYNNYNNYNY", "NNNYYNYNNNYYYYYNNYYYNNYYYNYYYYNYYNNYYYYYYNYNYYNNY", "NNYYYYYYNYYNYYYNNYYYYYNYNYYNNYYYYYYYYYYYNYYNYYYYY", "NYNYYYNYNYYYYNNNYYYYYYYNNNYNYYYNYYYNYYYYNYYYYYYYY", "YYYYNYNYYNNNYYYNYNNYYYNNNYYYYYNYYYYYNNYYYNNYNYYYN", "YYNNYYYYYNNYYNYYYYNYYNYNYNYYYYNYYYNYYYNNYNNYYYYNY", "YYYNYYYNNNNYYNYYNYYYYYYYYYNNYYNNYYNYYNYYYNYNYYYYY", "YYNYYYYNYYYYYYYNYYYYYYNNYYNNYYYYYNYYYNNYYNYYNNYNN", "YYYYYYNYYYNYYYNNYYYYYYNYYYYYNYYNYYYYYYNYYYYYNNNNN", "NYYYYYNYYYYYYYYYYYYYNYYYYYYYYNYYYYYNYYYNNYYYNNYNY", "NYYNYYNNYYYNYYYNYYYYYNYYNNNYYYNYYNNYYYYYYYYNYYYYY", "NNNNYYYYNYNYYYYYYYYYYYYNYYNYNYYNYYNYNNYYNYYYYNYYN", "NYYNYNYYYYYYYYYNYYYNNYYYYYYYYYYYNYYNNYYYNYYYNYYYY", "YYYNYNNYYYYNYNYYNYYNYNYYYYYNYYNYYNNNYNYNYYNYYYYYN", "YNNYNNNYYYNYYYYYNYYYYNYYYNNYYYNNYNNNYYNYYYYYYYYYY", "NYYNNYYNNYNYYYYNYYYYYYYNYYYYYNYYNNNNYNYYNYNYYNNYN", "NNYYYYYYYNYYNYYYYYYYYYYYNYYYYYYNNYYYNYNYNYYYYYNYY", "NYYYNNYNYNYNYYYYYYYYNYYYNYNNYYYNYNYNYNNYNYNNNYNYY", "NNYYNYNYYYNYYYYYNYYNYYYYYNYNNYYYYYNYNNNYYYYYNNYNY", "YYYYNNYYNNYNNNYYNYYYYYYYYNYYYNYYYNYYYYYNYNNYYNYYY", "YYYYNYYNYYYYYYYYYNYYYYNNYYYYYNYNNYYNNNYYNYYYYYYYY", "YNYYYYYNYNNYYNNYNYYYNNYYNNNNYYYYYYYYYYYNYNNYYYYYY", "YYYYYYYNYYNYNYYYYNNNNYYYNNYYYYYYYNYNYNYNYNNYNNNYN", "NYNYYYYYYYYYNNYYNYYYYNNYYYNYYYNYYYYYYNYYYYYNYYNNY", "YYNYYYYYYYYNYYNYYYYNNYYYNYYNNNYYNYYYYNNYYYNYNYYYY", "YNYYYYYYYYYNYYNYYYYNNYYYYYYNNNYNYYYNYYNNYYNYYNYYY", "NYYNNNYYYYNYNYYYNNNYYNYYYYYYNYYYYYYNNNYYYYNNYYNNY", "NYYNYYYYYNYYYYNNYYYYNNYYYNYNNNYYYYYYYYNYYYYNYYNNY", "YYYYYYYYYYYNNNYNYYYNYYYYNYYNNYYNYNYNYYYYYYNYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3793.978645949528;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {295, 135, 208, -399, 989, -655, -89, -373, -299, -255, -630, -481, 525, 859, -355, 11, 944, -901, -903, 701, -54, -157, 819, -463, -674, -976, 678, 752, -423, -697, 543, -404, 329, -322, 455, 536, 113, -987, 737, 127, -201, 156, 925, -274, 844, 783, 819, -315, -596};
    vector<int> y = {387, -896, 336, -677, -242, 222, -847, -994, 476, 614, -559, -378, -880, -352, -260, 733, -938, -828, 871, -970, -172, -779, 805, -843, 48, -685, -18, 449, 230, -549, -249, 350, 931, -346, -389, -389, 948, 634, 275, -579, 414, 130, -957, 681, -296, 144, 379, 694, -422};
    vector<string> streets = {"NYNYYYYYYYYYYYYNYNNNNYNYNYYYYNYNNYYNYNYYYNYYYNYNY", "YNYNYNYYYNYYYYNNYYYYNYYYNYNYNYNYYNYYYYYYYYYNNYYNY", "NYNYYYYYYYYYYNNNYNYYYYNYYYYYYYNYYNYYYNNNYYYYYYYYY", "YNYNYYYYYYYYYYYYNNYYYYNYNNYNNYNYYYYYYNYYYYNNYNYNY", "YYYYNYYNYNNYNYYYYNNYNNNNYNYNYYYNNNYYYYNNYYYNYYYYY", "YNYYYNYYNYYYNYYNYNYYNYYYNYYYYNYYNNYNYYYYYNYYYYYYN", "YYYYYYNYYYNYYYYNYYNYNYYNYYYYNYYYYYYYNYYNNYYYYNNNY", "YYYYNYYNYYNYNYYNYNYYNYYYYYNYYYYYNYNYYYYNYYYYYYYYY", "YYYYYNYYNYNYNYNNYNNYNYNYYYNYYNYYNYYNNNYNYNYYYYYYY", "YNYYNYYYYNNNYYNNYYYNYNYYYYYNYYNYYYYYNYNNNYYYYYNYY", "YYYYNYNNNNNYYYYNNYYYNYYYNYYYNYYYYYYNYYYNYNNYYYYNY", "YYYYYYYYYNYNYYYYNYYYYYNNYYYYNYYYYNYYYYYNYNYYYNNYY", "YYYYNNYNNYYYNYYNNYYNYYYYYNYYYYYYNYYNNYYNNNYYYYNYY", "YYNYYYYYYYYYYNNYYYYYYYYYYYYNNYYYYNYYYNNYYYNYNYYNN", "YNNYYYYYNNYYYNNYYNYYNYYYNYYNYYYNYYYYNYYYNYNYNYNYY", "NNNYYNNNNNNYNYYNYYYYYYYYNYYYYYNNNNYYYYYNYYYYNYNYY", "YYYNYYYYYYNNNYYYNYYNNYYYYNYNNNYYYYYNYYYNYYYNYYYNY", "NYNNNNYNNYYYYYNYYNYYNYYYYYNYYYYNNYYYYYNYNNYNNNYNY", "NYYYNYNYNYYYYYYYYYNNNNYYYNYNYYYNYNNNYNYNNNYYYYYNY", "NYYYYYYYYNYYNYYYNYNNYYYYNYYYYYYYYYNYYYYNYYYNYYYYN", "NNYYNNNNNYNYYYNYNNNYNYYYYYNNYNYNNNYYNYYNYYYNYYNYN", "YYYYNYYYYNYYYYYYYYNYYNYYNYYYYYYYNYYYYNYYNYYNYNYNY", "NYNNNYYYNYYNYYYYYYYYYYNYYYYNYYYYYYYNYNYYYYYYYNNNN", "YYYYNYNYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYNYNYYNY", "NNYNYNYYYYNYYYNNYYYNYNYYNYNNYYYNYNYYYNNNYYYYNYYYN", "YYYNNYYYYYYYNYYYNYNYYYYYYNYYYYYYYYYNNNYNYYYNYNNNY", "YNYYYYYNNYYYYYYYYNYYNYYYNYNNYYYNNYYYYYNNYYYYYYYYY", "YYYNNYYYYNYYYNNYNYNYNYNYNYNNNNYYYYYNYYNYYNYNNYNYY", "YNYNYYNYYYNNYNYYNYYYYYYYYYYNNNNYNYNYNYNYNNYNYYYNY", "NYYYYNYYNYYYYYYYNYYYNYYYYYYNNNYYNYYNYYYNNNNYNYYYY", "YNNNYYYYYNYYYYYNYYYYYYYYYYYYNYNYYYYNYNNNYNYNNYNNN", "NYYYNYYYYYYYYYNNYNNYNYYYNYNYYYYNNYNYYYNYNNYYYNYYN", "NYYYNNYNNYYYNYYNYNYYNNYYYYNYNNYNNYNYYYYYYYYYNYYNY", "YNNYNNYYYYYNYNYNYYNYNYYYNYYYYYYYYNNYYYYYYNYYYYNYN", "YYYYYYYNYYYYYYYYYYNNYYYYYYYYNYYNNNNYYYYYYNYYYYYYY", "NYYYYNYYNYNYNYYYNYNYYYNYYNYNYNNYYYYNNNNYYYYYYNNYY", "YYYYYYNYNNYYNYNYYYYYNYYNYNYYNYYYYYYNNYYNYYYYYNYYY", "NYNNYYYYNYYYYNYYYYNYYNNYNNYYYYNYYYYNYNYYYNYYNNYYN", "YYNYNYYYYNYYYNYYYNYYYYYYNYNNNYNNYYYNYYNYNYNYYNYYY", "YYNYNYNNNNNNNYYNNYNNNYYYNNNYYNNYYYYYNYYNYNYYNYNNN", "YYYYYYNYYNYYNYNYYNNYYNYYYYYYNNYNYYYYYYNYNYYYYYYYY", "NYYYYNYYNYNNNYYYYNNYYYYYYYYNNNNNYNNYYNYNYNNYYYYYN", "YYYNYYYYYYNYYNNYYYYYYYYNYYYYYNYYYYYYYYNYYNNYYNNYN", "YNYNNYYYYYYYYYYYNNYNNNYYYNYNNYNYYYYYYYYYYYYNYYNYN", "YNYYYYYYYYYYYNNNYNYYYYYNNYYNYNNYNYYYYNYNYYYYNYYNY", "NYYNYYNYYYYNYYYYYNYYYNNYYNYYYYYNYYYNNNNYYYNYYNYNY", "YYYYYYNYYNYNNYNNYYYYNYNYYNYNYYNYYNYNYYYNYYNNYYNYY", "NNYNYYNYYYNYYNYYNNNYYNNNYNYYNYNYNYYYYYYNYYYYNNYNY", "YYYYYNYYYYYYYNYYYYYNNYNYNYYYYYNNYNYYYNYNYNNNYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4210.548059867833;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {434, -169, -76, -378, -363, 373, 678, -311, 993, 503, -987, 471, -478, 989, 304, -668, 369, -440, -628, 616, 936, 882, -295, -18, 58, 14, -14, -931, 446, 244, 886, 27, -48, 960, -757, -572, -40, 613, -821, 290, -892, 344, 997, -7, 721, 870, 122, -705, -876, -652};
    vector<int> y = {-861, 715, 742, 900, 363, -190, -623, 169, 139, 617, -631, 76, 400, 639, -532, 205, 51, -574, 49, 331, -10, -43, 532, -369, -195, 821, 388, -520, -162, 521, -572, -908, 671, -507, -989, -406, -782, -831, -375, -386, 300, 930, -473, 949, 816, -182, -395, -13, 896, 124};
    vector<string> streets = {"NYNNYNYYNNYYYNYYNYYYYNYYYYYYYYYYYYNYYYNYYYYNNYNYNN", "YNNNYYNYYYYYNYNNYYYYNYNYNYYNYYNNYYYYYYYYYNYYNYNNYN", "NNNYYYYYYYYNNNYNYYYYNYNYYYYYYYYYNNYYYYYNYYNYYYNYYY", "NNYNNYYYYYYYYYNNYYYYYYYYYNNNYNYYYYYNNNYYYYYNYYNYYY", "YYYNNYYNYNYYYYYYNYYNNYYYYYYYNYNNYYNYYYYYYYYYYYNYNY", "NYYYYNYYYYNYNYNYYNNYYYNNNNYYYYYYYYYYYNYNNNYNYYYYYY", "YNYYYYNYYYYNYYYNNYNYNYYYYYYYYYYYNYYNNYYYYYYYYNYYNY", "YYYYNYYNYYYYYYYYYYYYYYNYYYYYYYYYYNYYYNNYNYYYNYYYYY", "NYYYYYYYNNYNYYYYYNNNYNNYYYYYYYYYYNYNNNYNNNYYYYYYNN", "NYYYNYYYNNYYYNYYNYNYNYYNNYYYNYYYYYYYYYYNYNNNYYNYNY", "YYYYYNYYYYNYYYYYNYYYYNYYYYYYYYNYNYYYNYYYNYYNYYNYNY", "YYNYYYNYNYYNNYYYYNYYNYYYYYYNYYNYYNYYNYYYNYYNNYYYYY", "YNNYYNYYYYYNNNYYYYNYNNYYYYNYYYYYNNYYYNYNYYYNYNNYYY", "NYNYYYYYYNYYNNYYYYNYYNYYYNYYYYYNYYYYYYYYNYYYYNYYYY", "YNYNYNYYYYYYYYNNNNYYYYYYYNYYYYNNYNYNYYYNYNYYYYNYYY", "YNNNYYNYYYYYYYNNYYYNYNYYNYYYYNYNNYYYYYYNYNYNYYYNYY", "NYYYNYNYYNNYYYNYNNYNYYNNYYYYYNYYNNYNYYNYYNNYYYNNNY", "YYYYYNYYNYYNYYNYNNNNYNNYNNNYYYYYYYYYYYYYNNNYYYYNYN", "YYYYYNNYNNYYNNYYYNNYYYYYYNYYYYNNYYYNYYNNYNYYYNYYYY", "YYYYNYYYNYYYYYYNNNYNNNNYYNNNYYYYYNYNYYNNNYYYYNNYYN", "YNNYNYNYYNYNNYYYYYYNNNYYYYYYYYYYYNNYNYYYYYYYNNYNYY", "NYYYYYYYNYNYNNYNYNYNNNYYYNNYNYYYYYYYYNNNYYNNYYYNNY", "YNNYYNYNNYYYYYYYNNYNYYNYNYYNYNYYYNYNYYYYNYYYYYYYNY", "YYYYYNYYYNYYYYYYNYYYYYYNYNYYYYYYYYYYYNYYNYYYYYYYYN", "YNYYYNYYYNYYYYYNYNYYYYNYNNYYYYYYYNYYYYYNYNYNNNYYYN", "YYYNYNYYYYYYYNNYYNNNYNYNNNYYYYNYNYYYNYYYNYYNNNYYNY", "YYYNYYYYYYYYNYYYYNYNYNYYYYNNNYYYNYYYYNYNYNYYYNYYYY", "YNYNYYYYYYYNYYYYYYYNYYNYYYNNYNNYYNYYYYNYNNNYYYNNYN", "YYYYNYYYYNYYYYYYYYYYYNYYYYNYNYYNYNYYYNYNYYYYYYNYYY", "YYYNYYYYYYYYYYYNNYYYYYNYYYYNYNNNYYYYNNYYYYYYYYNYYY", "YNYYNYYYYYNNYYNYYYNYYYYYYNYNYNNYNYYYYYNYYYNYNNYNNY", "YNYYNYYYYYYYYNNNYYNYYYYYYYYYNNYNYYYYNNYYYNNNYNYNYY", "YYNYYYNYYYNYNYYNNYYYYYYYYNNYYYNYNYNYNYYNYYYYNNYYYY", "YYNYYYYNNYYNNYNYNYYNNYNYNYYNNYYYYNNYYYNYNNNYYYNYNY", "NYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYNNNYYYYYNYYYNYNYYY", "YYYNYYNYNYYYYYNYNYNNYYNYYYYYYYYYYYYNNYYYYYNYYNNYYY", "YYYNYYNYNYNNYYYYYYYYNYYYYNYYYNYNNYYNNYYYYYYYYYYYYY", "YYYNYNYNNYYYNYYYYYYYYNYNYYNYNNYNYYYYYNNYYYYYNYNYYN", "NYYYYYYNYYYYYYYYNYNNYNYYYYYNYYNYYNYYYNNYYYYYNNNYYY", "YYNYYNYYNNYYNYNNYYNNYNYYNYNYNYYYNYYYYYYNYYNYYNYYNY", "YYYYYNYNNYNNYNYYYNYNYYNNYNYNYYYYYNNYYYYYNNNNYNNNYY", "YNYYYNYYNNYYYYNNNNNYYYYYNYNNYYYNYNYYYYYYNNYYNYYYYN", "YYNYYYYYYNYYYYYYNNYYYNYYYYYNYYNNYNYNYYYNNYNYYNYYYY", "NYYNYNYYYNNNNYYNYYYYYNYYNNYYYYYNYYYYYYYYNYYNNYYYYY", "NNYYYYYNYYYNYYYYYYYYNYYYNNYYYYNYNYNYYNNYYNYNNYYNYY", "YYYYYYNYYYYYNNYYYYNNNYYYNNNYYYNNNYYNYYNNNYNYYNNYYN", "NNNNNYYYYNNYNYNYNYYNYYYYYYYNNNYYYNNNYNNYNYYYYNNNYY", "YNYYYYYYYYYYYYYNNNYYNNYYYYYNYYNNYYYYYYYYNYYYNYNNNN", "NYYYNYNYNNNYYYYYNYYYYNNYYNYYYYNYYNYYYYYNYYYYYYYNNY", "NNYYYYYYNYYYYYYYYNYNYYYNNYYNYYYYYYYYYNYYYNYYYNYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3964.608044219343;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {942, -129, 138, 417, 101, 211, -651, 966, 168, 477, 543, -540, -713, 527, 606, -955, -198, -10, 566, -19, -562, 177, -194, -14, 519, -783, -151, -246, 874, 886, 232, -273, 726, -433, 507, 760, 189, 466, 844, 948, -792, -488, -29, -68, -23, 254, -246, -196, -688};
    vector<int> y = {-289, 17, 46, -770, 313, -369, -611, -919, -371, -119, 879, 182, 266, -658, -329, 117, -39, -128, -834, 663, 9, 897, -460, -148, 542, -83, -894, 457, 267, 360, -5, -692, -977, -442, 990, -63, -147, 308, -820, 204, -882, -127, -519, 70, 816, 895, 933, -519, -345};
    vector<string> streets = {"NYYNYYYNNYYNYYNYYYYYYYYYNYYYYYNYYYYYNYYYYYYYYNYYY", "YNYYYYNNYNYYNYYYYYYYYNYYYYYYYYYYYYYYNYYYYNYYYNYYY", "YYNYYNNYYYYYYNYYYYNYNYYYYYNYYYYYYYNNYNYNYYYYYYYYY", "NYYNYYYNYNYNYYYYNYYNNNYNYYYYYYYYYYYNYNYYYYYYYYYNN", "YYYYNYYYYYYYYYYYNNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYNYYNYYYNYYYYYYYYNNNNYYYNYNYYNYYYYYYYNYYYNNYYYNY", "YNNYYYNYYYYYYYYYYYYNYYYNYYYNYYYYYYYNYNYYYYNNYYYYY", "NNYNYYYNYYYYYYYNYYNYYYNYYYYYNNNYYYYYYYYYYYYNYNYYY", "NYYYYYYYNYYYYYNYYYYNNYNNYYYNYNYYYYNYYYNYYYYNYYYNN", "YNYNYNYYYNYYYNYYYYYYYYYYYYNYNYYYYYYYYYYYNNYYYYYYY", "YYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYNYYYYYNNYYYYYNYY", "NYYNYYYYYYYNYNYYYYYYYNYYYNYYYYYYNYNYYNYNYYNYNYNNY", "YNYYYYYYYYYYNYYYYYYYYYYNYYYNYYYYNYYYNNYYYYYNYYYYN", "YYNYYYYYYNYNYNYYYYYYYYYNYNYNYNYYYYYYYYNNYYYYYYYNY", "NYYYYYYYNYYYYYNYNYYYYYNYYYYYNYNNNYYNNNYYNYYNYYYNY", "YYYYYYYNYYYYYYYNYYYYYYNYYYYYNYYYYNYYYNNYYNYYYYYNY", "YYYNNYYYYYNYYYNYNNYYNYYYYYYNYYYYNNNYYNYYYYNYNYNYY", "YYYYNYYYYYYYYYYYNNYYYYNYYYNYYYYNYNYYYYYNNYNYYNYYY", "YYNYYNYNYYYYYYYYYYNYYNYYYNNYNYYYNNYYYYYYNNYYYYYYY", "YYYNYNNYNYYYYYYYYYYNNYNYYNNYYYYYYYNYYYNNYNYYYNYYY", "YYNNYNYYNYYYYYYYNYYNNYYNNNYYNYYYYYYYNYYYNYYYYYYYN", "YNYNYNYYYYYNYYYYYYNYYNNYNYNYYYYYYNYNYYNYYNYYNNYNN", "YYYYYYYNNYYYYYNNYNYNYNNNYYYYYNNNYYYYYNYYYYNYYNYNY", "YYYNYYNYNYYYNNYYYYYYNYNNYNYYYYNYYYNYYYYYYNYYYYYYY", "NYYYYYYYYYYYYYYYYYYYNNYYNYNYYNYNNYNYYYNYYYYYYYNYY", "YYYYYNYYYYYNYNYYYYNNNYYNYNYNYNNYYYYNNYYYYYYYNYYYY", "YYNYYYYYYNYYYYYYYNNNYNYYNYNNYNYYYNNYNYYYYNYYYNYNY", "YYYYYNNYNYYYNNYYNYYYYYYYYNNNNYYYYNYYYYYYNYYYYNNYY", "YYYYNYYNYNYYYYNNYYNYNYYYYYYNNYYYNYYYYYYNNYYYYYYYY", "YYYYYYYNNYYYYNYYYYYYYYNYNNNYYNYYYNYYYYYNYNNYYYYYN", "NYYYYNYNYYYYYYNYYYYYYYNNYNYYYYNYYYNYNYNYYYYYYNYYY", "YYYYYYYYYYYYYYNYYNYYYYNYNYYYYYYNYNNYYYNYYYYYYNYYN", "YYYYYYYYYYYNNYNYNYNYYYYYNYYYNYYYNYNYYYYNYYYYYYYYY", "YYYYYYYYYYNYYYYNNNNYYNYYYYNNYNYNYNYYYYNYNYYNYYYYY", "YYNYYYYYNYYNYYYYNYYNYYYNNYNYYYNNNYNYYYYYYYYYNYNYY", "YYNNYYNYYYYYYYNYYYYYYNYYYNYYYYYYYYYNYNYYYYYYYYYYY", "NNYYYYYYYYYYNYNYYYYYNYYYYNNYYYNYYYYYNNNYYYYYNNYYN", "YYNNYYNYYYYNNYNNNYYYYYNYYYYYYYYYYYYNNNYYYYYYYYYYY", "YYYYYNYYNYYYYNYNYYYNYNYYNYYYYYNNYNYYNYNNNYYYNYYYN", "YYNYYYYYYYNNYNYYYNYNYYYYYYYYNNYYNYYYYYNNYYYNYYYYY", "YYYYYYYYYNNYYYNYYNNYNYYYYYYNNYYYYNYYYYNYNYNNYYYYY", "YNYYYYYYYNYYYYYNYYNNYNYNYYNYYNYYYYYYYYYYYNYYYYYYY", "YYYYYNNYYYYNYYYYNNYYYYNYYYYYYNYYYYYYYYYYNYNNYYYYY", "YYYYYNNNNYYYNYNYYYYYYYYYYYYYYYYYYNYYYYYNNYNNYYYYY", "YYYYYYYYYYYNYYYYNYYYYNYYYNYYYYYYYYNYNYNYYYYYNYNYY", "NNYYYYYNYYYYYYYYYNYNYNNYYYNNYYNNYYYYNYYYYYYYYNYYY", "YYYYYYYYYYNNYYYYNYYYYYYYNYYNYYYYYYNYYYYYYYYYNYNYY", "YYYNYNYYNYYNYNNNYYYYYNNYYYNYYYYYYYYYYYYYYYYYYYYNN", "YYYNYYYYNYYYNYYYYYYYNNYYYYYYYNYNYYYYNYNYYYYYYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3723.864113321206;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {47, 351, 331, 644, -513, 198, -175, -358, 634, -645, 348, -820, -960, -530, 191, 722, -336, 574, -789, 447, -512, -112, 450, 740, 361, -611, -284, 440, -175, -636, 774, -478, 628, -266, 373, -741, -375, 694, 232, -43, -182, -305, -119, -291, 857, -972, -209, 364, -696};
    vector<int> y = {195, 162, 437, 441, 318, -958, 136, -317, 758, 137, 347, 713, -592, -209, 802, 442, -116, -832, 184, -917, 95, 315, -523, 890, 230, -354, -800, -891, 359, 831, 182, -761, -492, 250, -731, 866, 583, 822, -805, -983, -602, -105, 177, -661, 486, -303, 963, -820, -497};
    vector<string> streets = {"NYYYYYNYYYNYYYYYNYYNNYYYYYYYYYNYYYYYNYYYYYNYYYYYY", "YNYYYYNYYYYYNYYNYYNNYYYYYYYYNYYYYYNYYYYYYYNYYYYYY", "YYNYYNYYYYYYYYYYYYNYNYYYYYYYYYYYYYYNYYYNYYYYYYYYY", "YYYNYNNNYYYYYNYYYYYNYYYNYYYYYYNYYYYYNYYYYNYNYYYYN", "YYYYNYYYYYNYYYYYYYYYYYYYYYYYNYYNYNYYYYYNYYYNNYNYY", "YYNNYNYYYYYNYYYYYNNNYNYYYYYYYNYYYYYYYYYNYYYYYYYYN", "NNYNYYNYYYYYYYYYNYNYYYYNYYYYYNNYYYYYYYYYNYYYNYYYY", "YYYNYYYNYYYNYYYYYYYYYNYYYNYYNYNYYYYYYNYYYYYYYYYYN", "YYYYYYYYNNYYNYNYNYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYNNYNNNNYYYNYYYYNYYYYYNYNNYYNNNYNNYYYYYNYY", "NYYYNYYYYYNYYYYYYYYYYYYYYYYNNYNYYYNYYYYNYYYYYYYYY", "YYYYYNYNYNYNYYNYNYYYNYYNYYNYNYNYYYYYYYYYYYNYYYYYY", "YNYYYYYYNNYYNNYYNYYYYYYYYYYYNYYYNYYYYYYYYYYYNNNYY", "YYYNYYYYYNYYNNNYYNYYYNYYYYYYYYYYYYYYYNNYYYNYYNYYY", "YYYYYYYYNNYNYNNYNYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYY", "YNYYYYYYYYYYYYYNYYYNNNYYYYYYYYYNNNYYYYNYYNYNNYYYN", "NYYYYYNYNYYNNYNYNYNYYNYYYNYYYYYNYYYYYYYYYYYNYYYYY", "YYYYYNYYYYYYYNYYYNYYYYYNYYYYYYYYYYYYYYYYNNYYYYYYY", "YNNYYNNYYNYYYYYYNYNYNYYYYYYYYYYNYYNYYYYYYYYYYYNYN", "NNYNYNYYYYYYYYYNYYYNNYYYYYYYNYYYYYNNNYNYNYNYNYYYY", "NYNYYYYYYYYNYYYNYYNNNYYYYYNYYYNYNYNYNYYYNNYYYYYYN", "YYYYYNYNYYYYYNYNNYYYYNYYYYYYYYYYYYNYYYNNNYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYNNYYNYYYYYYYYY", "YYYNYYNYYNYNYYYYYNYYYYYNYNYYYYYYYYYYNYYNYNYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNNYNYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYNNYYYYYYYNYYYYYYNNNYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYNYYYYYNYNYNYYYYYYNYNNYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYNYYNNYYYNNYYYYNNYYNNYYYYY", "YNYYNYYNYYNNNYYYYYYNYYYYYYNNNNYYYYNNYNYYYYYNYYYYN", "YYYYYNNYYNYYYYNYYYYYYYYYYYYYNNYYYYYYYYYNYYYYYYYYY", "NYYNYYNNYYNNYYYYYYYYNYNYYYNYYYNYYYNNYYYYYYNNYNNYY", "YYYYNYYYNNYYYYYNNYNYYYYYYYYYYYYNYNYYYYYYYYYYNYYNY", "YYYYYYYYYNYYNYYNYYYYNYYYYYYNYYYYNYNYYYYYYNNYYNNYN", "YYYYNYYYYYYYYYYNYYYYYYYYYYYNYYYNYNYYYNYNYYNYYNYYY", "YNYYYYYYYYNYYYYYYYNNNNYYYYYYNYNYNYNNYYNYYYYNNYNNY", "YYNYYYYYYNYYYYYYYYYNYYNYYYYYNYNYYYNNYYYYNYYYYYYYY", "NYYNYYYYYNYYYYYYYYYNNYNNYNYYYYYYYYYYNYYYNYYNYNYYY", "YYYYYYYNYNYYYNYYYYYYYYYYYYNYNYYYYNYYYNYYYNYYNYNYY", "YYYYYYYYYYYYYNNNYYYNYNYYYYYNYYYYYYNYYYNNYYYYYYNNY", "YYNYNNYYYNNYYYYYYYYYYNNNYYNNYNYYYNYYYYNNYYYYYNYYY", "YYYYYYNYYNYYYYYYYNYNNNYYYYNYYYYYYYYNNYYYNYYNYYYYY", "YYYNYYYYYYYYYYYNYNYYNYYNNYYYYYYYNYYYYNYYYNYNYNNNY", "NNYYYYYYYYYNYNYYYYYNYYYYYYYNYYNYNNYYYYYYYYNYYYNYN", "YYYNNYYYYYYYYYYNNYYYYYYYYYYNNYNYYYNYNYYYNNYNYYYNY", "YYYYNYNYYYYYNYYNYYYNYYYNYYYYYYYNYYNYYNYYYYYYNYYYY", "YYYYYYYYYYYYNNYYYYYYYNYYYYYYYYNYNNYYNYYNYNYYYNYYY", "YYYYNYYYYNYYNYYYYYNYYYYYYYYYYYNYNYNYYNNYYNNYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYNYYNYNYYYNY", "YYYNYNYNYYYYYYYNYYNYNYYYYYYYNYYYNYYYYYYYYYNYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3718.4000151498994;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-393, 338, -439, 842, -72, -522, -258, 407, -18, -700, 632, -831, -700, -483, -559, 890, 206, -314, 2, -759, 630, -446, 306, 855, -10, -920, 338, -632, -549, -201, -697, 339, -240, 710, -314, -939, -251, 126, -853, 38, 320, 404, -687, -169, -582, -789, -772, -563, 514, -704};
    vector<int> y = {-310, -695, 304, 30, -759, -80, -57, 104, -573, 80, -801, -28, -81, -918, 682, 157, 110, 932, -649, 916, -639, -487, -929, -807, 636, 545, -570, 452, 587, -969, 714, -744, -911, 92, -377, 637, -817, -652, 267, 724, -881, 433, 336, -557, -394, 775, 327, -280, -564, -499};
    vector<string> streets = {"NYYYYYYYNYYYYYYYNYYYYYYYYYYYYYNYYYYNYYNYYYYYYYYYNY", "YNYYYYYYYYYYYNYYYNNYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYY", "YYNYYYYYYYYYYYYYYYYYYNYNYNYYYYYYYYYYYYYYNYYYNYYYYY", "YYYNYYYYNYYYYNYYYYYYYNYNNYYYYYYYYYYYYYYYYYYYYYYYYN", "YYYYNYYNYYYYYYYYNYYYYYYYNYYNYYYYYNYYNYYNYYNYYYYNNY", "YYYYYNYYNYYYYYYNYYYNYYYYYYYYYYYYNYYYYYYYYYYYYNYYYY", "YYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYY", "YYYYNYYNYYNYYYYYYYYYYYYNYYYYNYYYYYNYYYNYYYYYYYYYNY", "NYYNYNYYNYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYY", "YYYYYYYYYNYYYYYYYYYNYYYYNNYYYYNYYYYNYYYYNNNYNYYYYY", "YYYYYYYNYYNYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYY", "YYYYYYYYYYYNYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYNNY", "YYYYYYYYYYYYNYYYYYYYYYYYNYNNYNYNYYYYYYYNYYYYYYYYYY", "YNYNYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYNYYNYYYYYYYNYYYY", "YYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYNNYYYYYYYYNNYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "NYYYNYYYYYNYYYYNNYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYY", "YNYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYNYYYYYYNYNYYYNY", "YNYYYYYYYYYYYYYYYYNNYYYNYYYYYYYYNNYYYYYYYYYYYNYYYY", "YYYYYNYYYNYYYYYYYYNNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYNNYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYNYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYNNYYYYYYYYYYYYYYYYYYYYYYYN", "YYNNYYYNYYYYYYYYYNNYYYYNYYNYYYYNYYYYYYYYYYYYYYYYYY", "YYYNNYYYYNYYNYYYYYYYYYNYNYYYYYNYYYYYYYYYYYYNYYNYYY", "YYNYYYYYYNYYYYYYYYYYYYNYYNYYYYYYYYNYYYYYYNNYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYNYYNYNYNNYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYNYYYYYNYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYN", "NYYYYYYYYNYNYYYYYYYYYYYYNYNYYYNYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYNYYNYYYYNYYNYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YNYYNYNYYYNYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYY", "YYYYYYYNNYYYYNYYYYYYYYYYYNYYYYYNYYNYYYYYYYYYYYYYYN", "NYYYYYNYYNYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYNNYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYY", "YYYYYYYYYYYYYNNNNYYNYYYYYYYYYYYYYYYYYNYYYYYNYNYYYY", "NYYYYYYNYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYNYYYYNYYNNYY", "YYYYNYYYYYYYNYYYYYYYNYYYYYYYYNYYYYYYYYYNYYYYNYYYNY", "YYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYNYYY", "YYYYYYYYNNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYNYYYYNYYYYYYYNYYYNYYYNYYYYYYYYYYNYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNNYNYYNYYYYYY", "YYNYYYYYYNYYYYYYNNYYYYYYYYYNYYYYYYYYYYYNYYYYNYYYYY", "YNYYYNYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYNYNYYYYYNYYY", "YYYYNYYYYYNNYYYYYYYYYYYYYYYYYYYYYNYNYYNYYYYYYYYNYY", "NYYYNYYNYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNY", "YYYNYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYNYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3461.968090594784;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-236, -69, -158, 574, -430, -865, -381, 40, 346, -702, 936, 154, -168, -988, 793, -820, -269, -357, 667, -719, 378, -820, -499, 937, -637, 329, 994, -683, -781, 745, 709, 167, -668, 802, -592, 586, -753, 198, 735, -521, -692, -693, 405, 791, 24, 595, 654, 778, -466, 109};
    vector<int> y = {756, 78, -87, 770, 337, -176, -76, 259, 353, -733, -584, -46, -944, 603, -423, 4, 801, 701, -680, 993, 443, -258, 872, 532, 239, -643, 408, -524, -729, -145, -761, 587, -952, -195, 697, -993, -475, 687, -451, -375, 352, -982, 837, -803, -167, -451, -855, -726, -730, -240};
    vector<string> streets = {"NNYYNNYYYYYYYYYYYYYYYYYNYYYYYYNYYNYNYYYYNNYYYYYYYY", "NNYYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYNYNY", "YYNYYYYYYYYYYYNYYYYYYYYNNYYYNYYYYNYNNYYYYYYNYYYYYY", "YYYNYYYYYYYYNYYYYNYNNYYYYYYYYYYYYNYYYYYYNYYYYNNYYN", "NYYYNYYYYYNYYYYYYYYYYYYYNYNYYNYYYYYYNNYYYYYYYNYYYY", "NYYYYNYYYYNNNYYYYNYYYYYYYYYNYYYYYYNYYNYYNYYNYYYYYY", "YYYYYYNYYYYYNNNYNNNNYYYNYYYYYYYYNYNYNNYNYNYYYNYYYY", "YYYYYYYNYNYNYNYNNYNYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYY", "YYYYYYYYNYNYYYYYYYYYYYYNYNYYYYYYNYNYYYYNYYYYYNYYYY", "YNYYYYYNYNYYYYNNYYYNYYYYYYNNNYYYYYYYNNYYYYYYYYNNYY", "YNYYNNYYNYNYYNYYNYYYYNYYYYYYYYYYYYYNNYYNNNNYYYYYNY", "YYYYYNYNYYYNYYYYYYYYYNYYNYYYYYYYYYYYYYYNNYYYYYYYYY", "YYYNYNNYYYYYNNNYYYYNYYYYYYNNNYNYYYYYYYYYYYYYYYYYYN", "YYYYYYNNYYNYNNYYYYNYYYYYYYYYYYNNYYYYYYYYYYYNYYYNYY", "YYNYYYNYYNYYNYNYYYYYYYNYNYYYYYYYYYYYYNYYYNYYNYYNYY", "YNYYYYYNYNYYYYYNNYYYYYYYNYYNNNNNYYYYYYYYYYYNNNYYNY", "YYYYYYNNYYNYYYYNNYYYNYYYNYYYYYYYYNYYNYNYNYYYYYYYNN", "YYYNYNNYYYYYYYYYYNYYYYNYNYYYNYNYYNNNYYYYNYYNNNYNYY", "YYYYYYNNYYYYYNYYYYNYYYYNYYYYYYYNYNYNNYYNNYYYYYYYNY", "YYYNYYNYYNYYNYYYYYYNYYYYYNYYNYYYYYYYYYYYYNYYYYYYYY", "YYYNYYYYYYYYYYYYNYYYNYNYYYYNYYYYYYYYYYYYYYYNYNYYYY", "YYYYYYYYYYNNYYYYYYYYYNYYNNYYYYYYYYYYNYYYYYYYYNYNYY", "YYYYYYYYYYYYYYNYYNYYNYNYNYYNYYYYYYYYYYYNYYYYYYYNYN", "NYNYYYNYNYYYYYYYYYNYYYYNYYYYYYYYYNNYYYYYNNYYYYYYYY", "YYNYNYYYYYYNYYNNNNYYYNNYNYYYYYYYYYYYYYYYYYNNYYNYYY", "YYYYYYYYNYYYYYYYYYYNYNYYYNYYYYYNYNYYYYNYNYYNYNYNYY", "YYYYNYYYYNYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYNNYYYNYNYY", "YYYYYNYYYNYYNYYNYYYYNYNYYYYNYYYNYYYYYYYNYNNYYYYYYN", "YYNYYYYYYNYYNYYNYNYNYYYYYYYYNNNYYYNYNYNYYNNYYYNNYY", "YYYYNYYYYYYYYYYNYYYYYYYYYYYYNNYYYYYYYYYNYYYYYYYYNY", "NYYYYYYYYYYYNNYNYNYYYYYYYYYYNYNYYYYYYYNYYYYYNYYYYN", "YYYYYYYYYYYYYNYNYYNYYYYYYNYNYYYNYNYNYYNNYYYYYYNYYY", "YYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYNNYYNY", "NYNNYYYYYYYYYYYYNNNYYYYNYNYYYYYNYNYYYYNYNYYNYYYYYN", "YYYYYNNYNYYYYYYYYNYYYYYNYYYYNYYYYYNNYYYNYYYYYYYYYY", "NNNYYYYYYYNYYYYYYNNYYYYYYYYYYYYNYYNNYYYNYYYYYYNNYY", "YYNYNYNYYNNYYYYYNYNYYNYYYYYYNYYYYYYYNYYYYYYYYYYYYY", "YYYYNNNNYNYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYNYNYYYNYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYNYYNYNNNNYYYYNYYYYYYYNYYY", "YNYYYYNYNYNNYYYYYYNYYYNYYYYNYNYNYYNNYYYNYYYYYYNYYY", "NYYNYNYYYYNNYYYYNNNYYYYNYNNYYYYYYNYYYNYYNYYYYYYYNY", "NYYYYYNYYYNYYYNYYYYNYYYNYYNNNYYYYYYYYYYYYNYYYYNNYY", "YYYYYYYNYYNYYYYYYYYYYYYYNYYNNYYYYYYYYNYYYYNNYYYYNY", "YYNYYNYYYYYYYNYNYNYYNYYYNNYYYYYYYNYYYYYYYYNNYNYYYY", "YYYYYYYYYYYYYYNNYNYYYYYYYYYYYYNYNYYYYYYYYYYYNYYYYY", "YYYNNYNYNYYYYYYNYNYYNNYYYNNYYYYYNYYYYYYYYYYNYNYYYY", "YNYNYYYYYNYYYYYYYYYYYYYYNYYYNYYNYYYNYNNNYNYYYYNYYY", "YYYYYYYYYNYYYNNYYNYYYNNYYNNYNYYYYYYNYYYYYNYYYYYNYY", "YNYYYYYYYYNYYYYNNYNYYYYYYYYYYNYYNYYYYYYYNYNYYYYYNY", "YYYNYYYYYYYYNYYYNYYYYYNYYYYNYYNYYNYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3858.9562381319683;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {797, 922, 905, 199, 731, 85, -89, -575, 166, -893, -830, 17, 475, 428, -107, 650, -513, -253, 724, 760, 289, -242, -922, -557, 550, -51, -915, -846, 471, -605, -748, 466, 841, -820, -560, 506, -437, 530, -798, 709, 618, 185, -887, -750, 833, -389, -176, 464, 486};
    vector<int> y = {-63, -763, 502, 677, -289, 46, -322, 936, 903, -211, 719, -283, 907, -42, -35, 975, 582, 663, -302, -952, -704, 723, -7, 263, -463, -894, -602, 635, 808, -701, -414, 813, 939, -267, -652, -48, -817, 935, 269, -903, -396, -578, -607, -879, 527, 122, -97, 796, -13};
    vector<string> streets = {"NNNYNYYYYYYYYYYNYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "NNYYYNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYNYYY", "NYNYYYYYYYYYNYYYNNYNYNNYYYYYYYYYYYYYYYNNYYNYYYYYY", "YYYNNYYYNNYYYNYYNYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "NYYNNYYYYYYYYYYYYYYYYYNYYYNNYYYYYYYYYYYYYYNYYYYYN", "YNYYYNYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYY", "YNYYYYNYYYYNYYYYYYYYYYYYYYNYYYYNYYYYNYYYYYYYYYYYY", "YNYYYYYNNNYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYNNNYYYNYYYYYYYYNYYYYYYYYNYNYYYYYYYYYYYYYYY", "YYYNYYYNNNYYYYYYYYYYYYNYYYNYYYYYYYNNYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYNYYYNNYYYYYYYYYYYYNYYYYYYYYYYYYNYYNYYY", "YYNYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYNYYNYNYYYYYNYYYY", "YYYNYYYYNYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYNYY", "YYYYYYYYYYYYYYNNYYYYYYYYYYNYYYYYNYYNYYYYYYYYYYYYY", "NYYYYNYYYYYNYYNNYYYYYYYNYYYYYYYYYYYNYYYYYNYYNYYYY", "YYNNYYYNYYYNYYYYNYNYYYYYYYYYYYNYYYYYYYYYYNYYYYYYY", "YYNYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYY", "YYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYNYYNYNYYYYYNYYY", "YYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYNYYYYYYYYNNNYYY", "NYYNYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYNYYYYYYYYYYNN", "YYNYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYNYYYYYYYYYYYYYYN", "YYNYNYYYNNYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYNNNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYNNYYYYYNYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYNNYYYYNYYYYYNYYYYYNYYNYYY", "YYYNNYNYYNYYYYNYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYNYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYNNYYYYYYY", "YYYYYYYYYYNNYNYYYYYYYNYYYYYYYNYNYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYNYYYYNYNYYYNYYYYYYYYYYYY", "YYYYYYNYNYYYYYYYYYYNYYYYNYYYYNYNYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYNYNYNYYYYYYYNYYYNYYNY", "YYYYYYYYNYYYNYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYY", "NYYYYYYYYNYYYYYYYYNNYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYNNYYYYYYYYNYYYYYYNYYYNYYYYYYYYYYYYY", "YYYYYYNYYYYYNYYYYYYYNYYYYNYYYNNYYYYYNYNYYNYYYYYYY", "YNYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYNYYYYNYYYN", "YNNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYNYNYYNYYNYYY", "YYYYYNYYYYYYYYYYYYYYYYYNYYYYNYYYNYYYYYYYNYYYYYNNY", "YYYYYYYYYYYYYYYNNYYYYYYNYYYYNYYYYYYYNYYYYNNYYYYYY", "YYNYNYYYYYYNYNYYYYYYYYYYYNYYYYYYYYYYYYYNYNNYYYNYY", "YYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYNYYNYYYNYYNYYYYYYYYYNYYYYNYYYYYYNYYYY", "YNYYYYYYYYYNYYYYYNNNYYYYYNYYYYYYYYYYYYYNYYYYYNYYN", "YYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYNYNYYYNYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYNYYYYYYNY", "YYYYNYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYNYYYYYYYNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4007.2660342315485;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {942, 960, 653, 293, 701, 439, 4, 430, 700, -886, 532, -31, 902, 334, 233, -72, 195, -521, -65, 172, -236, 275, 936, -490, 809, 275, -620, -863, 754, 616, 122, 764, 332, 479, 122, 421, -677, -695, -696, -165, -628, -514, -267, 624, -361, -47, 886, -430, -188};
    vector<int> y = {-224, -853, -712, -170, 894, -148, 53, -934, -329, -801, 702, -142, 299, 798, 575, -316, 899, 143, 535, 483, 889, 501, 283, 860, 311, -329, -414, 473, -192, -272, 10, 618, -896, 835, -447, -421, -389, 637, 220, 582, -115, 636, -275, -384, -55, 787, -105, 249, 375};
    vector<string> streets = {"NYNYYYYYYYYYYNYYYYYYNYYYYYYYYNNNYYYYYYYYYYYYNYYYY", "YNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYNNYYYYYYNY", "NYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYNYNYYYNYYYYYYYYYYYYYYYYNYYYYYNYYYNYYYYYYYYNYYY", "YYYYNYYYYNYNYYYNYYYYNYYYNYYYYYYYYYYYYYYNYYYYNYYNY", "YYYNYNYYYYYNYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYNYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYNYYYYYYYYYYNNYYYYYNYYYYYYNYYNNYYYYYNYYYYYY", "YYYYYYYYNYYNYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYNYNYYYY", "YYYNNYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYNNYYYYYYYYYYYYNYNYYYNYYYYYYYYYYYYYYYYNY", "YYYYNNYYNYNNYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYNYYYYYY", "YYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYY", "NYYYYYYYYYYYNNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNYYYYYNNYYYYYYYYNNYYYYYNYYYYYYYYYYY", "YNYYNYYYYYYYYYYNYNYYYYNYYYYNNNYYYYYYYYYYNNYYYYYYY", "YYYYYYYYYNYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYY", "YYYYYYYNNYYYYYYYYYNYYYYYYYYYYYYYYYNYYNYYYYYYYYYYY", "YYYYYNYNYYYNYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYNY", "NYYYNYYYYYYYYYNYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNNYYYYYYNYYYYYYYYNYYNYYNYYNNYNYYYYYY", "YYYYYYNYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYNYYNYYYN", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYNYYYYYNYYNYYY", "YYYYNYYYYYNYYYYYYYYYYYYYNNYNYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYNNNYYYYNYYYYNYYYYYYYYYYYY", "YYYNYYYYYYNYYYYYYYYYYYYYYNNNYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYNYYYYYYYYNYNNYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYNYYYYYYYYYYYNYNYYYYYYYYNYNYYYYYYYY", "NYYYYYYYYYNYYYNYNYYYYNYYYYYYYYNYYYYYYYYYNNYYYYYYY", "NYNYYYYYYYYYYYNYYYYYYYYYYNYYYYYNYYYNYYYYYYYNYYYNN", "YYYNYYYNYYYYYYYYYYYYNYYNYYYYYYYYNYYYYYYYYYYYYYYNY", "YYYYYNYYYYYYYYYYYYYNYNYYNYYYYYYYYNYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYNYYYYNYYYYYYYYYYYYYYYNYYNYYYNYYYYYYNYYYYNY", "YYYNYYYNYYYYYYYYYYYYYNYNYNYYYYYYYYYYNYYYYYYYYYYYY", "YNYYYYYYYYYNYYNYYNNYYYYYYYYYYYYYYNYYYNYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYN", "YNYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYNYY", "YNYYYYYYYYYYYYYNYYYYYNYYYYYYYNNYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYNYYYYYYYNYYYYYYYYYYNYYYYYYY", "YYYYYYYNNNYNYYYYYYYYYNYNYYYYYYYYYYYNYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYY", "NYYYNYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYNYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYNYY", "YNYYNYNYYYNYYYYYYYYNYYYYYYYYYYYNNYYNYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYNYYYYYYNYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3772.2079821048615;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-284, 220, 960, -34, -785, 988, -534, -946, 114, -163, 6, 250, 595, 542, 717, 646, 469, 327, -419, 581, 879, -773, -290, -934, 194, -890, -204, 20, -555, -525, -355, 97, -639, -802, -327, 630, 808, 422, 1, 125, 620, 754, 431, -828, -59, 776, -286, 272, -707, 756};
    vector<int> y = {-58, 504, -862, -897, -37, 903, -395, -855, 588, 531, -584, -138, 929, 683, -325, -11, -668, -632, -544, -3, -987, -901, 80, -858, 67, -136, 67, 853, 478, 546, -264, 499, 515, -135, 422, -829, -353, 383, 898, -38, 481, -243, -689, 594, -435, -353, 494, -956, -667, -116};
    vector<string> streets = {"NYYYYYYYYNYYYYYYNYYYYNYYYYYYYNYYYYYYYYYYNYYYYYYYYY", "YNYYYYYYNYNNYNNNYYYYNYYYYYYYNNYYYYYNYYYYYYYYNYYYNY", "YYNYYYYNYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYNNYNYYYY", "YYYNYYYYYYYYYNNYYYYYYYYYYNYYYNYNYYNYYYYYYYYYYNNYNY", "YYYYNYYYNYYNYYYYYYYYYNYYYNYYYYYYYYNNYYYYYYYNYYNYYY", "YYYYYNYYYYYYYYYYNYYYYYYNYYYYYYYYNYYYYYYYNYYNYYYNYY", "YYYYYYNYNYYYYYYYYYNYYYYYYYYYYYNYYNYYYYNYNNYYYYYNYY", "YYNYYYYNNNYYNNYYYNYNYYYYYYNYYYNYYNYYYYNYNYYNYNYYYY", "YNYYNYNNNNYYYNNYYYYYNYYYYNYNYYYYYYNNYNNYYYYYNYYYYY", "NYYYYYYNNNYNYYYYYNNNNYYYYNYNYNYNYYYYYYYYYYYYNNNYYY", "YNYYYYYYYYNYYYYYNYYYYNYYYYYNYYYYYYNYNYYYYYYNYNYYYN", "YNYYNYYYYNYNNYYYYYYNNYYYYYYYNNYYYYYYYNNNYYNYYYYNYY", "YYYYYYYNYYYNNYYNYYYYYYNYYNNYYYYNYYYYNNYYYYNYYYYYYY", "YNYNYYYNNYYYYNYNYYNYYYYNYNYYYYNYYYYYYYNYYYYNYYYYYY", "YNYNYYYYNYYYYYNYYYYYYNNYNYYYYYNYYYYYYYNNYYYYYYYYYY", "YNYYYYYYYYYYNNYNYYYYYYYYNYYYYYYNYYYYNYYYYNYYYYYNNN", "NYYYYNYYYYNYYYYYNYYYYYYYNYYYYYNYNYNNNYYYYYNYYYYYYY", "YYYYYYYNYNYYYYYYYNYYYYNYYYYNNYNYNYNYYYYNYYYYYYYYNY", "YYYYYYNYYNYYYNYYYYNYNNYYYYYYYYYNNNNYYYYYYYYYYYNYYY", "YYYYYYYNYNYNYYYYYYYNYYYYYYYNYYNYYYYYNYNYYNNNYYYYYY", "YNYYYYYYNNYNYYYYYYNYNNYYNYNNYYNYYYYYYYYNYNNYYYYYNN", "NYYYNYYYYYNYYYNYYYNYNNYYYNYYYNYYNYYYYYNYYYYNNNNNYY", "YYYYYYYYYYYYNYNYYNYYYYNYYYYYYYNYYYYYYNNYYYYNYYYYYY", "YYNYYNYYYYYYYNYYYYYYYYYNYNYYYYYYYYNYYNYYNNYYYYYYYN", "YYYYYYYYYYYYYYNNNYYYNYYYNYYYYYYNYNYYYYYYYYNYNYYYYY", "YYYNNYYYNNYYNNYYYYYYYNYNYNYYYYNYYNYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYNYYYYYYYNYYYYYNYNYYYNNYYNNYYYYYYNYYNYY", "YYYYYYYYNNNYYYYYYNYNNYYYYYYNYYNYNYNYYYYYYYYNYYYYYY", "YNYYYYYYYYYNYYYYYNYYYYYYYYNYNYYYYNYNYNYNYYYYYYYYNY", "NNYNYYYYYNYNYYYYYYYYYNYYYYYYYNNYNNYYYYYYYNYYYYYYYY", "YYYYYYNNYYYYYNNYNNYNNYNYYNYNYNNYYNYYYYYYYYNYNYNYYN", "YYYNYYYYYNYYNYYNYYNYYYYYNYYYYYYNNYYYYYYYNYNYYYYYYY", "YYYYYNYYYYYYYYYYNNNYYNYYYYNNYNYNNYYYYYYNNYYNYYYNYN", "YYYYYYNNYYYYYYYYYYNYYYYYNNNYNNNYYNYYNYYYYNYYYYNNYY", "YYYNNYYYNYNYYYYYNNNYYYYNYYYNYYYYYYNNNYYYYYYYYYYYYY", "YNYYNYYYNYYYYYYYNYYYYYYYYYYYNYYYYYNNYNYYYYYYYNYYYY", "YYYYYYYYYYNYNYYNNYYNYYYYYYNYYYYYYNNYNYNYNNNYYYYYYN", "YYYYYYYYNYYNNYYYYYYYYYNNYYNYNYYYYYYNYNYYYYNYYYYYYY", "YYYYYYNNNYYNYNNYYYYNYNNYYYYYYYYYYYYYNYNYNYYYYYYYYY", "YYYYYYYYYYYNYYNYYNYYNYYYYYYYNYYYNYYYYYYNNNYYYYYYYN", "NYYYYNNNYYYYYYYYYYYYYYYNYYYYYYYNNYYYNYNNNYNNYYYYNY", "YYYYYYNYYYYYYYYNYYYNNYYNYYYYYNYYYNYYNYYNYNYYYYYYNY", "YYNYYYYYYYYNNYYYNYYNNYYYNYYYYYNNYYYYNNYYNYNNYYYYYY", "YYNYNNYNYYNYYNYYYYYNYNNYYYYNYYYYNYYYYYYYNYNNYYYYYY", "YNYYYYYYNNYYYYYYYYYYYNYYNYNYYYNYYYYYYYYYYYYYNYYNYY", "YYNNYYYNYNNYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYNNYYN", "YYYNNYYYYNYYYYYYYYNYYNYYYYYYYYNYYNYYYYYYYYYYYNNYYN", "YYYYYNNYYYYNYYYNYYYYYNYYYYNYYYYYNNYYYYYYYYYYNYYNYY", "YNYNYYYYYYYYYYYNYNYYNYYYYYYYNYYYYYYYYYYYNNYYYYYYNN", "YYYYYYYYYYNYYYYNYYYYNYYNYYYYYYNYNYYYNYYNYYYYYNNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4143.611318041601;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {672, 3, 439, 198, 707, -390, 664, 694, -575, 129, -531, -288, -771, 746, 899, -174, -143, 853, 462, -119, 527, 721, -236, -188, 292, -41, -13, -202, -466, -615, -988, 121, 494, -63, -143, 29, -837, 536, -522, -807, -843, -854, 853, 284, -819, 113, -526, 440, 544, -962};
    vector<int> y = {217, -966, -966, 993, 284, -853, 908, 879, -426, -21, -76, -107, -292, 843, 595, -122, -294, -665, 40, 504, 446, -934, -429, 563, 302, 395, 677, -329, -694, -510, -377, -35, 814, 464, 694, 178, 253, -293, 816, -44, 80, 903, -628, 237, 75, -23, -867, -6, -615, 456};
    vector<string> streets = {"NNNNYYNYNNNNNNNYNYYYYNYNNYNYNYNYNYNYNYYNYYNNNNNYNN", "NNNNYNNNYNYNNYNNNNNNYNYNNYNYNYYNNYYNNNNNYYYYYYYYNN", "NNNNNYNYNYNNNYNNNNYNYYYYYNNYYNNYYNYYNNNYYYYYYNNNNN", "NNNNNNYYNYYYNNYNNNYNNNNNYYYNNNNYYYNYYNNNYNNNNNNNNN", "YYNNNNYNYYYNNNNNNYYYNNNNYYNNNYYYYNNNNNNNNNYYYNNNNN", "YNYNNNYNNYNYNYYNNYYYNNYNYNYYNYNNNNNYYNNYNYNYNNYNNN", "NNNYYYNYNNYYNNNNNNNYNNYNYNNNYYNYYYNNNNNNNYNNYYYNNN", "YNYYNNYNNYNNNNYYNYYNNNYNNNNYNNYYNNYNNYYYYYYYYNNYNN", "NYNNYNNNNNNNYYNNNNNNNNYYYNNNNYNYNNNNNYYYYNNNNYYNYY", "NNYYYYNYNNYNYNYYNNYYNNYYYNNNNYYYNNYNNNYYYNYYYNYNNN", "NYNYYNYNNYNNNNYYYNNYNYNNYNYNNNNNNYNYYNNYNYNNYNYNYN", "NNNYNYYNNNNNNNNNNNYNNYYYNYYNNYYNNNYYYYNYNYNYYYYNYN", "NNNNNNNNYYNNNYNNYYNYYYNNYNYNYNNYYYNYYNYNYYYYNYNNNY", "NYYNNYNNYNNNYNYNNNYNYYNNNYYNYNNYNNNNNYNYYYNYYYNYNN", "NNNYNYNYNYYNNYNNNYNYNNYYNNYNYNNNNYNYYNNNYYYNNYYNNY", "YNNNNNNYNYYNNNNNYYYYYNYNNYYNYYNNYNYNYNNNNNNNNYNNNN", "NNNNNNNNNNYNYNNYNYNYNYYNNNNNNNNNNNYNNYNYNYNNYNNNYY", "YNNNYYNYNNNNYNYYYNYNNNYYYYNNNYNNNNYNYYYNYYNYNNYNYN", "YNYYYYNYNYNYNYNYNYNYNNNNYNNYYNNNYNYNYNYNYYYNYNYYYN", "YNNNYYYNNYYNYNYYYNYNYYYYNNYYYNYYYNYNYYYYYYNNYYNYYN", "YYYNNNNNNNNNYYNYNNNYNNYNNNNNNYYNNNNNNNYYNNNNNYYNNN", "NNYNNNNNNNYYYYNNYNNYNNNYNNYNYNNNNNNNNYNNNNYYNNNNYY", "YYYNNYYYYYNYNNYYYYNYYNNNYNNNNNNNNNNNNNNYNYYYYYNNNN", "NNYNNNNNYYNYNNYNNYNYNYNNYNYNNYNYNNYNYNNNNYYYNNYYNN", "NNYYYYYNYYYNYNNNNYYNNNYYNNNYNNNYNNNYNYYNNYYNNNYNNY", "YYNYYNNNNNNYNYNYNYNNNNNNNNNNNNNNYYYYYNYNYNNYNYNYNY", "NNNYNYNNNNYYYYYYNNNYNYNYNNNYYNNNNNNNNYYNNYNYNYNYNY", "YYYNNYNYNNNNNNNNNNYYNNNNYNYNNYYNYNYYNNNNYNNYNNYNYN", "NNYNNNYNNNNNYYYYNNYYNYNNNNYNNNNYYNYYNNNNYNNNNYNNNY", "YYNNYYYNYYNYNNNYNYNNYNNYNNNYNNNNYNNNYNYYNNNNNNYYYN", "NYNNYNNYNYNYNNNNNNNYYNNNNNNYNNNNNNNYYYYNNNYYNNNNNY", "YNYYYNYYYYNNYYNNNNNYNNNYYNNNYNNNNNYNYYNYNNNYYNNNYN", "NNYYYNYNNNNNYNNYNNYYNNNNNYNYYYNNNYYNYNNNNNYYNYNYYN", "YYNYNNYNNNYNYNYNNNNNNNNNNYNNNNNNYNYYYYNNNYNYNYNNNY", "NYYNNNNYNYNYNNNYYYYYNNNYNYNYYNNYYYNNYYYYNYNNNYNYYY", "YNYYNYNNNNYYYNYNNNNNNNNNYYNYYNYNNYNNNNNNNNYNYYNYNY", "NNNYNYNNNNYYYNYYNYYYNNNYNYNNNYYYYYYNNNNNNYNNNYYYNN", "YNNNNNNYYNNYNYNNYYNYNYNNYNYNNNYYNYYNNNYNNYYYYYNYNY", "YNNNNNNYYYNNYNNNNYYYYNNNYYYNNYYNNNYNNYNNNYYYNNYNNY", "NNYNNYNYYYYYNYNNYNNYYNYNNNNNNYNYNNYNNNNNNYNNYNYNYN", "YYYYNNNYYYNNYYYNNYYYNNNNNYNYYNNNNNNNNNNNNNYNNNNYYN", "YYYNNYYYNNYYYYYNYYYYNNYYYNYNNNNNNYYNYYYYNNYYYYNNYY", "NYYNYNNYNYNNYNYNNNYNNYYYYNNNNNYNYNNYNYYNYYNYNYNNYN", "NYYNYYNYNYNYYYNNNYNNNYYYNYYYNNYYYYNNNYYNNYYNNYYNYN", "NYYNYNYYNYYYNYNNYNYYNNYNNNNNNNNYNNNYNYNYNYNNNYNYYN", "NYNNNNYNYNNYYYYYNNNYYNYNNYYNYNNNYYYYYYNNNYYYYNYYNY", "NYNNNYYNYYYYNNYNNYYNYNNYYNNYNYNNNNNNYNYYNNNYNYNNYN", "YYNNNNNYNNNNNYNNNNYYNNNYNYYNNYNNYNYYYYNNYNNNYYNNNN", "NNNNNNNNYNYYNNNNYYYYNYNNNNNYNYNYYNYNNNNYYYYYYNYNNY", "NNNNNNNNYNNNYNYNYNNNNYNNYYYNYNYNNYYYNYYNNYNNNYNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3783.2129258710365;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {162, 847, -394, -89, 820, -365, -319, 718, 194, 574, 225, 870, -174, -797, -812, 16, 120, 309, 16, 495, 677, -21, -660, 819, -555, 529, 555, -809, 694, 829, 421, 99, -352, 443, -442, -550, -296, 39, -604, 947, 178, 498, -512, 220, -156, -803, 553, 651, 778};
    vector<int> y = {602, -126, 702, -696, 177, -382, 841, 39, -449, -750, 808, -637, -670, -417, 408, 800, 344, -366, 970, 514, 54, -596, -734, -833, 708, -805, 254, 33, -656, -122, -528, 517, -955, -54, 807, -36, 720, 201, -677, -597, -597, -99, -632, -44, -689, 976, -757, -461, -684};
    vector<string> streets = {"NNYNYYYNYYYNYNYNYYYYNYNYYNNNNYNNYNYYYYYNNYNYNNNYN", "NNNYYNYYYYYYNYYNNYNYNNYYNYYYYYNYYNNNYYYYYNYYYNNNY", "YNNNNYYYYYYNYYNYNNNYNNNNNYYYYNNNNYNYYNYNYYNNYYYYN", "NYNNYNYNYYYNNNNNYYYNYNNNYNYYYYYYYNNYNNYYYYYNNNNYN", "YYNYNYYYYNYNNYYYNNYYYNYYYYNYYYYNYNNNNYYNYYNYNNNNY", "YNYNYNNYYNNYYNYNYYYNYNNYYYYYNYYYYYNYYNYNYNNNNYNYN", "YYYYYNNYNNNNYNNYYNNNNYYNNNNNNYYYNNYYYNYYYYYYNYYYY", "NYYNYYYNNNNYNNNYNYYYNYYYNYNNYNNYYNNNNNNYYNYYNYYYY", "YYYYYYNNNNYYNNYNNYYYYNNYYYYYYNNNYNNNNNYYYYNNYYNNY", "YYYYNNNNNNNYYYYYYNYNNYNNYYYNYNNNNNNYYNYYNNNNYYNNY", "YYYYYNNNYNNYNNNNYYNNYYNNNYYNYYYYYYYYYNNNNNNNYNYNN", "NYNNNYNYYYYNNYNNNYNYNYNYNYNYYYYNNNNNNYNYYNYNNYNYY", "YNYNNYYNNYNNNYNNYYNNYYNYYYNNYNNYYYYYYYNYNYYNYNNNN", "NYYNYNNNNYNYYNNYNYNNNNYNYNNNNNYYYYYYNYYYYYNNNYNYN", "YYNNYYNNYYNNNNNNNYNNNNNNYNNNYYYNNNYNNYNYYYNNYNYNY", "NNYNYNYYNYNNNYNNYNNYNNNYNNYNNNNNNYNNYYNNYNYYYNYNN", "YNNYNYYNNYYNYNNYNNYYYYYYNYNNYYNNYYYYYYYNYNYNNNYYN", "YYNYNYNYYNYYYYYNNNNYNNNYYYYYNYNYNNNYYYYYYNNYNNNNN", "YNNYYYNYYYNNNNNNYNNNNNNYYNNNNNNYNNYYYYNNNYNYYNNNN", "YYYNYNNYYNNYNNNYYYNNYYYNYNNYYNNYNNYYNNNYYNYYNNNNY", "NNNYYYNNYNYNYNNNYNNYNYNYNNYNYYYYYNYNNNNNYNYYYNNYY", "YNNNNNYYNYYYYNNNYNNYYNYNYYNYNYNYNYYNYNNNYNNNNNYNN", "NYNNYNYYNNNNNYNNYNNYNYNNYNYNNYNYYNYNYYYNYYYYNYNNY", "YYNNYYNYYNNYYNNYYYYNYNNNNYNYNNYNYNNNNYYNYYNYYNNYN", "YNNYYYNNYYNNYYYNNYYYNYYNNYNNNNNNYYNNNYYNYNYNYYYYN", "NYYNYYNYYYYYYNNNYYNNNYNYYNNNNNNNYYNYNNNYNNYYYYYNN", "NYYYNYNNYYYNNNNYNYNNYNYNNNNNYYNNNYNYNNNYNNYYYYYNY", "NYYYYYNNYNNYNNNNNYNYNYNYNNNNNYYYNNYYYYNNNNYYYNNNY", "NYYYYNNYYYYYYNYNYNNYYNNNNNYNNYYNNNNNYNNNYNYNYNYNN", "YYNYYYYNNNYYNNYNYYNNYYYNNNYYYNNYYNYYYNYNNYYNYNYYY", "NNNYYYYNNNYYNYYNNNNNYNNYNNNYYNNNNNYNNNYNNYYNNNNNY", "NYNYNYYYNNYNYYNNNYYYYYYNNNNYNYNNNYNNYYNYNNYNYYNNN", "YYNYYYNYYNYNYYNNYNNNYNYYYYNNNYNNNNNNYNYYYNYNNNNNN", "NNYNNYNNNNYNYYNYYNNNNYNNYYYNNNNYNNNYNYNYYNNYYYYYN", "YNNNNNYNNNYNYYYNYNYYYYYNNNNYNYYNNNNYNYNNYNNNNYYYN", "YNYYNYYNNYYNYYNNYYYYNNNNNYYYNYNNNYYNNYYYNYNNYNNNY", "YYYNNYYNNYYNYNNYYYYNNYYNNNNYYYNYYNNNNYYNYNYNNNYYY", "YYNNYNNNNNNYYYYYYYYNNNYYYNNYNNNYNYYYYNYYNNYNYYYYY", "YYYYYYYNYYNNNYNNYYNNNNYYYNNNNYYNYNNYYYNNNNYYNYYYN", "NYNYNNYYYYNYYYYNNYNYNNNNNYYNNNNYYYNYNYNNNNNYNNNYN", "NYYYYYYYYNNYNYYYYYNYYYYYYNNNYNNNYYYNYNNNNYYYYNYNN", "YNYYYNYNYNNNYYYNNNYNNNYYNNNNNYYNNNNYNNNNYNYNNNYNY", "NYNYNNYYNNNYYNNYYNNYYNYNYYYYYYYYYNNNYYYNYYNNYYNNN", "YYNNYNYYNNNNNNNYNYYYYNYYNYYYNNNNNYNNNNYYYNNNNNNYY", "NYYNNNNNYYYNYNYYNNYNYNNYYYYYYYNYNYNYNYNNYNYNNNNYY", "NNYNNYYYYYNYNYNNNNNNNNYNYYYNNNNYNYYNNYYNNNYNNNYNN", "NNYNNNYYNNYNNNYYYNNNNYNNYYYNYYNNNYYNYYYNYYNNNYNNY", "YNYYNYYYNNNYNYNNYNNNYNNYYNNNNYNNNYYNYYYYNNNYYNNNN", "NYNNYNYYYYNYNNYNNNNYYNYNNNYYNYYNNNNYYYNNNYNYYNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3473.4557133150743;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-602, -17, 899, 271, 146, -649, -155, -232, -520, -631, -976, -222, 365, 968, 444, 948, 205, -993, 397, -170, 360, -758, 435, 633, 72, -482, 159, 753, -572, 267, -634, 174, -129, 797, -318, 697, 390, -951, 614, -977, 305, 935, 335, -165, 902, -443, -369, 202, 262};
    vector<int> y = {436, -514, 882, -833, 611, 996, -549, 222, -802, -408, 657, 356, 320, 726, 355, 296, 551, -595, -727, 838, 615, -498, 563, 598, 334, 309, -522, 678, -772, -385, -94, 981, 654, -692, -390, -480, -991, -855, -544, 402, 746, 243, -582, -728, 782, 348, 605, 68, 182};
    vector<string> streets = {"NNNNNYYNNYYNNNNYNNNNYNYNYNNNYNNNYYNYNNYNNYYYYYNYN", "NNYYNNNNNNNYNNNNNNNYNYYNNNYNNNNNNNNYNNNNYNNNNNYYY", "NYNNYYNNNYNNYNYNYYYNNYYYNNNNNNNYNNNNYNYYYNNYNYYNN", "NYNNNNNYNYNYNNNYNNNNNNNNNNNNYNNNNNNYNNYYNNNNNNNNN", "NNYNNNYNNYNNYNNNNNNYYYNYNNNNNNNYNNNNYYNNNNNYNNNYN", "YNYNNNNNNNNNNNNNYNNNYNNNNYNNNNNYNYYYNNYYNNNNNYNNN", "YNNNYNNNYNYNYNNNYNNYNYNNYYNNYNNNNNNNNNYNNNYNNNNNN", "NNNYNNNNNYYYNNNYNNYNNNNNYNNNNNNYNNNNNNNNNNNNYNNNN", "NNNNNNYNNNYNNYNYNNNNNNNYYNNYYNNYNNNYNNNNYNYNYNYNN", "YNYYYNNYNNNYNNNNNNYNNNNNYNNYYYYNNNYNYNNNYNNNNNNNN", "YNNNNNYYYNNNNNYNNYNNNNYNYYYNYNYNYNYNNNNYYNNNNNNNY", "NYNYNNNYNYNNYYYNNYNNYNNYNYNNYNNNNYNYNNNYNNNNYNNYN", "NNYNYNYNNNNYNNYNYNNYYYNYNNNNYNNNNNNNNNNNNNNNNNYNY", "NNNNNNNNYNNYNNNNYNNYNNNNNNYNYNNNYNNNNYYYNNNNYNYNY", "NNYNNNNNNNYYYNNYNYNNYYNYYNNYNNNNYYNNNNYYYNYYNNNYN", "YNNYNNNYYNNNNNYNNNNNYNNNNYYNNNNYNNNNYNNNYNNYYNYNY", "NNYNNYYNNNNNYYNNNNNYNNNYYYNNNNNNNNYNYNYNNNYNNYNNN", "NNYNNNNNNNYYNNYNNNNNNNYNNNYNYNYNNYNNYYYNYNNNYNNYY", "NNYNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNNNY", "NYNNYNYNNNNNYYNNYNNNNNNNNYNNNNNNNYNNNNNNNYNNYNYNN", "YNNNYYNNNNNYYNYYNNNNNNNNNNNNYNNNYNNNNYYNNNYNNYYNN", "NYYNYNYNNNNNYNYNNNNNNNYNYNNYYNNNNNNNNNNNNNYNNNNYN", "YYYNNNNNNNYNNNNNNYNNNYNNNYNNYNNNYNNNYYNNNYNNNNNNN", "NNYNYNNNYNNYYNYNYNNNNNNNNNYYNNNNYYNNNNNNNNNNNNYYY", "YNNNNNYYYYYNNNYNYNNNNYNNNYNNYYNYNNYYYNNNNNNNNNYNN", "NNNNNYYNNNYYNNNYYNNYNNYNYNYNYNYYYNNYNNNNNNYNNYYNY", "NYNNNNNNNNYNNYNYNYNNNNNYNYNYNNNNYNNNNNNNYNNNNNNNY", "NNNNNNNNYYNNNNYNNNNNNYNYNNYNNNYNNYNNNNYYYNYYNYNNN", "YNNYNNYNYYYYYYNNNYNNYYYNYYNNNYNNNNNNNNNNYNNNNNNYN", "NNNNNNNNNYNNNNNNNNNNNNNNYNNNYNNNYYNNNNYNYNNNNNYNN", "NNNNNNNNNYYNNNNNNYNNNNNNNYNYNNNYNNNNNNNNYYNNNNNYN", "NNYNYYNYYNNNNNNYNNNNNNNNYYNNNNYNYNNNNNNYYYYNYYNNY", "YNNNNNNNNNYNNYYNNNNNYNYYNYYNNYNYNNNNNNNYNNNYNNYNN", "YNNNNYNNNNNYNNYNNYNYNNNYNNNYNYNNNNYYNNNYNNNNNNYYN", "NNNNNYNNNYYNNNNNYNNNNNNNYNNNNNNNNYNNNNYYNYNYYNNNY", "YYNYNYNNYNNYNNNNNNNNNNNNYYNNNNNNNYNNNNYYNNYNNYYYN", "NNYNYNNNNYNNNNNYYYNNNNYNYNNNNNNNNNNNNYNNYNNNNYNNN", "NNNNYNNNNNNNNYNNNYNNYNYNNNNNNNNNNNNNYNNNNNNNNNNYN", "YNYYNYYNNNNNNYYNYYNNYNNNNNNYNYNNNNYYNNNNNNNNNYNNY", "NNYYNYNNNNYYNYYNNNNNNNNNNNNYNNNYYYYYNNNNNNYNNNNNN", "NYYNNNNNYYYNNNYYNYNNNNNNNNYYYYYYNNNNYNNNNNYYYYNNN", "YNNNNNNNNNNNNNNNNNYYNNYNNNNNNNYYNNYNNNNNNNNYYNYNY", "YNNNNNYNYNNNNNYNYNYNYYNNNYNYNNNYNNNYNNNYYNNNNYNYY", "YNYNYNNNNNNNNNYYNNYNNNNNNNNYNNNNYNYNNNNNYYNNNYNNN", "YNNNNNNYYNNYNYNYNYYYNNNNNNNNNNNYNNYNNNNNYYNNNYNNN", "YNYNNYNNNNNNNNNNYNNNYNNNNYNYNNNYNNNYYNYNYNYYYNNNN", "NYYNNNNNYNNNYYNYNNNYYNNYYYNNNYNNYYNYNNNNNYNNNNNNY", "YYNNYNNNNNNYNNYNNYNNNYNYNNNNYNYNNYNYNYNNNNYNNNNNY", "NYNNNNNNNNYNYYNYNYYNNNNYNYYNNNNYNNYNNNYNNYYNNNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4192.058264787636;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {-146, -376, 77, -873, 593, -967, 450, -942, -414, -162, -75, -831, 540, 166, -154, 828, 438, 109, 397, -358, 405, -1, 824, -559, 711, -338, 915, -879, 842, -690, -538, 789, -176, 467, 369, 787, 376, -921, 784, -719, -356, 634, -723, -797, 667, -450, 652, -234, 365, -535};
    vector<int> y = {-381, -515, 705, -924, 955, 936, -19, -371, -289, 114, 241, 516, -90, 347, -192, -116, 147, -148, -280, -31, 984, -87, 739, -377, -971, 466, 419, 739, -177, 654, 448, 291, -568, -470, -952, -932, 463, -347, 854, 744, 464, -436, 279, 839, 360, -525, -981, -331, 75, 235};
    vector<string> streets = {"NNNYNNNNNNYYNNNNNNNNYNYNNNNNNYNNNYNNYNYYNNNYYYNNYN", "NNNNNNNYYNNNYNNNNNYYNNNNNNNNYYNNNNNNYNYYNNYYYYNNYN", "NNNNNNNNNNNYNNYNYNNYNNNNNNNNNNYNNNNNNNYNYYNYNNNNNY", "YNNNNYNNYNNYNYNYNNNNYNYNNNYNNYNYYYNNNNYNNNNNNNNNYN", "NNNNNNNYNNNNYYYNNYNYNNNYNYNNNYNNNNNNYNNYNYNNNNNNNN", "NNNYNNNYYNYNNNNNNNNNNNNNYNNNNNNYYNNNYYYYNYYNNNNYNN", "NNNNNNNNNNNNNYNNNNYNYYYNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NYNNYYNNNNYNNNNNNYNYYYYYNYYNNNYNYYNNNNNYNNYNNYNNNN", "NYNYNYNNNNNYNYNYNYYYYNNYNNYNNNYNYNNNYNNNNNYYNNNNNN", "NNNNNNNNNNNNYYNNNNYNNYNYNNNYNYNNNYYNNNNNYNNNNNNNNN", "YNNNNYNYNNNNYNYNNNNYNNNNYYNNNYYYNNYNNNNNNYNYNYYNNN", "YNYYNNNNYNNNNNNNYNNNNYYNNNNNYYYNNNNYNNYNYNNNNNYNYY", "NYNNYNNNNYYNNNNNNYYNNNNNYNNYYYNYNNNYNNNNNNNYNNYNNN", "NNNYYNYNYYNNNNYNYYNYYNYYYNNNNYYNNYNNYNNYNNNNNNNNNN", "NNYNYNNNNNYNNYNYNNYNNNYNNNYNNYYNNNNNNNNNYNYNNYNNNN", "NNNYNNNNYNNNNNYNYYNNYYNYYNNNYYYNNYYNNNNNNNNNNNYNNN", "NNYNNNNNNNNYNYNYNNNYYNNNYNYNYNYNNNNNYNNNNNNNNNNYNN", "NNNNYNNYYNNNYYNYNNNNNNNNNYNNNNYNNNYYYNNNNNNYYNYNYN", "NYNNNNYNYYNNYNYNNNNNYYNNYNNNNYYYNNNNNNNNNNNYNNYYNN", "NYYNYNNYYNYNNYNNYNNNNYNNNNNNNNNYYYYNYNNNNYYNNYNYYY", "YNNYNNYYYNNNNYNYYNYNNNNNNNNNNNYNNNNYNNNNYYNNYNNNNN", "NNNNNNYYNYNYNNNYNNYYNNNNNNYYNNNNYNNYNNNNYNNNNNYNNY", "YNNYNNYYNNNYNYYNNNNNNNNNNNNYNYNNNNYNNYNNNNYNNNNNNY", "NNNNYNNYYYNNNYNYNNNNNNNNYNYNNNYNYNYNYNYYNNYYNNNYNY", "NNNNNYNNNNYNYYNYYNYNNNNYNNNNYYNNNNYNYNYNNNNYNNNYNN", "NNNNYNNYNNYNNNNNNYNNNNNNNNYYYNNNNNNNYNYNNYYNNNNYNY", "NNNYNNNYYNNNNNYNYNNNNYNYNYNNNNNYNNNNNNNNYYNNNNNYNN", "NNNNNNNNNYNNYNNNNNNNNYYNNYNNNNNYNYYNNNNNNNNYNNNNNN", "NYNNNNNNNNNYYNNYYNNNNNNNYYNNNNNNNYYNNNNNNYNYYNNNNN", "YYNYYNNNNYYYYYYYNNYNNNYNYNNNNNNNNYNNYNNNNNNNNYNYNY", "NNYNNNNYYNYYNYYYYYYNYNNYNNNNNNNNNNNNYNNNYYNNNNNNNN", "NNNYNYNNNNYNYNNNNNYYNNNNNNYYNNNNYNYNNNYYYNNNYNNNNN", "NNNYNYNYYNNNNNNNNNNYNYNYNNNNNNNYNNNNNYNNYNNNNNNNNN", "YNNYNNNYNYNNNYNYNNNYNNNNNNNYYYNNNNNYYYYYNNNNYYYNNY", "NNNNNNNNNYYNNNNYNYNYNNYYYNNYYNNYNNNNNNYNYNYYNNNNYN", "NNNNNNNNNNNYYNNNNYNNYYNNNNNNNNNNNYNNYNNNNYNYYNNNNY", "YYNNYYNNYNNNNYNNYYNYNNNYYYNNNYYNNYNYNNYYYNNNNYNNYN", "NNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNNNYNNNNNNNNY", "YYYYNYNNNNNYNNNNNNNNNNNYYYNNNNNYNYYNYNNNNNNNNNNYNN", "YYNNYYNYNNNNNYNNNNNNNNNYNNNNNNNYNYNNYNNNNNNYNNYNYN", "NNYNNNNNNYNYNNYNNNNNYYNNNNYNNNYYYNYNYYNNNYNNYNNNNY", "NNYNYYNNNNYNNNNNNNNYYNNNNYYNYNYNNNNYNNNNYNNYNYYNYN", "NYNNNYNYYNNNNNYNNNNYNNYYNYNNNNNNNNYNNNNNNNNYNYNYNN", "YYYNNNYNYNYNYNNNNYYNNNNYYNNYYNNNNNYYNNNYNYYNNNYYNN", "YYNNNNNNNNNNNNNNNYNNYNNNNNNNYNNYNYNYNNNNYNNNNNNNYN", "YYNNNNNYNNYNNNYNNNNYNNNNNNNNNYNNNYNNYNNNNYYNNNNNNY", "NNNNNNNNNNYYYNNYNYYNNYNNNNNNNNNNNYNNNNNYNYNYNNNNNY", "NNNNNYYNNNNNNNNNYNYYNNNYYYYNNYNNNNNNNNYNNNYYNNNNNY", "YYNYNNNNNNNYNNNNNYNYNNNNNNNNNNNNNNYNYNNYNYNNYNNNNN", "NNYNNNNNNNNYNNNNNNNYNYYYNYNNNYNNNYNYNYNNYNNNNYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4343.7406911667595;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {605, -772, 676, -596, 57, 972, -972, -469, 769, -479, 317, 803, -191, -926, 839, -985, 739, -671, -465, 486, -577, -362, 647, 754, 860, -675, -917, -698, -747, 222, -292, 589, -592, -471, -789, -797, -119, 114, -43, 923, 570, -837, 583, -139, 825, 238, -6, 55, -921};
    vector<int> y = {-134, 45, 314, -396, 626, -496, -846, 709, -371, -653, -546, 832, -98, -887, 230, 877, -682, -683, 714, 74, -51, -98, -252, -994, 10, 260, 712, -625, 302, -582, -568, -386, 358, 364, -310, 275, 64, 508, 964, 833, -985, 905, 451, -160, -586, 824, 331, -903, 611};
    vector<string> streets = {"NYYYNNNYYNNNYNNNNYNYNYNNYNNNNYNYYNNYNYNNNNNYYNYNY", "YNYYNYNNNYYYNNNNNYNNYNNYYNYNNYYNNNYYNYNYNNYNNNYNY", "YYNYYNNYYNNNYNYNNNYNYNYNNNYNNYYYYNNNYNNNNNNNNNNNY", "YYYNYNYYNNYNNYYNNNYNNNNNYNYNNYNNYYYYYYYNNNYYNYNYY", "NNYYNNNNYNYYNNYYYNNNNNNYYYYYNYNNNYNNNYNYNNYNNNNNY", "NYNNNNYYYNNNYYYYNNNNNYNNNYYNYNNNNYYYYNNNNNYNYYYNN", "NNNYNYNNYNNYNYNNNNNNNYNYNNYNNYNNNYYNNYNNYYYNNNNNN", "YNYYNYNNYYYNNYNNNNNNNYYNNNYNNYYYYYNNNNNYYYNNNYNNN", "YNYNYYYYNNNYYYYYNNNNNNYYNNYNYYNYNNNYYNYNNYNNNYNYY", "NYNNNNNYNNYNYYNNNNNNNNYNNNNNNYNNYNYYYNNYNYYNYYYYN", "NYNYYNNYNYNNNYNYYNYYNYYNYYYNNYNYYNYYYYNNYNNNYNNNN", "NYNNYNYNYNNNNNYNNNNNNYNNNYNNYNYNNYNNNNYNNYNNNNYYY", "YNYNNYNNYYNNNNYNNNNYNNYNNNNNYNYYYNNNYYNYYNNYYNNNN", "NNNYNYYYYYYNNNYYNNNYYNYNNNYYYYYNYYNNYYYYNYYNNNNNY", "NNYYYYNNYNNYYYNNNNNNNYYNYYNYNYNYNNYNYNNYNYNYYNNNY", "NNNNYYNNYNYNNYNNYNNNYYYNNNNNNYNYYNYNNNYYYNNNNNYYN", "NNNNYNNNNNYNNNNYNNYYNNYYYNYNNNYNNYNNNNNYNYYNYYYNY", "YYNNNNNNNNNNNNNNNNNNNNYYNNNYNNYNYYNNYNNYNNYYNNNNY", "NNYYNNNNNNYNNNNNYNNYNNNYNNNNYNNYNYNYYNYNYYYNYNYNN", "YNNNNNNNNNYNYYNNYNYNYYNNNYYYNNYNYNYNNNNYYYNNNYYYY", "NYYNNNNNNNNNNYNYNNNYNNNNYNNNNYNYYYNNYNYNYNYYNYYYY", "YNNNNYYYNNYYNNYYNNNYNNYNNYYNYNNNNNNNNYYNNNYNYYYYY", "NNYNNNNYYYYNYYYYYYNNNYNNNNYYYYNNNNYNYNNNYNNYNYNYN", "NYNNYNYNYNNNNNNNYYYNNNNNNNNYNNYYNNNYYYNYYYYYNNYNY", "YYNYYNNNNNYNNNYNYNNNYNNNNNYYNNYYNNNYNNNYYNNNYYNYY", "NNNNYYNNNNYYNNYNNNNYNYNNNNNYNYYYYYNYNYNYYYNNYNNNY", "NYYYYYYYYNYNNYNNYNNYNYYNYNNNNNNYYNNNNNYYNNYNNNNNN", "NNNNYNNNNNNNNYYNNYNYNNYYYYNNYNNNNNNNYNYNNNYYYYNNN", "NNNNNYNNYNNYYYNNNNYNNYYNNNNYNYYYYNNNNNNNNYNNYNYYN", "YYYYYNYYYYYNNYYYNNNNYNYNNYNNYNYNYNYNYNNYYYYNYNNYY", "NYYNNNNYNNNYYYNNYYNYNNNYYYNNYYNNNYNNYNYNYYYNNNNYN", "YNYNNNNYYNYNYNYYNNYNYNNYYYYNYNNNNYYYYYNNNYNYNYNNN", "YNYYNNNYNYYNYYNYNYNYYNNNNYYNYYNNNYYNYNNYNNYYYYNNN", "NNNYYYYYNNNYNYNNYYYNYNNNNYNNNNYYYNNNNYYYYNNYNYNYY", "NYNYNYYNNYYNNNYYNNNYNNYNNNNNNYNYYNNYNYYYNYYNYNYNN", "YYNYNYNNYYYNNNNNNNYNNNNYYYNNNNNYNNYNNNYNYNNNYNYNN", "NNYYNYNNYYYNYYYNNYYNYNYYNNNYNYYYYNNNNYNNNNNNNNYYN", "YYNYYNYNNNYNYYNNNNNNNYNYNYNNNNNYNYYNYNNYNNNNNYNNN", "NNNYNNNNYNNYNYNYNNYNYYNNNNYYNNYNNYYYNNNNNNYNNNNNN", "NYNNYNNYNYNNYYYYYYNYNNNYYYYNNYNNYYYNNYNNYYYYYNNYN", "NNNNNNYYNNYNYNNYNNYYYNYYYYNNNYYNNYNYNNNYNNNNNNYYN", "NNNNNNYYYYNYNYYNYNYYNNNYNYNNYYYYNNYNNNNYNNYNYNNNN", "NYNYYYYNNYNNNYNNYYYNYYNYNNYYNYYNYNYNNNYYNYNNYYYYN", "YNNYNNNNNNNNYNYNNYNNYNYYNNNYNNNYYYNNNNNYNNNNNNYYN", "YNNNNYNNNYYNYNYNYNYNNYNNYYNYYYNNYNYYNNNYNYYNNNNYY", "NNNYNYNYYYNNNNNNYNNYYYYNYNNYNNNYYYNNNYNNNNYNNNNYN", "YYNNNYNNNYNYNNNYYNYYYYNYNNNNYNNNNNYYYNNNYNYYNNNYN", "NNNYNNNNYYNYNNNYNNNYYYYNYNNNYYYNNYNNYNNYYNYYYYYNY", "YYYYYNNNYNNYNYYNYYNYYYNYYYNNNYNNNYNNNNNNNNNNYNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4279.065927586958;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {-799, -618, -861, -222, 201, -438, 638, -122, -770, 406, -605, -314, 857, 894, -573, 575, -211, 610, -49, 740, -169, -909, 917, 440, 83, -220, -841, 183, -742, 371, 237, 612, -353, -621, 223, -560, -600, 624, 785, -706, -705, -304, 545, -284, -313, -188, 47, 716, 368};
    vector<int> y = {815, 988, -198, 273, -682, -850, 379, -639, -568, -105, -6, -183, -952, 205, -777, -275, 344, -275, -145, -139, -487, 412, -413, 392, 846, 551, 143, -780, -661, 424, -348, 558, -803, 136, -846, 641, -629, 171, -349, -978, -782, 885, -226, -503, -709, 727, -950, 753, 353};
    vector<string> streets = {"NYNYNNNNNYNNNYNNNYNNYNYYYNNNYYNNYNYYYYYNNNNYYYNYN", "YNYYYYYNNYYYNNYYNYYYNYNNNNNNNYYNNYNYYYNYYNNYNNNNY", "NYNNNNYNNNNNNYNYNYNYYNYNNYNNNYYNNNYYNNNNNNYNNYYYN", "YYNNNNYNNNNNNNYYNNNYNYNNYNYNYYYNNNYYNYNNNNYYNYNYY", "NYNNNNNYYYNNNYNNYNYYYNNYYNYNYNNNYNNYYNYNNNNYYNYYN", "NYNNNNNNYNNNYNNYNYYYYYYYNYNYNYYNYNYYNNNNNNYNYYNNN", "NYYYNNNNYYNNNNNNNNYYYYNYYYNNNNYNNYYNNYYNYYNYNNYYN", "NNNNYNNNNYNYYYYNYNYYYYYYYNNYNNNYYNYYNNYNYYNNYNYNY", "NNNNYYYNNYNYYYYYNNYNNNYNNYNNNNYYNNNNYNNNNNYNNNYNN", "YYNNYNYYYNYNYNNNNNYNNYNYYNNYYNNNNYYNYNYYNYNYNYNYN", "NYNNNNNNNYNYNNNNNNYYNNNNNNNNYNNNNNYNNNNYNNYYNYNYN", "NYNNNNNYYNYNNNNYYNNYNYYYNNNNNYNYYYNYYNYNNNYNNNYNY", "NNNNNYNYYYNNNYNNNNNYYNNNNNNNNYYNYNYNNNNNNNNNNNYYN", "YNYNYNNYYNNNYNYNNYNNNNYNNYNNNNYNNNNYYYYNYNYYNNYYN", "NYNYNNNYYNNNNYNNYNYYYYNNYYNNYNNNNYYYYYNNYNNNYYNNN", "NYYYNYNNYNNYNNNNYYYNNNYYNNYNNNNNNYYNNNNNYYYNNNNNN", "NNNNYNNYNNNYNNYYNNNYYNYYNNYYYNNYNNYYYYNNYYYYNNNYN", "YYYNNYNNNNNNNYNYNNYNNNYNYNNNNYNYYYNNYNYNYNNNYYNYY", "NYNNYYYYYYYNNNYYNYNYNNYYYNYNNNNNYYNNYNNYNYYYNNNYY", "NYYYYYYYNNYYYNYNYNYNNNNNNYNNNYNNNYNYNYYNNNNNNYNNN", "YNYNYYYYNNNNYNYNYNNNNYNYNNYNNNNNYNNNNYNYYNNNNNYNY", "NYNYNYYYNYNYNNYNNNNNYNYNNYYYYYNNNYYYYYYYYNNNNYNNY", "YNYNNYNYYNNYNYNYYYYNNYNNNYYNYNNYYYNYYNNYNYNYNNNYN", "YNNNYYYYNYNYNNNYYNYNYNNNNYNNNYYNYYYNNYNNNNYNNNYNN", "YNNYYNYYNYNNNNYNNYYNNNNNNYNNNNNNNYNNYNYNNYNNNYYNY", "NNYNNYYNYNNNNYYNNNNYNYYYYNYNYNNNNNYNNNNNNNNNYNYNY", "NNNYYNNNNNNNNNNYYNYNYYYNNYNYNNYNNNNYNYNYYNNNNNNNY", "NNNNNYNYNYNNNNNNYNNNNYNNNNYNNNNNNNNYNYNYNNYNNNNNY", "YNNYYNNNNYYNNNYNYNNNNYYNNYNNNNNYYNYNYYYNNNNNNYYNY", "YYYYNYNNNNNYYNNNNYNYNYNYNNNNNNYNNNNNNNNYYNNNNNYNY", "NYYYNYYNYNNNYYNNNNNNNNNYNNYNNYNNNNYNYNNNNYYYNNNYN", "NNNNNNNYYNNYNNNNYYNNNNYNNNNNYNNNNNYYNNNNYYNNYNYYN", "YNNNYYNYNNNYYNNNNYYNYNYYNNNNYNNNNNNYYNNNNNNYYNNNY", "NYNNNNYNNYNYNNYYNYYYNYYYYNNNNNNNNNNYNYYYNYNYNNYNN", "YNYYNYYYNYYNYNYYYNNNNYNYNYNNYNYYNNNYYNYNNYYNNNYYN", "YYYYYYNYNNNYNYYNYNNYNYYNNNYYNNNYYYYNYNNNYNNYNYNYN", "YYNNYNNNYYNYNYYNYYYNNYYNYNNNYNYNYNYYNYNYYNNNNYYNN", "YYNYNNYNNNNNNYYNYNNYYYNYNNYYYNNNNYNNYNYNNNNYNNYYY", "YNNNYNYYNYNYNYNNNYNYNYNNYNNNYNNNNYYNNYNYNYYNYNYNN", "NYNNNNNNNYYNNNNNNNYNYYYNNNYYNYNNNYNNYNYNNNYYNNYNN", "NYNNNNYYNNNNNYYYYYNNYYNNNNYNNYNYNNNYYNNNNNNYNNNNN", "NNNNNNYYNYNNNNNYYNYNNNYNYNNNNNYYNYYNNNYNNNYNYYNNN", "NNYYNYNNYNYYNYNYYNYNNNNYNNNYNNYNNNYNNNYYNYNNYYYYN", "YYNYYNYNNYYNNYNNYNYNNNYNNNNNNNYNYYNYNYNYYNNNNNNNN", "YNNNYYNYNNNNNNYNNYNNNNNNNYNNNNNYYNNNNNYNNYYNNYYNN", "YNYYNYNNNYYNNNYNNYNYNYNNYNNNYNNNNNNYYNNNNYYNYNNNY", "NNYNYNYYYNNYYYNNNNNNYNNYYYNNYYNYNYYNYYYYNNYNYNNNN", "YNYYYNYNNYYNYYNNYYYNNNYNNNNNNNYYNNYYNYNNNNYNNNNNN", "NYNYNNNYNNNYNNNNNYYNYYNNYYYYYYNNYNNNNYNNNNNNNYNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3494.526887937682;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-309, -350, 70, -496, -41, 541, -8, 311, 436, 716, -989, -526, 222, 438, 838, -590, 760, 861, -923, -633, -73, -433, 11, 77, -239, 216, -108, 21, 340, -393, 355, 479, 716, 252, 514, -612, -278, 770, 22, -717, 150, 232, 374, -65, 175, -592, -513, -738, -539};
    vector<int> y = {-389, -269, -939, 419, 467, -541, -671, -58, -37, -31, -909, -891, -195, 220, 827, -618, -481, -580, 16, -891, 63, -955, -422, 908, 418, 34, 630, -691, -848, 219, -888, 595, -757, 603, -336, 844, 565, -894, -819, -953, -6, 874, -566, -106, 265, 137, 801, 337, -418};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYNYYNYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYY", "YYNYYYYYYYNYYYNYYYYYYNYYYNYYNYYYNYYYNYYYYYYNYYYYN", "YYYNYYYYYYYYYYYYYYYYYYYNYYYNNYNYYYYNYYYYYYYYYYYYN", "YYYYNYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYNYYNYYYYYNYYYYYYYYYYYYYYN", "YYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYNYYYYYYYYY", "YYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYY", "YYYYYYYYNYYNYYYYYYYNNYYYNYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYNYNYYYYNYNYYYYYYYYYYNYYYYYYYYYYYYNYNYNYY", "YYNYYYYYYYNYYYYYYNNYYYNNYYYNYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYNNYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYN", "YYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYNYYNYYYYYYNYYYYNNYYNYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYN", "YYYYYYYYYYYYYYNNYYYYYYYYYYYNYYYNNYYNYNYYNYYYYYYYY", "YYYYNYYYYNYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYN", "YYYYYYYYYYNYYYYYYNYNNYNYYYYYYYYYYYYYYYYNYYYYYNYYN", "NYYYYYYYYNNYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYNYYYYYYYYNYYNYYNNYYYNYYYYNYYYYYNYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYNYYYYNYYYYYYYYYYYNYYYYNYYYYYYYYY", "YYYNYYYYYYNYYNYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYNYYYYYYYYYYYNYYYNYYYYYYYYYYNYYYYYYYYYNYNY", "YYNYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNNYYYYYNYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYNYYYYYYNYY", "YYYNYNYYYYNYNYYNYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYY", "YYNNYYYYYYYYYNYYYYYYNYYYYYYYNYYYYYYYNYYYYNYYYYYYY", "YYYYYYYYYNYYYNYYYYYYYYYYYYYYYNYYYNYYYYNYYYYYYNNYY", "YYYNYYYYYYYYYYYYYYNYYYYYYYYYYYNNYYYYYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNNYYYYYYYYYYYYYNYYY", "YYNYYYYNYYYYYNYNYYYYYNYYYYYYYYYYNYYYYYNYNYYYYYYYN", "YYYYYNYYNYYYYYYYYYYYNYYYYYYYYNYYYNYYYYYYYYYYNYYYY", "YYYYYYYNYYYYYYYYYYYYYYNYYYNYYYYYYYNNYNYYYNYYYYYNY", "YNYNYYYYYYNYYYYNYYYYYYYYNYYYYYYYYYNNYYYNYYYYYYYYY", "YYNYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYNYYNYYYNNNNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYNYYYYYNYYYYYYNYYY", "YYYYYYNYYYYYYYYYYNYYNYNYYNNYYYYYYYYNYYYNYYYYYYYNY", "YNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYNYYNYYYNYYNYYYY", "YYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYNYYYNYY", "NYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYNYY", "YYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYNYYYNYYYNYYNYYYY", "YYYYYYYYYYYYYYNYYNYYYYYYNNYYYNYNYYYYYYNYYYYYYNNYY", "NYYYYYYYYNYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYNNYNNYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYNYYYYYYYNY", "YYNNYNYYYYYNYYNYNNYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3974.9474429074944;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-94, -540, -621, -888, -328, -140, 105, -364, 505, -387, -565, -349, -427, 228, 14, 204, 89, 886, 560};
    vector<int> y = {800, 280, -187, -28, -894, -65, 792, -798, 53, 880, -165, -616, 673, 759, -194, 892, -139, 733, -881};
    vector<string> streets = {"NNYYNNYNYNNNNNNNNNN", "NNNYNNNYNNYNNNNYNYY", "YNNNYNNYNNNNNNYNYNY", "YYNNNYNNYNNNNNNNNNY", "NNYNNNNNNNNNYNNNNNN", "NNNYNNYNNYNNYYYNYNN", "YNNNNYNNYYYNNNNNNNY", "NYYNNNNNNNYNYNNNNNY", "YNNYNNYNNNYNNNNNNNY", "NNNNNYYNNNNYNNNNNNN", "NYNNNNYYYNNNYYNYNNY", "NNNNNNNNNYNNNYYYNYN", "NNNNYYNYNNYNNYYNNNN", "NNNNNYNNNNYYYNYYYYN", "NNYNNYNNNNNYYYNNNNN", "NYNNNNNNNNYYNYNNYNN", "NNYNNYNNNNNNNYNYNNN", "NYNNNNNNNNNYNYNNNNY", "NYYYNNYYYNYNNNNNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3735.6247945474024;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {820, -126, 533, -178, -583, 976, -611, -974, 780, 679, 429, 397, 704, -372, -452, -416, -404, 496, 897, -692, 201, 23, -272, 356, -1, -613, 122, 183, -512, 260};
    vector<int> y = {-560, 308, 336, 620, 522, -906, 27, -950, -982, 716, -846, -919, 710, 688, -909, -209, 395, -620, -596, -334, 380, -368, -695, -702, -873, 368, -939, 206, 835, -834};
    vector<string> streets = {"NNNYNNNYNNYNNNYNNYYYYNNNYYNNYN", "NNNNYYNNYYYYNNNNNNNNYNYYYNNNNN", "NNNYNYYNYNNYYYNNYNNYNNNNYYNNNN", "YNYNNNNNYYNNYNYNNNYNNYNNNNNYNY", "NYNNNYYYNNNNNNYYYNNNYNNYYYNYNY", "NYYNYNYYYNNNNNNNNYNYNYNNYNNNNN", "NNYNYYNNYNNNNYYNNNNNNNNYNYYNNY", "YNNNYYNNYNNNNNNNNNNYNYNNYYNNYN", "NYYYNYYYNNYNYNYNNNNYNYNNYNYNNY", "NYNYNNNNNNYYNNYNNNNYNNNYNYNNYN", "YYNNNNNNYYNYYNNNNNYNNYYNNYNNNN", "NYYNNNNNNYYNNNNNNYNNNNYYNNNNYN", "NNYYNNNNYNYNNYYYNNNNNNNNNNYYNY", "NNYNNNYNNNNNYNNNNYNNYYNYNNNYYN", "YNNYYNYNYYNNYNNNNYYYNNNYNNNNNN", "NNNNYNNNNNNNYNNNNNNNYNYNNYNNNY", "NNYNYNNNNNNNNNNNNYNNNNNNNYYNYN", "YNNNNYNNNNNYNYYNYNNNYNNNYYNNYN", "YNNYNNNNNNYNNNYNNNNNYYNNNYNYNY", "YNYNNYNYYYNNNNYNNNNNNYNYNNNNNY", "YYNNYNNNNNNNNYNYNYYNNNNNNYNNYY", "NNNYNYNYYNYNNYNNNNYYNNNYNYYNNY", "NYNNNNNNNNYYNNNYNNNNNNNNNNNYYN", "NYNNYNYNNYNYNYYNNNNYNYNNNNNNYN", "YYYNYYNYYNNNNNNNNYNNNNNNNNYYNN", "YNYNYNYYNYYNNNNYYYYNYYNNNNNNYN", "NNNNNNYNYNNNYNNNYNNNNYNNYNNNNY", "NNNYYNNNNNNNYYNNNNYNNNYNYNNNYN", "YNNNNNNYNYNYNYNNYYNNYNYYNYNYNN", "NNNYYNYNYNNNYNNYNNYYYYNNNNYNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3699.712203399453;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {104, 352, -797, -546, 1000, -286, -189, -529, 767, 688, 619, -623, -768, -717, -797, 549, 210, -110, -56, 210, 217, 846, -907, -897, -284, 574, 501, -921, -807, -512, 526, 780, -309, -718, 966, 880, 430, 8, -156, -525};
    vector<int> y = {368, -530, 406, 441, -890, -10, -699, 443, 743, 66, -820, -81, -265, 721, 966, 257, -685, 192, 92, 114, -727, -784, 717, 719, -549, -959, -652, -932, 498, -593, 439, 139, 706, -268, -40, 414, 187, 283, -177, -368};
    vector<string> streets = {"NNNNNNYNNNNYNYNNNNNNNYNNNNNNNNNNYNNNNNNN", "NNNNNNNYYNYYNYNYYNNNYNNNNYNNYYYNNYNYYYNN", "NNNNNNYNNNNNNNNNNNYYNNNYYNYYYYNYNNYYYNNN", "NNNNNNYNYYNYNNYYYNNNNNNNNNYYYNNYNYNNYYNN", "NNNNNNNNYNYNYNNNYNNYNYNNNNNNNYNNNNNNYYYN", "NNNNNNNYNNYNYNNNNNNNYNNNYYYYNYNNYNNYNNNN", "YNYYNNNNNNNNNYNYNYYNNNYNNNNYYNNNNYNNNYNN", "NYNNNYNNYNNNYNNNNNYNYYNNNNYNNYYNNNYNYNNN", "NYNYYNNYNYNYNYNNYNNYYNNNNNNNNNNNYYNYYNYY", "NNNYNNNNYNYNNNNYNYNNNYYNYYNNNNNYNNNYNNNN", "NYNNYYNNNYNNNNNNNNNNNNNNNNNYNYNYNNYYYNNY", "YYNYNNNNYNNNYYYNNNNNYNNYNYNNNNYNNYNNYYNN", "NNNNYYNYNNNYNNYNNNYNYNNYNNNNNYNNYYNNNNNY", "YYNNNNYNYNNYNNYYNYYNNNNYNNNYYNNYYNYNNNNN", "NNNYNNNNNNNYYYNNNNNYNNNYNNNNNNYNNNNNNNYY", "NYNYNNYNNYNNNYNNNNNNNNNYNNNYYNYYNYYYNNYN", "NYNYYNNNYNNNNNNNNNYNYNYNYNNYYYYYYNYYYNYN", "NNNNNNYNNYNNNYNNNNNNNNNNNYNNNYYNNNNYNNYN", "NNYNNNYYNNNNYYNNYNNYNNYNNYNYNNYNNNNYNNYN", "NNYNYNNNYNNNNNYNNNYNNNYNNYNYNYNNNNNNNYNY", "NYNNNYNYYNNYYNNNYNNNNNYYYNNNNYNNNNNNYYYN", "YNNNYNNYNYNNNNNNNNNNNNYNYNNNNNNNYNYNNYNY", "NNNNNNYNNYNNNNNNYNYYYYNNNNNYNYYNNYNYNNYN", "NNYNNNNNNNNYYYYYNNNNYNNNNNNNYNNNNNNYNNNN", "NNYNNYNNNYNNNNNNYNNNYYNNNNNNNNYNNNYNNNNN", "NYNNNYNNNYNYNNNNNYYYNNNNNNNNNNNNNNNYYNYY", "NNYYNYNYNNNNNNNNNNNNNNNNNNNYNNNYYNNYYYNY", "NNYYNYYNNNYNNYNYYNYYNNYNNNYNNNYYNNNNYNNY", "NYYYNNYNNNNNNYNYYNNNNNNYNNNNNNYYNNYNYYNN", "NYYNYYNYNNYNYNNNYYNYYNYNNNNNNNNNNNYYYNNN", "NYNNNNNYNNNYNNYYYYYNNNYNYNNYYNNYNYNYNNNN", "NNYYNNNNNYYNNYNYYNNNNNNNNNYYYNYNNYYNNNNN", "YNNNNYNNYNNNYYNNYNNNNYNNNNYNNNNNNYNYNNNN", "NYNYNNYNYNNYYNNYNNNNNNYNNNNNNNYYYNNNNNNN", "NNYNNNNYNNYNNYNYYNNNNYNNYNNNYYNYNNNNNNYN", "NYYNNYNNYYYNNNNYYYYNNNYYNYYNNYYNYNNNYNYN", "NYYYYNNYYNYYNNNNYNNNYNNNNYYYYYNNNNNYNNNY", "NYNYYNYNNNNYNNNNNNNYYYNNNNYNYNNNNNNNNNNY", "NNNNYNNNYNNNNNYYYYYNYNYNNYNNNNNNNNYYNNNN", "NNNNNNNNYNYNYNYNNNNYNYNNNYYYNNNNNNNNYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3943.183664173126;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-535, 333, -14, 333, 565, 976, -193, -173, -91, 69, 29, -462, -16, 416, -627, -561, -403, 366, -821, -196, -414, 343, 351, -750, -602, 123, 299, 912, -818, -804, 729, 316, 413, 183, 392, -457, -927, -217, 4, 141, -264, 890, -677, 218, -106};
    vector<int> y = {534, 855, 921, -626, 442, -18, -633, 771, 636, 247, -701, 484, 974, -789, -908, -299, -615, -639, 26, 46, 682, -67, -530, 363, 36, -518, 175, -177, 881, 344, 496, -873, 356, -368, 191, -565, 744, 262, -59, 219, -847, -926, -716, -543, -818};
    vector<string> streets = {"NYNNNNNNNYNNYYNNYYNYYYNNNYNNNNNNNNNNNYYNYNNNN", "YNNNNNNYNYNNNNNNNNNNNNNYNNYNYYYNNNYNYYNNNNNNN", "NNNYNYNYNNYNNNNNYNNNNNNNYNNYYYNNNNNNYNNNNYNNN", "NNYNNNYYNNNNNYNNYYNYNNNYNNNYNNYNNNYYNNYYNYNYN", "NNNNNNNNNYYNNYNYYYNNYNNYYYYNNNNYNYYNYNNNNYNNN", "NNYNNNNNYNNNYNYNNYYNNYYNYNNNNNYNNNNYNNYNYYYYN", "NNNYNNNNYNNNNNNNNYYNNNNYNYNNYNYNNNNNNNNNNNNYN", "NYYYNNNNYNYNNNYYNYNNNNYNNNNYNYNYNNYYNNNNNYNNY", "NNNNNYYYNNNNNNYNNYNNYNYNYYNYYNNNYNNNNNNNNYNYY", "YYNNYNNNNNNNNNNNNYNYYYNNYYNNYNNYNYNNNNNNNNNYN", "NNYNYNNYNNNYYNYYYNNNNNYNNNYNYNNNNNYYNYNYNNYNN", "NNNNNNNNNNYNYYYNNNYNYYNNNYNNNYNNYNYNNYNNYNYYY", "YNNNNYNNNNYYNNNYNNNYYNYNNNNNNNNYNNNNNNNYYNNNY", "YNNYYNNNNNNYNNNYNNNNNNNNYNNNNNNNYNNNNNNNNNNNY", "NNNNNYNYYNYYNNNYNNNNNNYNYYNYYYNNNNNNNYYNYNNNY", "NNNNYNNYNNYNYYYNNNNNYYNNNYNNYNNYNNYNNNNNNNNNN", "YNYYYNNNNNYNNNNNNNNNNNNYYYNYNNNYNYNNNNYYNNNNN", "YNNYYYYYYYNNNNNNNNNYNNNNNYNNNYYNNNNYYNYNNYYYN", "NNNNNYYNNNNYNNNNNNNNYYYYYYYYNNNNYNNNNYNNYNNNY", "YNNYNNNNNYNNYNNNNYNNNNNYYNNYNYNYYNNYNNNNYNNNN", "YNNNYNNNYYNYYNNYNNYNNYYYYYNNYNNNNYNNYYNYYNNNY", "YNNNNYNNNYNYNNNYNNYNYNNYNNNYYYNNNNNYNNYNNNNNN", "NNNNNYNYYNYNYNYNNNYNYNNYNNNNNYNNNYYYNNNNNYNNN", "NYNYYNYNNNNNNNNNYNYYYYYNNNNNNYNNNYNNNYNYNYNNY", "NNYNYYNNYYNNNYYNYNYYYNNNNNNYNNNNNYNYYNYYYNNYY", "YNNNYNYNYYNYNNYYYYYNYNNNNNNNNNNNNYNNNNYNNNYNN", "NYNNYNNNNNYNNNNNNNYNNNNNNNNNYNNYNYYNNNNNNYNNN", "NNYYNNNYYNNNNNYNYNYYNYNNYNNNNNNYYYYNNNNYNNNNN", "NYYNNNYNYYYNNNYYNNNNYYNNNNYNNNYNNNNNNYNYNNYYY", "NYYNNNNYNNNYNNYNNYNYNYYYNNNNNNNNNNYNNNNNNNNNN", "NYNYNYYNNNNNNNNNNYNNNNNNNNNNYNNNNNNYNNYNNNNNN", "NNNNYNNYNYNNYNNYYNNYNNNNNNYYNNNNNYNNYNYNYYNNN", "NNNNNNNNYNNYNYNNNNYYNNNNNNNYNNNNNNNNNNNNNNNYN", "NNNNYNNNNYNNNNNNYNNNYNYYYYYYNNNYNNNNNYYNYNNYN", "NYNYYNNYNNYYNNNYNNNNNNYNNNYYNYNNNNNNNNNNNNNNY", "NNNYNYNYNNYNNNNNNYNYNYYNYNNNNNYNNNNNNNNNNNYYN", "NYYNYNNNNNNNNNNNNYNNYNNNYNNNNNNYNNNNNYNYYYNNN", "YYNNNNNNNNYYNNYNNNYNYNNYNNNNYNNNNYNNYNYNYNNYN", "YNNYNYNNNNNNNNYNYYNNNYNNYYNNNNYYNYNNNYNNNNNNY", "NNNYNNNNNNYNYNNNYNNNYNNYYNNYYNNNNNNNYNNNYYNNN", "YNNNNYNNNNNYYNYNNNYYYNNNYNNNNNNYNYNNYYNYNNNNY", "NNYYYYNYYNNNNNNNNYNNNNYYNNYNNNNYNNNNYNNYNNNNN", "NNNNNYNNNNYYNNNNNYNNNNNNNYNNYNNNNNNYNNNNNNNNN", "NNNYNYYNYYNYNNNNNYNNNNNNYNNNYNNNYYNYNYNNNNNNN", "NNNNNNNYYNNYYYYNNNYNYNNYYNNNYNNNNNYNNNYNYNNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3630.182563713379;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {314, -180, -249, 354, 195, -988, 14, 741, -993, -180, -983, -250, 677, 707, -306, 78, 337, 653, 127, 163, 358};
    vector<int> y = {166, -911, 271, -98, 955, 671, -957, 83, -660, 146, 504, 380, -200, 870, -12, 975, -109, 826, -67, -713, -350};
    vector<string> streets = {"NNYYNNNNYYNNNYNYNNNNY", "NNNNNYNYNNNNNNNYNNNNN", "YNNNNNYYNYNNNNNNNYYYN", "YNNNNNNNYNNNNNNYNNYNN", "NNNNNNNYNNNYNNNNNNYYN", "NYNNNNYYYNYNYNNNNNNYN", "NNYNNYNNYYNYNNNNNYNNY", "NYYNYYNNYNNYYYNNYYNYN", "YNNYNYYYNYNNYNNNNNNYN", "YNYNNNYNYNYYYNNNNNNNY", "NNNNNYNNNYNNNNNNNNNNY", "NNNNYNYYNYNNNYNNNYNNY", "NNNNNYNYYYNNNNNYYNYYN", "YNNNNNNYNNNYNNYNNNYYN", "NNNNNNNNNNNNNYNNNYNNN", "YYNYNNNNNNNNYNNNYNNNY", "NNNNNNNYNNNNYNNYNNNYY", "NNYNNNYYNNNYNNYNNNNNN", "NNYYYNNNNNNNYYNNNNNNY", "NNYNYYNYYNNNYYNNYNNNN", "YNNNNNYNNYYYNNNYYNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4392.02556495938;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {331, 476, -295, 13, 971, -761, 699, -473, 361, -806, -799, -527, -335, -381, 228, -579, -565, -884, -931};
    vector<int> y = {-538, -66, 280, -498, 326, 135, -294, 368, 141, -323, 948, -837, 940, 2, 183, -742, 26, 654, 802};
    vector<string> streets = {"NNNYNNNYYNNYNNNNNNY", "NNYNNNYNNNNNNNNYYNN", "NYNYNNNNNNNNNNYYNNY", "YNYNNNNYYNNNNYYNNNY", "NNNNNNNNNNYNNNYYYYY", "NNNNNNNNNYNNNYYNNNY", "NYNNNNNNYYNNNNYNNYN", "YNNYNNNNNYNNNNYNYNY", "YNNYNNYNNNNNYNNYNNY", "NNNNNYYYNNNNNYNYNYN", "NNNNYNNNNNNYYNYNNNN", "YNNNNNNNNNYNYNYNYYN", "NNNNNNNNYNYYNNYNNNN", "NNNYNYNNNYNNNNNYNNN", "NNYYYYYYNNYYYNNNNYN", "NYYNYNNNYYNNNYNNNYN", "NYNNYNNYNNNYNNNNNYN", "NNNNYNYNNYNYNNYYYNN", "YNYYYYNYYNNNNNNNNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4012.809592966323;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-46, 176, -388, 187, -226, -912, -542, -816, 414, -253, -413, -854, 694, -626, 269, 944, 170, -971, 296, -678, 4, 216, 41, 34, -352, 61};
    vector<int> y = {783, 112, -691, -535, 731, -129, 497, -291, -763, -43, -105, -488, -715, 878, 38, 520, 291, -979, 424, -895, -529, -199, 477, -185, -928, 509};
    vector<string> streets = {"NNNNYNYNNYYYNNYYYYNNNYYNNY", "NNYNYNNYYNNNNNYNYYNYYNNNNN", "NYNNYYNNNNNNNNYNNYNNNYNNYY", "NNNNNYNNYNYYYNNYNNYNNNYNNN", "YYYNNYYNNNNNYNNNNNNYYNYNNN", "NNYYYNNYYNNNNNNYNNNNYYYYNN", "YNNNYNNNNNNYNNYNYNYNNYYNYY", "NYNNNYNNNNNYYNNNNYYNNYNYYY", "NYNYNYNNNYYNYYNYNNYNNNNYNY", "YNNNNNNNYNNNNNNNNYNYNYNNNN", "YNNYNNNNYNNYNYNNYYNNNYYNNN", "YNNYNNYYNNYNYYYNNYNYNNYYNN", "NNNYYNNYYNNYNYNNNYYYNNNNNN", "NNNNNNNNYNYYYNYNNNNNNNNNNN", "YYYNNNYNNNNYNYNNNNNNNYNNNN", "YNNYNYNNYNNNNNNNNYNNNNNNNN", "YYNNNNYNNNYNNNNNNYYNNYNYYN", "YYYNNNNYNYYYYNNYYNYNNYYNYN", "NNNYNNYYYNNNYNNNYYNNNNNNNN", "NYNNYNNNNYNYYNNNNNNNYNNNNN", "NYNNYYNNNNNNNNNNNNNYNYNYNY", "YNYNNYYYNYYNNNYNYYNNYNNNYN", "YNNYYYYNNNYYNNNNNYNNNNNNNN", "NNNNNYNYYNNYNNNNYNNNYNNNNN", "NNYNNNYYNNNNNNNNYYNNNYNNNN", "YNYNNNYYYNNNNNNNNNNNYNNNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4031.317729760999;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-693, -219, 343, -659, 792, -476, -107, 937, -101, 970, -720, -673, 768, -457, 538, -854, -81, 781, 64, 763, -4, 616, -941, -256, 539, -450, -529, 68, 254};
    vector<int> y = {-523, -11, 362, -174, -497, 859, -7, 568, -218, 583, 273, -705, -81, -372, 101, -929, -884, 905, -874, 182, -492, -863, -905, 278, 354, 622, 595, 433, -799};
    vector<string> streets = {"NNNYYYNNNYYNNNNNNNYNNYNNYNNNN", "NNYYNNNYNYNYYYNNNNYNYYYNNYYNY", "NYNYNYNYNYYNYYNNYNNNYNNYNYYNN", "YYYNNYNNNNNYNNYNNYNYNNNNNNYYN", "YNNNNNNNYYNNNNNYNNNYNNNYNNNNN", "YNYYNNNNYNNNNYNNNNNYNNNNNYYYN", "NNNNNNNNYNNNYNNNNYNYNNNNNYNNN", "NYYNNNNNNYNYYYNNNYNNNYNNYNNNN", "NNNNYYYNNNNYYNNNYNYNNNNNYYNNN", "YYYNYNNYNNNNYYNNNNYNYNNNNYNYN", "YNYNNNNNNNNNNNNNNNNNNNNNNNYNY", "NYNYNNNYYNNNNNYYNNNNYNNNNYYNN", "NYYNNNYYYYNNNYYYNYNYNYYNYNNNN", "NYYNNYNYNYNNYNYNNNNNNNNYNNNNN", "NNNYNNNNNNNYYYNNNNNNNNYYNYYYY", "NNNNYNNNNNNYYNNNNNNNNNNYNNYNY", "NNYNNNNNYNNNNNNNNYNNYYNYNNNYY", "NNNYNNYYNNNNYNNNYNNNYNNNNNNNN", "YYNNNNNNYYNNNNNNNNNNNNNNNYNNY", "NNNYYYYNNNNNYNNNNNNNNNYNNNNYN", "NYYNNNNNNYNYNNNNYYNNNNNNNYNNY", "YYNNNNNYNNNNYNNNYNNNNNYNNNNNY", "NYNNNNNNNNNNYNYNNNNYNYNNNNNNY", "NNYNYNNNNNNNNYYYYNNNNNNNYNNNN", "YNNNNNNYYNNNYNNNNNNNNNNYNNYNN", "NYYNNYYNYYNYNNYNNNYNYNNNNNYYY", "NYYYNYNNNNYYNNYYNNNNNNNNYYNYY", "NNNYNYNNNYNNNNYNYNNYNNNNNYYNN", "NYNNNNNNNNYNNNYYYNYNYYYNNYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3632.524646625403;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {896, -598, 182, -821, 719, 212, 970, 252, -151, -691, 110, -160, 238, 751, -948, -948, 469, 669, -225, -713, -226, 845, -431, -790, -314, -607, -601, -835, 700, -999, -959, -740, -607, -174, 214, -575, -518, -213, -137, -587, -55, 591, -427, -689, 747, 460};
    vector<int> y = {-694, 302, -504, -92, -189, 845, -408, 682, -25, 263, -631, 40, 562, -896, -103, -459, 380, -819, 706, -672, 40, -261, -877, 218, 232, 153, -889, -44, 275, 814, -722, -347, 577, 620, 259, 408, -288, 332, -485, 878, -975, 640, 38, -262, 370, -593};
    vector<string> streets = {"NYNNNNNNNNYNNNYYNNNYYNNNNYNNNYNYYNYYNNNNYNYYNN", "YNYYNNNYNNYNNNNNNNYNYNNNYNNNNYNYNNNYNNYNNYYYNN", "NYNNNNNNNNNNNYYNNNYYYNNYYNNNNNNNYNYNNNNYNYYYNN", "NYNNNNNNYYNYNNNNNNNNNYYNNNYNYNNYYNYNNYNNNNNNYY", "NNNNNNNNNNYNNYYYYNNNYNYNNNNYYNNYYNNYYNNNYYYYNN", "NNNNNNYNYYYNNNYYNYNNYNYNNYNNNYYYNNNYYYNNNNNNNN", "NNNNNYNNNNYNYYNNNNNNNNNYNNYNYYYNNYNYNYYNNNNNNN", "NYNNNNNNNNYNYYNYNNNNNYYNNYNYYNNYNNNYYNNYNYNNNN", "NNNYNYNNNNNNYNNNYYNNNNNNNNNNNNYNYYNNNYNNNNNYNY", "NNNYNYNNNNNNYNNNYYNNNNNNNYNNYNYNNNNNYYNYYYYNNN", "YYNNYYYYNNNNNNYYYNYNYNYYYYNNNYNYNNNYNNYYNNNYYN", "NNNYNNNNNNNNNYNNNNNNNNNYNYNNYNNNNNYNNYYYNYYYNN", "NNNNNNYYYYNNNNNNNNYNNNYNNNNNNYYNNYYNNYNNNNNNNY", "NNYNYNYYNNNYNNYNYYNYYNYNNNNNYNNYNNYNNYNNNNNYNN", "YNYNYYNNNNYNNYNNNNNYYYNYYNNNNYNYYNNNYYYNYNYYYN", "YNNNYYNYNNYNNNNNYNNNNNYNYNNNYYNYNNNNNNYNYYNYYN", "NNNNYNNNYYYNNYNYNYNNYNNNNYNYYYNNYNNNNNNNNNNNNN", "NNNNNYNNYYNNNYNNYNNNYNNNNYNNYYNNNYNNNNNYNNNNNN", "NYYNNNNNNNYNYNNNNNNNYNYYNYNNNNNNYNYNYNNNNNNYNN", "YNYNNNNNNNNNNYYNNNNNNNNYNNNNNYYNYNYNNNYYYNNNNY", "YYYNYYNNNNYNNYYNYYYNNNYNNNNNYYNNNYNNNNNNNYNNNY", "NNNYNNNYNNNNNNYNNNNNNNNNYYNNNNYNNNNYNYNNNNYNYN", "NNNYYYNYNNYNYYNYNNYNYNNNNNNNNNYNNYYYYNNYNNNNNN", "NNYNNNYNNNYYNNYNNNYYNNNNNYYNNNNNNNNYNYNNNNNNYN", "NYYNNNNNNNYNNNYYNNNNNYNNNNNNNNNNYNNYNNNNYNYNYY", "YNNNNYNYNYYYNNNNYYYNNYNYNNNNNYNNNNYYNNNYNNNNYN", "NNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNYNNYYN", "NNNNYNNYNNNNNNNNYNNNNNNNNNNNNYYNNNYYNYNNYNNNYN", "NNNYYNYYNYNYNYNYYYNNYNNNNNNNNNNNNYNNNYNNNNYNYN", "YYNNNYYNNNYNYNYYYYNYYNNNNYNYNNNYNNNNNYNNNYNYYN", "NNNNNYYNYYNNYNNNNNNYNYYNNNNYNNNNNNNNYNNNYYNNYN", "YYNYYYNYNNYNNYYYNNNNNNNNNNNNNYNNNNNYYYNNYNNNYN", "YNYYYNNNYNNNNNYNYNYYNNNNYNNNNNNNNNNNNNNNYYNNNN", "NNNNNNYNYNNNYNNNNYNNYNYNNNNNYNNNNNYNNNNYNYNNYY", "YNYYNNNNNNNYYYNNNNYYNNYNNYNYNNNNNYNNNYYNNNNNYY", "YYNNYYYYNNYNNNNNNNNNNYYYYYNYNNNYNNNNNYNYNNNYNN", "NNNNYYNYNYNNNNYNNNYNNNYNNNNNNNYYNNNNNYYYNNNNYN", "NNNYNYYNYYNYYYYNNNNNNYNYNNNYYYNYNNYYYNYYYNNYNN", "NYNNNNYNNNYYNNYYNNNYNNNNNNYNNNNNNNYNYYNYNYNYNN", "NNYNNNNYNYYYNNNNNYNYNNYNNYNNNNNNNYNYYYYNYNNNYN", "YNNNYNNNNYNNNNYYNNNYNNNNYNYYNNYYYNNNNYNYNNNYYN", "NYYNYNNYNYNYNNNYNNNNYNNNNNNNNYYNYYNNNNYNNNNYNN", "YYYNYNNNNYNYNNYNNNNNNYNNYNNNYNNNNNNNNNNNNNNNNN", "YYYNYNNNYNYYNYYYNNYNNNNNNNYNNYNNNNNYNYYNYYNNNY", "NNNYNNNNNNYNNNYYNNNNNYNYYYYYYYYYNYYNYNNYYNNNNN", "NNNYNNNNYNNNYNNNNNNYYNNNYNNNNNNNNYYNNNNNNNNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4100.719034146526;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {803, -866, 439, -455, -755, 558, 210, 888, 292, 672, -454, -766, 134, 486, -165, -969, 694, 657, 380, 699, -636, 111};
    vector<int> y = {-679, 534, -601, -509, -396, 669, 687, 216, 302, 92, 410, 760, -739, 100, -145, 200, -173, 359, -461, 686, -767, 18};
    vector<string> streets = {"NNYNNNNNYNNNYNNYYNNNNN", "NNNNYYYYNNNNNYNNYNNYNN", "YNNNNNNNNNNYNNNNYNNYNN", "NNNNNNNYNNNYYYNNNNNNNN", "NYNNNNNNYNNNYYNNYNNYNN", "NYNNNNYNNNNYNNNNNNNNNN", "NYNNNYNYNNYYYNYNYNNNYN", "NYNYNNYNNNNNYNNNNNNNNN", "YNNNYNNNNNYYNNYYNYNNNN", "NNNNNNNNNNYNNNYYNNNYNY", "NNNNNNYNYYNNNNNYNNYNYN", "NNYYNYYNYNNNNNYNYNYYNN", "YNNYYNYYNNNNNYYYNYNNYN", "NYNYYNNNNNNNYNNYNNYNNY", "NNNNNNYNYYNYYNNNNNNNYN", "YNNNNNNNYYYNYYNNNNNYNN", "YYYNYNYNNNNYNNNNNYYYNY", "NNNNNNNNYNNNYNNNYNYNNN", "NNNNNNNNNNYYNYNNYYNNNN", "NYYNYNNNNYNYNNNYYNNNNN", "NNNNNNYNNNYNYNYNNNNNNY", "NNNNNNNNNYNNNYNNYNNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4007.9163011824307;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {270, 733, 552, -263, 792, 602, 835, -482, 617, 42, 550, 525};
    vector<int> y = {-983, 4, 570, 220, 116, -797, -420, 34, -473, -332, 194, 198};
    vector<string> streets = {"NNNNNNYNYNYN", "NNNNYYNNNNYN", "NNNYNYYNNYNN", "NNYNNNYNNYNN", "NYNNNYYNNNNN", "NYYNYNYNNNNN", "YNYYYYNYYNYN", "NNNNNNYNNYNN", "YNNNNNYNNNYN", "NNYYNNNYNNNN", "YYNNNNYNYNNY", "NNNNNNNNNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3325.900332138539;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {726, -539, -378, 886, 968, 109, 737, 994, -556, 767, 29, 761, 594, -935, -511, -15, -89, -584, -562, -333, 442, 357, -459, 226, -966};
    vector<int> y = {787, 786, 838, -246, 253, -883, -472, -476, 491, 443, 967, 174, -753, -311, 855, 190, 566, -461, 176, -681, -767, 562, 507, -322, 491};
    vector<string> streets = {"NYNYNNNNNNNNNNYNNYNNNNNNN", "YNYNYYYNYNNYYNNNNNNNNNNNN", "NYNYNYNNNNYYNNYYNNNNNYNNN", "YNYNNYNNNNYNNNYNNNNNNYNNN", "NYNNNYNYNNYYYYNNNNNNNNNNY", "NYYYYNNNYYNNNNNYNNYYYNNNN", "NYNNNNNYNNNNNNYNNNNNNYNNY", "NNNNYNYNNYNNNNNNYNNNYNNNN", "NYNNNYNNNNNNYNYYNYNNNNYNN", "NNNNNYNYNNNNYYNNNNNNYYYNY", "NNYYYNNNNNNNYNNNNNNNYNNYY", "NYYNYNNNNNNNNNYNNYNNNNNNN", "NYNNYNNNYYYNNNNNNNYNYYNNN", "NNNNYNNNNYNNNNYNNNNYNNYNY", "YNYYNNYNYNNYNYNNNNNNYYYYY", "NNYNNYNNYNNNNNNNNYNYNNYNY", "NNNNNNNYNNNNNNNNNNNNYNNYN", "YNNNNNNNYNNYNNNYNNYYYNNYY", "NNNNNYNNNNNNYNNNNYNYNNNYN", "NNNNNYNNNNNNNYNYNYYNNNYNN", "NNNNNYNYNYYNYNYNYYNNNNNYN", "NNYYNNYNNYNNYNYNNNNNNNNYY", "NNNNNNNNYYNNNYYYNNNYNNNYY", "NNNNNNNNNNYNNNYNYYYNYYYNN", "NNNNYNYNNYYNNYYYNYNNNYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4102.988329900242;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-554, -362, -40, 450, 966, 605, 527, 893, 283, -203, -718, 744, 310, -911, 173, -930, -468, -413, 633, 637, 670, 856, 682, 947, -950, -71, 407, -545, 462, -301, 685, -352, 330, 579, -62, 375, 666, 322, 705, 255, -271, 503, 481, 629, -649, 977, -202, 868, 819};
    vector<int> y = {-935, 211, -447, -697, -873, 91, 544, 450, 662, 769, 214, 643, 9, -986, 265, -824, 576, 260, -179, 475, 276, -835, -175, -185, 345, 4, -829, 469, -935, -177, -286, -343, 451, -474, -669, -644, -485, 251, 863, -419, -131, -606, -733, 951, -540, -486, 972, 710, 143};
    vector<string> streets = {"NYNNNYNNYYNNNNNNNNNNNYYYNNNYNNYYNYYNNYNNNYNYNNNYY", "YNYYNNNYYNNNNNYNYNNYNNNNYNNNNNNNNNYNNYNNYYNYNNNYN", "NYNYNNNYNYYYNNNNNNYYNNYYNNYNYNNYNNNNYNNNNNNNYNNNY", "NYYNNNNYNNNYNNNNNYNNYYYNNYYNYYNYYNNYNYNNNNNNYNNNN", "NNNNNNYNNYYNNYNNYNNNYYYNYNNNNNYNNYYYYNYNNNYNNNNYN", "YNNNNNNYYNNNNNNNNYYNYNYNNNYNNYNNNNNNNYYNYNNNYYNNN", "NNNNYNNYYNYYNYYYYNNNYYNNNYNNNNNNNYYNNNYNNYNYYNNYY", "NYYYNYYNNNYYNNNNNNNYYYNNNNNYNNNNNYNNNNYNYNNNYNNNY", "YYNNNYYNNNNNYNNNNNNYNYNYNNYNNYNNNNYYNNNYYNYNNNYNN", "YNYNYNNNNNNNYYYYNNNNNNYNYYNNYNNYNNYYNNNNNNYNNNYYN", "NNYNYNYYNNNNNNNYNNNYYNNNNNNNYNYYYNNNNNNNYYNYYNNNN", "NNYYNNYYNNNNNYNNYYNYNYYNNYNNYYNNNYYNYYNNNNNYYNNNN", "NNNNNNNNYYNNNYNNNYNNYNNYYNNNYYYYNNYNNNYNYNYNYYNNN", "NNNNYNYNNYNYYNYNNNNNNYNNNYYNNNNNNNNNNYNNNNYYNNNNY", "NYNNNNYNNYNNNYNYYYYNNNYNNNYYNNNNNNNYNNNNNNNYYNNNN", "NNNNNNYNNYYNNNYNNYNNNYNYNYYNNYNNNNNNNYNNNYNNNNNNN", "NYNNYNYNNNNYNNYNNNYNNNYNNNNNNNNNYYYNNNNNYNNNNYNNN", "NNNYNYNNNNNYYNYYNNNNNYNNNYNNYNNYNNNNNNYNNNYNNYNNY", "NNYNNYNNNNNNNNYNYNNNNNNNNNYNYYNNNYNNYNYNYNYNNNNNN", "NYYNNNNYYNYYNNNNNNNNYYNYYYYNNNNNNNNNYYNNNNNNNYNYN", "NNNYYYYYNNYNYNNNNNNYNNNNYNYYNYYNNNNNNYYNYNYNYYNNY", "YNNYYNYYYNNYNYNYNYNYNNYNNNNNNNNNNNNNNYYNNYYYNYYNN", "YNYYYYNNNYNYNNYNYNNNNYNNNYNNNNYYNNNNYYYNYYNNNNNYN", "YNYNNNNNYNNNYNNYNNNYNNNNNNNNNYNNNYYNNNNNNNYNNNYYY", "NYNNYNNNNYNNYNNNNNNYYNNNNNYNNNYYYYNNNYNNYYNNNYYYN", "NNNYNNYNNYNYNYNYNYNYNNYNNNNYYNNYNNNNNNNYYNNYNYNNN", "NNYYNYNNYNNNNYYYNNYYYNNNYNNNNYNYNNNNNNNNYNNNNYNNN", "YNNNNNNYNNNNNNYNNNNNYNNNNYNNYNNNNNYYNNYYYYNNYNNNN", "NNYYNNNNNYYYYNNNNYYNNNNNNYNYNNNYNYNNNNNNYYYNNYNNN", "NNNYNYNNYNNYYNNYNNYNYNNYNNYNNNYYNNNNNNNNYYNNNNNYN", "YNNNYNNNNNYNYNNNNNNNYNYNYNNNNYNYNNNNNNNYNNYYYYYNN", "YNYYNNNNNYYNYNNNNYNNNNYNYYYNYYYNNNYYNNNYYNNNNNNYN", "NNNYNNNNNNYNNNNNYNNNNNNNYNNNNNNNNNYYYNYNNNNNNYNNN", "YNNNYNYYNNNYNNNNYNYNNNNYYNNNYNNNNNYNNNYNNNNNNNNNN", "YYNNYNYNYYNYYNNNYNNNNNNYNNNYNNNYYYNNNNYNNNNNNYNNY", "NNNYYNNNYYNNNNYNNNNNNNNNNNNYNNNYYNNNNNNYNNYYNYNNY", "NNYNYNNNNNNYNNNNNNYYNNYNNNNNNNNNYNNNNNYNNNNNYYNNN", "YYNYNYNNNNNYNYNYNNNYYYYNYNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNYYYYNNNNYNNNNYYNYYYNNNNYNNNNYYYNYNNNNNYNNYNYY", "NNNNNNNNYNNNNNNNNNNNNNNNNYNYNNYYNNNYNNNNNYYNYYYYN", "NYNNNYNYYNYNYNNNYNYNYNYNYYYYYYNYNNNNNNNNNNNYNYYYN", "YYNNNNYNNNYNNNNYNNNNNYYNYNNYYYNNNNNNNNNYNNYNYYYYY", "NNNNYNNNYYNNYYNNNYYNYYNYNNNNYNYNNNNYNYYYNYNNNNNNN", "YYNNNNYNNNYYNYYNNNNNNYNNNYNNNNYNNNNYNNNNYNNNNNNNY", "NNYYNYYYNNYYYNYNNNNNYNNNNNNYNNYNNNNNYNNYNYNNNNNYN", "NNNNNYNNNNNNYNNNYYNYYYNNYYYNYNYNYNYYYNYYYYNNNNNYN", "NNNNNNNNYYNNNNNNNNNNNYNYYNNNNNYNNNNNNNNYYYNNNNNYY", "YYNNYNYNNYNNNNNNNNNYNNYYYNNNNYNYNNNNNNYYYYNNYYYNN", "YNYNNNYYNNNNNYNNNYNNYNNYNNNNNNNNNNYYNYYNNYNYNNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4232.6155858707225;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {365, 872, -62, 677, 760, 244, 101, 370, -73, -192, -885, 947, 958, 341, -795, -861, 453, 9, -705, -440, 321, -165, -344};
    vector<int> y = {-433, -762, 87, 912, -765, 677, 773, -444, -71, 277, -728, 40, 838, 53, 291, 611, 397, -239, 790, 144, -611, 573, -137};
    vector<string> streets = {"NYYNNNNNYYYNNNYNNNNYNNY", "YNNYNNNNNNNNNNNYYNNNNYN", "YNNNNNNYYYNNYNNNNNNYYYN", "NYNNYNYNNNNNNYYNYYNYNYN", "NNNYNNNNNNYNYYNNYNNNNYN", "NNNNNNYNYNYNYYYNNNYNNNY", "NNNYNYNNNNNNNNYYNNYYNNN", "NNYNNNNNYYNNNNNYNNNNNYY", "YNYNNYNYNNNNYYNYYNNNNNY", "YNYNNNNYNNNNNNNNNNYNNYN", "YNNNYYNNNNNNYNNYNYNNNNN", "NNNNNNNNNNNNYNNYNNNYNYY", "NNYNYYNNYNYYNNNNNNYYNNN", "NNNYYYNNYNNNNNNNYNNYNNN", "YNNYNYYNNNNNNNNNNYYNNNN", "NYNNNNYYYNYYNNNNYNYYYYN", "NYNYYNNNYNNNNYNYNNYNYNN", "NNNYNNNNNNYNNNYNNNNNNYY", "NNNNNYYNNYNNYNYYYNNYNNN", "YNYYNNYNNNNYYYNYNNYNYNN", "NNYNNNNNNNNNNNNYYNNYNNY", "NYYYYNNYNYNYNNNYNYNNNNY", "YNNNNYNYYNNYNNNNNYNNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4198.943064414889;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {-953, -307, -250, -828, 324, -897, 72, -890, -680, 765, -278, 258, -667, -716, 532, -987, 735, -467, 502, 173, 70, 346, 176, -814, -974, 983, -959, 606, -630, 712, 764, 320, -301, 236, -3, 626, -392, -917, -900, 816, 384, -188};
    vector<int> y = {-774, -475, -422, 842, -393, -851, 448, -655, 98, -894, -414, -650, 138, 579, 469, -786, 714, -586, -157, -559, -592, 323, -216, -44, -757, -648, 648, -172, -469, 261, 994, 982, 921, 296, 851, -727, -914, 443, 351, -758, -788, -23};
    vector<string> streets = {"NNYYNNNYNNYNNYNYNNNNNNNNYNYNYYNNNNNYYNYNNN", "NNNYYNNNNNNNYYNNNNNYNYNYNNNYYNNYNYNNYNNNYY", "YNNNYYNYYYNNNYNNNYYNNNYNYYYNNYNYNNNNNYNNNN", "YYNNNNYNNNNYNYNNYNNYYNNNNNYNYNNYNYNYNYNNNN", "NYYNNYYYNYNNNNNNNNNNNNNYYNYNNNNNNNYNNNNNNN", "NNYNYNNNNNNNYNNYNNYNYYYNYNYYNNYNNNNYYNNNNY", "NNNYYNNYNNNYNNNNYYNNNNNYNYNYYYNYNNNNYNNYNY", "YNYNYNYNNYNNNNNNNNNYNNNNNNNNYNNNYNNNNNNYNN", "NNYNNNNNNNYYYYYYNYYNNNNNNNNNNNNNNYNYNYNYNN", "NNYNYNNYNNYNYNNYNYNNNYYNNNNNNNYYYNYNNYNNYN", "YNNNNNNNYYNNYYNNYNNNYNNYNNNNNNYNNYNNNNYYYN", "NNNYNNYNYNNNNYNNYNYNNYNNNNYYYNNYNNNNNNNNYN", "NYNNNYNNYYYNNYYNNNNYNYNNNNNNNYYYNYNNNNYNNY", "YYYYNNNNYNYYYNYYYNNYYYNNNNNNNNNYNNNYYNNNYN", "NNNNNNNNYNNNYYNYNNNNYNYNNNNNNNYYNNNNNNYNNY", "YNNNNYNNYYNNNYYNYNNNYNNYNNNNNNNYNNNYYNNNYN", "NNNYNNYNNNYYNYNYNYNYNNYNYNNNNNNNNNYNNNYNNN", "NNYNNNYNYYNNNNNNYNYYNNNNNYNNNNNNNNYNYYNNNY", "NNYNNYNNYNNYNNNNNYNNNNNNYYNYYNNNNNNNNNNNYN", "NYNYNNNYNNNNYYNNYYNNYNYYNNNNYNNNYNYNYNNNNY", "NNNYNYNNNNYNNYYYNNNYNNYNYYNNYNYNNNNYYNNYNN", "NYNNNYNNNYNYYYNNNNNNNNNYNNYNNYNNNYYYYYNYYY", "NNYNNYNNNYNNNNYNYNNYYNNYNNNYNNNNNYYNNNNYYN", "NYNNYNYNNNYNNNNYNNNYNYYNNYNNNNNYYYYYNNNYYN", "YNYNYYNNNNNNNNNNYNYNYNNNNYNYNNYYNNNNNYNNNN", "NNYNNNYNNNNNNNNNNYYNYNNYYNNNNNNYNNNNNNNNYY", "YNYYYYNNNNNYNNNNNNNNNYNNNNNNNNNNYYNNNYYNYY", "NYNNNYYNNNNYNNNNNNYNNNYNYNNNNYYNYNYNYYYNNN", "YYNYNNYYNNNYNNNNNNYYYNNNNNNNNNNNNYYNNNNNNN", "YNYNNNYNNNNNYNNNNNNNNYNNNNNYNNNYNNYNNYYYNN", "NNNNNYNNNYYNYNYNNNNNYNNNYNNYNNNNNNYYNNNNNY", "NYYYNNYNNYNYYYYYNNNNNNNYYYNNNYNNYYNYNNYNNN", "NNNNNNNYNYNNNNNNNNNYNNNYNNYYNNNYNNYYYNNNYY", "NYNYNNNNYNYNYNNNNNNNNYYYNNYNYNNYNNNNNYNYNY", "NNNNYNNNNYNNNNNNYYNYNYYYNNNYYYYNYNNNYNYYYY", "YNNYNYNNYNNNNYNYNNNNYYNYNNNNNNYYYNNNYNNYYN", "YYNNNYYNNNNNNYNYNYNYYYNNNNNYNNNNYNYYNYNNYN", "NNYYNNNNYYNNNNNNNYNNNYNNYNYYNYNNNYNNYNNNYN", "YNNNNNNNNNYNYNYNYNNNNNNNNNYYNYNYNNYNNNNYYN", "NNNNNNYYYNYNNNNNNNNNYYYYNNNNNYNNNYYYNNYNNN", "NYNNNNNNNYYYNYNYNNYNNYYYNYYNNNNNYNYYYYYNNY", "NYNNNYYNNNNNYNYNNYNYNYNNNYYNNNYNYYYNNNNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4039.9259777826746;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {796, 358, 460, 581, 948, -449, -433, -501, 347, 296, -653, -765, -545, -606, 411};
    vector<int> y = {136, 424, -851, 843, -962, 771, -496, 857, 205, -894, -481, -404, 597, -644, -75};
    vector<string> streets = {"NYYNNNYNNNNYNNN", "YNYNNNNYNNNYYNN", "YYNNNNYNYNYNNYY", "NNNNNYNNYNYNNNN", "NNNNNNNNYNYNNNN", "NNNYNNNNNNNYNNN", "YNYNNNNNNNNYNNN", "NYNNNNNNNNNNYNN", "NNYYYNNNNYYNNYN", "NNNNNNNNYNNYYNN", "NNYYYNNNYNNNNYY", "YYNNNYYNNYNNNNY", "NYNNNNNYNYNNNYN", "NNYNNNNNYNYNYNY", "NNYNNNNNNNYYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4550.379286717365;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {-942, 822, 207, -85, 13, -539, -567, 451, 467, 344, -749, -458, 691, -132, 115, -511};
    vector<int> y = {-123, 503, -579, 474, 134, 456, 633, -93, -39, -414, -538, -176, -536, 747, -902, -104};
    vector<string> streets = {"NYNYNNYNNNYNYNNY", "YNYYNNYYNNNNNNNN", "NYNYNYNNYYNNNYNN", "YYYNNYNNNYNNNYNN", "NNNNNNYNNYYNNNNN", "NNYYNNYNYNYNNYYN", "YYNNYYNNNYNNYNNN", "NYNNNNNNNNNNYNYN", "NNYNNYNNNNNNNYNN", "NNYYYNYNNNNYNYYN", "YNNNYYNNNNNNNNNN", "NNNNNNNNNYNNNYNY", "YNNNNNYYNNNNNYNN", "NNYYNYNNYYNYYNNY", "NNNNNYNYNYNNNNNN", "YNNNNNNNNNNYNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3184.0540498412197;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {504, 14, 911, 809, -378, -402, 799, -664, -10, -380, -778, -424, 777, 294, -816, 893, -554, -173, 539, -364, -913, -541, -994, -319, 334, 217, -794, 815, 763, 266, 217, 338, 886, 907, -112, -547, -883, 902, -755, 174, 509, 695, 907, 337, 13, -216, -737, -638};
    vector<int> y = {-674, 809, -736, -169, -986, -45, 765, -605, 461, -134, -754, 416, 16, -929, 574, 11, -296, -288, 604, 243, 825, -522, -456, -48, -125, -80, -109, 929, -962, -376, -858, -566, -769, -616, 769, 275, -706, 273, -259, -211, -324, 81, -570, 899, 651, 175, 52, 215};
    vector<string> streets = {"NYYNNNNNNNNYYNNNNNYYNNNNNNNNNYNNNYNNNNNYNNNNYNNN", "YNNNYYNNNYNYNNNNNNNNYNYNNNNYNNYNYNYYNYNNNYYNYNYN", "YNNYNNNNNNNYNYYNNNNNYYYNNNNNNYNNYYNNYNNNNNYYYNYN", "NNYNYNYNNNYNNYNNYNNNNYYYYYNNNNNNYNNYNNYYNNYNNYNN", "NYNYNNNNYNYNNYNNNNNNNNNYYNNNNYYYNNYYNNNYNNNNNYNN", "NYNNNNNNNYNNNNNNYYNYNNNYNNNNNNYNNNNNNNNYYNNNYYNN", "NNNYNNNNNYYNNNNNYNNNNNNYYNNNNNYNNNNNNNYYNNNNYYNY", "NNNNNNNNNNNNNNNNNNNYNNNYNYNNYNNNNNNYNNNNNYYNYNNN", "NNNNYNNNNNYYYYNYNNNNNNNNYNYNNYYNYYYYYYNNYYNNNNYY", "NYNNNYYNNNNNNNYNNNYNYNNNNNNNYYNYNNYYYYNYNYYYYYNN", "NNNYYNYNYNNNNNNNNNNNNYNNNNNNNYYNNNNNYNNNNYYYNYNN", "YYYNNNNNYNNNNNNYNNNNNNNNNYNNYNNYYYNNNNNYNNYNNYNN", "YNNNNNNNYNNNNYYNNYNYYNNYYNNYYNNNNNNNYNNYYNYYNNNY", "NNYYYNNNYNNNYNYNYYNYNNNNNYNNNNNNNNNNNYYNNNNNNNNN", "NNYNNNNNNYNNYYNYNNYNNNNYNNYNYNNNNNNNYNNNNYYYNYNN", "NNNNNNNNYNNYNNYNNYNNNYNNYNNNYYYNNYNYNNNYNNNNNNYN", "NNNYNYYNNNNNNYNNNYYNNNYNNNNNNNNNYYNNNNNNYYNNNNNY", "NNNNNYNNNNNNYYNYYNYYNNNNNNYNNNNNNNNYNNNNYYYNYNYN", "YNNNNNNNNYNNNNYNYYNNNYYNNNYNNNYYNNYYYNNYNNNNNNNN", "YNNNNYNYNNNNYYNNNYNNNNYNYNNYNNYYYNYNNNNYNNYYYNYN", "NYYNNNNNNYNNYNNNNNNNNNNNNNNNYNNYYNNNNNYNNYNYNNNN", "NNYYNNNNNNYNNNNYNNYNNNNNNNNNNYYYYNYNNYYNYNNNYNNY", "NYYYNNNNNNNNNNNNYNYYNNNNYNNNNYNNNNNYNYYNNYYNYNNY", "NNNYYYYYNNNNYNYNNNNNNNNNNNNYNNNNNNNYNYNNNNNYYYNY", "NNNYYNYNYNNNYNNYNNNYNNYNNNYNYNNNNNNYNYYNNNNNYYYY", "NNNYNNNYNNNYNYNNNNNNNNNNNNYYYNNYNNNNNYYNNNYNNNNN", "NNNNNNNNYNNNNNYNNYYNNNNNYYNNYYYYNYNNNYNYNNNYNNNY", "NYNNNNNNNNNNYNNNNNNYNNNYNYNNNNNNNNNNYNNYNNYNNYNN", "NNNNNNNYNYNYYNYYNNNNYNNNYYYNNYNNYNYYNNNNNNNNNNNN", "YNYNYNNNYYYNNNNYNNNNNYYNNNYNYNNNNNNNNNNNYNYNYYNN", "NYNNYYYNYNYNNNNYNNYYNYNNNNYNNNNNNNYNYNNNNNYNNNYN", "NNNNYNNNNYNYNNNNNNYYYYNNNYYNNNNNYNYYYNYYNNNNNYNN", "NYYYNNNNYNNYNNNNYNNYYYNNNNNNYNNYNNYNYYYNYYNYNNNN", "YNYNNNNNYNNYNNNYYNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNN", "NYNNYNNNYYNNNNNNNNYYNYNNNNNNYNYYYNNYNNNYNYNNNNNN", "NYNYYNNYYYNNNNNYNYYNNNYYYNNNYNNYNYYNYNYYNNYNNNNY", "NNYNNNNNYYYNYNYNNNYNNNNNNNNYNNYYYNNYNNNYNNNNNNNY", "NYNNNNNNYYNNNYNNNNNNNYYYYYYNNNNNYNNNNNYNNNNNNNNN", "NNNYNNYNNNNNNYNNNNNNYYYNYYNNNNNYYNNYNYNNYYNNYNYN", "YNNYYYYNNYNYYNNYNNYYNNNNNNYYNNNYNNYYYNNNNNNNNYNN", "NNNNNYNNYNNNYNNNYYNNNYNNNNNNNYNNYYNNNNYNNNYYNNNN", "NYNNNNNYYYYNNNYNYYNNYNYNNNNNNNNNYNYNNNYNNNNNNNNN", "NYYYNNNYNYYYYNYNNYNYNNYNNYNYNYYNNNNYNNNNYNNNNYNY", "NNYNNNNNNYYNYNYNNNNYYNNYNNYNNNNNYNNNNNNNYNNNNNNY", "YYYNNYYYNYNNNNNNNYNYNYYYYNNNNYNNNNNNNNYNNNNNNNNN", "NNNYYYYNNYYYNNYNNNNNNNNYYNNYNYNYNNNNNNNYNNYNNNNN", "NYYNNNNNYNNNNNNYNYNYNNNNYNNNNNYNNNNNNNYNNNNNNNNY", "NNNNNNYNYNNNYNNNYNNNNYYYYNYNNNNNNNNYYNNNNNYYNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4269.2034664913745;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {206, 515, -950, 75, -687, -716, -766, -523, -537, 445, -640, -533, -135, 987, -805, 778, -547, 341, 496, 477, -866, -749, -238, -882, -527, 691, -979, -741, -389, 442, 704, -719, -131, 990, 420, 554, -173, -936, 394, -949, 411, -168};
    vector<int> y = {439, -307, 303, 333, 912, 491, 750, -222, -672, -729, -904, 386, 175, 374, -301, 273, 260, -921, -120, -701, -512, 181, 830, 737, -968, 429, 505, 58, 742, 116, 484, 190, -80, 778, 201, -122, 635, -629, -95, -339, -341, -564};
    vector<string> streets = {"NYNYYYNNYYYNNNYNNNNYNNNNNYYYNYNNNNNNYNYNNN", "YNNNYNYNYNNNNNYNYNNYNNNYYYYNYNYNNNNNNNNYYN", "NNNNNNNYYNNYNYNNNNYNNNYYNYYNYNNNNNNNNNYNNN", "YNNNNYYNNNNNYNNYYNNYNNNYNNYYNYNYNNYNYNYNYY", "YYNNNNYNYNNNYNYYYNNYNNYYNNNNNNYYNYYNNNNNYY", "YNNYNNYYNNNYNNNYNNNYNNNNNNNNYNNNNNNNNNNYYN", "NYNYYYNNNNNNNNNNNNYNNYYNYNNNNNNNNYNYYNNNNN", "NNYNNYNNYNNNNNNNYNNYYNNNNYNNNNNNNNNYNNNNNN", "YYYNYNNYNNYNNNNNNYYYNNNYYNNNNNNNNNYNNYYNNN", "YNNNNNNNNNNYYNNNYYYNNYNNYYNYNNNNNYNNNNNNNN", "YNNNNNNNYNNNNNNYNNNNNYYNYNNNYNYNNNYYNNNNNN", "NNYNNYNNNYNNNYNNNNYNYYNNYNNNNNNNNYNNNNNNNY", "NNNYYNNNNYNNNNNNYNNNNYNYNNNNNYYNNNNNNNNNNN", "NNYNNNNNNNNYNNYNYNNNNNNNNNYYNNYNNNYNNYNNNN", "YYNNYNNNNNNNNYNNYYNNNYYNNYYYNYNYNNNNNYNYYY", "NNNYYYNNNNYNNNNNYYNNYNNYNNNYNNNNNNNNYNNNYN", "NYNYYNNYNYNNYYYYNYYYNNNYNNYNNYNNNNYNNYNNNN", "NNNNNNNNYYNNNNYYYNNNYNNYNYYNNNNNNNNNNNNYYY", "NNYNNNYNYYNYNNNNYNNNNYNNYYYNYYNYYYYNYYNNNN", "YYNYYYNYYNNNNNNNYNNNNYYYYNNNYNNNNNNNNNYNYN", "NNNNNNNYNNNYNNNYNYNNNNYYNNNYNNYYNNNNYYYNNN", "NNNNNNYNNYYYYNYNNNYYNNNNNNNNYNNNYYYNYNNNNY", "NNYNYNYNNNYNNNYNNNNYYNNNNYNNNNNNNNYYNYNYNY", "NYYYYNNNYNNNYNNYYYNYYNNNNNNYNNYNNNNNNNYNNN", "NYNNNNYNYYYYNNNNNNYYNNNNNNNNYNNYYYNYNNNNNN", "YYYNNNNYNYNNNNYNNYYNNNYNNNNYYNNYNNNNYNNNNN", "YYYYNNNNNNNNNYYNYYYNNNNNNNNYYYYNNNNNNYNYNN", "YNNYNNNNNYNNNYYYNNNNYNNYNYYNNNNNYNNNNNNNNY", "NYYNNYNNNNYNNNNNNNYYNYNNYYYNNNNYNNYYNYYNNN", "YNNYNNNNNNNNYNYNYNYNNNNNNNYNNNYNNNNYNNNYNY", "NYNNYNNNNNYNYYNNNNNNYNNYNNYNNYNNYNNNNYNYNN", "NNNYYNNNNNNNNNYNNNYNYNNNYYNNYNNNYNYNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNYNNYNNYNNYYNYYYYNYNYY", "NNNNYNYNNYNYNNNNNNYNNYNNYNNNNNNNYNNNNYNYNN", "NNNYYNNNYNYNNYNNYNYNNYYNNNNNYNNYYNNYNNNNNN", "NNNNNNYYNNYNNNNNNNNNNNYNYNNNYYNNYNYNYNNNYY", "YNNYNNYNNNNNNNNYNNYNYYNNNYNNNNNNYNNYNYNNNN", "NNNNNNNNYNNNNYYNYNYNYNYNNNYNYNYNNYNNYNNNNN", "YNYYNNNNYNNNNNNNNNNYYNNYNNNNYNNNYNNNNNNNNY", "NYNNNYNNNNNNNNYNNYNNNNYNNNYNNYYNNYNNNNNNNN", "NYNYYYNNNNNNNNYYNYNYNNNNNNNNNNNNYNNYNNNNNN", "NNNYYNNNNNNYNNYNNYNNNYYNNNNYNYNYYNNYNNYNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3976.826716350656;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {803, 344, 568, -314, -828, -857, -309, 525, 688, -608, -548, -730, -406, 561, 281, 39, 745, -172, 65, 45, 364, -910, 916, 398, 116, -473, 390, 467, 199};
    vector<int> y = {183, 978, 128, 770, -266, 974, 555, 903, 248, 994, -500, -73, 364, 887, -474, 479, 279, 885, 273, -932, -611, -566, -20, 472, 44, 637, -436, -855, 71};
    vector<string> streets = {"NNNNYNNYYNNNYNYNNNNYNNYYNNYNN", "NNNYYYNNNNNNNNNYNNNNYNNNYNYNN", "NNNNYNNNNNNYNYNNNYYYNNNNNNNYN", "NYNNNNNNYNNNYNNNNNNYNNNNNNNNN", "YYYNNYNYYNYNNNNNNYNNNYNYYNYYN", "NYNNYNNNNNNNNNNNYNNYYNNYYNNNN", "NNNNNNNNNNYYNYNNYNNNNYNNNNNNY", "YNNNYNNNNYYNYNYYYNNNNYNNNNNYN", "YNNYYNNNNNNNNYNNYYYNNYYNNNNNY", "NNNNNNNYNNNYNNNNYNNNNNNNNYYYY", "NNNNYNYYNNNYNNNNNNNNYNNNYNYNN", "NNYNNNYNNYYNNNNNYNNNNYNNNYNNY", "YNNYNNNYNNNNNNNYYNNNNNNNYNYNN", "NNYNNNYNYNNNNNYNNNNNYYNNNNNNY", "YNNNNNNYNNNNNYNYNNNNYNNYNNNNN", "NYNNNNNYNNNNYNYNNYNNNYNNNNNYN", "NNNNNYYYYYNYYNNNNYNYNYYYNNNNY", "NNYNYNNNYNNNNNNYYNNNNNNNNYNNY", "NNYNNNNNYNNNNNNNNNNNNNYNYYNNN", "YNYYNYNNNNNNNNNNYNNNNYNNNYYNN", "NYNNNYNNNNYNNYYNNNNNNNNNNNYYY", "NNNNYNYYYNNYNYNYYNNYNNNNNNYNN", "YNNNNNNNYNNNNNNNYNYNNNNNNNYNN", "YNNNYYNNNNNNNNYNYNNNNNNNNNYNN", "NYNNYYNNNNYNYNNNNNYNNNNNNYNYY", "NNNNNNNNNYNYNNNNNYYYNNNNYNNNY", "YYNNYNNNNYYNYNNNNNNYYYYYNNNNY", "NNYNYNNYNYNNNNNYNNNNYNNNYNNNN", "NNNNNNYNYYNYNYNNYYNNYNNNYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3928.4252839608307;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {93, -524, -220, -747, -298, -79, 186, 514, 595, 348, 407, -436, -233, -116, 277, 435, -188, -89, 629, 62, -569, 957, 220, 342, -695, 212, 554, -101, -74, 156, 617, 437, -316, -611, 82, -913, -794, -384, -480};
    vector<int> y = {600, -260, -583, 12, -715, 488, -20, -967, -179, -820, 909, 163, 503, 459, 905, 670, 836, 146, 495, -22, 361, 506, 162, -628, -182, -800, 683, 655, 191, -808, -194, -581, -807, 480, 230, -946, -196, -375, -396};
    vector<string> streets = {"NYNNNNNNNNYNNNNNYNNYNNNNNNNNYNNNNNNYYNN", "YNNNNNNNNYNYNNYNNNNNYYNNNNNYNNYNYNNNYNY", "NNNNYYNNNNYYYYNNNNNNNNNYYNYNYYNNNNYNNNN", "NNNNNNNYYNNNNNNNYNYNNNYNNYNYNNYYNNYNYNY", "NNYNNNNNNYNYYNYYYNNYNYNNYNNNYNYNNYNNNNY", "NNYNNNNNNYNNYNNYYNNNNNNNNNNNNYYNNYNYNYN", "NNNNNNNNYYNNNNNNNNNNNNNNNYNYYNNNYYYNNNN", "NNNYNNNNNYNNNNNYNYNNNNNNNNNNNNYNNYNNYNN", "NNNYNNYNNNNNNNNYNNNNYNNYNNYNNNNYNNNNYYN", "NYNNYYYYNNNNYNNNNYYYNYYYYNNYNYNYNNNYNNN", "YNYNNNNNNNNNNNNYNNNNNYNYYNNNNYNYNYNNYNY", "NYYNYNNNNNNNNYNYNNNNNYYYYYYNNNNNYNNNNNN", "NNYNYYNNNYNNNNNYYYNNNNNNNYNNNNNNYNNNYNN", "NNYNNNNNNNNYNNNNNYNNYYYNYNYNNYNYNNNNNNN", "NYNNYNNNNNNNNNNYNNNYNYNYNNYNNNNNNYNYNYY", "NNNNYYNYYNYYYNYNNNNNNNYNYNNYYNYNNNNYNNN", "YNNYYYNNNNNNYNNNNNNYNYYNNYNNNNNNNNYNNNN", "NNNNNNNYNYNNYYNNNNNYNNNNNYNYNNNNNNYNNYY", "NNNYNNNNNYNNNNNNNNNNNNYNYYNNNNNNNNYNNNY", "YNNNYNNNNYNNNNYNYYNNNNNNNNNNNNNNNNNYYYN", "NYNNNNNNYNNNNYNNNNNNNNYYNNNNNNNYYNYYNYN", "NYNNYNNNNYYYNYYNYNNNNNNNNYYYNNNNNNNYNNN", "NNNYNNNNNYNYNYNYYNYNYNNNNYNNNYNNYNNNYNN", "NNYNNNNNYYYYNNYNNNNNYNNNNNNNNYYNNNNNNNN", "NNYNYNNNNYYYNYNYNNYNNNNNNYNNNYNNNYNNNNN", "NNNYNNYNNNNYYNNNYYYNNYYNYNNNYYNNNYYNYYN", "NNYNNNNNYNNYNYYNNNNNNYNNNNNYYYNNNNYYNNN", "NYNYNNYNNYNNNNNYNYNNNYNNNNYNNNNNYNNYNNY", "YNYNYNYNNNNNNNNYNNNNNNNNNYYNNNYNYNNYYNN", "NNYNNYNNNYYNNYNNNNNNNNYYYYYNNNNNNNYNYNN", "NYNYYYNYNNNNNNNYNNNNNNNYNNNNYNNNNYNNNYY", "NNNYNNNNYYYNNYNNNNNNYNNNNNNNNNNNYNNYNNN", "NYNNNNYNNNNYYNNNNNNNYNYNNNNYYNNYNNYYNYN", "NNNNYYYYNNYNNNYNNNNNNNNNYYNNNNYNNNNNYNY", "NNYYNNYNNNNNNNNNYYYNYNNNNYYNNYNNYNNNNNY", "YNNNNYNNNYNNNNYYNNNYYYNNNNYYYNNYYNNNYYN", "YYNYNNNYYNYNYNNNNNNYNNYNNYNNYYNNNYNYNNN", "NNNNNYNNYNNNNNYNNYNYYNNNNYNNNNYNYNNYNNY", "NYNYYNNNNNYNNNYNNYYNNNNNNNNYNNYNNYYNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3719.903925375357;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {-21, -967, -85, -318, -523, -790, 428, 704, 587, 245, 972, -43, -600, 533, -331, -606, -695, 824, 156, -46, 482, -547, -581, -899, -427, -360, -167, 846, -358, -914, -751, -96, -166};
    vector<int> y = {-75, 590, -666, 740, 730, 540, -349, -424, -565, -187, 442, -287, -239, 965, 461, -261, 63, -882, -826, 413, 263, -942, 174, 741, -808, 416, 686, 963, 910, 433, 207, 907, 26};
    vector<string> streets = {"NYNNNNYNNYNYNNNYNNNNNNNNNYNNNYNNN", "YNYYYNNNNYNYNNNNNNNYNNNNNNNYNNNNY", "NYNNNNNYYYNNNYNYNNNNNNNNYYNNNNYYY", "NYNNYNNNNNNNNNNYNNNNNYYYYNYNNNNNN", "NYNYNYNNNNNYNYNNNNNYYNNYNYNNNYYYN", "NNNNYNNNNNNNYNNNNNNNNNNNNYNNNYNYN", "YNNNNNNYNYYNYYNNNNNYNNNNNNYNNNNNY", "NNYNNNYNNNNYNYYNNNNNNNYYYNNNNNNNY", "NNYNNNNNNNNNYNYNYNNNNNNNNNYYYYNNN", "YYYNNNYNNNYYNNNNNNNNNNYYNNYNNNYNN", "NNNNNNYNNYNNNNYNNNNNNNYYNNNYYNNNN", "YYNNYNNYNYNNNYNNNYNNNNNNNNNYNNNNN", "NNNNNYYNYNNNNNYNYNNNNNNNYNNYYNNNN", "NNYNYNYYNNNYNNNYYNNYYNNNNYYNNNYNN", "NNNNNNNYYNYNYNNNNNNNYNNNNYNNYNYNN", "YNYYNNNNNNNNNYNNNNYYYNYNYNNYNNNNY", "NNNNNNNNYNNNYYNNNNNYNYNNNYNNYYYNN", "NNNNNNNNNNNYNNNNNNNYYNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNNNYYNNNNYNNNNNYN", "NYNNYNYNNNNNNYNYYYYNNYNNNYNNNNNNN", "NNNNYNNNNNNNNYYYNYYNNYYNNNYNNNNNN", "NNNYNNNNNNNNNNNNYNNYYNNNYNNNNYNNY", "NNNYNNNYNYYNNNNYNNNNYNNNNNNNNYNYN", "NNNYYNNYNYYNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNYNNNNYNNYNNNNNYNNNYNNYYNNN", "YNYNYYNNNNNNNYYNYNYYNNNNYNNYNYYNN", "NNNYNNYNYYNNNYNNNNNNYNNNNNNNNNNNN", "NYNNNNNNYNYYYNNYNNNNNNNNNYNNNNNYY", "NNNNNNNNYNYNYNYNYNNNNNNNYNNNNNYNN", "YNNNYYNNYNNNNNNNYNNNNYYNYYNNNNYNY", "NNYNYNNNNYNNNYYNYNNNNNNNNYNNYYNNN", "NNYNYYNNNNNNNNNNNYYNNNYNNNNYNNNNN", "NYYNNNYYNNNNNNNYNNNNNYNNNNNYNYNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3850.2158404369284;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {-692, -112, 311, -874, -945, 805, 926, -462, -520, -69, 136, -850, -536, -254, -385};
    vector<int> y = {-549, 206, 51, 908, -668, 187, 580, -896, 810, -60, -559, -595, 776, -5, -695};
    vector<string> streets = {"NNYNNNYNNNNNNNN", "NNNNNNNNNNYNYNN", "YNNNYNYNYNNYNNN", "NNNNNNNNNNYYNNN", "NNYNNYNNNYNNNYN", "NNNNYNNYNNYYYYY", "YNYNNNNNNNNNYYN", "NNNNNYNNNNYNNNN", "NNYNNNNNNNYNNNY", "NNNNYNNNNNNYNYN", "NYNYNYNYYNNNYNY", "NNYYNYNNNYNNNNN", "NYNNNYYNNNYNNNY", "NNNNYYYNNYNNNNN", "NNNNNYNNYNYNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 5362.136530530106;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {957, -770, -697, -118, 433, -674, 324, -705, 175, 605, -999, -78, -794, -662, -931, 390, 9, -708, -454, 704, 827, -891, -77, 725, -92, 275, -969, -167, 179, 708, 53, -68, 204, 227, -464, -175, 339, -789};
    vector<int> y = {-917, -531, -738, -457, 351, 17, 259, 78, 271, 268, -926, 346, -167, -353, -14, 711, 421, 622, 128, -358, 974, -593, -930, 879, -286, -673, 999, -441, 674, 12, 93, -70, 752, -496, 597, 127, -577, -524};
    vector<string> streets = {"NYNNNNNYNYYNYNNNNYYYNNNNYNNNNNYNNNNNNY", "YNYNYYNYYNYNNNYNNNNNYYNNNNYNYNNYNNNNNN", "NYNNYNNNNNNYNNNYNNNNNYYNYNNNYYYNYNNNNN", "NNNNNNNYYNNYNNNNNNNNYNYNNNYNNNNYYNNNNN", "NYYNNNNNNNYNNNNNNNNYNYNYNNNNNNNYNNNYNY", "NYNNNNNNYNNNNNNYYNNNYYNYNNYNNNYNYNNYNN", "NNNNNNNNNNNNYNYNNNNNYNNYNNYNYNNNNNNNYY", "YYNYNNNNNNYNYNNYYNNNYNNNNYYNYNNNNYNYYY", "NYNYNYNNNYNNNNYNNYNYNYNNNYNNNYNNNNNNNN", "YNNNNNNNYNNNNNNYNNNNYYYYNYYNNNNNNNNYYN", "YYNNYNNYNNNNNNNYNNNNYYNYNYNYNNYYYYYNNN", "NNYYNNNNNNNNYYNNYNNNYYNNNNNNNNYYYNYNYY", "YNNNNNYYNNNYNNNNNYNNNYNNYNNNNNYNNYNNYN", "NNNNNNNNNNNYNNNNNNYNNNNNNNNYYNNNNYYYYY", "NYNNNNYNYNNNNNNNNNNNNNNNNYNNYNYNNYNNNN", "NNYNNYNYNYYNNNNNNNNYYYNYNNNNNNNNNNYYNN", "NNNNNYNYNNNYNNNNNYYNNYNNNNNNYNNNNNNNNY", "YNNNNNNNYNNNYNNNYNNNYNNNYNYNNYNNNNYNNN", "YNNNNNNNNNNNNYNNYNNYNYNNYNNNNNNYNNYNNN", "YNNNYNNNYNNNNNNYNNYNYYYYNNNNNNNNNNNNNN", "NYNYNYYYNYYYNNNYNYNYNNYNNNNNYNNNYNYYYN", "NYYNYYNNYYYYYNNYYNYYNNNNNNNNYNNNNNNYNY", "NNYYNNNNNYNNNNNNNNNYYNNYNNNNYYYYNYNNYY", "NNNNYYYNNYYNNNNYNNNYNNYNNNNYYNYNNNNNNY", "YNYNNNNNNNNNYNNNNYYNNNNNNNYNNNNNYYNNYN", "NNNNNNNYYYYNNNYNNNNNNNNNNNNNNNYNNYYNYY", "NYNYNYYYNYNNNNNNNYNNNNNNYNNNNNNNYNNYNN", "NNNNNNNNNNYNNYNNNNNNNNNYNNNNYNYNNNYNNN", "NYYNNNYYNNNNNYYNYNNNYYYYNNNYNYNNNNNNYN", "NNYNNNNNYNNNNNNNNYNNNNYNNNNNYNNNNNNNNN", "YNYNNYNNNNYYYNYNNNNNNNYYNYNYNNNNNNNNNN", "NYNYYNNNNNYYNNNNNNYNNNYNNNNNNNNNNYNNNN", "NNYYNYNNNNYYNNNNNNNNYNNNYNYNNNNNNNNNNN", "NNNNNNNYNNYNYYYNNNNNNNYNYYNNNNNYNNNYNN", "NNNNNNNNNNYYNYNYNYYNYNNNNYNYNNNNNNNNYN", "NNNNYYNYNYNNNYNYNNNNYYNNNNYNNNNNNYNNNY", "NNNNNNYYNYNYYYNNNNNNYNYNYYNNYNNNNNYNNN", "YNNNYNYYNNNYNYNNYNNNNYYYNYNNNNNNNNNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4216.691993722552;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-679, -766, 837, -931, -902, 933, 26, 7, -595, -495, -192, 477, 278, 380, 302, -687, -453, -831, -404, -557, -39, -378, 302, 522, 198, 358, -214, 269, -203, -788, -281, -976, -64, -145, -721};
    vector<int> y = {581, 810, -221, 176, 841, 399, -20, 121, -804, -639, -936, 435, 978, -68, -962, 690, -621, 63, -729, 595, 588, -422, -706, -631, 194, -816, -907, 297, 408, 254, 26, 286, 481, -309, -858};
    vector<string> streets = {"NNYNYNNNNNNNYNYNNNYNNNNNNNNYNYYNNNN", "NNNNNYNNNNNNNNYNYNNNNYYYNNNNYNNNYNY", "YNNNNNNNNNNNYNYYNNYNNNYNYNYNNNYNNYN", "NNNNYNNNNNNNNYNNNNNNNYNNNYNNNYNNNNN", "YNNYNYNYYNNNNNNNYNNNNNNNNNNNYYYNNNY", "NYNNYNNNYNYYNNNYYNNNYNYNYNYNYNNYYNN", "NNNNNNNYNNNNYYNNNYNNNNYNNNYYNYNNYNN", "NNNNYNYNYYNYNNNNNYNNNNNNNYNNNNNNYYY", "NNNNYYNYNNYNYNYYNYNYNYNNYYYNNNYNYNN", "NNNNNNNYNNNNYYYNNYYYYNYNNNYNNNNNNNN", "NNNNNYNNYNNYNYNNNNYNNNNYNNNNYYYYNYN", "NNNNNYNYNNYNYNYNNYNNYYYNNYYNYNNNNYN", "YNYNNNYNYYNYNNYYNYNNYNNNNNYNYNNNNNN", "NNNYNNYNNYYNNNYNNYNNNYNNNNYNNNNYNNN", "YYYNNNNNYYNYYYNNNNYNNNNNNNNYNNNNNYN", "NNYNNYNNYNNNYNNNNNYNNNNNYYNNYNNNNNY", "NYNNYYNNNNNNNNNNNNNNNYNYNYNYNYNNNNN", "NNNNNNYYYYNYYYNNNNNYYYYNNNYYNNNNYNN", "YNYNNNNNNYYNNNYYNNNNNNNYNYNNYYNNYYN", "NNNNNNNNYYNNNNNNNYNNNYNYNNNNNYYYNYY", "NNNNNYNNNYNYYNNNNYNNNNNYYNNYYNNNYNN", "NYNYNNNNYNNYNYNNYYNYNNNNNNNYNYYNNYN", "NYYNNYYNNYNYNNNNNYNNNNNNNNNYYNYNNNN", "NYNNNNNNNNYNNNNNYNYYYNNNNNNNNNNNNYN", "NNYNNYNNYNNNNNNYNNNNYNNNNNNYNYNNNNY", "NNNYNNNYYNNYNNNYYNYNNNNNNNYNYYNNNNN", "NNYNNYYNYYNYYYNNNYNNNNNNNYNNNNYYYYY", "YNNNNNYNNNNNNNYNYYNNYYYNYNNNNNNNYYY", "NYNNYYNNNNYYYNNYNNYNYNYNNYNNNNNNNNN", "YNNYYNYNNNYNNNNNYNYYNYNNYYNNNNNYNNN", "YNYNYNNNYNYNNNNNNNNYNYYNNNYNNNNNYNN", "NNNNNYNNNNYNNYNNNNNYNNNNNNYNNYNNYNY", "NYNNNYYYYNNNNNNNNYYNYNNNNNYYNNYYNYN", "NNYNNNNYNNYYNNYNNNYYNYNYNNYYNNNNYNN", "NYNNYNNYNNNNNNNYNNNYNNNNYNYYNNNYNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3787.0027902663123;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {-110, -360, 634, 501, -667, -220, -582, -219, 355, -236, -117, 797, -435, 963, -247, -860, -414, -606};
    vector<int> y = {47, 823, 670, -542, -131, -65, -563, 787, -514, -958, -894, -117, -334, -41, -349, -750, 738, -912};
    vector<string> streets = {"NYNNNNNYYNNNNNNYYY", "YNYNYYNYNNYYYNNNNY", "NYNNYNNNYNYNYNNNNY", "NNNNNNNNYNNYNYYNNY", "NYYNNNNYNYNNNNYYYY", "NYNNNNYNNNNNYYYYYY", "NNNNNYNNYYNNNNNYYN", "YYNNYNNNNYNYNNNNYN", "YNYYNNYNNYNNYYYNNN", "NNNNYNYYYNNYYNNNNY", "NYYNNNNNNNNNNNNNYN", "NYNYNNNYNYNNYNNNNN", "NYYNNYNNYYNYNNNYNY", "NNNYNYNNYNNNNNYYYY", "NNNYYYNNYNNNNYNNYN", "YNNNYYYNNNNNYYNNYN", "YNNNYYYYNNYNNYYYNN", "YYYYYYNNNYNNYYNNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4444.968732808165;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {87, 894, -583, -485, 287, 979, 803, -898, 770, -782, 469, 855, 109, 50, 168, 337, 436, -496, 186, -127, 472, -105, -846, 864, 188, -358, -994, -787, 638, 825, -645, 891};
    vector<int> y = {83, 236, 828, 879, -492, -194, -40, -598, -27, -927, -949, -580, 449, -917, 975, 526, -911, -165, 658, -677, 889, -602, -851, 496, -367, -600, -963, -285, 281, 660, -309, 211};
    vector<string> streets = {"NNNNYYNNYYYYNNYNYNNNNNNNNYNNYNNY", "NNYYNYYNNNNYYNYYNNNYNNNYNNYYNNYN", "NYNNYNNNNYNYNYNNNYNNYYNNYNYNNNNY", "NYNNYYNNNNNNNNYNNNNNNNNYNNNNYNNN", "YNYYNNYNYYNNNYNNYNNNNYYYYYNNNNNN", "YYNYNNNNNNYNNNNNYNNNNYNNNNNNYNNN", "NYNNYNNNNYYNYNYNYNNNYNNNNNNNNYYN", "NNNNNNNNNNYYNYNNNYYNNNYNNNYNYYNN", "YNNNYNNNNNNNNNNNYYNYNNNNYNNNYNNN", "YNYNYNYNNNYNNNNNNNYNNNYNNYYNYNNN", "YNNNNYYYNYNNYYNYNNNNYNNYNNNNNNYN", "YYYNNNNYNNNNNNNYYNNNYNNNNNNNNNNN", "NYNNNNYNNNYNNYNYYYNNYNNNYNYYNYYN", "NNYNYNNYNNYNYNYYYYNNNYYYNYNYNNNY", "YYNYNNYNNNNNNYNYNYNNYYNNNYNNNYNN", "NYNNNNNNNNYYYYYNNNNYYYNNYNYNYNNN", "YNNNYYYNYNNYYYNNNNNNNNNYYYNYYNNN", "NNYNNNNYYNNNYYYNNNYYNNYNNYYNYNNN", "NNNNNNNYNYNNNNNNNYNNYYNNNNYNNNNN", "NYNNNNNNYNNNNNNYNYNNNNYNNNNNYNNY", "NNYNNNYNNNYYYNYYNNYNNNNNNNYNNNNN", "NNYNYYNNNNNNNYYYNNYNNNYNNYYNYNNN", "NNNNYNNYNYNNNYNNNYNYNYNNNYYNYYNY", "NYNYYNNNNNYNNYNNYNNNNNNNNNNYYNNN", "NNYNYNNNYNNNYNNYYNNNNNNNNYYNNNNN", "YNNNYNNNNYNNNYYNYYNNNYYNYNNNNNNN", "NYYNNNNYNYNNYNNYNYYNYYYNYNNYNYNN", "NYNNNNNNNNNNYYNNYNNNNNNYNNYNNNYN", "YNNYNYNYYYNNNNNYYYNYNYYYNNNNNNYY", "NNNNNNYYNNNNYNYNNNNNNNYNNNYNNNNY", "NYNNNNYNNNYNYNNNNNNNNNNNNNNYYNNN", "YNYNNNNNNNNNNYNNNNNYNNYNNNNNYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4047.893627032122;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {822, 7, 857, -226, -781, -641, -758, 487, -681, -316, -853, -844, 936, -645, 954, 531, 80, -885, 124, -656, -368, 286, 673, 153, 670, 663, -89, -921, 577};
    vector<int> y = {-263, 544, 127, 283, 410, -320, -304, -977, 186, 744, 18, 660, 107, -48, 655, 961, 733, -977, -518, -17, 197, -249, 644, 375, -33, 431, 756, -809, -673};
    vector<string> streets = {"NNYNNYNNNNNNNNNNNNNNNNNNYNYNN", "NNYNNYNNNNNNNNYNNYNNNNNNYNYNN", "YYNNNNYNNYNNNNYNYNYYYNYNYNNYN", "NNNNNNNYNNNNNNYYNNYNNNNNYYNNN", "NNNNNNNNNNNNNNNYNNYNYYNYYNNNN", "YYNNNNYNNYNNYYNNNNNNNNNNNNNNN", "NNYNNYNNNNYYNYNNNNNYYNYYNNNNY", "NNNYNNNNYNNYNNNYNYNNNNYNNNNNY", "NNNNNNNYNNNNNNNNNNNNNNNYNYNNN", "NNYNNYNNNNNNYNNYYNNYNYNNNNNNN", "NNNNNNYNNNNYNYYYNNNNNNYNNNNNY", "NNNNNNYYNNYNNNNYNNNNNNYNNYYYN", "NNNNNYNNNYNNNNNNYNNNNNNNYYYYN", "NNNNNYYNNNYNNNNNYNNNNNYNNNYNN", "NYYYNNNNNNYNNNNYNNNNNYNYNNNNN", "NNNYYNNYNYYYNNYNNNNNYNNNYYYNN", "NNYNNNNNNYNNYYNNNNNYNNNNNNYYY", "NYNNNNNYNNNNNNNNNNNNNYNNNYYYN", "NNYYYNNNNNNNNNNNNNNNNYNYNNNNN", "NNYNNNYNNYNNNNNNYNNNNNYNYNNNN", "NNYNYNYNNNNNNNNYNNNNNNNNNNYNN", "NNNNYNNNNYNNNNYNNYYNNNNNNNNYN", "NNYNNNYYNNYYNYNNNNNYNNNNNNNNY", "NNNNYNYNYNNNNNYNNNYNNNNNNNYNY", "YYYYYNNNNNNNYNNYNNNYNNNNNNNNN", "NNNYNNNNYNNYYNNYNYNNNNNNNNNNN", "YYNNNNNNNNNYYYNYYYNNYNNYNNNNN", "NNYNNNNNNNNYYNNNYYNNNYNNNNNNN", "NNNNNNYYNNYNNNNNYNNNNNYYNNNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4005.6244913862674;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {816, -177, 936, -308, 214, -23, 650, 121, -805, -564, 262, 54, -383, -641, 582, 911, -108, -394, -261, -434, 403, -839, 815, -222, -354, 628, 936, -477, 450, 434, 731, 990, 162, 247, -887, 904, 665, 629, 771, -753, 919};
    vector<int> y = {-326, -129, -52, 673, -702, 22, -93, 482, -127, -770, -731, 237, -602, 99, 315, 29, -950, 882, 513, 304, 933, 803, -712, -221, -467, -294, -795, 826, 266, -201, -677, 670, -18, -392, 124, 161, -115, -29, -241, 369, -46};
    vector<string> streets = {"NNYNNNNNNNNNNNNNYNNYNNNYNNYNNYYNNNYNNNYNY", "NNNNNNYNNNYYNNNYNNNNNYNYNNYNNYYNNNNYYYNNN", "YNNNNNYNYNNNNNNNNNNNNYNNYNNNYNNYYNNNNYNYN", "NNNNNNNNNNNNYNNYNNYNYYNYNNNNNYNYNNYNYNNYN", "NNNNNNYYNNNNNNYYYNNNYYNNNYNNNNNNYNYNNYNYY", "NNNNNNNYYYYNNNNNYYNNNNNNNNNNYNNYYNNNYNNYN", "NYYNYNNNNNYYNNNNNNYNYNNNNNYYNYNNNNNNNNYNY", "NNNNYYNNNNNYNNNNYNNYNNNNYNNYYNNNNNNNNNYNN", "NNYNNYNNNNNYNNNNNYNNNNNNNNYYYNYNNNNNYNNYN", "NNNNNYNNNNNNYNYNNNNNNNNNNYYNNNYNYNNNNYNNY", "NYNNNYYNNNNYNYNYYNYNNNNNYNNYNNNYNNYNYYNYN", "NYNNNNYYYNYNYYNNNYYNNNYNNNNNNNNYNYNNNNYYN", "NNNYNNNNNYNYNNNNNNNNYNYNNNNNNNYNNNYNYYYYN", "NNNNNNNNNNYYNNNNYNNYNYYYNYNYYNYNNNYNYNNYN", "NNNNYNNNNYNNNNNNYNNNNNNNYNNYNNNNYNYNNNYYY", "NYNYYNNNNNYNNNNNNYNNNNYNNNNNNNNYNNNNYYNNY", "YNNNYYNYNNYNNYYNNYNNNYYYYYNYNYYYYYNNYNNNN", "NNNNNYNNYNNYNNNYYNNNNYNNNYYNYNNNNNNNNNNYN", "NNNYNNYNNNYYNNNNNNNNNNNNNNYYNNNYNYNYNYNNY", "YNNNNNNYNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNYYNYNNNNNYNNNNNNNNYNYNNNNNNNNNYNNYYNNN", "NYYYYNNNNNNNNYNNYYNNYNNYNNYNNNYNNNNNNNNNY", "NNNNNNNNNNNYYYNYYNNYNNNNNNNNYNYNNYNNNNYYN", "YYNYNNNNNNNNNYNNYNNNYYNNYNYNNNNNYYNNNYYNN", "NNYNNNNYNNYNNNYNYNNNNNNYNNYNNNYNYNYNNYNNN", "NNNNYNNNNYNNNYNNYYNNNNNNNNNYNNNNNNYNYYNNN", "YYNNNNYNYYNNNNNNNYYNNYNYYNNYNYNNNNNNNNYNN", "NNNNNNYYYNYNNYYNYNYNNNNNNYYNYNNNNYNNNNNNY", "NNYNNYNYYNNNNYNNNYNNNNYNNNNYNNNNNNYYYNNYN", "YYNYNNYNNNNNNNNNYNNNNNNNNNYNNNYNNYNYNNYYN", "YYNNNNNNYYNNYYNNYNNNNYYNYNNNNYNNYNYYNNYNN", "NNYYNYNNNNYYNNNYYNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNYYNNNYNNNNYNYNNNNNNYYNNNNNYNNNNNYNYYN", "NNNNNNNNNNNYNNNNYNYNYNYYNNNYNYNNNNYNNNNNN", "YNNYYNNNNNYNYYYNNNNNNNNNYYNNYNYNNYNYNNYYN", "NYNNNNNNNNNNNNNNNNYNNNNNNNNNYYYNNNYNNNYNN", "NYNYNYNNYNYNYYNYYNNNYNNNNYNNYNNNYNNNNYNNN", "NYYNYNNNNYYNYNNYNNYNYNNYYYNNNNNNNNNNYNNNN", "YNNNNNYYNNNYYNYNNNNNNNYYNNYNNYYNYNYYNNNNN", "NNYYYYNNYNYYYYYNNYNNNNYNNNNNYYNNYNYNNNNNN", "YNNNYNYNNYNNNNYYNNYYNYNNNNNYNNNNNNNNNNNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3874.213828660196;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {766, 548, 845, -196, -70, -925, -147, -550, 740, 247, -45, 405, 396, -836};
    vector<int> y = {557, -708, -755, -144, -332, -154, -160, 383, 212, -538, -427, 858, -10, 704};
    vector<string> streets = {"NNNYNNNYNNNNNN", "NNYNNYYNNNNNYY", "NYNNYNYYNYNNYN", "YNNNNYNNNYNNYN", "NNYNNNYNNYNNNN", "NYNYNNYNNYNNNN", "NYYNYYNNYNYYNY", "YNYNNNNNNYNNYN", "NNNNNNYNNNNNNY", "NNYYYYNYNNNNYN", "NNNNNNYNNNNNNY", "NNNNNNYNNNNNYY", "NYYYNNNYNYNYNY", "NYNNNNYNYNYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4369.161003239534;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {495, 847, 139, 670, 454, -819, -672, -336, 340, -595, 29, 632, -23, -262, -100, -863, 955, 751, -880, 563, -237, 798, 276, 508, 128, -114, -906, 64, -472, 964, 103, -369, 8, 559, 650, -779, 386, -250, 910, 937, 978, -468, 856, -467, -757, 446, 699};
    vector<int> y = {186, 678, -983, 67, -590, 644, 492, -122, 49, 13, 91, 437, -746, 154, -829, 806, -724, -496, 828, 712, -249, 862, -569, -646, -319, 660, -584, 548, 324, 298, -349, 305, -851, 984, -168, 171, 572, 809, -840, -732, 557, 591, -808, -906, -505, -658, -9};
    vector<string> streets = {"NNYNNNNNNNNNNYNNNNNNNNNNYYNNNYNNNNYYNYNYNNYYNYY", "NNYYYYYYNNNNNYNNNNNYNYNNNNNNNNNNNNNNNNYNNYNNNYY", "YYNNNYYNNNNNNNNYNYNNNNNNYYNNNYNNNNNNYNNYNYNYYNN", "NYNNYNYNYYNNNNNNNYYNNNNNNNYYNNNNNNNNYNYNNNYNYYY", "NYNYNNNNYNNYYYNNYYNYYNYNNNYNNNNNYNNNNYNNYNNNNNY", "NYYNNNYYNNNNNNNNNYYNNNYNYNNNNNYNNNYNNYNNYYNNYNN", "NYYYNYNNYYYYNNYNYNYNNYNYYYNNNNNNYNNNNYNNNYNNNNN", "NYNNNYNNYNNNNYNNYYYNNYNYYYNYNNNNYNNYNNYYNNYNYYN", "NNNYYNYYNNNYNNNYYNNYYNNYYYNYNNNYNNYYNNYNNNNNNNN", "NNNYNNYNNNNYYNNYNYNNNYNYNYNYNYYNNNNNNYNNYNNNYYN", "NNNNNNYNNNNNNNNNYNYNYYYNYNNYNYNNYYYNNYNYNYNNNYY", "NNNNYNYNYYNNNNYNNYYNYYNNNNYNYNNNNNNNNNYNYYYNNNN", "NNNNYNNNNYNNNYNNNNNNNYYNNNNNNNYNYYNNNNNNYYYNNNN", "YYNNYNNYNNNNYNYYNYYNNYNNNYNNYNNNNNYYNNNNNNNNYNN", "NNNNNNYNNNNYNYNNYYYNNNNYNYNYYNNNNNNYYNYNNYNNNNN", "NNYNNNNNYYNNNYNNNYYYNNNNYNYNNNNNNYNNNYNNNYNNYNN", "NNNNYNYYYNYNNNYNNNNNNNNNNYYNNYNNNNNYNNNYYYNNNNY", "NNYYYYNYNYNYNYYYNNYNYYNNNNYNYNNYNNNNNNNNNNNNNNN", "NNNYNYYYNNYYNYYYNYNNNYNNYNYYNNNYNNNNYYYNNNNNNNN", "NYNNYNNNYNNNNNNYNNNNYNNNNYNNNNNNYNYYNNNYNNYNNNN", "NNNNYNNNYNYYNNNNNYNYNNNNNNYYNYYYNNNNNNNNNYNNNNN", "NYNNNNYYNYYYYYNNNYYNNNNYYNNYNYNYNNNNNNNNNYNYNNN", "NNNNYYNNNNYNYNNNNNNNNNNNYNNNNNNYYNNNYNNNYNYNYNY", "NNNNNNYYYYNNNNYNNNNNNYNNNNYYNNYNNNYNYNNNNYNNNNY", "YNYNNYYYYNYNNNNYNNYNNYYNNNNNNYNYNYNNNYNNNNNYYYY", "YNYNNNYYYYNNNYYNYNNYNNNNNNYNNNNNNNNNNYNNNNNYNYN", "NNNYYNNNNNNYNNNYYYYNYNNYNYNNNNNNNNNYNNNNNYNYNNY", "NNNYNNNYYYYNNNYNNNYNYYNYNNNNNYNNYYYNNNNNYNYNNNN", "NNNNNNNNNNNYNYYNNYNNNNNNNNNNNYNNYYNNNYNNNYYNNNN", "YNYNNNNNNYYNNNNNYNNNYYNNYNNYYNNNNNNNNYNNYNNNNNN", "NNNNNYNNNYNNYNNNNNNNYNNYNNNNNNNNNNNNNYNYNNNNYNN", "NNNNNNNNYNNNNNNNNYYNYYYNYNNNNNNNNNNYYNYNNNNYYNY", "NNNNYNYYNNYNYNNNNNNYNNYNNNNYYNNNNNYNNNNNYNNNNNN", "NNNNNNNNNNYNYNNYNNNNNNNNYNNYYNNNNNYNYNNNYNYNNNN", "YNNNNYNNYNYNNYNNNNNYNNNYNNNYNNNNYYNNNNNYNNNYYYN", "YNNNNNNYYNNNNYYNYNNYNNNNNNYNNNNYNNNNYNNNNNYYNNN", "NNYYNNNNNNNNNNYNNNYNNNYYNNNNNNNYNYNYNNNNNNNNNNN", "YNNNYYYNNYYNNNNYNNYNNNNNYYNNYYYNNNNNNNYNNNNYNNY", "NYNYNNNYYNNYNNYNNNYNNNNNNNNNNNNYNNNNNYNNYNYNNNY", "YNYNNNNYNNYNNNNNYNNYNNNNNNNNNNYNNNYNNNNNNYNNNNN", "NNNNYYNNNYNYYNNNYNNNNNYNNNNYNYNNYYNNNNYNNNYNNNN", "NYYNNYYNNNYYYNYYYNNNYYNYNNYNYNNNNNNNNNNYNNNYYYN", "YNNYNNNYNNNYYNNNNNNYNNYNNNNYYNNNNYNYNNYNYNNNNNN", "YNYNNNNNNNNNNNNNNNNNNYNNYYYNNNNYNNYYNYNNNYNNNNN", "NNYYNYNYNYNNNYNYNNNNNNYNYNNNNNYYNNYNNNNNNYNNNNN", "YYNYNNNYNYYNNNNNNNNNNNNNYYNNNNNNNNYNNNNNNYNNNNN", "YYNYYNNNNNYNNNNNYNNNNNYYYNYNNNNYNNNNNYYNNNNNNNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4057.7068634572743;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {315, 948, 11, -140, 838, 453, -835, -231, -551, 604, -68, 344, -480, 979, -780, -224, 900, -473, 85, -78, -535, -342, 286, 295, 705, -862, -486, 454, 868, 489, 744, -713, 433, -715, -880, -439, -295, 274, 884, -413};
    vector<int> y = {-540, 253, 534, -147, -656, 535, 166, -582, 659, 138, 615, -840, -912, 73, -84, -889, -991, -825, -954, 1, 854, -664, -385, 468, 812, 640, 422, -166, -834, 362, -664, -766, 38, -456, 180, -349, -523, -340, 781, -691};
    vector<string> streets = {"NNNNNNYYNNNNNNYNNYNNYNNNYNNNNYYNNNNNNNNN", "NNYNNNYNNNNNNNNNNYNNNYNYNNNNYNNNNNNYNNYN", "NYNNNYNNNYNNNYNNNNNNNYYNNNNYYNNNNNNNNNNN", "NNNNYNNNNNNNNYNNNNYNNNNNNNNYNNNYYNNYNNNN", "NNNYNNNYYNYNNNNNNYYYNNNNYYNNNNYYNNNNNNNY", "NNYNNNNNNNNYNNNNYNNNNNNNNNNNYNYNNNNYYNNN", "YYNNNNNNYNYNYNYNYNNNNNNYNNNYNNYYYNNNNNNN", "YNNNYNNNYNNNYNNNNYYNYNNNNNNNNYYNYNYNNNNN", "NNNNYNYYNNNNNNNNYYNNYNYNYNYNNNNNYNNNYNNN", "NNYNNNNNNNYNNNNYNNYNNNNNNNNYNNNNNNNNNNYN", "NNNNYNYNNYNNNNNYNNNNNNNNNYNNYYNYNNNYNYYN", "NNNNNYNNNNNNNYYYNNNNNNNNNNYYNNYNYYYNNNYN", "NNNNNNYYNNNNNNNNNYNNYNYNNNNNYNNNNNYNNNNN", "NNYYNNNNNNNYNNNYNNNYNYYNYNNYNNNYYNYNYYYN", "YNNNNNYNNNNYNNNYNNNYNYNNYNYNNNNNNNYYYYNN", "NNNNNNNNNYYYNYYNYNYYNNNNNYNNYNNNNNNYNNYN", "NNNNNYYNYNNNNNNYNYYYNNYYNNNNNNYNYNNYNYYN", "YYNNYNNYYNNNYNNNYNYNYYNYNYNYNNNNYYNYYNYN", "NNNYYNNYNYNNNNNYYYNNYNNNNNNNNNNNNNNYNYNN", "NNNNYNNNNNNNNYYYYNNNYYNNYYNNYNYNNNNNNYYN", "YNNNNNNYYNNNYNNNNYYYNNYNNYNYYYNNNYNYNNNY", "NYYNNNNNNNNNNYYNNYNYNNYNNNNNYNNNNNYNNNYN", "NNYNNNNNYNNNYYNNYNNNYYNYNNYNYNNNYNNNNNNY", "NYNNNNYNNNNNNNNNYYNNNNYNNNYYYNYNYNNNNYYN", "YNNNYNNNYNNNNYYNNNNYNNNNNNNNNNNNNNYNYNNY", "NNNNYNNNNNYNNNNYNYNYYNNNNNYYNYNYNNNNNNNN", "NNNNNNNNYNNYNNYNNNNNNNYYNYNYNNNNYNYNYNYN", "NNYYNNYNNYNYNYNNNYNNYNNYNYYNNNNNNNYNNNNN", "NYYNNYNNNNYNYNNYNNNYYYYYNNNNNYNYNYNNYNNY", "YNNNNNNYNNYNNNNNNNNNYNNNNYNNYNNYYNYNNYNN", "YNNNYYYYNNNYNNNNYNNYNNNYNNNNNNNNYNNYNYNY", "NNNYYNYNNNYNNYNNNNNNNNNNNYNNYYNNNYNNNNNY", "NNNYNNYYYNNYNYNNYYNNNNYYNNYNNYYNNYNYNNNN", "NNNNNNNNNNNYNNNNNYNNYNNNNNNNYNNYYNNNNNNY", "NNNNNNNYNNNYYYYNNNNNNYNNYNYYNYNNNNNNNNNN", "NYNYNYNNNNYNNNYYYYYNYNNNNNNNNNYNYNNNNNYN", "NNNNNYNNYNNNNYYNNYNNNNNNYNYNYNNNNNNNNYYY", "NNNNNNNNNNYNNYYNYNYYNNNYNNNNNYYNNNNNYNNY", "NYNNNNNNNYYYNYNYYYNYNYNYNNYNNNNNNNNYYNNN", "NNNNYNNNNNNNNNNNNNNNYNYNYNNNYNYYNYNNYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3897.655250312472;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {-323, -572, 682, -375, 447, 788, 437, 323, 928};
    vector<int> y = {-686, 212, 404, -533, 998, 140, -223, 333, 342};
    vector<string> streets = {"NYYYYNYYY", "YNYYYYYYY", "YYNYYYYYY", "YYYNYYYNY", "YYYYNNYYY", "NYYYNNYYY", "YYYYYYNYY", "YYYNYYYNY", "YYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2551.694131861691;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {112, -497, -879, -191, 251, 241, -383, -883, -977, -389, -553, 375, -894, 3, -430, -328, -30, -765, -637, -240, -129, 209, -684, -789, -763, 282, -576, -610, -340, 317, -469, 963, -965, -241, -935, -428, 121, 428, -201};
    vector<int> y = {455, -153, 200, -343, -2, -442, -557, -902, -100, -65, -280, 161, -93, 937, 444, 500, 536, -86, -939, -264, -597, -638, 550, 149, -197, -82, -762, -341, 564, 530, -784, 733, 721, -25, 172, 206, -217, -456, -479};
    vector<string> streets = {"NYYYNYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YNYYNYYYYYYYYYNYNYYYYYYYNYYYYNYYYYYYYYY", "YYNYYYYNYYYYYYYYYYYYYNYYNYYYYNYYYYYYNNY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYNYY", "NNYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYNNY", "YYYYYNYYYYNYYYYYNYYYYYYYNYYYYYYYYNYYNYY", "YYYYYYNYYYYYYYYYYYYYYYYYNNYYYYYYYYNYYYY", "YYNYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNNYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYNNYNYYYYYYYYYYYYYYYNYYNYYNYYYYY", "YYYYYNYYYYNYYYYNNNYYYYNYYYYYYYYYYYYNYYY", "NYYYYYYNYNYNYYYNYYYYYYYYYYYYNYYYYYYYNYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYNYYNYYYYYYYYYYNNYYY", "YNYYYYYYYYYYYYNYNYNYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYNNYYYNYYYYYYYYNYYYYYYYYYYYYYY", "YNYYYNYYYYNYYYNYNNYYNYYYYYNYYYYYYYYYNYY", "YYYYYYYYYYNYYYYYNNYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYNNYYNYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNNYYNYYYYYYYYYYYYYYYN", "YYYYYYYYYYYYYNYYNNYYNYYYNYYYYYYYYYYYYYN", "YYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYNYY", "YYYYYYYYYYNYYYYYYYNNYYNYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYNYYYYYNYYNYYYYYN", "YNNYYNNYYYYYYYYNYYYYNYYYNYNYYYYYYYYYNYY", "YYYYNYNYYYYYYYYYYYYYYYYYYNYNYNYNYYYYYYY", "NYYYYYYYYYYYYYYYNYYYYYYYNYNYYYYYYYYYYYY", "YYYYYYYYYNYYNYYYYYYYYYYYYNYNYYYYNYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YNNYYYYYNYYYYYYYYYNYYYNNYNYYYNYYNYNYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYNY", "YYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYNYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYNYNYYYNYNYYNYYYYYY", "YYYNNNYYYNYYYYYYYYYYYYYYYYYYYYYYYNNYNYY", "YYYNYYNYYYYYYNYYYYYYYYYYYYYYYNYYYNNYYYY", "YYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYNYNY", "YYNNNNYYYYYNYYYYNYYYYNYYNYYYYYYYYNYYNNY", "YYNYNYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYNNNY", "YYYYYYYYYYYYYYYYYYYNNYYNYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3677.1460859264093;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {-950, -69, 215, -36, -687, 153, 490, 165, -556, 717, -354, 381, 182, -611, 972, -862, -390, -132, -332, -958, 214, -978, 249, -301, -280, -131, -480, 840, -204, -398, -346, -929, -520, -734, 370, -813, 690};
    vector<int> y = {347, -890, 398, 488, -349, -825, 201, 742, -613, 145, -75, 919, -495, -35, 63, -40, 670, -959, -439, -245, 671, 58, -182, 15, 824, -957, -979, 619, 6, 408, -960, 622, 656, -854, 379, -54, -431};
    vector<string> streets = {"NYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYNYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYNNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "NYYNYNYYYYYNNYYYYYYYYYYYYYYYYYYYNYYYY", "YYYNYYNYYNYYYYNYNYYYYYYYYYYYYYNYYYYYY", "YYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYNY", "YYNYYYYYNYYYYYNYYYYYYYYYYYYYNYYYYYYYY", "YNNYYYNYYNYYYYYNYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYNYNYYYYYYNYNYYYYNYYYYYYY", "YYYYYNYYYYYNYYNYYYNYYYYYYYYNYNYYYYYYY", "YYYYYNYYYYYYNYYNYYYYYYYYYYYYYYYNYYYNY", "YYYYYYYYYYNYYNYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYNYNYYNYYNYYYYYYYNNYNYYYYYYYYYYY", "YYYYYYYYYNNYNYYNYYYYYNYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYNYYYYYYYNYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYNYYYYY", "YYYYYYYNYYYNYYYYYYNYYYYYNYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYY", "NYYYYYYYYNYYYNYYYYYYNNYYNYYYYYYYYYYNY", "YYYYYYYYYYYYYYYNYYYYNNYNYNYYYYYNYYYYY", "YYYYYYYYYYNYYYNYYYYYYYNYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYNYNYYYYYYYYYYYYN", "YYYNYYYYYYNYYYYYNYNYNYYYNYYYYYYYNYYYY", "YYYYYYYYYYYYYYNYYYYYYNYYYNYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYY", "YYYYYYYYYYYNYYYYYNYYYYYYYYYNYYYYNYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYNYNNYYYYY", "YYYYYYYYYYNNYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYNYNYNYYYY", "YYYYYYYYYYYYNYYYYNYYYNYYYYYYNYYNYYYYY", "YYYYYNYYYYYYYYYYYYNYYYYYNYYNYYNYNYYYY", "YYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYNYY", "YYYYYYYNYYYYNYYYYYYYNYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3427.2574394707076;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {-719, -16, 237, 821, -395, 961, 524, -398, -731, -563, -586, -660, -745, -647, 309, -628, -422, 492, 153, -146, 473, 853, 753, 298, 739, -591, -265, -76, 864, 289, 422, -860, 190, -852, -475, -833, -475};
    vector<int> y = {-564, 893, -662, -566, 27, 822, -480, 162, -707, 585, 318, -609, 112, 618, 807, -105, 453, 192, -137, -632, -446, 483, 811, -97, -332, 866, 4, 631, 716, 17, 333, 583, 981, 536, -606, 142, 754};
    vector<string> streets = {"NYYYYYYYYNYYYNYYYYYYYNYNYYYYYYYYYYYNY", "YNYNYYYYNYYYYYNYYYYYNYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYNYYYYYYYNYYYYYYYNYYYYYYYY", "YNYNYYYYYYYYYYNYYYYYYYYNYYYYYYYYYNYYY", "YYYYNYYYYYYYYNNYYNYYYYYYYYYYYYNYYYYYY", "YYYYYNYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYNYYYYYYYYNYYNYYNYYYYYYYYYYYYYYY", "YYYYYYYNYNYYNYYYYYYYYYYYYNYYNYNYYYYYY", "YNYYYYYYNYYYYYYYYYYNYYNNYYYYYNNYNYYYY", "NYYYYYYNYNYYYYYYYYYYYYYYYYYNYYYYYYNYY", "YYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYNY", "YYNYYYYNYYYNNYYYYYNYYYYYYNYYYYNYNYYYY", "NYYYNYYYYYYYYNYNYYYYYYYYYYYYYYYNYYYYY", "YNYNNNYYYYYYYYNYNYYYYYNYYYYYYNYYYYYYY", "YYYYYYNYYYYYYNYNYYYYNYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYNYYYYYNYNNYYYYYYNYYNYYYYNY", "YYYYYYNYYYYYNYYYYYNYYYYYNYNYYYNYYYYYY", "YYYYYYYYNYYYYYYYYNYNYYYYYYYYYNYYYYYYY", "YNNYYYYYYYYYYYYNYNYYNYYYYNNYYYYYYYYYY", "NYYYYYNYYYYYYYYYYYYYYNYYYYNYYYNYYYYNY", "YYYYYYYYNYYYYYNYYYYYYYNYYYYYYYYYYYYYN", "NYYNYYYYNYYYYYYYYYYYYYYNYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYY", "YYYYYYYNYYNYNYYYYYYYNYYYYNYYYYYNNYYYY", "YYYYYYYYYYYYYYYYYYNYNNYYYYNYNNYYNYYNY", "YYYYYYYYYNYYYYYYYNYYYYYYYYYNYYYYYYYYY", "YYNYYNYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYY", "YYYYYYYYNYYYYYNYYYYNYYYYYYNYYNNYNYYYN", "YYYYNYYNNYYYNYYYYNNYYNYNYYYYYNNYYNNYY", "YYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYNYYYYY", "YYYYYYYYNYYYNYYYYYYYYYYYYNNYYNYYNYYNY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYNYY", "NYYYYYYYYYYNYYYNYNYYYNYYYYNYYYYYNYYNY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3632.913666892636;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {-347, -50, -435, -805, -772, 707, 354, 97, -494, 757, -801, 62, -239, 965};
    vector<int> y = {-728, -537, 503, -294, 843, 95, 488, 451, 857, 894, -488, 190, -620, 537};
    vector<string> streets = {"NYYYYYYYYYYYYY", "YNYYYYYYYYYYYY", "YYNNYYYYYYNYYY", "YYNNYYYYYYYYYY", "YYYYNYYYYYYYYY", "YYYYYNYYYYYYYY", "YYYYYYNNYYYYYY", "YYYYYYNNYYNYYY", "YYYYYYYYNYYYYY", "YYYYYYYYYNYYYY", "YYNYYYYNYYNYYY", "YYYYYYYYYYYNYY", "YYYYYYYYYYYYNY", "YYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3057.855619839972;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {-661, -833, 331, 780, -64, -344, -246, 315, -873, 228, 970, 209, -148, -313, -591, -470, 184, -980, 506, 852, 453, -172, 241, 11};
    vector<int> y = {548, -388, -690, 961, -573, 183, 804, -620, 631, 257, 422, -845, 955, 22, -545, 730, 55, 749, 812, 880, 860, 938, -423, -209};
    vector<string> streets = {"NYYYYYYYYYNYYYYYYYYYYYYY", "YNYYYYNYYYYYYYYYYYYYYYYY", "YYNYYYYYNYYYYYYYYYYNYYYY", "YYYNYYYYYYYYYYYYYYYYYNYN", "YYYYNNYYYYNYYYYYYYYNYYYY", "YYYYNNNYYNYNYYYYYYYYYYYY", "YNYYYNNYYYYYYYYYYYYYNYYY", "YYYYYYYNYYYYYYYNYNYYYNYY", "YYNYYYYYNNYYYYYYYYYYYYNY", "YYYYYNYYNNYYNYYNYYYYYYYY", "NYYYNYYYYYNYYYYYYYYYYYYY", "YYYYYNYYYYYNYYYYYYNYYYYY", "YYYYYYYYYNYYNYYYYYYYYYNY", "YYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYNYYY", "YYYYYYYNYNYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYNYYNNYNY", "YYYYYYYNYYYYYYYYYNNYYYNY", "YYYYYYYYYYYNYYYYYNNYNYYY", "YYNYNYYYYYYYYYYYNYYNYYYY", "YYYYYYNYYYYYYYNYNYNYNYYY", "YYYNYYYNYYYYYYYYYYYYYNYY", "YYYYYYYYNYYYNYYYNNYYYYNY", "YYYNYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3535.948931865618;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {-569, 827, 871, 509, 349, -231, -209, 634, 827, -228, 731, 263, -335, 280, 163, -760, 101, 131, -362, 687, -481, -591, -29, 359, -598, -322, 100, 941, -533, -980, 794, -368, 624, 469, 618, 825, -227, 280, -366, -91, 104, -557, 204};
    vector<int> y = {-300, -598, -547, 428, -547, -253, 295, -24, 892, -535, -67, 31, 291, 321, 260, 318, -655, 668, -548, -960, -397, 362, -806, -190, 66, 457, 785, 32, 519, -614, 931, -836, -599, -126, -523, -995, -817, 697, -604, 185, 289, -146, -658};
    vector<string> streets = {"NYYYYYYYYNYYYYYYNNYYYNYYYYYYYYYYYNYYYYYYNYY", "YNYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYNYYYYYYYYYNYYYYYYNYYYYYNYYNYYYYYYYYYNYYNN", "YNYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYNYYN", "YYYYNYYYNYYYYYNYYYYYNYYYYYYYYYYNYYNYYYYYYYY", "YYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYNYYNYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYNYYYYNYYYNYNYYYYNYYYYYNYY", "YYYYNYYYNYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYNY", "NYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYNNYYYYYYYYNYNYYYYYYNYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYNYYYNYYYYYNYYYYYYNYNYYYYYYYYYYNNYYYNYYYYY", "YYYYYYYYYYYYYNYYYYYYYYNYYYYYYNYYYNNYYYYYYYY", "YYYYNYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYNYNYYYYYYYYYYYYYNYYYYYYYYYYY", "NYYYYYYYNYNYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYY", "NYYYYYNYYYYYYYYNYNYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYNYYYYYYYYNYNYYYYYYYNYYYYY", "YYNYYNYYYYYYNYYYYYYNNYYYYYYYYYYYYYYYNYYYYYN", "YYYNNYYYYYYYYYYYYYYNNNYYYYYYYNYYYYYYYYNYYYY", "NYYYYYYYYYYYNYYYYYYYNNYYYYYYYNYYYNYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYNYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYNYYYYYYN", "YYNYYYYYYYNYYYYYYYYYYYYYYNNYYYNYYYYYYYYYYNY", "YYYYYYYYNYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYY", "YYYYYYYNYYNYYYNYYYNYYYYYYYYNYYYYYYYYNYYYYYY", "YYNYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYY", "YNYYYYYNYYYYYNYYYNNYNNYYYYYYYNYNYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNNYYYYNYYYYYYYYNYYN", "YYYYNYYYYYYYYYYNYYYYYYNYYYYYYNYNYNYYYNYYYYY", "YYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYNYYYYYYY", "NYYYYYYYYYYYNNYYYYYYYNYYYYYYYYYNYNYYYYYYYYY", "YYYYNNYNYYNYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYNNYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYNYNYYYYYNNYYYYYY", "YYYYYYYYYYYYNYYYYYNYYYYYYYYYNYYNYYYYYNYYNYY", "YYNYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYNNYYN", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNNYYY", "NYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYNYY", "YYNYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNY", "YYNNYYYYYYYYYYYYYYYNYYYYNYYYYYNYYYYYYYNYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3765.2550556728984;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {56, 0, 586, 585, -976, 468, 791, 861, 970, 876};
    vector<int> y = {43, -83, 955, 219, 440, 307, 837, -223, 736, 525};
    vector<string> streets = {"NYNYYYYYYY", "YNYYNYYYYY", "NYNYYYYYYY", "YYYNYYYYNY", "YNYYNNYYYY", "YYYYNNYNYY", "YYYYYYNYYN", "YYYYYNYNYY", "YYYNYYYYNY", "YYYYYYNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2799.128111787516;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {39, -69, -379, -117, 957, -397, 325, -58, 159, -870, 320, -165, -108, -27, 803, 614, 358, -278, -938};
    vector<int> y = {872, 83, -510, 32, 631, 664, -330, -996, -957, -67, 205, 20, -284, -712, 940, 661, -105, 672, -938};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYNYYYY", "YYNYYYYYYYYYYYYYYYY", "YYYNYYNYYYYYYYNYYYY", "YYYYNNYYNYNYYYYYYYY", "YYYYNNYYYYYYNYNYYYY", "YYYNYYNYYYYYNYYYYYN", "YYYYYYYNYYYYYYNYYYY", "YYYYNYYYNYYNYYYYYYY", "YYYYYYYYYNNYYYYYNYY", "YYYYNYYYYNNYYYYYYNY", "YYYYYYYYNYYNYYYNYYY", "YYYYYNNYYYYYNYYYYYY", "YYYYYYYYYYYYYNYYYYY", "YNYNYNYNYYYYYYNYYYY", "YYYYYYYYYYYNYYYNYYY", "YYYYYYYYYNYYYYYYNNY", "YYYYYYYYYYNYYYYYNNY", "YYYYYYNYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3399.164591130485;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {994, 493, 147, 324, 68, -901, 927, -830, -638, 80, -343, -766};
    vector<int> y = {370, 516, -14, -644, -552, 133, 615, 722, -307, 259, -362, -593};
    vector<string> streets = {"NYYYYYYYYYYY", "YNYYYYNYNYYY", "YYNYYYYYYNYY", "YYYNYYYYYYNN", "YYYYNNYYYNNY", "YYYYNNNYYYYY", "YNYYYNNYYYNY", "YYYYYYYNYYYY", "YNYYYYYYNYYY", "YYNYNYYYYNYY", "YYYNNYNYYYNY", "YYYNYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3290.2508496789715;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {604, -860, 838, -222, 633, 211, -675, -964};
    vector<int> y = {687, -613, -191, -85, -702, -488, 378, -522};
    vector<string> streets = {"NYNYYYYY", "YNYYYYYY", "NYNYYYNY", "YYYNYYYY", "YYYYNYYY", "YYYYYNYY", "YYNYYYNY", "YYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3025.776601779461;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {-104, 380, 845, -125, -996, 881, -933, 930, -104, 696, 848, 1000, -714, -660, 852, -907, 214, 661, -764, 573, -746, -492};
    vector<int> y = {259, 1000, 5, 951, 44, 638, -4, 72, -66, 571, 204, 400, -23, 465, -820, 446, 350, -514, 919, 708, 732, -2};
    vector<string> streets = {"NNYNYYNYYYYYYYYYYYYYYY", "NNYYYYYYYNYYYYYYYYNYYY", "YYNYYYYYYYYYYNNYYYYYNN", "NYYNYYYYYYYYYNYNYYYYYY", "YYYYNYYYYYYYYYYYYNYNYY", "YYYYYNYYNYNNYYYYYYYYYY", "NYYYYYNYYYNYYYYYNYYYNY", "YYYYYYYNNYYYYYYYYYYYYY", "YYYYYNYNNYYYYYYNYYYYYN", "YNYYYYYYYNNYYYNYYYYYYY", "YYYYYNNYYNNYNNYYYYNYYY", "YYYYYNYYYYYNYYYYYYYYNY", "YYYYYYYYYYNYNYYYYYYYYY", "YYNNYYYYYYNYYNYNYNYYYY", "YYNYYYYYYNYYYYNYYYYYYY", "YYYNYYYYNYYYYNYNYYYYNY", "YYYYYYNYYYYYYYYYNYNYYY", "YYYYNYYYYYYYYNYYYNYYYY", "YNYYYYYYYYNYYYYYNYNYYY", "YYYYNYYYYYYYYYYYYYYNNY", "YYNYYYNYYYYNYYYNYYYNNY", "YYNYYYYYNYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3422.6807771072126;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {-1000, -622, -243, -863, 868, -801, 5, 163, 713, -951, 994, -302, -525, -956, -673, 422, 29, -582};
    vector<int> y = {-103, -119, 577, -412, -994, 240, -414, -2, 452, -33, -891, -595, 830, -903, -918, 240, 861, 351};
    vector<string> streets = {"NYYYYYNYYYYYYNYYYY", "YNYYYYNYYYNYYYYYYY", "YYNYYYNYNYYNYYYNYY", "YYYNYYYYNYYYYYYYYY", "YYYYNYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYN", "NNNYYYNYNYYNYYYYYY", "YYYYYYYNYYYNYYYYYY", "YYNNYYNYNYYYYYYYYN", "YYYYYYYYYNYYYYYYYY", "YNYYYYYYYYNYYYYYYY", "YYNYYYNNYYYNYYYYYY", "YYYYYYYYYYYYNYNYYY", "NYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYNYNYYY", "YYNYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYNY", "YYYYYNYYNYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3801.567587269678;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {821, 373, -746, 243, -638, -747, 768, 464, 518, -255, -200, 106, 979, -288, 85, -554, 832, -263, -970, -82, 376, 268, -434, -719, 237, -983, -581, 512};
    vector<int> y = {554, 791, -826, -154, -586, 196, 749, 598, -993, -340, 914, -81, -746, 894, 513, -269, 206, -545, -706, -498, 720, 177, 724, -4, 729, -777, 176, -640};
    vector<string> streets = {"NYYYYYYYYYYYYYYYNYYYNYYYYYNY", "YNYYYYYNYYYYNYNYYYYYYNYYYYYY", "YYNYYYYYYYYYYYYYNYYYYYYNNYYY", "YYYNYYYYYYYYYYNYYYYYYYNYYYYY", "YYYYNYNNYYYYYYYYYYYYYYYYYYNY", "YYYYYNYYYYYNYYYYYYYYYYYYNYNY", "YYYYNYNYYYYYYYNYYYYYYYNYYYYY", "YNYYNYYNYYYYYYNYYYYYYYYNYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYNYNYNYYYYYYYYYYYYY", "YYYYYNYYYYYNYYYYYYYYYYYNYYYY", "YNYYYYYYYYNYNYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYNYNNYYYNYYNYYYY", "YNYNYYNNYYNYYYNYNYYYYNYYYYYY", "YYYYYYYYYYYYYNYNYYYYYYYYYNYN", "NYNYYYYYYYYYYNNYNYNYNYYYNYYY", "YYYYYYYYYYYYNYYYYNYYYYNYYYYY", "YYYYYYYYYYYYYYYYNYNYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYY", "NYYYYYYYYYYYYNYYNYNYNYYYNYYY", "YNYYYYYYYYYYYYNYYYYYYNYYYYYY", "YYYNYYNYYYYYYYYYYNYYYYNYYYYY", "YYNYYYYNYNYNYNYYYYYYYYYNYYYY", "YYNYYNYYYYYYYYYYNYYYNYYYNYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYNYY", "NYYYNNYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3734.848929729131;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {-304, -331, 137, -906, 755, -626, -582, 851, 862, -817, -804, 38, 264, -25, -839, 929, -886, 107, -543, 38, -597, -21, 103, -249, 786, -990, 286, 696, 579, 498, -180, 834, 603, 468, -545, 747, -279, -733, 213};
    vector<int> y = {-593, 695, -288, -638, 73, -364, -751, 106, -311, -449, -873, 157, -56, 506, 943, 618, -943, 439, 991, -831, 973, -14, -153, 118, -298, -710, -435, 158, -277, 396, 431, 329, -83, 653, 873, 6, -988, 420, -169};
    vector<string> streets = {"NYYNNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYY", "YNYYYYYYYYNYNYYYYYYYYYYYYNYYYYYYYYYYYNY", "YYNYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYY", "NYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYNYYYYNYYYYYYNYYYYNYYYYYYYYYYYYNYYYY", "YYYYYNYYYNYYYYYYYYNYNYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYNYYYYNYNYYYYYYYYNYYYY", "YYYYYYYNYYYYYYNYYYYYNYYYNNYYYYNYYYNYYYN", "YYYYYYYYNNYYNYYYYYYYYYYYNYYYYYYYYYYNNNY", "YYYYNNYYNNNYYYNYYYYYYYYYYYYYYYNYYYYYYNY", "YNYYYYYYYNNYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYNYYNYY", "YNYYYYYYNYYYNYYYYYYYYYYYNYYNNYYYYYYYYYY", "YYYNYYYYYYYYYNYYYYYYYYNYYNYYYYYYYYYYYYY", "YYYYYYYNYNYYYYNNYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYNNYYNNYYYYYYYYYYYYYYYYYYY", "YYNYNYYYYYYYYYYYNNYYYYYYNYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYNNYYYYYYYYYYYYNYYYYYYYY", "YYYYYNNYYYYYYYYNYYNYYYYYYYYNYYYYYYYYYYY", "YYNYYYYYYYYYYYYNYYYNYYYYNYYYYYYYYYYYYYY", "YYYYYNYNYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYY", "YYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYNYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYY", "NYYYYYYNNYYYNYNYNYYNYYYNNYNYYYYYYYYYNYY", "YNYYYYNNYYYYYNYYYYYYYYYYYNYYYYYYNNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYNYYYY", "YYYYYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYNYNYYYYYYYNYYYYYYYYYYYYNYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYNYYNYYYYYYNYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYNYNYYY", "NYYYNYNNYYYYYYYYYYYYYYYYYYNYYYNYYYNNYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNNNYYY", "YYYYYYYYNYYNYYYYNYYYYYYYNYYYYYYYYYYYNYN", "YNYYYYYYNNYYYYYYYYYYYNYYYYYYYYYYYYYYYNY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3662.604755325647;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {-637, -882, 599, 889, -961, 304, -277, 54, -997, 916, 289, -889};
    vector<int> y = {674, 949, 908, -561, 812, 399, 401, 672, -425, -779, -653, 273};
    vector<string> streets = {"NYYYYYYYYYYY", "YNYYYYYYYYYY", "YYNYYYYYNYYY", "YYYNYYNYYYYY", "YYYYNNYYNYYN", "YYYYNNYYYYYY", "YYYNYYNYYYYY", "YYYYYYYNYYYY", "YYNYNYYYNYYY", "YYYYYYYYYNYY", "YYYYYYYYYYNY", "YYYYNYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3474.9362282079583;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {143, 120, 360, 646, -204, 931, 482, 775, 991, -757, 486, -896, 530, -622, 687, 365, -725, 9, 784, -512, 824};
    vector<int> y = {792, -981, -985, 599, -291, -125, -323, -930, 549, -597, -786, -381, -317, -237, -31, 533, 712, 724, -60, -947, 311};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYY", "YNYNYYYYYYYYYNYYYYYNY", "YYNYYYYYYYYNYYYYYNNYY", "YNYNYYYYYYYYYYYYNNYYY", "YYYYNYYNYYYYNYYYYYNYY", "YYYYYNYYYYYYYYYYNYYYY", "YYYYYYNYNYYNYYNYYYYNY", "YYYYNYYNYYYYYYYNYNYYY", "YYYYYYNYNYYYYYYYYYYNY", "YYYYYYYYYNYNYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYY", "YYNYYYNYYNYNYYNYYNNYN", "YYYYNYYYYYYYNYYYYYYYY", "YNYYYYYYYYYYYNYYYYYNY", "YYYYYYNYYYYNYYNYNYNYY", "YYYYYYYNYYYYYYYNYYYYY", "YYYNYNYYYYYYYYNYNYYYY", "YYNNYYYNYYYNYYYYYNYYY", "YYNYNYYYYYYNYYNYYYNYY", "YNYYYYNYNYYYYNYYYYYNY", "YYYYYYYYYYYNYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3559.1251118000564;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {417, -158, 768, 534, 408, 882, -8, 100, 660, 559, -8, -342, -974, -627, 284, -706, 716, 434, -550, 764, -281, -151, -843, 532, -935, 780};
    vector<int> y = {-476, -133, 360, 885, 48, 703, -83, 266, -519, -70, 781, 467, 386, -196, -982, -180, 379, 483, -601, -313, -752, 491, -382, 893, 581, 420};
    vector<string> streets = {"NYYYYNYYYYYYNYYYNYYYYNYYYY", "YNYYYYYYYYYYYYNYNYNYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYNYY", "YYYNYYYNYYNYYYYYNYYNYYYYYN", "YYYYNYYYYYYYYNYYYYYYYYNYYY", "NYYYYNYYYYYYNYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYNYYYYYYYYYY", "YYYNYYYNYYYYYYYYYYYNYYYYYY", "YYYYYYYYNYYYYYYYYYYNYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYNYYYYYYNYYYYYYYYYYYYNNN", "YYYYYYYYYYYNYYYYNNYYYYYYYY", "NYYYYNYYYYYYNYYYYYYYYYYYYY", "YYYYNYYYYYYYYNYYNYYYYYYYYY", "YNYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYNYYYYYYYYNYYYNYYYYYN", "NNYNYYYYYYYNYNYYNYYYNYYYYY", "YYYYYYYYYYYNYYYYYNYYYYYNYY", "YNYYYYYYYYYYYYYYYYNYYYYYYY", "YYYNYYYNNYYYYYYNYYYNNYYYYY", "YYYYYYYYYYYYYYYYNYYNNYYYYY", "NYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYNYYYYYYYYYYYYYYYYYNYYY", "YYNYYYYYYYNYYYYYYNYYYYYNYY", "YYYYYYYYYYNYYYYYYYYYYYYYNN", "YYYNYYYYYYNYYYYNYYYYYYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3387.679796492466;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {713, -58, 989, 747, 175, 156, -497, -74, 605, -383, -182, 276, -128, -910, -330, -15, -76, -244, 731, -166, 748, -78, -353, -327, -859, -993, -484, 760, 411, 358, -382, 904, 790, -676, -754, 361, -335, -998, 589, 480, -11, -714, 105, 681, 16, -960, -333, 809};
    vector<int> y = {124, -832, -943, 683, -737, -538, 993, -65, 376, 324, 463, -868, 280, -710, 67, 511, -650, -219, 917, 50, 163, -301, -856, 328, 404, 199, 215, -387, -758, 758, 842, 932, -230, -731, 893, -862, 935, -810, 19, 425, -903, 107, 894, -228, -809, -489, -252, -888};
    vector<string> streets = {"NNYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYNYYYY", "NNYYYYYYYYYYYYYYYYNYYYYYYYNYYNYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYNYNYYYYYYYNYYYYYYYYYYYYNYNYNYYYYY", "YYYNYYYYYYYYNYYYYYYYYYYYYYNNNYYYNYYYYYYYYYYYYYYY", "YYYYNYYYYYYYNYYYYYYNYYYYNNYYYNYYYYYYYYYYYNYYYYYY", "NYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYNYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYY", "YYYYYYYNYYYNYYYYYNNYNYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNYYNYYYYYNYYYYNYYYYNYYYYNNYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYNYNNYYYYYYYNYNY", "YYYYYYYYYYNYNYYNYYYYYNYYYYYYNYYYYYYYYNYYYYYYYYYY", "YYYYYYYNYYYNNYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYNNYYYYYNNNYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYNYYYNYYYYYYYYYYYYYYYNYYYYYYNYYYY", "YYYYYYNYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYN", "YYNYYYYYYYNYYYYNYYNYYYYNYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYNYYNNYYYYYYNYYYYYNYYYNYYYYYYNYNYYYY", "YYNYYYYNNYYYYYYYNNYYYYYYNNYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYNYYYYYYYNYYNNYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYNNYYYYYYYYYYYYNNYYYYYYYNYYYYYYYYYYYYYYYYNYYY", "YYYYYYYNYYYNYNYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYNYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYNYYYYYYYNYYYNNYYYYYYNYYYYNYYYYYYYYYYYYYNYYYY", "YYNYNYYYYNYYYYYYYNYYYYYYYNYYYYYYYNYYYYYYNYYNYYYN", "NNYNYYYYYYYYYYYYYYYYYYYYYYNNYYNYYYNYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYNYNYYYYNNYYYYNYYYYYYYYYYNYYNY", "YYYNYYYYNYNYYYYYYYYYYYYYYYYYNYYYYYYNYYYYNNYYYYYY", "YNYYNYNNYYYYYYYYYYNYYYYYNYYYYNYYYYYNYYYYYYYNYNNY", "YYYYYYYYYYYYYYYYNYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYY", "NYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYNYNYYYYYYYY", "YYYYYYYYNNYNYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYNYY", "YYYYYYYYYYYYNYYYNYYYYYYYYYNYYYYYYYNYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYYYYYYNYYYYYYYNNYYYYYNYYYYYYYYYYYY", "YYYYYYYYYNYYYNYYYYYYYNYYYYYYYYYYYYYYNYYYNYYYYYNY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYY", "YYNYYYNYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYY", "YYNYYYYYYYYYYYNYYYYYYYYYYNYYNYYYYYNYNYYYNYYYYYYY", "YYYYNYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNYNYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "NYYYYYYYYYYYYNYNNYYYYYYNNNYNYNYYYYYYYYYYYNYNYYNY", "YYYYYYYYYNYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYNYYYYYYYYYYYNYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYNYNYYYYYYNYYYYYYNYYNY", "YYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4354.042878997299;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {836, 77, 54, -543, -28, -662, 506, 684, -242, -615, -895, 902, -300, -613, -998, 985, -456, 357, 416, 351, -547, 473, -755, -968, -144, -573, -912, 8, 47, 644, -159, 143, 249, 43, 982, 509, 487, -777, -574, 472};
    vector<int> y = {760, 715, -382, 319, 65, -223, 124, -766, 812, 9, 372, 889, -642, -620, -321, 673, -777, 950, 672, -138, -68, 348, 473, -898, 767, 653, 338, 771, -900, 615, -638, 506, -370, 170, 655, 769, 104, -495, -612, 387};
    vector<string> streets = {"NYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYY", "YNYYYYYYNYYYNYYYYYYYYYYYYYNYYYYNYYYYYYYY", "YYNYYYYNYYYYYYYNYYYYYYYYYYYNYYYYYYYYNYYY", "YYYNNYYYYYYYYYYYYYYYNYYYYYYYYYNYYNNYYYYN", "YYYNNNYYYYYNYYYYYNYYYNYYYYYYYYYNYYYYYYYY", "YYYYNNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYY", "YYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYNYYNYYYN", "YYNYYYYNYYYYYNYYYNNYYYYYNNYYYYYYYYYYYYYN", "NNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNNYYYYYYYYYYYYYNYYYYYYYYYYYYYYN", "YYYYYYYYYNNYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYNYYYYYYNYYYYYYYYYYYYYYYYYNNYYYYNYYYY", "YNYYYYYYYYYYNYYYYNYYYYYYYYYNYYYYNYYYYYYY", "YYYYYYYNYYYYYNYYYYYNYYYYYNYYNYYYYYYYYYYY", "YYYYYYNYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYNYYYYYNNYYYYYYYYYYYYYYYY", "YYYYNYYNYYYYNYYYYNYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYNYNNYNYYYYYYYYYYYYYYYN", "YYYYYYYYYYYYYNYYYYYNYYYYYNYYYYYNYYNYYYYN", "YYYNYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYNYYNYY", "NYYYNNYYYYYYYYNYYYNYYNYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYNYYYYYNYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYNYYYYNYYYYYYNYYYNYNYYY", "YYYYYYYNYNYYYYYYYYYYYYYYNYYYYYYYYNYYYYYY", "YYYYYYYNYYYYYNYYYYYNYYYYYNYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYNYY", "YYNYYYYYYYNYNYYYYYYYYYYYYYYNYYYYYYYNYYYY", "YYYYYYYYYYYYYNYYYNYYYYNYYYYYNYYYYYNYNYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYNYYYYYYYNYYYYYYYYYYYNYYYYYYNYYYNYYYYY", "YNYYNYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYY", "YYYYYYNYYYYYNYYYYYYYYYYYYYNYYYYYNYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYNYYY", "YYYNYYYYYYYYYYYYYYYNNYYNYYYYNYNYYYNYYYYY", "YYYYYNNYYYYNYYYNYYYYYYYYYYYNYYYYYYYNYYYY", "NYNYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYNYYNYYY", "YYYYYYYYYYYYYYYYYYYYNNYYYYNYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYNYYNNYNYYYYYYYYNNYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3771.1020806733486;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {459, -775, -404, -484, 507, -450, 786, -717, 824, 387, 134, 33, -484, -440, -744, 785, -995, -568, 388, -66, -866, -846, 903, -446, -565, -261, -347};
    vector<int> y = {733, 640, -952, 411, 507, -874, 812, -494, -639, 558, -850, 207, -930, -802, 699, 175, 901, 366, -545, 867, -631, 461, 742, 168, -15, 751, 57};
    vector<string> streets = {"NNYYYNYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYNYYYYYYYN", "YYNYYYYYYNYYYYYYYYYYYYYYYYY", "YYYNYYYNYYYYYYYNNYYYYYYYYNY", "YYYYNYYYYYYYYYNYYYYYYYYNYYY", "NYYYYNYYYYYNYYYYYYYNYYYYYYY", "YYYYYYNYYYYYYYYYNYYNYYYYYYY", "YYYNYYYNYYYYYYYYYNYYNYYYNYY", "YYYYYYYYNNYYYYYYYNYYYNYYYYY", "YYNYYYYYNNYYYYYYNYYYYYYNYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYNYYYYYNYNYYYYNYYNYYYNY", "YYYYYYYYYYYYNNYYYYYYYYYYYYY", "YYYYYYYYYYYNNNNYNYNYYYNYYNY", "YYYYNYYYYYYYYNNYYYYYNNYYYYY", "YYYNYYYYYYYYYYYNYYYYYYYYYYY", "YYYNYYNYYNYYYNYYNYYYYYYYYYY", "YYYYYYYNNYYYYYYYYNYYYYNYYYY", "YNYYYYYYYYYNYNYYYYNYYNYNNYY", "YYYYYNNYYYYYYYYYYYYNYYYNYYY", "YYYYYYYNYYYYYYNYYYYYNYYYYYY", "YYYYYYYYNYYNYYNYYYNYYNYYYYY", "YYYYYYYYYYYYYNYYYNYYYYNYYYY", "YYYYNYYYYNYYYYYYYYNNYYYNYYY", "YYYYYYYNYYYYYYYYYYNYYYYYNYY", "YYYNYYYYYYYNYNYYYYYYYYYYYNY", "YNYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3900.1928608074654;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {643, 962, 559, 537, 197, -255, 108, -266, -321, 713, 272, -90, 406, -565, -458, 310, -564, -730, -190, 407, 673, 367, -227, -747, 768, 371, -624, -948, 860, 481, -3, 202, 656, -519, 951, -317, -11, -594, 194, -6, 993};
    vector<int> y = {-71, -178, 172, -506, 555, -591, -490, 532, -44, -697, -71, 495, 68, 746, -924, 200, -918, 872, 54, 644, -994, 699, 202, 275, -318, 844, 522, 885, 957, 137, -432, -351, 495, -353, -448, -124, -510, -188, -339, 87, 758};
    vector<string> streets = {"NYYYYYYYYNNYYYYYYYYNYYYYYYYYYYNYYYYYYYYYY", "YNYYNYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYNYY", "YYNYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYN", "YYYNYYYYNYYYYYYYYYYYYYYYNYYYNYYYYYYYYYNYY", "YNYYNYYYYYYNYYYNYYYYYYNYYYNYYYYYYYYYYYNYY", "YYYYYNYNNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYNYYYYYYYYYYYYYYNYNYYYYYYNYYYYYYYYYY", "YYNYYNYNNYYYYNYYYYYYYYYYNYYYYYYYYNYYYYYYY", "YYNNYNYNNYNYYYYYYYYYNYYYYYYYNYYYYNYYYYYYY", "NYYYYYYYYNYYYYNYYYYYYNYYYYYYYYYYYYYYYYNYY", "NYYYYYYYNYNYYYYYYYYYYYYYYYNYYYYYNNYYYYYYY", "YYYYNYYYYYYNYYYYYYYYYYYYYYYYNYNYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYNYYYYNNYYYYYYYYYYYYYYNYYYYYNYYYY", "YYYYNYYYYYYYYYNNYYYYNYYNYYYYYNYYYYYYNYYYY", "YYYYYYYYYYYYYYYYNNNYYYYYYNYYYYYYNYYNYYYYY", "YYYYYYYYYYYYYYYYNNYYYYYYNYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYNYNYYYYYYYNNYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYNYYYYYYNYYYYNYNYYYYYYYYNYYYYYYYYY", "YYYYYYNYYNYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYNYNNNYYYYYYYYYYYYYYYY", "YNYYYYNYYYYYYYYNYYYYYNNNYYYYYYYYYYYYYYYYY", "YYYNYYYNYYYYYYYYYNYYYYNYNNYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYNYYYYYYYNNNYYYYYYYYYNYYYY", "YYYYNYYYYYNYYYYYYYNYYYYYYNNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYNNYYYYYYYYYYYY", "YYYNYYYYNYYNYYYYYYYYYYYYYYYNNYYYYNNYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYNYYYYYYY", "NYYYYYNYYYYNYYNYYYYYYYYYYYYYYYNNYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNNNYYYYNYYY", "YYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYNNNYYYNNYY", "YYYYYYYNNYNYYYYYYYYYYYYYYYYYNNYYNNYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYNYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYNN", "YYNYYYYYYYYYNYNNYYYYYYYYYNYYYYYYYNYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNNYYYYNYYY", "YNYNNYYYYNYYYYYYYYYNYYYYYYYYYYYYNYYYYYNYN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNY", "YYNYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYNYYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3976.847889536788;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {-738, 872, -345, 292, -682, 72, -607, 108, 849, -282, 918, 77, -576, 594, 411, 502};
    vector<int> y = {-489, -579, 788, 426, -154, -266, 495, -94, -982, -354, 113, -951, -531, 93, -126, 738};
    vector<string> streets = {"NNYYYYYYYYYYYYNY", "NNYNYYYNYNYYYYYY", "YYNYYYYYYYYYYYYY", "YNYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYN", "YYYYYNYYYYYYYYYY", "YYYYYYNYYYYYYYYY", "YNYYYYYNYYYYYYYY", "YYYYYYYYNYNYYYYY", "YNYYYYYYYNYYYYYY", "YYYYYYYYNYNNYNYY", "YYYYYYYYYYNNYYYY", "YYYYYYYYYYYYNYYY", "YYYYYYYYYYNYYNYY", "NYYYYYYYYYYYYYNY", "YYYYNYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3282.894622750647;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {704, -286, 548, 853, -945, -752};
    vector<int> y = {810, 867, 1, 958, -975, 154};
    vector<string> streets = {"NYYYYY", "YNYYYY", "YYNYYY", "YYYNYY", "YYYYNY", "YYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3384.2883857190336;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {-681, -832, 462, -891, 460, -102, 367, 260, -212, -818, -309, 791, 540, 938, -817, -64, 544, 934, 688, -928, 408, 29, -797, 636, 336, -797, -317, -744, -849, -326, 965, 53, -575, -189, 146, -881, -757, -317, 592};
    vector<int> y = {32, 469, -345, -737, 745, 855, -998, -110, 804, -838, -499, 533, 276, 183, 130, 268, 645, -577, 801, 523, -137, 547, 412, -264, -885, 955, -521, -717, -67, -690, 736, -275, -25, 432, -455, -815, -978, -236, 494};
    vector<string> streets = {"NYNYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYNYYYNYYYYYYYYYYNYYYYYYY", "NYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYNYYNYYYYNYYYYYYYYYYYYYNYYYYNYYYYYYYY", "YYYYNYYYYNYYYYYNYYYYYYYYYYYYYYYYNYNYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYNNYYYYNYYY", "YYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYNYYYYNNYYYYYYYNYYYNYYYN", "YYYYYYYYNNYYYYYYYYYYNNYYYYYYYYYYYYYYYYY", "YYYYNYYYNNYNYYNYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYNYYYYNNYYYYYYYYYYYYYYNYYY", "YYYNYYYYYNYNYYYYYYYYYYYYYYYYYYYYNNYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYNYYYNYNYYYYYYY", "YYYYYYYYYYYYYNYNYNYYYYNYYYYYYYYNYYYYYYY", "YYYYYYYYYNNYYYNYYYYYYYYYYYYYYNYYYYYYYYN", "YYYYNYYYYYYYYNYNYYYYYNYYYYYYYYYYYYYYYYY", "YNYYYYYNYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYYYYYNYYYNYYYYNYYYYYNYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYNYYNYYYYYNYYYYYYNYYYYYY", "YNYYYYYYNYNYYYYYYYYYNYYYYNYNYYYYNYYNYYY", "YYYYYYYNNYYYYYYNYYNYYNYNNYNNYYNYYYYYYYY", "YYYYYYYNYYYYYNYYYNYYYYNYYYYYYNYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYNYYNNYYYYYYYYYYYYY", "YYYNYYYYYYYYNYYYYYYNNYYYNNNNYYYYNYYYYYN", "YYYYYYYYYYYYYYYYYYYYYNYYYNNYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNNYYYNYNYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYY", "YYYYYNYYYYYYNYNYYYYYYYNYYYNYYNNYYYYYYNY", "YYYNYNYNYYYYYYYYYYYYYNYYYYYNYNNNYYYYYYN", "YNYYYYYYYYYYNNYYYYYYYYYYYYYYYYNNYYYYNYY", "YYYYNYYYYYYNYYYYYYYNNYYYYNYYYYYYNYYYYYY", "YYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYNNYYYY", "YYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYNNYNYY", "YYYYYNYYYYNYYYYYYYYYNYNYYYYYYYYYYYYNYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYNY", "YYYYYYYNYYYYYYNYYYYYYYYYYNYYYYNYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3993.990756277531;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {542, 679, -242, 696, 932, 687, 631, -992, 569, 422, 532, -998, -378, -27, -351, 979, -513, 292, -171, 986, 762, 316, 450, -928, -889, 155, 72, -812, 568, 466, 465, -162, -520, -71, -487, -303, -831, -3, -442, 676, 458, 724, 522, 625, -61, 931};
    vector<int> y = {-300, -784, 13, 287, 689, 933, -153, -999, -535, 69, -222, -765, 29, 607, -369, 57, -859, 674, -829, -622, 637, 786, 141, -937, 552, 933, -112, -542, 74, -137, 577, -794, 170, 58, 101, -664, 402, -555, -311, -749, -690, 64, 559, -635, -613, 148};
    vector<string> streets = {"NYYYYYYYYYYNYYYYYNYYYYNYYYYYYYYYNYYYYYYYYYYYNY", "YNYYYYYYYYYYYYYYYYYYYNYYNYYNYYYYYYNYYYYYYYYYYY", "YYNYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYNNYNNYYY", "YYYNYYYYYYYYYYYNYYYYYNYYYYYYYNYYYYYYYYYYNYYYNY", "YYYYNYYYYYYNNYYYNNYYYYYYYYYYYYNYYYYYYYYYYYNYYY", "YYYYYNYNYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYNYYYNNYY", "YYYYYYNYNYNYYYYYYYYYYYYYYYYNYYYYNYYYYYYYNYYYYN", "YYYYYNYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYNYNYYYYYYYYYYNYNNYYYYYYYNYYYYYYYYNNNNYYY", "YYNYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYN", "YYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYY", "NYYYNYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYNNYYNYNYY", "YYYYYYYYYYYYYNYYYNYYYYYNYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYNYYYNYYNYNYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYYYNYYYYNNYYYNYYYYYYYYYYYYYYYYYYY", "NYYYNYYYYYYYYNYYYNYYYYYNYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYN", "YYYYYYYYNYYYYYYYYYYNYYNYYNYYYYYYYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYY", "YNYNYNYYNYYYYYYYNYYYYNNNYYYYYYYYYYYYNYYYYYYYYY", "NYYYYYYYNYYYYYYYNYYNYNNYYYYYYYYYYNYYYYYNYYYYYY", "YYYYYYYYYYYYYNYYYNYYYNYNYYYYYYYYYYYYNYYNYYYYYY", "YNNYYYYYYYYYYYNYYYYYYYYYNYYYNYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYNYYYYYNYYYNYYNYYNYYYNYYYYYN", "YYYYYYYYYYYYYNYYNYYYYYYYYYNYNNYYYYYYYNYYYYYYYY", "YNYYYYNYYYYYYYNYYYYYYYYYYYYNNYYYYYYYYYYNNYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYNYNNNYYYYYYYYYYYYNYYYY", "YYYNYYYYYYYYNYNYYYYYNYYYYNNYYNYYYYYYNYYYYYYYYN", "YYYYNYYYNNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYY", "NYYYYYNYYYNYYYYYYYYYYYYYYNYYYYYYNNYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNNYYYYYYYNYYNY", "YNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYN", "YYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYNYYYYYNYNYYYYNYYYYYYNYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYNYYYNYYYY", "YYNYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYY", "YYNYYYYYNYYYYYYYYYNYYYNNYNYNYYYYNYYYYYYNYYYYYY", "YYYNYYNNNNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYY", "YYNYYYYYNYYYNYYYYNYYYYYYYYYYNYYYYNYYYNYYYNYYNY", "YYNYNNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYNYY", "NYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYNYYNY", "YYYYYYNYYNYYYYYYYYNYYYYYYNYYYNYYYYNYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3878.0337393703767;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {-588, -900, -254, -656, -533, 60, -239, -785, -404, -31, -748, -242};
    vector<int> y = {989, 614, -192, -750, -814, 599, 798, -804, 986, -220, 158, -839};
    vector<string> streets = {"NYYYYYYYYYYY", "YNYYYYYYNYYY", "YYNYNYYYNYNY", "YYYNYYYYYYYY", "YYNYNYYYYYYY", "YYYYYNYYYYYY", "YYYYYYNYYYNY", "YYYYYYYNYYNN", "YNNYYYYYNYYY", "YYYYYYYYYNNY", "YYNYYYNNYNNY", "YYYYYYYNYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2466.7541303367043;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {-274, -678, 844, 272, -460, 257, 8, -62, 537, 511, 130, -531, 509, 433, 639, 498, 486, 266, -355, 404, 752, -679, -284, -606, 478, -243, -139, -298, -178, 741, -966};
    vector<int> y = {-981, -790, 228, -674, -945, 399, 773, -58, -781, -358, -285, -448, 976, -904, -773, 908, -390, 641, 801, 168, -546, 46, -724, -519, -197, -148, -961, 258, 605, -460, 504};
    vector<string> streets = {"NYYYYYYYNYNYYYYYNYYYYYYYYYYNNYY", "YNYYYYYYYYNYYYNYYYYYYYYNYYYNNYY", "YYNYYYYYYYYYYYYYYYYYYNYYYYYYNNY", "YYYNYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYNNNNYNYYNYYYYYYYYYYYYYYYYYY", "YYYYNNYYYYYYYYYYYYYYYYYYYYYYYYN", "YYYYNYNYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYNYYNYYYYYYYYYNYYYYYYYYYYYYY", "NYYYYYYYNYYYYYYYNYYYYYYYYYYYYYY", "YYYYNYYYYNYYYYYYYYYYNYYYYYYYYYY", "NNYYYYYYYYNYNYYYYNYNYYYYYYNYYYY", "YYYYYYYYYYYNYYYYYNYYYYNNYYNYYNY", "YYYYNYYYYYNYNYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYNNYYNYYYYYYYYYYYYY", "YNYNYYYYYYYYYNNYNYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "NYYYYYYYNYYYYYNYNYNNYYYYYNYNNYY", "YYYYYYNNYYNNYNYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYNYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYNYYNNYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYNNYYYYYYYYYY", "YYNYYYYYYYYYNYYYYYYYYNYYNYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYNYYYYYYYY", "YNYYYYYYYYYNYYYYYYYYYYYNYYYNYYN", "YYYYYYYYYYYYYYYYYYYYYNYYNYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYNYYYNY", "YYYYYYYYYYNNYYYYYYYYYYYYYYNYYYY", "NNYYYYYYYYYYYYYYNYYYYYYNYYYNYYY", "NNNYYYYYYYYYYYYYNYYYYYYYYYYYNYY", "YYNYYYYYYYYNYYNYYYYYYYYYYNYYYNY", "YYYYYNYYYYYYYYYYYYYYYYYNYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3522.454395183826;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {-455, 627, 676, -917, 197, -600, 85, 300, -570, -294, 40, -604, 34, 554, 84, 71, -646, -814, 70, -720, 397, -807, 319, -714, 706, 754, -476, 348, -437, -815, -489, -862, 222, 205, 975, 449, 663, 445, 417, -774, 273};
    vector<int> y = {-306, -642, -31, 550, 910, 462, -143, 122, 625, 570, 865, 342, -180, 969, 99, 532, -286, 47, -423, 39, -451, 928, -188, 377, 342, -382, -710, -400, -3, 536, 623, 229, 490, -976, -169, 818, -694, 282, 559, -942, 419};
    vector<string> streets = {"NYYYYYNYNYYYYYNYYYYYYYYYNYNYYYYYYYYYYYYNN", "YNYYYYNYYYYYYYYNYNNYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYNYNYYY", "YYYNYYNYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYNYNNYYYYY", "YYYYYNNYYYYYYYYYYYNNYYYYYNYYYYNYYYYYYYYNY", "NNYNYNNYYYYNYYYYYYYYYYYYYYYNYYYYNYYYYYYYN", "YYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYY", "NYYNYYYYNNYYNYNYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYNNYYYYYNYYYYNYYYYYNNYYYYYYYNYYYYY", "YYYYYYYYYYNYYYYYYYYNNYYYYYYYYYYYNYYYYYYYY", "YYYYYYNYYYYNYNNYYYYNYYYYYYNYYYYNYYYYYYYYY", "YYYYYYYYNYYYNYYYYYYYYYYYYNYYYYYYNYYYYYYYY", "YYYYYYYYYYYNYNYYYYYYYNYYYYYYYYNYYYYYYYYYY", "NYYYYYYYNYYNYYNYYYYYYYYNYYYYYYYYYYYNYYYNN", "YNYYYYYYYNYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYNYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYNYYYYY", "YNNYYNYYYYYYYYYNYYNYYYYYYYYYYYYYYNYYYYYNY", "YYYYYNYYYYNNYYYYYYYNYYYYYYYYYYYYYYNYYYYYN", "YYYNYYYYYNNYYYYYYYYYNYYYYYNYYYYYNYYYYYYYY", "YYYYYYYNYYYYYNYYYYYYYNYYYYYYYYYYYYNYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYNYY", "NYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYNYYYYNYYY", "YYYYYNYYYYYYNYYYYYYYYYNYYNYYYYYYYYYYYYYYY", "NYYYYYYYYNYNYYYYYNYYNYYYYYNYYYYYYYYYNYYYY", "YYYYYYNYNNYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYNYYNYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYNY", "YYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYNYNNNNYYYN", "YYYYNYNYYYNYNYYYYYYYNYYYNYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYNYYNYYNY", "YYYYNYYYYYYYYYYYYYYNYNYYYYYYNYYNYYNYYYYYY", "YYNYNYYYYNYYYYNYYNYYYYYYYYYYYYYNYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYNYYNYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYNYY", "NYYYYNYYYYYYYYNYYYNYYYNYYYYYYYNYYNYYYYYNY", "NYYYYYNYYYYYYYNYYYYNYYYYYYYYNYYNYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3679.1801959051986;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {-202, 764, -116, -886, -226, 901, 162, -368, -785, -983, 345, 622, 267, 606, -4, 77, -788, -271, -949, -157, 452, 585, 114, -709, 270, -628, 460, 561, -785, 448, -30, -86, 555, 852, -190, -700, -905, -82, 590, -971, -731, -602, -161, -614, 315, -323, -811, -105, 238};
    vector<int> y = {-235, 663, 238, -285, -981, -517, -735, 217, 917, 519, -255, 630, -354, -55, 224, -749, -391, -955, 548, -648, -603, 152, 826, -785, 72, -612, 708, -691, 30, -645, 148, -467, 833, -549, 592, 992, -480, -913, -453, -317, -426, -580, 276, -598, 979, -224, 908, -651, -360};
    vector<string> streets = {"NYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNY", "YNYYYYYNYYYYNYNYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYNYYYYYYYYN", "YYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNNYNYYYYYYY", "YYYNNYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYNNYYYYYYYNYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYY", "YYYYYNNNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYNYY", "YYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYNNYNYYYYYYYYYYYNYNYYYYNYYYYYYNYYYYYYNYYYY", "YYYYYYYYYYNYYYYYYYYYYNYYNNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYNYYYNYYYYYNYYYYYYYYYYYYYNYYYYYYYNYYYYY", "YNYYYYYNYYYYNNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYYYYNNYYNYYYYYYYYYYYYYNYYYYYYYYNYYYNNYYYY", "YNYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYNY", "YYYYYYYYYYYNYYYNYNYYNYNYYNYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYNYYYYYYNYNYNYNYYYYNYYYYYYYNYYYYYY", "YNYYYYYYYYYYYYYNYNYYYYYYYYYYYYNYYYNYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYNYYYNYYYYYYYYNYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYNNYYYYYYYYYNYYYYYYNYYYYYYYYNYYYYYYYYYYN", "YYYYYYYYYYYYYYYNYYNYYYNYYYYYYYYNYYYYYNYYNYYYYYYYY", "YYYYYYYYYNYYYYYYNYYYYYYNNYYYYYYYYYYNYYYYYYYYYYYNY", "YYYYYYYYYYNYYYYYYYYYYYYNNYYYYNYYYYYYYYYNYYYYYNYYY", "YNYYNYYYYNNYYYYNNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYY", "YYYYYNYYYYYYYYYYNYYYYYYYYYYNYYYYYYNNNYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYNYYYYNYYYNNYYYYYYYNYNYYYY", "YYYYYYYYYNYYYNYYYNYYYYYYYYYYYYNNYYYYYYNYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYNYYYYYYYNNYYYYYYYYYNYNYYNYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYNNYNYNY", "YYYYYNYYYYYYYYYYYYYYNYYYYYYYYNYYYNYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYNNYYYYYYYYYNYNYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYNYYYYYYYYNYYYNYYYYYYYNNYYYYYNYYYYYY", "YYNYYYYNYYYYYYYNYNYYYYYYYYYNYYYYYYYNNYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYNNYYYYYYYYYYYYYYNYYYYYYYYNYY", "NYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYNYYYYYYY", "YYNNYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYNYYYNYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYNYYNYYYYYYY", "YYYYNYYNYYYYYYYYNYYYYYYYYYYYNNYYNNYNYYYYYYNYYYYYY", "YYYYYYYYYYYNYNNYYYYYYYYYYYYYYYYNNYYYYYYYYYYNYYYYY", "YYYYYYYYYNYYYNYYYYYYYYYYYYNYYNYYYYYYYYYYNYYYNYYYN", "YYYYYYYYYYYYYYYYYYNNYYYYNYYYYYYYNYYYYYYYYYYYYNYYY", "YNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYNYY", "NYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYNY", "YYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3640.4330177157244;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {695, -142, 729, 802, 133, -719, 841, -351, -5, 569, 431, 244, -754, 352, 770, 589, 125, -252, 803, 141, -174, 537, 271, 508, 53, 3, -733, -636, 459, 606, -118, -295};
    vector<int> y = {-246, 612, -320, -113, -107, 843, -284, -272, -588, -303, -444, 551, 749, 138, 443, -646, 382, 714, 729, -285, -322, -598, -124, 65, 716, -66, 719, 606, 567, 425, 306, -250};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYY", "YNYYYYYYYYYYYYNYYYYYYYYYYYNYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNNYNYYYYYYYYNYYYYNYYYYYYYYYYY", "YYYNNYYYYYYYNYNYYYYYYYYYYYYYYYYY", "YYYYYNYYYNYYYNYNYYYYYYYYYYYYYYYN", "YYYNYYNNYNYYYYYYNYYYYNYYNYYYYYNY", "YYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYNYNYYYYYYNYYYYYYYYYY", "YYYYYNNYYNYYYYNYNYYYYYYYYYYYYYNY", "YYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYNYNYYYYYYYYYYYYYNYNYY", "YYYYNYYYNYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYNYNYYYYYYYYYYYYYYYYYY", "YNYYNYYYNNYYYYNYNYYYYYYYYYYYNNYY", "YYYNYNYYYYYYYYYNNYYYYYYNYYYYYYYY", "YYYYYYNYYNYYYYNNNYYYYYYYNYYYYYYY", "YYYYYYYYYYNYYYYYYNYYYYYYNYYYYYYY", "NYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYNYYNYYYYYYYNY", "YYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYNYNYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYNYYNYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYNNYYNYYYY", "YYYYYYNYYYYYYYYYNNYYYYYNNNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYNNYYYNYY", "YNYYYYYYYYYYYYYYYYNYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYNYYYNYYYY", "NYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYNYYNYYYYYYYYYYNYYYNYY", "YYYYYYNYYNYYYYYYYYYNYYYYYYYYYYNY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2976.634176280626;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {960, -601, -314, -474, -108, 679, -783, -108, 143, -843, 147, -142, -796, -668, 342, 937, 182, 627, 305, -244, 136, -705, -46, 725, 292, -379};
    vector<int> y = {-475, -651, 938, 584, 560, -287, -105, -828, -907, 691, -729, 143, -234, 494, 812, 852, -828, 374, 452, -173, 278, 200, 241, 753, 69, -249};
    vector<string> streets = {"NYYYYYYYYNYYYYYYNYYYNYYYYY", "YNYYYYYYYYYYYYYYYYYYNYYYYY", "YYNYYYYYYYYYYNYYYYYYYYYYYY", "YYYNNNYYYYYYYYYYYYYYYYYYYY", "YYYNNYYYYYYYNNYYYYYYYYYYYY", "YYYNYNYYYYYYNNYYYYNYYYYYYY", "YYYYYYNYYYNYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNYYYYYYYYYYY", "NYYYYYYYYNNYYYYYNYYYYYYYYY", "YYYYYYNYYNNYNYYYNYYYYYYYYN", "YYYYYYYYYYYNYYYYYYYNYYYYYY", "YYYYNNYYYYNYNYYYNYYYYYYNYY", "YYNYNNYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYNYYYYYNNYYYYYYNYYN", "YYYYYYYYYYYYYYNNYYYYYYYYYN", "NYYYYYYYYNNYNYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYNYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYNYYYYYYYNNYYYYY", "NNYYYYYYYYYYYYYYYYYNNYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYNYYYYYYYNNYY", "YYYYYYYYYYYYNYYYYYYYYYNNYY", "YYYYYYYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYYYNYYYNNYYYYYYYYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3438.9168328138185;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {-379, -526, 217, 986, -410, 733, -281, 406, -529, -63, 268, 208, -490, 414, 344, -602, -355, 61, 987, 610, 595, -433, -110, 162, 583, 815, 631, 718, -103, -971, -863, 550, 456};
    vector<int> y = {-998, -641, 900, 908, -472, 470, -587, -348, -636, 134, 522, -23, 432, -36, 56, 940, -718, 297, 365, -378, 120, -250, 729, 284, 599, -800, 994, -230, -647, 952, 195, -111, 718};
    vector<string> streets = {"NNYYYYYYYNYYYYYYYYYYYYYYYNYYYYYNY", "NNYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYY", "YYNYYYYYYYYYYYYYYNYYYYYYYYYNYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNNYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYNNYYNYYYYYYYYYYNYYNYNYNYYYNYY", "YYYYYYNYYYNYYNYYYNYYNYYYYYYYYYYNY", "YYYYYYYNYYYYNYYYYYYYYYYYYNYYYYYNY", "YYYYYNYYNNYYYNYYNYYYNYYYYYYYYYYYY", "NNYYYYYYNNYYYNYYYYYYYYYNYYYYYYYYY", "YYYYYYNYYYNYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYNYYYYNYYYYNYYYYYYYYYYYNYYY", "YYYYYYNYNNYYYNYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYNYYYYYNYYNNYYYYYYY", "YYYYYYYYNYYYYYNYNYYYYYYNYYYNYYYYY", "YYNYYYNYYYYYNYYYYNNYYYYYNYNYYYYYY", "YYYYYYYYYYYNYYYYYNNYYYNYYNYYYYYYY", "YYYYNNYYYYYYYYYYYYYNYYYYYYYYNYYYY", "YYYYYYNYNYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYNYYNYYYNYYYY", "YYYYYNYYYYYYYYYYYYNYYYNNYYYYYYYYY", "YYYYYYYYYNNYYYYYNYYYYYNNYYNYNYYYY", "YYYYYNYYYYYYYYYNYNYYYNYYNNYYNYYYY", "NYYYYYYNYYYYYYYNYYNYYYYYNNYYNYYYY", "YYYYYNYYYYYYYYYYYNYYYYYNYYNYNYYYY", "YYNYYYYYYYYYYYYYNYYYYYYYYYYNYYYYY", "YNYYYYYYYYYYYYYYYYYNYNYNNNNYNYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYNY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYY", "NYYYYYNNYYYYYYYYYYYYYYYYYYYYYNYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4128.809243006343;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {-183, 138, 689, -356, -644, 473, 56, 546, 349, -410, -622, 9, -21, 453, -247, -956, -984, 1, 225, 778, -533, 481, 685, -722, -352, -326, 590, 381};
    vector<int> y = {-937, 761, 558, 110, 723, -634, 182, 278, 1000, 522, 634, 679, -441, -591, 933, 63, 26, 788, -363, 477, 940, -424, -941, 254, 448, -462, -991, 291};
    vector<string> streets = {"NNYYYYYYYYYYNNYYYNYYYYYYYYNY", "NNYYYYYNYYYNNYYYYYYYYYYNYYYY", "YYNNYYYYYYYYYYYYYYYYYNYYNYYY", "YYNNYNYYYYNNYYYYYYYNYNYYNYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYNYYYYYYYYYYYYYYYNYYYN", "YYYYYYYYNNYYYYYNYYYYYYYYYYYY", "YYYYYYYYNNYYNYYYYNYYNYYYYYYY", "YYYNYYYYYYNYYYYYYNYNYYYYYYNY", "YNYNYYYYYYYNNYYYYYYYYNYNYYYY", "NNYYYYYYYNYNNYNYYYYYYYYYYYYY", "NYYYYYYYYYYYYNYNYYYYYYYYYYYY", "YYYYYYYYYYYYNYNYYYYYYYYYNYNY", "YYYYYYYYNYYYYNYNYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYY", "NYYYYYYYYNNYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYNYYYYYYNYYYYYYYYNYYYYYYNN", "YYYYYYYYYNYYYYYYYYYYNYYYYYYY", "YYNNYYYYYYYNYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYN", "YNYYYYYNYYYNYYYYYYYYYYYNYYYN", "YYNNYYYYYYYYYYNNYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYY", "NYYYYYYYYYNYYYNYYYYNYYYYYYNY", "YYYYYYYNYYYYYYYYYYYNYYNNYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3352.3886408264566;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {-633, 293, 273, 982, 352, -920, -103, -680, -966, 440, 5, 364, 972, 519, -276, 365, 91, 54, -756, -61, -80, -869, 553, 357, 162, 936, 746, -861, -239, -540, 502, -686, -484, 631, -234};
    vector<int> y = {324, -506, 214, 245, 652, 847, 410, 51, -453, 836, 309, 170, 433, 224, -603, 36, 896, 944, -402, -603, 177, -336, 924, -154, -289, -205, -321, 740, -497, 978, -646, -310, -703, -709, 557};
    vector<string> streets = {"NYYYNYYNYNYNYYYYYYYYNYYYYYYYYYYYYYY", "YNNYYYYNYYYYYYYYYYNYYYYYYYYYYYYNYYY", "YNNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYNYYYYYYNYYYYYYYYYYYYYYNYNY", "NYYYNYYYYNYYYYYYYYYYYYYNYYNYYYYYYYY", "YYYYYNYYYYYYYYYYYYNYNYYNYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYNYY", "NNYYYYYNYYYYYYYYYYYYYYYNNYNYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYY", "NYYNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYNYYYYYYNYYYYYYNYYYYYYYYNY", "NYYYYYYYYYYNYYYYNYYYYNYYYYNYYYNYYYY", "YYYYYYYYYYYYNYYYYYYNYYYYYYYNNYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYNYNYNYNYNYYYY", "YYNYYYYYYYYYYYYNYNYYYNYYYYYYNNYYYYY", "YYYNYYYYYYYNYYYYNYYYYYYYYYYYYNYYNYY", "YYYYYYYYYYNYYYYNYNYYYYYYYYYYYNNYYYY", "YNYYYNYYYYYYYYYYYYNYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYY", "NYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYNYYYYYNYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNYYYNYYYNYYYYYNYYYYYY", "YYYYNNYNYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYNYYNYYYNYYYYYYYYYNNYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNNYYNYYYNYY", "YYYYNYNNYYYNYYNYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYNYYY", "YYYYYYYYYYYYNYNNYYYYYYNYYNYYNYNYYYY", "YYYYYYYYYYYYYYYNNNYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYNYYNYYNYYYYYYYYYYNYNNYYY", "YNYNYYYYYYYYYYYYYYYYYYYYNYYNYYNNYYY", "YYYYYYNYYYYYYYYYNYYYYYYYYNYYYYYYNYY", "YYYNYYYYYNNYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3481.010561749838;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {356, 429, 20, -618, 434, 600, -496, -751, -254, 57, -424, 401, 13, -279, -484};
    vector<int> y = {-759, 266, -362, 246, -189, 394, 821, -477, 607, -743, -833, -564, -460, 830, 755};
    vector<string> streets = {"NYYYNYNYYYYYYYY", "YNYYYNNYYYYYYYY", "YYNYYYYYYYYYYYY", "YYYNYYNYYYNYYYN", "NYYYNYYYYYYYYYY", "YNYYYNYNYYYYYYY", "NNYNYYNYYYYYYYY", "YYYYYNYNYYYYYYY", "YYYYYYYYNYYYYYY", "YYYYYYYYYNYNYNY", "YYYNYYYYYYNNYYY", "YYYYYYYYYNNNYYY", "YYYYYYYYYYYYNYY", "YYYYYYYYYNYYYNY", "YYYNYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2700.3689079064998;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {858, 570, -916, -812, -580, 255, -673, 252, -558, 2, 122, -794, 811, -657, -163};
    vector<int> y = {-749, -740, 909, 809, -712, 998, 242, -256, -960, 774, -351, 878, -226, -601, 349};
    vector<string> streets = {"NYYNYYNYYYYYYYY", "YNYYYNYYYYYYYYY", "YYNYNYNYYYYYYYY", "NYYNYYYNYYYYYYY", "YYNYNYYYYYYYYYY", "YNYYYNYYNYNYYNY", "NYNYYYNYYYYYYNY", "YYYNYYYNYYYYYYY", "YYYYYNYYNYYYYYY", "YYYYYYYYYNYYYYY", "YYYYYNYYYYNYNYY", "YYYYYYYYYYYNNYY", "YYYYYYYYYYNNNYY", "YYYYYNNYYYYYYNY", "YYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3472.00370560628;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {287, -90, 921, 199, -400, -271, -857, -70, -804, 839, -86, 899, 754, -250, 835, -492, 767, -525, 603};
    vector<int> y = {-429, 449, 556, -637, -736, -222, -686, 269, -360, -783, -843, 32, 736, -581, 171, -902, 875, -483, -970};
    vector<string> streets = {"NYYYYYYYYYYNYYYYYYN", "YNYYNYYYYYYYYYYYYYY", "YYNNNYYYYNYYYYYYYYY", "YYNNNNYYYYYYYYYYYYY", "YNNNNYYYYYYYYYYYYYY", "YYYNYNYYYYYYYYNNYYY", "YYYYYYNYYNYYYYNYNYY", "YYYYYYYNYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYY", "YYNYYYNYYNYYYYYYYYN", "YYYYYYYYYYNYYYYYYYN", "NYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYNYYYNYY", "YYYYYYYYYYYYYNYNYYY", "YYYYYNNYYYYYYYNYYNY", "YYYYYNYYYYYYYNYNYYY", "YYYYYYNYYYYYNYYYNNY", "YYYYYYYYYYYYYYNYNNY", "NYYYYYYYYNNYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3363.5804818452584;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {-329, 975, 879, 53, -133, 139, 18, -853, 731, -457, -762, -166, 679, -377, -106, 70, -906, 605, -477, 520, -390, -304};
    vector<int> y = {-994, 116, -163, 508, -957, 928, -805, 574, 226, -711, -807, 7, 361, -688, -127, -880, -519, 773, -724, 7, -929, -197};
    vector<string> streets = {"NYYYYYYYYYYYYYNNYYNYNY", "YNYYYYYYYYYYYYYYYYYYYN", "YYNYYNYYYYYYYYYYNNYYYY", "YYYNYNYYYYYYYYYYYYNYYY", "YYYYNYYYYYYYYYYYYYYYYY", "YYNNYNYYYYYYNYYYYYNYYY", "YYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYNYYYYNNYN", "YYYYYYYYNYNYYYYYYYYYYY", "YYYYYYYYYNYNYYYYYNYYYY", "YYYYYYYYNYNYYNYYNYNYYY", "YYYYYYYYYNYNYYYYYYYYYN", "YYYYYNYYYYYYNYYYYYYYYY", "YYYYYYYNYYNYYNYYYYYYNY", "NYYYYYYYYYYYYYNYYYYYYY", "NYYYYYYYYYYYYYYNYYYYYY", "YYNYYYYYYYNYYYYYNYYYYY", "YYNYYYYYYNYYYYYYYNYYYY", "NYYNYNYNYYNYYYYYYYNYYY", "YYYYYYYNYYYYYYYYYYYNYY", "NYYYYYYYYYYYYNYYYYYYNY", "YNYYYYYNYYYNYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3314.19496542869;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {113, 554, -418, -61, 689, -262, 952, -517, 176, 789, 906, -560, -533, -877, 367, -645, 613, -127, 252, -369, -72, -528, 789, 81, 196, 393, -67, 451, -898, 300, 208, -989, 318, 718, 538, 265};
    vector<int> y = {-409, -701, 357, 756, -935, -314, 4, 564, -450, 664, 139, -457, 256, -547, -223, -446, 559, 399, -197, -382, -202, -717, 127, -840, -318, -117, 149, 740, 720, 233, -71, 875, -211, 106, 315, -980};
    vector<string> streets = {"NYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YNYYYYNYYYYYNYNYYYYYYYYYYYYYYYYNNYNY", "NYNYNYYYNYYYYYYYYNYNYYYYNYYYYNYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYN", "YYNYNYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYY", "YYYYYNYYYYYNNYNYYYYYYNYYYYYYYYYYNYYY", "YNYYYYNYYYYYNYYYNYYYYYYYNYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYNYYNYYYYYYYYYYYYYN", "YYNYYYYYNYYNYYYYYYYNYNYYYYYYNYYYYYYY", "YYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYNYYNYNYYYYYYNYYYYYYYYYNYYY", "YYYYYNYYNNYNYYNYYYYYYYYYYYYYYYYYYYYN", "YNYYYNNYYYYYNNYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYNYNNYYYYYYYYYYYYYYYYYNYYYY", "YNYYYNYYYYYNYYNYYYYYYYNYYYYYYYNYYYNY", "YYYYYYYYYYNYYYYNNYYYYYYYYNYYYYYYYYYY", "YYYYYYNYYYYYYYYNNYYYYNYYNYNYNYYYNYYY", "NYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYNYYYYNYYYYYYYYYNYY", "YYNYYYYYNYYYYYYYYYYNYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYNYYYYYYNNYYYYY", "YYYYYNYNNYYYYYYYNYYYYNYYNYYYYYYYYYNY", "YYYYYYYYYYNYYYNYYYYYNYNYYYYYYYYNYYYY", "YYYYNYYYYYYYYYYYYYNYYYYNYYYYYYNYYYNY", "YYNYNYNYYYYYYYYYNYYYYNYYNYYYYYYYYYYY", "YYYNYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYN", "YYYYYYYYNYYYYYYYNYYNYYYYYYYYNYYYYYYY", "YYNYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYY", "YYYYYYYYYYYYNYNYYYYYNYYNYYYYYYNYYYYY", "YNYYYYYYYNYYYNYYYYYYYYNYYYYYYYYNYYYY", "YNYYYNYYYYNYYYYYNYYYYYYYYYYYYYYYNYNY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYY", "YNYYYYYYYYYYYYNYYYYYYNYNYYYYYYYYNYNY", "YYYNYYYNYYYNYYYYYYYYYYYYYYYNYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3788.410447953294;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {291, 104, 224, -470, -71, -643, -926, 964, -149};
    vector<int> y = {256, 267, 563, -373, 383, -230, -128, -754, -204};
    vector<string> streets = {"NYNYYYYYY", "YNYYYYYYY", "NYNYYYYYY", "YYYNYYYYY", "YYYYNYYYY", "YYYYYNYYY", "YYYYYYNYY", "YYYYYYYNY", "YYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2642.2496838112115;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {383, 886, 777, 915, 793, 335, 386, 492, 649, 421, 362, 27, 690, 59, 763, 926, 540, 426, 172, 736, 211, 368, 567, 429, 782, 530, 862, 123, 67, 135, 929, 802, 22, 58, 69, 167, 393, 456, 11, 42, 229, 373, 421, 919, 784, 537, 198, 324, 315, 370};
    vector<int> y = {413, 526, 91, 980, 956, 873, 862, 170, 996, 281, 305, 925, 84, 327, 336, 505, 846, 729, 313, 857, 124, 895, 582, 545, 814, 367, 434, 364, 43, 750, 87, 808, 276, 178, 788, 584, 403, 651, 754, 399, 932, 60, 676, 368, 739, 12, 226, 586, 94, 539};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2123.8876007826484;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {0, 0, 20, 900, 900};
    vector<int> y = {0, 210, 100, 100, 900};
    vector<string> streets = {"NYYNN", "YNYNN", "YYNYY", "NNYNY", "NNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1646.5346444661625;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {0, 1, 0};
    vector<int> y = {0, 0, 1};
    vector<string> streets = {"NYY", "YNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7071067811865475;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {0, 1, 1, 0};
    vector<int> y = {0, 0, 100, 100};
    vector<string> streets = {"NYYY", "YNYY", "YYNY", "YYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 101.00499987500623;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {0, 1, 2, 3};
    vector<int> y = {0, 1, 1, 0};
    vector<string> streets = {"NYNY", "YNYN", "NYNY", "YNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3.414213562373095;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {-3, -3, 0, 3, 4, 4, 4, 5, 5};
    vector<int> y = {-2, 2, 0, 0, -2, 0, 3, -2, 3};
    vector<string> streets = {"NYYNNNNNN", "YNYNNNNNN", "YYNYNNNNN", "NNYNNYYNN", "NNNNNYNYN", "NNNYYNNNN", "NNNYNNNNY", "NNNNYNNNY", "NNNNNNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 15.18669010554818;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {-1, 2, 2, 0};
    vector<int> y = {-1, 0, 2, 2};
    vector<string> streets = {"NNYY", "NNYY", "YYNN", "YYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 6.116672736016928;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {0, 1, 923};
    vector<int> y = {0, 7, 921};
    vector<string> streets = {"NYY", "YNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1304.618556873965;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {0, 2, 1, 0, 2};
    vector<int> y = {0, 0, 2, 4, 4};
    vector<string> streets = {"NYYNN", "YNYNN", "YYNYY", "NNYNY", "NNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 6.47213595499958;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {0, 2, 1};
    vector<int> y = {0, 0, 2};
    vector<string> streets = {"NYY", "YNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3.23606797749979;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x = {0, 2, 0, 2};
    vector<int> y = {0, 0, 2, 2};
    vector<string> streets = {"NYYY", "YNYY", "YYNY", "YYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4.82842712474619;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x = {0, 1, 0};
    vector<int> y = {0, 0, 2};
    vector<string> streets = {"NYY", "YNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2.618033988749895;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x = {959, 533, 666, 500, -169, -724, -478, -358, 38, 536, -705, 855, -281, 173, -961, 509, 5, -942, 173, -436, 609, 396, -902, 847, 708, 618, -421, 284, -718, -895, -447, -726, 229, -538, -869, -912, -667, 701, -35, -894, 297, -811, -322, 667, -673, 336, -141, -711, 747, 132};
    vector<int> y = {-303, -805, 766, 656, 687, -959, -100, -760, -78, 502, 590, 392, -264, 403, 943, -299, 672, -583, -970, 103, 214, 449, -632, 0, 946, -919, -384, -276, 912, -167, 159, -884, 926, -535, 131, 177, 392, 869, 73, -455, 979, -278, -573, 619, -277, -217, -519, 690, 894, 805};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3994.780038488209;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<string> streets = {"NYYNYNYYYNYYYNYYYNNYYNYNYNYNYYYYNNYNNYYYYNNNNYYNYY", "YNNYYYYNYNYYYNNNYNYNYNYYYNNNYYNNYNNNYNYNNYNNNYYYYN", "YNNNYYYYYNNYNYYYYNYYNYNYNNYNNNNYYYYNYNNYYNNYYYNNNN", "NYNNYNNNNYYNYNYYNYYYYYYYYYNNYNYYYYYNNYYYNYYYNYNYNN", "YYYYNYYYYNNYYYYNNYYNNYYNYNNYNYYYNYYYNYNYNNYNYNNNNY", "NYYNYNNYYNYNNNYNNYYYNNNNNNNNNNNYNNNYNYYNYNYNYYNNYN", "YYYNYNNYNYNYYNNYNNYYYNNNNNNNYYNYYYYYNYYNNYYNNYYNYY", "YNYNYYYNNNYNNYYYYNNNNNNNNYYYNYNNYNYYYYNYYYNYNYYYYN", "YYYNYYNNNNYYYNNNYYNNYYYYYYYNNNNNNNYYYYNYYYNNYYYYNY", "NNNYNNYNNNYNYYYYNNYNYYYYYYNYYNYNNYYYYYYYNYYNNYYYYN", "YYNYNYNYYYNNNNNNNNNNNNNNNYYYYNNNNYYYNNYYNYYYYYYNYN", "YYYNYNYNYNNNNYNYNNYNYYYYYYYNNYYYNYYNYYYYYNYYYNYYNN", "YYNYYNYNYYNNNYYYYYYYYYYNYYNNYNYNYYNYYNYNNYYNNYYYYN", "NNYNYNNYNYNYYNNNYNYYNYNNYYNYNNNYYNYNYYNYYYYYNYNYNN", "YNYYYYNYNYNNYNNNYNYNNYNYNYNYYNYYNYNNYYNYYNNYYYNNYN", "YNYYNNYYNYNYYNNNYNNNYNNNYYYYNNYNYYNYYYNNYNYNYNYNNN", "YYYNNNNYYNNNYYYYNYYNYYNNNYNNYNYYNNNNYYNNNNYNYNNYNN", "NNNYYYNNYNNNYNNNYNNYYNNNYNNYNYYNYNNYYYYNNNNYYNYYYN", "NYYYYYYNNYNYYYYNYNNYNNNYYNNYYYYNNNYYYYNNYYNYNNNNYY", "YNYYNYYNNNNNYYNNNYYNNYNYNNNYYNNNYYYNNNNYYYNYNNNYYN", "YYNYNNYNYYNYYNNYYYNNNNYYYNNNYNNNYYYNYYNNNNNNNNYYYY", "NNYYYNNNYYNYYYYNYNNYNNYNNNNYYNNYNYNNYYYYYNNYNNYNNN", "YYNYYNNNYYNYYNNNNNNNYYNYNYNYYNYNYNNNNYYYYNYYNYYNYN", "NYYYNNNNYYNYNNYNNNYYYNYNYNNNYYYNYYNNYYYNNNNNYNYNNN", "YYNYYNNNYYNYYYNYNYYNYNNYNYYNYNYNYNNNYYYNNNNNYNYNNY", "NNNYNNNYYYYYYYYYYNNNNNYNYNYYNYNYYYNYNYNNNYNNYYYNNY", "YNYNNNNYYNYYNNNYNNNNNNNNYYNNNYYYNYYYNYYYNYYYNYYNYN", "NNNNYNNYNYYNNYYYNYYYNYYNNYNNNYNYNYNYYNNYNYYYYNNNYN", "YYNYNNYNNYYNYNYNYNYYYYYYYNNNNNYNNYNYYYNYYYYYYYYNNY", "YYNNYNYYNNNYNNNNNYYNNNNYNYYYNNYNYYYYYYNNNYNYNNYYNY", "YNNYYNNNNYNYYNYYYYYNNNYYYNYNYYNYYNYYNNNNYNNYNNNYNY", "YNYYYYYNNNNYNYYNYNNNNYNNNYYYNNYNNYNYNYYYYYYYNNYNNN", "NYYYNNYYNNNNYYNYNYNYYNYYYYNNNYYNNYYYNNNYYNYNNNYYNY", "NNYYYNYNNYYYYNYYNNNYYYNYNYYYYYNYYNNYYNNYYYNNNYYYNY", "YNYYYNYYYYYYNYNNNNYYYNNNNNYNNYYNYNNYNNYYYNYYYYNNNN", "NNNNYYYYYYYNYNNYNYYNNNNNNYYYYYYYYYYNYNYNYYYYYYNYYN", "NYYNNNNYYYNYYYYYYYYNYYNYYNNYYYNNNYNYNNNYYNNYNNNNYY", "YNNYYYYYYYNYNYYYYYYNYYYYYYYNYYNYNNNNNNNYNYNNNNNYYY", "YYNYNYYNNYYYYNNNNYNNNYYYYNYNNNNYNNYYNNNNYYNYYNYYNY", "YNYYYNNYYYYYNYYNNNNYNYYNNNYYYNNYYYYNYYNNNNNNYNYNYY", "YNYNNYNYYNNYNYYYNNYYNYYNNNNNYNYYYYYYYNYNNNYYNYYYNY", "NYNYNNYYYYYNYYNNNNYYNNNNNYYYYYNYNYNYNYYNNNNNNYNYYY", "NNNYYYYNNYYYYYNYYNNNNNYNNNYYYNNYYNYYNNNNYNNNNYYYYY", "NNYYNNNYNNYYNYYNNYYYNYYNNNYYYYYYNNYYYNYNYNNNNYNNYY", "NNYNYYNNYNYYNNYYYYNNNNNYYYNYYNNNNNYYNNYYNNNNNYYYYY", "YYYYNYYYYYYNYYYNNNNNNNYNNYYNYNNNNYYYNNNNYYYYYNNYNY", "YYNNNNYYYYYYYNNYNYNNYYYYYYYNYYNYYYNNNNYYYNYNYNNYYY", "NYNYNNNYYYNYYYNNYYNYYNNNNNNNNYYNYYNYNYYNYYYNYYYNYY", "YYNNNYYYNYYNYNYNNYYYYNYNNNYYNNNNNNNYYYNYNYYYYNYYNY", "YNNNYNYNYNNNNNNNNNYNYNNNYYNNYYYNYYNNYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 69.29646455628168;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x = {0, 0, 0, 1, -1};
    vector<int> y = {0, 1, -1, 0, 0};
    vector<string> streets = {"NYYYY", "YNNYN", "YNNNY", "YYNNN", "YNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4142135623730945;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> x = {41, 467, 334, 500, 169, 724, 478, 358, 962, 464, 705, 145, 281, 827, 961, 491, 995, 942, 827, 436, 391, 604, 902, 153, 292, 382, 421, 716, 718, 895, 447, 726, 771, 538, 869, 912, 667, 299, 35, 894, 703, 811, 322, 333, 673, 664, 141, 711, 253, 868};
    vector<int> y = {547, 644, 662, 757, 37, 859, 723, 741, 529, 778, 316, 35, 190, 842, 288, 106, 40, 942, 264, 648, 446, 805, 890, 729, 370, 350, 6, 101, 393, 548, 629, 623, 84, 954, 756, 840, 966, 376, 931, 308, 944, 439, 626, 323, 537, 538, 118, 82, 929, 541};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2137.131515990911;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> x = {-100, -1, 0, 100};
    vector<int> y = {-100, 0, 0, 100};
    vector<string> streets = {"NYNN", "YNYN", "NYNY", "NNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 283.13738233242066;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> x = {375, -106, -970, 449, -374, -957, -962, -104, 117, -688, 156, 577, -201, -832, -236, 521, -500, 722, 478, -848, -449, 451, -721, -751, -593, 69, 420, 293, 325, -114, 326, -860, 645, -701, 715, -546, 67, -794, 361, 442, -456, -419, -767, -931, -363, 422, -567, 797, -809, 216};
    vector<int> y = {-854, -234, 556, 587, -917, -531, 756, -261, -50, 995, 220, -631, 570, 508, -777, 723, 584, -192, -930, -444, -190, -526, -934, 447, -887, -321, -610, -568, -666, 25, -758, -252, -733, -827, -418, 242, -278, 994, -468, -742, -914, 956, -990, -315, -854, -993, 182, 300, -809, -113};
    vector<string> streets = {"NYNYYNNYYYNNNNYNYNYNYYNYYYYNYYYYNYYYNYYYYYNYYYYYYY", "YNYYYYYYYYNNYYNYYYYYYYNYYYYYYYYYYNYYYNYYYYYYYYYYYY", "NYNYYYYYYNYYNNNNYYYYYYYYNYYYYYYYYYYYYNYNNNYNYYYYYN", "YYYNYYYYNYNYYYNYYYYYYNYYNYYYYYYYYYYYYYNNNYYNYNYYYN", "YYYYNYNYYNYNYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYNYNN", "NYYYYNYYYYYYYNYNYYYYYYYYYYYYYYYNYYYYYYYNNYYNYYNYYY", "NYYYNYNNYYYYYNYYYYYYNYYYYYYYYYYNYYYNYYYYYYNYNNYYYY", "YYYYYYNNYYYYYYYYYNYYYYYYYNYYYYYYYYYNYYYYYNYYYYYYYY", "YYYNYYYYNYYYNYYYYYYYYNYYYYYYNYYYYYYYYYNYYYYYYYYYNN", "YYNYNYYYYNYYYNYNYYNYYYYYNNYYYYYYYNYNYNNYYYYYYYYNYY", "NNYNYYYYYYNYYYYNYYNYNYYYYYNYYYYNYNYNNYYYYYYYNYYYYN", "NNYYNYYYYYYNYYYNYNNNYYYNYYYNYYYYYYYYYYYYYYYYYYYYNY", "NYNYYYYYNYYYNYYYYNYYYYYYYNYNYNYNYYNYYYYNYNYYYNYYYY", "NYNYYNNYYNYYYNYYYNYYNNYNYNYYNYYYYYYYYYYYNYYYYYYYYY", "YNNNYYYYYYYYYYNYYYYYNYYYYYYYYYYYYNYYNYYYYYYYYYYYYY", "NYNYYNYYYNNNYYYNNNYYYYNYYYYYYNYYYNYNYYNYYYYYYNNNYN", "YYYYYYYYYYYYYYYNNYYYYYNNNYNYYNNYYYYYNYYYYYYYNYYYYN", "NYYYYYYNYYYNNNYNYNNYYNYYYYYYYYYYYYYYNYYNYNYNYYYYYN", "YYYYYYYYYNNNYYYYYNNYYNNYYYYYYNYYYYYNNYYYYYYNYNYYYY", "NYYYYYYYYYYNYYYYYYYNYYYNYNNYYYYNYYYYNYYNYYNYYYYYYN", "YYYYYYNYYYNYYNNYYYYYNNYNNNYYYYYYYNYYNYYYNYYYNYYNNY", "YYYNYYYYNYYYYNYYYNNYNNYYYYYNYYYYYYYYYYNYYYYYYYYYYY", "NNYYNYYYYYYYYYYNNYNYYYNYYYYYYYYYYYYNYNYYYYYYYYYYYY", "YYYYYYYYYYYNYNYYNYYNNYYNYYYYNYYYYNYYYYYNYYNYYYYYYY", "YYNNYYYYYNYYYYYYNYYYNYYYNYYYYYYYYYYYYNYYYNYNYYYYYY", "YYYYNYYNYNYYNNYYYYYNNYYYYNYYYYYYYYYYYNYYNYYYNNYYYY", "YYYYYYYYYYNYYYYYNYYNYYYYYYNYYYYYYYYYYYNYYYYNYYYYNY", "NYYYYYYYYYYNNYYYYYYYYNYYYYYNNYYYYYYYYYYYYYYYYYYYYN", "YYYYYYYYNYYYYNYYYYYYYYYNYYYNNYYNNYNYYNYYNYYNYYNYYY", "YYYYYYYYYYYYNYYNNYNYYYYYYYYYYNYYYYYNNYNYYYYYYNYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYNYNNNYNYYYNNNYYYNY", "YYYYYNNYYYNYNYYYYYYNYYYYYYYYNYYNNYYNYYYYYYNYYYYNYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNYYYYYYYYYNYYYYYNY", "YNYYYYYYYNNYYYNNYYYYNYYNYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYNYNYYYNNYYYYYYYNYNYNNN", "YYYYYYNNYNNYYYYNYYNYYYNYYYYYYNNNYYNNYYYYYYYNYYYNNY", "NYYYYYYYYYNYYYNYNNNNNYYYYYYYYNNYYYYYNYYYYYYYYNYYNY", "YNNYYYYYYNYYYYYYYYYYYYNYNNYYNYYYYYYYYNYYYYYYYYYYYN", "YYYNYYYYNNYYYYYNYYYYYNYYYYNYYNNYYYYYYYNYYYNYYYYYYN", "YYNNYNYYYYYYNYYYYNYNYYYNYYYYYYYYYYYYYYYNYNYYYYYYNY", "YYNNYNYYYYYYYNYYYYYYNYYYYNYYNYYYYYYYYYYYNYYYNYYYYY", "YYNYYYYNYYYYNYYYYNYYYYYYNYYYYYYYYYYYYYYNYNYYYYYYNY", "NYYYYYNYYYYYYYYYYYYNYYYNYYYYYYNNNYYYYYNYYYNNYYYNYY", "YYNNYNYYYYYYYYYYYNNYYYYYNYNYNYNYYYNNYYYYYYNNYYYYNY", "YYYYYYNYYYNYYYYYNYYYNYYYYNYYYYNYYYYYYYYYNYYYNNYYYY", "YYYNYYNYYYYYNYYNYYNYYYYYYNYYYNYYYYNYNYYYYYYYNNNNYY", "YYYYNNYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNNYYY", "YYYYYYYYYNYYYYYNYYYYNYYYYYYYYYYNYYNNYYYYYYNYYNYNNN", "YYYYNYYYNYYNYYYYYYYYNYYYYYNYYYNYNYNNNYYNYNYNYYYNNY", "YYNNNYYYNYNYYYYNNNYNYYYYYYYNYYYYYYNYYNNYYYYYYYYNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3626.2811534160783;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> x = {2, 3, 2, 4, 5, 8};
    vector<int> y = {2, 1, 0, 1, 2, 0};
    vector<string> streets = {"NYYNNN", "YNYYNN", "YYNNNN", "NYNNYY", "NNNYNY", "NNNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 7.9856487941004675;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> x = {0, 100, 0};
    vector<int> y = {0, 0, 1};
    vector<string> streets = {"NYY", "YNY", "YYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 100.50249993750313;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> x = {41, 67, 34, 0, 69, 24, 78, 58, 62, 64, 5, 45, 81, 27, 61, 91, 95, 42, 27, 36, 91, 4, 2, 53, 92, 82, 21, 16, 18, 95, 47, 26, 71, 38, 69, 12, 67, 99, 35, 94, 3, 11, 22, 33, 73, 64, 41, 11, 51, 68};
    vector<int> y = {47, 44, 62, 57, 37, 59, 23, 41, 29, 78, 16, 35, 90, 42, 88, 6, 40, 42, 64, 48, 46, 5, 90, 29, 70, 50, 6, 1, 93, 48, 29, 23, 84, 54, 56, 40, 66, 76, 31, 8, 44, 39, 26, 23, 37, 38, 18, 82, 29, 41};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 202.98905599164513;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> x = {52, 10, -30, 50, 1000, -300, 400};
    vector<int> y = {15, -85, -302, 503, 753, -100, 355};
    vector<string> streets = {"NYYYYNY", "YNYNNYY", "YYNYYYY", "YNYNYYY", "YNYYNYY", "NYYYYNY", "YYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 1841.687996642475;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> x = {0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<string> streets = {"NYNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNN", "NYNYNNNNNNNNNNNNNNN", "NNYNYNNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNNNNN", "NNNNNYNYNNNNNNNNNNN", "NNNNNNYNYNNNNNNNNNN", "NNNNNNNYNYNNNNNNNNN", "NNNNNNNNYNYNNNNNNNN", "NNNNNNNNNYNYNNNNNNN", "NNNNNNNNNNYNYNNNNNN", "NNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNNNYNYNNNN", "NNNNNNNNNNNNNYNYNNN", "NNNNNNNNNNNNNNYNYNN", "NNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNYNY", "NNNNNNNNNNNNNNNNNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> x = {0, 0, 0, 1, 0};
    vector<int> y = {0, 1, 3, 2, 4};
    vector<string> streets = {"NYNNN", "YNYYN", "NYNYY", "NYYNN", "NNYNN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 46.813036755690376;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 69.29646455628168;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> x = {0, 0, 1, 1};
    vector<int> y = {0, 1, 0, 1};
    vector<string> streets = {"NYYY", "YNYY", "YYNY", "YYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2.414213562373095;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> x = {-959, -533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322, -667, 673, -336, 141, 711, -747, -132};
    vector<int> y = {547, 644, -338, -243, -963, -141, -277, 741, 529, -222, -684, 35, -810, 842, -712, -894, 40, -58, 264, -352, 446, 805, 890, -271, -630, 350, 6, 101, -607, 548, 629, -377, -916, 954, -244, 840, -34, 376, 931, -692, -56, -561, -374, 323, 537, 538, -882, -918, -71, -459};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 3841.617978714874;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> x = {233, 213, 803, 36, 548, 819, 952, 950, 770, 875, 562, 319, 389, 386, 724, 367, 41, 494, 243, 891, 125, 403, 222, 519, 760, 46, 864, 372, 226, 364, 108, 618, 145, 838, 246, 694, 943, 213, 905, 682, 84, 735, 275, 232, 301, 424, 218, 239, 652, 746};
    vector<int> y = {124, 127, 665, 572, 132, 44, 646, 242, 617, 895, 208, 785, 583, 134, 943, 655, 969, 260, 425, 732, 408, 674, 416, 682, 50, 71, 160, 521, 153, 503, 470, 679, 262, 107, 783, 171, 83, 716, 661, 140, 90, 23, 654, 25, 684, 89, 243, 319, 252, 918};
    vector<string> streets = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2073.033318276323;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> x = {0, 0, 10, 10};
    vector<int> y = {0, 10, 0, 10};
    vector<string> streets = {"NYYY", "YNYY", "YYNY", "YYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 24.14213562373095;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> x = {0, 1, 7, 0};
    vector<int> y = {0, 1, 1, 10};
    vector<string> streets = {"NYNY", "YNYN", "NYNY", "YNYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 14.407983906682238;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> x = {1000, 1000, 500, 500, 0, 0};
    vector<int> y = {0, 1000, 499, 501, 0, 1000};
    vector<string> streets = {"NYYNNN", "YNNYNN", "YNNYYN", "NYYNNY", "NNYNNY", "NNNYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 2412.8000566251403;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> x = {0, 20, 20, 0, 5, 15};
    vector<int> y = {0, 0, 10, 10, 10, 10};
    vector<string> streets = {"NYNYNY", "YNYNYN", "NYNYYY", "YNYNYY", "NYYYNY", "YNYYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 33.027756377319946;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> x = {0, 1, 3, 3};
    vector<int> y = {0, 0, 1, -1};
    vector<string> streets = {"NYNN", "YNYY", "NYNY", "NYYN"};
    WalkingDistance* pObj = new WalkingDistance();
    clock_t start = clock();
    double result = pObj->getLongestShortest(x, y, streets);
    clock_t end = clock();
    delete pObj;
    double expected = 4.23606797749979;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22664173&rd=13508&pm=9924
********************************************************************************
#include<iostream> 
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<map>
#include<set>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<queue>
#include<stack>
#include<utility>
#include<sstream>
#include<cstring>
using namespace std;
#define FOR(I,A,B) for(int I=(A);I<=(B);++I)
#define FORD(I,A,B) for(int I=(A);I>=(B);--I)
#define REP(I,N) for(int I=0;I<(N);I++)
#define SIZE(x) (int)(x).size()
const int maxN=55; 
const int INF=(1<<30); 
double dist[maxN][maxN]; 
 
class WalkingDistance
        { 
        public: 
    int sqr(int a){ return a*a; } 
        double getLongestShortest(vector <int> x, vector <int> y, vector <string> st) 
            { 
        int n=SIZE(x); 
        REP(i,n) REP(j,n) dist[i][j]=(i!=j)?INF:0;  
 
        REP(i,n) REP(j,n) if(st[i][j]=='Y') dist[i][j]=sqrt( sqr(x[i]-x[j])+sqr(y[i]-y[j])); 
 
        double tmp; 
        REP(k,n) REP(i,n) REP(j,n) if( dist[i][j]>(tmp=dist[i][k]+dist[k][j])) dist[i][j]=tmp; 
 
        double ret=0;
      
          REP(a,n) REP(b,n) if(st[a][b]=='Y') 
         REP(c,n) REP(d,n) if(st[c][d]=='Y'){ 
                        double D=dist[a][b]+dist[c][d]; 
            double A=min(dist[a][d]+dist[b][c],dist[a][c]+dist[b][d])+D;
            ret=max(ret,A); 
         }    
               return ret/2; 
            } 
        
 
        }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/