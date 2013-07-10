/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12142
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

class ColorfulWolves {
public:
    int getmin(vector<string> colormap);
};

int ColorfulWolves::getmin(vector<string> colormap) {
    int ret;
    return ret;
}


int test0() {
    vector<string> colormap = {"NYN", "YNY", "NNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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
    vector<string> colormap = {"NNNNNNNY", "NNNNYYYY", "YNNNNYYN", "NNNNNYYY", "YYYNNNNN", "YNYNYNYN", "NYNYNYNY", "YYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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
    vector<string> colormap = {"NYYYYN", "YNYYYN", "YYNYYN", "YYYNYN", "YYYYNN", "YYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> colormap = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> colormap = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYNNNNNYYYYYYNNNNNYYYYYNNYYYNNYYYYYYYYYY", "YYYNYYYYYYYNYYYYYYYYYYYNYYYYNYYYYNYNYNYNYYYYYYYYYY", "YNNNNYYYYYYNYYYYYYYYYYYNYYYYNYYYYNYNYNYNYYYYYYYYYY", "YYYYYNYYYYYYNNNNNYYYYYYNNNNNYYYYYNYYNYYNYYYYYYYYYY", "YYYYNNNNNYYYYYYYYNYYYYYNYYYNYYYYYNYYNYYNYYYYYYYYYY", "YYYYYYYNYYYYYYYYYNYYYYYNYYYYNYYYYNYYYYYNYYYYYYYYYY", "YYYYYYYYNYYYNNNNNYYYYYYNYYYYNYYYYNYYYYYNYYYYYYNYYY", "YYNNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYNYYNNNNNNNNYYYYYYYYNNNNNNYYYYYYYYYNNYYYY", "YYYYYYYYYYYNYYYYYYYYYYNNNNNNYNYYYYYYYYYYYYYYYNYYYY", "YYYNNNNNYYYYNYYYYYYYYYYYYYYYYYYYYNNNNNYYYYYNNYYYYY", "YYYYYYYYYYYYYNYYYYYNNNNYYYYYYNNNNNYYYYYNNNNYYYYYYY", "YYYYNNNNYYYYYYNYYYYYYYYYYYYYYYYYYYNNNNNYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "YYNNNNNNYYYYYYYYNYYYYYYYYYYYNNNNYYYYYYYYYYNNNNNYYY", "YYNYYYYYNNNYYYYYYNYYYYYYNNNNNNNNNYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYNNNYYYNYYYYYYYYYYYYYNNNNNNYYYYYYYYYYYY", "YYYYYYNYYYNNNNYYYYYNYYYYYYYYYYYYYYYYYNNNNNYYYYYYYY", "NNNNNYYYYYYYNYYYYYYYNYYYYYYYYYYYNNNNNNNNYYYYYYYYYY", "YYYYYYYYYYYYYNNNNYYYYNYYYNNNNYYYYYYYYYYYYNNNNNNYYY", "YYYYNNNYYYYNNNNYYYYYYYNYYYYYYYYYYYYYNNNNNNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYNNNYYYYNNNNYYYYYYYYYYYY", "YYYYYYYYYNNNNNYYYYYYYYYYNYYYYYNNNNYYYYYYYYYYYYYYYY", "YYYNNNNYYYYYYYYYYYYYYYYYYNYYYYYNNNNYYYYYNNNNNYYYYY", "YYYYYYYYYYYNNNNNYYYYYYYYYYNYYYYYYYYYYNNNNNYYYYYYYY", "YYYNNNNNNYYYYYYNNNNNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNNNNNYYYYYYNNNNNYYYYYYYNYYYYYYYNNNNNNYYYYYYYY", "YYNNNNNYYYYYYYYYYYYYYYYYYYNNNNNNYYYYYYYYYYYYYNNNYY", "YYYYNNNNNYYYYYYYYYNNNNNNNNNYYYNYYYYYYNNNNNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNNNNNNYYYYYYYYY", "YYYYYYYYYYYYYNNNNNNYYYYYYNNNNNNYNYYYYYYYYYNNNYYYYN", "YYYYYNNNNNNNNYYYYYYNNNNNYYYYYYYYYNYYYYYYYYNNNNNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNNNNYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNYYYYYYYNNNNNY", "YYYNNNNNNNNYYYNNNNNNNNYYYYNYYYYYYYYYNYYYYYYYYYYYYY", "YYYNYYYYYYYYYYNYYYYYYYYYNNNYYYYYYYYYYNYYYYYYYYYYYY", "YYYNYYYYYYYYYYNYYYYYYYYYYYNYYYYYYNNNNNNYYYNNNNNYYY", "YYYNYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYY", "YYYNYNNNNYYYYYNYNNNNYYYYYYNYYYYYYYYYNNNNNNYYYYYYYY", "YYYNNYYYYNYYYYNNYYYYNYYYYYNYYYYYYYYYYYYYYNYYYYYYYY", "YYYNYYYYYYNYYYNYYYYYYNYYYYNYYYYYYYYYYYYYYYNYYNNNNY", "YYYYYYYYYYNYYYYYYYYYYNYYYYNYYYYYNNNNNNYYYYYNYYYYYY", "YYYYYYYYYYNYYYYYYYYYYNYYYYNYYYYYYYYYYYNNNNNNNYYYYY", "YYYNYYYYYNYYYYNYYYYYNYYYYYNYYYNNNNNNNNNNNNYYYNYYYY", "YYYYNNNNNYYYYYYNNNNNYYYYNNNNNYYYNNNNNNYYYNNNNYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYNNNNYYYYNNNNNNNNNNNNYYYYYNNNNNNNNNYYYYYYYYYYNY", "YYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> colormap = {"NN", "NN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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
    vector<string> colormap = {"NY", "YN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> colormap = {"NNN", "NNN", "NNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1128;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> colormap = {"NYN", "YNY", "YYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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
    vector<string> colormap = {"NYNN", "YNYN", "YYNY", "YYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> colormap = {"NYNNN", "YNYNN", "YYNYN", "YYYNY", "YYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> colormap = {"NYNNNN", "YNYNNN", "YYNYNN", "YYYNYN", "YYYYNY", "YYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> colormap = {"NYNNNNN", "YNYNNNN", "YYNYNNN", "YYYNYNN", "YYYYNYN", "YYYYYNY", "YYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> colormap = {"NYNNNNNN", "YNYNNNNN", "YYNYNNNN", "YYYNYNNN", "YYYYNYNN", "YYYYYNYN", "YYYYYYNY", "YYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> colormap = {"NYNNNNNNN", "YNYNNNNNN", "YYNYNNNNN", "YYYNYNNNN", "YYYYNYNNN", "YYYYYNYNN", "YYYYYYNYN", "YYYYYYYNY", "YYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> colormap = {"NYNNNNNNNN", "YNYNNNNNNN", "YYNYNNNNNN", "YYYNYNNNNN", "YYYYNYNNNN", "YYYYYNYNNN", "YYYYYYNYNN", "YYYYYYYNYN", "YYYYYYYYNY", "YYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> colormap = {"NYNNNNNNNNN", "YNYNNNNNNNN", "YYNYNNNNNNN", "YYYNYNNNNNN", "YYYYNYNNNNN", "YYYYYNYNNNN", "YYYYYYNYNNN", "YYYYYYYNYNN", "YYYYYYYYNYN", "YYYYYYYYYNY", "YYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> colormap = {"NYNNNNNNNNNN", "YNYNNNNNNNNN", "YYNYNNNNNNNN", "YYYNYNNNNNNN", "YYYYNYNNNNNN", "YYYYYNYNNNNN", "YYYYYYNYNNNN", "YYYYYYYNYNNN", "YYYYYYYYNYNN", "YYYYYYYYYNYN", "YYYYYYYYYYNY", "YYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> colormap = {"NYNNNNNNNNNNN", "YNYNNNNNNNNNN", "YYNYNNNNNNNNN", "YYYNYNNNNNNNN", "YYYYNYNNNNNNN", "YYYYYNYNNNNNN", "YYYYYYNYNNNNN", "YYYYYYYNYNNNN", "YYYYYYYYNYNNN", "YYYYYYYYYNYNN", "YYYYYYYYYYNYN", "YYYYYYYYYYYNY", "YYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> colormap = {"NYNNNNNNNNNNNN", "YNYNNNNNNNNNNN", "YYNYNNNNNNNNNN", "YYYNYNNNNNNNNN", "YYYYNYNNNNNNNN", "YYYYYNYNNNNNNN", "YYYYYYNYNNNNNN", "YYYYYYYNYNNNNN", "YYYYYYYYNYNNNN", "YYYYYYYYYNYNNN", "YYYYYYYYYYNYNN", "YYYYYYYYYYYNYN", "YYYYYYYYYYYYNY", "YYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> colormap = {"NYNNNNNNNNNNNNN", "YNYNNNNNNNNNNNN", "YYNYNNNNNNNNNNN", "YYYNYNNNNNNNNNN", "YYYYNYNNNNNNNNN", "YYYYYNYNNNNNNNN", "YYYYYYNYNNNNNNN", "YYYYYYYNYNNNNNN", "YYYYYYYYNYNNNNN", "YYYYYYYYYNYNNNN", "YYYYYYYYYYNYNNN", "YYYYYYYYYYYNYNN", "YYYYYYYYYYYYNYN", "YYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNN", "YYYNYNNNNNNNNNNN", "YYYYNYNNNNNNNNNN", "YYYYYNYNNNNNNNNN", "YYYYYYNYNNNNNNNN", "YYYYYYYNYNNNNNNN", "YYYYYYYYNYNNNNNN", "YYYYYYYYYNYNNNNN", "YYYYYYYYYYNYNNNN", "YYYYYYYYYYYNYNNN", "YYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNN", "YYYYYNYNNNNNNNNNN", "YYYYYYNYNNNNNNNNN", "YYYYYYYNYNNNNNNNN", "YYYYYYYYNYNNNNNNN", "YYYYYYYYYNYNNNNNN", "YYYYYYYYYYNYNNNNN", "YYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNN", "YYYYYYYNYNNNNNNNNN", "YYYYYYYYNYNNNNNNNN", "YYYYYYYYYNYNNNNNNN", "YYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNN", "YYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 351;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 378;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 406;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 435;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 465;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 496;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 528;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 561;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 595;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 630;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 666;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 703;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 741;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 820;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 861;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 903;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 946;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1035;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1081;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> colormap = {"NNYN", "YNNY", "NYNN", "YNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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
    vector<string> colormap = {"NNYN", "NNNY", "NYNN", "YNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> colormap = {"NNYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYNYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYNYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> colormap = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYNYYYYYYYNYNYYYYYNYYYYYYYYYYYYYYYYYYNNYYY", "YYYYYYYYYYYNYNYYYYYYYYYYYNYYYYYYYYYYNYYNYYYYYYYNYN", "YYYYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYN", "NYYYYYYYNYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYNYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYNYYYYYYNYYYYYYYNYYYNYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYNNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNNYYYYYYYYNYYYYYYYYYYYNYYYYYYYNYYYYYYY", "YYYYYYYYYYNYYNYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYNYYYNYYNYYYYYYYYYY", "NYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYNYYYNYYNYYYNYNYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYNYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYNYYYYYY", "YYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYN", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYNYYY", "YYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> colormap = {"NYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYN", "NNNYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYNYYYYYNYNYNYYYY", "YYYNYYYNYYYYYYYYYNYNYYYYYYNYYYYYYYYYYYYYYYYYNYYYYY", "YYYYNYYYYYYYYYYNYYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYNNYYYYNYYYYNYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYNNYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYN", "YYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYNYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNNYYNYNYYYYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYY", "YYYNYYYYYYNYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYNYYYYYYYYYYYYYNYYYNYYYYNYYYYYYYYYYYYYYY", "YNYYYYNYYYYYNNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYN", "YYYYYYYYYYYNYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYNYYYYYYYYYNNYYYYNY", "YYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYNYYNNYYN", "YYYYYYYYYYYYNYYYYNYYYYYNYYYYYYYYYYNYYYYYYYYYNYYNYY", "YYNYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYNYYYYNYYYYY", "YYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYNYYYNYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYNYYYYNYNYYYYYYNYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYNYYYYYNYYNYY", "NYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYNYYYYYYYYYYYYYYYYYYYNNYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYNYYNYYYNYYYYYYYYYYNYYNYYN", "YYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYNYYYYNYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYNYNYYYYYYY", "YYYYYYYYNYNYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYYNYNYNYYYNYYYYYN", "YYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYY", "YYNYYYYYYYYYYYYYYNYYNYYYNYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYNNYYYYYYYY", "NYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYNYYNY", "YYYYYYYYYYYYYYNNYYNYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYNYYNYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYNYYYNY", "YYYYYYYYYYYYYYYYYNYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> colormap = {"NYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYY", "YNYYYYNYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYY", "NYNYYYYYYYYYNYYYYYYYYYNYYYYYNYNNYYYYYYYYYYNYYYYNYY", "NYYNYNNNYYYYNYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYNY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYNYYYYYYYYNNYNYYYYYYYYYYYYYNYYYYYYYYYYNNYYY", "YYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYNYYYYYYYN", "YYYNYYYYNYNYYYYYYYYYYNNYYNYYYYYYNYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYNYYY", "YNYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYNYYNYYYYYYYYYYYYY", "YNYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYNYYYYYYYYNYYYYYYNYNYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "YNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "YYYYYYYNYNYYNYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYN", "YYYYYYYNYYYYYYYYYYNYYYYYNYYYYYYNNYYYYYYYNYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYNNYYYNNYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYNYNNYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYNYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYNYYNYY", "YYYYYYYYYYYYYYNYNNYYYYYYNYYYYNYYYYYYYYYYYYYNYYYYYY", "YYYYNYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYNNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYNYYYYY", "YYNYYYYYYYYYYYYYYNYYYYYYYYYYNYNYYYYYYYYNYYNYYYYYYY", "YYYYYYYNYYYYYYYYNYYYNYYYYYYYNNYYYYNYYYYNYYYYYYNNYY", "YNYNYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYNYYYYNYYYYYYNYYY", "YYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYNYYYYYYYYYNNYYYYNNYYYYYYYYYYYNNYY", "YYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYNYNYYYYYYYYY", "YYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYNYYYNYYYNYYNYYYYYYY", "YYYYYYYYYYYYNYYNYNYYYYYYYYNYNYYYYYYYNYYYYYYYYNYYYY", "YYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYNYNYYNYYYYYYYYY", "YYYYYYYYYYYYYNNYYYNYYYYYYYYYNYYYYYYYYYNNYNYYYYYYNY", "YYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYNNYYYNYYYYY", "YYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYN", "YYYYNYYYNYYYYYNYYYYYYYYYYYYYYNYYYYYNYYYYYNNYYYYNNN", "YYYYYYYYYYNYNNYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYNYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYNYYNYYYYYYYNYYNYYYYYNNYYY", "YYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYY", "YYYNYYNYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYNYYYYYYNYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYNYYYYYNYYYYYYYYYNN", "YYYYYYYYNYYYNYYYYYYNYNYYYYYYYYYYYNYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> colormap = {"NYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYNY", "YNYYYYYYYYYYNYYYYYYYYYYYYYYYNYYNYYYYYYYYNYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYNYYYYYYYYYY", "YYNNYYYNYYYYYNYYYYYNYYYYYYYNNNYYYYYYYYNYYNYYYYNYYY", "YYYYNYYYNYYNYNYYYYYYYYYYYYYYYYYYYYYYNYNYYYNYYYYYYY", "YYYYYNYNYYYYYNYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "NNYYYYNYYYYYYYYYYNNYYYYYYYYYYYNNYYYYYYYYYYNYYYYYYN", "NYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YNYNYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYY", "YYYNYNYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYNYYNYYYYNYYYYYYYYNYYNYYYYYYYYYYYYYYYNYNY", "YYYYYYNYYNYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYNNYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYNYYYYYYYYNYYNYYYYYYYYNYYYYYYYYYYYY", "YYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYNNYYYYYYNYYNYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYNYYYYNYNYNYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYY", "YYNYNYYYYYYYYYYYYNYYYYYYYYYYYNYYNYYNYYYYYYYYYYYYYY", "YNYYNYYYYYYYYNNYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYNYNNNNYYYNYYYYYYYYYYYYYNYYNYYYYYNY", "YYYYYYYYYYYYYYYYYYNYNYYYYYYYYNYYYNYYNYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YNYYYYYYYYYYYYYYYYYNYYNYYYYYNYNYYYYYYYYYYYYYYYYYYN", "YYYYYYNYYYYYYNYYYYYYYYNNYYYYYYYYYYYYYNYYYNYYYYYNYY", "YYYYYNNYYYYYYNNYYYNYYYNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYNYNYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYNNYYYYYYNYYYYYYYYYYYYYYYY", "YNYYYYNYYYYYYYYYYYYYYYYYYYYNNYYYYYYNYYYYYYYYYYYYYY", "YYYYYYNYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYNYYYYNYYYYYYYNYYNYYYYYYYYY", "YYYNYYYYYYYNYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYNYYYYYYYYYNYYYYYNYYYYNYYNNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYNYYYNYYYYYYYYYNNYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYNNYYYYYY", "YYYYYNNYYYYNYYYNYYYYYNYYYYYYYYYYYNYNYNYYYYYYYYYNYY", "YYYYNYYYYYYYYYYYYYYYYYYNYYYYNYYNYYYYNNYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYNYYYYYYNYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYNNYNNYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYNNNYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYNYNYYYYYYYYNYYYYYYYYYYYNYYNYYYYYYYY", "YYYNYYYYYYNNYYYNYNYYYYYYNYYYYYYYYYYNYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYNNNYNYYYYYYYYYYYYYYNYYYYYY", "NYNYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYNYYYYYYYYNYNYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYNYYNYYYYNYYNYYYYYYYYNYYYY", "YYYYYNNYYYYNYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYNYYYYYYYYYYYYNYYYNYYYNYYNYYYYYYYYNYYYYYYYYYYNYY", "NYYYYYYNYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYNYYNYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYNYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> colormap = {"NYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYNYYYNYNYYYYYYY", "YNYYNYYNYYYYYYYYYYYNYYYYNNYYYYYYYYNNYYYYYYYNYNYYYN", "YYNYYNYYYYYYYNYYNYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYNYYYYYYYYYYNNYYNYYYNNYYYNYYYNYYYYY", "YYNYNYYYYYYNYYYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYNYYY", "NYYNYNYYNNYYYYYYYYYYNYYNYYYNYYYYYYYYYYYYYYNYYYYNYN", "YNYYYYNYYYYYYYYNYYYYYYYNYNYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYNYNYYNYYYYYYYYYYYYYYYYYYYNYNYYNYYYYNYYYNYYY", "YYYYYYYNNYYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYNYYYNNYYYY", "YNYYYYYYNNNYYYNYNYYYYYYYYYYYNYYYYYYYYYYYNYYYNYYYYY", "YYYYYYYYNYNYYYYYYNYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYNY", "NYYYYYYNYYYNYYYNYNYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYNNYYYYNYNYYYYYYYYYYYYYYYYYYNYYYYYNYNYYY", "YYYYYYYYYYYYYNNYYYYYYYYYNYYYNNNNYYYYYYYYYNYYNYNYYY", "YYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYNNYYYYNYYY", "YYYYYYNYYYYYYYYNYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYNNNYYNYYYNYYYYYYYYYYYYNNYYYYYYYYYYYY", "YYNNYYYYYYYYYYYYYNYYYYYYYYNYYYNYYYYYYNYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYNYYNYYYYY", "YYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYNN", "YYYYYYYNYYYYNYYYYYYNNYYYNYYNYYYNYYYNYYYYYYYYYYYYYY", "YYYNYYYYYNYYYYYYYYYYYNNYYYYYYYYYYYYNNYYYYYYYNYYYYY", "YNNYYYYYYYNYYNYYYYNYYYNNYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYNNYYYNYYYYYYNNNYYYNYYNYYYYYYYYYYYYYYYYNYN", "YYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYNNYYYYYYNYYYYYYYN", "YYYYYYYNYYYYYYNYYYYYYYYYYNYNYYYYYYYYYYNYYYYYYYYNYY", "YNYNYYYYYYYYYYYNYYYYYYYYYYNYYYNYYYYYYYYYYYNYYYYNYY", "YYYYYYYYYNYYYYYYNYNYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYY", "NYYYYYYYYYYYYYYYYNYYYNYNYYYYNYYNYYYYYYNYYYYYYYNYYY", "YYYNYNNYYYNYYYYYYYYYYNYYYYYYYNYYYNNYYYYNNYYYYYYYYY", "YYNYYYYYYYYYYYYYYYNYYYYYNNYNYNNNYYYYYYYYYYYYYYYYNY", "YYYYNYYYYYYYNYNNYNNYYYYNYYYYNYYNYYYYYYYYYNYYNNYYYN", "YYYYNNNYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYNYYYYYNYYYYY", "YYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYNYNYYNYYYYYYYNYYY", "YYNYYYYYYNYYYYYYYYYYYYNYYYYYYYNYYYNYYNYYYYYNYYYYYY", "YYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYNYYYNNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYNYYNYYYYNYNY", "YYYYYYYNYYYYYNYNYYYYYYYYYNYYYYYYYYYYYNYYYNYYYYNYNY", "YYNYYYYYYYYNYYYNYYYYYYYNYYYYYYYYYNYYYYNYYYYYYYYYYY", "YNYYYYYYYYYYYNYNYYYYYYNYYYYYNYYNYYYNNYYNYYYYNYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNNYYYYNYYNYYNYYY", "YYYYYYYNYYNYYYYYYYYYNYYYNYYYYYYNYYYYYNYYYNNYYYNYYY", "YYYYYYYYYNYYYYNYYYYNNYYYYYYYYYYYYYYYYYYYYYNYYYNYYY", "NYYNYYYYYYYNYYYYNYNYNYYYYYYYNYYYYYYYYYYYYYYNYNYYYY", "YNYYYYYYYYYYYNYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYNYYNYYNYNYNYYYYNNYYYYYYYYYYYYYYYYYYYNNYNYN", "YNYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYNYYYYYYYYYYNYNYYY", "YYYYYYYYYNYYYYYYYYYYNNYYNYYYNYYYYNYYYYYYYYYYYYYNNY", "YYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYNY", "YNYYYYNYYYYYYYYYYYNYYYYYYYYNYYYYYNYYYYNYYYYYYYYNYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> colormap = {"NYYNYYYYNYYNNYNYYYYYYYNYYYYYYYYYNNNYYYYYYYYNYYYYNY", "YNNYNYYYYYYYYNYYNYYYYYYYYYYYNYNYYYYNYYYYYYNYYYYYYY", "NYNYYYNYYYYYYYYYYNYYNNYYYYYYNYYYNYYYYNYYYYYYYYYYYY", "YYNNNYYYYYYYYYYYYYNYYYYYNYYYNYNYYYYYYYYYYYNYNNYYYY", "YYYYNYNNYYYYYYYYYYYNYYYYYYNYNYYYYYYYYYNNYYYYYNYYYY", "YYYNYNYYNNYYYYYYNYNYYYYYYYYYYYYNYNYYNYYYYYYYNYNYYY", "YYYYYNNNYNYYYYYNYYYYYYYYNYNYYYNYYYYYYYYNYYYYYYYNYY", "YYYNYYYNYNNYYYYYNYYYYYYYYYYNYYYYYYYYNYNNYYYYYNYYYY", "YYYYNYNYNNYYYYNYYYYYYNYYYYYYNYYYYYNYYYYYYYYYYNYYYY", "YYYNYYYYYNYYYYYYYYNYYYYYYYYYYNYNYNYNYNYYYYYNYYYYYY", "YYYNYYYYYYNYYYYNNYYYYNYYYYYYYYNYYYYYYYYYYYYNYYYYYY", "YYNYYYYYYYYNYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNNYY", "YYYYYYYNYNYYNNYYYYYNNYNYYYYYYYYYNYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYNYNYYYNYYYYYYYYYYYYYNYYNYYYYYYYYNYYYY", "YYYNYYYYNYYYYYNYYYYNYYYYYYNYNYYNYYYYYYNYYYNYNYYYYY", "YYYYYYNYYYNYYYYNNYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYNYY", "YYYNYYYYYYYYYNYYNYYYYNYYNYNYNYYYYYYYYYYYYYYYYYYNYY", "YYNNYYYYYYYYYYNYYNYYYYYYYNYYYNYYYYYYYYYYYYYNYYYNYY", "YYYYYYNYYYNYYNYYYYNNYYYYNNYYYYYYYYYNNYYYYYYYYYYNYY", "YYNYYNYYYYYYYYYYYNYNNYNYYYYNNYYYNYYYYYYYYNYYYYYYYN", "YYYYYYYNYNYNYYNYYYYYNYNYYYYYNYYYNYYYYYYYYNYYYYYNYY", "YYYYYYYYNYYYYYYYYYYYYNNNYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYNYYYYYYNYYYYYYNYYYYYYNYNYYYYYYNYYYY", "YYNYYNYYYYNNYYNYYNYYYYYNYYNYYYYYNYYYYYNYYYYYYYYYYY", "YYYNYYYYNYNYYYYYNYYYYYYNNYYYYYNYNYYYYYYYYYYYYYYNYY", "YNYYYYYNYYNYYYYNNYYYYYYNNNYNYYNNYNYYYYYYYYYYNYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYNYYYYNYYNYYYNYY", "YYYNYYYYYYYYYNYYNYYYYNYYNYYNYYYYNYYYNYYYYYYNYYYYYY", "YNYYNYYYNYNYYNYYYYYYYYYYYNNYNYNNYYYNNYYYYYYYYYYYYY", "YNYYYYYYYYYNYYYYYYYYYNYYYYYYYNYYYYNYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYNYYYYYNNYYYYYYYYYYYYNYNYYYY", "YNYNYYYNYYYYYYYYYYYYNYYYYYYYYNYNYYYYYYYNYYYYNYYYYY", "YYYYYYNYYYYYYYYYYNYYYYYNYYYYNYYYNNYYYYYYYYNYYNYYNY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYNYNNYYNYYYYYNYYYYNYYYYY", "YYYNYNYYYYYYYYNYYYYYYYNYNNNYYYNYYYNNYYYYYNNYYNYYYY", "NYYNYYYNYYYYYYYYYYYYYYYYYNYYYYYNYNNNYYYNYYNYYYYYYN", "YYYYYYYYYNYYYYYYYYYYYYYNNNYYYNYYYNYYNYYYYYYYYYNYYY", "YNYYNYYYYYYYYYYYYYNNNYYYYNYYYNYYYYYNYNYYYYYYYYYYNY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYNYYYYYYYYY", "YYYYNYYYNNYYYYYYYYYYYYYYYNYYYNNYYYYNYYYNYYYYYYYYYY", "YYYYYYYNYYYYYYYYYNNYYYYNYYYYYNYYNYYYYYNYNNYYYNYYYY", "YYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYNYYNYYYNYYNYYNNYYYY", "NYNNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYNYYYYNY", "YYNYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYNYYYYYYYYNYNYNYYY", "YYYYYYNYYYYYYYYYNYYYYYYYYYNNYYYYYYYNYNNYYYYYYNYYYY", "NYYYNYNNYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYNYYNYYNNYY", "YYYYYYYNYYYNYYYYYYYYNYNNYYYYYYYYYYYYNNNYYYYYNYYNYY", "YNYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYNYYYYNYYYYNN", "YYYYYYYYNNYNYNYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNYNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> colormap = {"NYNYYYYNYYNYYYYYYYYNYYYYYYYYNYNYNNYYNYYYYYYYYYNYYY", "YNYNYNYYYNYYYYYYNYNNYYNNYYYNYNYNYYYYYYYYYYYNYYYYYY", "YYNYYYYYYNYNYYNYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYNY", "YYYNYYYYYYNNYYYYNYYYYYNYYYYYYYYYYYYNYYYYNYYYYNYNNY", "NYYYNYYYYNNYYYNYNYYYYYNYYYYYYYNYYYYYYYYNYYNYYYYYYY", "YYYYYNYYYYYNYYYYYYNYYYYYYYYNYYYYYYYNYNYYYNNYYYYYYY", "NYYNYYNYYYYYYNYYYYYYYNYYYNYNYYNNYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYNYYYYYYNYYYNYYYYNNNYYYYNYNYYYYYYYYYY", "YYNYNYYNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNNYNYY", "YNYNYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYN", "YYYYYYYYYYNNYYYYNYYYNYYYNYYNNYNYYYYYNYYYYYYYYNYYYY", "YYYYYYYYYYYNYYYNYYYYYNYYYNNYYYYYYYNYYNYYYYNYYNYYYY", "YYYYYYYYYYYYNYYYYNYYYYYYYYNYYYYYYYYNNYYYYYNNYNNYNY", "NYNYYYYYYYYYYNYNYYYYNYYYYYNYNNYYYYYYYYYYYYYNYNYNYY", "YNYNYNYYNNYNYNNYYYYYYYNYYYYYNYYYYNYYYYNYYYYNYNYYYY", "YYYYNYNYYYYYNYYNNYYYYYNNYYYNYYNYYYYYNYYYYYYYYYYYYN", "YYYYYYNYYYYYYYYYNYYYYYYYYYYYNYYYNYNYYYYYYYNNYNYYYN", "NYYYNYYYYYYYYYYNYNYYYNYYYYNYYYNNNYYYYYYYYNYYYYNYYY", "YYYYYYYYYYYNYYYYYYNNYYYYYYYYYYYNYYYYNYYYNYYYYYYYYY", "YYYYYYNYNYYYYYYYYYYNYNYYYNNYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYNNYYYNYYNYYYNYYYYYYYYYYNYYYYYY", "YYNYNYYNYYYYYYYNYYYYYNYNYYYYNYYNYYYNYYYYYYNYYYYYYN", "YYYNYYNYYNYYYYYYNYYYYYNYYNYYYYNNYYYYYYYYYYNYYNNYYY", "YNNYYYNYNYYYYNYNNNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNNYNYYYYYYYYYYYYYYYYYNYNYYYYYYNYNYNYYYYYYYYYYNYYY", "YYYYYYNNYYNYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYNYYNYYYYNYYNYNYYYNYYYYYNYYYYYYYNYYYYYYYYY", "YYYYYYYYYNYNYNYYYNYYYYYNYYYNYYYYYYYYYNYYYYYYYYYNNY", "YYYYNNYYYYYYYYNYNNNYYYYYNYYYNYYNYYYYYYYYNYYYYNYYYY", "YNYYYYYYYYYYYYYNYYNYYYNYYYNYYNYYYNYYYYYYYYYNYNYYNY", "YNYYYYNYYNNNYYYYYYYYYYYYYYNYYNNYYYNYNYNYYYYYYYYNYY", "YNYYNYNYYYYYYNYYYYYYNNYYYYYYYYYNNYYYYYYYYYYNYYYNYY", "YYNYNYNNNYNYYYYYYNYNYYYYYYYYYYYYNNYYYYNNYYYYYYNNYY", "YYYYYYYYYYYYYYYYYYYYNYYNYYYYYYNYYNNNYYYYYYYYYYYYYY", "YYNNYNYYNNYYYYYYYYYYYYYYYYYYNYYYYYNNYYYYNYNYYYYYYY", "YNYYYYYYYNYYNNNNYNNYYYYNYYNYNYYNYYYNYYNYYYYYNYYYYY", "YYNYYYYNYNYYYYYYYYYYNYNYNNYYNYYYYYYNNYNYYYNYNNYNYY", "YYYNYYYYYYYYYYYYYYYYYYNYYYYYYYNNYYNYYNYYYYYYYYYNYN", "YYYYNYYYYNYYYYYYYYYYYNYNYNYNYYNYYYYYYYNYYYYYNYYYNY", "YYYYYYYNYYYYYYYYYYYNYYNYYYYYYNYNNYYYYYNNYNYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYNYNYYNY", "YYYYYNYNYYYYYYYYYYYYYYYNYYYYYYNNYYNYYYNYYNYNNYYYYY", "NYYNYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYNYYYYNYYYYYYN", "YYYYNYYYYNNYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYNNYYYNY", "YYYYYYYYYNNYNYYYNYYYYNYYYYYYYYNYNYYNYYYYYNYYNYYYYY", "NYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYY", "YYYYYYYYNYYYNYYYYYNNYYNYYYYYYYYYYNYYYYYYNYYYYYNYYN", "YYYYYYYYYYYYYYYYYNYNYYYYNYYYYYNNYYNNYYNYYYNYNYYNYY", "NNYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYNNNY", "YYNYYYYYNYYNYYYYYNYYNYYNYYYYNYYYYYYYYYYYYYYYNYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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
    vector<string> colormap = {"NYNYNYYYYYYYYYYYYYYYNYYYNYYYYYNNYYYYYNYYYYYYYYNYYY", "YNYYYYNYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYNNYYYYYYYY", "YYNNNYYYNYYYNYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYNNYYNNY", "YYYNNYYNYNYYYYYYNYYYYYYYYYYYYYNYYYYYYNYNYYYYYNYYNY", "YYYNNYYYYNYYYYYYYYYYYNYYYYYNNYYYYYYYYYYYYNNYYYYYYN", "YYYYNNYNNYYYNYYYNYNNYYYYYYYNNYNYNYNYYYYYYYYYNNYYYY", "YNYYNYNYYYNNNYYYYYNYYNNNYYYYYYYYNNYYNYYYYYYNYYYYYY", "YNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNNNYYYYYNYYYN", "YYYYYYNNNYYYNNYYYYYYNYYYNNYYNYNNYNYYYYYYYYYNNNYYYY", "YNYNYNYYYNYNYYYYNYYYYYYYYYYYYYYYYYYYYNYNYYNYYYYYYY", "YYYYYYYYYNNYYNYYYNYNYYNYYYYYNNYNYYYYYYYNYYYYYNNYYY", "NNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYY", "YYNYYYYYYYYYNNYYNYYYYYYYYYYYYYYNYNYYYNYYYYYNNYYYYN", "NYYNYYYYYYYYNNYYYYNNYYYYNYYNYYYYNYYYNYYYYYYYYYYNYY", "YYYYYYYYNYYYYYNNYYNNYYYYYYYYYYNYYYYYYYYYYYYYYNYYYY", "NYYYYYYNYNYNYNNNYYYYYYYYYYNNYYNYYNYYYYYYYYYYYYYYYN", "YYNYYYYYYNYNYYNNNYYNYNYYYNYNYNNYNYNNYNYYNYYYYYNYYY", "YYYYYYYYYYYYYYNYYNYYYYYYNYYYNNNYYYYYYYYYYYNYYYYNYY", "NNYYYYYYYYYYNYYYYYNYYYYNNYYYYYYNYYNYYYYNYNYNYNYYYY", "NYYYYYYNYYNYYYYYNYYNYNYYYYNYNYYYYNNYYYYNYYYYYYYYYY", "NYNYYYYYYYYYYYYYYNNYNYYYNNYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYNYYNYNNYYYNYYYNYYYYYYYYNYYYYYYYYNNYYYYY", "YYYYYYYYYYNYYYYYYYYNYYNYYYYYYYNYYYNYYYYYYYYYYYNYYN", "YNNNNYYYNNYNYYYYNYYYYNYNNYYYYYNYNYYNNYYYYYNYYYYNYN", "YYYYNNYYYYYYYYYYYYNYYNYNNYYYYYYNYNYYNYYYNNNYNNYNYN", "YYYYYYYNYNYYYYYNYYYYYYYYNNYYYYYNYYYYYYYYYYYYYYYNYN", "YYYYYNYYNYYYYNNYYYYNYYNYYNNYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYNYYYYYYNYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYN", "YYNYYYNNNYYYYYNYYNYNNNYYYNYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYNYYYYNNYYYNYNYYYNYYYYYYYYYNYYNNNYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYNYYYYYYNYYYYYNYYNNYNYNYNYYY", "YYYYNYNNYYYYYYNYYNYYYYYYYYYYYYYNYYYYYYYYYNYYYNYYYY", "YNYYYYYYNNNYYYYNNYYYYYYNYYYYYYYYNYYYNNYYYYYYNNYYNY", "YNNYYYYYYYYNYNYYYYYYYYYYNYYNYYYYYNYYYYYNYYYNYYNNYY", "YYYYYNYYYYYNYNYYYYYYYYYYYYNYYYYYYYNYYYYYYNYYNYYNYY", "YYYYYYYYNNNNNYNYYYYYYYYYYYNYNYYYYYNNYYYYNYNYYNYYYY", "YYYYYYNYYYNNYYYNYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYY", "NYYYYYYYYYYYYNNNYNYYYYYYNNYYYYYYYYNYYNYYYYNNNYYYYN", "NYNYYYYYYYNNYYNYYYYYYYYYYYYYYYYNYYYYYNNYYYNYYYYYYY", "YYYYYNYYNYYYNYNYNYYYYNYYNNYYYYYNNYYYYYYNNNYYNNNNYY", "YYYYNYYYYYYYYNYYNNYYNYYYYYYYYYYYNYYYYYYYNYYYNYYYYY", "YYYYYYYYNYYYYYYNYYYYYNYYYYYYYYNNYYNYYYYYYNYYYYYYYY", "NYNYYNYYNYYYYYYYYYYYYYYYYYYNYYNYYNYYNYYYNYNYNNYYYY", "NYNYYYYYYNYYYYYYYNYNYYYNYYYYYNYNYYYYNYYYYYYNYYYYNY", "YYYNYYYYYNNYYNYYNYYYYYYYNNNNNYYYYYYYYYYYYYYYNNYYYY", "YYYYYNYYYYNYYNYYYYYNYYYYYYNYYNYYYYYNYYYNYYYNYNNYYY", "YNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYNYYNYYN", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYNYY", "YYYYYYNYYYYYYNNYNYYYYYYYYNYNYYNYYYYNNYYYNNYNYYYYNY", "YNYNYYYYYNYYYYNYYYYYYYYNYYNNYYYYYNYNYYNYYYYYYNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> colormap = {"NYNYYYYYNYYYNYYYYYYYYYYYYNYYYNNYNYYYNYNYYNYNYYYYNY", "YNYYYYYYNNYNNYYYYYYYYYYYNYYYYYYYYYYNYNYYYYNNYYYYYY", "NNNYNYYYYYYYYNYYYYYYYYYYNYYNYYYYYYYYYYYYYYNYYYYYNY", "YYYNYYNYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYN", "YNYYNNNYYYYYYYYYYYYNYNYYYYYNYNYNYYNYNYYYYYYYYYYYYY", "YYYYYNYYYNYYYYYYYYNYYYNYYYYYYYNNNYYYYNYYYYYNYYNYYY", "YNYYYYNNNYYYYYNYYNYYYYYYYYYNNYYYYYYNNYYYNYYYYYNYYY", "YYYYYYYNYYNNNYYNNYYYYNYYYYNYYYYYYYYYYYYYNYYYNYNYYN", "YYNYNYYNNYNYYYYNYNYYYYYYYYNNYYYYYYYYYYYYYYYNYNYYYY", "YYYYNYYYYNYYNYYYYYNYYYYYYYYYYYYYNYYNYNYYYNYYYYYYYY", "NYYNYYYYYNNYYNYYNYNYYYYNYYNYYYYNNNNYYYNYYYYYYYYYYY", "YYYYYYYYYYYNNYYNYYYYYNYYNYNYYYYYYYYYYYNYYYYYYYYYYN", "NYYNYYYNYYYYNYNYYYYNYYNYYNNYNNNNYYYNYYYYYYYYYYNYYY", "YYYYYYYYYNYYYNYYNNYNYYYYYNYYYYNYYYYYYYYNYNYNNYNNNY", "NYYNYYYYYYYYNYNYYYNYYYYYYNNYNYYYYNYNNNYYNNNYYYYNYN", "YYYNYYYYNYYYYYNNYYYYYYYYNYYYYYYYYYNYYYYYYYYYYNNYYY", "YYNNYYYYNYYYYYYYNYYYNYNYYYYYYYNNYYNNYYYYYYYYYYYNNY", "NNYYNYYNNYYYYYYYYNYYNNYNYNYYNYNYYYYYYNYNYYNYYNYYYY", "NYYYYYYYYNYNNYNYYNNYNYNNYYYYYYYYYYYYYNYYYYYYYYNYYY", "YYYYYYYNNYYYYYNYNYYNNNYNYYYYYYNNYYYYNYYYYNYYYYYNNY", "YYYNNYYYYYYNNYYNYNNYNYYYYYYYNNYYYYYYYNYYYNYYYYNYYY", "NYYNYNYYYYYYYNYNYYYNYNYYYYYYNYNYYYYNYYYNNNNYYYNYYN", "YNNNYYYYYYNYYYYYNYYYYYNYNYYYYYYNYNYYNYYYYYYYYYNYNY", "YYYYYYNYYYYNNYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYNYYYYYNNNYNNYYYNNNYNNYYYYYYYNYYYYNYYYYYYYY", "YYYNYYYYYYNYYYYYYYNYYYYYYNYYYNNNYYYNNNNNYYYYYYNYYY", "NYYYYYYYYYNYYYYNYYNYYYNYYYNYNYYYYNYYYYNYYYNYYNNNYY", "YYYYNYYYYNYYYYYYNNYYYYNYYYYNYYYYYYYYNYNYYYYYYYYNYY", "YYNYYYYYNYYYYYYYNNYYYYNYYYYYNYYNYYNYYYNYYYYYNYNYYY", "YYYYNYNYNYYYNYNYNYYNYYYNYNYYYNYNNNYYYNYYNYYYYYYYYY", "YYYYYYYYNNNYYYYNYNYNNYYNYNYNYYNNYYYYYYNYNYYYYYNYNN", "YYYYNYYYYNYNNYNYYYYYYYYYYYYNYYYNYNYNNYYYYYYYYYNYYY", "YYNNYYYYYYNYYYYYYYYNYYNNYYYYYYYYNYNYYYNYYYNYYYYYYY", "YYYYYYYYYNYYYNYYNYYYYYYYYYYYYYYYNNYYYNNNYYNYNNNYYN", "YYYNYYNYYNYYYNNYNYNYNYYYYYNYNNYYNYNYYYYYYYYNYYYYYY", "YYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYNYNYYY", "NYYYYNYYYNNYYYYYYNYNYYYYYYYYYNYYYNYNNYYYYYYYYNYYNY", "YNYYYYNYYYYNYYYYYNNYYYYYYYYYNYYYYYNYYNNYYYYYNYYYYY", "YNNNYYYYNYYYYYNYNNYYYNNYYYYYNYYNYYNNYYNYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYNNNYYYYYYYYYYYYYNYYYYYNYNYYNNYYYY", "NNYNNNYYYNYYYNYNYYYYYYYYNYYYNNNYNYYYYNYNNYYYYYYYNY", "YYNYYYYNYNYYNYYYYYYYYYNNYYYYNYNYNYYYYYNYNNNYYYYNYY", "YYYYYYYYYYYYYYYYYYNNNYYYYNYYYYYYNYNYYNYNNNNNYNYYYN", "NYYYYYYYYYNYYYYNYNYNYNYYNYYYYYYYYYYYYNYNNNYNYYYYYY", "NYYYNYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYNYNNYYYYNNYYNY", "YYNYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYY", "NNYYYYYNYYNYYYYYNYNYYYYYYYNNNYYNYNYYYNYYYYYNYYNYYY", "NYYYNNYNYYYNYYNYYYYYYYYYNYNYYYYYYNYNYYNYYYYYYYYNYN", "YNYYYYYYYYYYYYNYYYNNYYYYYYYYYYYNYYYYYYYNYYNYYYYNNY", "YYYNYNYYNYYYYNYNYYYYYYYYYNNYYNYYYYYYYYYYYNNYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> colormap = {"NNYNYYNYYYYYYYYNYYYYYYYYYNYYNYNNYYYYNYYYNYYNYNNYYY", "YNYYNNNYYYNNYYYYYNYYNYNNNYYNYNNNYYYYYYYYNYYYNYNYNY", "YYNNNYYNYYYNYYYYNYYNYYNYNNYYYYNYYYYNYNYNNYYYNYYNNY", "NYYNYYNNYYYYYYYNNYYNYYYYYYYYYYNYNYNNNYYYYYYYYYYYYY", "NYNYNYNYNYYYYYYNYYYYYYYYYYNYYNNNNYYNYYYYNNYYNYYYNY", "YYYYYNYNYYYYYYNNNYYYNNYNNYYNYYYYYYYYYYNYYYYYYYYYYY", "YYYYNNNYYYYNYYYYNYYYYYYYYYYYNYYYNYNYYNYNYNYNNYNYYY", "YNYYYYYNYNNYYYYYYYYNYYYYYYNYYYYNYYYYNYYYYYNYYYYYYY", "NYNYYYYYNYYYYYYYYYYNNYYYYYYYYYYYYYNYNYYYNYYYYYYYNY", "YYNNYYYYYNYYNYNYYYYNYYYYNYYYNYYYNYYYNYYNYYYYYYNYYN", "YYYYYNYYYYNYYYYYYYNYYYNYYYYYYYYYYYNYYYNYYYYYYYYYYY", "YNYYYYYYYYYNYNYNYYYYYYYNNYYNYYNYYYNNNYYYNYYNYNYYYY", "YNYYNNYYNNYYNYYNYYYNYYYYYYYYNNYYYYNYYYYYYNYNYYNYYY", "YYYYYYYYYYYYYNYYNYYYYNYNYNNYYYYNNYYYYYNNYYYYYYNNYY", "YYYYYNYNNYNYYYNYYYYNYNYYYYYYNYYYYYYYYYNYYYNYYYYNYN", "YYYYYYYYNNYNNYYNNYNNNNYYYNYNYYNNYNYNYNYNYYYNYNYYYY", "YNYYNYYNNNYYYNYNNYNYYYYYYYYYYYNYYYYNYYYYNYYYYNNYYY", "YYYYYNYYYYNYNNYNYNYNYYYYYNNYYYYNYYYYNYYYYYYYYYYYYY", "YYYYYNYNYYYYNNYNNNNYYYNYYYYYNYYYYYYYYYYNYYNYYYYNYY", "YYYYYYYYYNYYYYYYYYYNNYYNYYYYYNYYYNNYYYYYYYYNYYYYNY", "YYNNYNNYYYNYNNYYYYYYNNYYYYYYYNYNYYYYYYYYYYYNYNYNNY", "YYYNYYYYYNYYYNNYNYYYYNYYYYYYYNYYYYYNYNYYYYNYYYYYNY", "NNYYYYYYYYNNYYNYYNYYYYNYYYYNYYYYNYYNYYYYYNYYNYNYYY", "NYYYYYYNYYYYNYYYYYNYYNYNNYYYNYYYYYYYNYYNYYYNYYNYNY", "YYYYYYYYNNNYYYNYNNYYNNYYNYYNNYYYYNYYYYYYNYYYYYYYNN", "YNYYYNYYYYNYNYYNNNNYYYYYYNYYYYYNYNYYYYNYYNYYYYYNYY", "YYNYYYYYYYYYNNYNNYYYYNYYYYNYNYYYNYNNYYNYYYYYNYYYYY", "YNYYYYNYNNYYYNYNYYYYYNYYYYNNYYYYYYYNNYNNYYYYYYYYNY", "YYYYNYNYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYNYYYNYYYYYYYY", "NYYNYYNYYYNYNYYNYNYYYYYYYNYYYNYYYYYYNNYYYYYNYNYYNN", "YYNYNYYYYNYNYYYYYYYYYYYYYYYYYNNNNNYYYYNYNNYNYYYYYY", "YNNNYYNYYYYNYYYYYYYYNYYNYNYYNYYNYYYNNYNNYYYYNYYNNY", "YYYYYYYNYNYYNYYYYYYYNNYYNYNYNYYYNYYYNYNYYYYNNYYYYY", "YYYYNYYYYNYYYYYYYYNYNYYYYYNYYYNNYNYYYYNNYNYYYYYYYY", "YYNYYYYYYYYNYYNNNYYNYYYYNYNYYYNNYYNNYNYYYYNYYYYYYY", "YYYNYNNYYYNYYYYYYYNYYYNYYYYNYYYYYYYNYNYYYYYYYYYYYY", "YYNYNYYYNYNYNYNYNYYNYYYYYYYNYNYYYNNYNYYYYYYYYYYYYN", "YYYNYYYYNNYYYNYYYYYNYYNYYNNNNYNYYYYYYNYYYYYNYYNNYY", "NYYYNYNYNYYNYYYYYYYNYYYNYYYYYYYYYYYYYYNYYYNYYNYYYN", "YYNYYYNYYYYYNYNYYNYYYYNYYYYYYNYYYYYYYYYNNYNYYYYYYN", "YNYNYYYNYYYYNNYNYYNYYYYYYYNYYYYYYNYNYYYYNYYYNYYYNY", "NNYYYYNYYYYNYYNNYYYYNNYYYNYYNNYNYNYYYYYNYNYYYYYYYY", "YYNYYYYNNYYNYYYYYNYYYYYYYYNYYYYYNYYYYYYNYYNYYYYYYN", "YNNYNYYYNYYYYYNYYNYNYNYYNYYYNYYYYNYYYNYYYYYNYYYYNN", "YYYNYNNNYNYNNYNYYYYYNYNYYNYYYYYYNYYYYYYYYNNYNNYNYY", "NYYYYNNYYYNYYYYYNNYYYNYYYYYYYNYYYNYYYYNYYYYYYNYYYY", "NYYYYYYNYYYYYYYYYYYNYYYYNNYYYNYYNYYYYYYYYYYYYYNYYY", "YYNYYYNYYYNYNYNNYYYYYYYNYYYNYNYYYYYYYYNYYYNYYYYNYY", "YYYYYYYYYYYYYYYYNYYNNYYYYYYYNYYYYYYYYYYNYYNYYYYYNY", "YYNYYNYYYNNYYYYYNNYYYNYYYYYYYNYYYNYYYNYYYYYYYYNYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> colormap = {"NYYYYYYYNYYNYYYYYYNYYYYNYYYNNYYYYYNYYYYNYYYNNYYYYN", "NNYYYNYNYYYYYYYYNNYNYNYYYYNNYYYNYNYNYNYNYNNYNNNYYN", "NNNYYYYNYYYNYYYYYNYYNNYYYYYNYNYYYYYYYYNYYYYYYYYYYN", "NYYNNYYNYYYYNYYNNYYNYYYNYYYYNYNYNYYYNYYYYYYYYNYYNN", "YNNYNNYYYYYYYYYYYYYYNYYYNNNYYYYNNYYNYYYYNNNYNNNNNY", "NNNYNNYNNYYYYYNNNYNYYYNYNNYYNYNYYYYYNNNNYYYYYYYNYY", "NNYYYYNYYNYNYYYYYNNYYYYYYYNYYYYYYYYYYYYYNNYNYNYNNY", "YYYYYYYNNYYYYYYNNYYYNYYYYYYNYYNNYYYYYYNNYYYYYYYYYY", "YYNNNYNYNNNNNNYNYYNYYYYNYYYYYYYYYYNNNYYYYYNNYNYYYN", "YYYYYYYYYNYYYNYNYNYYYYYNYYYYNNNYYYNNYNYNYNYYYNYYYY", "YNYNYYNNNNNNYYYNYYYNYYYYYYYNNYNYYYYYYYYYYYYYNYYYYY", "YYYYNYYYYYNNNYNYYYNYYYNYYYYYYYYYYYYYNYYYYYYNYYYYYN", "NYNNYNYNYYYNNYYYYYNYNYNNYYYYYYYNYNYYYYYYYYNYYYYYYY", "YYYNYYYNYYYYYNYYNYYYYNYNYYYYYYYYNYYYNNNYYNYNYYYYNY", "YYYYYYYYYYNYNYNNNYYYYYYNYYYYYYYYYYNYYYYNYYYYYNNNNN", "YNNNYYNYYYYYNNNNNYYYNYYYNNYYYYNYYYYNYYYYYYYYNNYYYY", "NNYYNNYYNNYYNYYYNNYYYYYYYNYNYYYYYYYYNYYYYYYNNYYNNN", "NYYNYYYYNYYYYYYYYNYYYYYNNYNYYYYYYYYNYYYYYNYNYNNYNN", "NYYNYYYNYYYNNYYYYYNYYYYYYYNYNYYYYYYYYYYYNYYYYYYNNY", "YYYYNNNNYYYYYYYYYNYNYYYNYYYYNYYYNYYYYNNYYYYYYYYYYN", "YYNYNNYYYYYYNYYYYYYNNYNNNYYYYNYNYNYYNNNNYYYYYNNNNY", "NYYYYYYYYNNNYNYNYYYYYNYNYYYYYYYYYYNYNNYYYYYNYNYYYY", "YYYYYNNYYNYYNNYYNNYYYNNNYNYYNYYYYNYYYYYYYYNYYYYYNY", "NNYNYYYNYYNNYYYNYYYYYYNNYYYYNYYNYNNYYYYYNYYYYNYYYY", "YNNYYYYYYYNYYYYYNNNNYYNYNYYYNYNNYYNYYNYYYYYNYYNYYN", "YYYYYYYYYYYYYYYYYNYNYYYNYNYYYYNYYYNYYYYYYNYNNYYNNY", "YYYYYYYYYYNYYNYYYYYYNYYYYYNYNYNYNYNYYYNYYYYYNNYYYY", "NNYNNYNNYYYYYNYYNYNNYNYNYYNNYYNYNYNYYYYYYNYYNYNNNY", "YYYNYYYYYNYNYYYYYYYYYYYYYYYYNYNYYYYYYYNYYYNYYYNNYY", "YYYNYYYYYYNNYYYYYNNYYYYYNYYYYNYYYYNYYYYYNYYNYYNYYY", "NYNYYYYYYYNYYYYNYYNYNNYYYYYYYNNYNYYNYYYYYNYYYYYYYY", "YYYYYNYYNYNYYYYNNYYYYNYYYYYYYYNNYYYYYNNNYYNYYNYNYY", "NYYYYYYNYNNYYYNYYYNYNYNYYYYYYNYYNNYYYYYYYYYYYYNYYN", "YYNYYYYNNNYYYYYNYNNYNYNNYYNNNNYYYNYNYYYNYYNYYNYYNN", "YYYYYYYYYNYYYNNYYYYYYYYNNNYYYYYYYYNYYYYYYNYYYYYYYN", "YNYYYYNYYYYYYYYNNYYYYYYNYYYYYYNYYNYNYNYYYYNNYYYYYY", "YYNYNYYYYYYNYYYYYYYYYNYNNYYYYYYYYYYYNYYNYYNNYYYYYY", "YNYYNNNYNNYYYYYYYYNNNYYYNYYYNYYYYYYYYNNYNYYYNYNYYY", "YYYYYYYYYYYYYYYYYYYYYNNYYNNNYNYYYYYNNYNYYNYYYNYYYY", "NYYYYYNYNYYYYNYYYYYYYYYYYNYYYNYYYYNYNYYNYNYYYYYYYY", "NNYYYYYYYYNNYYYYYYYYYYNYNYNYYYYNYYNYYYYNNYYNNYYNYN", "YNYYYNNYYYNYNYYYNYYYYNYYYYYNYYNNYNYYYYYYYNYNNNYYYY", "NNYYYNYYYNYYYNYYNYYNYYYYYYYYYYYYNYYYYNYYYYNYYYNYYY", "YYYYNYYNNYYNYNYNNYYYYYYYYYYNYYYYNYNYYNYNYYYNYYYYYY", "YYYYYYYYNNYNNYNYYYNYNYNYYYYYYYYYNYYYYNYYYYYYNNNYYY", "NYYYYYNNNYYYNYYYYNYYYYYNNNYYYYYNYNNYYYNYYYNYYNYYYN", "NYYYYYYNNNYYYYYYYYYNYNYYYYNYYYNYYNYYYNYYNYYYYYNYNY", "YYYYNYNNNYYYYNNYYYYNNNNYYNYYYYYYYNNYYYNYNNNYYYYNYN", "YYYYYYYYYYYYNYNYYNNNYYYYYYYYYYNYNNYYYYNYYYYYNYYNNY", "NYYYYYNYYYYYYNNNYNYYNYYYNYYNYYYYYNYYYYYYYNYNYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> colormap = {"NYYYNYNYYYYNYYNNYYYYYYYYYYYYYYYNYYYNYNYNYYYYYYYNYY", "YNNYYNYYNNYNYNNNYYYYYYNYYYNYNYYYNNNNYYYYYYYNYNYNYY", "NYNYYYYYYNYNYYNNNYNNYNYYYYNYYYNYYYYYYYYNNYYNYNYYYY", "NYYNYYYNYNYYYYYYNYYYYYYNNYYYYYNYNNNYYYYYYNYYNYNYYN", "NYNYNYYYNYNNYYYYNYNYYYYYYYYNNYYYYYNYYYNNYNNYNNYNYN", "YYYYYNYYYYYYNNYYYYYYNYYYYYYNYNYNYYNNNYNYYYYNYYYYYN", "YYYYYYNYYYNYYYYYNYYYYYYYYNNYYNYYYNYYYYNYYYYYNNNYYY", "YNNYNYYNYNNYYYNYYNNYYNYYYNNNNYNYYYNYYYYNYYYYYYYYNY", "YNYYYYNYNNYYYNYYYYYYYYYYYNYNNYNYYNYYYYNNYYYYYNYYYN", "YYYYYNYYYNNNYYYYNYYNYYYNYYYYYYYNYYYNNYYYNYYNNYNYYN", "NNYNYNYYYNNYYYNYYYNYYNNYNNYYYYYNYNYYYNYNYNYYYYYNNN", "YYYYNYYYNYNNNNYYNYYYYYNYNYNYYYYYYYNYYYYYYNYYYNYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYNYYYNNYYYYYYYYYYYYYYYYYYYN", "YYYYYNNYYNYYYNNYYYYYNYYYYNYNYNYYYNYYYYYYYYYYYYYYYY", "YYNYNYYYYYYNYYNNYYYYYYNNYNYYYYNYNYNNNYYNNNYNNNNYYY", "NYYYYYYNNYNYYYYNYYYNNYNNYYYYYYYYYYYYYYNYYYYNYYYYYN", "NYYYYYYNYYNNYYYYNNYYYYYNNYYNYYYYNNYYYYYYNNYYYYNYYY", "NYYYNYNNYYYYYYNYYNYNYYYYYYYNNYYYYNNNYYYYYYYYNYYNYY", "NYNYYYYYYYNYYYNYYYNNYYYNYYNYYNYYYYYYYYNYYYYNYYYYYY", "YYYYNNYYNNYNNNNYYYYNYYYYYYYNYYYNYYNYYYYNYYYYYYYYYY", "YYYYNYYYYYNNNNNNNYNYNYYYYYYYNYYYYNYNNYYYYYYYNNYNYY", "YYYNYNYYYYYNYYNYYYYYYNNYYYYYYNYYNNYYNYYNYYYNYYYYYY", "YNNYYYYYYYYYNYYYYYYYYYNYYYNNYYYNYYYYYYYYYNYYYNNYYN", "NYYNNYYYYYYYNYYYNYYNNNYNYYNNYYYYYYYYYYNNYYNYYYYYYY", "YYYYNYNNYYNYYYYYYNYNYYYYNYYYYYYYYYYNNYYYYYNYYNYYYN", "YYYYNNNYYYNYYYYYYYYNYYNNYNYYNYYYYYYYYYYNYNNYYNYNNY", "YYYYYNYYYYYNYNNYNYYYNNYNYYNNYYYYYYYYYNYYYYYNYYNYNY", "YYNNYYYYYNNYYYYNYYYNYNYYYNYNYNNNNYYYYYYNYYYYYYYYYY", "YYNYYYNYYNYYYYYYYYNYYNYYYNYYNYYYYYYNYYYNYYYYYYYNNY", "YYYYYYNYYNYYYYYNYYYNNYYYYNNYNNYNNYYYNYYYYYNNYYYYYN", "NNYNYYNYYNYYYYNNYNYYYYYNYYYNNYNYYNNYNNYNYYYYYYNYNY", "YYYYYNYYYYNNYNNNYYYYYNYYYNYYYYNNYYYYYYNNYYYYNYNYNY", "YNYYYYNYYYNYNYNNYYYYYYYYNNNNNNYYNNYYNYYNYNYYYYYNYY", "NYYNNYYYYYNYYYYYNYNNNYNYYYYNNYYYYNYNNYYYNNNYNYYYYY", "YYYYNYYYYYYYYYNYYYYYNYNNNYYNYYYYYNNNYYYNYYYYNNNYYY", "YYNYYYNYYNYYNYYYYYYYYYNYYYYYYYYYYNYNYYYYYYYYYNYNYY", "NYYYNYYYYNYYYYYNNYYYYYNYYYYYYYYYYYNYNYYYNYYNNYYNYY", "YYYNNNYNNYYNNYYYYNNYYNYYYYYYYYYYYYYYNNNYNNYYYNYNYY", "YYYYYYYYYNYYYNYYYNYYYNNYYNYNYYNYNNNYYNNYNYNYYYNNYY", "YYYNYYNYNYNYNYYYYYNYYNNYYYYYYYYYYNYNYNYNYYYYYYYYNN", "NNYNYYYYNYNYYYYYYYNNYYYYYNYYYYYYNYYNYYNNNNYYYNYYNY", "YYYYYYYYYYYYNYNYYYNYYYNNYYYYNYYYYYYYYNYNYNNYYNYYNY", "NYYNNNNYNYNYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYNNNNYNNN", "YYNNYYYNYNNYYNNNYNYYYNNYNNNYYYYNYYYYYYYNYYYNYNYNYY", "YYNYYNNYYYYNYYYYYYYYNYNYNNYYYYNYNYYNYNYYNNYYNYYYYN", "NYYYYYYYYYYNYNYYYYYYYNYYYYNYYYYYYYYYNYYYYYYYYNNYYY", "NYYNYYYYNYYYNNYNYNNYYYYYYYYNNYYYYNNYNNYYNYYYYNNNNY", "YNNYYYYYNYYNYYYYYYYNYYYYYYYNNYYYYYNYNYYYYYYNNYYNYY", "YYYNYYYYYYYYYYYYNYYNYYNYYYYNNYYYNYYYNYNYYNYYYYNYNY", "NNNYYNYYYYYYYYNNYNNYYNYYYYNYNNYYYNYYYYYYYYYYYNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> colormap = {"NYYYYYNYYNYYYNNYYYYNYNNYYYYYYNNYYNYYYYYNYYNYYYNYYN", "NNYYYYYYYYYYYYYYNYYYNYYNYNYNYYYNYYYYYYYNNNYYYYNNYY", "YYNNNYNNYYYNYYYYYNYYYYYYYYYYNYYNYYNYYYNNYYYYYYYNYY", "NNYNYYYNNYNYYYNYYYYYYYNYNNYYNNYYYYYYYYYYYNYYYYYYYY", "YYNYNNYYNYYYYYYNYYYNYYYYYYYYYYYNYNNNYNYYYNYNYYYYYY", "YYYYYNNYYNYYYYYYYNYNYYYYYNNNNYYYYNYYYNNYYNNYNYYYYY", "NYYNYYNYYYNNYYNNYNNNYYYYNYNYYYNYYYNNNYNNNYNYYYYYYN", "YYNYNNYNYNYNNYYYYNNYYYYYNNYNNNYNYNYYYNYNYYYYYYYYYY", "YNYYYNYYNYYYYYNYYYYNYYYNNNYYYYNYYYYYYYYYYYNYYYYYNY", "YYNYYYYYYNYNYYYYYYNYYNNYYYYYNNNYNNNYYNYYYYYYYNYNYN", "YYYNYYNNNYNNYYYYYYYYYNYYYYNYYYYYYYYYNNYYYYYNYYYYNY", "NNYYNNNYNYNNNYYYYYYYNYNYYYYNYNYYNNYYYNYYYNYNNYNNNN", "NNNNYNYYNYYNNNYYNNYYYYNYYNNYYNYNYYNYNYNYNYNYYYYNYN", "NYYYNYYNYYNNNNYYYYYYYYYYNYYYNYYYYYYYYYNYYYYNYYYYNY", "NNNYNYYYYYYYYYNYYYYYYYYNNYNYYYYYNNYYYYNYNYYYYYNNNY", "YNYYYYNYYYNNYNYNYNYYNNNYYYNNYYYYYYNYYNYYYYYNYNYYYY", "YYNNYYNNYYYYNYYYNYNYNNYYYNYNYYNYNYNYNYYYYNYYYYYYYN", "NYYNYYYYNYYNYYNYNNYYYNYNNYYYYYYYYYYYYNNYNYYYNNYYNY", "YYNYYYYYNNNYYYYYNYNYYYYYYYNYYYYYYYYYYYYYYYNYNYNYYN", "YYNYYYYYYYYYYYNYYYYNYYYYYNYNYYYYYNYNYYNYYNNYYYYYYN", "YYNYYYNYYYYYYYYYYNYYNYNNYYYYYYYYYYYYYYYYYNYYYYYYYN", "YYYYYYYNNNYNNNNYYYNYYNYYNYYNYNYYYNNYYNYNNYNYYYYYYY", "YYYNYYYNYNYYYYNNYYYNYNNYNYNYYNYNYNNNYYNYNYYYYNNYYN", "YYYYYYYYYYNYYYNNYNNNYYNNNYNYYYYYYYNYNYYYNYNYYYYYNY", "YYYYNYYNYYNYYYNYNYNYYYYYNYYYYYYNNYYYYYYYYNYYNYYYYY", "NNYYNYNNNYNNYYYNNYYYNYYNYNNYYYYYNNYYYYYYYYYYYYYYYN", "YYNYNYNNYYNNYNNYYYNYYNYNYNNNNYYYNYNYYNYYYYYYYYYYYY", "YYNYYNNNYYYYYYNNYYNYYYYYYYNNYYYNYYYNYYNYYNYNYYNYYY", "NYYYNYNYYNYYYYYYNNYNYYYYNYNNNYNYNNNYYYYYYNYNYNNNNY", "NNNYYYNYNYYYYYNNNYYYNNNYYYNYNNNYYYYYYYNNNYYNYYNYYY", "YYNNYNYYYYYYYYYNYYNYYNNYNYNYYYNYNYNYNYYNYNYYYYYYNY", "YYYNNNNYNYYYNYYYYYNYYYYNYYYYNYYNYYYYYYNYYYNNNYYNNY", "NYNYYNYYNYNYYYYYYYYYYYYNYYNNYYYNNNNYYNYNNYYNNYYNYN", "YNYYYYYYYNYYYYNYYYNYYNNYYYYNYYYNYNNYNYYYYYYNNNNYYY", "NYYYYYYYYNYNNNNYNNNYYNNYYNNYYNNYYNNYYYYYYYNNNYYNYY", "NYYYYYYYYNYNYNYNYYYYYNNYNYYNYYYYNYYNYNNYYYYYYYYYYY", "YNNNYNNNYNYNYYNNYNYNYYYYYYYYNNYYYYYYNYYYNNYYNYYNNY", "NNNYNNYYYYYYYYYNYYYYYYYYNNYYYYYYNYYYYNYNYNYYNNYYYN", "YYNYYYYNYNNNYYYYYYYYNYYYYYYYYYYNNYYYYNNNYYYNYNYNYY", "YYYYNNYNYYYYYYNNNNYNNNYYYYNYYYYNYYNYNNYNYYYNYYYNYY", "YYNYYYYYNYYYYYNYYNYYNYYYYNNYYYYNYNYYNYYYNYYYYNYYYY", "YYNYYNYYYNYYYYYNYYNNNYNYYYNNNNYYYYNYYYYYNNNNNNYYYN", "NYYYYNYYNYNYYYYYYYNNNYNYYNNYYNNYNYYYNYYYYYNYYYNNYY", "YYYNYYYYNYYYYYYYYYNYNYYYYYYYNYNYYYYNNYNNYYYNYNNYYY", "YNYNNNNYYYYYYNNYYYNNYYNNYYYYYYYYNYYYNYYNYYYYNYNYYY", "YYYNNNYYYYNYYYYYNYYYYYNYYYYYYYYYYNYYYNNYYNYNYNYYYY", "YNNYYYYYYYNYYYYYNNNYYNNNYYYYNYYYNYYYNYNYNNYYNNNNNN", "NNYNYNYNNNYNNYNNYYYYYNYNYNNNYYYYNNYYYYYYYYYYYYNNYN", "YYNYYYYYYYYYNNYYYYYYYYYYYYNYNNNYNYYYYYYYNYNYYNYYNN", "NYNYYYNYNYNYNYYYNYNNNNYNYYNYYYYNYYYNYYYYNYNYYNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> colormap = {"NNNYNYYYYYYYYYYYNYYYYYYYYNYYYYYNYYNYNNNNNYNNNNYNYN", "NNYYYYYYYYYYNYNNYNYNNYNYYNNYYYYYNYYNYYNYYYYYYNYYNN", "NYNYYYNYNYNNYYNYYNYYNNYYYYYNYYNNYYYNYNYYYYYYNYNNNY", "NNNNYYNYYYYYNNYYNNYYYNYYNYYNNNYYNYYYYYYYYYYYNNYNNY", "YNYNNYNYYYYNYNNYYNYNYYYYNYYYNYNYYNYYYYYYYYYYYNYYYY", "YNYYNNYYNNYYYYYYYYYYYYYYYYYNYYNNYYYYYYNYNNNNNYNNNY", "NNYYNYNNYNYNYYYYYNNNNYYNYYNYYNNYYYNYNYYYYYYNYYNNYY", "YYNNYNYNNYYNYYYYYYYYYYYNNNNYYNNNNYNYYNYYYYYYNYNYNY", "NYNYYNYNNYYYNYNYNYYYYYNYYNNYYYYYYYYYYYYYYYYYYNNNNN", "YYYNNYYYYNYYYYYYYNYNYNYYYYYYYYYYNYNNYYYNNYNNYNNYYN", "YYYNYYYYYYNYYNNNYNYYYYYYYNYYNYYYNYYYYYYNYYYNYNYYYN", "YYYYNNNYYYYNYYYNYNNYYYNYNYYYYYNYYYYYNNNYYNYYYYYYYY", "NYNYYYNYYYYYNNYYNYYNYYYYYYNNYYNYYYNNNNYYNNYNNNYNYN", "YNNYNYNYYNYYNNYYYNYYYYNNNYYYYYYYNYNYYYYYYYNYYYYYYY", "NYYYYYYYNYYNNYNYYYYYYNYNYYNYYNNYYYYYNYYYYYYYYNNYNN", "YYYNYYNNYYYNYYYNNYNYYNYYNYYYYNYYYYYYNYYYNNYNYYYYYN", "YNYNYYYNYNNYNNYYNNNNNYYYYYYYYYYYNYNYYYNYYNYYYYYYYN", "YNYYNYYYYNYNYYNNNNNYNYYYNYNYYYNYNNYYYNYYYYYYNYYYNY", "YNYYNNNNYNYYNYYYNNNYYNYYYYYNYYYNNYYYYYYYYYYYNNNYYN", "YNNNYNYYYYNNYNYYNYYNNYNNNNYYYYYYYNYNYYNYYNYNNYNNYY", "YYNNNYYYYYYYNYYYYYYYNYYNYNYYYNYYYYYYYYYYYNYYNYYYYY", "YNYNYYYYYYYYYYYNYYYYYNNYYYYYYYYYYYNYYYYNYYNYYYNYYY", "NNYYNYYYNYYYYYYYYNNYYNNNYYNNYYYNYYYNYNYYNNNYNNYYYY", "NYYYNNYYYNYYYNYYNYYYNNYNYYYYNYNNYYNYYYNYYYNYYYYYYY", "NYYNYYYNYYYNYYYYYYNYNNNYNYYYNYYYNNYNNYYYNYNYYYYYNY", "NYNYNYYYYNNYNYYYYNYYYYYYYNNNYYYNYYNYNYYYYNNNYNYNYY", "YYYYNNYYNYYNYYYYYNYYYYYYYYNNNYYNYYNNYNYNYNYYYNYNYY", "YYNYYYYYYYYYNYYNNYYNYYNYYNNNNYYYNNYYNNNYYNYNYNYYYY", "NNNYNYNYYYYNYNYYNYNYNNYYYYNYNYYYYYNYNYYYNYYYYYYYYY", "YYNYYYNYYYNYYYYYYYNYYNNNYYYYYNYYYYNYYYNNNNNYNYYNNY", "YYYYYNYNNNYNYNYYYYNYNNYYYNYYNYNYNYNNYNYNYYYNYYYYYY", "YNYNYNYNYNYYYYYYYYYNYYYYNYNNNNYNYYNYYYYYNYNNNYYNYY", "NYNNNYNYNYNYYYYNYNYYYYYYYNNNYYNYNYYNYYYYYNYYYYYYYY", "NYYYYYYYYYNYYYNYYNYYNYNYYYNYYNYNNNYNYYYYYYYYNNYYNN", "YYYYYNYYNYNYYYNNYNYYYYYNYYYNNNYNYYNYYYYYNYNYNYYYNY", "YNYYNYYNYYYNYYNNYYYNNNYNYNYNYYNNNYYNYNYYYNNNNYYYNY", "YYYYYNYYNNYYNYNYNNYYYNYYYYYNYYYYYNYYNYYNYYNYYYYYYY", "YYNNNNNNYNYYNNYNNYNYYNYYYYYYNNYNYYYYYNYNNNYYYYYNYY", "NYYYYYYNYNYNNYNYYYNYYYYYYNNNYYYYYNYNNNNNYYYNNYNYNY", "NYNYYYYYYYNNNNYYYYYYYYNYYYYYYNNYYYYYYYNNYNNYYYYYYN", "YNNNYYNNNYYYNNYNYNYYYYYNNNNNYYYYYYYNYNNYNYNYNYYYYN", "NYYYYYYYYYNYNYYNNNNYYYYYYNYYYNYYNYYNYNYNYNNYNYNYNY", "NYNYNYYNYYYYNNYNYNNNYYNNNYNYYYYNYYNYYYYYNYNNYNYYYY", "YYNYYNYYYYYYYYNYYYYYNYNYNNNYNYNNNNYYNYNNNYYNYYYYNY", "YYYYNYNYYNNYYNYYYYYYNYYYYNYYYYYYYYYNNYYYYNYYNYYYYN", "YNYYNYYNYYYYYYYNYYNYYYNYYYYYYYYYNNYYNYNYNYYYNNYYYY", "YNYYYYYYYNNYNYNNYYYNYYYNYYYYYYYYYYNNYYYYYYYYYYNYNY", "YYYYYYYNYYNNYYYYNNYYYYYNYYNNNNNNYYYNYNYYYNYNNYNNNY", "NYYNYYYNNYNYYNYYYYNNYYNYYYYYYYNNYYYYNNYYYYNNYNYYNY", "YYYYYNNYYYNYYYNYYYNYNYYNNYYYYYNYYYNYNYYNYYYYNNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> colormap = {"NYYYYNYYNYYNYNYYNYNYYYYYYYYNYYYNYNYYNYNNNYNYYNYYYN", "YNYYNNYYNYYYYYYYNNYNNYYYYYYYNNYYYYYYYYNNYNNYNNNYYY", "YYNNNNYNYNYYNYNNYYNNYYYYYYYYYYYYYYNNYYNYYNYYYNYNNY", "YYYNYYNNNYYYYYNYNYNYNYYNYYNYYNYYYYYYYNYNNYNNNYYYYN", "NNYNNNYNYYYNYNNYNYNNNYYNNYYYYNYNYYYYYYYNNNNNNYYYYN", "YYYNNNNNNYNYYYYYYNYNNNYNYNNYYYYYYYYYNYYYYYYYYNYYYY", "YNNNYYNYNYYYYNNYYNNYNNNYYNYNNYNNYYNNYYYYNYYYNNYYYY", "YYNYYYYNYNNNNYYYYYYNYNNYNYYNYYYYYYNYYYYYYYYYNNYNNY", "YYNNNYYYNNYYYYYNNNYYNYYYNYYYYYNYYYYYYYNNNNNYYYYYNY", "YNYYYYNYYNNYNNYNNYYYNNYNYNYYNYYYYNYYYYYYYNNYNNYYYY", "YYNYYYNYNYNYYYYYNYYNYYNNNNNYYYYNYNYYNNYYYYNYNNYYNN", "NYNYNYYNYNYNYYYNYYYYNYYYNYYYNYYNYYYNNYNNYYYNYNYNYY", "YYYYYYYNNYYNNNYNYNYYYNNYNYNNYYYNYYYYYYYYNYYYYNYYYY", "NYNYYYNYNYNYYNNYYNYNNNYYNNYYYYYYYYYNYYYYNNNNNYYNNY", "NNYYNYYNNNYYYYNYYYYYNYYNNYNYYYNNYYYNYNYYYYNNNNYYYY", "YNYNYYYYYYNYNNNNYYYYYYYYYYYNNYYYYYNYYNNNYYNNYYYNYN", "YYYYNNYYYNNYYYNNNNYYNYYYYYYNYNYYYYYYNNYYYNYYNYYNNY", "YNYNNYYYYYNYYYNYYNYNYYYYNNYYYYYYNYNYNYYNNYYYYYYNNN", "NYNYYYYNYNYYYYYNNYNYNYYYYYYNNYYYYYNYYYYNYYYYYYYNYY", "NYYNNYYYYYYYYNNYYNYNYYNYYNYNNYNYNYYNYYNYYYNYYYNNYY", "YYNYYYYYYYYYYNNYYYYYNYYYYYYYYYNNYYNNYYYYNNYYYNYYNN", "NNYYYYYYYNYYNYYNYNYNYNYYYNNYNYYYNYNYYYYYYYYNNNNYYY", "YNYYYNYYYNYYYYNYNNNYYNNNYYYNNNYYNNYYYNYYNYYYNYYYYY", "YYNNNYNYYYYNYYNYYNYNYYNNYNYYNYNNNYNYNNYYNNYYNNNYNY", "NYNYYYYYYYYYNYNYYNYNYYYYNYYNYYNYYYYYNYNNYNNYNYNNYN", "YYNNNYYNNNYYYYYNNYYYNYYNYNYNYYYYNYNNYNNNNYNYYNYYYN", "YYNYNYYYYYYNNYNYYYNYNNYNNNNYYYYNYYNYNYYNYNYYNYNNNN", "YNYYYYYNNYYYYYNYYYYYYNYNYNYNYNYYYYYYYNYNYYYNYYYYYN", "YNNYNYNYYYNYNYYYNYNYYYNYNYYNNYYYYNNNNYNYNYNYYNNYNN", "NYYYYYYYNYNYNYYYNYYYNYYYYYYYNNYYYNYYNYYYNYYNNYYYNY", "YNYYNYYNYYYYYNYYNNYNYNNYYYYNYYNYYYNYYYNYNYYYYYYYYN", "YYYNNYYNNNYNYNYYYNYYYYYYNNNYYYYNNYNNNYNYNYYYNYNYYY", "YNYYNNYYYYYYYYYYNYYYYNNYNNNYYYYNNNNYYYYYYYYYYYNYNY", "YYYNYYNYYYNYYYYYYNYYNYNNYNYYYYNNNNYYNYNYYYNYNYNNYY", "YNYNYYYYYYNNNYYNYYYYNNNYNYYYYYYYYYNYYYYYYYYYYYYYYY", "YNNYYYYYYNYYYYYYYNYYNYYYYYNYNNYYYYYNYYNYYNYNNYYNYY", "YNYNNYYYNYYYYNNNYYNNYNYNNYNYYNYYNYYNNYNNNYYYNNYYNN", "YYYYYYYNYYNYYNNNNYYYNYNNNNNYNNYYNYYYYNYYNYYYNYNNNY", "NYYYYYYNYNNYYYYYYNYYYYNNYNNNNYYYYYNYNYNNNNYYNYYYYN", "NNYNNNNYNYYYNNNNNYYNYNYYYNYYNYNYYYNYNNYNYYNYNNYNYY", "NYNNYYNYNYYYYYNYYNYYNYYYYYNYYNNNNYNNNNYYNNNNYNNYYY", "YYNYNYNYYNNNNNNYYYNYNYNYYYYYYNYYNYYYYYNNNNYYYNNYYN", "YYYYYYNYYYYNYYYYNYYYYYYYYYYYYNYYYYYNNNYYYYNNYYYYYY", "YYYYNYYNNNYYNYNYYYNYNNYYYNNYYNYYYYYNNYYYYYYNYYYNYY", "NYYNYYYYYNNYNYYNNYNYNNYYNYYNYYYNNYNYYNYYYYYYNYNNYY", "YNYYYNNYYNYYYYNYYNYYYNYYYYNYNYNNYNYYNYNYYYYNYNNYYN", "YYYYYYYYYYYNYYNYYYNYYNNYNNYYYYYYYYNYNYNYYYNYYYNYYN", "YYYYYYYYYNYYNYYYYNYYYYNNNNYYYYYYYYYYNYYYYNYNYYYNNN", "NNYYNNNYYNYNYYYYYYYNYYYYYYYNYYYYNYNYYYYNYYNYYNYYNY", "YYNYNNYYNNYYYYNYNNNYNYNNYYYYNYYNNNYNYNYYNYNYYNNYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> colormap = {"NNYYYYYNYYYNYYYYNYYNNYYYYYYYYYYNNNNYNYNYYNYYNYNYYY", "YNYNYYNNYNNYNNNNNYYNNYNYYYNYNNYNYYYYYYYYYYYYNNYYYN", "YYNYNYYNNYNYYNYNNNYYNYNYNNNYNYYYNYYYYNYNNYNYYYYYYY", "YNYNNYNYNYYYYNYYNNYNNNYYYYYNYNYYYNYYYYNYYYNNNYNYNY", "NYNYNYYNYYYNNNYYYYYYNNNYYNNYYYNYNNNYYYNYYNYYYYYYNY", "NNNYYNNNYYNYNYNYYYNYYYYYYYYNYYYNNYYNNYNNYYNYYNYNYY", "YYYNNYNNYYNYNYNNYYYYYNYYYYYYNYYNNNNYYYYYYYYYYYNYYY", "YNNYYNYNYNYNNNNNYYYYNNNNNYYNYNYYYYNYNYYNNYYNNNYYYY", "YYYYYYYYNNYYYNNYNNYNYNNNNYNYNYYYNNYYYNNNNNYYNNYYYY", "YYYYNNNYNNNYYNNYYYYYNNNYYYNYYNYNYYNNYYYYYYNYYYNYYY", "YYNYNYYYNYNYNNYNYNNNYYYYYYNYYYYYNNYNNYYYNYNYYNNYYN", "NYNNYYYNNNYNYYNYNNYNNYYYYYNNNNYNNNNNYYYYYYYYYYYYNY", "YNYYNYYNNNNYNYNYYYNNNYNYYYYYNYNYNYYYYYYYYNNYYYYYYY", "NNYYYNNYYYYYYNYNYYYYYYNYYNYNYNNNYYYYYYNYYYNYNYYYYY", "NNYYYYYYNNNYNNNYNYNYNNYYNYNNYNNNNYYNYYYYYNNYYNNYYN", "NNYYYNYNNNNYNNNNNNNNYNNNNNNNYYYYYNYNNNYNYNYYNYYYYN", "YYYNNYYNNYYNYNYNNNYYYYYYNYNYNYYYNNNYYYNNYYYNYNYNYY", "YNYYYYYYNYNYYNNNNNYYNYYNNNYYYNYNYNNNYYNYYNYNNYYYYY", "YYYYNYNNNNYYYNYYNNNYYNYYYYYYNYYYYNYYYNNNYYYYYYYYYY", "YYNYYNYYNYYNYNYYYNYNNNYNYNYNNNYYNYYNYYYYYYYYYNNYYY", "YYYYYNYYYNNNYYYYNYYYNYYYYYNYNNYYYNYNYNYNYYYYNYYYYY", "NYNNNNNNYNYYYYNYNNYYYNNYNYYYYNYYNNNYYYYYYNYYNYYYNN", "YYYNYYYNYYYYYYYNYNYNYYNYYYYYYNNYYYYYYNYYYYYYYYNNYY", "YYNYYYYYNNNYYYNNYYYYYYYNNYYNNNNYYYYYYNNNNNYNYYYNNN", "NNNYNYYYYYNYYYNNYYYYYYYNNYNYYYYYYNYYNYYYNYYNYYYNYY", "YNYNNYYNYNNYNNNYYNYNYNNNYNYYYYYNNYYNYYYYNYYNNNYYNY", "NYYYNYNYNYNNYYYYYYNNYYNNNYNYNYYNYNYYNYYYYYYYNYYYNY", "YYYYYYYYYYNYYYYNYNNYYYYYNNYNYYNNNNYNYYYYYYYYNYYNYY", "NYYNYNNNNYYYNNYNYYYYYYYNYYYNNNYYYYNYYNYYNNNNYYYYNN", "NNNNNYYNYYYNNNYYYYYNYYYYNYYYNNYYYNYYNYNNNYNYYNYYYN", "NNYNYNYYNNYNYNYNYNYNNYNYNNYYNNNNYYYNNNYYNNYNNYYYNY", "YNNYYYYYNYYYNYYNYNYYYYNYNNNNNYNNYYYYYYYYYYNYNYYYYN", "YNYYNNYNYNYNNYYNYNYYYYNNYNYYYYNYNYYNYYYNYNNYNNYNYY", "YNYYYYNYNNYNYYNNYYYYNNYNYNYYYNNYYNYNNNNYYNNNNNNNYY", "YYNYYYNNYYYYNNNNYNNNYYYYYNYYNYNYNYNNYYYYNYNYYNYNYN", "YYYYNYNNNYYYYNYYYYYYNYYNNYNYNNYYNYNNNYYYYYYYNYYYYY", "YYYYNNYYYNYYYYYYYNNYNYYYYYYNNYNNNYYYNNYNYYYNYNNNNY", "YYYNYNYYYNYNYYNYNYYNYNYNYYYYYYYNYYYYNNYNYYNNYYYYNY", "NNNNYYYYYYYYYYYYYYYYNYNYNYYYYYYYYYYYYNNYYNYNYYYYNN", "NNYYNYYYYYYYYYYYYYYNNYYYYYYNNNNNYNNYNNYNNYYYYYYYNY", "NNYNYYYYNNNYYNYNNYNNNYNYNNYNYYYNYYYYNYYYNNYNYYYNYY", "NNYYYYYNYNYYYNYNYYNYYNYYNNNYYYNNYYNNNNYYYNYNYNYYYN", "YYYYNNYNNNYYNYYNYNYYNNNYYNYYNNYNYYNYNYYNNNNYYNNNYY", "YYYYYNYYYNYNYNYYYNNYYYYYYYYYYNNYYNYYNYYYYYYNNYYNYY", "YNYNYNYNNNYNYYNYNYNYNNNNYNYNNNYNYYNNYYYYYNYNNYYYNY", "YYNNNYYYYNYNYYYNYNYYNNNYYNYNYYNNYNNYNYNYYYYYYNYYNY", "YYYNNNYYYYYYNNYYNNNYNYNYNYYYYYYYYYNYYYYNNYNNYNNNNY", "NYYNNNYYYNNNYYYYNYNYNNYYYYYYYNYYYYYNYYNYYNYYYYYNNY", "NYNYYYYNNYNNYYNNNNYNNYYNNYNNYNYYNYYYYYYNNYYNNYYNNN", "YYYYYYNYYYNYNYYNNYYYNYYYYNYYYNNYYYNYYYYYNYNYNYYYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> colormap = {"NYNYNYYYYNYYYNNNYYNNYYNYYNYNYYNNYYYNNYYNYNNYYNYYYN", "NNNYNNYYNNYNYYYYNYYYYYYYNYYNNYYNNNYNYNNYYYYNNYYYNY", "YYNYYYNNYNYYYYYNYNYYYYNYNNNYYYYNNYYNYNNYYYYNYYNYYY", "YYYNNYYYNYYNYNNYNYYNNYNYNNYNYNYNYYYYNNYYNYYNNYNNYY", "NYYNNNYNYYYYYNYNYNYYNYNYYYYNNYNYYNNYNYYNYYNNYYNYYY", "YNYNYNYYYNNYYYYYYYNNNNNNNYNYYNNYYYNYYYYYYYYNNYNNYN", "YYYYYYNYYYNNYYYYNYNNYNYYYYYYNYYYYNNNNYNNYYYNNYYNYN", "NYNNNNYNYYNYYYYYNNNYYYNYYYNNNNYYYNYYNNYNNYNNYNYYYN", "NYNNNYYNNYYNYYYYYYYNYNNYYNYYYNNYNYNYNYNYNYYNNNYYYY", "YYNYNNYYYNYYYYYYYNYYYYYNNYYYNNYYYYNYYYYYYYYYYNNYYY", "NNYNYNNNYYNYYYNYYYYYNYYNYNNNYNNNNYYYYNYNYNYNYNYYYY", "YYNNYNYNYYYNNNYYNNYNYYYYYNYYYYNYNNYNYNYNYYYYNYYYYN", "YYYYYYYYYYNYNNNYYYYYNNNNYNYYYNNYYYNYYNYNYYYYNYYYYN", "YNNYNYNYYYYYNNNYYYYYYNNNYNYYYNYNYYYYNNYNYYNYNYYNNY", "NYYYYNNYNYYNYYNYNYYYYYNNNNYYYYYNNYNNYNNNNYNYNYNNYN", "YNYNYYNNYYYYNYYNYNYNYYYYYYNYYNYYYYYNNYNYNYYYYYYNYN", "YYNYYYNYYNYNNYYYNYYYYYYYYYYNYYYYYYNYNNNYYNYNYNNNNN", "YYNYYYYYYYNYYYYNYNYYNYNYYNYNNNYNYYYYYNNYYYYYYYYYNN", "YYNYYNNNNNYYNYNYYYNNYYNNNNNYYYYYNNNYNNYNNNYYYYNYYY", "YYYNYNYNYYYYNNNYYYYNYYNNYYYNYNYYYNNYYYYYYYYNYYYYYN", "NYYYYYYYYNYNYNYYNNYNNYYYYYNYYYYYNYYNYNYYYNYNYNYYYN", "YYYYYYNYYNYYNNNNNNYNYNYNYYNNYYYYNNNNYNYNYYNYNNNYYY", "YNYNYYYYYYYYNYYYNYNYNNNYNNYYYNNYNNYYYYNYYNYYNNNYYN", "YYYYYNYNYYYYNYYNYYYNNYYNYYNYYYYYNYNNYNYYYYYNYYYNYN", "YYNYYYYYYNYYYNYYNYYNNNYYNNNYNNNYYYNNNYYNNYNNYYYYYN", "YYNYNNYYNYYYYYNYYYYNNYYNYNNYYYYNNYNYYNYNNYNYYYNYYY", "YYYYNYNNNYNYNYYYYNNNYYNYNNNNNYNNNNYYYYNNNYYNYNYYNN", "YYYYYYYNNNYYNYYYNYNYYNYYYYNNYNYNYNYYYNYNNYYYNNYYNY", "NNYYNNYYYYNNYYNNNYYYYNYNYYNYNYYYNYYYYYNYNYYNYNYNYN", "NYYYNYYYYNYNYYNYNNNYNYYYYYNNYNNYYYNYYYNYYYYYNYYYYY", "NYNNYYYYYYYNNYNYYYNNYYYYNNYYNYNYYYNNYNYNYYYNYYNYYN", "NYYYYYNNYYYYYYNYYYYNNYNYNYYNYYYNYYYYYYNYYYYYNYNYYN", "YYYNYNNYYNYNYNYYYNYYNNYYYNNYNYYNNYYYYNNYNYYYNYNYYY", "YYYYYYNYYYYYYYYYYYYNYNYYYNYNYNNYYNNYYYNNNYYYYYYYYN", "YYYNYYNNNYNYYYNNNYYNNYNNYNNYYNYYNNNYYYYNNYNNYYNYYN", "YYYYYYNNNYNYYYNYNYYYYYYYYYYNNNYYNNNNNNNYYYYYYYNNYN", "NYYNNYYNNYYNYYNYYYYNYNYNNYNYNNNYYNYYNNNNNYYNYYYYYN", "NNYYNYNYYNNYNYYNYNYNYYNYYNNYYYYYYNNYYNYYYYYYNYNNNY", "YNNNNNYYNNYNYNYYNNYYYNNNYNNNNYNNNYYYYYNYNNYNNNNYYY", "NNYYNYYYYYYYYYYYYNNNNYYYNYYYYNNNYYNYNNYNNYNNYYNYYY", "NYYYNNYYYNYYYYYNNNNNYYYYYNYYNYNYYNNYNYYNNNYNYYNNNY", "NYYYYYNYYYYYYNNYYNYNYYYNNNNYYYYNYYYYYYNYNNYNYNNNYY", "YYYNYNYYNYNYYNYNYNYYYNYYNNYNNNNYNYYYYYYNYYNNNYYNYY", "YNYYNYYYYNYNYYYNNYNYYYYYNYYYNNYYYYYNYYYYNNYNYNNNYY", "YYNYYNYNYYYYNNNNNYYYNYYYYYNNYYYNYYYYYYYYYYYYNYNYYY", "YNNNNYYYYYYYYYYYYNYYYYYYNYNYNYYYYNNNNYNYYYNYYNYNNY", "YNYNYYNYNNNYYYYYYYYNYYYYNYYYNNYNYYNYYNYYYNYNNNNNYY", "NNNNNNNYYYNYNNYNYNNYYYNNYYNYYYYYNNYNYNNNYNYYYNYNYY", "YYYNYNNNNYNYYNYYNYNNYNNYYNNNYNYYYYNYYNNYYNYYYYYYNY", "YYNNYNYNNYYNYNNNYYNYYYYYNYNYYYYNYNYYNYYYYNNNYYYYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> colormap = {"NNNYNNYYNYYYNNYYYNNYYYYYYYYYNYYNNYYNNYYNNYYYNYYNNY", "YNNNYNYNNNNYYYNYYYYNNNNNYYYYNNNYNNNNYNNNNYYNYNYNYY", "NYNYYNYNNYYNNNYYNNYYNYYYNNYYYYNNYYYYYYYYNYNNNYYYNN", "NYNNNNYNYNNYNYYNYYYNNNNYYNNNNNNNNYYNYNYYNYNNYYNYYN", "NYNYNYYYNNNYNYYNNYNYYNYYNYYNYYNNNYNYYNYYYNYNNYYYYY", "YYYYYNYNNYYNNNYYNYYNYNNYNNYYNNYYYYNYNNNYNYNYYNNYYY", "NNNNNNNNYYYYYYYYNYYYNNYNYYYNYNNYYNYYNNYNYNYNYNYNYY", "NYNYYYYNNYNNYYYYYNNNNYYNNNYYYNNYNNNNYYNYYYNYYYYNYN", "NYNYYYNNNYYYYYYYNYNNNYYYYYYYYYYNYNYNYYNNYNNYYNYNYY", "YYNNNNYYYNYNNNYNYNYYYYYNYYYNYYNYYYYNYYYYNYYYYYNNYY", "YYYNYYNNYNNYYYYYNYYYYYYYYYNYYYYYNYNYNNNYYYNNYYYYYN", "NNNYNNNNYYYNNYYYYYYNYYNYYNYNYYYYNYYYYNNYYYNYNYNYYY", "YYYYNYNNNYNNNYNNYYNNNYNNNYYYNNYYYYYYNYNYYYNNYNYYYN", "NYYYYYYYNNYNNNNYNNYNNYYNYYYNYNYNYYNYYYNYYNNNYYYYYN", "YNNYNYYNNYYNYNNYNYYYYNNYNNNYYYYYYYYNNYNNYNNNNYYYYY", "YNNNYYNNYYNYYYYNYYYYYYYNNYYNNNYYYYYYYYNNYYNYNYYNNY", "YYYNNYNNYNYNYYYYNNNYYYNNYNNNYNYNYNYYYYNYNYNYYYNNYY", "YNYYNNYNNNYYYNYNNNYNNYYYYYYNYNYNNYNNNYNNYNNNYYNNNY", "NYYNNYYNYYNNYNNNYYNNNNNYNYYNNYYNNYYYYNYNYNYNYYYNYN", "NYYNNNYNNNYYYYNYYYNNYYYYNYYYNNNNYNNNYNYNNNNNYNNYYY", "YYYYNNYNNYNYYYYYYNNYNYYNYYYNNYYYYYNNYNYNNNYNNYYNNN", "NYNNYNNNYNNNYYNYYNNNYNNYYYNYNYYNNYNYNYYNYYYNYYNNNY", "NYNYYNNNYYNYNYNNYYYNNNNNYYYNYYNYNNNYNYYNYYYNYYYNYN", "YYNNYYYNNYYNNNYNYYNNNYNNNYYNNNYNYYYNYYNNYYYYYYYYYN", "YNYYNYYNYYNYYNYNYNNNNYNNNNNNNNYYNNYNYYNYNYNYYYYNNN", "YYYYNNNYNYYNYYYYYNNYNNYYNNYYNYNYNYYYNNYYYNYYYYYNNY", "YYNNNYNYYYNYYYNYYYNYNYYNNNNYYNYNYNNYYYYYYYYNYNYNNN", "YYYNYNNNYYNYNNNNNNYNNNYYYNYNNNYYYNYYYYYYNYYYYYNNYY", "NNYYYYNNNNYYYYYNYYNYYYYNYYYYNNYNYYYYYYYYYNNYYYNNYY", "NYYYNNNYYYYYYYYYNNYYNYYYNNNNNNNNYYYYNYYYYNNYYYNNYY", "YYYNNYNNYNYYNNYNNYNNNNNNYYYNNNNYNYYNNNNYNYYYNYYNNN", "NYNNYYNNYNYYYYYYYNNYYYYYNNYYNNNNYYYYYNNNYNYYYYYYNY", "YNNNYNYYYYYNYYNYYYYNYYYYNYNNYNYYNYYYYYYYNYNNNNYYYN", "YYNNYNNNYYNYYYNNNYNNNNNYNYYYNYNNYNYYYYNNYYYYYYYYNN", "YYYNYYYYYNNYNYNNYYNNNNNYNYNYNYYYNNNNYNYNYNNNYYYYYY", "YNYNYYYYYYYYYNYNYYYYYYNYYYYNNYYYNYNNYYNYNNNYYYNNYN", "NYYYNYNYYYYYYYNNYYNYNNYYNYNNYYYNNYNYNYYYNYYYNYYNYY", "YYYNNYYYNYYYNNNNYYYYYNYYYYYNNYYYYYYYNNYNNNYYYNYYYN", "NYNNYYYNNNYYYYYYNNNYYYYYNYNNYNNNYYYYYYNNYYNNNNYYYY", "YNYNNNNNYNNYYYYYNNYNNYYNNYNNNNYYNNYNYNYNYYNYNYYYYN", "NNNYNNNNYYNYYNYNYYYNNNYNNYYYYYNYYYYNYYYYNNNNYYNYYY", "YNYNYNYNNYYYYNYYNNYYYYNYYNYYNNNYNNNNYYNYYNYNNNYYYN", "YYYNNYYYYNNYYYYNYYNNYNYNNYYYYYNYYYNNYYNNNNNNNNNNYY", "YYYYYYNYNYYNYYNYYYYNNYYNYNNYYYYYYNYNYNYNNNNNYYYYYY", "YYYNNNNYYYYNNYNYYNYYYNNYNYYYYYYYNNYNNNNNYNNYNYNYNY", "YYNYNYYNYYNNNYYNNYNNNYYYYNYNNYNNYNYYYNYNYNNYYNNNYN", "YYYNYYNYNYYNNNYNYNYYNYYYYNYYNYNNYYNYNYYNYYYYNNNNNY", "NYYYNYYYYYNYYYNNNYYNNYYNNYYYNNNYYYYYYYYYNNYYYYNNYY", "YYNYYYYYYYYNNYNYYNNYNNYYYYYNYNNNYYYYNYNYNNNNNNYYNY", "NYYYYYNNYYYNYYNYYYNYNYNYNYYNYNYNYNYYYNYNYYYNYYNNYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> colormap = {"NYNYNYNYYYYNNNYNNYYYNNYYNYYNYNYYYYYYNYNNYNYNYNNNNY", "NNYYYYYYYNNNNYNYNNYNNYYYYNNNNNNYYYNNNNYNYYYYYNYYYY", "NNNYNNNNYNYYNNYYYNNYYYYYYNNYNNNNYNNYYYNNYYNYYNNNYY", "NYNNYYNYYNNNYNNYYNNYNYNNYNYNYYNNYNNYNNNNYNNYNNNYYY", "YNYYNYYYYYYYYYNNNNYYYNYYNYYYNYNNNYNYYYNYYYYYNNYYYN", "YYYNNNYNYYYYYNYNYYYYYYYYYYYYNYYNNYYNNYNYYYYYNNYNYY", "YNYYYYNYNNYYNYYYNYNYYYNYYYNNYNNYYNYNYYYNNYYYNYNYYY", "YYYYNNNNYNYNNYNYYNNNYYYYNYYNNNYYYYYNYNYYYNYNNYYNNN", "YYNNYYYYNNNYNYNNNYNNYNYNNYNYYYYYYYNYNYYYYNYNNNYNNN", "NYYNNNNNNNYYNYYYYNYNNYYNNYNYYNNNNYNNYNYYNNNYYYYNNY", "YNNNYYNYNYNNYYNYYYNYYYNYYYYYYNNNYYNNYYYYYYYYYYNYYY", "NNYYNYNYNYYNNYYYNYNYYYYNYNYYYYYYYYYNYNYYYYNYNYYNNY", "YNNNNNYNYYNYNYYNYYNNYYYNYNYYYYNNNYNNNNYYYYYNNYYNNY", "NYYNYNYYYYNNNNYNNYNNYNYYNYYNYNNYNYYYNNYYYYYNYNYNYY", "NYNNYNNNNNYYYYNNYYYYNNNNNYYYNYNNYNNNYNYNYYYNYNNNYN", "NYYNNNYYNYNYNYYNYYYNYYYYNNNYYNYYYYNYNYYYNYNYYNNYYN", "YNYYYYNNNYNNNYYYNNNNYYNYYYYYYYYYNYNYYNYYYNNYYNNNYN", "YNYNYYYNNNNNNYYYNNYNYYYYNYYNYNYYYNNYYYYNYYYNNYYNYN", "YNNYYYNYNNYNNYYYYNNYYYYYNYYNYNNYYNNYYNNNYNNYNYNYYY", "YNNYYYNNNYYNYYNNYNYNNNYYYYYNNYYYYYYNNNYNYYYNNYYNNN", "YYYYYYYYNYYYNYYNYYYYNNNYYNYYNNYNNYYYNNYNYNYYYYYYYN", "NNYNYYNYYYNYYNYYYYYYYNYNNNNNYYYNNYNYYYNYYNNYYYNYNN", "YNYNNNNYYNNYNNYYNYYNNNNNNNNYYYNYNNYNYNYNYYNNNYNNYN", "NYYYYNYYYYYYNNYYNYYYYNYNNNNYNYNYYNYYYYNNYYYYNNYYYY", "YNNNYNNYYNNNYNYYNYNNNYYYNYNNYYNYNNYNYNYNNYYYYNNYYY", "NYNYNNNYYYYNYYYNYYNNNYNNYNNNNYNYYYNNNNYYYYYYYYNYNN", "NNNYNNYNYNYNYNNYNYYYNNYYYYNYYYYNYYNNNNYYNYYYYYYNYN", "YYYNYYYYNNNNNNYYNNYYYNNYNYYNNYNYNNYYNYNYYNYNYYNNYY", "YNNNYNYYYYYNYNYYYNNNYNNYYYYNNYYNYNNYYNYYYYNNYNNYNY", "YYYYYYYNYNYYNYYNYYYNNYNYNNNYYNYYNYNYNYNYYNYNNYYYNY", "YYYNYNYNYYYYYYYNYYNYYNYYYYNNYYNYYYNYYYYNYNNNYNYYNN", "YYNYYNNYYYYYYNNNNYNYYNYNYNYNYNNNYNNNNNYNYNNNNNYYYN", "NYNYYNYYNNYYNYNYNNYYNNYYYNYYNYNNNNNYYYNYNYYNNNNNYN", "YYYNNNYYYYYYYYNYYYYYYYYYNYNYYNYYYNNYYYNYYYYYYNNNYY", "YYNYYYYYYYYYYNYNNYNNYYNNYNNYYNNYYNNNNYYYYNNYYNNNYY", "YNYNNNNNYYYYNNYYNYNYNYYYNYYNYYNYNYNNYNYYNYYNYYYYNN", "YNYYYNYYYYNYYNYYNNNNYYNNNNYYYYNYYYYYNYYYNNYYNYNYYY", "YYYYYNYNNNYYYYYYYNYYNNYYYNNYYYNYNNNNNNYYYYYNYYNYYN", "YYNYYNYYYYYYNNNNYYYNYYNNYYNNNYYYYNYYNYNNNNYYYYYNYY", "YYYYYNNYYYYNYYYYNYNNYYYYNYYNYNNNNYYYNNNNYYYNNYNYYN", "NNYYYNYNNNYNYYNNYNYNNYYYNNNYNYYNNYNNNNYYNNYYNYYNNY", "NYYNNNNYYYNYYNNNYYYYNYNNNYNNNNNNNYYYYYYNNNNNYNYNYN", "NYYYYYYNNNYYNYYNYYNYYNYYYYYNYNNNYNNYNNNNNYNNNNNYYY", "YYNNYNYNYNNNNYNYYYYYYNYYYYNYYYYYYYYYNYNNYYYNYNYNYN", "YNNNYNNYNYYNYNYYYYNYYYYYYYNNNYNYYNNNNYNNNNNNNYYNYY", "NYYYYYYYNYNNNYYNNYYYYYYNNYYNNNNNYYNNNNNYYYYNYNNNYY", "NYYYYYYYNYNNYYNYYNYYYNYNNYNNNNNNNNYYNYYNYYNYYNNNNN", "NYNYYNNNYYYNNNYNYYYYNYYYYYNYNYYNNYYYYYNNNNYNNNNNNY", "NYYNNYNNNYYNYNNNYNNYNNNNYNYNYYNNYNYNYYYYNYYYNNYNNY", "NNNYYNNYYYNNNNYYYNNNNYYYYYYNYYNYYYNNYNYNNNYNNNNYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> colormap = {"NNNNNNNYNNNNNNNYNNYNNYNYNYNYYYNYYNYYYYYYNNYNNNNNYN", "YNNYNYYNNYYNNYNYYNNYYNNYNNNYYNNYNYNYYYYNYYYYYNYNYY", "YNNNNYNYYNYYYNNYYNYYYNYNYNYNYNYYYNNYYNNYYYYNNNYYNY", "YYNNYNYYYNNYYYYYYYYYYYNNNYNNYYYNYYNYYYYNNNYYYYYNYY", "NYYYNNYYYYYNYYNNYNYNYNNYYYNYYNYNYYNYYNYYNYNYNYYYNN", "NNYNYNNYYYNYYYYNNYNYNYYNNNNNYYNYYYNNNNYYNYYNYYYYYN", "YYYYNYNYYYYYNNNYYYYYYNYNNNYNNYNYNYNNYNYYYYNYYNYYYY", "YYNNYYNNNYYYYNNYYYNNYYNYNYNYNYNYYYNNYYYYNYYNYYYYNY", "NNYYYNNYNYNNYYNYYYNYNYYYYYNYNNYNYYYNYNNYYYYNYYNYNN", "NYYYNNYYNNNNYYNYYNNYYYYYYYNYNYNNYNNNYYYYYYNNNNNNNY", "YNYNYYYNNNNYYYYYNNYNNYNYNYYNYYNYYYYYNNYYNYNYYNNNNY", "YNYNYNNNYNYNYNNYYNNYYYNYYYNYYYNYYYNYYYYYYNYYNYNNYN", "NNNYNNNYNNNNNNYYYNYNNNYNNYYYNNYNNYNYNNYNYNYYYNYNNY", "NNNYYYYYNYNNNNYYYNNYNNYNNNNNNNNNYNNNNYYYNYNYYYYNYN", "NYYNNNYNNNYNYNNNNYYNNNNYNNNNYYNNYNNYYNYNNNYNNYNNYN", "NNNYYYYNYYYYYYYNYYNYYNNYNNNYNYNYNYNNYNNNNYNNNYYNYY", "YYYYNNNNYNYNNYYNNYNNYNYYYNNNYNNYNNNYYYYYYYYNNNYNYN", "YYNNYYYYNYNYNNNYYNYNYNYYYYYYNYYYYYNYYYYYYYYYYNYNNY", "YNNNNNNNNNNYNYYYNNNYNYYNYNNNYNNYYYYYYNYNNNYYNYYYYY", "YNNNNYYYNYNNNNNYYYYNYYNNYNNYNYYYNYNYYNNNYNNYYNYYNY", "YNYNYYNYYNNNNYYYNNNNNNNYNYYYNYYYNNYYNYYNYNNYYYYYNY", "YYYYYNYNYYYYYNNYNYNYNNNNYYYYYYNYNNYYYNYNYYYNYYYNNN", "YYYYYYYYNYNNNYNNYNYNYNNYNYYYNYYYYNNNNNYNYNNNNNNYNN", "NYNYYYYYNNYNYNYYYYNNNYYNNYYNYYNNYNYYYNNYNNYNNNNNNN", "YNNYYYYNYNYYYYYNYNNNYNYYNYNNNYNYNNNNYNYYYNNYNNNYNY", "YNYYNYNNYYYNYYYNYNYNYNYYYNNYNNNNYYYYNYNYYNNYNNNYNN", "YNNYNNNYNNNNYYYYYNNNYNNYYYNYYYNYNNYNYNNNNYYNYNNYNN", "YYYYNNYNYYYNYYNYYYYNYYYNNYYNNNYNYYYNNNYYYYYYYNYNYY", "NNNYYNYNYNNYYYNNNNNNNYNNYNNYNNNYNYYNNNYYYYYNYNNNYY", "NNYYYYNNYNYNYYYNNNNYNNNYNYNNYNYYYYYYYNYNYNYNYYYNYN", "YYYNYYNYYYYNYYNYYYYYYNYYYNYYNYNNYYYYYYNNNNNYYNNNYY", "NNNNYYYYNYYYNYNNNYYYNYYYNNYNYYNNYNYYNYYYNNNYYYNYYN", "NYYYNNYNNNNYNNNYYNNYYNYNYNNYYNNYNNNYYYNNNYNYYYYNYY", "NNNYNNYNYNNYNYNYNYYYNYYYYNYNNNNYYNYYNYYYNYNYNYYNYN", "YNNNYYNYNYNYNNNNNNYNNNNYYNYNYYNNYNNNNNNYYNNNYYYYNY", "YYNNNYYYYNYYYYNYNNYYNNYYYYYNNYNYNNYNYNNNNYYYYNYYNY", "YYYYYNNNNNNNNNYNYYYNNYYYNNYNNYYYYNYYNYYYYNNYYNYNNY", "YYYYNNNYYNYNNYNYNNNYNYNYNYNYNYNYYYYNYNNYYYNYNYYYNY", "NYNYNNNNYYYYYYYNYNYYYNNNNYYNYYYYYYNNNNNYYNNNNNYYYY", "NYYNYYNNYYNYNYYYYNNNYNNYYNNYYNNYNNNNNNNNYYYYNNYYYN", "YYYNNNNNNNYYNYNYYNNYNNYYYNNYNNYNNNNYYYNNNNYNYYYYYN", "NYYYNYNNNYYYYYYYNYNYNNYNYYNNNYNNYNNYNYYNYNNNYYYYYY", "YYYYYYNNYYNNYNNYYYYNNYYYNNNYNYNYYYYNNNYYYYNNYYYNNN", "NNNNYNYNNYYYYYNYYYNYYNNNYNYYYYYNYYYYYNNYYYYNYYYYNY", "YYNYYNNNYYYYNYNYNYYNYYYNYNNYYYYYNNNNYYYYNYNNNYYNYY", "NYNYNYYYNYNYYNYNYYYYYNYNNNYYYYYYNNYNYYYYYNYYYNYNNY", "NYYYNNNNYYYYNYYNNNYYYYNNYYYYNNYNYNYNYYYNYNYNYNNYYY", "NNNYNYYYNYYYNNNYYYYYNYNNNNNYNYNYNNYYYNNYYYNYYNNNNY", "YYNYYYNYYYYYYNNYNNYNYNYNNNNNYNNNYYNYNYNNNYYYYNYNNY", "YYNYNNNNNYNYNNYYYNYNYYYYNNYNNNYYNNNYYNNYNYNNYYNYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> colormap = {"NNNYNYYNYYYYYNYNYNNNNYNNYYNNYYYNYYNNYYYNNYNNYNYYYY", "NNYNYNYYNNYNNYYYYYNYNYYNNYYYNNNYYNYNNNYNYNYNYYNNYY", "NYNYNYNYYYYNYNNYYYNYYNYNNYNNNYNYYNYNNYYNNYYYYNYYNY", "YYNNNNNYYNNYYNYNNYYYYYNYYYNNYYYNYYYYYYYYNYNYNYNNNN", "YNYNNYNYYNYYYNYNNYYYNNYYYYYNYYNYNYNNNYNYYNNYYNYNYN", "YNNYNNNYNNNNNNYNNYYNYYNYNYNYYYYYYYYNYNYNYNYNYYNNYY", "YNNYYNNNNNYYNYYNNYYYNNYNNYYYYNNYNNYYYYNYNNNNNNNYNY", "YYNNNNNNNNYNNNYYYNNNNYYNNYNYNYNNYYNYYYNYYYNYNNNNYN", "NYYYYYNNNYNNNYNYYNNNNYYNYYNYYYNYYNNNNYYNYYYNNNYNYY", "YNYYNYNYNNNYYYYYYNYNNYNYNYNYYNYYNYYYNNNYNYNNYNNYNN", "NNYNYNYNNYNNYNNYYYNYYNNYYYNNYNYYNNYYNYNNYYYYNNYYNN", "YNYYNYYNNNNNYYNYNNNYNYNYYYNNNYYYYYYNNYNYYYYNNNYNNN", "NNNYYNNNYNNYNYNNYNYYYYYYYYYYYYNYYNYNYNYNNYYNYNYNNY", "YYYYYNNYYNYNNNNNYYYNNYYNYYYYYNNNYNYYYNNYNNYNYYYNNN", "NYNYYYNNYNYNNNNYNYNNYYYYNYYYNNYYNNNYNNYNNYYNNYNNNN", "YNYNNYYYNYYYYNYNYNYYNYNNNYNYYNYYNYYYYNYNYNNNNNNNNN", "YNYYYNYNYNYYYNNNNNYYYNYNNNNYNYYNNYYNNNYYYYNNNYNNNN", "YNNYYYNYYYYNYYYNYNNYYNYYYYNYNYNYNYNYNYNYNYYYYYNYNN", "YNNNNYYNNNYNNYYNYNNNYNNYYYNNYYNYYNYYYYYNNNYNYNNNYY", "YNNYYNYNYYYNNYNNYNYNNNNYYYYYYNYYYNNYNNNYNNNYNNNNNN", "NNNYNNNNNYYYNYYYYYYNNNYYNNYYYNYNYNYNNYYYYYNNYNNYNY", "NYNNYYYYYYNNYNNYNNYYNNYNYNYNNNYNYYYNYYNNNYYYYYYNYY", "YNNYNYNYYNYYYYYNNNNYYYNNNNNYNYNYNYYYNNYYYYYNYNYYNY", "NYNNYNNYNYYNNYNYNNYNYYYNYYYYYYYYNNNNYNYYNYNNYYYYNY", "YYNYNYYNYYNNYNNNYNYNNYNNNYNNNYNNNNNNNYNYNYNYYNNNYN", "YNYYYYYNYNNYYYNYNNYYNYYYNNYYNYNNNYYYYNYNNYYNYYYNYN", "YYYYNNNYNYNNYNYYNNNYNYNYNNNYNNYNYYYNYNNNYNYNYYYNNY", "YNNYNNNYYYNYYYNYYNNNNYNNYNNNYNYYYNYYYNNYNNYYYNNNNN", "YNNNNYNYNYYNNNYYYYYNNYYNYNYYNYYYNNYYNNYYYNNYYYYYNN", "NYNYNYNYYYYNNNYNYNNNYYNNNNYNNNNNNYNNNNNYYNYNYNYNYN", "NYNYNNNYNYNNYNNNYYNYYNNYNNNYYNNYYYYNNYNNYYYYNYNYNY", "YNYNNYNNNYYYYYNYNNNYYYYNNYYNNNYNYNNYYYYYYNYNNNNNYY", "YNYYNYNNNNNYNYNNYYYYYYNNYYYYNNNYNYNNYYNNYNNYYYYYYY", "YYNYYNNYNNNNNNYNNYNYYYYNYNNNNNNYNNNNYYYNNNYNNNNNYY", "YNYYYYYNNYYNNNYNNNYNNYYYNNYYYYYYYYNNYYNNYYNYYNNNNN", "YNNYNYYNNNYYNYNYYNYYNYNNYNNYNNNYNYNNYYNYNNNNYYNYYY", "NYNNNYNNNYYYYNNYYNYNNYNNNNYNNNYYYYYYNNYNYNYNYYYYYY", "NYYNYNYNNYNNYYNYNNYNNYNYNYNNYNNNNYNNNNNNYYYYYYNYYN", "YYNNNNYYNYYYNNYYNYYYYYYNYNYNYNNNNNYNYNNYNNYNNYYNYN", "YNNNYNYNYNYYNYYNYYNYYNYYYNNYNNYNYYNYYNYNYYYNNYNYYY", "NYNNYNYYYNYYYNYYNNNNNNYYYYYYYYNYYYYNYNNYNYNYYNNNNY", "YYYNNYYYYYNNNYYYYNYNYYNYYNNYYNYNNYNNNNYYYNNYYYNYYY", "YYNNNNYYNYNNNYYYNNYNNNYNNYNNYNYNYYYYNYNYNNNYYYYYYY", "YYYYNYNNYNYNYNYNYYNNNYNNYNYYNNYYNNYNNNNNYYYNNNYYNY", "YNNNYYNYNYYNYYNNYYNNNYYNNYYNNNNNYYYYNYNYNNNNNNYYNY", "NYNNYYNNNNNNNYYNYYNNYYYYYNNNNYNYNYYNNNNYNYNNYNNNYY", "YYNNNYYNYYNNNYNYNNNYNYYYNNNYNYNNNNYNNNNYYNNNYNNNYN", "YNYNYNYYNNNYYYNNYYNNNYYNNNNYYYYYNNYNNYYYNNYYYYYNYN", "YYYYNYYYYNYNNNYNNYYYNYNNYYNYYYYYNYNNNYYNYYNYYYYNNN", "YYNNNNYYNYYYNNYYYYYYNNYNYYNYYNNNYNNNYNNNNYNYNNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> colormap = {"NYYNYNYNYYNNNYYYYYNYYNYNNYNNYYNNYNYNYYYNYNYNYYNNNY", "NNYNYYNYNNYYNYYYYYNYYYNNYYYNNNNYNYYNNYNNNYYYYYYNYN", "NYNNYYYNNYYNYNNNYYYYNNYYNNYYYNNYNYNNYYNNYYNYNNYNYY", "NNNNYYNYNYYNYNYNYYYNYNYNYNNNYYNYYYNYYNYYNYNNNNNNNN", "NNNYNNNYYYNNYNNNYYNNNNYYYYYYYNNNNYYNNYYYNYYNNYYNYN", "NYYNYNYNYNYYNNYNYYNNNNYYNYNNNNNNNNNNNYYYYNNNYNYNNY", "YYNYNYNNYNYNYNNYNNYYNYNNNNYYNNNNNNNYYYYYNYNNYYYNYN", "NYYNYYNNNYNYYNNYNNYNNYNYNYYNYNYYNNYYYYYNYNNYYYNNNN", "NNYYNYNYNYNNYYNYYNNYYYNNNYNNYNNNYYNNYNYNNYNYNNNYNY", "YYYNYNYYYNNYYYNYNYNNNNNYNYNNNNYYNNYYYNYYYYYYNNYNYN", "NYNYNYNYNYNNYNYNNYYNNYNNNNYYNNYYYYYYNNYNNYYNNYNYNY", "NNNNYYNYYYNNNNYNNYYYYNNNNYNYYYNNNNNNYNNNNNYYNNYYNN", "NYNNNYNNYYYNNNNYNYYYNNNNYYNYNYNNNNYNYYNNNNYNNNNYNY", "YNYYNNYNNYNNNNYYNNYYYNYNNNNYNYNYYNYNYNYYNNYYNNYNNN", "NYNYYYNYYYNNYNNNYYYNNNYYYYYNYNNYNYYNYNYNYYNNNYYNYY", "YYYYYNYYYNYYNNYNNNYNYNNNYYNYYNYNNYYYNYNYYNNYNNNNNY", "YNYNNYYNYYYNNYNNNYNYYYYNYNYYNYYYYNNYYNYYNNYNYNYYYN", "YNNNNYNNNYNYYNYNYNNNYYYNYNNYYYYNNYYYYNYNNYNYYNYNNY", "NNNNYNYYYYYNNYYYYNNYNNNYYYYYNYNNYYNNYYNYYNYNYNNYYY", "YYYNNNNYNYNNNNNYNYNNNNNNNNNNYNNYYYYNYYNNYNNNYYYNYN", "NNYNNNNYYYNNYYNYNNNNNNNNNYYYNNNYNYYYYYNYNYNYNNYYYY", "NYNYYNYNNNYNYNNYNYYNYNNNYNYYNNNYYNYYYNNYNYNNYNNYYN", "YYYYNYNYYNNNYNNNYNNYYNNYNNNNYNYYNYNNNYYYYYNNYYYYNN", "YYNNNNYYYYNNYYNNNYYYNYYNYNYNNYYNNYYNYYNYYNNNNYYNYN", "YYNNNYYNYNNYNYYYNYYYNYNNNYYNYYNNNNNNYYYYNNNYNNYYNY", "NYYNNNNYYYNNNNYYYNNYYNYYNNNYYNNYNNYYNYYNNNYYNYNYNY", "NYNNNYNNNYNNYYYYYYYYYYNNNNNNNYYYNYNYNYNYYNYNNYNYYY", "NYYYYNYYYNNYYYNYYYYYNNYYYNNNNNYYYYNNYYNYNYNYYYYYNY", "NYNYYNNYNYNNYYYNNNYNNYNNNYYYNYNNNYYNYNNYYNYYNNYNNN", "YYYNYYYNYYYNYNYYNYNYNYYNNNNNYNNNYYNYNNYYNYNYYYNYNN", "NYYNNYYYNYYYNYNYNYYNYYYYNNNNYYNNNYYNNNNNYNNYNYNNNY", "NNYNNYNYYNYNYNYNYYNNNYNYYYNYNYNNYYYYNYYNYNNNYNYYNY", "NYNYNNYYYYNYYNNNYYYNYNNYYYNNNNYNNYYNYYNNYYNNNNNYYN", "NYYNYYYYYNNNYNYNYYNNNNYYYYYNNYNNNNNYNYNYYNYYYNNYNN", "YYYYNNYYNNYNYNYYYNNYNNYYNNNNYNNNNYNYYNYYNYNYNYNNYN", "YNYYYNNYYNNYYNYYNNNNNNYNYNNNNYYNYNNNYNYNNYNYNNNYNY", "YYNNYNNNYYYYNYYNNNNNNYYNYYNNYYYYYYYNNNNNNNYNYNYNYN", "NYYNNYNNYNYYYNNNNNNYNNYYYNYNNNNYYNYYYNYYNNNYNNNNNY", "YNYNYNYNNNYYNYYNYNNYNNNNYYYNYNNNYNYYYYNYYYNNNNYYNY", "YNYNYNNNYYYYYYYNYYYNNNNNYYYYYNNNYNNNYNYNNYYNYNNYNN", "NYYNYYYNYNYYNNNYNNYYYYYYYNYNNYYYNYNNNYYYNYYNNYNNNN", "NYYYNNYNYYYNYYYYYNNNYYNYNNNNNYYYNYYYNYNNNNYYNYYNYY", "YNYNNNYYYNNNYNNNNNYNYNNYNNNYYNNYYNYYNNNNYNNYYNYNNY", "NYYYNNNNYYNNNNNYNYNNYYYYYYYYYNYYNNYYYYNNNNNNYNYYYN", "NYYYNYYYNYNNYNYYYNNYNNYYYYYNYNNNNYNNYNYNNNNYNNNYNN", "YYYYYNYYYYYNNYYYYNNYYNNNYYYNYYNYNNNNYYNYNNNYYNNYNY", "YNNNYNNYNYYNNYYYYYYYYYYNYNYYYYNYNNYYNNYNNYYYYYNNNY", "NNYYNNNNYYYYYNYYNNYYNNYYYYNYNYYNNYYYYNYYYYNNYYYNYY", "NYNNYNYYYYYYNYYNNNYYNNNNNNYYNYYYNNYNNYNYYYNYYNNNNN", "YNNNYNNYYNYNYYYYYYYYYYYNYYYNYNYYNNYNNYNNYYYYNNNYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> colormap = {"NNNYNNNYYNYYNNNNYYNYYNYNNNNYNYYYNNNYYNYNYNNYYNYYYY", "YNNNYYYNYNNNYNNNYNNNNNYYYNNYNNNNYYNNNYNNYYNNYYNYNY", "YYNNNYNNYYNYNNNYNYNNNYYYNYYNNNYYYNYNYNNNNNNYNNNYYY", "YYYNNYYNYYNYNYYYYNYYYNYNYYYYNNYYYYYYYYNYYYYYYNNNYN", "YYYYNNNNYNNNNYYYYNYYNYNNYNYYYYNYNYYYNNYYNNYYNNYYYY", "YYYNYNYNNYNNNNNYYNNNYYNNYYNNYYYYYNYYYYNYYNNNYYNNNY", "NYYYNYNYNYYNYNYYYNYNYNNNYNNNNNNNNNNNYYYYNYYYNNYNNY", "YYNNYYNNYNNNNNYNNYNNNYYYNNYNNNNNYNNNYYNNNYNYYNNNNN", "YNNYNYYNNYNYYNYYYYNNNNNNNNYYYYYNYNYYNNYNNYYNYNNNYY", "YYYYYYYNNNYNNYNNNYYNNNYYYYYNNNYNNNYNNNYYNYNNNNYNYN", "YNNYNNYNNYNNNYNNYNNYNYYYYNNYNYNNNYYNNNYNYNNYYYYNNN", "YNYYNYNYNNNNYNYYNNNNNNNNYNNNNNYYYNNNYNYNNNYYNNNNYN", "YYNNNNNNNNYNNYNYNNYNYYYYNYYNYNNYNNYYYYYNNYNYNYYYNN", "NYNNNYNNNNNNYNNNNNNNNNNYNYNYNYYYYYNNNNNYYNNNNNNYNY", "NNYYNNYNYYNYNNNYNYNYYNNNNYYYYYYYNNYYNYYYNNNYNNYYYN", "NYNYYYYYNNYNYYNNYYYNYYNNNYNYNNNNYYNYNNYYNYNYNNYNYN", "YNYNNYYNNNNYNYNYNYNYNNNYNNNNNYYYNYYNYYYNYYNYNYNYYN", "NYNNNYNYYNYNNNNYYNNNYNNNYNYYNNYNYNYYNYYYNYYYNYYNYN", "NYYYYNNNYNYYYYYNYNNYNNYNNNYNYYNNYNYNYYYYNNYYNNNYYY", "YYYYNNYNNNNNYYYNNYNNYNYNNYYNNYNYYNYNYNNNYYYNYYNYNN", "NNNYYYNNYYNNYYYYNYNYNNYYNYYYNNNYNNNYYNYYYYNNNNNNNN", "YYNYNYNNNYYNNNYNYNNNYNNYNYNYNNNNNYNNYNNYNNYYYNNYYY", "NNYYNYYYNYNYNYYYYNYNYYNNYNNNNNNNYYNYYNNYYYNNNYYNNY", "YYYNYYYNYNNNNNNNYYYYYYYNNYNNNYYYNYNNYNNYYNNNYNNYNY", "YNNNYYYYNYYNYNNNNYNYYNNYNYYNNYNNNNYYYYNYNYNNYYNYNN", "YNYYYNYYYYNYNYNYNYYNYYYYNNYNNNYYNNYNYNNNNNNYYNYYYN", "NNNNYYNYNYYYNYNYYYNYNYNNNNNNNYYYYYNYNYNNYYNNNNYNNN", "NNYNYYNYNNNNYYYNNYNNNYNYNNNNNNYNNYYYYYYYYYNNYYYNNN", "YYNNNYYNNNNNNNNYYNNYYYYYNNYNNNNNYNYNNYNNNYYYNNNNYN", "YYNYNNNYNYYYYYNNYNNNNYNYYNYNNNYNNYNNYYYNNYYYYYNYNN", "YYNNNYYNNYYNYYYNYYYNYNYYYNYYYNNYNYYNYYNYYYYYNNYYNN", "NNNYYNNYYNNYYNYNYYNNYNYNNNYNNNYNYYYYYNYYYNYYYNNYNY", "YYYYYNNNNNYNYNNNNYNYNNYYNNNNYNYNNNYYNYNYYNNNYYNYYY", "YNNNYNNYNNNNYNYYNNNYNYNNNYYYYNNNNNNYYNNYNYYYNYNNNY", "YNNNYYYNYNYYNYYYNYYYYYYYYNNYYNNYYNNYNYNYNYNNYYYYYN", "YYYNNNNYNNNYNYYYNNNNNYYYNNYNNNYYYNNNYNYYYNYYYNNYYN", "YNYNYNYNNYNYNYNYNNNNNYNNNYYNNNYNNYYNNYNNYNNNNYYYYY", "YYYNYYNYYNNYYYYYNYYYNNYNNYNNNYNNNYNYNNNYYYNYNYNNNY", "NNYYYYYYYNYNYNYYYYNNNNNYYNNYNYNYYNNYYYNNYYYNNNNNYN", "NYNYNNYNYYNYYNNYYYYNYNNYNNNNNYNNYNNNNYNNYNNYYYNYYN", "YNYYNNYNYNYNNYNNYNNNYNNNNYYYYYNNYNYYNNNNNNYNYNYNNN", "YNYYYNNYNNNYNNYNYYNYYNYNNNNYNNNNYYYYYNNNYNNNNYYNYY", "NNYNYNNYYNNYYNYNYNNNYYYYYYYYNNNYYNNNNNNNNNNYYYNNNY", "NYNNNYYNNNYNYNYYNNYYNNNNNYYYYYNNNYYNYNYYYNNNNNNNNY", "NYYNNNYNNYNYYNYYYNNNNNNYNYNNNYNNNNYNNYYYNNNNNYYNNY", "YNNYNNNNYYNNNNNYYYNYNNNYNYNYYNYNNNYNYNYNNYNNYNNNNN", "NNNNNNNYYNYYYYYNYNYNNNNNYNNNYNYNYYYYNNYYYYNYNNNNNN", "YYNNNNNYYNYNNYNNYNNNYNNYYNYNNYYNNYNYNNYNYYNYNYNNNY", "NNYNNYYNNNNNNNNYNYNNYYNNYNYYNNNNNNNYYYNNNNNNNYYNNN", "YYYYYNNNYYNYYYYNYNNNNYNYNNYNNYYNYYNNNYNYYNYNYYNYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> colormap = {"NNYYYNNYYYYNNNNNYYYYYNYYYYNNYNNYYYNNYNYNNYNNNYYYNY", "YNYNNNYYNNNNNYYNYNNNNNYYNNNNNYNYNNYNYYYYYNNYNNYNNY", "YYNYYYNYYYNYNNNNNYYYNNNYNNNNNYNNNNNYYNNYNYYYYYNNNY", "YNNNNNYNNNNNNYNNNYYYYNYYNNNYNYNYNYNNNYNNYYNYNYNNYY", "YYYNNNYYNYYYYYNYYYNYNNNYNNYNYYNNNYNNNNNYNNYYYNYYYN", "NNNNNNNNYNYNNNYYNNNNYYNNYNNNNNYYYYNNYNYNYYNNNYYNNN", "NYNNNNNYYYNYNYNYNNYNYYNYYYYYYYYNNNNNNYYYYNNNYYNNYN", "NNYNNNYNNYYNNYNYYYYNNNYNYNYYNYNYNYYYNNYYNYNYNNNNYY", "NYNYNYNNNYNYYYNNYYNYNYNYNNNYYNYYNYNYNNNYNYYNYNNNNN", "NNNYYNYNYNNYNNNNNYNYNYNNYYNYYYYYYNNNNNYYNNNNYYYNNN", "YNNNYNYYYYNNNNYNNYNNNNYNYYYNNNYYNNNYNNYNYYYNYYNNNN", "YNYYNYNYNNYNYNYYNNNNNNNYNYNNYNYNYYNNNYNYNYNYNNNNYN", "NNNNYNYYYNNNNNNYNNYYNNNYYNNNYNNYNYNYNNNNYYYNNNYNYY", "YYYNYNNNNNNNYNNYNYYYNNYYYYYYNYYYYNYYNYYYYNYNYNNYNY", "NNYNYYYNYNYNYNNNYYNYNYYNYYYNNNNNNYNNNYYYYYNYYYYYNY", "YYYYNNYYNYYYNYYNNNYNNYNYNNNYNNYNYYNYNNYYNNNYNYNNNY", "NNNNYNYYNNYNNYNYNNNNNNYNYYNNYYNNNYNYNNNYNNNNNYNYNY", "NNNYNYYYYNYYNNYYNNNYYYYNYYYNYYNNNNNYYYNNYNNYYYNNYY", "NYNYNNYYYNYYYYNYNYNNYNYNYNNNYYNNYNNNYYYYNYNNNNYNNY", "YYYNNYYNYNYNYYYNNNNNNNNYNYNYNNYNYYNNNYNNNYNYNNYNYY", "YYYNNNNYNNYNYYNNYNYNNYNYNYNNYNNYNNNNNNNNYYNNYNYNYN", "NNNYYYNYNNYYYYYYNNNNYNYNNNYYNYNYYYNNYYYNYNNNNNNYNN", "NNNYYNYNYYNNNNYYYNYYYYNNNNYYNNYNNNNYNNNNNNNNYNNYNY", "NYNNNYYNYYNYNYYYNNNYYNNNYYNNYYNNYYNYYYYYNNYNYYYNYN", "NYYNNYYYYYNYYYNNNNNNNNYYNYYYYNYNNYYYNYNNNYNYNNNNYY", "NNYNNYNNNYNYNNYNNNNYYNYYNNNNNNYNYYNYNYNNNYNNYNYNYN", "YNNNNNYNNNNNNYNNYNNNNYNYYYNYNNYNYYYNNNNNYYYNYYNYYY", "NNNNYYNYYNYNYYYYNYYNYYNYYYYNNYNYYYNNNYYYNNYYYYNYYY", "NYNYNYNNNNNYYNYNYNYYNYNNNNNYNYNYNYNNNYYNNNYYNYNYNY", "YNNNNNYYNNNNYYYNNYNNYNYYYNYNYNNYYYNYYNYNNYYNYNNYYN", "NNNYNNNYYNNNYNYYNNYYNYNNNNNYYYNNNYYNNYYYYNYYNYYNNY", "NNYNYNNNNNNNYNYNYNNNYYYNYYNNNYYNYNYYYNYNYYNNYNNNNN", "YNNYNNNNNYYYYNNYNNYYNYNNNYNYYYNYNYNYNNNYNNNNNNNYNN", "NNYNNNYYNYYYNYNNYYNNNNNYNNNNYYYYYNNYNYNYYYYYNYNNNN", "NYYYNNYNYNNYYNYYYYNYYYYNYNYYNYNYNYNYYYNYYNNYNYYNNY", "NNYNNNYNNNNYNNYNNNNYYYNYYNYYYNNNNYYNYNYNNYNNYNNNNY", "YYYNYNNNNYNNYYNYNYNNNYYNNNNYYNYNNNNYNYNNNNNNNNNNNY", "NNNYYYNNYNNNYNYYNNNNYNYYYYNNYNNYNNNNNNYNYYNYYNNYNY", "NNYYYYYNNYYYYNYNNNYYNNNNNNNYYNNYNNNYNNNYYYYYYNYYNY", "NYNNNYNYYNNNYNYYNNNNNNYYYNYYNYYNYYNNNYNNNNNYNYNYNN", "YNNNNNYNNNYYNNNNNYYNYNYNYYNYYNNNNYNYYNNNNYNYYNYNNY", "YYNYYYNNYYNNNNNYYNYNNNYNYYNNNNNYYYNNNNYNNNNNNYNYNY", "YNNNNNYYNYNNYNNNNYNYYNYNYNYNNYYYNYNNYYNYYYNNNNNNYY", "YYYYYYNYNNNNYNYNNNNNYYYNNNNYNNNNYNYNNNNYNYNNNYNNNN", "YNYYNNNYNNYYYNYNYNYYYNYYYYYYNNYNNYNNYYNNNNYYNYNNNY", "YYYNNNYYNNNNNYYNYNYNYNYYYYNYNYNNNYYNYNNYYNNNNNNNNY", "NYNNNYNNYYYNYNNYYYNNYYNYNNYNNNYYYNNYNNYNNNNNYYNYNY", "NNNNNYYYNYNNYNNNNNYNNYNNNYNYYNYYYYYYNYYNYYNYYYNNYY", "YNNNYYYNYNNNNNYYYNYNNNYNNYNYNNYNYNYNNYNNNYYNNNNNNN", "YNNYNNNNNNYNYNNNYNYYNYNNNYYYYNYYYYNYNNNNNNYNYNYYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNYNNYYNYNNNNNYNNYYNNNYNYNNNNNYNYYNYY", "YNYYYNNNNNYYYNYYNNNNNYYYNNNYYNNNNYYNNNNYNNNNYNNYNN", "NYNYNYYNNYYNNNNNNNNYYYNYNNNNNNNYYNNYYYYYYYNNNNNNNN", "YYYNNYNNNNNNYNNNYYNNNYNYNNNYNYYNYNNNYNYNYYNNNYNYYN", "NNNNNNNNNYYNYYNNNYNNNYNNYNNYNYNYNNYNNNYNNNNNYNNYYY", "YNYNNNYNNNNYNYNNNNNYNNNNYNYNYNYYYYYNYNNYNYNYYNYYYY", "NNYNNYNYYNYYYNYNNNYNYNNNYYNYNNNYNYNNNNNNNYYNYYYYNY", "YYYYNNYNNNNYYYNNYNNNNNNNNYYYYYNNYNYNNNYNNNYNNNYYYY", "NNYNYNNNNNNNYNYNYNYYNNYYNNNNYYNYNNYYNNNNNNYNNNYNNN", "NYYNNNNNNNNYYYNNYYNYNNNYNYNNYYYNNNNNNNYYNYYYNNNYNN", "NNNYNNYNNNNNYNNYNNYYNNNNNNYYYYNYYNYNYYNYNYNYYNNYYN", "NYNYYNNYNNYNNYYYNNNNNYNYNNNYNYNYYNYYNNNYNYNYNYYYYY", "NNYNNNNYNNYNNNYYYYNNYNYYNYYYNNYNNNNNNNYNYYNYNNNNNN", "YNYNNNNNYYNNYNYNNYNNYYNYNYYNYNNYNNNNYYNYYNYNNYNNNN", "NYNYYYYYNYNYYYNNYNYNYNNYYNYYYNYNNNNNNYYYNNYYNNNYYY", "NYYYNYNNNYYNYNNNNNYYNYNYNNNNYYYNNYNYNYNYNNNYYNNYYN", "YYYNYNYNYNYYYNNNNYNNYYNYNNYNNNYYYYNNNNNNNYYNNYNNYN", "NNYYYNNNYNNNNNYNYNYYNYYNNNNYNNNNNYYNYYNNNNNNNNNYNN", "NNNNYYNYNYNNNNNYYYNNNYNYNYNNYNNNYNNNNNYYYYNNNYNNNY", "NYNYNYNYNYNYYYNYYYNNYNNNNNNNYYYNYYYNNNYNNNYNYYNYNN", "YNNNNYNNNYYNYYNYYNNNNNYNNYNYNYYYNYNNNNNYNYYYYNNYNN", "NYYYYNNYYNYNNNYYNYYNNNYNYNNYNNNYNNNNNYNYYYYYYYYNYN", "YYYNYNNNNYNNNNYNNYYNYYNNNNNNNYYNYYYNNYNNNNNNYYYNYN", "NYYNYNYNNYNNYNNNNNYNYYNNNNNNNNNYNNYNNNNYYNYNYYNNYN", "YYNYYYNYYYNYNYYYNYYYNNYYNNNNNYNYYNNNYYYNNYYYYNNNNN", "YNNNNNYNYNNNYYNNNNNNNNNYYNNYYNYNYYNNNYNYYNYNYYNNNY", "NNYYYNNNYYNNNNYNNYYNNNNYNNNNNYYNYYYYNNYYYYNNNNNYNN", "NYNNYNYYNYNYNNYYNYYNNYYNNYNNNYNNYYNNNNYYYYNYYNYNNY", "YNNYYNYYYYNYNYNNNYYYNNYNNNYNNNNNYYNYNNYNNNYNNYYNNN", "NYYNYNNYNNYYYNNYNNNNNYYYNNNNNNNNNYYYNYNNNYYNNNYYYY", "NNYNYNYYYNNNNNYYNNYNYNYNYYYNNNNNNNNNYNNYYNNYYNYNYY", "NNYNNYYYYYYYYNYNNYYNNYNNNNNYYNNNNNNNYYNNNYYNNYNYNY", "NYYNNYNYNYNYNYNYYNYYNNNYNNYYYYNNNNNNYYNYYYYYYYYNNN", "NNYYYYNYYNNYYNYNNNNNNNNYNYNNYNNNNNNYNYYYYNNNYYNNYN", "YNNNNNYYNNYNYNYNNYNYYNYYNYYNNYNNYYNNNYYNYYYNNNYNNY", "NYYNNYYNYNYNYYYYYNNNYYNYNYYYNNNNYYYNNNYYNNYNYYNNYN", "YNNYNYNYYNNNNNNNNYNNNNNYNNYYYNNYNNNNNNNNNNYYNYYYNN", "NYNYYNNNNNNNNNYNNNYYYYNYNNNNNNNNNYYYNNNYNNYNYYYNNN", "YYNYNNYNYYYYNYNYNNNYNNYYNNNYNNYYYYNYNNNNYYYYYNYNNY", "NYNNNNNYNYYNYNYNYNYNYNYYYNNNNYYYYNNYNNNNYNNNYYYYNN", "YYNYNYNNYNYNYNNYNYYNNNNNNYNYYYNNNYNNNYNYNNYNYNNNYY", "NYNNNNYYNYNYYYNNYNYNNYNYYYYYNYNNNNYYYNNNYNNYYYYNNN", "YNNNNNNYNNNNNYYYYNYNNNNNNNNNYNNNNYYNYNNNYNNYNNYYYN", "YYYYNYYNNYNYNNNNNYNNYNYYYYYNNNYNNNYNYNYYNNNNNNNYYN", "NNYYNYNNNNNYNNNNNYNNYYNNNYYNYNYYNYYNYNNNYYYYNNNNNN", "NNNYYYYYYNNYNNNNNYNNYNYYYYYNNNYYNYNNYYYNNNNNNNYYNN", "NYYYYNNYYNNNNNYNNNYNYNNYYYYNNNNYNYYYNNYYNNNNYNNNYN", "NYNNYNNNNYNYYYYNYNYYNNNNYYYNNNYYNYNNNNYNYYNNNYYNYN", "YYYNYYNNNNNNYYYYNYYNNNNNYNYNNNNYYNNYNYYYYNNNYNNYNY", "NYYNYYYYNNNNYYYNNNYNYYNNNNNYYYNNNYYNNNNNNNNYNNNYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> colormap = {"NNYYNYYNYNNNYNNNNNYNNNNYNNYYYNNNNYNYYYNYYNNNNNYNNY", "NNYNNNNNNNNNNNNNYNNNNNNYYYYYNNYYYNNNYNNYYNNNYNNYYY", "NNNNNYNNYYYYNNNNNNNYNNNNYNNNNYNYYNNNYNYYNYYNNYNNNN", "NNYNNYNNYNNYNNNYYNNNNYYYNNNNNNNYYNYNYYYYYYNNNNYNNY", "NNYYNNNNNNNNNNNNNYNNYNYNNYYNNYYYYNNYNNNNNNYNYNNNNY", "NYYNYNYNYNNNYYNNYNNYNNYYYNNNYNNNYYYNYNNYNNYYNYNNNN", "YNNYNNNNNNYYNNNYYYNYYNYNYYYNYNYYYYYYYNYYYYYNNNNNNN", "YYNYYNYNYNYNYYNNNYNYYYYYNYNYNNYNYYNYYNYNNNYYYNNYYN", "YYYYNNNNNYNNNYNYYYNNNNNYNNYNNYNNNNNNNYYYNNNNYYYNNN", "YNYNNNNNNNNNNYYYNYYNYNNYNNNNYNNNYNYNNNNYNNYNNYNNNN", "YNNYNNNYNNNNYYNNNYYYYNYNNNNNNNNNYNNYNYNNYNNYNNNYYY", "NYNYNNYYNYNNNYNNNNYNNNNYNYYNYNNNYYNYYNYYYYYNYNYNNN", "YNYNYNYNNNYNNNYNYNNNNYYYNYYNYYYNYYYNYNNYNNYNNYYNNN", "YYYNNYYNYNNYNNNYYYYNYNNYNNNNNNNNNYYYYNYNNNYYNNNYNN", "YNYNYYNNNNNYNYNYYNNNYNNNNYNNNYYNNYNNNNNNNYNNYYNNYY", "NNYYYYYNNNYNNNNNNYYNYYNNNNNNNYYYYNYNNNYYNYNYNNNYNN", "YYYNNNNNYNYNNYYNNYNNYYYYNNYNNNNYNYNNYYNYNNYNNYYNYN", "NNYNYNNNNNYYYNYYNNNYYYYYNNYNNNNNNYYNNNNYYNYNYNNNYN", "YNYYYYYNYYNYNYYYNNNNNNNNNYYNNNNNYNNYNYYNNNNNNYNNNY", "NNNYYYNNNNNYYYNYNNYNNNNYNYYYNNYNYYYNNNYNYNYNYYNNYN", "NNNNNYYNNYYNYYNYNNYYNYNNNYYNNNYYYNYYNYYNYYNNNNYNNY", "YYYYYNYYNYYYNNNNYYNYYNNYNNNNYNNNNYYYNNYNNNYYYNYNYY", "YYYNYNYNNYYNNYNYYYYNYNNNNNNNYNYYYNNNNNYYYNYYYYNNNY", "NNYYNNNYNNNYNYNNYNNNNNNNNNYNYNYNNNNYNNNNNYNNYYNYNN", "YNNYNYYYNNNNNNNNYYYYYNYYNYNNYNYNNNNNNNYYYNYYNYYNYN", "NNYYNYNYYNNYNNNYNNNNYYNYNNNNNNYYNNNNNNNNNYNYYYNYNY", "NNNNNYYNYNYNYYNNNYNNNNNNYYNYNNNYYNNYNYYNNNYYNNYNYY", "NNYNNYNYYYNYYNYYYNNNYYYYNYYNYYNYNYYNYNNYYNNYNNNYYN", "NYNYNNNNNNYYNYNYYNYYNYYNNNYYNYYNYNNNNYYYNYYYNNNNYN", "NNYYYYNYYNNYYNYNNYNNYYYNNNNNYNNNNYNYNYNNYNYNNNNYYN", "NYYYNYNYYNYYNYYNYNNYYNYNNYNYNNNNNYYNNYNNNYNYYNNNYN", "NNYNNNNYNYNNNNNYYYYYNNYNYNYYYNNNNNNNNYYNNNYYNNYNNN", "NNNNYYNNYNNNNNNNNNYNNNNNNYNYYNYNNYYYNNNYYNYNNYYNYY", "YNNNNNYNYYNYYNNNNNYNNNNNNNNYNYNYYNYNYNNNYYNYYNYNNY", "NYNNYNNNYNNYNYYYYNNNYNYYNYNNYYNNYYNYNNYYNNYNYNNNNY", "YNYYYNNNNNYNNYNNNNYYNYNYYNNYYNYNYYNNYNYNNNNYYNNNNY", "NYNYNNYNNNNYNNYYYNYNYYYYYYYYYYNNNYNYNNNNNNYNNYNYNN", "NYYNNNYNYNNNYYNYNNNYNNYNNNNYNYNYYNNYNNNYYYNNNYNYYY", "YNNYNNYNYYNYNNYYNYNNYYNNYNNNYYYNNNNNNNNYNYNYYNNNYN", "YNYNYYNYYNYNNYNNNYNYNNNNNNYYYNNNNYNNYNNNNYNNYYNYNN", "YYNNNYNNNNYNNNYYNNNYYYNYNNNNYNNNNNNNNNYNNNYNYYNYNN", "YNNNNYNNNYNYYNYYYYYNNYNYNNNYYYNNNYYNNNNYYNYYNNNNNN", "NYYNYNYNYNYYNYYNYNNNYYNYYNNNNYNYNNNNYYNNNNNYNNNNNN", "NYNYNNYYYYYYYNYNNNNYNYYNNNYNNYYNYNYYYNNNYNYNNNNYNY", "YYNYYYYYNNYYNYYYNNYNNNYNNYYYYNYNNYNNNYNYYNNYNNYYNY", "YYNYYNNNNYNNYNNYYNNYYNYNYNNNYYNYNYYNNNNYYNNNYNYYNN", "NNNYYYNNNNYNNYNNNNNNYYYYNNNNNNNYNNNNYYYNYNYNNYNNNY", "NNYNNNYNYNYNYNYNYNNNNNNNNNYYNYNNNYNYNNYNNYNNNNYNNN", "NYNNNNNNYNYYYNYYNNNNYNYNNYNNNYNYNYNYYYYNNNNNNNYYNY", "NYYYNYYNYNYNNYYNYNYYNYNNNNNNYNYNNNYNNNNNYYYYNNNYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> colormap = {"NNNNYNYYYNNYNNYYYNNNNYYYYYYNNNNYNNNYNYYNYYYNYNNNYN", "NNYYYNNYNYNNNYYNNNNYYYYYYNNYYNYNYNYYNYNNNNNNNYYNNN", "YNNYYYNNNYNYNNYNNNNYNNYNNYYYNNYYYNNNYNNYNNNNYNNNYY", "YNYNNNNNNNNYYNNNYNNYNNYNNNNNNYYYYYNNYNYNYNNNYNNNNY", "YYNNNNNYYNNYNYNNNYNNNNNYYNNNNNYNYNYYNNNNNNNNNNNNNY", "NNNNNNNNYNNNNYNNNNNNNNYNNNNYYNNYYNNYYNNYNYYYNYYNYY", "YNYNNNNNNNYNYYYYYNYNNNNNYNYYNNNNYNYNNNNYNNNNNYYNNN", "YYNYNYYNNYYNYYYYNNNNNNNYNNNNNNNNYNNNYYNNYNNYNNNNNN", "NNNNYNNYNYNNYNNYNYYNNYYYNNYYNNNNNNNYNYNNNYNYNYNNNN", "YNNYNNYNNNYYNYYNNNNYYNYNNYYNYNYYNYYNYNNYYNYYNNYNNY", "YNNNYNNNNNNYYNYNYNNYNYYNNNNNNYNNYNYNNNNNNNNNNNYNNN", "NYNNNNNNYNNNYYNNYNNYNYYYNNNYNNYNNYNNYYYNYNNYNNYNYN", "YNYYYYYNNYNNNNYNYNNNNNNYYNYYNNNNYYNNNYYYYYNNNYNNYY", "NYYNNNNYNNNNNNYYNNYYNYNYNNYNYYNNYNNNYNYYYYNYNYNNNN", "YNNNYYNNYYNNNNNYNNNYNNYNYNYNNNNYNNNNYNNNNNNYNNYYNN", "NYNNYNNNNNYNYYYNNNYYYYYYNYNYYYNNNYYYNYNNYNYYNYNNNY", "NYNNNNYNNNNYNNNNNNYNYNNNYNNYYYNNYNYYNNYNNNYNYYNNYN", "NNNYYNNNNYNYNYYNNNYYNYNNNNNNNYYYYYYYNYNYYYYNNYNNNY", "YNNNNNNNYNNNYNNYNYNNNYYNYYYNNNYNNNNYYNYNYYNYNYNYYN", "NYNYYNYYNYYNYYNYNYNNNNYYYNNNNYYYNYNNYNYNYNNNYNNYNN", "NYYYNNYNNNYNNNYNNYYNNYNNYNNYNNYYNNNNNNNNNNNNYNNNNN", "YNNNYNYNYNNYNYNYYYYYNNNNNNYYNNYYNNNYNYYYYNNYYYNYNN", "YNYNYYNYNNNNNYYNNYNNNYNNNNNNNYNYYNYNNNNYNYNNYYNYNN", "NYNYYYYNYNYNNNNNNNNYNNNNYNNYNNNNNNNNNNYYNNNNNYYNYN", "NNNYNYNNYNYNYYYNNNNNNYNYNYNNYNNYNYYNYYNYNNNNYNNYNY", "YNNNYNNYNYNNNYNYNYNYYNNYNNYNNYYYYYNNNNYYNYNYYYNNNY", "YYNNNNYNNYNNNYNNNNYYYYYYNYNNYNNYNYNNYNNNNYYYNYYYNN", "NYNYNNYNNNNYNNNNNNYNYYYYYYYNNYNNNYYYYNNNNNYYYNYNNY", "NNYNNNYYNNYYYYYNNNNYYNNYYYNYNYNNYNNNNNYYNNYNNNNNNY", "YNYYNNNNNYYNNYYNNNNNNNNNYYNYNNNNNNNNYNYNNYYNYYNNYN", "NYYYYNNYYYYYNNNNNNYYNYYNYNYNYYNYNYNNYYNNYNNNYNYNNY", "YNYNNYNNYNNYNNNNNNNNYNYNNNYYNYYNYNNNNNYNYYNNNNYNNY", "YNYNYYYNNYYNNNNYNNYYNNYYYNYNNNNYNYYNNNYYNNNNYNNNYN", "NNNYNNYYNYNYNNNNNNYNNNNYNNNNNNYNNNNYNYYNNNNYNNNYYN", "NYNNYNNYYYNNYNNNYNNNYNYNNYNNNNYNYNNYYNYYNNNNNNNYNY", "NNNNNNNYNNYYNNNYNNNNYYNNNNNNYYNNYYYNYYNNYNYNNNNNNN", "YNNYNNYNNNYNNNYNYNNYNNNNNNNNNYYNYNNNNNNNYYYNNNNNNN", "NNNYNYNNYNYNNNYNNNNNNYYNYNNNNNYNNNNNNNNYYNNYNNYNYN", "NNYNNYYNYNYNYYNYNYNNYNNYYYYNNNYNNYYNNYNYYNYYNYNNYY", "NYYNNYYNNNYNYNNNNYYYYYYNYNYYNYYNNNNYNYYNNNYNNYYNNY", "NYNYNNNNNYNYNNNNYYNYYYNNYNNYYYNYNNNNNNNYNNYNYNNYNN", "NYNYNNNYNYNNNNYNNNNNNNNYYYYNNNNNNYNNNNNYNNYNYNYNYY", "NNYYNYYYNYNNNNYNYNNYYNNNYNNYYYYNYNNNNNNYNNNNNYNNNY", "YNNYNNYNYNNNNNNYNNNNYYNYNNYNYYNYNNNNNYNNNYNNNYYYNN", "NNYYYNYNNNNYNNNYNNNYNNYYYNYNYNNYNNNNYNNYYNNNNNNYYY", "NYYNNYYNNNNYNYYNYNNNYYYNNNNYNYYNYNNNNYNNNNNYNNNYNN", "NNNNNYNYNNNYNNNNNNNNNNYNYNNNNNNYYNYYNNYYNNNNYNNYNN", "NNNNNNNNYNNNNNYNYNNNNNNYYNYYNYYNYYYNNYNNNNNYYNNNYY", "NYYYYNNNNNNNYYNNNYYNNNYNYYYNNNYNYNNNNNNNNNYNYNYNNY", "NNNYNNYNNYNYYNYYYYYYNYNYYNNYYNYNYNNNNNYNYYNNNYNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> colormap = {"NYNNNYYNYYNNYNNNNNNNNNNNNNNYNYNNNNNNNNYNNNNNNNNNNN", "NNNNYNNNNYYNNYNNYNYNYNNYNYYYYYNYNNNNNNNYNNNNNYYYYN", "NYNNYNYYNNNNYNYNNNYNNYYNNYYNYNYNYNYNNNNYNNNYNYNNNN", "NNNNYNNYNNNNYNYYNYNNYNYYNNYYYNYNNYNYYNNYNYNYNYYNNN", "NNNYNNNNYNNNNNNNNYNNYYYNYNNNNNNNYNYNNNNYNNNNNNYYYN", "YYNNNNNNYNNNNNNNNNNYYYNYYYYNYYNNNYNNNYNYYNYYYNNYNN", "NYNYNNNNNYYYNYYNNYNYNNNNNNYNYYNNNNNYNYNNYNNNYNYYNN", "NNNYNNNNNYYNNYNYNNNNNYNYYNNYNNNYYNNYNNNYYYNNNNNNNN", "YYNNNNNNNNNNNNNNNYNNNNNYNYNNNNNNYNNNNNYNNYNNYNNNYY", "YYNNNNYYNNYNNNNNNNNYNNNYYNNNNNYNNYNNNNNNNNNYNNNNYY", "NYNNNNYNNYNNNYNNNYYNNNYNYNNNYYNNNYYNNYYNNNYNNNYNNY", "YYYNNNNNNNYNNNNYNYYNYYYNNNYNNNNYNYNNYNYNYNNYYNNNYN", "YNNNNNNYNNNYNYYNNNNYYYNNNNYNNNNNNNNYNNNYNNYNYNNNYY", "NYYNYYYNYNNNNNNYYNNYNYYYNYNNNYYYYNNNNNNNNYNNNNNNNY", "YNYYNNYNYYNYNNNYNNYNNYNNNNNNNYNNYYNYNYNNNYNNNNNYYN", "YYYNNNNNYYNNYYNNNNNYNNNNYYYNYNNNYNYNNYNNNNNNYYYNNY", "YYYYNYNNYNNNYNYNNNYYYYNNYNNNYYYNNNNNNNYNNYNYNNYNNN", "NYNYNNYNNNNNYYYNNNNYYYYYYNYNNNYYNNNYNYNNNNYYNNYNNY", "NYNYNNNYNNNYNNNYNYNNYNNNNNNNNNNYNYNYYNNNNNYNNYNNNN", "YNYNNNNNNYYNYYNNNNNNYYNYNYNNNNYNNYNYYNNNNNYNYNNYNY", "NNYNYYNNNYYYNNNNNYYYNYYYNYNYNYNYNNYYNYNNNYYNNNNNNN", "NYYYNNYYNNNNYNNNNNNNNNYNNNNNYNYYYNYYNNYNNNNNNNNNNN", "YYNYYNYNYNYNYNNYNNNNNNNNNNNNYNNYNNNYNNYYNNNNYYNNNN", "NNNNYYNYYYNNNNYYNYNYYNYNYNNNYNNYNYYNYYYYYNYNNYNYYN", "NYYNNYNYYNNYYNYNNNNNYYNNNNYNNNYYNYNNYNNYNNYYNNYYYY", "YNYNNYNNNNYNYNNYYYNNNYNNNNNYNYNNNNNNNNYNNYYNNYNNNN", "NYYNNNNNNNNNNNYYNNNNYNNNNNNNNYNNYNNYNNNNNNNYNNNNNN", "NYNNYNNNNNYYYNYYYNYYNYNNNYYNNNNNYYNYYNYNNYNNNNYNNN", "NNNNYNNYNNNNYNYYYYYNNNYNNYYNNYNYNNNNNNYYNNNYNYNNNN", "NNNNNNNNYYNNNNYNNNNNNYYYYYNYYNNYNYNYYNNNYYYNNNYNNN", "YNNNNNYYNYNNNYNNNNYYNYNYYNNNYNNNNNNYNYNYNYYNNYNNNN", "NNNNNNYNYNNYNNNNYYYNNNNNNNNNYNYNNNNNYNNYYNYNNYNNYN", "YYNNNNYNNNNYNYYNNNNNYNNNNNNNNNNNNNNNNNYYNYNNNNNYNN", "YNNNNNNNNNYYNNYNNYYYNNNNNNNYYNYYYNNNYYYYYNNNNYNYYY", "NNNYNYNYYNNNYNYYNNYYNNYNYNNNYNYNNNNNNNNNNYNNYYNNNN", "NYNNNYNYNNNNYNNNNNNNNYNNNNNYNYNNNYYNYNNYNYNNNNYNYY", "NNNYNNNNNNYNNNNNNNYYNNYNNNNNNNNNNNNNNYNYYYNYNYNNNY", "YYYNNYNNNYNYNYYNNNNNNNNYNYYNNNNNNYNNYNYYNNYNYNYNNN", "YNNNYYNYYNNNNNYYNNYNNNNNNYNNYNNNNYNYYNNYYNNNNYNNNN", "YNNNNNYNNNNNYNNYNNNYYNNNYYNNYNNNYNNNNNNNNYNNYNYNNN", "NNNYNNYYNNYNNNNNNYNYNYNNNNYNNYYYNYYNNNYNNYYNYNNNYN", "YYNNNYNNNNNYNNNNNNNNYNNNNNNNNYYNYYNNNNNNNNYNNYNNNN", "YNNYNNYYNYNNYNNYNNNNNYNNYNYNYYYYYNNNNYYNNYNNNNNYNN", "NYYNYNYNNYNYNNYNNNYNNNNNNYNNNYYNYNYNNNYYNNYNNNNNNN", "NNYNNYNNNYNNYYYNYNNYNNNNNNNYNNYYYYYNNYNNYNNYNNNNNY", "NYNNNNNNYYNNNNNNNNYYYYYNNNYYNYNNNYYNNNYNYNYYNNNNNY", "YNYYYNNYYYNNYNNYNYNYNYNNYNYNNYYYYNNNNNNNNNYNYYNNYN", "NYYNNYNYNYNYNNYNYNYNNYYNYNYNNYYNNYYNNYNNNNNYNYYNYN", "YNYNNNNNYNNNNNNNYNNNYNNYNNYNNNYYNYNNYNNYNNNNYNNNNY", "NYYNNYYNNYNYNYYNYYYNYYNNYYYNNNNNYYNNNNYYNNYYNNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> colormap = {"NYNYNNNNYNNNNNYNNNNYNNYNNYNNNNNNNNYYNNNNNYYNNNNNNN", "NNNNNYNYYYNNNNYNYYYYNYNYYYYNYYNYYYNNNYNYNNNNNNNNNN", "NNNNNNNNNNNYNYYNNYNNNNYNNNYNNNYYNNYYNNNNNYNNNNNYNY", "NNYNNNNNNYNYYNNNYNNYNNNNNYNNYNNYNNYYYYNNNNYNNNYNNN", "NYNNNNNYNNNNNYNYYNNNNYNNYNNNYNNNNYNYNYNNNYNNNNNNYN", "NYYNYNYYNNNNNNYYNNNYNNNNNNNNNNNNYNNNNYNYNNNNNNYNYY", "NNNYNNNNNYYYNNNYYNNNNYNYNNYNNNYNYYNNNNYYYYNYNNNNNN", "NNNYNNYNNYNNYNNNNNNYNNNYNNNNNNYNNNNNYNNNYYNNYNYNNN", "YYYNNNYNNNYNNNYNNNNNNNNYNYYYNNNYNYNNYYYYYNNNYNNNNN", "YYNNYNNNNNYYNYNYNYNNNNNNYNYNNYNNNNNYNNYNNYYNYYNYYN", "YYYNNNNYNYNNYNNYNNNNNNNNYNYNNYNNNNNYNYNYYNNNNNNNNN", "NNNNNNYNNNNNNNNYYYNYNNYNNNNNNNYYNNNNYNNYNNYYNNYYNN", "NYYNNNYYNNNYNYNNYNNNYNNYNNNNYNYNYNNYNNNNYNNYNYYNNN", "YYNNYNYYNNNNNNYNNNYYNYNNYYNNNYYYNNNNNYYNYNYNNYNNNN", "YNYNNNNYNNNYNNNYNNNNNYYNYNNNNYYNNYNNNNNNNNNYNYYNNY", "NNYNNNNYYNNYNYNNNNNNYNNNNNYNYYNNNNNNYNNYNYNYNYNYNN", "NNNNNNNYNNNNYNNNNYNYNNNNNYNNYNYNNNNNYYYNYNYNNYNYNY", "NYNNNYNNNYNYNNNNYNYYNYYNYNNNNYNYNNNNYYNYYNYNNNNNNY", "NNNNNNNNNNNYYNNNYNNYYNNNYNYYNYYNYNNNNNNNYYYNNYYNNN", "NNYYYYNNNYNNNNNNYNYNNYNNNYYNYYNNNNNNYNYNYNYYNNYNNN", "YNNNYNNNYYNYYYNNNYNYNNNNYYNNNNYNYNYYYYNNNNNYNYYNNY", "NNYYYNNNYYNNNNYNYNNNYNNNNYNNNNNNYNYNYNNNYYNNNNNNNN", "NNYYNYNYNNNNNNNNNNNYYNNNNYNYNNNYNYYNNNNNYYNYNNYNYN", "YYNYYNNNNNYNNNYNYNYYNNYNYNNNYNNNYYYYNNNNNNNYNYNNNN", "YNNYNNNNYNYYNYNNNYYYYYYNNNNNYNYNNYNNYYNNNNNNYYNNNY", "YNNNNYNNYNNNNYNYNNYNNNNNNNNNYNNNNNYNNNNNNNYYNNNYYN", "YNYYYYNYNNNNNNNYYNYYNYNNYNNNNYYYYNNNNYNYNYNYNNNYYY", "NNYNNNYNNNNNNNYYNYYYNNNYNNNNNYYYNNYYNNNYNYNYNNNNNN", "NNNNNNNYNNNNNNNNNNYYYNNNNYNNNYNYYNNYYNYYNNYNNNNNYY", "NNNYYYYNNYYNNNYNNNNYNNYNYYNNNNNYNNNNNYYYYNNYYNNNYY", "YNNNNYNYNNNNYNYYNNNNNYNNNYNYNYNNNNNNYYNNNNYNYNNYYN", "NYNYYNYNNNNYYYNNYNNYNNNNNYNNNYNNYYNYNNYYYNNNNNYYNN", "NYNNNNNYYNYYNNYNNYNYYNNNYNYNNNYYNNYNYNNNNYYNNNNYYN", "NYNNNYNNYNNYNNNNYNNNNYYNYNYNNNNNNNYNYYYNNNYYNNNNNY", "YNNNNNNNNNNNNYYYNNYNNNYYYNNYNNNNYNNYNNYNYNYYNNNYNY", "NNYYNNYNNYNNNNNNNNNYNNNNYYNYNNNNYNNNNNYYNYYYNYNNYN", "NNNNNYYNYYYNNYNNNNNYYNNYNNYNNNNNYNYYNYYNYNYNNNYNYN", "YNNNNYYNNNYNYNNNYYNNNNNNNNNYYNNNYNNNNNYNNNNNNNYNYN", "YYYYNYYNNYNYNNNYYYYYNNNNYNYYNYNNNNNNNNNNYYYNYYNNNN", "NNYYNYNNYNNNNNYNNNNNYNNNYNYNYYNYNNNYYYNNYYYNNNNNYN", "NYNNYNNNNNYYNNNYNNNNYNYNNNNNNNNNYNNNNYNNNYNYYYYNYN", "NNNYYNNYYNYYNYNNNNNYYNNNYYNYNYNNNYNYYNNYYNYYYNYNNN", "NNYNNNNNYYYYNNYYYYNNYNNNNNNNNYNNNNNNNNYNNYNNNYNNNN", "YYNNYNNNNNYYNNNNYNNNYNNNYNNYYYNYYNYYNYYYNNNNYYNNNY", "NNNNYNNYNNNNYYYNYNNNNYNNYYNNNNNNYNNNYYNNNNYNNNYYYY", "NNNNNNYYNNYNYNYYYYNNYNYNNNNYNNYYYYNNNNNYNNNYNNNNYY", "YNYYNYYYNNNNNNNNNYNNNYNNNNYNYNYYNNYNNYNNNYNNNNNYYN", "NNNNNNYNYYYYNYNNNYNNYYNNYYNNNNNNNNNNNNNNYYYNNNYNNY", "NNNNYNNNYNNNNYNNYNYYNYYNNNYNYYYNNNYNYYNNNNNNNYYNNY", "YYNYNYYYNNNYNNNNYNYYNNNNYYNNNNYYNNYNNNYNYYYYNYNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> colormap = {"NNNNYYNYNYNNNNNNYNYNNNYNNNYNNYNYNNYNNNNYNYYNNYNNNN", "YNNNNNNNNNYNYYYYYNNNNYYYNNNNNYNNNYNNNYNNNNNNNNYNNY", "NNNNYYNNYNNNNNNNNYNNYYNNNNNNYNNNNNNYYNNNYNNYNYNNNY", "NNNNYYYNNYNYYYNNNNNNNNYNNNNYNNNNYYNYNNNNNYNYNYNYNN", "NNNYNNYYYNNNYNNYNYNNNNNNYNNYNNNNYYNYNNNNYYNNNYNNYN", "NNYYNNNNYNNYNNNNYNNNNYNNNYYNNYYNYNNNNNNNYNNNYNYNYN", "NNNNYYNNNNNNYYYNYNNNNYNNYNNNNNYYNNNYYYNYNYYNYNYNYN", "YNNYYNNNNYYNNYNNNNNNNYNNNNYYYNYNYNNNYNNNNNYNNYYYNY", "NYYYNYNNNYYNNNYYNNNYNYNNYNNYYNNNNYYNNNNYNNYNNNNYNY", "NNYNNYNYNNNNNNNNYYNYNYNNNNYYNNNNNNNNNYYNYNYNNNNNYN", "NNNNNNNYYNNYYNNNNNNNNYNNYYYNNNNNNYNYYNYNNNNYNNNYYY", "NNNNNNNNNYNNNNYNNNNNYNNYNNNNYNNNNYYNYNNNNNNNNNYNNN", "NYYNYNYNYNYNNYNYNNYNNNNYNYNNNNNNYYYNNNNNYNNNYYYNNN", "NNNYNNYNYNNNNNNYNNYYYYYNNNYNYYNYNNNYYNNNNNYNNNNYNY", "NNNNYYNNYNNYNNNYNNNNYNNYNNNNYNYNYYNNNYNNNNNNNNYYNN", "NYNNNYYNYNYNNNYNNNNNNYYYNNYNNNNNNNNNYNNYYNNNNYYNNN", "NNYNYNYNNNNNNYYNNNNYYNYNYNNNYNNNNYNYNNNNNYYNNYNNNN", "NYYYYNYYNNNNYYNYNNNYNNNNNNNYYYNNNNYNNNNNYNNNNYNNYY", "YYYNYYNYNNYNNNNNYNNNNYNNNYNNNYYNYYNNNNYNNNNYNNNNNN", "YNYYNNYNYNYNNNYYNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNY", "NYNNNYYYNNYNYYYNYNNYNNNNNYYNYNNNNYYYNNNNNYYYNYYYNN", "NNNYYYNNNYNNNNNYYYNNYNNYYNYNYNYYNYNNNNYNYYNYYNNNNN", "NYNNYYNNNYNYNYNNYYYNNNNNNNNNNNNNYYNNYNNNNNYNNNYYNN", "NNNNYYNYNNNYYNNNNNNYNYYNYNYYYYNNNNNNNNNYYNYNYNYNNN", "YNNNYYNYYNNNNNYNNNNNYYYNNNYNYNNYYNYNNNYNNYNNYNNNNN", "NNYNNNNYYNNNNYNYNYNNYNYYNNNYYNNYNNNNNYNNYNNYNNNYNN", "NYNNYYNYYNNYNYYNYNNNYNNNYYNNNYNNNNNYNNNYNYYNNNYNNN", "NNNNYYNYNNNNYNNNNNNNYNNNYNNNNNNNYNNYYYYNNYYYYNNNYY", "YYNNNNNYNNYYYNNNYYYYNYNYNNNNNNNNYYNNYNNNNNYNYYNNNY", "NNYNNYYNNNNYNYNYNNYYNNYNNNNNYNYYNNYYNNNYNNNNNNNNNN", "YNNNYNNNYYNNYNNNNNYYYYNNYYYNNYNNNYNYNNYYNYYYNYNNNY", "NYNNNNNNNNNNNNNNNNYYNYYNNNNYNNNNNYYYNYYYNNYNNYYYYY", "NYNNNNNNYYNNYYYYNNNNYNNYNNNNYNNYNNYYNYNNYNNNNNYNNY", "NNNNNYNYNNNNNNNNNNNNYYYYNNNNYNNYYNNYNNNNYYYYNYNYYN", "NNNNNNNNNYNNYNNYYNYYNYYYYNYNYNYNNNNNNNYNNNNNNNNNYY", "NNYNNNYNNNNNNNNNNYYNNNNNNNNNNNNNYYNNNNNNYYNNNNYNNN", "NNNNNYNNNNNNNYNNNNYNNNNNNNNNYNYNNYNYNNNNYYNNNNNYNY", "YNNNNYYYNYNNYNNYYNNNNNNNNYNYYNYYYNNYNNNNYNNYNYNNNN", "NYNNNNNYYNNNNNNYYNNYNNNYYNYYNNNNNYNNNNNNNYYYNNYYNN", "YNYNNYNNNNYYNNNNNYNYNNNYNNNNYNYNYNNNNYYNNNNYNNNYNN", "YYYNNNNYNNNNNNNNYNNNNNNNNNNNYYYNNYYNNYYYNYNNYNNNNY", "YNNNNNNNYNYNYNNNNNNNNNYNYNYNYNNNYYNNNNYNNNNNNYNNNN", "YNYYNNNNYNYNNNNYNYYNYNNNNYYYNNNNNNYNNNNYNNNNNYNNNN", "NNNYYNNNNNNYYNYNYNNYNYNNNYNYNNNNYNYNNYNNNNYNNYNNNN", "NNYYNNYNNYNYNNNNYNYYNNNNNYNYNNNNNNNNNNYNYNNNNYNNYY", "NNYNNYNNNNYNNNNYYNNNNYNNNNNNYNNNYNNNYYNNNYNNYNNNNY", "YNYNNYNNNNNNNYNNYYNNNNYNYNNNYYNNYNNNNNYNNNNYYNNNNN", "YNNYNNNYNNNNNNNYYYNNYNNNNNNYNNYYNYNNNNYYNNYNNNNNNN", "YNNNYYNNNYNNYNNNNNYNNNNNYNNYNYYNNNNNNNYNNNNNNNYYNN", "YNNYYNYNNNNNYNNNNYNNYNYNYNYNNNNNYNYNYNNNNNNYYNNYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> colormap = {"NNNNNNNNNYYYNNNYYNNNYNNNNYYNNNNYNNYNYYYNNNNYNNYYYY", "NNNNYNYYYNYNYYNNNNNNNNYNNYNYYNNNNNNNNNNYNYNYNNNYNY", "NYNNYNNYNNYYNNNYYNNNNNYNNNNYNNNNYNYNYYNNNNNYNYNNNY", "NNNNYYNNNNYYNNNNNYNNNNNNNNNNNNYYNNNYNNYYYNNNNNNNNN", "NYNYNNYNNYYYNYNNNNYNYNNNNNNYYNNYNNYYNNNNNYNNNNNNYY", "NNNNNNNYYNNNNNNNNNYYNYNNYNNNNNNNYNNYYYYYYNYNNNNNNN", "NNNNYYNNYNNYYNNNNNNNNNNNNNNNNYNYNNYYNNNNNNNNYYNYNN", "NNNNYYYNNYNNNNNNYNNYYNYNNNYNYNNNNNNNYNNYNYNYYNNYYY", "YYNNYNNNNNYNNYYNNNYNNNYNNNYYNYYYYYNYNNNYNNNNYNYNNN", "YYNYNYNNNNNNNNYNNNYNYNNYNNYYNNNNNNNYYNYNNNNNNNNNNY", "NNNYNYNNNNNYNNYNNNNYNNNNNNNYNNNNNYNYYNYYNYNNNNNYNY", "NNNYNYNNNNNNYNNNYNNYNNNNNYYYNNYNNNYNYNNNNNNYYYYNNN", "NNNNNYNNNNNNNNYNNNNNNNNNNYNYNNNYNNNNNNYNNNYNNNNNYN", "NNNNNNYNNYNNYNNNYNYNNNNYNYYNNYNYYYNNNNYNNYYYNNNNNY", "YNYYNNYNNNYYNYNNYNYNYNNNYNNNYNNNYYNNNNNNNYNNNNNYYY", "YYNYNYYYNNNNNNYNNNNNYNYNNNNNNNYNNNNNNYNNNNYNNNYNNY", "NNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYYYNYNNNNNNNNNYNN", "NYNYNNYNYNYNNYNNNNYNNNNNYNNNNNNYNYYNYNNNNYNNYYNNNN", "NNNNNNYNNYYYYNNYNNNNNYNNYNNYNNNNYYNNNNNNNYNNYNNYNY", "NNNYNNNNNYYNYNNNNYNNNNNNNYNNNYNNNYYYNNYNYNNNNNNYYN", "NNNYNYNNYNNNYYYNYNYNNYNNNNNNNNNNNNNYNYYNYNYNNYNNYN", "NNNYYYYNNNNNNNNNNNNNNNYNNYNNNNYYYNNNNYNNNNNNNNYYNN", "NYYYNYNYNYNYYNYNNNNYNNNYNNYNYYNNYNNNNYNYYYNNYYNYNN", "NNNNNYNYNNNNYNNNYNYNNNNNNYNNNNYNNNNNNYNYNYNYYNNYNN", "NNNYNNNYNNNYNYNNYNNNNNNNNYNNNNYYNYNNNYNNYNNNYYNYNN", "YYNNNNNNNNNNNYYNNNNNYNYYNNNNNYYNNYYYYNYNNNYNYNNNNN", "NNYYNYNYNNYNYNYNNNNNNYNNNNNNYYNYYNNYNYNNNNNNNNNYNN", "YNYYYNNNNNNNNYNYYNYYNNNNNYNNNYNNNYNNNNNYNNNNYNNNNN", "YNYYYNNYNYYNNNYYNNNYNNNNNNNYNNYNNNYNNYYYNNNNNNNYNY", "NNNNNNNNNYYYNYNNNNYNNNNNYNNNYNNYNNNNNNNYNNYNNNNNNN", "NNYNNYNNNNYNNNYYNNNNNNNNYYNYNNNYNNNNNNYYYNYNNNYYNY", "NYNNNYNNNNNYNNNYNYNNNNYNNYNNNNNNYNNYYNNNYNNNNNNNNN", "NYYNNYNNNNYNNNYNNNYNNNNYYNNNNNNNNNNNNYNNNNNNYNNYNY", "YYYNYNNYNYYYNYYNNNYYYYNNNNNNYNNNYNYNNYNNNNNNNNNNYY", "YNNNNNNYNNNYNYNYNNNYNNYNNNNYYNYNNNNYNNNYYNNNNYYNNN", "NNNNNYYNNYYNNNNNNNNNNYNNYNNNNNYNYNNNNNNNYNYNYNNNYN", "NNYNNNYYNNNYNNNNNYYNNNYNNNNYNNNNNYYNNNNNNNNNNNNNNN", "NNYNYNYNNNNYNYNNNNYNYNYNNYNNNNNNYNNNNNNNYNYYYYNYNN", "NNNYNYNNNNNYNNNNNYNYNNNNYNNYNNNYNNYNYNNYYNNNYNNYNY", "NYYNYNYNNNYNYNYYNNNNYYNNYNNYNNNNYYNNNYNNNYNNYNYNNN", "NNYNYYYYNYNNYYNYNYNYNYYNNNYNNNYNNYYNNYNNNNNNNNNYYN", "NNNYYNYNNNYNYNNNNNNNNYNNNYNNNNNNYYYYNNNNNNYNNYYNNN", "NNYNNYNYNNNNYNNNYNYYNNNYNNNYYYNYYNNNNNNNNYNNNNNNNN", "YNNNNNYNNYNNNYYNNNNNNNNNNNNNYYNYNNYNYNNNNNNNNNNNNN", "NNNNNNNYNYYNNNNYNNNNNNYYYYNNNNNNNNNYYYNYNNYNNYNNYN", "YYNNNNNNYYNNNNNNNNNNYNNNNYNNYNYNNNNYYNYNNYNNNNNNNN", "NNNNYYYNYNYNNNYYNYNNYNNYNNYNNNYNNYYNNNNNYYNNYNNYYN", "NNNNYNNNYNNNYNNNNYNNNNNNNNNNYYNNNYNNNNNNYYNYYYNNNN", "YYNYNNYNYYYYNNYYNNYYYYNNYNNNNNNNYYYNNNNNNNYYNNNYNN", "NNNNNNNYYNYNYNYNNYNYYNNNNNYNNNNNNYYNNNNYYNYNYNYNYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> colormap = {"NNYYNYYNNNYNNNNNNNNNNNNYYNNNYNNNNNNYNNNYYNNNNYNYYN", "YNNYNNYNYYNYNNYYYNNYYNNYYNNYNNNNNNYYNNYNNNNYNNYYNN", "NNNNNYYYNNYNNNYYYNNNNNNYNNNNYNNNNYNNNYNYNNNNNNYNNY", "YNNNNYNNYNNNYNNNNNNYNNNNNNNNNNYNYNNNNNNNYNNYYNNYNN", "YNYNNNNYNYNNYNNNNNNNNNNNYNNNNNNYNNNNYNYNNNNYNYYYNN", "NNYNYNYYNNNNNYYNNNYNNNNYNYYNNNNYYYNNNNYNNNNNYNNNYY", "NNNNNNNNNNNYYNNNNNNYNNNNNYNNNNNYYNNNYYYNNYNNNNYNYN", "NNNNYNNNNYYNYNNYYNNNNNNNNNYNNNNYNNNNNYNNNNNYNNNNNY", "NNNYNNYYNNNNNNYNNNNNNYNNNYYNNYNYNNNNNNYNNNNNNNNNNN", "NYYNNYYYYNNYNNNNYNNYNNYYYNNNNYNNNNYNNNYNNNNNYYNNYN", "NNNYNNNNNNNNNNNNNYYYNYYNNYNNNYNYNNNNNNNNNNNNNNNNNN", "YYYNNYYYYNNNNNNYNNNNNYYYYNNYYNYNNNNNYYNNNNYYNNNNYN", "NYNYNYNYYNNNNYYNYNYNNYYNYNNYNNNNYNNNNNNNYNNNNNNNNN", "NYNNNYNNNNYNNNYYNNYYNNYNNNYNYYYYNNNYNNNNYNNNNNYYNN", "YYNYNYNYNNYNNNNNNNYNNYNYNNNNYYNYNYYNNNNNNNNNNYNNNY", "NNYNYYYYNNNNNNYNYNYNNNYYNNNNNYNYYNYNNNNNNYYYNNNNYY", "YNYYNNNNNNNNNNYNNYNNYNYNYYNNYNNNYYNNNNNNYYNNNNNNYN", "YNNNNYNNYYNNYNYNNNNNNNNYNNYNNNNYNNNNYYNNNYYNYNNNYN", "NYNYYYYNNNYYYYNNNNNNYNYYNNYNYNNNNNNNNYNNYNNNNYNYNN", "NYNYYNNNYNNNNNNNNNYNNYYNNNNNNNNNNNYNNNNNNNNNYNNNNY", "NYNYNNYNNNYNNNYYYNYNNNNNYYNNNNYNNNNNNYNYNNNNYNNYNN", "YYNNYNNYNYYYNNYNNNNNYNNNNNNNNYNNNYYNNNYNYNNYYYNNNY", "YNNNNYNNNNNNNYNNNNNNYNNYYYNNYNYNYNNNNNNYNNNNNNNNNY", "NNNNYNNYYNYNNYNNNYYNNNNNNNNYNYNNNNNYNNNNNNNNNNNNNY", "NNNNNYNNNNYNNYNNYNNNNNNNNNNNNNYNNNNYYNNYNNNNNYNNNN", "NYYNYNNYNYYYNNNYNNNYNYNYNNNNNNYNNNYYNNYNNYNNNNNNNN", "YNYNNYNYYNNNNNNNNNNYNNYNYYNYNYNYNYNNNNNNYNNNNNNYNY", "YYNYNYNNNNNYYNNYNNNNNNYNNNNNYNNYNYNNNYYNNYNYNYNNYN", "YNYNYNYNYNNNNNNNNYNNYYNNNNYNNNNNNNYNNNNYYNYNNYYNNN", "NNYNNNNNNNYYNYNNNNNNYNNNYNYYNNNNNNNNNYNNNNYNNNNNYN", "YNYNNYNYNNNNNYYYNYNNNNYNNNNNNYNYNYNNNNNNNNNYNNYYNN", "YNNYNYNNNYNNYNNNNYNNNNNNYNNNNYNNNYNNNNNNYYNNNNNNNY", "NNNNNNNNYNNYNYNYYYYNYNNNNNNNYYNYNYYYNNNNYNNNNNNYNN", "YNNNNYYYNNNNNYYNNYNNNYNNYNYNNYNNNNNNNYNYNYNNNNYYNN", "NNNNNNNNYNNNYNYYYNYYNNYNYNNNNYNYYYNNYYNNYNNYNNNNNN", "NNNYNNNNYNYYNNNYYNNNNYNNYNNNNNYYNNNNYYYYNNNNNNNNNY", "NYYNNNYNNYYNYNNNNNNNYNNNNYNNNNNNYYNYNNYYNYNNNNNNNY", "YNYNYNNNNYNYYNNNNNNNNNNNNYNYNYYNNNNNNNNNNYNNYNNNNN", "YYNNNNYNNNNNNNNNYNNNYYNNNNYYNYYNYYNNNNNYYNYNNNNYYN", "YNNNNYNNNYNYNNNYNNYNYNYNNNNNNYNYNNNYYYNNYNYNNNNNNN", "NYYNNYNNNNNNNYNYNNYNYNNYYNYNNNNNYNYNNNNNNNNYNNYNNY", "NNNYNYNNNNNNNYNNNNNNNNNNYNNNYYNNNNYNYNNNYNNYYNNNNN", "NYNNYNNNNNYNNYNNYNYNNNNNNNNNYNNNNNYYNYNNYYNNYNYYNY", "NNNNNYNNNNYYNYNNNNYYNNYYYNNNYYYNNNNNYNNNNNNNYYNNYY", "NNNNNYNNYNNNNNYNNNNYNNYNNNYNNYYYNNNNNNNNNNNNNNNNNY", "NNYYNNNNNNYNYNNYNNNNNNNYNYNYYNNNNNYNNNYYYNNNNNYNYN", "YNYNNNNYNNNYNNYYNNYNYYYNNNNNNNNNYYYNNYNYNYNNNNNNNN", "NYNNNNNYNYNYNNYYYNYNNYNYNNNNNYNYNNNYNNNNNNNNNNYNYY", "NNYYYYNYNNYNNNNYNNNNYNYNNNNNNNNYNYNNNNNNNYNNNYNNNY", "NYNYNYNYNNYNNYNNYYNYYNNNNYYNYYNYYYNNNYNNNNNNNNNYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> colormap = {"NNNNYYYNYNNNYNNNNNYNNNNNYNNYNNNNNNYNYNYYNNNNYNYNYY", "NNNYNNNNNNYNNNNNYYYNYNNYYNNNYNNYNNNNNNNNNYNNYNNYNN", "NYNYNYNNNNYNNNNNNYYNNNNYNNYNYNNYNNNNYYNNNNYNNNNNNN", "YNNNNNNNNNNNNNNYYYNNNNNNNYNNYNNNNYYNNNNNYNYNNYNNNN", "NYNNNNYNYNYNNYNNNNNYYYNNYNNNYNNNNNNNNNYNNNNNNYYNNY", "NNYYNNNNYNYNYNYYYYNYNYNNNNNYNNYNNNNYNNYYNNYNNNNYNN", "YNNNNYNYNYNYNNNYNNNYNNNNNNNNYYYNNNNNNNNNNYNNNNYNNN", "NYNYNNYNNNNNNNNYYNNNNNNNNNYNYYNNYNNYNNNYYNNNYYNYNN", "NYNNNNYNNNNNNNNYNYYYYNYNNNNNNNYYYYNNYNNNNNNNYYYNNN", "YYYNYNNNNNNNYNYYNNNNNNNNNNYNYNYNYNNNNYNYNNNNNYNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNYYNNNNNYYNYNNNN", "YNNNYYNNNNNNNNYNNNNYNYYNNYNNNNNNNNNNNYYNYNNNNNYYNN", "NNNNYYNYNNYNNNNNNNYYYNNNYNYNNYNNNNNYNYYNYNNNNNYYYN", "YNYNYNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNNYYNN", "NNYNYNNNNNYYYNNNNNNNNNNNYNYNNYYNNNNNNNNNYNNNNYNNNN", "YNYYNYNNYNNNNNNNYNYYNYNYNNNNYNNNYNNNNNNYYYNNNNNNNY", "NNNYNNYNNNNNNNNNNNYYYYNNYYNNYYNNNNNNYNYNYNNNNYNNNN", "NNNYNNNNYNNNNNNNNNNYNNNNNNNYNNYNYNNNNNNNYYYNNNYNYN", "NNNNNNNNNYNYNNNNNNNYNYYYNYYNNNYYNNNNNNNNYYNNNNNYYN", "NYNNNNNYNYNYNYNNYNYNNNNYYNYNNYYYNNYYNYNYYNYNYNNNNN", "YNNNNNYNNNNNNNNNNYNNNNYNNNYNNNNYNNNYNYNNNNNNNNNNYN", "NNYNYNNNYYNNNYNYNNYNNNNNNNNNYNYNNYNYNYNNNYNNNYYNYN", "YNNNNNNYNNNNNNYYYNYNNYNNNNYNNYNNNNNNNNNYYNYNNYYYNN", "YNYNNNNNNNNYNNNNNNNNNYNNNYNNNNNYNNNNNNYYNNNNNNNNNN", "NYNYNNNYNNYYYYNYNNYYNNNNNNNNYNNNYNNYNNYYNNNNNNNYYN", "NNNNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNNNNNNYYNNYNNNNY", "NNNYNYNYYNYYYNNNNNNNYNYNNNNNNYNNYNNYNNYNNYYYYNNNNN", "NYYNNNNNNNNNNNYNYNNNYNNNNNNNNYNNNNYYNNYNYNNNNNNNNN", "NNNNNYNNNNNNYNNNYYYNYNNNNNYNNNNNYNNNNYNYNYNNNNYNNY", "NNNNNNNNNYNNNYYNNYYNNNYNNNNNNNNNNNNNNYNYNNYNYNNNYN", "NNYNNYNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNYNNYNNNNNNNNYN", "YNNYYNNNNNYYNYNNNNYYNNNYNNYNNNNNYNNNNYNNNNYNNNYNNN", "NYYYNNYNNNNYNNNNYYNNYNNNNYNYYYNNNNNNNYYYYYNNNNNYNN", "NNNNYNNNNNNNNYNNNNNNNNYNNYYNYNYNNNNYNNYNYNNNYNNNYN", "YNYYNNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNYNNNYNYNYNNNNN", "NNNNNNYNNNNYYNNNNYNYYNNNNNNNNYYNYYYNYNYYYNNNNNNNNN", "NNYNNNYNNNYYNNNYNNNNNYYYNNYNNNNNNNYNNNNNNNYNNNNNYY", "NNNNNNNYYNYNYNYYNYYNNYYNNNYNYNYYNNYNYNNNYNNYNNYNNY", "YNNNNYYYNNYYNNNNNNYNYNNNNNNNNYYNNYNYNNNNNYNYYNNYNN", "YNNNNYNYYNYNYYNNYYNNNNYYNNYYNNNNNNNYNNNNNNYYNYYYNN", "NNYNNYNNNNNYNNYYNYNNNNYNNNNNNNNNYNNNYNNNNNNYNNNNNN", "YNYNNYNYYNNNNNNYNNNNNNNNNYYNYYNYYNNNNNNYNNYYNNNNNN", "NYNNNYNNYNNNNYYNNNNNNNNNNNNYNNNYNNNYNNNNYNNYNYYNNY", "NNYYNNNNYYYNNNYYNNNNNYNNNNYNNNNYNNYNNNYNNNNNNYYNYN", "NNNYNYYNYYNNNYYNNNYYYNYYNYNNNNYYNNNNNYYNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNYYNNNYNNYNNNYNNNNNNNYNY", "NNNNYYNNNNYYNNNNNYYNNNNNNNNNNYNNNNNNNNNNNNYNNNNYNN", "YYNNNNNNYNNNNNNNNNNNYNYNNNNNNNNNNNNYYNNNYNNNNNNNNN", "NNNNNYNNYNNNNNNNNNYYNNYNNYNNNNNNNNNNNNNNNNNYYNNYNN", "NNYYNNNNNNNNYNNNNNNNNYNYNNNNYNNNNNNNNYNNNNNNYYYNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> colormap = {"NNNNNNNNNNYNNNYYNNNNYYNNNYNNNYNYYNNYNYNNNNNNYNNNYN", "YNNNNNNNYYNNNNNNYNYNNNYYYYNNNYNNNNNNNNYNNNNNNNYNNN", "NNNNNNYNNNYYNNNNNNYNNNYNNNYNYYNNNNYYNNNNYNNNYNNNNN", "NNNNNNNNNNYYNNYNYNNNNNNNYNNYNNNNNNNNNNNYNNYNNYNYNY", "NNNNNYNNNNNNNNNNNNNNNYNNNNYNNNNNNNYNYYNYNYYYNYYNNN", "YNNNNNYNNNNNYNNYYNNNYYNNYNNNNNNNNNNNNNNNYNYNNNNNNN", "YYYNNYNNNYNNNNYNYNNNYNNNNNYNYNYNYNNNNNNYYYNNNNYNNN", "NYNNNNYNYNNNNNNYNNNNNNYYNNNNYYNNNNNYNNNYYYYYNNNYNY", "NNNYNYNNNNNYNYNYNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNYNYYNNYYYYYNYNNNYNNNNNYNYNYNNNN", "NNYNNNNYNNNNYYNYNYNNNNNNNYNNYNYYYYNYYYNYNNNNNYNYNY", "NYNNNNNYNYNNNNNNNNNNNNNYNNNNNNYNNNNNNNNYNNNNNNYYYY", "NNNNYNNNNNYYNNYYNNNNNNNYYNNNNNNNNYNNNYYNNNNNNNNNYN", "NNNNYYYNNYYNYNNNNYNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNNNNNYYNYNNNYNYYYNNNNNYNNNNNNNNNNNYNYNNN", "NNNNNNNYNNYYNNNNNNNNYNNYNNNNNNNNYNNNYNNYYNNYYNNNNY", "NYNYNNNNNNNNNNNNNNNNNNYYNYNYNNYNYNNNNNNNYYNYNNYYNN", "NNNNNNNNNNYNNNNNNNNNNNYNNNNYNYYNNYNNYNYNNNNNNNYNNN", "NNNNNNNYYNYNNYYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YYYYNNNNNYYNYYNNYNNNNNNNNNNNNNNNNNNNYNYYNNNYNNNNNY", "NNYNNNYNNNNNNNNNNNNNNNYNNYNYNNNNNNNYNNNNYNNNNNYYNN", "NNYYYNYYNNNYNNNNNNNNYNNNNNNNYNNYNNNYNNNNNNNNNNNNNY", "NYNNNNYNNNYYNNYNYNYYYNNNNNNYNNNYYNYNNNYYNNNNNNNNNN", "NNYNNNNNYYNNNNYNNNNNNNNNYYNNNNYNNYNNYYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNYNYNNNNYNNNNNNYNYYNNNNNNYNNYNNYNYY", "NNNNNNNNNNYNNYNYYNNYNNYNYNNNNNNNNNNNYNNNYNNNYNNNNN", "NNNNYNYNNYNNYYYNNYYNNNNNNNNNNNNNYNNNNYNYNNYNNNNNNY", "NNYNNNNNNNYNNNYNNNNNNNNYYNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNYNNNNNNNYNNNYNNNYNNNNNNNNNYNNNNN", "YYYYNNNNNNNYNNNNNYYNNNYYNNNNNNYNNNNNNNNNYNNNNYNNYN", "NNNNYNNNNNYNNNYYNNYNYNNYNYNNNNNYNNNNNNYNNYYNYNNYNN", "NYNNYNNNNNNNNNNNYYNNYNNNNNNYYNNNYYNNYNNYYNNNNNNNYN", "YNNYYYNNNYYNNNNNNNNNNNNNNYNNNNNNNNNYNNYYNNNNYNYYYY", "NNYNNNNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNYYNNNNNNN", "NNYNNNNNNNNNYNNNYYNNNYNNNNNNNYNNNNNYNNNNNNNNNNYYNN", "NNNNYNNNNNNNNNNNYNYNNYNYNNNNNYNNNNNNNNYNYNNNNNNNNN", "NNNNNYYYNNNNNNNYNNNYNNNYNNNNNNNNYYYNNNNNNNNNNNNYNN", "NYNYNYNNNNNNNNNNNNNNNNYNYNNYNNYNNNYNNNNNNNNYNNYNYN", "NNYNYNYNNNNNNNNNNNYNYNNNNNNNNNYYNNNNNNNNNNYNNNNYNY", "NYNYNNYYNNNNNNNYYYYNNNNNNNYNYNNNNNNNNNYNNNNNNNYNNN", "NNNNNNNNYNNNNNNNYYNNNNNYNYNNYNNYNNNNYNNNNNYYNNYNNN", "YNNNNNNNYNNNNYNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNYNNYN", "YNNNNYNNYNNNNNNNNNYNNYNNNNNYNNNNNNNNNYYYNNNNNNNYNN", "NNNYNNYNNYYNYNNNNNNNNNNNNYNNNNNNNNNNNNNNYNYNNYNNNN", "NNNNYNYNNNNNNYYNYNNYNNNYNYNNNNNNNYNNNNNYNNNNNNNNNN", "YYYYYYYNNNNNNYNNNYNNNNYNYNNYNNNNNNNNNNNYYNNNNNYNNN", "YNNYYYNNYNNNNNNNYNNNNYNNNNNYYNNYYYNNNYYNYNYNNNNNNN", "NNYYNYNNNNNNYNNNNNNYNNNNYNYNNNNNNNYNNYNNNNNNYYNNNN", "YNYNYNYNNNNNNYYNNYNYNNNYNYNYNNNNNNNNNNNNNNNYYNNNNY", "NNNNNNNNYNYNYNNNNNNNNNNNNYNNYYYNNNNNNNYYNNNNYNNYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> colormap = {"NNNNYNNNNNNNNNNNNNNNNNYYNYNNNNNYNNNYNNNNNNNNNNNNNN", "YNYYNNNNYNNNNYNYYNNNNNNNYNYYYNNNYNNNNNYNNYNNNNYYNN", "NYNNNNNNYNNNYNNNNNNYNNNYNNNNNNNNYYYNNYNYNNYNNNYNNN", "YYNNNNNNYYYYNNNNYYNNNNNNNNNNNNYNNNYNNYYYNYYNNNNYNN", "NNNYNNNYNNNNNNNYYNNNNNNYYNNNNNNNNNNNYYYYNYNNNYNNYN", "YYNNNNNYNNNNNNNNNNYYNNNNNNYNNNYNNNNNYNNNNNNNNYNNYY", "NNNNNNNYNNYNNNNNNYNNNYNNNNNNNNNYNNYNNNYNNYNNNNNNNN", "NYYNNNNNYNYYYNNYNNNNNYYNYYNNNNNNYNNYNNNYYNNNNNNYNY", "NNNYNNYNNNNNNNNYYNYNYNNNNNNNNNYNNNNYNNNNNNNNNYNNNN", "NYNNNNNNNNYNNNYNNYNNNNNNNNYNNYNNYNNNNNYYNNNYNNYNNN", "NNNNNYNYYNNNNNNNNYNNNNYNNNYYNNYNNNNNNNNNNNNNNNYNNN", "NNYNYYNNNYNNNNNNNYNYNNNYNNNYNNNNYNNNNNNNNNNNNNNNYN", "NNNYYNNNNNYYNNNNYNNNYNNYNYNNNNNNNNNNNNYNNNNNNNNNNN", "YNYNNNYNNNYNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYNNNNYNNNNNNNNYNNNNNNNYYNNNNNNNNYNNNNYNNNN", "YYYNNNNNNNYYNNNNNYNNNNNNYYNNNYYYNNNNYYNNYNNNNNNNYN", "NNNNNNNNNNYYNYNYNNNNNNNNNNNNYNYNNNNYNNNYNYNNNNNNYN", "NNNNNNNNNYNNNYNNYNNNNYNNYNNYNNYNNNNYNNYNNNYNNNNYNN", "YYNNYYYYNYYNNNNNNYNYNNNNNNNNNNNNYNNNNYYNNNNYNNNNNN", "NNNYNYNNNNNYYYNNYNNNNNNNNNNNYNNNNNNYNYYNNNNNNNNYYN", "NNNNNNNYYYYNNNNNNYNNNNNNYNNYNNNNNNNYNNNYNNNNNYNNYY", "NNNNNYNNNNNNYNNNNNNNYNYNNNNNYNNYNNYNNNNNNNYYNYNNNN", "YNYNNNNNNNYNNYNNNNNYYNNNYNNYNNNNYYNNNNYNNNYNNNNYNN", "NYNNNNNNNNNNNNNNYYNNYNNNNNNNYNNYNNNNNNNNNYYNNNYNNN", "NNYNNNNNNYNNNNNNYNYNYNNNNNNNNNNNYNNNNNNNNNNYNNNNYY", "YYYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNYNYNNYNN", "NYNNNNNNNNNNYYNNNNYYYNNYNNNNNYNNYNYYNNNNNNYYNNNNYY", "NNNYNNNNNNNNNNNNNNNNYYNYNNNNNNNNYNYNYNNYNNNYNNNNNN", "NNNNNNNYYNNNNNYNYYYNNNNNYNNNNNYNNNNYNNNNNNNNNYNNNY", "NNNNNNNNYYNNYNYNNNNYNNYNNNNNYNNNNNNNNNNNYYNYNNNYNN", "NNNNNNNNNNNNNNNNNYNNNYNNNYNNNNNYYNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNYYNYNNNYNNNYNNNNYNNYNNYYNNNNNNYNNNYYNNNNNNN", "NYNYNNYNNNNNNNNNNNNNNYNNNNNNNNYNNNYNNNNNYNNNNNNYNN", "YNNNNNNNYNYNNNNNNNNYNNNNYNNNNNNNYYNNNNNYNNNNNNNNNY", "NNNNYYNNYNYYNNNNNNNNYNYNNNNNYNNYNNNNNNNYYNNYNNYNNY", "NYYYNNNNNNNNYYNNNNNNYNYNYYNNNNNNNYYNNYNNYNNYNNNYNN", "YYNNNNYNNNNNNNYYNNNNNYNNNNNNNYYNNYYYNNNNYYNYYNNNNN", "YYNNNYNNNNNNNNNNNNNNNNNYYNNNYNYNYNNNNNNNNNNNNNNNYN", "NYNNNYNNNNNNNYNNNNYNYNNYNNYNYNNNNNNNNNYNYNNNNNYYNN", "NNNNYNNYNYNYNYYNNNNNYNNYNNYNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNYYNNNNNNNNNYNNNNYYNNYNYNYNNYNNNNYNNNNN", "NNNNNNNNNNNNYYNYNYNNNNNNNYNYNNNNYYNYNNNNNYNYNNNYNN", "NYNYNNNNNYNNNNYNNNNNNYYYNNNNNNYYYNNYYNNNYNNNNNYYNN", "NNNNNNNNYNNNYNNNYNNNNNNNNNNNNNNNNNNNYYNNYNYNNNYNYN", "YYNNNNNNNNNYYYYNNYNNNYNNNYNNNNNNNNYYNYNNNNNNNNYNNN", "NYNNNNNNYNYNNYYNYNNNNNNNYNYNNNNNNNNNNNNYNNYNNYNNNN", "NNNNNNNNYYYNNNNNNYNNNNNNNNNYNYNNNNYNNYNNNYNNNNYNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNYNNNNNNYNNNNNNNY", "NNNNNYNNYNNNYNNNNYNNNNYNYNYNYNNNYNNNNYNNNNNNNNNNYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> colormap = {"NNNYNNNNNNNNNNNNNNYNNNNNNNNNNYNNNYNYYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNYNNNNNYNNNNYNNNYNNYNNNNNNNYN", "NNNNNNNNNNYNYYNYNNYNNNYNYNNNYNYNNNNNYYNYNYNYYYNNNN", "YNNNNNNNNNNNNYNNNNNNNNNYNNNNNYNYNYNNYNYNNNNNYNNNNY", "NNNNNNNNNNNNNNYNYYNYNNNNYNNNYNNNNNNNNYNNYNNNYNNNNY", "YNNNNNNNNNYNNNNNYNYNNNNNNNNNNNNYYNYNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNYNYNNNNYNNYYNYYNNYNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNYNNNNNYNNNNNNNNNNNNNYNNNYNNNNNNNNNYYN", "YNNNNYNNNYNNYNNNYNNNNNNNNNNYNYNYNYNNNYNNYNNNNYNYNN", "NYNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNYNNNYNNNYNNNNNN", "YYNYYNNYYNNNNNYNYNNNNYNNNYYNNNNNYNYNNNYNNNNNNYNYNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYYYNNNNNNNNNNNNNNN", "NNYNNYYNNNYNNNNNNNYNYNNYNNNNNYNYNNNNNNYNNNNNNYNNNY", "NNYNNNNNNNNYNNNYNNNNNYNNNNNNNNYNYNNNNNYYNNNNNNYNNY", "NYNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNYYNN", "NYYYNNYNNNNNYNYNNNNNNNYNYNNNNNYNNYYNNNNYNNNYNNNNYY", "NYYNNNNNNNNNNNYNYNNNNNNNNNNNNYNNNYNYNNNNNNNNNYNNNY", "NNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYNNYNNYYNNYNNNNNNNNNNNNNYNNYNNNNNNYNNNNNNNNNYNNNN", "NYNNYNNYNNNNNNNNNNNNNNNNNYNNNYYNNNNNNNNNNYNNNNYNNN", "YNNYNNNNNNNNNNNNNYNNYNYNNNYNYNNYNNNYNNNNNNNNNNNNNN", "NNYNYNNNNNNYNNNNNNNNNNNYNNNNNNYNNNNNNNYNNNYNNYYNNN", "NNYNNNNYNNNNNNNNNNNYNYNNNNNNNNYYNNNNNYYNNNYYNNNYNN", "NYNNNYYYNNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNYNNNNNNNNNY", "NYNYNNYNNNYNNNNYYNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNYYN", "NNNNNNNNYNYNYNNNYNNYYNYNNYNNYNNNYNNYNNNYNNNNNYNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYNNNNNNNNNNY", "NYNNNNNNNNYNNNNNNNYYNNNNNYNNNYNNNNNNNNYNNNNNNNYNNN", "NNNNNNNNYNNYNNNNNNNNNNYNNYYYYNNNNNNNNYNNNNNNYYNNNN", "NYNYNYYNNNNNNYYYYYYNNYNNNYNYYNNNNNNNNNNNNNNYNNYNYN", "NNNNNNNNNNNNNNYNYYNNNNNNYNYNNYYNNNNNNNNNYNNYYNNNNN", "NNNNNNYYYNYNNNYNNNNYNNNYNNNYNNNNNNYYYNYYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNNNNNNNNYYNNYNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNNN", "YNYNYYNNNYYNNYYNNNNNNNNNNNNNNNNNNNYNNYNNNNNNYNNNNN", "NYNYNNNNNYNNNNNNNNNYNNNNNNYNNYNNNNNNNNNYNYYNNNNNNN", "NNNNNNNNNNNYNNNYYNNNNNNYNNNYNNNNNNNNNNYNNNYNYNYYYN", "NNNYNYNYYNNNNNYYNNNNNNNYNNNNYNNNYNNNNNNNNNYNNNNYNY", "YNYYNNNNNNNNNNNNNNNNNNNYYNNNYNNNNNNNNYYNNYNNNNYNNY", "NNNNYNNNYNNNNNNNNNYNNNNNNNNNYNNNNNYYNNNNNNNNNYYNNN", "NNNYYYNNNNNNNNNNNNNNYNNNNNNNNNNYNYNNNNNYNNYNNNNNNN", "NYYNNNNNYNYNYYNNNNNNNNNNNNNYNNNNNNYNYNNYNNNNNNYNYN", "YNNNYNYNNNNNNNYNNNNNNNNYNNNNYNNNNNNYNNNNNNNNNNYYNY", "NYNNNNYYNNNNNNNNYNYNNNNYYNYYNYNNNNNNNNNNNNNNNNYNYY", "NNYYNNNYYNNNNNNNYYNNYNNNNYYNNNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNYNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNYY", "YNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NYYNYNNNNNNNYNNNNNNNNNNYNNYNYYNNNNYNYYNNNYNNNNNNNN", "NNNYNYYNNNNNNNNNNNNNYYNNNNYYNYNYNNNNNNNYNNNYNNYNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
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

int test95() {
    vector<string> colormap = {"NNNNNYNNYNNNNNNYYNNNNYNNNNYNNNYYNNNNNNNNNNNNYNNNNN", "YNNNNYNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYNNNNNNYNYYNYY", "NYNNNYNYNNNNNNNNNNNNNNNYNNNYNNNNYNNNNNNNYNNNNNNYNN", "NNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNNNNNNNNNNNNNYNNYYNN", "NNNNNNNNNYNNYNNNNNNNNYNNNNNNNNNNNNNNYNNYNNNYNNNNNY", "NNNNNNNNNNNNNNNYNNYYNNNNNYNNYNNYNNNNYNNYNYYNNNYNYY", "NNNNNNNNNNYNNYNNNNNYNNNNNNNNNNYYNYNNNNNNNNNNYYYNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNYNNNYNNNYNNNNYNNNNYYYYYY", "NYYNNNYNNNYYNYNNYNNNYNNNNNNNNNNNNNNNNNNYYYNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNYYNYNNNNNNNNNY", "NNNNNYNNNNNNNYNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNYNNNYNNN", "NNYNYNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYYNNYNYNNNNNNNNNNNNNYNNNNYYYNNNYYNNNNNNYYNNNNN", "NNNNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNYNN", "NYNNNNNNNNNYYNNNYNNNNNNYNNNNNYNNNNNNNNNYNYNNYNNNNN", "YNNYNNNNNNYNYNNYNNYNNNNNYNNYNNNNNNNNNNNYNNNNNNNNNN", "NNYNYNNNNYNYYNNNYNNYNYNNNNNYNNNNNNYNNNNNNNNNYYNNNN", "YNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNYNYNNNYN", "NNNNNNNNNNNNNYNYNNNNYYYNNNNNNYNNNNNNNNYNYNNNNNNNNN", "NNYNNNYNNNYNNNNNNNNYNNNNYYYNYNNNNNNNNNYNNNYYNNNNNN", "YNYNNNNNYNNNNNNNNNNYNNNNNNNNNNYYNNNNNNNNNYNNNNNNNY", "YNNNNNNYNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNYNYNNNNNYNYNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNYNNNNYYNYNNYNNYNNYNNNNNNNNNNYNNNNNNN", "YNNNNNYNNNNNNNNNNNNNNNYNYNYNNNNNYNYNNNYYNNYNNYNYNN", "NNYNNNNNNYNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNYNNNY", "NNNYYNNNNNNNYNNNYNNNNYNNNNNNYNNNNNYNNNYNYNNNNNNNNN", "YNYNNNNNYNYNYYNNNYNNNNNNNYYNNNNNNNNNYNYNNNNNYNNNYN", "NYNNNNNNNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNNNNYNYYYYNN", "NYNNNNNNNNNNNNNYYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNYNNNYNNNNNNYNNNNNNNNYNNYNNYNNNNYNN", "NNNNNNYNNNNNYNNNNNNNNYNNNYNNNNNYNNNNNNYNNNYNNNNNNY", "NNNNNNNNNNYNNNNNYNNNYNYNNNNNYNNNNNNNNNNNYNNNNNNNNN", "NYYNNYNNNNNNNYYNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNYNYNYNNYNNNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNYNNNNNNNNYNYNNNNNYNNNYNNNNNNYNNNNNNNYNYNNNNN", "NNYNNNNNNNNNNYNNNNYNYNNNNNNNNNNNNNNYNNYNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNNNNNNNNNNNYYNYNNNNNNNYNYNNNNNN", "NNYYYNNNNNNNNYNNNNNNNNNNNYNNNNNNYNNYNNNNNNNNNNYNYN", "YNNYYNNNYNNNNYYNNYNNNNYNNYNNNNNYNNNYNNYNNYNNNNYNNY", "YNYNNNNNNNNNNNNYNYNNNNNNNNNNNNNYNNNNNYNNNNNYNNNYNN", "NNYNNNNYNNNNYNNNNNYNNNNNYNNNNNNNYNNNNNYNYNNNNNNNYN", "NNNNNYNNNNNNNYNNNNNNNNNNYNNNYNNYNNYNNNNYNNNNYNYNNN", "NYNYYNNNNNNNNNNNNNNYNNNNNYYNNNNNNNNYNNYNNNNNNNNYNN", "NNYNYNNYNYNYNNNNNNNNYNNNNNYNNNNNNYNNYNYNNNNNYNNNNN", "NNYNNNNYNYNNNNNNNNYNNNNNNNYNYNYYNNNNYYNYNNNNYNNNNN", "NNNYNNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNYNYYNNNNNNNNNNN", "YNYNNYNNYNNNNYNNNNNNYNYYNNNNNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNYNNNNYNNNNNYNNNNYYYNYNNNNNNNNYNNNNNNNNNNNNYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> colormap = {"NNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNYNYYNNNNNYNN", "NNNNNNNNNNYNNNNNNNNYNNNYNNNNNNNNNNNNNNYNNYNYNNNNNN", "NNNNYYNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNYNNNYNNNNNNNNNYNYN", "NNNYNNNNNNNYYNNNNNNNNNNNNYNNNYNNYNYNNNNNNYNNYNNNNN", "NNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNYNNNNNNYNNNYYYNNN", "NNNNNNNNNNNYNNNNNNNNYYNNNNNNNNNYNNYNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YNYNYNNNNNNNYNNNYNYNNNNNNNNNNYNNYYNNNNYNYNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNYNYNNYNNNNNNNNNYNNNNNYNN", "NNNNNNNNYNNYNNNNYNNNNYNNNNNNNNYNNNNNNNNNYNNYNNNNNN", "NNYNNNNNNNYNNNNNNNYYYNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNNYNNNNNNNNNYYNNYNNNNNNNNYYNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYYNNNYNNNNNNNNYNNNNYNNNNNYNNYNNNY", "NNNNNNNNYNNNNNNNYNNNNYNYNNNNNNNNYNNNNYNNNNNNNNNYNN", "NNNNYYNYNYNNNNNNNNYNNNYNNNYNNNNNNNNYNNNNNNYNNNYYNN", "YNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNN", "NNYNNNNNNNYNNYNNNNNNYNNNNNNYNNNNNNYNYNNNNYNYYNYNYN", "NNYNNNNNNNNNYNNNNNNNNNYNNYNNYNNNNNNNNNNNNNNNYNNYNN", "NNNYYNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNYYNNNNNNN", "YNNNNNNYNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYYNNYNN", "NNNNNYNNYNYNNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNYNNNNNYNNNNNNNNNNYNYNNYNNNNNYNNNNNNNNNNY", "NNNNNNNNNYNNNYNNNNNNNYNNNNNNNNNNNNYNNYNNNNNNNNNNNN", "YNYNNNNNYYNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNYNNNNNN", "NNYNNYNNNNNNYNNNNYNNNNNYNNNNNNNNYNNNNNNNNYNNYNYNNN", "NNNNYNNYNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNYNNYYYNNNNYNNNNNNNNNNNNNNNNNNYNN", "YYNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNYYNNNYYNNNNNY", "NNYNNNNNNNNYNNNNNNYNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNYNNNNNNNNNNNYNNNNYNNNNNNYNYNNNNYNNNYYNNN", "NYNNYNNNNNYNNYYNNNYYNNNYNNNNNNNNNYNNNNNNNNYNNNNNNN", "NNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNYNN", "NYNNYNNNNYNNNNYNNNNNYYYNNNNNNNYYNNYNNNNYNNNNNNNNNN", "NYYNNYYYNNNNNYNNNNNNYNYNNNYNYNYNNNNNNNNNNNNNNYNNNN", "NNNNYNYNNNYNNNNNNNNNNNNYNNNNYNNYNNNNNYNNNNNNNNYNNY", "NNNNNNNNNNNNYNNNNNNNNNNNNYNNNNYNYNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNYNNNNNNNYNNNYNNNNNNNNYYNYYNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNYNNNYNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNY", "NNNNYYNYNNNYNYYYYNNYNYNNNNNNYNNNYNYYNNNNNNYNNNNNNN", "NNNYNYNNNYNYNNNNNNYNNNNNNYNYNNNNYYNNNYNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNYNYNNNNNNYNNNNNNNNNNNNNNYNNNNNYNN", "NNYYNNNNYNNNNNNNNYNNNNNYNNNNNNNNNNNNYNNNNYNNYNNNNN", "YNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNYNNYYNNNNNNNYNYNNYYNNNNNYNNNYNYNNYNNNNNNNN", "YNNNNNNNNNNNNYYYNNYNNYNNNNNNNYNNNNNNNNNNNNNNYNNNNN", "NYNNNNYNNYNNNNYNNNNNNNNNYNNNYNYNNNNNYNNNYNNNNYNNNN", "NNNYNNYNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNYNNNNNYYNN", "NNNNYNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNYNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> colormap = {"NNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNYYNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNYNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNYNNNNYNNNNNNNNNNYNYNNYNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYNNYNNNNYNNNNN", "NNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNYNNNNNNYNNNYNNNNYNNNNNNY", "NNYNNNNYNNNNNNNYNNNNNYYNNNNNNNYNNNNNNNNNYNNYNNNNNN", "NNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNYNNYNYNNNNYNNNNNYNNNYNNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNYNNYNYNNNNNNYNNYNNNNYNNNNNNYNNNNNNNYNNY", "YNNNNNNNNNNYYYNNNNNNNNNYYNNNNNNNNNNNNNNYNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNN", "NYNNNYNNNNNNNNYNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNYNYNNNNYNN", "NNNYNNNNNNYNNNNNNYNNNNNNNNNNYNNYNNNNNNNYNNYYYNYNNN", "NNNNYNNNNNYNNNYNYNNNNNNNNNNNNNNNNNNYNNNNYYYYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNYNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNYNNYNNNNYNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNYNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNYNYNYNNNYNNYNNNNN", "NYNNNNNNNNNNNNNNNYNNYNNNNNNNYNNNNNNNYNNNNNNNNNNNNY", "NNNYYNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNYYYNNNNNYYNYNNN", "YNNYYNNNNNYNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNNNNNNYNNNYNNYNNYNNYNYNNYNNNNNNNNYN", "NNYNNNYNNNNNNNYNNNNNNNNYNNYNNNNNYNNNNNNNNNNNNYNNNN", "NNNNNNYNNYNNNNNNYNNNYNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NYNNYNNNNNNNYNNNYNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNYNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYYNNNNNNYNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNYNNNNNNNNNNNNYNYYNNNNNNYNNNNYNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNYNNNNNYYNNNNYNNNNNNNNNNNNYNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNYNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNYNNNNYYNNNNNNYNNNNNNNNN", "NNYNNNNNYNNNNYNNNNNNNNNNNNYNYNNNNNNNNNYNYNNNYNNNNN", "NNYNNNYNNNNNNNYNNYNNNNNNNNNNYNYNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNYNYYYNNNNNNNNNNYNYNNNNNNNNNNNYNNNNNNNNNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNYNYNNYNNNYNNNNNYNNNNNNNNYNNNNN", "NNNNNNYNNNNNNYNYNNNNNNNYNYNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNYYYNNNNNNNNNNNNNNNNYNNNNYNNYNYNYNYNNYYNNNN", "NNNYNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNYNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNYYNNNNNYNNNYYYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNYNNN", "NNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNYNYNNNNNNYNNNNNNNNNNYNYNNNNNNNY", "YNNNNYNYNYNNNNNNNNNYNNNNNNNNNNNNNYNYNNNNNNNNNNYNNN", "NNYNNYNNNNNNNNNNNNNNNNNYNNYNNNNYNNNNNNNYNNNNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> colormap = {"NNYNNNNNNYNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNYNNNNNYNNNNNNNNNNNYNNNNYNNNYNNNNNYNYNNY", "NNNNNNNNNNNNNYNNNNNNYNNNYNNNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNYNNNNYYNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNYNYNNNYNNNYNNNNNNNYNYNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNYYNNNNNYNNNNN", "NNNNNNNNNNYNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNNNNNNNNNYNNNNNNNNNNNYYNNNYNNNNNNN", "YNYYNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNYNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNYNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNYNYNYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNN", "NNNNYNYNNNNNNNNYNNNNNNNYNNYYNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNYNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNYYNNNNNNNNNNNYNYNYNNNNNNNNNNYNYNNNNNN", "NNYNNNNYNNNNYNNYNNYYNNNNNNYNNNNNNNYYNNNNNNNNYNNYNN", "NNNYNNNNNNNNNNYNNNNNYNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNYNNYYNNNNYYNNNNNNNNNNNNNNNNN", "YNNNNNYNNYNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYYNNNNNNNNNNNNNNYYNNNNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNYYNYNNNNNNNNNNNNNYNNNNNNYNNNNNNYNNNY", "NYNNNNNNNNYNNNNNYYYNNNNNNNNYNNNNNNNNNNNNYNNNNYNNNY", "NNNNNYNNNYNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNYNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNYNNNNYYNNYNN", "NNNNYNNNYNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNNYNNNN", "NYNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYYYNN", "NNNNNNNNNNYNNYNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNYNNNY", "NNNNYNNNNNYNNNNNNNNNNNYYNNNNNYNNYNNNNYNNNNNNYNNNNY", "NNYNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNYNNNYNYNNNNYNYNNN", "YNNNNNNNNYNNNNNNNNNNNNYYNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNNYNNNNYNNNYNNNNYYNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNYNNNNNN", "NNNNNNYNNNNNNNYNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNYNNNNYNNNYYNNNNYYNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNNNYNNNNNNNNNNYNNNYNYNNYNNNNNNYYNYNYNNNNNNNNNNN", "YYNNYNNNNNNYNNNNNNNNNNNNNYNNNNNNNYNNNYYNNNNNNNNNNN", "NNNNNNYYNNYNNNNNNNYNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNN", "NNNNNYYNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNYNYYNNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNYNNNNNNNNNYNNNNNYNNNNNNYNYNNNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNY", "NNNNNNYNNNNNNNNYYYNNNNYNNNNNYNNNNNYNNNNNNYNNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> colormap = {"NNYNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNYNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNYNNN", "NNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNNNN", "NNNNNNNNYNNNYNNNYNNYNNNNNNNNNNNNNNNNNNYNNNYNNNNNNN", "NNNNNNYNNNNNYNNNNNYNNNYNNNNNYYNNNNNNNNNNNNNNNNNNYN", "NNYNNNYNNNNNNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNYYNNYNN", "NNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNYYNNNNNNNNNYNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNYNNYYNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNY", "NNNNYNNNNNYNNNNNNNNNNNNNYNNNNNYYNNNNNNNNNNNNNNYNYN", "NNYNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNYNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNYNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNYNNNNNNNNYNYNNNNNYNNNNNNNY", "NNNNNNNYYNNNNNNNNNNNNYNYNNNNNNNNNNNNNYNNNNNNYNNNNY", "NNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNNNNNNNN", "NNNNNNNNYNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNYNNNYNNNNYNNNYNNNNNNNNNNNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> colormap = {"NNNNNNYNYYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNYYYNNNYNYNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYNNNYNNNY", "YNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNYNNYNNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNYNYNNNNNNNYNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNYNNNNNNNYNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNYNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNYNNNNYYNNNNNNNNNNNNNNNNNNNNNYY", "NYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNN", "YNNNNYNNNYNNYNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYYNNNNYYYNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNYNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNYNNNYNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNNYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> colormap = {"NNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNYNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNYNNNNNNNNNNNNNNNYNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNYNN", "NNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNNY", "NYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNYNNYNNNNNNNYNNYYNNNNNNYNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYN", "NYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNYNNNNNNNNNNNNNNN", "NYNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYN", "NYNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> colormap = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNYNNNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNY", "NNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> colormap = {"NN", "YN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> colormap = {"NY", "NN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> colormap = {"NYNNNNNNNNNN", "YNYNNNNNNNNN", "YYNYNNNNNNNN", "YYYNYNNNNNNN", "YYYYNYNNNNNN", "YYYYYNYNNNNN", "YYYYYYNYNNNN", "YYYYYYYNYNNN", "YYYYYYYYNYNN", "YYYYYYYYYNYN", "YYYYYYYYYYNY", "NNNNNNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> colormap = {"NNNYN", "YNNNY", "NNNNN", "NYNNN", "NNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> colormap = {"NYYNNNN", "NNNYYNN", "NNNNNYN", "NYNNYYN", "NYNYNYN", "NNYNNNY", "NNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> colormap = {"NYNNNNNNNN", "NNNNNNNNYN", "NNNNNNNNNY", "NNYNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNYNNNNNN", "NNNNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> colormap = {"NNYNNYNNYYNYYNYYYNYYNYNYYYYNYNNNN", "NNYNYYNNNYYNNYNNYNNYYYYNYNNYNYNYY", "NNNYYYYNYYYNYNNYNYYYNNNYNNYNNYYYY", "NYYNYNNNNYYNYYYNYNYYNYYYYNYNYNYNY", "YNYNNNNYNYNYNNYYNNNYYYNNNNNYNNNYN", "YYYYNNNNNYYYNNYYYYNNNYYYYNYYNNNNN", "NYNYNYNNYNNYNYYYYNYYYYYNNNYYNNYYY", "NYNYYYYNNNNNNYNYYNNNNNNNNNNNYNYNN", "YYNYYYNYNYYYYNYYYYNNNNYYYNYNYYYNN", "YYYNYYNNYNNYNNNYYYYNNNYNYYYYYYNNN", "NYYYNNNNYNNNNNYNYYNNNNNYNYYNNYNNN", "NYYNYYNYYYYNYYNNNYYYNNNNYYNYNYYNY", "NNYYNYYYNNNNNYYYNNYNNNYYYYYYNYNNN", "YNYYYNYNYNYYYNNYYYNNYYYNNYNNNNYNN", "YNYNYNYNNNNNYYNNYYYYYYYNNNNYYYYNN", "NNYNNYNNNYYYYYNNYYYNNNYYYYNNYYNNY", "NNNYNYNNNYYYYNNNNNNYYYYNYYYYNNNNN", "NYNNYNNNNYYYNYNNNNYYNNNNYNYYNNNYN", "YNYNYYNNNNYNYYYNNNNNNNYYNNYNNYYNY", "YNNNYNNYYNYNYYNYNNYNYYYNYNYYYNNNY", "YYYNYNNNYNNYYNYNYNYNNNNNNNNYYNNNN", "NYYYYYYNYNYYYYNYYYNNNNYNYYNYYYNNY", "NYNNNNYNNNNNYYNNNYNYYYNYNYYNYYNYN", "YNYNNNNYNYYYNYNYYYYNNYYNYNYNNNYYY", "YNNNNNNYNNNYYNNYYNYYNYNYNYNYYYYYY", "NNNNNYYYNNNNNNYNNNYNYNNYYNNYYNYYN", "YYNNNNYNYYNNNNYNNYYYNNNYNNNNYNYNN", "YYYNNNNYYNYNYYNNNYNYYYYNNYNNYNNYN", "NYYNNNNYNNNNNNNYNYNNNNYNYNYNNYNNY", "YYNYYNNYYYYNYNYYNYNYNNNYYYYYNNYNN", "NYYNNNNYNYNNYNYNYYYYYYYNYYYYYYNNN", "YNYNYYNYYNYNNNYNYYYNNYNYYNNYYYYNN", "YNYNNNNYYYYNNYNYYNNYYNNYNNYYYNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> colormap = {"NN", "NN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> colormap = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> colormap = {"NNNYNYN", "NNNNNNN", "NNNNNNN", "NYYNYNN", "NNNNNYY", "NNNNYNN", "NNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> colormap = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1142;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> colormap = {"NNYN", "NNNY", "NYNN", "NNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> colormap = {"NYYNNNNN", "NNNYYYYN", "NNNNNNYN", "NNNNNNNN", "NNNNNNNN", "NNNNNNNN", "NNNNNNNY", "NNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> colormap = {"NYY", "NNN", "NNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> colormap = {"NYNNNNYN", "YNYYYYYN", "NNNNNNNN", "NNNNNNNN", "NNNNNNNN", "NNNNNNNN", "NNNNNNNY", "NNNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> colormap = {"NYYNYNYYYNN", "YNNNYYNNYYN", "NNNYNNNNNNY", "NNYNNNNYYYY", "NYYYNYYYYYN", "YNYYNNNYNNN", "YNNNNNNNNNN", "YYYYYNNNNNN", "NNYYYYYYNNN", "NYNYYNYYNNY", "YNNNNNYYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> colormap = {"NNYYN", "NNNNY", "NYNNN", "NNNNN", "NNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> colormap = {"NNYN", "NNYY", "NYNN", "NNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> colormap = {"NNNNNNNYYN", "NNNNNYNNNN", "YYNNYNNNNN", "NNNNNNNYYN", "NNNNNNYNNY", "NNNNNNNNNY", "YNNYNNNNNN", "YNNNNNNNNY", "NYNNYNNNNN", "NYNYNNNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> colormap = {"NNNYNYYYNYNNNYN", "NNYNNNYYNNNNYNY", "YNNNNNYYYYNNYYY", "NNNNNYYYYYNNNYY", "NNYNNYYNNNYNNNY", "YNNYNNYNYNNYYYY", "NYYYNYNYYYNYNYY", "YYYYNYNNYYYYYNY", "YYNNYYYYNYNNNYN", "NYYNNNYNYNNYYYY", "YNNNNYNYNYNYYYY", "NNNNNNYNYYNNNYN", "YYYYYNYYNNNNNNY", "NYYNNNNYNYNNYNY", "YNYYNYNYNYNNYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> colormap = {"NNYYN", "NNNNN", "YYNYY", "NNNNY", "NNNNN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> colormap = {"NNYYYYNYNYYYNNYYNNNYNNYNYNYYNYYYNNYNNYYNNNYNYN", "NNYNYNNYNYYYNYYNYYNYNYNNYYNNNNNNNYYYNNNNYNNNNN", "NYNYNNNNNNYNYYNYNYNNYYYNYYNYNYNYNYYYNYNYYYNYYY", "NYNNNNNNYNNYYNYNNNNNYYYYNNYYYYYYNNYYNYYYYYYYYY", "YNNYNYNNYYYYNYYYNNYYYYNYNYYYYNNNNNNNYNYYYYYYNN", "YYNYYNNNNYYYNYYYNNNNYYNNNYYYNNYNYNYNNYYNYYNYNY", "YNNYYNNYNYNNYNYYNYYNNYYNNYNNNNYNNNNYYNYYNNYYYY", "YNNNNNYNNNYNYYYNYYNYNYYYNYYNYNNYNYYNNYNNNYYYYN", "NNNNYYNNNNYNYYNNNNNYNYYNNNYYYNYYYYNYYNNYNYNNYN", "NNNYYYYYYNNNNNNNNYYYNYYNYNYNYYYYYYNNYYNYYNYNYY", "NNNNNNYNYNNNYNNYNYNNYYYYYYNNNYNYNYYNNYYNNYYYYN", "YNNYYYYYNNYNNNYNNYNYNNYYNNYNYNNYYNYYNYYNNYYNYN", "YYYYYYYNNYNYNNNYYYYNYNYYYNYYNNNNYNYNNNYYNYNNYN", "YYNNNYNYYYYNNNNNYYYYYYNNYYNNYNYYYNNYYNNYYNNYNY", "NYYYNYNYNNYYYNNNYYYYYNNNYNYYYNNYNNNYYNYNNNYNYY", "YYNNYNNNYYNYNYYNYYYYYNNNNNNYYYYNYNYNYYYNNNYYNN", "NNYYNYYNYNNNNNYNNNYYYNYNNYNYYNNNYNYYYNYNYYYNYN", "NNYNYYNNNNYNNNYNYNYYYYNYYNNNNNYYYYNNNNYNYNYNNN", "NYNYNNYNYNNNNYYYNNNYNNYNYYYYYYNNNNNNYNNYYNYYYY", "YNNYYYNYNNNYYYNNNNYNNYYNNYYNNNNYYNYNYYNNYNYYNN", "NNYNNYNNYYNYYYYYYNYNNYNNNNNYNNYYNYYYYNYYYYNYYY", "YNNNNYNNNNNNNYYYYYNYYNNNYYYNNYYNYNNYYYNYYNYYYN", "YNNYNYYNYNYYYYYYNNYNNYNNNNYNYNYNNYYYYYNYYYYYNN", "YYNYNNNNNYYNNYNYYYYNYYYNYYYNYYYYNNYYNYNNYNYNYY", "NNNYNNYNNNYNNYYYNNNYYNNYNYNNYNNYYYNYYNNYNYYNYY", "YYNNYYYNNYYYYYYYYNNYYYYNNNYYYYNNYYNYNYYYYNYYYY", "YYYYYNYNYNNNNNYNNNYYNYNNYYNYNYNYYYYNNYNNYNNNNY", "NNYYNNNNYYYNYYYNNYNNNYNNNNYNYYYNYNNNNYNYNYYNYY", "YYNYYYYNNNNYYYYNNYYNNNYNNNNNNNYYNYNYYYNNYNNYNY", "YNYYNYYNNNYNYYYNYYNYNYYNYYNYYNNNNYNNYYYNYNYNYN", "NYNYNNYYYNYNYNYNNYNNNYYYYYNYYNNNNYNNNYYNYYYYYN", "YYYYNNNYNNNYYYNYNNYYYYYNNNYYYYNNYNYYYNNYNNNYNY", "NNYYYNYNYNNNYNYYNYYNYYYYNNYYYNYNNNYNNNYNYYNNNY", "YYYNNNNNYNYYYYYYYNYNYNNNNYNNNNNYNNYNYYNNYNYYYN", "NNNNNNNNNYYNNNNNNYNYNYNNNYYNYYYNNYNYNNYYNYYYYN", "YNNNYYYNYNYNNYNYYYNYNYYYNYYYNYNYYNYNYYNYYYNNYY", "NYYNNNYNYYYNYNYYYNYYYNNYNNYYNYYNYYNNNNNNNNNNYN", "YYYYNNNNNNNNNYNNNYYYYYNYNYYNNNYYNYYNYNNYNYYYYN", "NNNNNNYNNNYYYNYYYNYNYYNNNNYYYYYYYYNYYYNNYNNNYY", "NNNYYNNNYYYNNYNNNNYYYNNNNYYNNNNNYYYYNNYNNNNYYY", "NYYNNNYYYYYYYNYYYYYYNYNNYNYYYNNYNYYNYYYYNNYNNN", "NYNNNNYNNYYYNNNNYNYNYYNYNYYNNNYYYNNNNYNNNNYNYN", "NYNYYNYYYNNNYNYNNNYNNYNNYNYYNNYYNYNNYNYYNYNYNN", "NYNNNYNYYNYNNNYYNYNYNYNYNNYYNNYYNNNYNYYNNYYNNY", "YYYYNYYNYNNNYNNNNNYYNYNYYYNYYYNYNYNYNYNYYYYNNY", "NYNNNNNYYYYYYYYNNYNYYNNYNNYNYNYNYNYYYNNNYNYYYN"};
    ColorfulWolves* pObj = new ColorfulWolves();
    clock_t start = clock();
    int result = pObj->getmin(colormap);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15173&pm=12142
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
 
class ColorfulWolves {
public:
  int getmin(vector <string>);
};
 
const int inf = 1000000000;
 
int g[55][55];
 
int ColorfulWolves::getmin(vector <string> cm) {
  int n = cm.size(), i, j, k;
  for (i=0;i<n;i++) {
    int tot = 0;
    for (j=0;j<n;j++)
      if (cm[i][j] == 'N') g[i][j] = inf;
      else g[i][j] = tot++;
  }
  for (k=0;k<n;k++)
    for (i=0;i<n;i++)
      for (j=0;j<n;j++)
        if (g[i][k]+g[k][j] < g[i][j]) g[i][j] = g[i][k]+g[k][j];
  if (g[0][n-1] > 1e8) return -1;
  return g[0][n-1];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/