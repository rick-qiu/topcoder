/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8779
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

class CssRules {
public:
    int getMinimalCssRuleCount(vector<string> xthml);
};

int CssRules::getMinimalCssRuleCount(vector<string> xthml) {
    int ret;
    return ret;
}


int test0() {
    vector<string> xthml = {"<b id='x' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<b id='x' style='color:red'>", "<b id='y' style='color:red'>", "<b id='z' style='color:red'>", "</b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<b id='x' style='color:red'>", "<b id='y' style='color:red'>", "<b id='w' style='color:red'>", "</b>", "</b>", "<u id='z' style='color:red'>", "</u>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> xthml = {"<b id='x' style='color:red'>", "<i id='y' style='color:black'>", "<u id='w' style='color:white'>", "</u>", "</i>", "<u id='z' style='color:yellow'>", "</u>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<b id='x' style='col", "or:red'></b>", "<b id=", "'xx' style='color", ":red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<u id='a' sty", "le='color:gra", "y'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> xthml = {"<b id='a' style='color:blue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<b id='a' st", "yle='color:b", "lue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> xthml = {"<u id='a' style='color:black'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<u id='a' style='color:white'><b id='b' style=", "'color:white'><u id='c' style='color:red'></u>", "</b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> xthml = {"<i id='b' style='color:white'><u id='f' styl", "e='color:red'></u><u id='e' style='color:red", "'></u><u id='d' style='color:gray'></u><i id", "='c' style='color:white'></i></i><i id='a' s", "tyle='color:red'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> xthml = {"<u id='j' styl", "e='color:red'>", "</u><u id='i' ", "style='color:y", "ellow'></u><u ", "id='h' style='", "color:blue'></", "u><u id='g' st", "yle='color:gra", "y'></u><u id='", "f' style='colo", "r:green'></u><", "u id='e' style", "='color:red'><", "/u><u id='d' s", "tyle='color:ye", "llow'></u><u i", "d='c' style='c", "olor:red'></u>", "<u id='b' styl", "e='color:green", "'></u><u id='a", "' style='color", ":red'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> xthml = {"<u id='a' style='color:blue'><b id='b' s", "tyle='color:gray'><u id='e' style='color", ":red'><u id='f' style='color:gray'><b id", "='j' style='color:red'><b id='o' style='", "color:green'></b><b id='n' style='color:", "green'></b><b id='m' style='color:red'><", "/b><u id='l' style='color:green'></u><u ", "id='k' style='color:red'></u></b><b id='", "i' style='color:gray'></b><u id='h' styl", "e='color:red'></u><u id='g' style='color", ":green'></u></u></u><b id='d' style='col", "or:red'></b><u id='c' style='color:green", "'></u></b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> xthml = {"<u id='a' style='color:", "red'><u id='e' style='c", "olor:white'><u id='f' s", "tyle='color:red'><u id=", "'h' style='color:red'><", "b id='o' style='color:y", "ellow'><b id='t' style=", "'color:gray'><u id='u' ", "style='color:white'></u", "></b><u id='s' style='c", "olor:yellow'></u><u id=", "'r' style='color:red'><", "/u><u id='q' style='col", "or:white'></u><u id='p'", " style='color:red'></u>", "</b><u id='n' style='co", "lor:red'></u><u id='m' ", "style='color:red'></u><", "u id='l' style='color:g", "reen'></u><u id='k' sty", "le='color:yellow'></u><", "u id='j' style='color:y", "ellow'></u><u id='i' st", "yle='color:white'></u><", "/u><u id='g' style='col", "or:green'></u></u></u><", "u id='d' style='color:g", "ray'></u><u id='c' styl", "e='color:white'></u><u ", "id='b' style='color:gra", "y'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> xthml = {"<i id='k' style='color:yellow'>", "<u id='n' style='color:yellow'>", "<u id='v' style='color:yellow'>", "<i id='qa' style='color:white'>", "<i id='ga' style='color:white'>", "</i><i id='xa' style='color:yel", "low'></i></i><i id='z' style='c", "olor:white'></i><i id='y' style", "='color:yellow'></i><i id='x' s", "tyle='color:yellow'></i><i id='", "w' style='color:yellow'></i></u", "><i id='u' style='color:white'>", "</i><u id='t' style='color:yell", "ow'></u><i id='s' style='color:", "green'></i><u id='r' style='col", "or:green'></u><u id='q' style='", "color:yellow'></u><u id='p' sty", "le='color:red'></u><i id='o' st", "yle='color:red'></i></u><u id='", "m' style='color:gray'></u><i id", "='l' style='color:white'></i></", "i><u id='j' style='color:white'", "></u><u id='i' style='color:yel", "low'></u><i id='h' style='color", ":white'></i><u id='g' style='co", "lor:white'></u><i id='f' style=", "'color:yellow'></i><i id='e' st", "yle='color:yellow'></i><i id='d", "' style='color:white'></i><u id", "='c' style='color:red'></u><i i", "d='b' style='color:yellow'></i>", "<i id='a' style='color:red'></i", ">"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> xthml = {"<i id='", "a' styl", "e='colo", "r:gray'", "></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> xthml = {"<b id='c' style='color", ":blue'></b><u id='b' s", "tyle='color:blue'></u>", "<b id='a' style='color", ":blue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> xthml = {"<u id='a' style='color:red'>", "<u id='b' style='color:green", "'><b id='c' style='color:red", "'><b id='d' style='color:blu", "e'></b></b></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<u id='a' style='color:red'><", "u id='e' style='color:red'><u", " id='f' style='color:red'></u", "></u><u id='d' style='color:w", "hite'></u><u id='c' style='co", "lor:red'></u><u id='b' style=", "'color:blue'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> xthml = {"<b id='a' style='color:", "red'><b id='b' style='c", "olor:red'><b id='c' sty", "le='color:red'><b id='d", "' style='color:blue'><b", " id='e' style='color:gr", "een'><b id='f' style='c", "olor:red'><b id='g' sty", "le='color:white'></b></", "b></b></b></b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> xthml = {"<u id='a' style='color", ":red'><i id='b' style=", "'color:green'><u id='c", "' style='color:gray'><", "b id='d' style='color:", "white'><u id='e' style", "='color:gray'><i id='f", "' style='color:green'>", "<u id='g' style='color", ":white'><i id='i' styl", "e='color:white'></i><u", " id='h' style='color:r", "ed'></u></u></i></u></", "b></u></i></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> xthml = {"<b id='a' style='color:black'><u id='d' st", "yle='color:black'><u id='h' style='color:b", "lack'><u id='i' style='color:black'><u id=", "'j' style='color:black'></u></u></u><i id=", "'g' style='color:black'></i><u id='f' styl", "e='color:black'></u><u id='e' style='color", ":black'></u></u><i id='c' style='color:bla", "ck'></i><i id='b' style='color:black'></i>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> xthml = {"<b id='c' style='color:blue'><b id='d' sty", "le='color:blue'><b id='i' style='color:bla", "ck'><b id='j' style='color:blue'><b id='l'", " style='color:blue'></b><b id='k' style='c", "olor:blue'></b></b></b><b id='h' style='co", "lor:blue'></b><b id='g' style='color:blue'", "></b><b id='f' style='color:blue'></b><b i", "d='e' style='color:blue'></b></b></b><b id", "='b' style='color:blue'></b><b id='a' styl", "e='color:black'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> xthml = {"<u id='a' style='color:gray'><u id=", "'b' style='color:green'><u id='c' s", "tyle='color:red'><b id='d' style='c", "olor:green'><b id='e' style='color:", "gray'><u id='g' style='color:red'><", "u id='h' style='color:red'><u id='j", "' style='color:red'><u id='k' style", "='color:red'><b id='l' style='color", ":green'><u id='m' style='color:gray", "'></u></b></u></u><u id='i' style='", "color:red'></u></u></u><u id='f' st", "yle='color:red'></u></b></b></u></u", "></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> xthml = {"<u id='a' style='color:white'><", "b id='b' style='color:white'><b", " id='c' style='color:white'><u ", "id='d' style='color:gray'><b id", "='e' style='color:blue'><u id='", "f' style='color:red'><b id='g' ", "style='color:white'><b id='h' s", "tyle='color:white'><u id='i' st", "yle='color:white'><u id='j' sty", "le='color:gray'><u id='k' style", "='color:green'><b id='l' style=", "'color:green'><u id='m' style='", "color:white'><u id='n' style='c", "olor:white'></u></u></b></u></u", "></u></b></b></u></b></u></b></", "b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<b id='c' style='color:blue", "'><b id='n' style='color:bl", "ack'><b id='p' style='color", ":black'></b><b id='o' style", "='color:green'></b></b><b i", "d='m' style='color:black'><", "/b><b id='l' style='color:b", "lack'></b><b id='k' style='", "color:gray'></b><b id='j' s", "tyle='color:gray'></b><b id", "='i' style='color:blue'></b", "><b id='h' style='color:gre", "en'></b><b id='g' style='co", "lor:green'></b><b id='f' st", "yle='color:gray'></b><b id=", "'e' style='color:blue'></b>", "<b id='d' style='color:blue", "'></b></b><b id='b' style='", "color:green'></b><b id='a' ", "style='color:black'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> xthml = {"<u id='f' st", "yle='color:b", "lack'><u id=", "'l' style='c", "olor:black'>", "<b id='q' st", "yle='color:b", "lack'></b><b", " id='p' styl", "e='color:bla", "ck'></b><u i", "d='o' style=", "'color:black", "'></u><u id=", "'n' style='c", "olor:black'>", "</u><u id='m", "' style='col", "or:black'></", "u></u><u id=", "'k' style='c", "olor:black'>", "</u><u id='j", "' style='col", "or:black'></", "u><u id='i' ", "style='color", ":black'></u>", "<u id='h' st", "yle='color:b", "lack'></u><b", " id='g' styl", "e='color:bla", "ck'></b></u>", "<u id='e' st", "yle='color:b", "lack'></u><b", " id='d' styl", "e='color:bla", "ck'></b><b i", "d='c' style=", "'color:black", "'></b><u id=", "'b' style='c", "olor:black'>", "</u><u id='a", "' style='col", "or:black'></", "u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> xthml = {"<b id='a' style='color:green'><i id='b' sty", "le='color:green'><i id='c' style='color:gre", "en'><i id='d' style='color:green'><i id='e'", " style='color:green'><u id='f' style='color", ":green'><i id='g' style='color:green'><u id", "='h' style='color:gray'><u id='i' style='co", "lor:green'><u id='j' style='color:green'><i", " id='m' style='color:green'><i id='n' style", "='color:green'><b id='p' style='color:green", "'><i id='q' style='color:gray'><u id='r' st", "yle='color:green'><u id='s' style='color:bl", "ue'></u></u></i></b><u id='o' style='color:", "gray'></u></i></i><b id='l' style='color:gr", "ay'></b><i id='k' style='color:green'></i><", "/u></u></u></i></u></i></i></i></i></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> xthml = {"<b id='a' style='color:black'><i id='b' ", "style='color:blue'><u id='c' style='colo", "r:blue'><u id='d' style='color:blue'><b ", "id='e' style='color:blue'><u id='f' styl", "e='color:blue'><b id='g' style='color:bl", "ue'><u id='h' style='color:blue'><b id='", "i' style='color:blue'><u id='j' style='c", "olor:blue'><u id='k' style='color:blue'>", "<u id='l' style='color:black'><i id='m' ", "style='color:blue'><i id='n' style='colo", "r:blue'><u id='o' style='color:blue'><i ", "id='p' style='color:blue'><b id='q' styl", "e='color:blue'><u id='s' style='color:bl", "ack'><u id='t' style='color:blue'><u id=", "'u' style='color:black'></u></u></u><b i", "d='r' style='color:blue'></b></b></i></u", "></i></i></u></u></u></b></u></b></u></b", "></u></u></i></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> xthml = {"<u id='a' style='color:blue'><u id='b' ", "style='color:gray'><u id='f' style='col", "or:green'><u id='g' style='color:green'", "><u id='l' style='color:blue'><u id='n'", " style='color:green'><u id='o' style='c", "olor:blue'><u id='q' style='color:green", "'><u id='t' style='color:black'><u id='", "v' style='color:blue'></u><u id='u' sty", "le='color:blue'></u></u><u id='s' style", "='color:green'></u><u id='r' style='col", "or:green'></u></u><u id='p' style='colo", "r:blue'></u></u></u><u id='m' style='co", "lor:green'></u></u><u id='k' style='col", "or:gray'></u><u id='j' style='color:gra", "y'></u><u id='i' style='color:black'></", "u><u id='h' style='color:green'></u></u", "></u><u id='e' style='color:blue'></u><", "u id='d' style='color:green'></u><b id=", "'c' style='color:blue'></b></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> xthml = {"<b id='h' style='color:green'", "><b id='i' style='color:red'>", "<b id='k' style='color:black'", "><b id='p' style='color:red'>", "<b id='u' style='color:green'", "><b id='x' style='color:green", "'></b><b id='w' style='color:", "gray'></b><b id='v' style='co", "lor:blue'></b></b><b id='t' s", "tyle='color:green'></b><b id=", "'s' style='color:blue'></b><b", " id='r' style='color:green'><", "/b><b id='q' style='color:bla", "ck'></b></b><b id='o' style='", "color:gray'></b><b id='n' sty", "le='color:red'></b><b id='m' ", "style='color:red'></b><b id='", "l' style='color:black'></b></", "b><b id='j' style='color:gree", "n'></b></b></b><b id='g' styl", "e='color:blue'></b><b id='f' ", "style='color:blue'></b><b id=", "'e' style='color:red'></b><b ", "id='d' style='color:gray'></b", "><b id='c' style='color:red'>", "</b><b id='b' style='color:bl", "ack'></b><b id='a' style='col", "or:blue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<b id='a' style='color:white'>", "<b id='b' style='color:white'>", "<b id='c' style='color:green'>", "<b id='g' style='color:yellow'", "><b id='h' style='color:yellow", "'><b id='o' style='color:green", "'><b id='r' style='color:gray'", "><b id='s' style='color:yellow", "'><b id='t' style='color:yello", "w'><b id='y' style='color:red'", "></b><b id='x' style='color:gr", "een'></b><b id='w' style='colo", "r:yellow'></b><b id='v' style=", "'color:gray'></b><b id='u' sty", "le='color:yellow'></b></b></b>", "</b><b id='q' style='color:gra", "y'></b><b id='p' style='color:", "white'></b></b><b id='n' style", "='color:green'></b><b id='m' s", "tyle='color:blue'></b><b id='l", "' style='color:gray'></b><b id", "='k' style='color:yellow'></b>", "<b id='j' style='color:green'>", "</b><b id='i' style='color:whi", "te'></b></b></b><b id='f' styl", "e='color:red'></b><b id='e' st", "yle='color:blue'></b><b id='d'", " style='color:gray'></b></b></", "b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> xthml = {"<u id='i' style='color:gray'><u id='l' style='col", "or:white'><u id='m' style='color:green'><u id='z'", " style='color:green'></u><u id='y' style='color:g", "reen'></u><u id='x' style='color:green'></u><u id", "='w' style='color:red'></u><u id='v' style='color", ":gray'></u><u id='u' style='color:white'></u><u i", "d='t' style='color:white'></u><u id='s' style='co", "lor:white'></u><u id='r' style='color:white'></u>", "<u id='q' style='color:red'></u><u id='p' style='", "color:red'></u><u id='o' style='color:white'></u>", "<u id='n' style='color:white'></u></u></u><b id='", "k' style='color:white'></b><u id='j' style='color", ":white'></u></u><u id='h' style='color:gray'></u>", "<u id='g' style='color:gray'></u><u id='f' style=", "'color:green'></u><u id='e' style='color:green'><", "/u><b id='d' style='color:green'></b><u id='c' st", "yle='color:red'></u><u id='b' style='color:white'", "></u><u id='a' style='color:red'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> xthml = {"<u id='f' style='color:y", "ellow'><u id='j' style='", "color:white'><u id='o' s", "tyle='color:yellow'><u i", "d='p' style='color:red'>", "<u id='q' style='color:y", "ellow'><b id='r' style='", "color:yellow'><u id='x' ", "style='color:yellow'><u ", "id='y' style='color:gray", "'><u id='z' style='color", ":yellow'><u id='oa' styl", "e='color:red'></u></u></", "u></u><u id='w' style='c", "olor:white'></u><u id='v", "' style='color:red'></u>", "<b id='u' style='color:r", "ed'></b><u id='t' style=", "'color:yellow'></u><u id", "='s' style='color:green'", "></u></b></u></u></u><u ", "id='n' style='color:whit", "e'></u><u id='m' style='", "color:yellow'></u><u id=", "'l' style='color:yellow'", "></u><u id='k' style='co", "lor:yellow'></u></u><u i", "d='i' style='color:white", "'></u><u id='h' style='c", "olor:yellow'></u><u id='", "g' style='color:red'></u", "></u><u id='e' style='co", "lor:yellow'></u><u id='d", "' style='color:yellow'><", "/u><u id='c' style='colo", "r:yellow'></u><u id='b' ", "style='color:yellow'></u", "><u id='a' style='color:", "white'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> xthml = {"<b id='s' style='color:white'><b ", "id='x' style='color:yellow'><b id", "='y' style='color:yellow'><b id='", "ha' style='color:red'><b id='qa' ", "style='color:yellow'></b></b><b i", "d='xa' style='color:white'></b><b", " id='z' style='color:white'></b><", "/b></b><b id='w' style='color:whi", "te'></b><b id='v' style='color:re", "d'></b><b id='u' style='color:yel", "low'></b><b id='t' style='color:y", "ellow'></b></b><b id='r' style='c", "olor:white'></b><b id='q' style='", "color:white'></b><b id='p' style=", "'color:white'></b><b id='o' style", "='color:yellow'></b><b id='n' sty", "le='color:yellow'></b><b id='m' s", "tyle='color:gray'></b><b id='l' s", "tyle='color:red'></b><b id='k' st", "yle='color:white'></b><b id='j' s", "tyle='color:white'></b><b id='i' ", "style='color:white'></b><b id='h'", " style='color:yellow'></b><b id='", "g' style='color:yellow'></b><b id", "='f' style='color:yellow'></b><b ", "id='e' style='color:yellow'></b><", "b id='d' style='color:yellow'></b", "><b id='c' style='color:white'></", "b><b id='b' style='color:yellow'>", "</b><b id='a' style='color:yellow", "'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> xthml = {"<b id='a' style='color:black'><b id='c' ", "style='color:black'><b id='e' style='col", "or:gray'><b id='f' style='color:black'><", "b id='g' style='color:blue'><b id='h' st", "yle='color:gray'><b id='i' style='color:", "gray'><b id='j' style='color:blue'><b id", "='l' style='color:black'><b id='m' style", "='color:black'><b id='n' style='color:bl", "ack'><b id='p' style='color:black'><b id", "='q' style='color:gray'><b id='z' style=", "'color:gray'><b id='ma' style='color:blu", "e'><b id='fa' style='color:blue'><b id='", "va' style='color:blue'></b><b id='ia' st", "yle='color:blue'></b><b id='wa' style='c", "olor:gray'></b></b></b></b><b id='y' sty", "le='color:gray'></b><b id='x' style='col", "or:gray'></b><b id='w' style='color:blac", "k'></b><b id='v' style='color:black'></b", "><b id='u' style='color:blue'></b><b id=", "'t' style='color:blue'></b><b id='s' sty", "le='color:gray'></b><b id='r' style='col", "or:black'></b></b></b><b id='o' style='c", "olor:black'></b></b></b></b><b id='k' st", "yle='color:blue'></b></b></b></b></b></b", "></b><b id='d' style='color:blue'></b></", "b><b id='b' style='color:blue'></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> xthml = {"<u id='b' style='color", ":black'><u id='e' styl", "e='color:blue'><u id='", "h' style='color:blue'>", "<u id='m' style='color", ":blue'><i id='n' style", "='color:blue'><u id='p", "' style='color:blue'><", "u id='r' style='color:", "black'><u id='s' style", "='color:blue'><i id='v", "' style='color:blue'><", "i id='z' style='color:", "black'><b id='ea' styl", "e='color:blue'><i id='", "na' style='color:blue'", "></i><i id='ba' style=", "'color:blue'></i><b id", "='za' style='color:bla", "ck'></b><i id='ya' sty", "le='color:blue'></i><b", " id='pa' style='color:", "blue'></b></b></i><u i", "d='y' style='color:blu", "e'></u><u id='x' style", "='color:blue'></u><u i", "d='w' style='color:bla", "ck'></u></i><u id='u' ", "style='color:blue'></u", "><i id='t' style='colo", "r:blue'></i></u></u><i", " id='q' style='color:b", "lue'></i></u><i id='o'", " style='color:blue'></", "i></i></u><u id='l' st", "yle='color:blue'></u><", "u id='k' style='color:", "blue'></u><u id='j' st", "yle='color:black'></u>", "<i id='i' style='color", ":blue'></i></u><i id='", "g' style='color:blue'>", "</i><u id='f' style='c", "olor:black'></u></u><i", " id='d' style='color:b", "lue'></i><i id='c' sty", "le='color:black'></i><", "/u><b id='a' style='co", "lor:black'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> xthml = {"<i id='d' style='color:black'><i id='p'", " style='color:black'><i id='u' style='c", "olor:black'><i id='z' style='color:blac", "k'><u id='za' style='color:black'><u id", "='ga' style='color:black'></u><u id='ba", "' style='color:black'></u></u><b id='tb", "' style='color:black'></b><u id='ta' st", "yle='color:black'></u><i id='na' style=", "'color:black'></i><b id='wa' style='col", "or:black'></b></i><b id='y' style='colo", "r:black'></b><i id='x' style='color:bla", "ck'></i><u id='w' style='color:black'><", "/u><i id='v' style='color:black'></i></", "i><i id='t' style='color:black'></i><u ", "id='s' style='color:black'></u><b id='r", "' style='color:black'></b><i id='q' sty", "le='color:black'></i></i><i id='o' styl", "e='color:black'></i><u id='n' style='co", "lor:black'></u><u id='m' style='color:b", "lack'></u><i id='l' style='color:black'", "></i><i id='k' style='color:black'></i>", "<b id='j' style='color:black'></b><b id", "='i' style='color:black'></b><i id='h' ", "style='color:black'></i><i id='g' style", "='color:black'></i><b id='f' style='col", "or:black'></b><u id='e' style='color:bl", "ack'></u></i><u id='c' style='color:bla", "ck'></u><i id='b' style='color:black'><", "/i><i id='a' style='color:black'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> xthml = {"<u id='a' style='color:gray'><i id='e' s", "tyle='color:green'><i id='g' style='colo", "r:gray'><i id='i' style='color:green'><i", " id='j' style='color:green'><i id='l' st", "yle='color:green'><u id='m' style='color", ":green'><i id='o' style='color:green'><i", " id='p' style='color:gray'><u id='u' sty", "le='color:gray'><u id='w' style='color:g", "ray'><u id='x' style='color:green'><i id", "='z' style='color:green'><i id='va' styl", "e='color:green'><u id='ea' style='color:", "green'><i id='xa' style='color:green'></", "i></u><i id='ba' style='color:green'></i", "><i id='wa' style='color:green'></i><i i", "d='vb' style='color:green'></i></i><i id", "='pa' style='color:green'></i><i id='qa'", " style='color:gray'></i><u id='ua' style", "='color:green'></u></i><i id='y' style='", "color:green'></i></u></u><i id='v' style", "='color:green'></i></u><i id='t' style='", "color:green'></i><i id='s' style='color:", "gray'></i><i id='r' style='color:green'>", "</i><i id='q' style='color:green'></i></", "i></i><i id='n' style='color:blue'></i><", "/u></i><i id='k' style='color:green'></i", "></i></i><i id='h' style='color:green'><", "/i></i><u id='f' style='color:green'></u", "></i><i id='d' style='color:green'></i><", "i id='c' style='color:gray'></i><u id='b", "' style='color:green'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> xthml = {"<b id='c' style='color:green'><b id='s' style='co", "lor:gray'><b id='w' style='color:green'><b id='ca", "' style='color:green'></b><b id='xa' style='color", ":green'></b><b id='yb' style='color:gray'></b><b ", "id='ma' style='color:green'></b><b id='la' style=", "'color:green'></b><b id='qb' style='color:green'>", "</b><b id='qa' style='color:green'></b><b id='ya'", " style='color:green'></b><b id='wa' style='color:", "green'></b><b id='aa' style='color:green'></b><b ", "id='z' style='color:green'></b><b id='y' style='c", "olor:gray'></b><b id='x' style='color:gray'></b><", "/b><b id='v' style='color:green'></b><b id='u' st", "yle='color:green'></b><b id='t' style='color:gree", "n'></b></b><b id='r' style='color:green'></b><b i", "d='q' style='color:green'></b><b id='p' style='co", "lor:gray'></b><b id='o' style='color:green'></b><", "b id='n' style='color:gray'></b><b id='m' style='", "color:green'></b><b id='l' style='color:gray'></b", "><b id='k' style='color:green'></b><b id='j' styl", "e='color:gray'></b><b id='i' style='color:green'>", "</b><b id='h' style='color:gray'></b><b id='g' st", "yle='color:gray'></b><b id='f' style='color:green", "'></b><b id='e' style='color:green'></b><b id='d'", " style='color:green'></b></b><b id='b' style='col", "or:green'></b><b id='a' style='color:green'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> xthml = {"<b id='b' style='color:red'><b id='c' style='c", "olor:yellow'><b id='f' style='color:yellow'><b", " id='h' style='color:yellow'><b id='j' style='", "color:white'><b id='n' style='color:yellow'><b", " id='o' style='color:white'><b id='q' style='c", "olor:yellow'><b id='u' style='color:white'><b ", "id='v' style='color:white'><b id='x' style='co", "lor:yellow'><b id='y' style='color:yellow'><b ", "id='ka' style='color:yellow'><b id='xa' style=", "'color:red'><b id='ga' style='color:white'><b ", "id='sa' style='color:white'><b id='ta' style='", "color:yellow'><b id='ba' style='color:yellow'>", "<b id='va' style='color:white'><b id='kb' styl", "e='color:yellow'></b></b></b></b><b id='oa' st", "yle='color:white'></b></b></b></b><b id='fa' s", "tyle='color:white'></b><b id='pa' style='color", ":white'></b></b><b id='z' style='color:yellow'", "></b></b></b><b id='w' style='color:white'></b", "></b></b><b id='t' style='color:white'></b><b ", "id='s' style='color:green'></b><b id='r' style", "='color:white'></b></b><b id='p' style='color:", "yellow'></b></b></b><b id='m' style='color:yel", "low'></b><b id='l' style='color:red'></b><b id", "='k' style='color:red'></b></b><b id='i' style", "='color:yellow'></b></b><b id='g' style='color", ":yellow'></b></b><b id='e' style='color:yellow", "'></b><b id='d' style='color:yellow'></b></b><", "/b><b id='a' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> xthml = {"<i id='e' style='color:yellow", "'><u id='f' style='color:whit", "e'><b id='g' style='color:yel", "low'><i id='h' style='color:g", "reen'><u id='i' style='color:", "white'><u id='k' style='color", ":white'><u id='l' style='colo", "r:green'><u id='m' style='col", "or:yellow'><u id='n' style='c", "olor:white'><u id='o' style='", "color:yellow'><i id='p' style", "='color:yellow'><i id='s' sty", "le='color:yellow'><b id='x' s", "tyle='color:yellow'><b id='y'", " style='color:yellow'><i id='", "z' style='color:yellow'><i id", "='ca' style='color:white'><i ", "id='qa' style='color:yellow'>", "<u id='ha' style='color:yello", "w'><i id='da' style='color:ye", "llow'><b id='ya' style='color", ":red'><b id='la' style='color", ":white'><i id='jb' style='col", "or:white'><b id='ga' style='c", "olor:white'></b></i></b></b><", "b id='xa' style='color:white'", "></b><i id='ja' style='color:", "yellow'></i></i><u id='ta' st", "yle='color:white'></u></u><u ", "id='ea' style='color:yellow'>", "</u></i></i></i></b></b><b id", "='w' style='color:yellow'></b", "><b id='v' style='color:yello", "w'></b><b id='u' style='color", ":white'></b><b id='t' style='", "color:yellow'></b></i><b id='", "r' style='color:yellow'></b><", "u id='q' style='color:yellow'", "></u></i></u></u></u></u></u>", "<i id='j' style='color:yellow", "'></i></u></i></b></u></i><i ", "id='d' style='color:yellow'><", "/i><b id='c' style='color:whi", "te'></b><i id='b' style='colo", "r:white'></i><u id='a' style=", "'color:yellow'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> xthml = {"<b id='c' style='color:blue'", "><b id='d' style='color:whit", "e'><b id='k' style='color:bl", "ue'><b id='u' style='color:g", "reen'><b id='z' style='color", ":yellow'><b id='ya' style='c", "olor:green'><b id='va' style", "='color:red'><b id='za' styl", "e='color:yellow'><b id='wa' ", "style='color:yellow'><b id='", "ba' style='color:red'><b id=", "'ia' style='color:white'><b ", "id='na' style='color:yellow'", "><b id='ua' style='color:yel", "low'><b id='sa' style='color", ":red'></b></b><b id='vb' sty", "le='color:white'></b><b id='", "qa' style='color:red'></b><b", " id='ha' style='color:red'><", "/b></b></b><b id='la' style=", "'color:yellow'></b></b><b id", "='ga' style='color:white'></", "b></b><b id='zb' style='colo", "r:red'></b></b></b></b></b><", "b id='y' style='color:white'", "></b><b id='x' style='color:", "red'></b><b id='w' style='co", "lor:white'></b><b id='v' sty", "le='color:yellow'></b></b><b", " id='t' style='color:yellow'", "></b><b id='s' style='color:", "yellow'></b><b id='r' style=", "'color:red'></b><b id='q' st", "yle='color:red'></b><b id='p", "' style='color:green'></b><b", " id='o' style='color:yellow'", "></b><b id='n' style='color:", "white'></b><b id='m' style='", "color:green'></b><b id='l' s", "tyle='color:gray'></b></b><b", " id='j' style='color:red'></", "b><b id='i' style='color:gre", "en'></b><b id='h' style='col", "or:green'></b><b id='g' styl", "e='color:yellow'></b><b id='", "f' style='color:white'></b><", "b id='e' style='color:yellow", "'></b></b></b><b id='b' styl", "e='color:gray'></b><b id='a'", " style='color:yellow'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> xthml = {"<i id='a' style='color:white'><i id='", "c' style='color:white'><b id='d' styl", "e='color:yellow'><b id='e' style='col", "or:red'><u id='f' style='color:yellow", "'><i id='h' style='color:white'><i id", "='j' style='color:yellow'><u id='k' s", "tyle='color:yellow'><i id='q' style='", "color:white'><i id='r' style='color:w", "hite'><i id='t' style='color:yellow'>", "<i id='u' style='color:white'><i id='", "v' style='color:yellow'><u id='na' st", "yle='color:red'><i id='oa' style='col", "or:red'><i id='va' style='color:red'>", "<i id='ha' style='color:red'><b id='m", "a' style='color:green'><b id='ia' sty", "le='color:yellow'><u id='ea' style='c", "olor:yellow'><u id='ba' style='color:", "white'><i id='eb' style='color:yellow", "'><b id='da' style='color:yellow'></b", "></i><u id='yb' style='color:white'><", "/u></u><b id='ya' style='color:white'", "></b><i id='la' style='color:gray'></", "i></u><i id='fa' style='color:white'>", "</i></b></b></i></i><u id='ob' style=", "'color:yellow'></u><i id='aa' style='", "color:yellow'></i></i></u><u id='z' s", "tyle='color:red'></u><u id='y' style=", "'color:white'></u><i id='x' style='co", "lor:yellow'></i><b id='w' style='colo", "r:yellow'></b></i></i></i><i id='s' s", "tyle='color:white'></i></i></i><u id=", "'p' style='color:white'></u><i id='o'", " style='color:white'></i><i id='n' st", "yle='color:yellow'></i><i id='m' styl", "e='color:white'></i><b id='l' style='", "color:yellow'></b></u></i><u id='i' s", "tyle='color:white'></u></i><i id='g' ", "style='color:red'></i></u></b></b></i", "><i id='b' style='color:white'></i></", "i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> xthml = {"<i id='k' style='color:black'><u id='q' sty", "le='color:red'><i id='w' style='color:red'>", "<u id='ja' style='color:black'><i id='ia' s", "tyle='color:green'><b id='za' style='color:", "red'><u id='aa' style='color:red'></u><i id", "='gc' style='color:black'></i><i id='gb' st", "yle='color:green'></i><u id='fa' style='col", "or:blue'></u><i id='oa' style='color:green'", "></i><i id='ga' style='color:red'></i><u id", "='yc' style='color:black'></u></b><u id='ib", "' style='color:red'></u><i id='yb' style='c", "olor:black'></i></i><i id='ea' style='color", ":gray'></i><u id='rb' style='color:black'><", "/u><u id='qa' style='color:gray'></u><u id=", "'ra' style='color:black'></u></u><u id='ca'", " style='color:black'></u><i id='ya' style='", "color:blue'></i><i id='z' style='color:gree", "n'></i><u id='y' style='color:gray'></u><u ", "id='x' style='color:green'></u></i><u id='v", "' style='color:red'></u><i id='u' style='co", "lor:blue'></i><i id='t' style='color:red'><", "/i><u id='s' style='color:red'></u><i id='r", "' style='color:blue'></i></u><i id='p' styl", "e='color:black'></i><i id='o' style='color:", "black'></i><u id='n' style='color:black'></", "u><b id='m' style='color:green'></b><u id='", "l' style='color:gray'></u></i><b id='j' sty", "le='color:green'></b><i id='i' style='color", ":gray'></i><i id='h' style='color:gray'></i", "><u id='g' style='color:red'></u><i id='f' ", "style='color:red'></i><i id='e' style='colo", "r:green'></i><i id='d' style='color:green'>", "</i><i id='c' style='color:red'></i><u id='", "b' style='color:red'></u><i id='a' style='c", "olor:black'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> xthml = {"<u id='a' style='color:green'><u id='b' style='", "color:yellow'><u id='c' style='color:yellow'><b", " id='d' style='color:red'><u id='e' style='colo", "r:yellow'><u id='f' style='color:gray'><u id='g", "' style='color:red'><u id='h' style='color:red'", "><u id='i' style='color:yellow'><b id='j' style", "='color:yellow'><u id='k' style='color:yellow'>", "<u id='l' style='color:yellow'><b id='m' style=", "'color:yellow'><u id='n' style='color:green'><u", " id='o' style='color:white'><u id='p' style='co", "lor:gray'><u id='q' style='color:white'><u id='", "r' style='color:yellow'><b id='s' style='color:", "yellow'><u id='t' style='color:yellow'><u id='u", "' style='color:yellow'><b id='v' style='color:y", "ellow'><u id='w' style='color:red'><u id='x' st", "yle='color:yellow'><u id='y' style='color:red'>", "<u id='z' style='color:yellow'><u id='oa' style", "='color:yellow'><u id='ob' style='color:yellow'", "><b id='ea' style='color:yellow'><b id='aa' sty", "le='color:yellow'><b id='da' style='color:gray'", "><b id='pa' style='color:yellow'><u id='oc' sty", "le='color:red'><u id='na' style='color:yellow'>", "<u id='ta' style='color:white'><b id='ca' style", "='color:yellow'><u id='ma' style='color:white'>", "<u id='tb' style='color:white'><u id='nb' style", "='color:white'><u id='ha' style='color:yellow'>", "<b id='od' style='color:red'><u id='la' style='", "color:red'><u id='lb' style='color:yellow'><u i", "d='qa' style='color:white'></u></u></u></b></u>", "</u></u></u></b></u></u></u></b></b></b></b></u", "></u></u></u></u></u></b></u></u></b></u></u></", "u></u></u></b></u></u></b></u></u></u></u></u><", "/b></u></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> xthml = {"<b id='b' style='color:green'><b id='c", "' style='color:green'><b id='e' style=", "'color:green'><b id='f' style='color:g", "ray'><b id='j' style='color:green'><b ", "id='l' style='color:green'><b id='m' s", "tyle='color:green'><b id='p' style='co", "lor:green'><b id='t' style='color:gree", "n'><b id='u' style='color:blue'><b id=", "'x' style='color:green'><b id='y' styl", "e='color:green'><b id='sa' style='colo", "r:green'><b id='ea' style='color:green", "'><b id='ua' style='color:green'><b id", "='eb' style='color:green'><b id='la' s", "tyle='color:green'><b id='ba' style='c", "olor:green'><b id='na' style='color:gr", "een'><b id='xa' style='color:green'><b", " id='ta' style='color:green'><b id='ka", "' style='color:green'><b id='ed' style", "='color:gray'><b id='ja' style='color:", "green'><b id='fa' style='color:gray'><", "b id='tb' style='color:green'><b id='x", "b' style='color:green'><b id='da' styl", "e='color:gray'><b id='ra' style='color", ":green'></b></b></b></b></b></b></b><b", " id='ec' style='color:green'></b></b><", "/b></b></b><b id='bb' style='color:gre", "en'></b></b></b></b></b></b></b><b id=", "'oa' style='color:green'></b><b id='z'", " style='color:green'></b></b></b><b id", "='w' style='color:blue'></b><b id='v' ", "style='color:green'></b></b></b><b id=", "'s' style='color:green'></b><b id='r' ", "style='color:green'></b><b id='q' styl", "e='color:green'></b></b><b id='o' styl", "e='color:gray'></b><b id='n' style='co", "lor:green'></b></b></b><b id='k' style", "='color:gray'></b></b><b id='i' style=", "'color:green'></b><b id='h' style='col", "or:green'></b><b id='g' style='color:g", "reen'></b></b></b><b id='d' style='col", "or:green'></b></b></b><b id='a' style=", "'color:gray'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> xthml = {"<i id='c' style='color:blue'><b id='e' sty", "le='color:blue'><b id='j' style='color:blu", "e'><u id='m' style='color:blue'><u id='n' ", "style='color:blue'><u id='p' style='color:", "blue'><b id='q' style='color:blue'><u id='", "r' style='color:blue'><i id='s' style='col", "or:blue'><u id='u' style='color:blue'><i i", "d='y' style='color:blue'><u id='z' style='", "color:black'><u id='ha' style='color:blue'", "><u id='ca' style='color:blue'><b id='hb' ", "style='color:blue'><u id='qa' style='color", ":blue'><i id='ta' style='color:blue'><b id", "='ua' style='color:blue'><i id='xa' style=", "'color:blue'><b id='ja' style='color:black", "'><u id='qb' style='color:blue'><b id='eb'", " style='color:black'><i id='va' style='col", "or:blue'><b id='za' style='color:blue'><u ", "id='sa' style='color:blue'><u id='ka' styl", "e='color:blue'><i id='da' style='color:bla", "ck'><b id='ba' style='color:blue'><u id='s", "b' style='color:blue'></u><i id='bb' style", "='color:black'></i></b></i><i id='ec' styl", "e='color:blue'></i></u></u></b></i></b></u", "><i id='oa' style='color:blue'></i></b></i", "></b><u id='la' style='color:blue'></u><b ", "id='ea' style='color:blue'></b><b id='wa' ", "style='color:black'></b></i></u></b></u></", "u></u></i><b id='x' style='color:black'></", "b><i id='w' style='color:blue'></i><b id='", "v' style='color:blue'></b></u><u id='t' st", "yle='color:blue'></u></i></u></b></u><u id", "='o' style='color:blue'></u></u></u><i id=", "'l' style='color:blue'></i><i id='k' style", "='color:blue'></i></b><b id='i' style='col", "or:black'></b><i id='h' style='color:blue'", "></i><i id='g' style='color:blue'></i><u i", "d='f' style='color:black'></u></b><i id='d", "' style='color:blue'></i></i><b id='b' sty", "le='color:blue'></b><b id='a' style='color", ":blue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> xthml = {"<b id='b' style='color:red'><b id='c' style='col", "or:gray'><b id='d' style='color:green'><b id='e'", " style='color:gray'><b id='f' style='color:white", "'><b id='g' style='color:blue'><b id='h' style='", "color:red'><b id='i' style='color:gray'><b id='j", "' style='color:red'><b id='k' style='color:green", "'><b id='l' style='color:blue'><b id='m' style='", "color:blue'><b id='o' style='color:red'><b id='p", "' style='color:white'><b id='q' style='color:red", "'><b id='s' style='color:black'><b id='t' style=", "'color:white'><b id='u' style='color:black'><b i", "d='w' style='color:white'><b id='x' style='color", ":white'><b id='y' style='color:black'><b id='z' ", "style='color:gray'><b id='la' style='color:red'>", "<b id='sa' style='color:white'><b id='ca' style=", "'color:red'><b id='fa' style='color:blue'><b id=", "'qa' style='color:red'><b id='ea' style='color:g", "reen'><b id='pa' style='color:green'><b id='ra' ", "style='color:blue'><b id='ia' style='color:gray'", "><b id='rb' style='color:red'><b id='ba' style='", "color:red'><b id='pb' style='color:white'><b id=", "'ja' style='color:white'><b id='va' style='color", ":green'><b id='ua' style='color:green'><b id='eb", "' style='color:green'><b id='ta' style='color:bl", "ue'><b id='sc' style='color:green'><b id='ha' st", "yle='color:gray'><b id='qb' style='color:black'>", "</b><b id='lb' style='color:red'></b></b></b></b", "></b></b></b></b></b></b></b><b id='sb' style='c", "olor:gray'></b></b></b></b><b id='za' style='col", "or:blue'></b></b><b id='na' style='color:blue'><", "/b></b></b></b></b></b></b></b></b></b><b id='v'", " style='color:red'></b></b></b></b><b id='r' sty", "le='color:green'></b></b></b></b><b id='n' style", "='color:black'></b></b></b></b></b></b></b></b><", "/b></b></b></b></b><b id='a' style='color:blue'>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> xthml = {"<i id='d' style='color:red'><b id='j' style='co", "lor:red'><i id='l' style='color:gray'><i id='o'", " style='color:green'><b id='p' style='color:gre", "en'><u id='r' style='color:gray'><i id='ga' sty", "le='color:gray'><u id='ta' style='color:red'><b", " id='qa' style='color:red'><u id='da' style='co", "lor:gray'><b id='yb' style='color:green'><b id=", "'fb' style='color:red'><i id='yc' style='color:", "red'><u id='gb' style='color:red'><b id='nc' st", "yle='color:red'></b><b id='rb' style='color:gra", "y'></b><u id='la' style='color:red'></u><u id='", "sa' style='color:green'></u></u><b id='wb' styl", "e='color:gray'></b></i><i id='qb' style='color:", "green'></i></b></b><i id='aa' style='color:gree", "n'></i><i id='nb' style='color:red'></i><i id='", "za' style='color:blue'></i></u><b id='ja' style", "='color:red'></b><u id='na' style='color:green'", "></u><u id='wa' style='color:green'></u><u id='", "fa' style='color:red'></u><b id='ca' style='col", "or:red'></b><u id='ia' style='color:gray'></u><", "/b></u><u id='ya' style='color:red'></u></i><b ", "id='ma' style='color:red'></b><i id='ra' style=", "'color:green'></i><i id='z' style='color:gray'>", "</i><i id='y' style='color:red'></i><i id='x' s", "tyle='color:red'></i><b id='w' style='color:red", "'></b><i id='v' style='color:green'></i><i id='", "u' style='color:blue'></i><b id='t' style='colo", "r:red'></b><b id='s' style='color:red'></b></u>", "<b id='q' style='color:blue'></b></b></i><i id=", "'n' style='color:red'></i><b id='m' style='colo", "r:red'></b></i><b id='k' style='color:blue'></b", "></b><i id='i' style='color:red'></i><u id='h' ", "style='color:gray'></u><b id='g' style='color:r", "ed'></b><i id='f' style='color:gray'></i><u id=", "'e' style='color:gray'></u></i><b id='c' style=", "'color:red'></b><b id='b' style='color:gray'></", "b><i id='a' style='color:gray'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> xthml = {"<b id='c' style='color:red'><u id='e' style='col", "or:white'><u id='h' style='color:green'><u id='i", "' style='color:white'><b id='n' style='color:whi", "te'><b id='o' style='color:white'><u id='q' styl", "e='color:white'><u id='t' style='color:red'><u i", "d='y' style='color:black'><u id='la' style='colo", "r:white'><u id='ba' style='color:white'><u id='l", "b' style='color:red'><u id='na' style='color:gra", "y'><u id='ua' style='color:red'><u id='wa' style", "='color:blue'><u id='gb' style='color:white'></u", "><b id='ga' style='color:red'></b><u id='ja' sty", "le='color:white'></u><u id='da' style='color:gre", "en'></u><u id='ha' style='color:red'></u></u><b ", "id='xa' style='color:gray'></b></u><b id='ka' st", "yle='color:white'></b><b id='bb' style='color:re", "d'></b><u id='lc' style='color:red'></u><b id='p", "b' style='color:red'></b><b id='nb' style='color", ":white'></b><u id='ma' style='color:red'></u><u ", "id='ec' style='color:red'></u><u id='za' style='", "color:gray'></u><u id='ya' style='color:red'></u", "></u></u></u><u id='ia' style='color:white'></u>", "<u id='pa' style='color:white'></u><u id='eb' st", "yle='color:red'></u></u><u id='ta' style='color:", "green'></u><b id='ea' style='color:white'></b><b", " id='sa' style='color:white'></b><u id='z' style", "='color:white'></u></u><u id='x' style='color:re", "d'></u><u id='w' style='color:red'></u><u id='v'", " style='color:green'></u><u id='u' style='color:", "white'></u></u><u id='s' style='color:red'></u><", "u id='r' style='color:green'></u></u><b id='p' s", "tyle='color:white'></b></b></b><u id='m' style='", "color:red'></u><u id='l' style='color:blue'></u>", "<b id='k' style='color:green'></b><u id='j' styl", "e='color:gray'></u></u></u><u id='g' style='colo", "r:white'></u><u id='f' style='color:white'></u><", "/u><b id='d' style='color:green'></b></b><b id='", "b' style='color:white'></b><u id='a' style='colo", "r:green'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> xthml = {"<b id='s' style='color:blue'><b id='xb' style='col", "or:blue'></b><b id='qa' style='color:blue'></b><b ", "id='nd' style='color:blue'></b><b id='da' style='c", "olor:black'></b><b id='pd' style='color:blue'></b>", "<b id='cb' style='color:black'></b><b id='ma' styl", "e='color:blue'></b><b id='ya' style='color:blue'><", "/b><b id='pc' style='color:blue'></b><b id='nc' st", "yle='color:black'></b><b id='nb' style='color:blue", "'></b><b id='xa' style='color:black'></b><b id='na", "' style='color:blue'></b><b id='kc' style='color:b", "lue'></b><b id='oc' style='color:blue'></b><b id='", "zb' style='color:blue'></b><b id='kb' style='color", ":blue'></b><b id='la' style='color:blue'></b><b id", "='wb' style='color:blue'></b><b id='za' style='col", "or:blue'></b><b id='ka' style='color:blue'></b><b ", "id='ca' style='color:blue'></b><b id='wa' style='c", "olor:blue'></b><b id='pb' style='color:blue'></b><", "b id='ha' style='color:blue'></b><b id='ob' style=", "'color:blue'></b><b id='ra' style='color:blue'></b", "><b id='oa' style='color:blue'></b><b id='pa' styl", "e='color:blue'></b><b id='z' style='color:blue'></", "b><b id='y' style='color:blue'></b><b id='x' style", "='color:blue'></b><b id='w' style='color:blue'></b", "><b id='v' style='color:blue'></b><b id='u' style=", "'color:blue'></b><b id='t' style='color:blue'></b>", "</b><b id='r' style='color:blue'></b><b id='q' sty", "le='color:blue'></b><b id='p' style='color:blue'><", "/b><b id='o' style='color:blue'></b><b id='n' styl", "e='color:blue'></b><b id='m' style='color:blue'></", "b><b id='l' style='color:blue'></b><b id='k' style", "='color:blue'></b><b id='j' style='color:blue'></b", "><b id='i' style='color:blue'></b><b id='h' style=", "'color:blue'></b><b id='g' style='color:blue'></b>", "<b id='f' style='color:blue'></b><b id='e' style='", "color:blue'></b><b id='d' style='color:blue'></b><", "b id='c' style='color:blue'></b><b id='b' style='c", "olor:blue'></b><b id='a' style='color:blue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> xthml = {"<u id='t' style='color:black'><u id='z' s", "tyle='color:black'><u id='ba' style='colo", "r:black'><u id='yb' style='color:black'><", "u id='ua' style='color:black'><u id='lb' ", "style='color:black'><u id='qb' style='col", "or:black'><u id='da' style='color:black'>", "<u id='sa' style='color:black'></u><u id=", "'ra' style='color:black'></u><u id='ub' s", "tyle='color:black'></u><u id='xb' style='", "color:black'></u><b id='ic' style='color:", "black'></b></u><u id='vb' style='color:bl", "ack'></u></u><u id='yd' style='color:blac", "k'></u><u id='yc' style='color:black'></u", "><b id='ib' style='color:black'></b><u id", "='xa' style='color:black'></u></u><u id='", "wa' style='color:black'></u><u id='bb' st", "yle='color:black'></u><u id='ca' style='c", "olor:black'></u><u id='va' style='color:b", "lack'></u><u id='nb' style='color:black'>", "</u><u id='la' style='color:black'></u><u", " id='ga' style='color:black'></u><u id='o", "a' style='color:black'></u><u id='qa' sty", "le='color:black'></u><u id='ja' style='co", "lor:black'></u><b id='ia' style='color:bl", "ack'></b></u></u><u id='na' style='color:", "black'></u></u><u id='ya' style='color:bl", "ack'></u></u><u id='y' style='color:black", "'></u><u id='x' style='color:black'></u><", "u id='w' style='color:black'></u><u id='v", "' style='color:black'></u><u id='u' style", "='color:black'></u></u><u id='s' style='c", "olor:black'></u><u id='r' style='color:bl", "ack'></u><u id='q' style='color:black'></", "u><u id='p' style='color:black'></u><u id", "='o' style='color:black'></u><u id='n' st", "yle='color:black'></u><u id='m' style='co", "lor:black'></u><u id='l' style='color:bla", "ck'></u><u id='k' style='color:black'></u", "><u id='j' style='color:black'></u><b id=", "'i' style='color:black'></b><u id='h' sty", "le='color:black'></u><u id='g' style='col", "or:black'></u><u id='f' style='color:blac", "k'></u><u id='e' style='color:black'></u>", "<u id='d' style='color:black'></u><u id='", "c' style='color:black'></u><u id='b' styl", "e='color:black'></u><u id='a' style='colo", "r:black'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> xthml = {"<b id='h' style='color:green'><b id='r' styl", "e='color:gray'><b id='wa' style='color:green", "'><b id='ia' style='color:green'><b id='pb' ", "style='color:green'></b><b id='rc' style='co", "lor:green'></b><b id='ea' style='color:gray'", "></b><b id='rb' style='color:green'></b><b i", "d='fa' style='color:green'></b><b id='wb' st", "yle='color:gray'></b><b id='tb' style='color", ":gray'></b><b id='la' style='color:gray'></b", "><b id='na' style='color:green'></b><b id='h", "a' style='color:green'></b><b id='ab' style=", "'color:gray'></b><b id='aa' style='color:gra", "y'></b><b id='vc' style='color:green'></b></", "b><b id='da' style='color:gray'></b><b id='v", "b' style='color:gray'></b><b id='jb' style='", "color:green'></b><b id='qa' style='color:gra", "y'></b><b id='sa' style='color:gray'></b></b", "><b id='va' style='color:green'></b><b id='b", "a' style='color:gray'></b><b id='ya' style='", "color:green'></b><b id='xa' style='color:gre", "en'></b><b id='ma' style='color:green'></b><", "b id='ga' style='color:green'></b><b id='pa'", " style='color:green'></b><b id='ta' style='c", "olor:green'></b><b id='ra' style='color:gray", "'></b><b id='ja' style='color:green'></b><b ", "id='z' style='color:green'></b><b id='y' sty", "le='color:green'></b><b id='x' style='color:", "green'></b><b id='w' style='color:green'></b", "><b id='v' style='color:blue'></b><b id='u' ", "style='color:green'></b><b id='t' style='col", "or:green'></b><b id='s' style='color:green'>", "</b></b><b id='q' style='color:blue'></b><b ", "id='p' style='color:green'></b><b id='o' sty", "le='color:green'></b><b id='n' style='color:", "gray'></b><b id='m' style='color:gray'></b><", "b id='l' style='color:green'></b><b id='k' s", "tyle='color:green'></b><b id='j' style='colo", "r:gray'></b><b id='i' style='color:green'></", "b></b><b id='g' style='color:green'></b><b i", "d='f' style='color:green'></b><b id='e' styl", "e='color:green'></b><b id='d' style='color:g", "reen'></b><b id='c' style='color:green'></b>", "<b id='b' style='color:green'></b><b id='a' ", "style='color:green'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> xthml = {"<u id='a' style='color:green'><u id='c' style=", "'color:gray'><b id='d' style='color:red'><b id", "='e' style='color:red'><b id='f' style='color:", "red'><b id='g' style='color:green'><u id='h' s", "tyle='color:green'><b id='j' style='color:red'", "><u id='k' style='color:red'><b id='l' style='", "color:red'><u id='n' style='color:red'><u id='", "o' style='color:green'><b id='q' style='color:", "red'><u id='r' style='color:gray'><u id='s' st", "yle='color:green'><b id='v' style='color:red'>", "<u id='w' style='color:red'><u id='x' style='c", "olor:red'><b id='y' style='color:red'><u id='z", "' style='color:red'><u id='ia' style='color:re", "d'><u id='ra' style='color:red'><u id='ba' sty", "le='color:red'><b id='la' style='color:green'>", "<u id='xa' style='color:red'><b id='ea' style=", "'color:green'><b id='rb' style='color:red'><b ", "id='yb' style='color:red'><u id='ka' style='co", "lor:green'><b id='sa' style='color:red'><u id=", "'ta' style='color:green'><u id='va' style='col", "or:red'><u id='za' style='color:red'><b id='ma", "' style='color:red'><u id='fa' style='color:re", "d'><u id='tb' style='color:red'><b id='wa' sty", "le='color:green'><u id='ub' style='color:red'>", "<u id='wb' style='color:red'><u id='da' style=", "'color:red'><u id='db' style='color:red'><b id", "='tc' style='color:red'><u id='oa' style='colo", "r:green'><u id='dc' style='color:gray'><b id='", "vb' style='color:red'><b id='pb' style='color:", "red'></b></b><u id='sc' style='color:green'></", "u><u id='sb' style='color:blue'></u></u></u></", "b></u></u></u><b id='pa' style='color:red'></b", "></u><b id='aa' style='color:red'></b></b><u i", "d='cb' style='color:green'></u></u></u></b></u", "></u></u></b></u></b></b><b id='ua' style='col", "or:red'></b></b></u></b><u id='ya' style='colo", "r:gray'></u></u></u><b id='ca' style='color:gr", "ay'></b></u></u></b></u></u></b><u id='u' styl", "e='color:red'></u><u id='t' style='color:green", "'></u></u></u></b><b id='p' style='color:red'>", "</b></u></u><u id='m' style='color:green'></u>", "</b></u></b><b id='i' style='color:green'></b>", "</u></b></b></b></b></u><b id='b' style='color", ":red'></b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> xthml = {"<u id='a' style='color:black'><u id='b' style='co", "lor:black'><u id='c' style='color:black'><u id='d", "' style='color:black'><u id='h' style='color:blac", "k'><u id='i' style='color:black'><u id='k' style=", "'color:black'><u id='n' style='color:black'><u id", "='p' style='color:black'><u id='v' style='color:b", "lack'><b id='w' style='color:black'><u id='y' sty", "le='color:black'><u id='ga' style='color:black'><", "u id='fb' style='color:black'><u id='xa' style='c", "olor:black'><u id='ka' style='color:black'><u id=", "'ha' style='color:black'><u id='pa' style='color:", "black'><u id='xc' style='color:black'><u id='oa' ", "style='color:black'><u id='ia' style='color:black", "'><u id='zb' style='color:black'><u id='wa' style", "='color:black'><u id='hb' style='color:black'><u ", "id='fd' style='color:black'><u id='ib' style='col", "or:black'><b id='na' style='color:black'></b><u i", "d='ub' style='color:black'></u><b id='ua' style='", "color:black'></b><u id='tb' style='color:black'><", "/u></u></u></u></u><u id='ob' style='color:black'", "></u><b id='kb' style='color:black'></b><u id='ma", "' style='color:black'></u></u></u><u id='da' styl", "e='color:black'></u></u></u><u id='ca' style='col", "or:black'></u><u id='qb' style='color:black'></u>", "</u><u id='xb' style='color:black'></u><u id='va'", " style='color:black'></u><u id='ba' style='color:", "black'></u></u><u id='fc' style='color:black'></u", "></u></u></u><u id='fa' style='color:black'></u><", "u id='qa' style='color:black'></u></u><u id='ya' ", "style='color:black'></u><b id='za' style='color:b", "lack'></b><u id='ta' style='color:black'></u><u i", "d='z' style='color:black'></u></u><b id='x' style", "='color:black'></b></b></u><u id='u' style='color", ":black'></u><u id='t' style='color:black'></u><u ", "id='s' style='color:black'></u><u id='r' style='c", "olor:black'></u><u id='q' style='color:black'></u", "></u><u id='o' style='color:black'></u></u><u id=", "'m' style='color:black'></u><u id='l' style='colo", "r:black'></u></u><u id='j' style='color:black'></", "u></u></u><u id='g' style='color:black'></u><u id", "='f' style='color:black'></u><u id='e' style='col", "or:black'></u></u></u></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> xthml = {"<b id='b' style='color:white'><b id='g' style", "='color:red'><b id='h' style='color:gray'><b ", "id='i' style='color:green'><b id='m' style='c", "olor:red'><b id='p' style='color:green'><b id", "='na' style='color:white'><b id='ka' style='c", "olor:green'><b id='va' style='color:white'><b", " id='da' style='color:green'><b id='ua' style", "='color:white'><b id='wa' style='color:white'", "><b id='tb' style='color:white'><b id='nb' st", "yle='color:green'><b id='qa' style='color:red", "'><b id='aa' style='color:white'><b id='sa' s", "tyle='color:red'><b id='ab' style='color:gree", "n'><b id='dc' style='color:white'><b id='xa' ", "style='color:red'></b></b><b id='td' style='c", "olor:white'></b><b id='ub' style='color:red'>", "</b><b id='hb' style='color:red'></b><b id='q", "c' style='color:white'></b></b><b id='nc' sty", "le='color:white'></b><b id='qb' style='color:", "white'></b></b></b><b id='bb' style='color:re", "d'></b></b><b id='tc' style='color:white'></b", "><b id='db' style='color:white'></b></b><b id", "='yc' style='color:white'></b></b><b id='mb' ", "style='color:white'></b><b id='vb' style='col", "or:red'></b><b id='ta' style='color:red'></b>", "<b id='ga' style='color:white'></b></b></b><b", " id='fa' style='color:red'></b><b id='yb' sty", "le='color:red'></b><b id='ma' style='color:wh", "ite'></b><b id='ha' style='color:white'></b><", "/b></b><b id='ba' style='color:red'></b><b id", "='ya' style='color:red'></b></b></b><b id='za", "' style='color:white'></b><b id='z' style='co", "lor:red'></b><b id='y' style='color:red'></b>", "<b id='x' style='color:white'></b><b id='w' s", "tyle='color:red'></b><b id='v' style='color:w", "hite'></b><b id='u' style='color:white'></b><", "b id='t' style='color:white'></b><b id='s' st", "yle='color:white'></b><b id='r' style='color:", "green'></b><b id='q' style='color:white'></b>", "</b><b id='o' style='color:white'></b><b id='", "n' style='color:red'></b></b><b id='l' style=", "'color:green'></b><b id='k' style='color:whit", "e'></b><b id='j' style='color:white'></b></b>", "</b></b><b id='f' style='color:white'></b><b ", "id='e' style='color:green'></b><b id='d' styl", "e='color:white'></b><b id='c' style='color:re", "d'></b></b><b id='a' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> xthml = {"<u id='a' style='color:green'><u id='g' style='co", "lor:green'><i id='h' style='color:green'><u id='i", "' style='color:green'><i id='j' style='color:gree", "n'><i id='v' style='color:gray'><i id='x' style='", "color:gray'><u id='y' style='color:green'><u id='", "z' style='color:green'><i id='sa' style='color:gr", "een'><i id='la' style='color:green'><u id='ta' st", "yle='color:gray'><i id='va' style='color:blue'><u", " id='ua' style='color:green'><i id='vb' style='co", "lor:gray'><u id='kd' style='color:gray'><i id='ke", "' style='color:gray'><u id='fc' style='color:gree", "n'><u id='ma' style='color:blue'><i id='mb' style", "='color:green'><i id='xb' style='color:green'><i ", "id='gb' style='color:green'></i><i id='ha' style=", "'color:green'></i></i><u id='oa' style='color:gre", "en'></u><i id='sb' style='color:gray'></i></i></u", "></u></i><i id='ub' style='color:green'></i><i id", "='fb' style='color:green'></i></u><u id='wb' styl", "e='color:green'></u><i id='xa' style='color:green", "'></i><i id='vc' style='color:green'></i></i></u>", "<i id='fa' style='color:blue'></i><u id='pa' styl", "e='color:green'></u><i id='eb' style='color:green", "'></i><i id='da' style='color:green'></i><i id='l", "b' style='color:green'></i><u id='na' style='colo", "r:green'></u><i id='ea' style='color:green'></i><", "/i><i id='za' style='color:green'></i><i id='kc' ", "style='color:gray'></i></u><i id='kb' style='colo", "r:blue'></i><i id='ba' style='color:green'></i><u", " id='ka' style='color:gray'></u><i id='aa' style=", "'color:green'></i><u id='ga' style='color:green'>", "</u></i></i><u id='wa' style='color:green'></u></", "u></u></i><i id='w' style='color:gray'></i></i><i", " id='u' style='color:gray'></i><i id='t' style='c", "olor:green'></i><i id='s' style='color:green'></i", "><i id='r' style='color:green'></i><i id='q' styl", "e='color:green'></i><i id='p' style='color:green'", "></i><i id='o' style='color:green'></i><u id='n' ", "style='color:green'></u><i id='m' style='color:gr", "een'></i><b id='l' style='color:green'></b><u id=", "'k' style='color:gray'></u></i></u></i></u><i id=", "'f' style='color:green'></i><i id='e' style='colo", "r:gray'></i><i id='d' style='color:gray'></i><i i", "d='c' style='color:green'></i><i id='b' style='co", "lor:gray'></i></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> xthml = {"<u id='b' style='color:yellow'><u id='c' styl", "e='color:white'><u id='d' style='color:white'", "><u id='e' style='color:white'><u id='f' styl", "e='color:yellow'><u id='g' style='color:white", "'><b id='h' style='color:white'><u id='i' sty", "le='color:red'><u id='j' style='color:green'>", "<u id='k' style='color:green'><u id='l' style", "='color:yellow'><u id='m' style='color:green'", "><u id='n' style='color:red'><u id='o' style=", "'color:yellow'><u id='q' style='color:yellow'", "><u id='r' style='color:red'><u id='t' style=", "'color:white'><u id='u' style='color:yellow'>", "<u id='v' style='color:yellow'><u id='w' styl", "e='color:yellow'><u id='x' style='color:yello", "w'><u id='y' style='color:white'><u id='z' st", "yle='color:white'><u id='na' style='color:yel", "low'><u id='ua' style='color:yellow'><u id='l", "a' style='color:yellow'><u id='ta' style='col", "or:yellow'><u id='va' style='color:yellow'><u", " id='lb' style='color:yellow'><u id='ia' styl", "e='color:white'><u id='aa' style='color:white", "'><u id='xa' style='color:red'><u id='pa' sty", "le='color:yellow'><b id='ub' style='color:whi", "te'><u id='ib' style='color:yellow'><b id='oa", "' style='color:gray'><u id='ab' style='color:", "white'><u id='ma' style='color:yellow'><u id=", "'mb' style='color:yellow'><u id='ka' style='c", "olor:yellow'><b id='kb' style='color:yellow'>", "<u id='ja' style='color:green'><u id='ca' sty", "le='color:yellow'><u id='pb' style='color:yel", "low'><u id='jb' style='color:red'><u id='zb' ", "style='color:yellow'><u id='uc' style='color:", "yellow'><u id='nb' style='color:yellow'><u id", "='nc' style='color:red'><u id='ic' style='col", "or:white'><u id='ac' style='color:white'><u i", "d='kc' style='color:red'><b id='ob' style='co", "lor:yellow'><u id='ya' style='color:yellow'><", "u id='sa' style='color:white'><b id='mc' styl", "e='color:red'><u id='fa' style='color:white'>", "</u></b></u></u></b><u id='xb' style='color:w", "hite'></u></u></u></u></u></u></u></u></u></u", "></u></u></b></u></u></u></u></b><u id='za' s", "tyle='color:yellow'></u></u></b></u></u></u><", "/u></u></u><u id='qa' style='color:white'></u", "></u></u></u></u></u></u></u></u></u></u></u>", "<u id='s' style='color:yellow'></u></u></u><u", " id='p' style='color:white'></u></u></u></u><", "/u></u></u></u></b></u></u></u></u></u></u><u", " id='a' style='color:yellow'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> xthml = {"<b id='a' style='color:green'><b id='b' style", "='color:white'><b id='c' style='color:white'>", "<b id='d' style='color:red'><b id='e' style='", "color:red'><b id='f' style='color:yellow'><b ", "id='j' style='color:white'><b id='k' style='c", "olor:red'><b id='l' style='color:red'><b id='", "m' style='color:white'><b id='n' style='color", ":red'><b id='o' style='color:blue'><b id='p' ", "style='color:white'><b id='q' style='color:wh", "ite'><b id='r' style='color:red'><b id='s' st", "yle='color:red'><b id='t' style='color:red'><", "b id='u' style='color:white'><b id='v' style=", "'color:yellow'><b id='w' style='color:red'><b", " id='x' style='color:gray'><b id='y' style='c", "olor:white'><b id='z' style='color:red'><b id", "='aa' style='color:white'><b id='fa' style='c", "olor:green'><b id='wa' style='color:red'><b i", "d='ab' style='color:white'><b id='ka' style='", "color:white'><b id='qa' style='color:green'><", "b id='wb' style='color:yellow'><b id='da' sty", "le='color:white'><b id='pa' style='color:whit", "e'><b id='pb' style='color:yellow'><b id='qb'", " style='color:white'><b id='fb' style='color:", "red'><b id='ia' style='color:green'><b id='ma", "' style='color:blue'><b id='sa' style='color:", "white'><b id='va' style='color:yellow'><b id=", "'ga' style='color:green'><b id='ya' style='co", "lor:red'><b id='cb' style='color:white'><b id", "='qc' style='color:white'><b id='na' style='c", "olor:yellow'><b id='vb' style='color:green'><", "b id='ba' style='color:white'><b id='bb' styl", "e='color:white'><b id='ac' style='color:red'>", "<b id='ha' style='color:yellow'><b id='mb' st", "yle='color:yellow'><b id='gb' style='color:gr", "een'><b id='cc' style='color:red'><b id='xa' ", "style='color:red'><b id='nc' style='color:yel", "low'></b></b></b><b id='fd' style='color:whit", "e'></b></b><b id='ub' style='color:green'></b", "></b></b><b id='fc' style='color:yellow'></b>", "</b></b></b></b><b id='nb' style='color:yello", "w'></b></b></b></b></b></b><b id='ca' style='", "color:red'></b></b></b></b></b></b><b id='ua'", " style='color:white'></b><b id='za' style='co", "lor:red'></b></b></b></b></b></b></b><b id='l", "a' style='color:yellow'></b></b></b></b></b><", "/b></b></b></b></b></b></b></b></b></b></b></", "b></b></b></b></b></b></b><b id='i' style='co", "lor:white'></b><b id='h' style='color:yellow'", "></b><b id='g' style='color:gray'></b></b></b", "></b></b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> xthml = {"<i id='a' style='color:yellow'><i id='c' style='", "color:yellow'><u id='e' style='color:red'><i id=", "'h' style='color:yellow'><i id='i' style='color:", "yellow'><u id='v' style='color:red'><i id='w' st", "yle='color:white'><i id='z' style='color:white'>", "<i id='ua' style='color:gray'><u id='ba' style='", "color:gray'><u id='ra' style='color:white'><u id", "='yb' style='color:yellow'><u id='ha' style='col", "or:yellow'><u id='bb' style='color:gray'><u id='", "fb' style='color:yellow'><i id='va' style='color", ":red'><i id='ub' style='color:green'><i id='gb' ", "style='color:yellow'><i id='ja' style='color:whi", "te'><i id='xb' style='color:white'><b id='db' st", "yle='color:yellow'><i id='zc' style='color:gray'", "></i><u id='ma' style='color:green'></u><u id='w", "a' style='color:green'></u><i id='lb' style='col", "or:yellow'></i><i id='ad' style='color:white'></", "i><i id='zb' style='color:red'></i></b></i><u id", "='ac' style='color:yellow'></u></i><i id='pa' st", "yle='color:yellow'></i><u id='ic' style='color:w", "hite'></u><i id='ka' style='color:yellow'></i><i", " id='qa' style='color:yellow'></i><i id='hb' sty", "le='color:yellow'></i><u id='ab' style='color:re", "d'></u></i></i><b id='sb' style='color:yellow'><", "/b><i id='ib' style='color:yellow'></i><u id='rc", "' style='color:white'></u></i></u><i id='la' sty", "le='color:yellow'></i></u><b id='rb' style='colo", "r:white'></b><i id='ga' style='color:yellow'></i", "></u><i id='fa' style='color:white'></i><u id='i", "a' style='color:blue'></u></u><i id='sa' style='", "color:white'></i><i id='xa' style='color:white'>", "</i><i id='za' style='color:yellow'></i></u></u>", "<i id='ya' style='color:red'></i></i><i id='da' ", "style='color:yellow'></i><i id='aa' style='color", ":white'></i></i><i id='y' style='color:gray'></i", "><u id='x' style='color:yellow'></u></i></u><i i", "d='u' style='color:green'></i><u id='t' style='c", "olor:white'></u><i id='s' style='color:white'></", "i><i id='r' style='color:green'></i><i id='q' st", "yle='color:yellow'></i><u id='p' style='color:wh", "ite'></u><i id='o' style='color:blue'></i><i id=", "'n' style='color:red'></i><i id='m' style='color", ":black'></i><u id='l' style='color:yellow'></u><", "i id='k' style='color:white'></i><b id='j' style", "='color:yellow'></b></i></i><i id='g' style='col", "or:yellow'></i><i id='f' style='color:red'></i><", "/u><b id='d' style='color:red'></b></i><u id='b'", " style='color:red'></u></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> xthml = {"<b id='b' style='color:blue'><b id='c' style='co", "lor:gray'><b id='e' style='color:gray'><b id='g'", " style='color:gray'><b id='h' style='color:blue'", "><b id='i' style='color:gray'><b id='j' style='c", "olor:gray'><b id='k' style='color:gray'><b id='m", "' style='color:gray'><b id='n' style='color:gray", "'><b id='p' style='color:blue'><b id='q' style='", "color:gray'><b id='r' style='color:gray'><b id='", "t' style='color:gray'><b id='w' style='color:gra", "y'><b id='x' style='color:blue'><b id='y' style=", "'color:blue'><b id='ra' style='color:gray'><b id", "='ha' style='color:gray'><b id='hb' style='color", ":gray'><b id='za' style='color:gray'><b id='lb' ", "style='color:gray'><b id='yb' style='color:gray'", "><b id='ua' style='color:gray'><b id='cb' style=", "'color:gray'><b id='ia' style='color:gray'><b id", "='ma' style='color:blue'><b id='va' style='color", ":blue'><b id='fa' style='color:gray'><b id='sa' ", "style='color:gray'><b id='db' style='color:gray'", "><b id='yd' style='color:blue'><b id='xa' style=", "'color:gray'><b id='cc' style='color:gray'><b id", "='sb' style='color:gray'><b id='zb' style='color", ":gray'><b id='hd' style='color:blue'><b id='ib' ", "style='color:gray'><b id='fc' style='color:gray'", "><b id='rc' style='color:blue'><b id='ic' style=", "'color:gray'><b id='bc' style='color:blue'></b><", "/b><b id='fd' style='color:gray'></b><b id='bb' ", "style='color:gray'></b></b></b></b><b id='mb' st", "yle='color:gray'></b></b></b></b><b id='ta' styl", "e='color:gray'></b><b id='ba' style='color:gray'", "></b><b id='xb' style='color:gray'></b><b id='fb", "' style='color:gray'></b></b></b></b></b><b id='", "yc' style='color:gray'></b></b></b><b id='hc' st", "yle='color:gray'></b><b id='ub' style='color:blu", "e'></b></b><b id='ka' style='color:blue'></b></b", "></b><b id='rb' style='color:gray'></b></b><b id", "='ca' style='color:gray'></b></b><b id='pa' styl", "e='color:blue'></b></b></b><b id='la' style='col", "or:gray'></b></b></b><b id='ea' style='color:gra", "y'></b><b id='ya' style='color:gray'></b></b></b", "><b id='da' style='color:gray'></b><b id='z' sty", "le='color:black'></b></b></b></b><b id='v' style", "='color:blue'></b><b id='u' style='color:gray'><", "/b></b><b id='s' style='color:gray'></b></b></b>", "</b><b id='o' style='color:gray'></b></b></b><b ", "id='l' style='color:gray'></b></b></b></b></b></", "b><b id='f' style='color:gray'></b></b><b id='d'", " style='color:gray'></b></b></b><b id='a' style=", "'color:gray'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> xthml = {"<u id='a' style='color:black'><i id='d' style='co", "lor:black'><i id='e' style='color:black'><i id='f", "' style='color:black'><i id='m' style='color:blac", "k'><u id='n' style='color:black'><i id='r' style=", "'color:black'><u id='s' style='color:black'><i id", "='x' style='color:black'><i id='y' style='color:b", "lack'><i id='ia' style='color:black'><i id='va' s", "tyle='color:black'><i id='ib' style='color:black'", "><i id='pa' style='color:black'><i id='qb' style=", "'color:black'><i id='da' style='color:black'><u i", "d='pb' style='color:black'><i id='oa' style='colo", "r:black'><i id='aa' style='color:black'><u id='hb", "' style='color:black'><i id='sa' style='color:bla", "ck'><i id='ba' style='color:black'><i id='ab' sty", "le='color:black'><i id='db' style='color:black'><", "u id='qc' style='color:black'><i id='lb' style='c", "olor:black'><i id='ic' style='color:black'><u id=", "'ma' style='color:black'><i id='pc' style='color:", "black'><i id='ta' style='color:black'><u id='ea' ", "style='color:black'><i id='id' style='color:black", "'><i id='hc' style='color:black'><i id='zb' style", "='color:black'><i id='oc' style='color:black'></i", "></i></i></i><i id='lc' style='color:black'></i><", "/u><u id='xb' style='color:black'></u><i id='yb' ", "style='color:black'></i><i id='ob' style='color:b", "lack'></i></i><i id='dc' style='color:black'></i>", "<u id='ya' style='color:black'></u><u id='qd' sty", "le='color:black'></u></i></u><b id='ja' style='co", "lor:black'></b></i><i id='cb' style='color:black'", "></i><i id='xa' style='color:black'></i></i></u><", "/i><u id='bb' style='color:black'></u></i><i id='", "za' style='color:black'></i></i><b id='la' style=", "'color:black'></b></i><i id='ca' style='color:bla", "ck'></i></u></i></i><i id='fa' style='color:black", "'></i><u id='wa' style='color:black'></u></u></i>", "</i></i></i><i id='ha' style='color:black'></i><i", " id='qa' style='color:black'></i></i></i><i id='z", "' style='color:black'></i></i></i><i id='w' style", "='color:black'></i><i id='v' style='color:black'>", "</i><u id='u' style='color:black'></u><i id='t' s", "tyle='color:black'></i></u></i><i id='q' style='c", "olor:black'></i><u id='p' style='color:black'></u", "><b id='o' style='color:black'></b></u></i><i id=", "'l' style='color:black'></i><i id='k' style='colo", "r:black'></i><i id='j' style='color:black'></i><i", " id='i' style='color:black'></i><i id='h' style='", "color:black'></i><i id='g' style='color:black'></", "i></i></i></i><u id='c' style='color:black'></u><", "i id='b' style='color:black'></i></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> xthml = {"<u id='a' style='color:green'><u id='c' style='co", "lor:green'><u id='d' style='color:gray'><u id='f'", " style='color:red'><u id='i' style='color:red'><u", " id='j' style='color:red'><u id='k' style='color:", "green'><u id='o' style='color:red'><u id='u' styl", "e='color:red'><u id='v' style='color:red'><u id='", "ra' style='color:red'><u id='ea' style='color:gre", "en'><u id='jc' style='color:green'><u id='za' sty", "le='color:red'><u id='rb' style='color:red'><u id", "='ua' style='color:gray'><u id='gb' style='color:", "gray'><u id='yb' style='color:blue'><u id='qc' st", "yle='color:green'><u id='aa' style='color:green'>", "<u id='da' style='color:red'><u id='qf' style='co", "lor:green'><b id='ka' style='color:red'></b><u id", "='ac' style='color:green'></u><u id='yd' style='c", "olor:red'></u></u><u id='db' style='color:green'>", "</u><u id='ba' style='color:red'></u><b id='gc' s", "tyle='color:green'></b><u id='ab' style='color:gr", "een'></u></u><u id='eb' style='color:red'></u><u ", "id='wa' style='color:blue'></u></u><u id='fb' sty", "le='color:red'></u><u id='qe' style='color:red'><", "/u><u id='yc' style='color:red'></u><u id='qd' st", "yle='color:green'></u></u><u id='fa' style='color", ":red'></u><u id='ub' style='color:green'></u><u i", "d='cb' style='color:red'></u></u><u id='qb' style", "='color:green'></u></u></u><u id='sa' style='colo", "r:blue'></u><u id='oa' style='color:green'></u><u", " id='ha' style='color:red'></u><u id='ya' style='", "color:red'></u></u></u><u id='xa' style='color:bl", "ue'></u></u><u id='jb' style='color:green'></u><u", " id='pa' style='color:red'></u><u id='ta' style='", "color:red'></u><u id='ca' style='color:green'></u", "><u id='na' style='color:red'></u><u id='ic' styl", "e='color:gray'></u><u id='ja' style='color:red'><", "/u><b id='va' style='color:red'></b><b id='ga' st", "yle='color:green'></b><u id='qa' style='color:gra", "y'></u></u></u><u id='ib' style='color:red'></u><", "u id='ma' style='color:red'></u><u id='ia' style=", "'color:red'></u><u id='z' style='color:green'></u", "><u id='y' style='color:green'></u><u id='x' styl", "e='color:gray'></u><u id='w' style='color:green'>", "</u></u></u><u id='t' style='color:red'></u><u id", "='s' style='color:red'></u><u id='r' style='color", ":red'></u><b id='q' style='color:red'></b><u id='", "p' style='color:blue'></u></u><u id='n' style='co", "lor:green'></u><u id='m' style='color:green'></u>", "<u id='l' style='color:green'></u></u></u></u><b ", "id='h' style='color:gray'></b><u id='g' style='co", "lor:red'></u></u><u id='e' style='color:red'></u>", "</u></u><u id='b' style='color:green'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> xthml = {"<u id='a' style='color:black'><u id='b' style='col", "or:black'><u id='c' style='color:black'><b id='e' ", "style='color:black'><b id='f' style='color:black'>", "<u id='g' style='color:black'><b id='i' style='col", "or:black'><b id='j' style='color:black'><u id='l' ", "style='color:black'><u id='m' style='color:black'>", "<b id='p' style='color:black'><u id='q' style='col", "or:black'><b id='t' style='color:black'><u id='u' ", "style='color:black'><b id='x' style='color:black'>", "<u id='uc' style='color:black'><b id='ra' style='c", "olor:black'><u id='ud' style='color:black'><u id='", "ea' style='color:black'><u id='ka' style='color:bl", "ack'><u id='ma' style='color:black'><u id='ja' sty", "le='color:black'><u id='wa' style='color:black'><u", " id='ya' style='color:black'><u id='ia' style='col", "or:black'><u id='nb' style='color:black'><u id='fa", "' style='color:black'><u id='lb' style='color:blac", "k'><u id='qc' style='color:black'><u id='wb' style", "='color:black'><u id='bc' style='color:black'><u i", "d='da' style='color:black'><u id='pc' style='color", ":black'><u id='fc' style='color:black'><u id='ac' ", "style='color:black'></u></u><u id='yb' style='colo", "r:black'></u><u id='wd' style='color:black'></u></", "u><u id='bd' style='color:black'></u><b id='rb' st", "yle='color:black'></b></u><b id='wc' style='color:", "black'></b></u><u id='ab' style='color:black'></u>", "</u></u><u id='fb' style='color:black'></u><u id='", "ue' style='color:black'></u></u><u id='qb' style='", "color:black'></u><u id='pb' style='color:black'></", "u><u id='eb' style='color:black'></u></u></u><u id", "='na' style='color:black'></u></u></u></u><u id='l", "a' style='color:black'></u></u><u id='bb' style='c", "olor:black'></u><u id='mb' style='color:black'></u", "><u id='aa' style='color:black'></u><u id='qa' sty", "le='color:black'></u><b id='va' style='color:black", "'></b><u id='pa' style='color:black'></u></u><u id", "='ba' style='color:black'></u><u id='xb' style='co", "lor:black'></u></u><u id='oa' style='color:black'>", "</u><b id='za' style='color:black'></b></u></u></b", "></u><b id='ub' style='color:black'></b><b id='xa'", " style='color:black'></b><u id='ua' style='color:b", "lack'></u><b id='z' style='color:black'></b><u id=", "'y' style='color:black'></u></b><u id='w' style='c", "olor:black'></u><b id='v' style='color:black'></b>", "</u></b><u id='s' style='color:black'></u><u id='r", "' style='color:black'></u></u></b><b id='o' style=", "'color:black'></b><u id='n' style='color:black'></", "u></u></u><b id='k' style='color:black'></b></b></", "b><u id='h' style='color:black'></u></u></b></b><u", " id='d' style='color:black'></u></u></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> xthml = {"<b id='m' style='color:gray'><b id='t' style='colo", "r:gray'><b id='v' style='color:gray'><b id='z' sty", "le='color:gray'><b id='uc' style='color:blue'><b i", "d='db' style='color:gray'><b id='za' style='color:", "blue'><b id='jc' style='color:gray'><b id='ue' sty", "le='color:gray'><b id='vb' style='color:blue'><b i", "d='mb' style='color:gray'><b id='rd' style='color:", "gray'><b id='qd' style='color:gray'></b></b></b></", "b><b id='sa' style='color:gray'></b><b id='qc' sty", "le='color:gray'></b><b id='ca' style='color:gray'>", "</b><b id='eb' style='color:gray'></b><b id='zc' s", "tyle='color:gray'></b><b id='rc' style='color:gray", "'></b></b><b id='be' style='color:blue'></b><b id=", "'oa' style='color:gray'></b><b id='wf' style='colo", "r:gray'></b></b><b id='zb' style='color:gray'></b>", "<b id='bd' style='color:gray'></b></b><b id='bc' s", "tyle='color:gray'></b><b id='fa' style='color:gray", "'></b><b id='ic' style='color:gray'></b><b id='va'", " style='color:gray'></b><b id='jb' style='color:bl", "ue'></b><b id='we' style='color:gray'></b><b id='m", "a' style='color:gray'></b></b><b id='ja' style='co", "lor:gray'></b><b id='xa' style='color:gray'></b><b", " id='ud' style='color:gray'></b><b id='wd' style='", "color:gray'></b><b id='ea' style='color:gray'></b>", "<b id='rb' style='color:gray'></b><b id='ga' style", "='color:gray'></b><b id='ra' style='color:gray'></", "b><b id='bb' style='color:blue'></b><b id='ib' sty", "le='color:blue'></b><b id='wc' style='color:gray'>", "</b></b><b id='wb' style='color:gray'></b><b id='q", "b' style='color:gray'></b><b id='ia' style='color:", "blue'></b><b id='na' style='color:gray'></b><b id=", "'da' style='color:gray'></b><b id='ub' style='colo", "r:gray'></b><b id='ba' style='color:gray'></b><b i", "d='wa' style='color:gray'></b><b id='ua' style='co", "lor:gray'></b><b id='qa' style='color:gray'></b></", "b><b id='y' style='color:gray'></b><b id='x' style", "='color:gray'></b><b id='w' style='color:blue'></b", "></b><b id='u' style='color:gray'></b></b><b id='s", "' style='color:gray'></b><b id='r' style='color:gr", "ay'></b><b id='q' style='color:gray'></b><b id='p'", " style='color:blue'></b><b id='o' style='color:gra", "y'></b><b id='n' style='color:gray'></b></b><b id=", "'l' style='color:gray'></b><b id='k' style='color:", "gray'></b><b id='j' style='color:gray'></b><b id='", "i' style='color:gray'></b><b id='h' style='color:g", "ray'></b><b id='g' style='color:gray'></b><b id='f", "' style='color:blue'></b><b id='e' style='color:gr", "ay'></b><b id='d' style='color:gray'></b><b id='c'", " style='color:gray'></b><b id='b' style='color:gra", "y'></b><b id='a' style='color:gray'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> xthml = {"<u id='d' style='color:yellow'><i id='l' style='co", "lor:green'><i id='s' style='color:white'><i id='w'", " style='color:yellow'><i id='x' style='color:yello", "w'><i id='pa' style='color:yellow'><i id='ea' styl", "e='color:white'><u id='zb' style='color:yellow'><i", " id='tb' style='color:yellow'><b id='qb' style='co", "lor:yellow'><i id='sb' style='color:white'><i id='", "va' style='color:yellow'><i id='ra' style='color:y", "ellow'><u id='ec' style='color:yellow'><i id='ia' ", "style='color:yellow'><u id='sc' style='color:green", "'><i id='ze' style='color:yellow'></i><u id='jb' s", "tyle='color:yellow'></u><i id='gc' style='color:wh", "ite'></i></u><i id='ka' style='color:white'></i></", "i><u id='ua' style='color:yellow'></u></u><i id='g", "b' style='color:white'></i><u id='cb' style='color", ":yellow'></u><i id='fa' style='color:yellow'></i><", "i id='bb' style='color:yellow'></i><u id='na' styl", "e='color:yellow'></u><i id='wa' style='color:yello", "w'></i><u id='zd' style='color:white'></u></i><u i", "d='mc' style='color:red'></u><b id='ca' style='col", "or:yellow'></b></i><i id='aa' style='color:red'></", "i><i id='xa' style='color:green'></i><i id='tc' st", "yle='color:yellow'></i></i><i id='pc' style='color", ":yellow'></i></b></i><i id='qa' style='color:yello", "w'></i><i id='ba' style='color:red'></i><i id='zc'", " style='color:yellow'></i><u id='ob' style='color:", "white'></u><i id='sa' style='color:red'></i><b id=", "'eb' style='color:yellow'></b><i id='ya' style='co", "lor:yellow'></i><u id='mb' style='color:white'></u", "><i id='ga' style='color:white'></i><i id='ma' sty", "le='color:yellow'></i><i id='ta' style='color:yell", "ow'></i><i id='ja' style='color:gray'></i><i id='o", "a' style='color:white'></i><i id='ha' style='color", ":yellow'></i></u><b id='za' style='color:yellow'><", "/b></i><i id='pb' style='color:red'></i></i><i id=", "'z' style='color:yellow'></i><i id='y' style='colo", "r:red'></i></i></i><i id='v' style='color:blue'></", "i><i id='u' style='color:red'></i><i id='t' style=", "'color:yellow'></i></i><u id='r' style='color:yell", "ow'></u><u id='q' style='color:yellow'></u><i id='", "p' style='color:yellow'></i><i id='o' style='color", ":yellow'></i><i id='n' style='color:yellow'></i><i", " id='m' style='color:green'></i></i><i id='k' styl", "e='color:white'></i><i id='j' style='color:yellow'", "></i><i id='i' style='color:white'></i><i id='h' s", "tyle='color:yellow'></i><u id='g' style='color:yel", "low'></u><i id='f' style='color:green'></i><u id='", "e' style='color:white'></u></u><u id='c' style='co", "lor:yellow'></u><i id='b' style='color:yellow'></i", "><i id='a' style='color:white'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> xthml = {"<u id='a' style='color:white'><u id='c' style='col", "or:white'><u id='d' style='color:yellow'><u id='i'", " style='color:white'><u id='k' style='color:yellow", "'><u id='n' style='color:gray'><u id='q' style='co", "lor:red'><u id='s' style='color:gray'><u id='v' st", "yle='color:gray'><u id='w' style='color:red'><b id", "='y' style='color:blue'><u id='ga' style='color:gr", "een'><u id='xa' style='color:white'><u id='gb' sty", "le='color:red'><u id='sa' style='color:yellow'><u ", "id='eb' style='color:white'><u id='xb' style='colo", "r:blue'><u id='sb' style='color:green'><u id='qb' ", "style='color:gray'><b id='aa' style='color:white'>", "<u id='ca' style='color:gray'><u id='kb' style='co", "lor:yellow'><u id='ab' style='color:yellow'><u id=", "'ra' style='color:white'><u id='oa' style='color:y", "ellow'><u id='sc' style='color:white'><b id='ya' s", "tyle='color:gray'><b id='db' style='color:white'><", "u id='ua' style='color:yellow'><u id='ia' style='c", "olor:yellow'><u id='pc' style='color:red'><u id='r", "c' style='color:red'><b id='fb' style='color:green", "'><u id='hd' style='color:yellow'><u id='pd' style", "='color:red'><b id='qc' style='color:red'><u id='l", "b' style='color:gray'></u></b><u id='yb' style='co", "lor:red'></u></u></u></b><u id='ta' style='color:g", "reen'></u></u></u><b id='la' style='color:red'></b", "></u></u></b><u id='xc' style='color:green'></u><u", " id='hc' style='color:white'></u><u id='ac' style=", "'color:yellow'></u></b><u id='rb' style='color:yel", "low'></u><b id='ba' style='color:gray'></b><u id='", "hb' style='color:yellow'></u></u><u id='da' style=", "'color:yellow'></u></u><b id='fa' style='color:gre", "en'></b></u><b id='zb' style='color:red'></b></u><", "/u><b id='cb' style='color:yellow'></b><u id='ka' ", "style='color:white'></u></u><b id='na' style='colo", "r:white'></b></b><u id='pb' style='color:red'></u>", "</u></u></u></u><b id='ha' style='color:gray'></b>", "</u></u><b id='pa' style='color:yellow'></b><b id=", "'qa' style='color:gray'></b><u id='za' style='colo", "r:blue'></u></u></u><u id='ea' style='color:red'><", "/u><u id='z' style='color:gray'></u></b><b id='x' ", "style='color:black'></b></u></u><u id='u' style='c", "olor:yellow'></u><b id='t' style='color:gray'></b>", "</u><u id='r' style='color:white'></u></u><u id='p", "' style='color:yellow'></u><u id='o' style='color:", "red'></u></u><u id='m' style='color:yellow'></u><u", " id='l' style='color:yellow'></u></u><b id='j' sty", "le='color:blue'></b></u><u id='h' style='color:blu", "e'></u><u id='g' style='color:red'></u><u id='f' s", "tyle='color:green'></u><u id='e' style='color:gray", "'></u></u></u><b id='b' style='color:red'></b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> xthml = {"<b id='c' style='color:black'><u id='d' style='col", "or:black'><u id='e' style='color:black'><b id='f' ", "style='color:black'><b id='g' style='color:black'>", "<u id='j' style='color:black'><b id='k' style='col", "or:black'><b id='m' style='color:black'><b id='o' ", "style='color:black'><b id='q' style='color:black'>", "<u id='s' style='color:black'><b id='t' style='col", "or:black'><b id='v' style='color:black'><b id='w' ", "style='color:black'><u id='y' style='color:black'>", "<u id='z' style='color:black'><b id='da' style='co", "lor:black'><b id='sa' style='color:black'><u id='r", "a' style='color:black'><b id='za' style='color:bla", "ck'><u id='ua' style='color:black'><b id='aa' styl", "e='color:black'><b id='ta' style='color:black'><b ", "id='ya' style='color:black'><b id='db' style='colo", "r:black'><b id='cb' style='color:black'><u id='na'", " style='color:black'><u id='ub' style='color:black", "'><b id='pa' style='color:black'><u id='tb' style=", "'color:black'><u id='la' style='color:black'><b id", "='nb' style='color:black'><b id='pb' style='color:", "black'><b id='ac' style='color:black'><u id='qa' s", "tyle='color:black'><b id='jb' style='color:black'>", "<u id='dc' style='color:black'><u id='yc' style='c", "olor:black'><u id='xb' style='color:black'><u id='", "oa' style='color:black'><u id='ae' style='color:bl", "ack'><b id='dd' style='color:black'><u id='zb' sty", "le='color:black'><b id='xc' style='color:black'><u", " id='yd' style='color:black'><u id='jc' style='col", "or:black'><b id='uc' style='color:black'></b><u id", "='nd' style='color:black'></u><b id='ha' style='co", "lor:black'></b><b id='xd' style='color:black'></b>", "</u></u><u id='va' style='color:black'></u></b><u ", "id='nc' style='color:black'></u></u></b></u><u id=", "'ad' style='color:black'></u></u></u><b id='xa' st", "yle='color:black'></b></u></u></b><u id='yb' style", "='color:black'></u></u></b></b></b><u id='rc' styl", "e='color:black'></u></u></u></b><b id='ja' style='", "color:black'></b><u id='sb' style='color:black'></", "u></u></u><u id='ab' style='color:black'></u></b><", "u id='rb' style='color:black'></u></b></b></b></b>", "</u></b><u id='ca' style='color:black'></u><b id='", "ba' style='color:black'></b></u></b></b></u></u><u", " id='x' style='color:black'></u></b></b><u id='u' ", "style='color:black'></u></b></u><u id='r' style='c", "olor:black'></u></b><b id='p' style='color:black'>", "</b></b><b id='n' style='color:black'></b></b><b i", "d='l' style='color:black'></b></b></u><b id='i' st", "yle='color:black'></b><b id='h' style='color:black", "'></b></b></b></u></u></b><b id='b' style='color:b", "lack'></b><b id='a' style='color:black'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> xthml = {"<u id='a' style='color:blue'><u id='c' style='colo", "r:gray'><u id='d' style='color:green'><u id='e' st", "yle='color:green'><u id='f' style='color:green'><u", " id='g' style='color:green'><u id='i' style='color", ":green'><u id='j' style='color:blue'><u id='l' sty", "le='color:gray'><u id='m' style='color:gray'><u id", "='n' style='color:blue'><u id='o' style='color:gre", "en'><u id='p' style='color:green'><u id='q' style=", "'color:gray'><u id='s' style='color:green'><u id='", "t' style='color:blue'><u id='u' style='color:green", "'><u id='v' style='color:green'><u id='x' style='c", "olor:gray'><u id='y' style='color:gray'><u id='z' ", "style='color:green'><u id='cb' style='color:green'", "><u id='ga' style='color:green'><u id='oa' style='", "color:green'><u id='sa' style='color:green'><u id=", "'ya' style='color:green'><u id='za' style='color:g", "reen'><u id='yb' style='color:green'><u id='da' st", "yle='color:green'><u id='ua' style='color:gray'><u", " id='sb' style='color:green'><u id='na' style='col", "or:green'><u id='ja' style='color:gray'><u id='ba'", " style='color:green'><u id='qa' style='color:green", "'><u id='fa' style='color:green'><u id='ea' style=", "'color:gray'><u id='pa' style='color:green'><u id=", "'jb' style='color:green'><b id='ka' style='color:g", "reen'><b id='sc' style='color:gray'><b id='va' sty", "le='color:green'><u id='cc' style='color:green'><u", " id='sd' style='color:gray'><b id='eb' style='colo", "r:green'><b id='gb' style='color:green'><u id='cd'", " style='color:gray'><u id='yc' style='color:gray'>", "<u id='gc' style='color:gray'><u id='nb' style='co", "lor:green'><u id='se' style='color:gray'><u id='ia", "' style='color:green'><u id='ib' style='color:gray", "'><u id='kb' style='color:blue'><u id='ma' style='", "color:green'><u id='ec' style='color:gray'><u id='", "aa' style='color:green'><u id='wa' style='color:gr", "ay'><u id='sf' style='color:green'><u id='la' styl", "e='color:green'><u id='gd' style='color:green'></u", "></u></u></u><u id='xa' style='color:blue'></u><u ", "id='ha' style='color:gray'></u></u></u></u></u></u", "></u></u></u></u><u id='fb' style='color:green'></", "u><u id='bb' style='color:gray'></u></u></u></b></", "b></u></u></b></b></b></u></u></u></u></u></u></u>", "</u></u></u></u></u></u></u></u></u></u></u><u id=", "'ta' style='color:gray'></u><u id='ca' style='colo", "r:green'></u></u></u></u><u id='w' style='color:gr", "ay'></u></u></u></u></u><u id='r' style='color:gre", "en'></u></u></u></u></u></u></u><u id='k' style='c", "olor:green'></u></u></u><u id='h' style='color:gre", "en'></u></u></u></u></u></u><u id='b' style='color", ":green'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> xthml = {"<b id='a' style='color:yellow'><u id='c' style='co", "lor:yellow'><b id='e' style='color:yellow'><u id='", "g' style='color:yellow'><u id='h' style='color:yel", "low'><u id='i' style='color:yellow'><u id='n' styl", "e='color:yellow'><b id='o' style='color:red'><u id", "='q' style='color:white'><b id='r' style='color:ye", "llow'><b id='s' style='color:white'><u id='w' styl", "e='color:yellow'><u id='x' style='color:red'><u id", "='z' style='color:green'><u id='ia' style='color:y", "ellow'><u id='ba' style='color:green'><u id='va' s", "tyle='color:red'><u id='nb' style='color:yellow'><", "b id='xa' style='color:white'><u id='jb' style='co", "lor:yellow'><u id='la' style='color:yellow'><u id=", "'za' style='color:yellow'><u id='pb' style='color:", "white'><u id='zb' style='color:yellow'><u id='ob' ", "style='color:yellow'><u id='da' style='color:white", "'><b id='nc' style='color:yellow'><u id='ka' style", "='color:white'><b id='vb' style='color:yellow'><u ", "id='ub' style='color:yellow'><u id='zc' style='col", "or:red'><b id='qa' style='color:green'><u id='ne' ", "style='color:red'><u id='vd' style='color:yellow'>", "</u><b id='ib' style='color:yellow'></b><u id='be'", " style='color:yellow'></u><u id='qb' style='color:", "yellow'></u><u id='vc' style='color:yellow'></u></", "u></b><b id='ca' style='color:white'></b><u id='bd", "' style='color:yellow'></u><u id='nd' style='color", ":white'></u><u id='sb' style='color:white'></u><u ", "id='bc' style='color:green'></u></u></u></b><u id=", "'oc' style='color:yellow'></u><u id='db' style='co", "lor:white'></u></u><u id='ha' style='color:yellow'", "></u><u id='jc' style='color:yellow'></u></b></u><", "/u></u></u><u id='pa' style='color:yellow'></u><u ", "id='gc' style='color:yellow'></u><u id='sa' style=", "'color:yellow'></u></u><u id='oa' style='color:yel", "low'></u></u><u id='gb' style='color:yellow'></u><", "u id='bb' style='color:white'></u><u id='ga' style", "='color:white'></u></u></b></u></u><b id='ta' styl", "e='color:white'></b><u id='ja' style='color:white'", "></u><u id='na' style='color:white'></u></u><u id=", "'ua' style='color:red'></u><u id='ya' style='color", ":yellow'></u></u></u><u id='y' style='color:white'", "></u></u></u><u id='v' style='color:yellow'></u><u", " id='u' style='color:white'></u><u id='t' style='c", "olor:yellow'></u></b></b></u><u id='p' style='colo", "r:green'></u></b></u><b id='m' style='color:white'", "></b><b id='l' style='color:gray'></b><u id='k' st", "yle='color:red'></u><u id='j' style='color:red'></", "u></u></u></u><b id='f' style='color:white'></b></", "b><b id='d' style='color:yellow'></b></u><u id='b'", " style='color:red'></u></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> xthml = {"<u id='b' style='color:black'><b id='v' style='col", "or:black'><u id='w' style='color:black'><u id='ca'", " style='color:black'><u id='lb' style='color:black", "'><u id='ia' style='color:black'><u id='pb' style=", "'color:black'><u id='ma' style='color:black'><u id", "='ga' style='color:black'></u><u id='xb' style='co", "lor:black'></u><b id='sc' style='color:black'></b>", "<b id='wa' style='color:black'></b><u id='qe' styl", "e='color:black'></u><u id='ub' style='color:black'", "></u><u id='qd' style='color:black'></u><u id='ee'", " style='color:black'></u><u id='ce' style='color:b", "lack'></u></u><u id='ze' style='color:black'></u><", "u id='ld' style='color:black'></u><u id='ed' style", "='color:black'></u></u><u id='qc' style='color:bla", "ck'></u><b id='ua' style='color:black'></b><b id='", "fa' style='color:black'></b><u id='lc' style='colo", "r:black'></u><u id='qb' style='color:black'></u><u", " id='tc' style='color:black'></u><b id='cd' style=", "'color:black'></b><u id='zd' style='color:black'><", "/u><b id='ec' style='color:black'></b><b id='tb' s", "tyle='color:black'></b></u><u id='ta' style='color", ":black'></u><u id='sb' style='color:black'></u><u ", "id='sa' style='color:black'></u><u id='ja' style='", "color:black'></u></u><u id='ra' style='color:black", "'></u><u id='xa' style='color:black'></u><b id='ha", "' style='color:black'></b><u id='eb' style='color:", "black'></u><u id='zc' style='color:black'></u><u i", "d='pa' style='color:black'></u><u id='na' style='c", "olor:black'></u><u id='qa' style='color:black'></u", "><b id='zb' style='color:black'></b><u id='za' sty", "le='color:black'></u><u id='ya' style='color:black", "'></u><u id='cc' style='color:black'></u><u id='la", "' style='color:black'></u><u id='cb' style='color:", "black'></u><u id='ea' style='color:black'></u></u>", "<u id='z' style='color:black'></u><u id='y' style=", "'color:black'></u><u id='x' style='color:black'></", "u></u></b><u id='u' style='color:black'></u><b id=", "'t' style='color:black'></b><u id='s' style='color", ":black'></u><u id='r' style='color:black'></u><u i", "d='q' style='color:black'></u><u id='p' style='col", "or:black'></u><u id='o' style='color:black'></u><u", " id='n' style='color:black'></u><u id='m' style='c", "olor:black'></u><u id='l' style='color:black'></u>", "<u id='k' style='color:black'></u><b id='j' style=", "'color:black'></b><u id='i' style='color:black'></", "u><u id='h' style='color:black'></u><u id='g' styl", "e='color:black'></u><b id='f' style='color:black'>", "</b><b id='e' style='color:black'></b><b id='d' st", "yle='color:black'></b><u id='c' style='color:black", "'></u></u><u id='a' style='color:black'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> xthml = {"<b id='k' style='color:black'><b id='n' style='col", "or:black'><b id='q' style='color:black'><b id='s' ", "style='color:blue'><b id='x' style='color:green'><", "b id='ia' style='color:green'><b id='ta' style='co", "lor:green'><b id='la' style='color:gray'><b id='sa", "' style='color:gray'><b id='mb' style='color:gray'", "><b id='lb' style='color:gray'><b id='ya' style='c", "olor:blue'><b id='bb' style='color:black'><b id='x", "a' style='color:green'><b id='me' style='color:gre", "en'><b id='nb' style='color:black'><b id='zb' styl", "e='color:blue'><b id='gc' style='color:blue'><b id", "='ha' style='color:green'><b id='fb' style='color:", "gray'></b><b id='zc' style='color:blue'></b><b id=", "'ic' style='color:gray'></b><b id='fa' style='colo", "r:gray'></b><b id='sb' style='color:black'></b><b ", "id='va' style='color:gray'></b><b id='pa' style='c", "olor:gray'></b></b></b></b><b id='nc' style='color", ":black'></b><b id='ra' style='color:green'></b><b ", "id='aa' style='color:green'></b><b id='eb' style='", "color:gray'></b><b id='jb' style='color:gray'></b>", "<b id='mf' style='color:green'></b></b><b id='za' ", "style='color:gray'></b><b id='yc' style='color:bla", "ck'></b><b id='ca' style='color:black'></b></b><b ", "id='yb' style='color:green'></b><b id='kc' style='", "color:green'></b><b id='gb' style='color:blue'></b", "><b id='kb' style='color:black'></b><b id='ga' sty", "le='color:black'></b></b><b id='ib' style='color:g", "reen'></b><b id='na' style='color:blue'></b><b id=", "'ka' style='color:green'></b></b></b><b id='ja' st", "yle='color:gray'></b><b id='md' style='color:black", "'></b></b><b id='mc' style='color:green'></b><b id", "='ba' style='color:black'></b></b></b></b><b id='d", "a' style='color:blue'></b><b id='tb' style='color:", "black'></b></b><b id='ma' style='color:green'></b>", "<b id='ea' style='color:blue'></b></b><b id='wa' s", "tyle='color:black'></b><b id='z' style='color:blac", "k'></b><b id='y' style='color:gray'></b></b><b id=", "'w' style='color:blue'></b><b id='v' style='color:", "blue'></b><b id='u' style='color:green'></b><b id=", "'t' style='color:gray'></b></b><b id='r' style='co", "lor:gray'></b></b><b id='p' style='color:black'></", "b><b id='o' style='color:gray'></b></b><b id='m' s", "tyle='color:black'></b><b id='l' style='color:gree", "n'></b></b><b id='j' style='color:black'></b><b id", "='i' style='color:black'></b><b id='h' style='colo", "r:blue'></b><b id='g' style='color:green'></b><b i", "d='f' style='color:green'></b><b id='e' style='col", "or:green'></b><b id='d' style='color:gray'></b><b ", "id='c' style='color:gray'></b><b id='b' style='col", "or:black'></b><b id='a' style='color:black'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> xthml = {"<b id='a' style='color:green'><b id='b' style='col", "or:green'><u id='c' style='color:green'><u id='f' ", "style='color:green'><u id='j' style='color:green'>", "<i id='o' style='color:gray'><b id='q' style='colo", "r:gray'><u id='s' style='color:green'><b id='u' st", "yle='color:green'><i id='v' style='color:green'><b", " id='w' style='color:green'><i id='z' style='color", ":gray'><u id='ma' style='color:green'><i id='aa' s", "tyle='color:green'><b id='ba' style='color:green'>", "<u id='va' style='color:green'><b id='la' style='c", "olor:green'><i id='ja' style='color:green'><b id='", "qa' style='color:gray'><u id='ha' style='color:gra", "y'><u id='na' style='color:green'><b id='lb' style", "='color:green'><b id='wa' style='color:gray'><b id", "='ua' style='color:green'><b id='ia' style='color:", "green'><u id='eb' style='color:green'><u id='ec' s", "tyle='color:green'><b id='mb' style='color:green'>", "<u id='yc' style='color:green'><b id='qc' style='c", "olor:green'><i id='hb' style='color:green'><i id='", "wb' style='color:green'><b id='jb' style='color:gr", "een'><u id='oa' style='color:blue'><i id='ed' styl", "e='color:green'><b id='fb' style='color:gray'><b i", "d='ga' style='color:gray'><u id='mc' style='color:", "green'><i id='wd' style='color:gray'><i id='md' st", "yle='color:gray'></i><u id='vc' style='color:green", "'></u></i></u></b><i id='pb' style='color:green'><", "/i></b></i></u><i id='wc' style='color:gray'></i><", "/b><i id='bb' style='color:green'></i><u id='qd' s", "tyle='color:green'></u></i><b id='vb' style='color", ":green'></b></i></b><i id='qb' style='color:green'", "></i></u></b></u><b id='ca' style='color:gray'></b", "></u></b></b><b id='nb' style='color:blue'></b></b", "></b><i id='xa' style='color:gray'></i><u id='ea' ", "style='color:green'></u></u></u><b id='tb' style='", "color:green'></b><u id='ra' style='color:green'></", "u><b id='yb' style='color:green'></b></b></i><b id", "='ta' style='color:green'></b></b></u><u id='fa' s", "tyle='color:green'></u></b></i><i id='ya' style='c", "olor:green'></i></u><i id='pa' style='color:green'", "></i></i><b id='y' style='color:green'></b><i id='", "x' style='color:green'></i></b></i></b><b id='t' s", "tyle='color:gray'></b></u><b id='r' style='color:g", "reen'></b></b><u id='p' style='color:green'></u></", "i><u id='n' style='color:green'></u><u id='m' styl", "e='color:green'></u><i id='l' style='color:green'>", "</i><b id='k' style='color:green'></b></u><i id='i", "' style='color:green'></i><b id='h' style='color:g", "reen'></b><i id='g' style='color:gray'></i></u><u ", "id='e' style='color:green'></u><u id='d' style='co", "lor:green'></u></u></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> xthml = {"<b id='a' style='color:gray'><b id='b' style='colo", "r:green'><b id='d' style='color:red'><b id='e' sty", "le='color:green'><b id='f' style='color:gray'><b i", "d='g' style='color:blue'><b id='h' style='color:re", "d'><b id='i' style='color:green'><b id='j' style='", "color:red'><b id='k' style='color:green'><b id='m'", " style='color:green'><b id='n' style='color:gray'>", "<b id='o' style='color:gray'><b id='p' style='colo", "r:green'><b id='u' style='color:red'><b id='v' sty", "le='color:red'><b id='w' style='color:red'><b id='", "y' style='color:red'><b id='ta' style='color:red'>", "<b id='xa' style='color:red'><b id='na' style='col", "or:red'><b id='xb' style='color:green'><b id='ja' ", "style='color:red'><b id='ea' style='color:green'><", "b id='ca' style='color:green'><b id='ma' style='co", "lor:green'><b id='ua' style='color:red'><b id='ba'", " style='color:blue'><b id='cb' style='color:red'><", "b id='nb' style='color:gray'><b id='hb' style='col", "or:red'><b id='cc' style='color:green'><b id='ya' ", "style='color:red'><b id='ia' style='color:gray'><b", " id='hc' style='color:blue'><b id='wa' style='colo", "r:green'><b id='fa' style='color:red'><b id='da' s", "tyle='color:gray'><b id='ib' style='color:green'><", "b id='pa' style='color:red'><b id='la' style='colo", "r:gray'><b id='sb' style='color:red'><b id='ub' st", "yle='color:blue'><b id='mc' style='color:red'><b i", "d='qb' style='color:red'><b id='nd' style='color:r", "ed'><b id='cd' style='color:gray'><b id='eb' style", "='color:red'><b id='sc' style='color:gray'><b id='", "dc' style='color:red'><b id='oa' style='color:red'", "><b id='ne' style='color:red'></b></b><b id='ga' s", "tyle='color:red'></b></b></b></b><b id='db' style=", "'color:red'></b></b></b></b></b></b></b><b id='za'", " style='color:red'></b><b id='bb' style='color:red", "'></b></b><b id='ra' style='color:red'></b><b id='", "nc' style='color:green'></b><b id='wb' style='colo", "r:green'></b></b><b id='ic' style='color:red'></b>", "</b><b id='yb' style='color:green'></b><b id='sa' ", "style='color:gray'></b></b></b><b id='mb' style='c", "olor:red'></b></b></b></b></b></b></b></b></b></b>", "</b><b id='qa' style='color:blue'></b><b id='jb' s", "tyle='color:red'></b></b></b></b><b id='ha' style=", "'color:gray'></b></b></b></b></b></b><b id='z' sty", "le='color:red'></b></b><b id='x' style='color:red'", "></b></b></b></b><b id='t' style='color:gray'></b>", "<b id='s' style='color:green'></b><b id='r' style=", "'color:green'></b><b id='q' style='color:green'></", "b></b></b></b></b><b id='l' style='color:green'></", "b></b></b></b></b></b></b></b></b><b id='c' style=", "'color:red'></b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> xthml = {"<b id='d' style='color:green'><i id='m' style='col", "or:red'><u id='t' style='color:green'><u id='u' st", "yle='color:gray'><i id='z' style='color:green'><b ", "id='ca' style='color:gray'><i id='wa' style='color", ":green'><i id='sa' style='color:gray'><i id='ta' s", "tyle='color:red'><i id='nb' style='color:gray'><i ", "id='fa' style='color:blue'><i id='gb' style='color", ":green'><i id='ba' style='color:green'><u id='ma' ", "style='color:gray'><i id='ic' style='color:green'>", "<i id='bb' style='color:green'></i><u id='qd' styl", "e='color:blue'></u><u id='sc' style='color:green'>", "</u></i></u><u id='tb' style='color:red'></u><i id", "='yb' style='color:blue'></i></i></i></i><i id='ga", "' style='color:black'></i><i id='zb' style='color:", "green'></i><u id='qc' style='color:green'></u></i>", "<u id='ee' style='color:green'></u><b id='pa' styl", "e='color:green'></b></i><b id='ue' style='color:re", "d'></b><i id='hb' style='color:green'></i><i id='i", "b' style='color:gray'></i><i id='ed' style='color:", "red'></i><i id='sb' style='color:red'></i><i id='c", "c' style='color:red'></i><b id='za' style='color:b", "lue'></b><b id='ha' style='color:green'></b><u id=", "'ud' style='color:green'></u><i id='ec' style='col", "or:gray'></i><i id='cb' style='color:red'></i><i i", "d='uc' style='color:red'></i><u id='na' style='col", "or:gray'></u><i id='ya' style='color:red'></i></i>", "<u id='ia' style='color:red'></u></i><i id='va' st", "yle='color:red'></i><u id='xa' style='color:red'><", "/u><u id='qb' style='color:green'></u><i id='ub' s", "tyle='color:green'></i><i id='jc' style='color:red", "'></i><u id='qa' style='color:red'></u><i id='jb' ", "style='color:red'></i><i id='ja' style='color:gree", "n'></i><i id='eb' style='color:green'></i><i id='e", "a' style='color:blue'></i><i id='da' style='color:", "green'></i><i id='ra' style='color:green'></i></b>", "<u id='ua' style='color:green'></u></i><i id='y' s", "tyle='color:green'></i><i id='x' style='color:gree", "n'></i><u id='w' style='color:green'></u><i id='v'", " style='color:red'></i></u></u><i id='s' style='co", "lor:red'></i><u id='r' style='color:red'></u><i id", "='q' style='color:blue'></i><b id='p' style='color", ":gray'></b><i id='o' style='color:green'></i><i id", "='n' style='color:blue'></i></i><i id='l' style='c", "olor:green'></i><i id='k' style='color:gray'></i><", "i id='j' style='color:blue'></i><i id='i' style='c", "olor:green'></i><b id='h' style='color:green'></b>", "<b id='g' style='color:green'></b><i id='f' style=", "'color:red'></i><u id='e' style='color:red'></u></", "b><i id='c' style='color:red'></i><i id='b' style=", "'color:gray'></i><u id='a' style='color:gray'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> xthml = {"<u id='e' style='color:blue'><u id='h' style='colo", "r:gray'><b id='w' style='color:gray'><u id='ha' st", "yle='color:blue'><u id='ua' style='color:blue'><u ", "id='pa' style='color:gray'><u id='bb' style='color", ":gray'><u id='ya' style='color:gray'><b id='bc' st", "yle='color:blue'><u id='sa' style='color:black'><u", " id='yb' style='color:black'><b id='hb' style='col", "or:blue'><u id='mc' style='color:gray'><u id='vc' ", "style='color:gray'><u id='ea' style='color:gray'><", "b id='oa' style='color:gray'><u id='gb' style='col", "or:gray'><u id='gc' style='color:blue'><b id='tb' ", "style='color:blue'><u id='pd' style='color:blue'><", "/u><u id='rb' style='color:blue'></u><b id='yd' st", "yle='color:blue'></b></b><b id='sb' style='color:b", "lue'></b><u id='yc' style='color:gray'></u><u id='", "xb' style='color:blue'></u></u><b id='fa' style='c", "olor:gray'></b><u id='ja' style='color:gray'></u><", "/u></b><b id='da' style='color:gray'></b><u id='pc", "' style='color:gray'></u></u><b id='wb' style='col", "or:gray'></b><u id='qb' style='color:black'></u><u", " id='ga' style='color:gray'></u><u id='ib' style='", "color:gray'></u><u id='aa' style='color:blue'></u>", "</u></u><u id='qa' style='color:blue'></u><b id='h", "c' style='color:blue'></b><u id='mb' style='color:", "blue'></u><u id='vb' style='color:gray'></u><u id=", "'zc' style='color:gray'></u><u id='zb' style='colo", "r:gray'></u></b><u id='na' style='color:gray'></u>", "</u></u><b id='ia' style='color:gray'></b></b></u>", "</u><u id='xa' style='color:gray'></u><u id='wa' s", "tyle='color:black'></u><b id='ta' style='color:blu", "e'></b><u id='za' style='color:blue'></u><u id='va", "' style='color:gray'></u><b id='pb' style='color:g", "ray'></b></u><u id='ba' style='color:gray'></u></u", "><u id='ma' style='color:gray'></u></u><b id='ra' ", "style='color:gray'></b><u id='z' style='color:blue", "'></u><b id='y' style='color:gray'></b><b id='x' s", "tyle='color:blue'></b></b><u id='v' style='color:g", "ray'></u><u id='u' style='color:blue'></u><b id='t", "' style='color:blue'></b><b id='s' style='color:gr", "ay'></b><u id='r' style='color:gray'></u><b id='q'", " style='color:gray'></b><u id='p' style='color:gra", "y'></u><u id='o' style='color:gray'></u><u id='n' ", "style='color:blue'></u><b id='m' style='color:gray", "'></b><u id='l' style='color:black'></u><u id='k' ", "style='color:blue'></u><b id='j' style='color:blue", "'></b><u id='i' style='color:gray'></u></u><u id='", "g' style='color:gray'></u><u id='f' style='color:g", "ray'></u></u><u id='d' style='color:gray'></u><b i", "d='c' style='color:gray'></b><b id='b' style='colo", "r:blue'></b><u id='a' style='color:gray'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> xthml = {"<b id='e' style='color:gray'><u id='g' style='colo", "r:green'><i id='i' style='color:green'><b id='j' s", "tyle='color:green'><b id='x' style='color:green'><", "i id='la' style='color:green'><u id='ka' style='co", "lor:gray'><i id='ra' style='color:blue'><i id='fa'", " style='color:green'><i id='va' style='color:green", "'><u id='qa' style='color:green'><u id='ob' style=", "'color:blue'><i id='lb' style='color:green'><b id=", "'bc' style='color:green'><b id='mb' style='color:g", "reen'><b id='ld' style='color:gray'></b></b><b id=", "'xa' style='color:black'></b><u id='tb' style='col", "or:green'></u><i id='jb' style='color:green'></i><", "u id='fd' style='color:green'></u><b id='fc' style", "='color:green'></b><u id='gd' style='color:green'>", "</u><b id='lc' style='color:gray'></b></b><b id='g", "c' style='color:green'></b><i id='gb' style='color", ":green'></i><b id='ib' style='color:gray'></b><i i", "d='fb' style='color:black'></i></i><u id='pb' styl", "e='color:green'></u><b id='qb' style='color:blue'>", "</b><b id='cb' style='color:green'></b></u><u id='", "ca' style='color:gray'></u><i id='zb' style='color", ":green'></i><b id='bb' style='color:gray'></b><i i", "d='vb' style='color:gray'></i></u><b id='sb' style", "='color:green'></b><i id='ma' style='color:blue'><", "/i></i><b id='sa' style='color:green'></b></i></i>", "<u id='ga' style='color:gray'></u><b id='ta' style", "='color:gray'></b><i id='ua' style='color:green'><", "/i><i id='oa' style='color:gray'></i><u id='ea' st", "yle='color:blue'></u><i id='ia' style='color:green", "'></i><u id='pa' style='color:green'></u><u id='hb", "' style='color:gray'></u><u id='kb' style='color:g", "ray'></u></u><b id='za' style='color:green'></b><b", " id='aa' style='color:green'></b></i><i id='ha' st", "yle='color:green'></i><i id='ja' style='color:blue", "'></i><b id='ba' style='color:black'></b><u id='z'", " style='color:blue'></u><u id='y' style='color:gre", "en'></u></b><b id='w' style='color:gray'></b><b id", "='v' style='color:green'></b><u id='u' style='colo", "r:green'></u><u id='t' style='color:gray'></u><b i", "d='s' style='color:green'></b><u id='r' style='col", "or:green'></u><u id='q' style='color:blue'></u><u ", "id='p' style='color:blue'></u><b id='o' style='col", "or:gray'></b><b id='n' style='color:green'></b><b ", "id='m' style='color:green'></b><b id='l' style='co", "lor:green'></b><i id='k' style='color:green'></i><", "/b></i><b id='h' style='color:green'></b></u><b id", "='f' style='color:gray'></b></b><u id='d' style='c", "olor:green'></u><u id='c' style='color:green'></u>", "<i id='b' style='color:gray'></i><i id='a' style='", "color:green'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> xthml = {"<b id='c' style='color:red'><u id='e' style='color", ":white'><u id='h' style='color:green'><u id='i' st", "yle='color:white'><u id='j' style='color:white'><u", " id='k' style='color:white'><u id='l' style='color", ":white'><b id='m' style='color:white'><b id='p' st", "yle='color:white'><u id='s' style='color:green'><b", " id='t' style='color:white'><u id='v' style='color", ":white'><u id='y' style='color:green'><u id='ba' s", "tyle='color:red'><u id='pa' style='color:green'><b", " id='fa' style='color:white'><u id='za' style='col", "or:white'><u id='ia' style='color:green'><u id='zb", "' style='color:red'><u id='xa' style='color:red'><", "u id='na' style='color:white'><b id='ka' style='co", "lor:green'><u id='sa' style='color:white'><b id='d", "b' style='color:red'><u id='pb' style='color:green", "'><u id='dc' style='color:red'><u id='ha' style='c", "olor:white'><u id='nb' style='color:red'><u id='ma", "' style='color:white'><u id='ua' style='color:red'", "><u id='ja' style='color:red'><u id='mb' style='co", "lor:green'><u id='zc' style='color:red'><u id='qa'", " style='color:white'><u id='zd' style='color:red'>", "<u id='xb' style='color:red'><u id='sb' style='col", "or:red'><u id='eb' style='color:white'><u id='nc' ", "style='color:red'><u id='pc' style='color:green'><", "u id='kb' style='color:white'><u id='nd' style='co", "lor:green'><b id='hc' style='color:white'><b id='b", "b' style='color:white'><b id='ne' style='color:whi", "te'></b></b></b><u id='pd' style='color:white'></u", "></u></u><b id='ta' style='color:red'></b><u id='f", "c' style='color:red'></u><u id='qb' style='color:w", "hite'></u></u></u><u id='fb' style='color:green'><", "/u></u><u id='rb' style='color:white'></u></u><u i", "d='ga' style='color:red'></u></u><u id='ra' style=", "'color:red'></u><u id='jb' style='color:red'></u><", "/u></u></u><u id='ib' style='color:green'></u></u>", "</u></u></u><u id='hb' style='color:white'></u></u", "></u></u></u></b><b id='da' style='color:red'></b>", "</u></b></u><u id='va' style='color:white'></u></u", "></u></u></u></b></u><u id='aa' style='color:green", "'></u><u id='ea' style='color:gray'></u></u><u id=", "'z' style='color:red'></u></u><u id='x' style='col", "or:white'></u><b id='w' style='color:green'></b></", "u><b id='u' style='color:red'></b></b></u><b id='r", "' style='color:green'></b><u id='q' style='color:w", "hite'></u></b><u id='o' style='color:white'></u><u", " id='n' style='color:blue'></u></b></u></u></u></u", "></u><u id='g' style='color:white'></u><u id='f' s", "tyle='color:red'></u></u><u id='d' style='color:wh", "ite'></u></b><b id='b' style='color:white'></b><u ", "id='a' style='color:white'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> xthml = {"<i id='a' style='color:black'><i id='b' style='col", "or:blue'><u id='c' style='color:black'><u id='d' s", "tyle='color:gray'><u id='e' style='color:black'><b", " id='g' style='color:black'><i id='h' style='color", ":gray'><u id='i' style='color:black'><u id='j' sty", "le='color:gray'><u id='k' style='color:black'><i i", "d='l' style='color:black'><b id='m' style='color:g", "ray'><u id='o' style='color:blue'><u id='p' style=", "'color:black'><i id='q' style='color:black'><i id=", "'r' style='color:gray'><u id='s' style='color:gray", "'><u id='t' style='color:gray'><i id='u' style='co", "lor:blue'><i id='v' style='color:black'><u id='w' ", "style='color:blue'><i id='x' style='color:black'><", "u id='y' style='color:gray'><b id='z' style='color", ":black'><u id='ma' style='color:gray'><i id='sa' s", "tyle='color:gray'><i id='ia' style='color:blue'><b", " id='oa' style='color:black'><u id='ra' style='col", "or:gray'><u id='ja' style='color:black'><u id='mb'", " style='color:blue'><i id='aa' style='color:black'", "><b id='pa' style='color:blue'><i id='ka' style='c", "olor:black'><b id='la' style='color:black'><u id='", "qa' style='color:blue'><i id='jb' style='color:bla", "ck'><i id='ga' style='color:black'><b id='da' styl", "e='color:blue'><i id='xa' style='color:black'><u i", "d='ba' style='color:black'><i id='ab' style='color", ":black'><u id='fa' style='color:gray'><i id='kb' s", "tyle='color:gray'><u id='rb' style='color:gray'><u", " id='gb' style='color:blue'><b id='ta' style='colo", "r:blue'><i id='sb' style='color:black'><i id='ib' ", "style='color:blue'><i id='kc' style='color:black'>", "<i id='jc' style='color:blue'><b id='ua' style='co", "lor:black'><b id='rc' style='color:gray'><u id='ha", "' style='color:blue'><i id='ac' style='color:gray'", "><u id='wa' style='color:blue'><u id='ad' style='c", "olor:blue'><u id='ca' style='color:gray'><i id='ic", "' style='color:gray'><u id='za' style='color:blue'", "><u id='va' style='color:gray'><b id='ea' style='c", "olor:blue'><i id='ya' style='color:gray'><u id='gc", "' style='color:gray'><i id='ob' style='color:black", "'><i id='hb' style='color:black'><i id='id' style=", "'color:gray'><i id='sc' style='color:black'><u id=", "'yb' style='color:blue'></u></i></i></i></i></u></", "i><b id='xb' style='color:gray'></b></b></u></u></", "i></u></u></u></i></u></b><b id='db' style='color:", "blue'></b></b></i></i></i></i></b></u></u></i></u>", "</i></u></i></b></i></i></u></b></i></b></i></u></", "u></u></b></i></i></u></b></u></i></u></i></i></u>", "</u></i></i></u></u><u id='n' style='color:black'>", "</u></b></i></u></u></u></i></b><i id='f' style='c", "olor:gray'></i></u></u></u></i></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> xthml = {"<b id='a' style='color:black'><b id='b' style='col", "or:black'><b id='c' style='color:black'><b id='d' ", "style='color:black'><b id='e' style='color:black'>", "<b id='f' style='color:black'><b id='g' style='col", "or:black'><b id='h' style='color:black'><b id='j' ", "style='color:black'><b id='l' style='color:black'>", "<b id='n' style='color:black'><b id='o' style='col", "or:black'><b id='p' style='color:black'><b id='r' ", "style='color:black'><b id='s' style='color:black'>", "<b id='u' style='color:black'><b id='v' style='col", "or:black'><b id='x' style='color:black'><b id='y' ", "style='color:black'><b id='z' style='color:black'>", "<b id='va' style='color:black'><b id='nb' style='c", "olor:black'><b id='ka' style='color:black'><b id='", "nc' style='color:black'><b id='ta' style='color:bl", "ack'><b id='aa' style='color:black'><b id='ma' sty", "le='color:black'><b id='ca' style='color:black'><b", " id='vb' style='color:black'><b id='vc' style='col", "or:black'><b id='ab' style='color:black'><b id='xa", "' style='color:black'><b id='ua' style='color:blac", "k'><b id='ea' style='color:black'><b id='ya' style", "='color:black'><b id='fa' style='color:black'><b i", "d='ia' style='color:black'><b id='kb' style='color", ":black'><b id='da' style='color:black'><b id='wb' ", "style='color:black'><b id='ha' style='color:black'", "><b id='wc' style='color:black'><b id='eb' style='", "color:black'><b id='pa' style='color:black'><b id=", "'ne' style='color:black'><b id='fb' style='color:b", "lack'><b id='fc' style='color:black'><b id='ra' st", "yle='color:black'><b id='gb' style='color:black'><", "b id='ob' style='color:black'><b id='cb' style='co", "lor:black'><b id='nf' style='color:black'><b id='d", "d' style='color:black'><b id='hb' style='color:bla", "ck'></b></b></b></b></b></b></b></b></b></b></b></", "b><b id='nd' style='color:black'></b></b><b id='dc", "' style='color:black'></b><b id='ac' style='color:", "black'></b></b></b><b id='ib' style='color:black'>", "</b><b id='db' style='color:black'></b></b><b id='", "wa' style='color:black'></b></b></b><b id='qa' sty", "le='color:black'></b></b><b id='oa' style='color:b", "lack'></b></b><b id='ga' style='color:black'></b><", "/b></b></b></b><b id='vd' style='color:black'></b>", "</b><b id='ba' style='color:black'></b></b></b></b", "></b></b></b></b></b></b><b id='na' style='color:b", "lack'></b></b></b></b><b id='w' style='color:black", "'></b></b></b><b id='t' style='color:black'></b></", "b></b><b id='q' style='color:black'></b></b></b></", "b><b id='m' style='color:black'></b></b><b id='k' ", "style='color:black'></b></b><b id='i' style='color", ":black'></b></b></b></b></b></b></b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<b id='a' style='color:yellow'><u id='c' style='co", "lor:yellow'><u id='d' style='color:white'><u id='e", "' style='color:yellow'><u id='f' style='color:yell", "ow'><b id='g' style='color:yellow'><u id='i' style", "='color:white'><u id='j' style='color:white'><b id", "='k' style='color:green'><u id='l' style='color:wh", "ite'><u id='m' style='color:yellow'><b id='n' styl", "e='color:yellow'><u id='o' style='color:yellow'><u", " id='p' style='color:yellow'><b id='q' style='colo", "r:red'><b id='s' style='color:yellow'><u id='t' st", "yle='color:yellow'><u id='u' style='color:yellow'>", "<u id='v' style='color:red'><u id='w' style='color", ":white'><u id='x' style='color:white'><b id='y' st", "yle='color:yellow'><u id='z' style='color:red'><u ", "id='ma' style='color:yellow'><u id='fa' style='col", "or:red'><u id='aa' style='color:yellow'><u id='ea'", " style='color:yellow'><u id='qa' style='color:yell", "ow'><b id='ja' style='color:yellow'><b id='xa' sty", "le='color:yellow'><b id='ya' style='color:yellow'>", "<u id='wa' style='color:white'><u id='la' style='c", "olor:white'><u id='ca' style='color:yellow'><u id=", "'ba' style='color:white'><u id='bb' style='color:w", "hite'><u id='ab' style='color:yellow'><u id='va' s", "tyle='color:yellow'><u id='eb' style='color:yellow", "'><u id='ua' style='color:yellow'><b id='xb' style", "='color:yellow'><b id='oa' style='color:white'><b ", "id='sa' style='color:yellow'><b id='ta' style='col", "or:yellow'><b id='nb' style='color:yellow'><u id='", "xc' style='color:yellow'><u id='jb' style='color:w", "hite'><u id='bd' style='color:yellow'><b id='lc' s", "tyle='color:white'><u id='ia' style='color:green'>", "<u id='ld' style='color:yellow'><u id='ub' style='", "color:white'><u id='ka' style='color:yellow'><u id", "='xd' style='color:yellow'><b id='uc' style='color", ":yellow'><u id='be' style='color:yellow'><u id='yb", "' style='color:white'></u><b id='jc' style='color:", "white'></b><u id='ud' style='color:red'></u></u></", "b><b id='ha' style='color:yellow'></b></u></u></u>", "<u id='nc' style='color:yellow'></u></u><u id='sb'", " style='color:green'></u></u></b></u></u></u></b><", "/b><u id='na' style='color:yellow'></u></b></b></b", "></u><u id='vb' style='color:yellow'></u></u></u><", "u id='lb' style='color:yellow'></u><u id='wb' styl", "e='color:yellow'></u></u><u id='bc' style='color:w", "hite'></u></u></u></u></u></u><u id='qb' style='co", "lor:yellow'></u></b></b></b></u></u></u></u></u></", "u></b></u></u></u></u></u></b><u id='r' style='col", "or:white'></u></b></u></u></b></u></u></b></u></u>", "<u id='h' style='color:yellow'></u></b></u></u></u", "></u><u id='b' style='color:yellow'></u></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> xthml = {"<b id='vc' style='color:green'><b id='tb' style='c", "olor:red'><b id='od' style='color:green'></b><b id", "='ub' style='color:red'></b><b id='rc' style='colo", "r:red'></b><b id='ib' style='color:red'></b><b id=", "'oc' style='color:red'></b><b id='de' style='color", ":gray'></b><b id='cd' style='color:red'></b><b id=", "'aa' style='color:red'></b><b id='cc' style='color", ":red'></b><b id='mb' style='color:red'></b><b id='", "ua' style='color:red'></b><b id='xa' style='color:", "green'></b><b id='tc' style='color:red'></b><b id=", "'la' style='color:gray'></b><b id='pc' style='colo", "r:red'></b><b id='ea' style='color:red'></b><b id=", "'wc' style='color:green'></b><b id='cb' style='col", "or:green'></b></b><b id='ob' style='color:red'></b", "><b id='ya' style='color:red'></b><b id='ma' style", "='color:red'></b><b id='zb' style='color:red'></b>", "<b id='pb' style='color:red'></b><b id='ca' style=", "'color:red'></b><b id='nb' style='color:red'></b><", "b id='ba' style='color:green'></b><b id='sa' style", "='color:red'></b><b id='wb' style='color:gray'></b", "><b id='dd' style='color:red'></b><b id='dc' style", "='color:red'></b><b id='db' style='color:red'></b>", "<b id='da' style='color:green'></b><b id='hb' styl", "e='color:red'></b><b id='wa' style='color:red'></b", "><b id='ta' style='color:red'></b></b><b id='oa' s", "tyle='color:green'></b><b id='rb' style='color:gre", "en'></b><b id='qa' style='color:red'></b><b id='na", "' style='color:gray'></b><b id='vb' style='color:r", "ed'></b><b id='pa' style='color:red'></b><b id='za", "' style='color:red'></b><b id='va' style='color:gr", "een'></b><b id='ha' style='color:green'></b><b id=", "'ra' style='color:red'></b><b id='ka' style='color", ":gray'></b><b id='ia' style='color:red'></b><b id=", "'z' style='color:red'></b><b id='y' style='color:g", "reen'></b><b id='x' style='color:red'></b><b id='w", "' style='color:red'></b><b id='v' style='color:red", "'></b><b id='u' style='color:green'></b><b id='t' ", "style='color:red'></b><b id='s' style='color:green", "'></b><b id='r' style='color:green'></b><b id='q' ", "style='color:red'></b><b id='p' style='color:green", "'></b><b id='o' style='color:green'></b><b id='n' ", "style='color:green'></b><b id='m' style='color:red", "'></b><b id='l' style='color:green'></b><b id='k' ", "style='color:red'></b><b id='j' style='color:green", "'></b><b id='i' style='color:red'></b><b id='h' st", "yle='color:red'></b><b id='g' style='color:red'></", "b><b id='f' style='color:red'></b><b id='e' style=", "'color:red'></b><b id='d' style='color:red'></b><b", " id='c' style='color:gray'></b><b id='b' style='co", "lor:red'></b><b id='a' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> xthml = {"<b id='b' style='color:gray'><b id='c' style='colo", "r:gray'><b id='d' style='color:gray'><b id='g' sty", "le='color:blue'><b id='i' style='color:gray'><b id", "='j' style='color:gray'><b id='k' style='color:gra", "y'><b id='m' style='color:blue'><b id='n' style='c", "olor:gray'><b id='o' style='color:gray'><b id='p' ", "style='color:blue'><b id='q' style='color:gray'><b", " id='r' style='color:gray'><b id='s' style='color:", "gray'><b id='t' style='color:gray'><b id='u' style", "='color:gray'><b id='v' style='color:gray'><b id='", "w' style='color:gray'><b id='x' style='color:gray'", "><b id='y' style='color:gray'><b id='z' style='col", "or:gray'><b id='ha' style='color:blue'><b id='ra' ", "style='color:gray'><b id='ta' style='color:blue'><", "b id='za' style='color:gray'><b id='ea' style='col", "or:gray'><b id='rb' style='color:gray'><b id='aa' ", "style='color:gray'><b id='ma' style='color:gray'><", "b id='sa' style='color:blue'><b id='na' style='col", "or:gray'><b id='ga' style='color:gray'><b id='zb' ", "style='color:blue'><b id='ca' style='color:gray'><", "b id='tb' style='color:blue'><b id='sb' style='col", "or:blue'><b id='mb' style='color:gray'><b id='da' ", "style='color:gray'><b id='ab' style='color:blue'><", "b id='ac' style='color:gray'><b id='ya' style='col", "or:gray'><b id='sc' style='color:black'><b id='lb'", " style='color:black'><b id='wa' style='color:blue'", "><b id='oa' style='color:gray'><b id='fa' style='c", "olor:black'><b id='va' style='color:gray'><b id='y", "b' style='color:gray'><b id='tc' style='color:blue", "'><b id='cb' style='color:gray'><b id='ia' style='", "color:blue'><b id='yc' style='color:gray'><b id='q", "a' style='color:gray'><b id='db' style='color:blue", "'><b id='sd' style='color:gray'><b id='xa' style='", "color:gray'><b id='ja' style='color:gray'><b id='h", "b' style='color:blue'><b id='mc' style='color:gray", "'><b id='yd' style='color:gray'><b id='ld' style='", "color:gray'><b id='se' style='color:blue'><b id='k", "a' style='color:gray'></b></b></b></b></b></b><b i", "d='zc' style='color:blue'></b></b></b><b id='vb' s", "tyle='color:blue'></b></b></b></b></b></b></b><b i", "d='ad' style='color:gray'></b></b><b id='lc' style", "='color:blue'></b></b></b></b></b></b></b><b id='l", "a' style='color:blue'></b></b></b></b></b></b></b>", "<b id='pa' style='color:gray'></b></b></b></b></b>", "</b></b></b></b></b></b></b></b></b></b></b></b></", "b></b></b></b></b></b></b></b></b></b></b></b></b>", "<b id='l' style='color:gray'></b></b></b></b><b id", "='h' style='color:blue'></b></b><b id='f' style='c", "olor:gray'></b><b id='e' style='color:gray'></b></", "b></b></b><b id='a' style='color:blue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> xthml = {"<i id='e' style='color:green'><b id='f' style='col", "or:gray'><b id='n' style='color:green'><i id='o' s", "tyle='color:green'><i id='q' style='color:green'><", "i id='xa' style='color:green'><i id='ia' style='co", "lor:green'><i id='ua' style='color:green'><i id='v", "b' style='color:green'><i id='tb' style='color:gre", "en'><u id='ma' style='color:green'><u id='xb' styl", "e='color:green'><u id='md' style='color:green'><i ", "id='ub' style='color:green'><b id='uc' style='colo", "r:green'><i id='ra' style='color:green'><i id='sc'", " style='color:gray'><u id='qb' style='color:green'", "></u></i><i id='zc' style='color:gray'></i><u id='", "rb' style='color:green'></u><i id='qa' style='colo", "r:green'></i><i id='ab' style='color:green'></i><u", " id='nb' style='color:gray'></u></i><u id='ja' sty", "le='color:green'></u></b><i id='cb' style='color:g", "reen'></i><u id='me' style='color:green'></u><i id", "='zb' style='color:green'></i></i></u><i id='sb' s", "tyle='color:green'></i><i id='yb' style='color:gra", "y'></i><u id='lb' style='color:green'></u><b id='x", "c' style='color:green'></b></u><i id='mc' style='c", "olor:green'></i><i id='db' style='color:gray'></i>", "<u id='mb' style='color:green'></u><u id='td' styl", "e='color:green'></u><u id='sa' style='color:green'", "></u><i id='ca' style='color:gray'></i><b id='aa' ", "style='color:gray'></b></u><i id='tc' style='color", ":green'></i><i id='bb' style='color:green'></i></i", "><i id='ta' style='color:green'></i></i><i id='ib'", " style='color:green'></i><i id='fa' style='color:g", "ray'></i><i id='pa' style='color:green'></i></i><u", " id='da' style='color:green'></u><i id='na' style=", "'color:green'></i><u id='ya' style='color:green'><", "/u><u id='la' style='color:gray'></u></i><u id='va", "' style='color:green'></u><i id='ba' style='color:", "green'></i><b id='za' style='color:green'></b></i>", "<u id='z' style='color:gray'></u><i id='y' style='", "color:green'></i><i id='x' style='color:gray'></i>", "<u id='w' style='color:blue'></u><i id='v' style='", "color:gray'></i><i id='u' style='color:green'></i>", "<u id='t' style='color:gray'></u><i id='s' style='", "color:green'></i><i id='r' style='color:blue'></i>", "</i><u id='p' style='color:gray'></u></i></b><i id", "='m' style='color:green'></i><i id='l' style='colo", "r:green'></i><u id='k' style='color:green'></u><i ", "id='j' style='color:green'></i><i id='i' style='co", "lor:green'></i><i id='h' style='color:blue'></i><u", " id='g' style='color:green'></u></b></i><i id='d' ", "style='color:green'></i><i id='c' style='color:gre", "en'></i><i id='b' style='color:green'></i><u id='a", "' style='color:blue'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> xthml = {"<b id='c' style='color:red'><b id='e' style='color", ":red'><b id='f' style='color:red'><b id='g' style=", "'color:red'><b id='i' style='color:red'><b id='l' ", "style='color:red'><b id='m' style='color:blue'><b ", "id='o' style='color:gray'><b id='r' style='color:r", "ed'><b id='s' style='color:green'><b id='t' style=", "'color:red'><b id='v' style='color:black'><b id='y", "' style='color:gray'><b id='ta' style='color:red'>", "<b id='ba' style='color:red'><b id='za' style='col", "or:red'><b id='hb' style='color:gray'><b id='da' s", "tyle='color:green'><b id='xa' style='color:green'>", "<b id='fa' style='color:red'><b id='mb' style='col", "or:green'><b id='zb' style='color:red'><b id='qb' ", "style='color:blue'><b id='tc' style='color:red'><b", " id='ib' style='color:red'><b id='ua' style='color", ":red'><b id='qe' style='color:blue'><b id='ub' sty", "le='color:green'><b id='ja' style='color:gray'><b ", "id='eb' style='color:red'><b id='wb' style='color:", "red'></b><b id='jb' style='color:green'></b><b id=", "'sa' style='color:red'></b></b><b id='te' style='c", "olor:gray'></b></b></b><b id='la' style='color:red", "'></b><b id='na' style='color:red'></b><b id='wa' ", "style='color:gray'></b><b id='fc' style='color:red", "'></b><b id='mc' style='color:gray'></b><b id='ob'", " style='color:green'></b></b><b id='td' style='col", "or:red'></b></b></b><b id='va' style='color:red'><", "/b><b id='hf' style='color:gray'></b><b id='qd' st", "yle='color:red'></b><b id='ia' style='color:red'><", "/b><b id='fb' style='color:gray'></b></b><b id='qc", "' style='color:red'></b><b id='cb' style='color:gr", "ay'></b></b><b id='yc' style='color:green'></b><b ", "id='he' style='color:red'></b></b><b id='hd' style", "='color:red'></b></b><b id='ea' style='color:gray'", "></b></b><b id='tb' style='color:green'></b><b id=", "'aa' style='color:red'></b><b id='qa' style='color", ":red'></b><b id='hc' style='color:green'></b></b><", "b id='ma' style='color:red'></b><b id='ca' style='", "color:green'></b><b id='yb' style='color:green'></", "b><b id='oa' style='color:red'></b></b><b id='ya' ", "style='color:red'></b></b><b id='ha' style='color:", "red'></b></b></b></b><b id='z' style='color:gray'>", "</b></b><b id='x' style='color:red'></b><b id='w' ", "style='color:red'></b></b><b id='u' style='color:r", "ed'></b></b></b></b><b id='q' style='color:red'></", "b><b id='p' style='color:red'></b></b><b id='n' st", "yle='color:gray'></b></b></b><b id='k' style='colo", "r:red'></b><b id='j' style='color:blue'></b></b><b", " id='h' style='color:red'></b></b></b></b><b id='d", "' style='color:green'></b></b><b id='b' style='col", "or:red'></b><b id='a' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> xthml = {"<i id='h' style='color:black'><u id='j' style='col", "or:black'><b id='k' style='color:black'><u id='l' ", "style='color:black'><u id='p' style='color:black'>", "<i id='w' style='color:black'><i id='ra' style='co", "lor:black'><i id='ya' style='color:black'><i id='s", "a' style='color:black'><i id='la' style='color:bla", "ck'><i id='pa' style='color:black'><u id='eb' styl", "e='color:black'><b id='ua' style='color:black'><u ", "id='ca' style='color:black'><i id='sb' style='colo", "r:black'><u id='cb' style='color:black'><i id='sc'", " style='color:black'><u id='rb' style='color:black", "'><u id='uc' style='color:black'><u id='va' style=", "'color:black'><u id='wa' style='color:black'><i id", "='vb' style='color:black'><i id='fa' style='color:", "black'><i id='ud' style='color:black'><u id='xb' s", "tyle='color:black'><i id='xc' style='color:black'>", "<i id='za' style='color:black'><i id='pc' style='c", "olor:black'><i id='ue' style='color:black'><i id='", "ma' style='color:black'><u id='ab' style='color:bl", "ack'><i id='ed' style='color:black'><i id='hb' sty", "le='color:black'><i id='zc' style='color:black'></", "i></i><u id='oa' style='color:black'></u></i><i id", "='ec' style='color:black'></i></u></i><i id='kb' s", "tyle='color:black'></i><i id='rc' style='color:bla", "ck'></i><i id='zb' style='color:black'></i><b id='", "ka' style='color:black'></b></i><i id='aa' style='", "color:black'></i></i></i><i id='ga' style='color:b", "lack'></i></i></u></i><b id='vc' style='color:blac", "k'></b><i id='yb' style='color:black'></i></i></i>", "</u></u></u></u><u id='da' style='color:black'></u", "><b id='pb' style='color:black'></b><i id='xa' sty", "le='color:black'></i></i></u></i></u><u id='ub' st", "yle='color:black'></u></b><i id='tb' style='color:", "black'></i><i id='ta' style='color:black'></i></u>", "<b id='ea' style='color:black'></b></i></i><i id='", "ha' style='color:black'></i></i></i></i><u id='z' ", "style='color:black'></u><i id='y' style='color:bla", "ck'></i><i id='x' style='color:black'></i></i><u i", "d='v' style='color:black'></u><u id='u' style='col", "or:black'></u><u id='t' style='color:black'></u><i", " id='s' style='color:black'></i><b id='r' style='c", "olor:black'></b><i id='q' style='color:black'></i>", "</u><u id='o' style='color:black'></u><u id='n' st", "yle='color:black'></u><i id='m' style='color:black", "'></i></u></b></u><u id='i' style='color:black'></", "u></i><u id='g' style='color:black'></u><i id='f' ", "style='color:black'></i><i id='e' style='color:bla", "ck'></i><i id='d' style='color:black'></i><i id='c", "' style='color:black'></i><i id='b' style='color:b", "lack'></i><i id='a' style='color:black'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
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
    vector<string> xthml = {"<u id='a' style='color:green'><u id='g' style='col", "or:green'><u id='j' style='color:red'><u id='m' st", "yle='color:red'><u id='n' style='color:red'><b id=", "'p' style='color:red'><u id='r' style='color:green", "'><u id='t' style='color:red'><u id='x' style='col", "or:red'><u id='fa' style='color:green'><u id='ba' ", "style='color:red'><u id='ya' style='color:green'><", "b id='ia' style='color:red'><u id='ob' style='colo", "r:gray'><b id='pa' style='color:blue'><u id='yb' s", "tyle='color:red'><u id='na' style='color:gray'><u ", "id='tb' style='color:red'><u id='zd' style='color:", "red'><u id='kc' style='color:red'><u id='ab' style", "='color:red'><u id='ac' style='color:red'></u></u>", "<u id='id' style='color:red'></u><u id='jc' style=", "'color:green'></u><u id='lb' style='color:red'></u", "><u id='ye' style='color:red'></u><u id='ic' style", "='color:red'></u><u id='la' style='color:green'></", "u><b id='yd' style='color:red'></b><u id='tc' styl", "e='color:red'></u><u id='qa' style='color:red'></u", "></u><u id='ga' style='color:green'></u><u id='ua'", " style='color:red'></u><u id='ib' style='color:gre", "en'></u><u id='sb' style='color:red'></u><u id='db", "' style='color:red'></u></u><u id='cb' style='colo", "r:blue'></u><u id='kb' style='color:red'></u></u><", "u id='yc' style='color:red'></u><u id='sa' style='", "color:red'></u><u id='bc' style='color:gray'></u><", "/u><u id='od' style='color:red'></u><u id='zc' sty", "le='color:red'></u></u><b id='xa' style='color:red", "'></b><u id='oc' style='color:red'></u></b><b id='", "jb' style='color:red'></b><u id='bb' style='color:", "red'></u><b id='da' style='color:gray'></b><b id='", "ka' style='color:red'></b><u id='fb' style='color:", "red'></u><u id='ta' style='color:red'></u></u><u i", "d='ja' style='color:red'></u><b id='zb' style='col", "or:red'></b><b id='oa' style='color:red'></b><b id", "='aa' style='color:red'></b></b><u id='za' style='", "color:red'></u><u id='ca' style='color:red'></u></", "u><u id='ha' style='color:red'></u></u></u><b id='", "z' style='color:red'></b><b id='y' style='color:re", "d'></b></u><u id='w' style='color:red'></u><u id='", "v' style='color:red'></u><u id='u' style='color:gr", "een'></u></u><u id='s' style='color:red'></u></u><", "u id='q' style='color:red'></u></b><u id='o' style", "='color:green'></u></u></u><b id='l' style='color:", "red'></b><u id='k' style='color:red'></u></u><b id", "='i' style='color:green'></b><u id='h' style='colo", "r:red'></u></u><u id='f' style='color:red'></u><b ", "id='e' style='color:red'></b><u id='d' style='colo", "r:green'></u><u id='c' style='color:red'></u><u id", "='b' style='color:red'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> xthml = {"<b id='d' style='color:gray'><b id='f' style='colo", "r:gray'><b id='h' style='color:black'><b id='j' st", "yle='color:green'><b id='k' style='color:blue'><b ", "id='m' style='color:green'><b id='o' style='color:", "black'><b id='v' style='color:green'><b id='z' sty", "le='color:black'><b id='ca' style='color:green'><b", " id='ya' style='color:red'><b id='ja' style='color", ":black'><b id='cb' style='color:red'><b id='za' st", "yle='color:black'><b id='ea' style='color:blue'><b", " id='da' style='color:red'><b id='pc' style='color", ":red'><b id='wa' style='color:blue'><b id='hb' sty", "le='color:green'><b id='la' style='color:red'><b i", "d='pd' style='color:red'><b id='fa' style='color:r", "ed'><b id='ka' style='color:blue'><b id='pe' style", "='color:red'><b id='fb' style='color:red'></b><b i", "d='xf' style='color:green'></b><b id='hd' style='c", "olor:gray'></b></b><b id='xe' style='color:black'>", "</b><b id='xd' style='color:blue'></b><b id='ib' s", "tyle='color:green'></b><b id='eb' style='color:gra", "y'></b><b id='hc' style='color:black'></b><b id='w", "b' style='color:green'></b></b><b id='gb' style='c", "olor:red'></b></b></b><b id='ia' style='color:blue", "'></b><b id='vb' style='color:red'></b></b><b id='", "mc' style='color:red'></b></b><b id='xc' style='co", "lor:green'></b></b></b><b id='aa' style='color:red", "'></b></b><b id='zb' style='color:blue'></b><b id=", "'oa' style='color:blue'></b><b id='va' style='colo", "r:blue'></b><b id='ha' style='color:blue'></b></b>", "<b id='cc' style='color:gray'></b></b></b><b id='m", "b' style='color:gray'></b><b id='yb' style='color:", "blue'></b><b id='qa' style='color:blue'></b><b id=", "'tb' style='color:black'></b><b id='ma' style='col", "or:red'></b><b id='xb' style='color:blue'></b><b i", "d='ba' style='color:red'></b><b id='ta' style='col", "or:black'></b><b id='pb' style='color:blue'></b><b", " id='ga' style='color:blue'></b><b id='jb' style='", "color:blue'></b><b id='pa' style='color:gray'></b>", "</b></b><b id='xa' style='color:gray'></b></b></b>", "<b id='y' style='color:blue'></b><b id='x' style='", "color:blue'></b><b id='w' style='color:green'></b>", "</b><b id='u' style='color:gray'></b><b id='t' sty", "le='color:gray'></b><b id='s' style='color:black'>", "</b><b id='r' style='color:blue'></b><b id='q' sty", "le='color:red'></b><b id='p' style='color:red'></b", "></b><b id='n' style='color:gray'></b></b><b id='l", "' style='color:black'></b></b></b><b id='i' style=", "'color:black'></b></b><b id='g' style='color:blue'", "></b></b><b id='e' style='color:red'></b></b><b id", "='c' style='color:green'></b><b id='b' style='colo", "r:black'></b><b id='a' style='color:black'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> xthml = {"<b id='a' style='color:black'><b id='c' style='col", "or:black'><b id='d' style='color:black'><b id='e' ", "style='color:black'><b id='f' style='color:black'>", "<b id='g' style='color:black'><b id='h' style='col", "or:black'><b id='i' style='color:black'><b id='j' ", "style='color:black'><b id='k' style='color:black'>", "<b id='l' style='color:black'><b id='m' style='col", "or:black'><b id='n' style='color:black'><b id='o' ", "style='color:black'><b id='p' style='color:black'>", "<b id='r' style='color:black'><b id='s' style='col", "or:black'><b id='t' style='color:black'><b id='u' ", "style='color:black'><b id='v' style='color:black'>", "<b id='w' style='color:black'><b id='x' style='col", "or:black'><b id='y' style='color:black'><b id='z' ", "style='color:black'><b id='ma' style='color:black'", "><b id='fa' style='color:black'><b id='cb' style='", "color:black'><b id='oa' style='color:black'><b id=", "'za' style='color:black'><b id='wa' style='color:b", "lack'><b id='ra' style='color:black'><b id='na' st", "yle='color:black'><b id='xa' style='color:black'><", "b id='ea' style='color:black'><b id='da' style='co", "lor:black'><b id='nb' style='color:black'><b id='m", "b' style='color:black'><b id='mc' style='color:bla", "ck'><b id='nc' style='color:black'><b id='zb' styl", "e='color:black'><b id='sa' style='color:black'><b ", "id='qa' style='color:black'><b id='ga' style='colo", "r:black'><b id='hb' style='color:black'><b id='rb'", " style='color:black'><b id='gb' style='color:black", "'><b id='ba' style='color:black'><b id='eb' style=", "'color:black'><b id='md' style='color:black'><b id", "='ob' style='color:black'><b id='ka' style='color:", "black'><b id='ja' style='color:black'><b id='hc' s", "tyle='color:black'><b id='sb' style='color:black'>", "<b id='bb' style='color:black'><b id='ia' style='c", "olor:black'><b id='oc' style='color:black'><b id='", "me' style='color:black'><b id='mf' style='color:bl", "ack'><b id='ya' style='color:black'><b id='yb' sty", "le='color:black'><b id='db' style='color:black'><b", " id='aa' style='color:black'><b id='gc' style='col", "or:black'><b id='kb' style='color:black'><b id='qb", "' style='color:black'><b id='ab' style='color:blac", "k'><b id='ib' style='color:black'></b></b></b></b>", "</b></b></b></b></b></b></b></b></b></b></b></b></", "b></b></b></b></b></b></b></b></b></b></b></b></b>", "</b></b></b></b></b></b></b></b></b></b></b><b id=", "'ha' style='color:black'></b></b></b></b><b id='ca", "' style='color:black'></b></b></b></b></b></b></b>", "</b></b></b></b><b id='q' style='color:black'></b>", "</b></b></b></b></b></b></b></b></b></b></b></b></", "b></b><b id='b' style='color:black'></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> xthml = {"<u id='b' style='color:white'><u id='c' style='col", "or:green'><u id='d' style='color:gray'><b id='f' s", "tyle='color:green'><u id='j' style='color:red'><u ", "id='l' style='color:white'><u id='n' style='color:", "red'><u id='q' style='color:blue'><u id='w' style=", "'color:red'><b id='x' style='color:blue'><u id='ja", "' style='color:yellow'><b id='ka' style='color:yel", "low'><u id='pa' style='color:yellow'><u id='ob' st", "yle='color:green'><u id='ba' style='color:red'><u ", "id='ya' style='color:white'><b id='mc' style='colo", "r:white'><u id='da' style='color:yellow'><u id='ra", "' style='color:red'><u id='kc' style='color:white'", "><u id='ta' style='color:yellow'><u id='kd' style=", "'color:red'><u id='dc' style='color:white'><u id='", "jc' style='color:yellow'><u id='ca' style='color:g", "reen'></u><u id='nb' style='color:red'></u><u id='", "eb' style='color:gray'></u></u><u id='dd' style='c", "olor:red'></u><b id='pc' style='color:white'></b><", "/u><u id='pb' style='color:yellow'></u><u id='sa' ", "style='color:red'></u></u><b id='lb' style='color:", "blue'></b></u><u id='va' style='color:yellow'></u>", "<b id='ga' style='color:red'></b><u id='db' style=", "'color:blue'></u></u></u><u id='fa' style='color:w", "hite'></u><u id='qb' style='color:yellow'></u><u i", "d='md' style='color:red'></u><u id='bb' style='col", "or:red'></u></u><b id='od' style='color:white'></b", "><u id='jb' style='color:yellow'></u></b></u><b id", "='mb' style='color:gray'></b></u><u id='la' style=", "'color:red'></u><u id='wa' style='color:yellow'></", "u><u id='ha' style='color:yellow'></u><u id='ea' s", "tyle='color:gray'></u><u id='ib' style='color:whit", "e'></u><u id='oc' style='color:red'></u><u id='kb'", " style='color:red'></u></u><b id='xa' style='color", ":white'></b></u><u id='ia' style='color:yellow'></", "u><u id='qa' style='color:white'></u><u id='ma' st", "yle='color:green'></u><b id='ua' style='color:whit", "e'></b></b></u><u id='aa' style='color:white'></u>", "<u id='na' style='color:gray'></u><b id='oa' style", "='color:white'></b><u id='z' style='color:yellow'>", "</u><b id='y' style='color:green'></b></b></u><u i", "d='v' style='color:green'></u><u id='u' style='col", "or:yellow'></u><b id='t' style='color:green'></b><", "b id='s' style='color:yellow'></b><u id='r' style=", "'color:yellow'></u></u><u id='p' style='color:gray", "'></u><u id='o' style='color:white'></u></u><b id=", "'m' style='color:white'></b></u><u id='k' style='c", "olor:red'></u></u><u id='i' style='color:white'></", "u><u id='h' style='color:white'></u><u id='g' styl", "e='color:red'></u></b><u id='e' style='color:red'>", "</u></u></u></u><u id='a' style='color:white'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> xthml = {"<u id='a' style='color:red'><b id='d' style='color", ":green'><b id='f' style='color:green'><u id='i' st", "yle='color:gray'><u id='j' style='color:blue'><u i", "d='k' style='color:black'><u id='l' style='color:g", "reen'><u id='m' style='color:blue'><u id='n' style", "='color:red'><u id='o' style='color:gray'><b id='p", "' style='color:blue'><u id='r' style='color:gray'>", "<u id='t' style='color:gray'><u id='u' style='colo", "r:red'><u id='v' style='color:gray'><u id='x' styl", "e='color:black'><u id='y' style='color:gray'><b id", "='z' style='color:red'><u id='ba' style='color:red", "'><u id='za' style='color:green'><u id='qa' style=", "'color:red'><u id='ga' style='color:black'><b id='", "la' style='color:blue'><u id='pa' style='color:gre", "en'><u id='qb' style='color:blue'><u id='nb' style", "='color:red'><b id='zb' style='color:red'><u id='o", "a' style='color:black'><b id='ca' style='color:bla", "ck'><b id='fa' style='color:black'><u id='xa' styl", "e='color:blue'><u id='ha' style='color:green'><u i", "d='jb' style='color:gray'><u id='ia' style='color:", "gray'><u id='rb' style='color:red'><u id='jc' styl", "e='color:black'><u id='gb' style='color:gray'><u i", "d='cb' style='color:green'><u id='va' style='color", ":green'><u id='ib' style='color:gray'><u id='fc' s", "tyle='color:red'><b id='bb' style='color:blue'><u ", "id='bc' style='color:red'><b id='je' style='color:", "blue'><u id='ec' style='color:blue'><u id='fe' sty", "le='color:blue'><b id='xc' style='color:green'><u ", "id='bd' style='color:black'></u></b></u></u></b></", "u><u id='kb' style='color:red'></u></b><u id='fd' ", "style='color:black'></u></u><u id='jd' style='colo", "r:blue'></u></u><u id='fb' style='color:green'></u", "><u id='wb' style='color:gray'></u></u></u><u id='", "aa' style='color:gray'></u></u></u><u id='xb' styl", "e='color:blue'></u></u></u></u></u></u></b><b id='", "zc' style='color:gray'></b><u id='eb' style='color", ":black'></u></b></u><u id='ja' style='color:gray'>", "</u></b><u id='ka' style='color:gray'></u><u id='p", "b' style='color:green'></u><u id='ya' style='color", ":gray'></u><u id='ea' style='color:gray'></u></u><", "/u><u id='na' style='color:black'></u><u id='wa' s", "tyle='color:black'></u></u></b></u></u></u></u><b ", "id='ra' style='color:red'></b></b></u></u><u id='w", "' style='color:gray'></u></u></u></u><u id='s' sty", "le='color:gray'></u></u><b id='q' style='color:bla", "ck'></b></b></u></u></u></u></u></u></u><b id='h' ", "style='color:red'></b><u id='g' style='color:blue'", "></u></b><b id='e' style='color:black'></b></b><b ", "id='c' style='color:black'></b><u id='b' style='co", "lor:black'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> xthml = {"<u id='a' style='color:blue'><u id='c' style='colo", "r:green'><u id='d' style='color:green'><b id='g' s", "tyle='color:green'><u id='h' style='color:green'><", "u id='i' style='color:green'><u id='j' style='colo", "r:green'><u id='k' style='color:gray'><u id='l' st", "yle='color:green'><u id='m' style='color:green'><u", " id='o' style='color:green'><b id='p' style='color", ":green'><u id='q' style='color:gray'><u id='v' sty", "le='color:green'><u id='y' style='color:green'><u ", "id='z' style='color:green'><b id='wa' style='color", ":green'><u id='xa' style='color:green'><u id='ma' ", "style='color:green'><u id='fa' style='color:green'", "><u id='ca' style='color:gray'><u id='oa' style='c", "olor:green'><u id='mb' style='color:green'><u id='", "qa' style='color:gray'><u id='ha' style='color:gre", "en'><u id='la' style='color:green'><b id='na' styl", "e='color:green'><u id='va' style='color:green'><u ", "id='ib' style='color:green'><b id='hb' style='colo", "r:green'><u id='ya' style='color:green'><u id='qb'", " style='color:green'><b id='ra' style='color:green", "'><u id='za' style='color:green'><u id='lb' style=", "'color:green'><u id='ba' style='color:green'><u id", "='vb' style='color:green'><u id='pa' style='color:", "green'><u id='da' style='color:green'><u id='wb' s", "tyle='color:green'><u id='nc' style='color:green'>", "<u id='xc' style='color:green'><u id='bb' style='c", "olor:gray'><u id='qc' style='color:green'><u id='p", "b' style='color:green'><u id='gd' style='color:gra", "y'><u id='bc' style='color:green'><u id='fb' style", "='color:green'></u></u></u><u id='vc' style='color", ":green'></u><u id='wc' style='color:gray'></u></u>", "</u><u id='yb' style='color:blue'></u></u><u id='h", "d' style='color:green'></u><u id='kb' style='color", ":green'></u></u></u></u><u id='mc' style='color:gr", "een'></u><u id='nb' style='color:gray'></u></u></u", "></u></u></u></u><u id='ka' style='color:green'></", "u><u id='xb' style='color:green'></u></b><u id='gc", "' style='color:green'></u></u></u><b id='hc' style", "='color:gray'></b></b></u></u></b></u></u></u></u>", "</u></u></u><u id='gb' style='color:green'></u><u ", "id='ia' style='color:green'></u></u></u><u id='ga'", " style='color:green'></u></b></u></u><u id='x' sty", "le='color:gray'></u><b id='w' style='color:green'>", "</b></u><u id='u' style='color:green'></u><u id='t", "' style='color:green'></u><b id='s' style='color:g", "reen'></b><u id='r' style='color:green'></u></u></", "b></u><b id='n' style='color:green'></b></u></u></", "u></u></u></u></b><b id='f' style='color:green'></", "b><u id='e' style='color:green'></u></u></u><u id=", "'b' style='color:green'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> xthml = {"<u id='b' style='color:white'><b id='c' style='col", "or:red'><u id='d' style='color:red'><u id='e' styl", "e='color:white'><u id='g' style='color:white'><u i", "d='j' style='color:green'><u id='k' style='color:w", "hite'><u id='m' style='color:white'><u id='r' styl", "e='color:red'><u id='s' style='color:red'><b id='u", "' style='color:white'><u id='v' style='color:white", "'><u id='w' style='color:white'><u id='y' style='c", "olor:red'><b id='z' style='color:white'><u id='qa'", " style='color:white'><u id='ba' style='color:white", "'><u id='wa' style='color:white'><u id='za' style=", "'color:red'><u id='pa' style='color:white'><b id='", "la' style='color:red'><u id='ec' style='color:whit", "e'><u id='lb' style='color:white'><u id='kb' style", "='color:red'><u id='qc' style='color:red'><u id='i", "b' style='color:red'><u id='qe' style='color:red'>", "<u id='rc' style='color:green'><b id='qf' style='c", "olor:blue'><b id='ga' style='color:white'><u id='k", "c' style='color:red'><b id='nc' style='color:red'>", "<u id='pb' style='color:white'><u id='pc' style='c", "olor:red'><u id='oa' style='color:green'><u id='ab", "' style='color:gray'><b id='da' style='color:red'>", "</b><u id='ac' style='color:white'></u><u id='fc' ", "style='color:white'></u></u><u id='ja' style='colo", "r:white'></u></u></u><b id='ic' style='color:white", "'></b></u><u id='rd' style='color:red'></u></b></u", "></b></b><u id='ed' style='color:white'></u><u id=", "'xa' style='color:white'></u><b id='ua' style='col", "or:red'></b></u><u id='aa' style='color:white'></u", "></u><u id='ya' style='color:white'></u></u><u id=", "'nb' style='color:green'></u><u id='qd' style='col", "or:white'></u></u></u><u id='rb' style='color:whit", "e'></u><u id='na' style='color:white'></u><b id='t", "b' style='color:red'></b></u><u id='ka' style='col", "or:white'></u></u></b><u id='ha' style='color:whit", "e'></u><u id='ra' style='color:green'></u></u></u>", "</u><u id='ia' style='color:white'></u><u id='fb' ", "style='color:white'></u><u id='eb' style='color:wh", "ite'></u><b id='qb' style='color:white'></b></u><u", " id='fa' style='color:white'></u><b id='ea' style=", "'color:red'></b><u id='ta' style='color:white'></u", "></u></b></u><b id='x' style='color:white'></b></u", "></u></b><u id='t' style='color:white'></u></u></u", "><u id='q' style='color:white'></u><b id='p' style", "='color:red'></b><u id='o' style='color:red'></u><", "u id='n' style='color:red'></u></u><b id='l' style", "='color:white'></b></u></u><b id='i' style='color:", "white'></b><u id='h' style='color:white'></u></u><", "b id='f' style='color:red'></b></u></u></b></u><b ", "id='a' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> xthml = {"<u id='b' style='color:black'><u id='c' style='col", "or:black'><u id='f' style='color:black'><u id='g' ", "style='color:black'><b id='h' style='color:black'>", "<u id='i' style='color:black'><i id='j' style='col", "or:black'><i id='k' style='color:black'><i id='m' ", "style='color:black'><b id='o' style='color:black'>", "<b id='p' style='color:black'><u id='r' style='col", "or:black'><b id='v' style='color:black'><b id='x' ", "style='color:black'><b id='y' style='color:black'>", "<b id='ha' style='color:black'><i id='ua' style='c", "olor:black'><u id='da' style='color:black'><i id='", "ka' style='color:black'><u id='ma' style='color:bl", "ack'><b id='qa' style='color:black'><u id='sa' sty", "le='color:black'><u id='db' style='color:black'><b", " id='va' style='color:black'><u id='dc' style='col", "or:black'><i id='ta' style='color:black'><u id='ca", "' style='color:black'><u id='ra' style='color:blac", "k'><u id='de' style='color:black'><b id='xa' style", "='color:black'><i id='ia' style='color:black'><i i", "d='ea' style='color:black'><u id='ba' style='color", ":black'><b id='ub' style='color:black'><u id='fa' ", "style='color:black'><i id='kb' style='color:black'", "><b id='na' style='color:black'><b id='fb' style='", "color:black'><u id='nb' style='color:black'><b id=", "'ya' style='color:black'><i id='vb' style='color:b", "lack'><i id='sb' style='color:black'><u id='hb' st", "yle='color:black'><u id='ib' style='color:black'><", "b id='ja' style='color:black'><b id='xc' style='co", "lor:black'><b id='ac' style='color:black'><b id='o", "b' style='color:black'></b></b></b><u id='rb' styl", "e='color:black'></u><i id='pa' style='color:black'", "></i><u id='ab' style='color:black'></u></b></u></", "u></i></i></b></u><b id='uc' style='color:black'><", "/b></b></b><i id='kc' style='color:black'></i></i>", "</u></b><i id='df' style='color:black'></i><i id='", "xb' style='color:black'></i><i id='mc' style='colo", "r:black'></i><i id='mb' style='color:black'></i></", "u></i></i></b></u></u></u></i><b id='dd' style='co", "lor:black'></b><u id='aa' style='color:black'></u>", "</u></b></u></u></b><b id='oa' style='color:black'", "></b></u></i></u><u id='la' style='color:black'></", "u></i></b><i id='z' style='color:black'></i></b></", "b><u id='w' style='color:black'></u></b><i id='u' ", "style='color:black'></i><b id='t' style='color:bla", "ck'></b><b id='s' style='color:black'></b></u><i i", "d='q' style='color:black'></i></b></b><u id='n' st", "yle='color:black'></u></i><u id='l' style='color:b", "lack'></u></i></i></u></b></u></u><b id='e' style=", "'color:black'></b><u id='d' style='color:black'></", "u></u></u><u id='a' style='color:black'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> xthml = {"<u id='a' style='color:gray'><u id='d' style='colo", "r:gray'><u id='h' style='color:blue'><u id='i' sty", "le='color:blue'><u id='j' style='color:gray'><u id", "='k' style='color:blue'><b id='l' style='color:gra", "y'><u id='n' style='color:blue'><b id='o' style='c", "olor:gray'><u id='q' style='color:gray'><u id='s' ", "style='color:blue'><u id='t' style='color:gray'><b", " id='u' style='color:gray'><u id='w' style='color:", "gray'><u id='x' style='color:gray'><u id='y' style", "='color:gray'><u id='ja' style='color:gray'><u id=", "'va' style='color:gray'><u id='oa' style='color:bl", "ue'><u id='xa' style='color:gray'><b id='za' style", "='color:gray'><u id='jb' style='color:blue'><b id=", "'wa' style='color:blue'><b id='na' style='color:gr", "ay'><u id='da' style='color:gray'><u id='ua' style", "='color:gray'><b id='ka' style='color:gray'><u id=", "'wb' style='color:gray'><u id='ga' style='color:bl", "ack'><u id='aa' style='color:blue'><u id='zb' styl", "e='color:gray'><u id='wd' style='color:blue'><u id", "='xb' style='color:gray'><b id='nb' style='color:b", "lue'><u id='yc' style='color:gray'><b id='xd' styl", "e='color:gray'><u id='ea' style='color:gray'><u id", "='sa' style='color:blue'><b id='vb' style='color:b", "lue'><u id='eb' style='color:gray'><u id='qa' styl", "e='color:gray'><u id='rb' style='color:blue'><u id", "='gb' style='color:gray'><u id='nc' style='color:g", "ray'><u id='pa' style='color:gray'><u id='ia' styl", "e='color:gray'><u id='ma' style='color:gray'><u id", "='qb' style='color:gray'><u id='sb' style='color:b", "lue'><u id='ca' style='color:gray'><b id='gc' styl", "e='color:gray'></b></u></u></u></u></u></u></u></u", "><u id='ab' style='color:gray'></u></u><u id='yd' ", "style='color:gray'></u></u></u></b></u></u></b></u", "><b id='yb' style='color:gray'></b><b id='fa' styl", "e='color:gray'></b><u id='oc' style='color:gray'><", "/u></b><u id='xc' style='color:gray'></u></u><u id", "='ya' style='color:gray'></u></u></u><u id='wc' st", "yle='color:blue'></u></u></u><b id='ub' style='col", "or:gray'></b><u id='ba' style='color:gray'></u><u ", "id='ob' style='color:gray'></u><b id='ha' style='c", "olor:blue'></b></u></b><u id='ra' style='color:gra", "y'></u></u></u></b></b></u></b></u></u></u></u><u ", "id='z' style='color:blue'></u></u></u></u><b id='v", "' style='color:gray'></b></b></u></u><b id='r' sty", "le='color:gray'></b></u><b id='p' style='color:blu", "e'></b></b></u><u id='m' style='color:blue'></u></", "b></u></u></u></u><u id='g' style='color:gray'></u", "><u id='f' style='color:gray'></u><u id='e' style=", "'color:gray'></u></u><u id='c' style='color:gray'>", "</u><u id='b' style='color:gray'></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> xthml = {"<i id='c' style='color:gray'><u id='e' style='colo", "r:gray'><i id='f' style='color:blue'><i id='g' sty", "le='color:blue'><i id='h' style='color:blue'><i id", "='i' style='color:black'><i id='j' style='color:gr", "ay'><i id='k' style='color:blue'><i id='l' style='", "color:gray'><u id='m' style='color:gray'><i id='n'", " style='color:gray'><i id='o' style='color:gray'><", "i id='p' style='color:gray'><u id='q' style='color", ":gray'><u id='r' style='color:blue'><i id='s' styl", "e='color:blue'><i id='t' style='color:gray'><i id=", "'w' style='color:black'><u id='x' style='color:gra", "y'><u id='y' style='color:black'><i id='z' style='", "color:gray'><u id='aa' style='color:gray'><i id='g", "a' style='color:gray'><i id='ba' style='color:gray", "'><i id='oa' style='color:gray'><i id='ma' style='", "color:gray'><u id='fa' style='color:gray'><i id='d", "a' style='color:gray'><u id='wa' style='color:gray", "'><i id='ob' style='color:gray'><i id='db' style='", "color:gray'><i id='ya' style='color:gray'><i id='r", "a' style='color:gray'><i id='bb' style='color:gray", "'><i id='ka' style='color:gray'><u id='ha' style='", "color:blue'><i id='ja' style='color:gray'><i id='o", "c' style='color:gray'><u id='va' style='color:gray", "'><i id='wb' style='color:gray'><u id='hb' style='", "color:gray'><i id='la' style='color:gray'><i id='v", "b' style='color:gray'><i id='hc' style='color:blue", "'><u id='qa' style='color:black'><i id='wc' style=", "'color:gray'><i id='xb' style='color:gray'><i id='", "xc' style='color:gray'><u id='lb' style='color:blu", "e'><i id='gb' style='color:blue'><u id='bc' style=", "'color:gray'><i id='bd' style='color:gray'><u id='", "ua' style='color:gray'><u id='ta' style='color:blu", "e'><i id='fb' style='color:black'><i id='yd' style", "='color:gray'><i id='fc' style='color:gray'><i id=", "'lc' style='color:gray'><i id='jb' style='color:gr", "ay'><i id='dc' style='color:gray'><u id='od' style", "='color:gray'></u><i id='hd' style='color:blue'></", "i></i><i id='pa' style='color:blue'></i></i></i></", "i></i></i></u></u></i></u></i></u></i></i><i id='y", "c' style='color:gray'></i></i><i id='ca' style='co", "lor:gray'></i></u></i></i></i><i id='yb' style='co", "lor:gray'></i></u><u id='xa' style='color:gray'></", "u></i></u></i></i></u></i></i></i></i></i></i></u>", "<i id='na' style='color:gray'></i></i><i id='ab' s", "tyle='color:gray'></i></u></i></i></i></i></u></i>", "</u></u></i><u id='v' style='color:blue'></u><u id", "='u' style='color:black'></u></i></i></u></u></i><", "/i></i></u></i></i></i></i></i></i></i></u><i id='", "d' style='color:gray'></i></i><i id='b' style='col", "or:gray'></i><i id='a' style='color:gray'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> xthml = {"<u id='a' style='color:black'><u id='c' style='col", "or:black'><i id='d' style='color:black'><i id='h' ", "style='color:black'><u id='n' style='color:black'>", "<i id='o' style='color:black'><u id='q' style='col", "or:black'><u id='r' style='color:black'><u id='s' ", "style='color:black'><u id='t' style='color:black'>", "<u id='v' style='color:black'><u id='w' style='col", "or:black'><i id='y' style='color:black'><i id='z' ", "style='color:black'><i id='ta' style='color:black'", "><b id='da' style='color:black'><i id='ua' style='", "color:black'><b id='ka' style='color:black'><i id=", "'kb' style='color:black'><u id='xa' style='color:b", "lack'><u id='hb' style='color:black'><i id='ca' st", "yle='color:black'><i id='ja' style='color:black'><", "i id='aa' style='color:black'><u id='ba' style='co", "lor:black'><u id='mb' style='color:black'><b id='n", "a' style='color:black'><i id='ga' style='color:bla", "ck'><u id='xb' style='color:black'><i id='ob' styl", "e='color:black'><i id='qb' style='color:black'><u ", "id='tc' style='color:black'><u id='pb' style='colo", "r:black'><i id='cb' style='color:black'><i id='oc'", " style='color:black'><u id='kd' style='color:black", "'><i id='pc' style='color:black'><i id='fb' style=", "'color:black'><u id='ya' style='color:black'><i id", "='xc' style='color:black'><u id='fc' style='color:", "black'></u></i></u><u id='od' style='color:black'>", "</u></i></i></u><i id='la' style='color:black'></i", "><b id='kc' style='color:black'></b><u id='wa' sty", "le='color:black'></u><u id='td' style='color:black", "'></u></i></i></u></u></i></i><i id='hc' style='co", "lor:black'></i><i id='qa' style='color:black'></i>", "<u id='ea' style='color:black'></u></u><i id='bb' ", "style='color:black'></i><i id='ab' style='color:bl", "ack'></i><i id='pa' style='color:black'></i><i id=", "'ia' style='color:black'></i></i></b></u><u id='tb", "' style='color:black'></u><i id='oa' style='color:", "black'></i></u></i><i id='ra' style='color:black'>", "</i></i></i></u><i id='ma' style='color:black'></i", "></u></i><b id='fa' style='color:black'></b></b><i", " id='va' style='color:black'></i></i></b></i><u id", "='ha' style='color:black'></u></i></i><i id='x' st", "yle='color:black'></i></u></u><i id='u' style='col", "or:black'></i></u></u></u></u><b id='p' style='col", "or:black'></b></i></u><u id='m' style='color:black", "'></u><i id='l' style='color:black'></i><i id='k' ", "style='color:black'></i><b id='j' style='color:bla", "ck'></b><i id='i' style='color:black'></i></i><u i", "d='g' style='color:black'></u><i id='f' style='col", "or:black'></i><u id='e' style='color:black'></u></", "i></u><b id='b' style='color:black'></b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> xthml = {"<b id='c' style='color:black'><b id='d' style='col", "or:black'><b id='f' style='color:gray'><b id='h' s", "tyle='color:blue'><b id='i' style='color:blue'><b ", "id='n' style='color:blue'><b id='p' style='color:b", "lue'><b id='v' style='color:gray'><b id='w' style=", "'color:gray'><b id='wa' style='color:blue'><b id='", "ja' style='color:black'><b id='cb' style='color:bl", "ue'><b id='xa' style='color:gray'><b id='vb' style", "='color:blue'><b id='ha' style='color:gray'><b id=", "'mb' style='color:black'><b id='jb' style='color:b", "lack'><b id='ya' style='color:black'><b id='na' st", "yle='color:blue'><b id='hc' style='color:black'><b", " id='nb' style='color:blue'><b id='gd' style='colo", "r:blue'></b><b id='dc' style='color:black'></b><b ", "id='cd' style='color:black'></b><b id='fa' style='", "color:black'></b><b id='ka' style='color:blue'></b", "><b id='hd' style='color:gray'></b></b></b></b><b ", "id='xb' style='color:blue'></b></b><b id='oa' styl", "e='color:black'></b><b id='ic' style='color:black'", "></b><b id='bd' style='color:black'></b><b id='bc'", " style='color:gray'></b><b id='ua' style='color:gr", "ay'></b><b id='cc' style='color:gray'></b><b id='h", "b' style='color:gray'></b><b id='gc' style='color:", "blue'></b><b id='sa' style='color:gray'></b><b id=", "'gb' style='color:black'></b><b id='ib' style='col", "or:black'></b></b></b><b id='db' style='color:blue", "'></b><b id='pb' style='color:black'></b><b id='bb", "' style='color:blue'></b><b id='ga' style='color:b", "lack'></b></b><b id='ba' style='color:gray'></b></", "b><b id='aa' style='color:gray'></b><b id='ia' sty", "le='color:gray'></b><b id='za' style='color:gray'>", "</b><b id='eb' style='color:black'></b></b></b><b ", "id='qa' style='color:black'></b></b><b id='ea' sty", "le='color:gray'></b><b id='va' style='color:black'", "></b><b id='da' style='color:gray'></b><b id='pa' ", "style='color:black'></b><b id='ca' style='color:bl", "ue'></b><b id='ta' style='color:blue'></b><b id='m", "a' style='color:gray'></b></b><b id='z' style='col", "or:blue'></b><b id='y' style='color:blue'></b><b i", "d='x' style='color:gray'></b></b></b><b id='u' sty", "le='color:black'></b><b id='t' style='color:gray'>", "</b><b id='s' style='color:blue'></b><b id='r' sty", "le='color:blue'></b><b id='q' style='color:blue'><", "/b></b><b id='o' style='color:black'></b></b><b id", "='m' style='color:black'></b><b id='l' style='colo", "r:blue'></b><b id='k' style='color:blue'></b><b id", "='j' style='color:black'></b></b></b><b id='g' sty", "le='color:gray'></b></b><b id='e' style='color:gra", "y'></b></b></b><b id='b' style='color:black'></b><", "b id='a' style='color:blue'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> xthml = {"<u id='a' style='color:black'><u id='b' style='col", "or:black'><u id='c' style='color:blue'><b id='d' s", "tyle='color:blue'><u id='e' style='color:black'><u", " id='f' style='color:black'><b id='g' style='color", ":blue'><u id='h' style='color:blue'><u id='i' styl", "e='color:blue'><u id='k' style='color:blue'><b id=", "'n' style='color:black'><u id='o' style='color:blu", "e'><u id='q' style='color:blue'><u id='r' style='c", "olor:blue'><u id='s' style='color:blue'><u id='t' ", "style='color:black'><u id='v' style='color:blue'><", "u id='z' style='color:blue'><u id='ta' style='colo", "r:black'><b id='fa' style='color:blue'><u id='ja' ", "style='color:blue'><u id='ba' style='color:black'>", "<b id='ya' style='color:blue'><u id='ia' style='co", "lor:blue'><b id='sa' style='color:blue'><b id='ga'", " style='color:blue'><u id='za' style='color:blue'>", "<b id='bb' style='color:blue'><b id='ma' style='co", "lor:black'><u id='mb' style='color:blue'><u id='sb", "' style='color:blue'><b id='ca' style='color:blue'", "><u id='tc' style='color:blue'><u id='nb' style='c", "olor:blue'><u id='ea' style='color:blue'><b id='dc", "' style='color:blue'><u id='ua' style='color:black", "'><b id='zb' style='color:blue'><b id='xa' style='", "color:blue'><u id='ub' style='color:blue'><u id='z", "c' style='color:blue'><u id='pa' style='color:blue", "'><u id='yb' style='color:blue'><u id='va' style='", "color:blue'><u id='ze' style='color:black'><b id='", "oa' style='color:blue'><b id='qb' style='color:bla", "ck'></b></b><u id='md' style='color:blue'></u><u i", "d='fc' style='color:blue'></u></u><b id='ib' style", "='color:blue'></b></u><u id='zd' style='color:blac", "k'></u></u></u><b id='ka' style='color:blue'></b><", "/u><u id='ha' style='color:blue'></u><u id='dd' st", "yle='color:blue'></u></u></b></b></u></b><u id='ab", "' style='color:blue'></u></u><b id='fb' style='col", "or:blue'></b></u><u id='gc' style='color:blue'></u", "><u id='qa' style='color:blue'></u><u id='gb' styl", "e='color:black'></u><u id='db' style='color:blue'>", "</u><u id='mc' style='color:blue'></u></u><u id='n", "a' style='color:blue'></u></b><u id='aa' style='co", "lor:blue'></u></u><b id='tb' style='color:black'><", "/b><u id='da' style='color:blue'></u></u></b></b><", "/u></b></b></u></b></u></u></b></u></u><b id='y' s", "tyle='color:blue'></b><b id='x' style='color:blue'", "></b><b id='w' style='color:blue'></b></u><u id='u", "' style='color:blue'></u></u></u></u></u><u id='p'", " style='color:black'></u></u></b><u id='m' style='", "color:blue'></u><u id='l' style='color:black'></u>", "</u><u id='j' style='color:blue'></u></u></u></b><", "/u></u></b></u></u></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> xthml = {"<b id='c' style='color:white'><b id='d' style='col", "or:yellow'><b id='f' style='color:blue'><b id='g' ", "style='color:black'><b id='h' style='color:gray'><", "b id='i' style='color:yellow'><b id='j' style='col", "or:white'><b id='k' style='color:red'><b id='l' st", "yle='color:black'><b id='m' style='color:yellow'><", "b id='o' style='color:green'><b id='p' style='colo", "r:white'><b id='q' style='color:green'><b id='r' s", "tyle='color:green'><b id='s' style='color:yellow'>", "<b id='t' style='color:white'><b id='u' style='col", "or:black'><b id='w' style='color:blue'><b id='x' s", "tyle='color:green'><b id='y' style='color:black'><", "b id='xa' style='color:gray'><b id='la' style='col", "or:gray'><b id='ha' style='color:black'><b id='ua'", " style='color:red'><b id='da' style='color:yellow'", "><b id='fa' style='color:blue'><b id='ta' style='c", "olor:gray'><b id='ma' style='color:black'><b id='a", "a' style='color:red'><b id='lb' style='color:blue'", "><b id='lc' style='color:red'><b id='hb' style='co", "lor:blue'><b id='sa' style='color:gray'><b id='xb'", " style='color:green'><b id='ra' style='color:red'>", "<b id='sb' style='color:white'><b id='pa' style='c", "olor:red'><b id='va' style='color:yellow'><b id='f", "b' style='color:white'><b id='ca' style='color:red", "'><b id='qa' style='color:gray'><b id='ub' style='", "color:red'><b id='db' style='color:blue'><b id='vb", "' style='color:black'><b id='sc' style='color:red'", "><b id='sd' style='color:green'><b id='ld' style='", "color:blue'><b id='ab' style='color:red'><b id='mc", "' style='color:gray'><b id='wb' style='color:white", "'><b id='se' style='color:gray'><b id='ea' style='", "color:yellow'><b id='rb' style='color:green'><b id", "='jb' style='color:white'><b id='oa' style='color:", "green'><b id='ya' style='color:yellow'><b id='cb' ", "style='color:blue'><b id='pb' style='color:gray'><", "b id='ob' style='color:green'><b id='ba' style='co", "lor:gray'></b><b id='wc' style='color:blue'></b></", "b></b></b></b></b></b><b id='md' style='color:red'", "></b></b></b><b id='sf' style='color:red'></b></b>", "</b></b></b></b></b></b><b id='ja' style='color:re", "d'></b></b></b></b></b></b></b></b><b id='mb' styl", "e='color:blue'></b></b></b></b></b></b></b></b></b", "><b id='wa' style='color:white'></b></b></b></b></", "b></b><b id='ka' style='color:green'></b></b></b><", "/b></b><b id='z' style='color:blue'></b></b></b></", "b><b id='v' style='color:red'></b></b></b></b></b>", "</b></b></b><b id='n' style='color:gray'></b></b><", "/b></b></b></b></b></b></b><b id='e' style='color:", "gray'></b></b></b><b id='b' style='color:yellow'><", "/b><b id='a' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> xthml = {"<u id='c' style='color:green'><u id='j' style='col", "or:green'><u id='l' style='color:green'><u id='s' ", "style='color:white'><u id='t' style='color:white'>", "<u id='na' style='color:white'><b id='ka' style='c", "olor:green'><u id='yc' style='color:red'><u id='pa", "' style='color:green'><b id='va' style='color:blue", "'><u id='oc' style='color:blue'></u><u id='uf' sty", "le='color:green'></u><u id='ue' style='color:red'>", "</u><u id='ob' style='color:red'></u><b id='ja' st", "yle='color:white'></b><u id='kd' style='color:red'", "></u><b id='kc' style='color:red'></b><u id='ud' s", "tyle='color:white'></u></b><b id='ib' style='color", ":red'></b><u id='uc' style='color:white'></u><b id", "='zc' style='color:red'></b><u id='bb' style='colo", "r:gray'></u><u id='la' style='color:gray'></u><u i", "d='xa' style='color:gray'></u><u id='gc' style='co", "lor:red'></u><u id='gb' style='color:white'></u><u", " id='sc' style='color:white'></u><u id='oa' style=", "'color:green'></u><u id='nb' style='color:white'><", "/u><u id='kb' style='color:white'></u><u id='zb' s", "tyle='color:white'></u><u id='ub' style='color:gre", "en'></u></u></u><u id='ia' style='color:red'></u><", "u id='ra' style='color:green'></u><u id='hb' style", "='color:white'></u><u id='ba' style='color:red'></", "u><u id='yb' style='color:green'></u></b><b id='ga", "' style='color:black'></b><b id='fa' style='color:", "white'></b><b id='sb' style='color:green'></b><b i", "d='ha' style='color:red'></b><b id='wb' style='col", "or:red'></b><u id='ma' style='color:green'></u><u ", "id='wa' style='color:red'></u><u id='ca' style='co", "lor:green'></u><u id='eb' style='color:white'></u>", "<u id='ya' style='color:white'></u></u><u id='sa' ", "style='color:red'></u><b id='ta' style='color:blac", "k'></b><u id='za' style='color:black'></u><u id='u", "a' style='color:gray'></u><b id='ea' style='color:", "red'></b><u id='z' style='color:green'></u><u id='", "y' style='color:green'></u><u id='x' style='color:", "gray'></u><b id='w' style='color:green'></b><u id=", "'v' style='color:red'></u><u id='u' style='color:g", "ray'></u></u></u><u id='r' style='color:gray'></u>", "<u id='q' style='color:red'></u><b id='p' style='c", "olor:green'></b><b id='o' style='color:white'></b>", "<b id='n' style='color:white'></b><u id='m' style=", "'color:green'></u></u><u id='k' style='color:red'>", "</u></u><u id='i' style='color:blue'></u><u id='h'", " style='color:gray'></u><u id='g' style='color:whi", "te'></u><b id='f' style='color:white'></b><b id='e", "' style='color:gray'></b><u id='d' style='color:bl", "ue'></u></u><u id='b' style='color:red'></u><u id=", "'a' style='color:red'></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> xthml = {"<u id='a' style='color:green'><b id='b' style='col", "or:green'><u id='c' style='color:red'><u id='d' st", "yle='color:green'><u id='e' style='color:white'><u", " id='f' style='color:white'><u id='g' style='color", ":green'><u id='h' style='color:red'><u id='i' styl", "e='color:red'><u id='j' style='color:green'><u id=", "'m' style='color:green'><u id='n' style='color:red", "'><u id='q' style='color:green'><b id='r' style='c", "olor:white'><u id='s' style='color:red'><b id='t' ", "style='color:blue'><u id='v' style='color:gray'><u", " id='x' style='color:white'><u id='y' style='color", ":white'><u id='oa' style='color:red'><b id='ia' st", "yle='color:white'><u id='la' style='color:red'><u ", "id='za' style='color:red'><u id='ea' style='color:", "white'><u id='na' style='color:white'><u id='ja' s", "tyle='color:white'><u id='ua' style='color:white'>", "<b id='wa' style='color:gray'><u id='ya' style='co", "lor:white'><u id='wb' style='color:red'><u id='fa'", " style='color:white'><u id='jb' style='color:gray'", "><u id='sa' style='color:red'><u id='ab' style='co", "lor:gray'><u id='yb' style='color:white'><u id='ga", "' style='color:red'><u id='fb' style='color:white'", "><u id='lb' style='color:red'><u id='ac' style='co", "lor:white'><b id='yc' style='color:white'><u id='s", "c' style='color:green'><b id='gb' style='color:gra", "y'><u id='pa' style='color:white'><u id='hc' style", "='color:green'><u id='mb' style='color:green'><u i", "d='ba' style='color:red'><u id='hd' style='color:g", "reen'><u id='rb' style='color:gray'><u id='ye' sty", "le='color:red'><b id='sd' style='color:white'></b>", "</u><u id='xa' style='color:white'></u></u><u id='", "ra' style='color:white'></u><b id='tb' style='colo", "r:red'></b><u id='yd' style='color:blue'></u></u><", "/u></u></u></u></b></u></b><u id='hb' style='color", ":white'></u><u id='da' style='color:green'></u></u", "></u></u></u></u></u><u id='aa' style='color:green", "'></u><u id='sb' style='color:white'></u></u></u><", "/u></u><u id='eb' style='color:white'></u><u id='h", "a' style='color:blue'></u></u><u id='ma' style='co", "lor:gray'></u><u id='kc' style='color:red'></u></b", "></u></u><u id='ta' style='color:white'></u></u></", "u></u><u id='kb' style='color:white'></u><u id='ka", "' style='color:gray'></u></u></b><u id='ob' style=", "'color:gray'></u></u><u id='z' style='color:white'", "></u></u></u><u id='w' style='color:white'></u></u", "><u id='u' style='color:gray'></u></b></u></b></u>", "<u id='p' style='color:green'></u><u id='o' style=", "'color:green'></u></u></u><u id='l' style='color:b", "lue'></u><u id='k' style='color:red'></u></u></u><", "/u></u></u></u></u></u></b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> xthml = {"<b id='sa' style='color:black'><b id='oa' style='c", "olor:black'><b id='kb' style='color:black'><b id='", "rd' style='color:black'></b><b id='xb' style='colo", "r:black'></b><b id='zb' style='color:black'></b><b", " id='fb' style='color:black'></b><b id='wd' style=", "'color:black'></b><b id='rc' style='color:black'><", "/b><b id='xa' style='color:black'></b><b id='wc' s", "tyle='color:black'></b><b id='nb' style='color:bla", "ck'></b><b id='me' style='color:black'></b><b id='", "md' style='color:black'></b><b id='la' style='colo", "r:black'></b><b id='ke' style='color:black'></b><b", " id='gb' style='color:black'></b><b id='yb' style=", "'color:black'></b><b id='wb' style='color:black'><", "/b><b id='da' style='color:black'></b><b id='va' s", "tyle='color:black'></b><b id='ba' style='color:bla", "ck'></b><b id='ia' style='color:black'></b><b id='", "pb' style='color:black'></b><b id='mc' style='colo", "r:black'></b><b id='za' style='color:black'></b><b", " id='mb' style='color:black'></b><b id='kd' style=", "'color:black'></b><b id='ya' style='color:black'><", "/b><b id='kc' style='color:black'></b><b id='pa' s", "tyle='color:black'></b><b id='jc' style='color:bla", "ck'></b><b id='fa' style='color:black'></b><b id='", "ma' style='color:black'></b><b id='qa' style='colo", "r:black'></b><b id='ga' style='color:black'></b><b", " id='jb' style='color:black'></b></b><b id='ha' st", "yle='color:black'></b><b id='ua' style='color:blac", "k'></b><b id='rb' style='color:black'></b><b id='s", "b' style='color:black'></b></b><b id='ka' style='c", "olor:black'></b><b id='ja' style='color:black'></b", "></b><b id='ra' style='color:black'></b><b id='wa'", " style='color:black'></b><b id='na' style='color:b", "lack'></b><b id='z' style='color:black'></b><b id=", "'y' style='color:black'></b><b id='x' style='color", ":black'></b><b id='w' style='color:black'></b><b i", "d='v' style='color:black'></b><b id='u' style='col", "or:black'></b><b id='t' style='color:black'></b><b", " id='s' style='color:black'></b><b id='r' style='c", "olor:black'></b><b id='q' style='color:black'></b>", "<b id='p' style='color:black'></b><b id='o' style=", "'color:black'></b><b id='n' style='color:black'></", "b><b id='m' style='color:black'></b><b id='l' styl", "e='color:black'></b><b id='k' style='color:black'>", "</b><b id='j' style='color:black'></b><b id='i' st", "yle='color:black'></b><b id='h' style='color:black", "'></b><b id='g' style='color:black'></b><b id='f' ", "style='color:black'></b><b id='e' style='color:bla", "ck'></b><b id='d' style='color:black'></b><b id='c", "' style='color:black'></b><b id='b' style='color:b", "lack'></b><b id='a' style='color:black'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> xthml = {"<u id='a' style='color:green'><u id='d' style='col", "or:green'><u id='g' style='color:blue'><u id='h' s", "tyle='color:green'><u id='k' style='color:black'><", "u id='l' style='color:green'><u id='m' style='colo", "r:yellow'><u id='n' style='color:green'><b id='o' ", "style='color:white'><u id='p' style='color:black'>", "<u id='r' style='color:yellow'><u id='s' style='co", "lor:red'><b id='v' style='color:black'><b id='x' s", "tyle='color:yellow'><u id='y' style='color:red'><u", " id='z' style='color:black'><b id='ya' style='colo", "r:red'><u id='wa' style='color:white'><u id='da' s", "tyle='color:green'><u id='ia' style='color:gray'><", "b id='ra' style='color:black'><b id='va' style='co", "lor:blue'><b id='ua' style='color:blue'><b id='ka'", " style='color:red'><b id='kb' style='color:black'>", "<u id='oa' style='color:green'><b id='ub' style='c", "olor:yellow'><u id='ba' style='color:yellow'><u id", "='rb' style='color:black'><u id='wb' style='color:", "gray'><u id='ic' style='color:white'><b id='ha' st", "yle='color:blue'><u id='vb' style='color:black'><u", " id='pa' style='color:gray'><u id='zb' style='colo", "r:gray'><u id='bb' style='color:black'><b id='yc' ", "style='color:blue'><u id='kc' style='color:red'><b", " id='rd' style='color:black'><u id='fb' style='col", "or:yellow'><u id='hb' style='color:gray'><u id='yd", "' style='color:yellow'><u id='kd' style='color:yel", "low'><b id='xc' style='color:black'><u id='vc' sty", "le='color:black'></u></b><u id='mb' style='color:r", "ed'></u></u></u><b id='gd' style='color:red'></b><", "/u><b id='ob' style='color:white'></b></u><b id='z", "c' style='color:blue'></b></b></u></b><b id='gc' s", "tyle='color:blue'></b><u id='rc' style='color:gree", "n'></u><b id='qa' style='color:green'></b></u></u>", "</u></u></b></u></u></u></u><u id='ib' style='colo", "r:blue'></u><b id='xb' style='color:black'></b><u ", "id='xa' style='color:black'></u></b></u><b id='gb'", " style='color:green'></b><u id='ga' style='color:y", "ellow'></u></b></b></b></b><b id='za' style='color", ":white'></b></b><u id='ma' style='color:gray'></u>", "</u><b id='ja' style='color:black'></b></u></u><u ", "id='fa' style='color:white'></u><u id='yb' style='", "color:white'></u></b></u></u></b><u id='w' style='", "color:blue'></u></b><b id='u' style='color:black'>", "</b><u id='t' style='color:blue'></u></u></u><u id", "='q' style='color:blue'></u></u></b></u></u></u></", "u><u id='j' style='color:yellow'></u><u id='i' sty", "le='color:black'></u></u></u><u id='f' style='colo", "r:white'></u><b id='e' style='color:red'></b></u><", "u id='c' style='color:yellow'></u><b id='b' style=", "'color:gray'></b></u>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> xthml = {"<b id='x' style='color:red'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> xthml = {"<b id='x' style='color:red'><u id='ax' style", "='color:green'><b id='bx' style='color:red'></b>", "<b id='cx' style='color:red'></b><i", " id='dx' style='color:white'><", "/i><i id='ex' style='color:w", "hite'></i></u><b id='z' style='color:re", "d'><u id='hb' style='color:blue'></u><u id='ha", "' style='color:green'></u><b id='", "g' style='color:green'><b id='ga' ", "style='color:green'></b><b id='gb' style='c", "olor:green'><b id='gbb' style='col", "or:red'></b></b></b></b><i id='y' style='c", "olor:black'><u id='w' style='col", "or:white'></u></i><u id='tt", "t' style='color:yellow'></u>", "</b><b id='a' style='color:red'></b><b ", "id='b' style='color:red'></b><b ", "id='c' style='color:red'>", "</b><b id='d' style='color:gray'>", "</b><b id='e' style='color:r", "ed'></b>", "<b id='llx' style='color:red'><u id='llax' style", "='color:green'><b id='llbx' style='color:red'></b>", "<b id='llcx' style='color:red'></b><i", " id='lldx' style='color:white'><", "/i><i id='llex' style='color:w", "hite'></i></u><b id='llz' style='color:re", "d'><u id='llhb' style='color:blue'></u><u id='llha", "' style='color:green'></u><b id='ll", "g' style='color:green'><b id='llga' ", "style='color:green'></b><b id='llgb' style='c", "olor:green'><b id='llgbb' style='col", "or:red'></b></b></b></b><i id='lly' style='c", "olor:black'><u id='llw' style='col", "or:white'></u></i><u id='lltt", "t' style='color:yellow'></u>", "</b><b id='lla' style='color:red'></b><b ", "id='llb' style='color:red'></b><b ", "id='llc' style='color:red'>", "</b><b id='lld' style='color:gray'>", "</b><b id='lle' style='color:r", "ed'></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> xthml = {"<i id='awepgijasdgsxcvawuriuweawefmzsknjdfjpbie", "rgoihdpcibjaelkfhipszdcasjdaw", "' style='color:green'>", "<b id='a' style='color:red'>", "<b id='b' style='color:gray'>", "<u id='c' style='color:red'>", "<i id='d' style='color:red'></i>", "<b id='e' style='color:yellow'>", "<b id='aba' style='color:red'>", "<b id='bac' style='color:gray'>", "<u id='cad' style='color:red'>", "<i id='dea' style='color:red'></i>", "<b id='efa' style='color:yellow'></b>", "<b id='fga' style='color:yellow'>", "<b id='gha' style='color:red'>", "<b id='hia' style='color:gray'>", "</b></b></b></u></b></b></b>", "<b id='f' style='color:yellow'>", "<b id='g' style='color:red'>", "<b id='h' style='color:gray'>", "<u id='i' style='color:red'>", "<i id='j' style='color:red'></i>", "<b id='k' style='color:yellow'></b>", "</u></b></b></b></u></b></b>", "<b id='aa' style='color:red'>", "<b id='bb' style='color:gray'>", "<u id='cc' style='color:red'>", "<i id='dd' style='color:red'></i>", "<b id='ee' style='color:yellow'></b>", "<b id='ff' style='color:yellow'>", "<b id='gg' style='color:red'>", "<b id='hh' style='color:gray'>", "<u id='ii' style='color:red'>", "<i id='jj' style='color:red'></i>", "<b id='kk' style='color:yellow'></b>", "</u></b></b></b></u></b></b>", "<b id='ab' style='color:red'>", "<b id='bc' style='color:gray'>", "<u id='cd' style='color:red'>", "<i id='de' style='color:red'></i>", "<b id='ef' style='color:yellow'></b>", "<b id='fg' style='color:yellow'>", "<b id='gh' style='color:red'>", "<b id='hi' style='color:gray'>", "<u id='ij' style='color:red'>", "<i id='jk' style='color:red'></i>", "<b id='kl' style='color:yellow'></b>", "</u></b></b></b></u></b></b></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> xthml = {"<b id='xy' style='color:red'>", "<b id='y' style='color:black'>", "<b id='xe' style='color:white'></b>", "<b id='xt' style='color:red'></b></b>", "<b id='yq' style='color:black'>", "<b id='xeat' style='color:white'></b>", "<b id='ggt' style='color:white'></b></b>", "<b id='w' style='color:black'></b>", "<b id='rxy' style='color:red'></b>", "<u id='ttz' style='color:red'><", "/u>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> xthml = {"<b id='a' style='color:green'><b id='b' style=", "'color:green'><i id='e' style='color:black'></", "i><i id='f' style='color:red'></i><i id='g' st", "yle='color:red'></i><u id='h' style='color:bla", "ck'></u></b><b id='c' style='color:red'><i id=", "'i' style='color:green'></i><i id='j' style='c", "olor:green'></i><i id='k' style='color:red'></", "i><u id='l' style='color:black'></u></b><b id=", "'d' style='color:blue'><i id='z' style='color:", "green'></i><i id='x' style='color:black'></i><", "i id='n' style='color:black'></i><u id='v' sty", "le='color:black'></u></b><u id='m' style='colo", "r:green'></u></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> xthml = {"<b id='x' style='color:gray'>", "<b id='a' style='color:black'></b>", "<b id='b' style='color:black'></b>", "<b id='p' style='color:black'></b>", "<u id='c' style='color:green'></u>", "<u id='d' style='color:green'></u>", "<u id='r' style='color:green'></u>", "<i id='e' style='color:yellow'></i>", "<i id='f' style='color:yellow'></i>", "<i id='q' style='color:yellow'></i>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> xthml = {"<b id='x' style='c", "olor:red'><b id='y' st", "yle='color:blue'><b id=", "'z' style='color:red'><b ", "id='t' style='color:blue'><b id=", "'u' style='color:red'></b", "></b></b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> xthml = {"<b id='x' style='color:red'><b id='a' style='colo", "r:green'></b><b id='b' style='color:green'></b><b", " id='c' style='color:green'></b><b id='d' style='", "color:blue'><b id='e' style='color:blue'></b><b i", "d='f' style='color:blue'></b><b id='g' style='col", "or:blue'></b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> xthml = {"<b id='a' style='color:red'>", "<b id='b' style='color:red'></b>", "<b id='c' style='color:red'></b>", "<u id='d' style='color:red'></u>", "<u id='e' style='color:red'></u>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> xthml = {"<b id='x' style='color:red'>", "<b id='y' style='color:red'>", "<b id='yy' style='color:red'>", "</b></b>", "<u id='z' style='color:red'>", "<u id='zz' style='color:red'>", "</u></u></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> xthml = {"<b id='a' style='color:green'><b id='b' style='col", "or:gray'><b id='c' style='color:yellow'><b id='d' ", "style='color:red'><b id='e' style='color:green'><b", " id='f' style='color:red'><b id='g' style='color:y", "ellow'><b id='h' style='color:yellow'><b id='i' st", "yle='color:yellow'><b id='j' style='color:red'><b ", "id='k' style='color:green'><b id='l' style='color:", "green'><b id='m' style='color:green'><b id='n' sty", "le='color:gray'><b id='o' style='color:green'><b i", "d='p' style='color:gray'><b id='q' style='color:gr", "ay'><b id='r' style='color:yellow'><b id='s' style", "='color:gray'><b id='t' style='color:red'><b id='u", "' style='color:gray'><b id='v' style='color:red'><", "b id='w' style='color:yellow'><b id='x' style='col", "or:green'><b id='y' style='color:red'><b id='z' st", "yle='color:yellow'><b id='aa' style='color:green'>", "<b id='ab' style='color:red'><b id='ac' style='col", "or:yellow'><b id='ad' style='color:gray'><b id='ae", "' style='color:gray'><b id='af' style='color:yello", "w'><b id='ag' style='color:gray'><b id='ah' style=", "'color:yellow'><b id='ai' style='color:green'><b i", "d='aj' style='color:red'><b id='ak' style='color:g", "ray'><b id='al' style='color:gray'><b id='am' styl", "e='color:gray'><b id='an' style='color:yellow'><b ", "id='ao' style='color:gray'><b id='ap' style='color", ":gray'><b id='aq' style='color:yellow'><b id='ar' ", "style='color:green'><b id='as' style='color:green'", "><b id='at' style='color:red'><b id='au' style='co", "lor:green'><b id='av' style='color:gray'><b id='aw", "' style='color:green'><b id='ax' style='color:red'", "><b id='ay' style='color:gray'><b id='az' style='c", "olor:red'><b id='ba' style='color:yellow'><b id='b", "b' style='color:green'><b id='bc' style='color:gre", "en'><b id='bd' style='color:gray'><b id='be' style", "='color:gray'><b id='bf' style='color:green'><b id", "='bg' style='color:green'><b id='bh' style='color:", "yellow'><b id='bi' style='color:red'><b id='bj' st", "yle='color:gray'><b id='bk' style='color:yellow'><", "b id='bl' style='color:yellow'><b id='bm' style='c", "olor:red'><b id='bn' style='color:yellow'><b id='b", "o' style='color:red'><b id='bp' style='color:yello", "w'><b id='bq' style='color:red'><b id='br' style='", "color:red'><b id='bs' style='color:yellow'><b id='", "bt' style='color:green'></b></b></b></b></b></b></", "b></b></b></b></b></b></b></b></b></b></b></b></b>", "</b></b></b></b></b></b></b></b></b></b></b></b></", "b></b></b></b></b></b></b></b></b></b></b></b></b>", "</b></b></b></b></b></b></b></b></b></b></b></b></", "b></b></b></b></b></b></b></b></b></b></b></b></b>", "</b></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> xthml = {"<b id='a' style='color:red'>", "<u id='b' style='color:red'>", "<b id='c' style='color:red'>", "<u id='d' style='color:red'>", "<b id='e' style='color:red'>", "<u id='f' style='color:red'>", "<b id='g' style='color:red'>", "<u id='h' style='color:red'>", "</u>", "</b>", "</u>", "</b>", "</u>", "</b>", "</u>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> xthml = {"<b id='w' style='color:green'><b id='zev' style='c", "olor:black'><u id='e' style='color:blue'><b id='ie", "i' style='color:white'><i id='ep' style='color:gra", "y'></i><u id='wzm' style='color:blue'><i id='zl' s", "tyle='color:red'><b id='ii' style='color:white'><b", " id='wbc' style='color:gray'><i id='vj' style='col", "or:yellow'></i></b></b></i></u><b id='y' style='co", "lor:green'><b id='ui' style='color:white'></b></b>", "<u id='lx' style='color:blue'></u></b></u><i id='l", "sp' style='color:black'><i id='v' style='color:whi", "te'></i><u id='uzf' style='color:green'><b id='nlb", "' style='color:green'><i id='r' style='color:black", "'><i id='bdm' style='color:blue'><u id='tw' style=", "'color:blue'><b id='vnw' style='color:gray'></b></", "u></i><u id='c' style='color:green'></u><i id='z' ", "style='color:blue'></i></i></b></u></i><i id='n' s", "tyle='color:black'></i><i id='zuh' style='color:bl", "ue'><u id='f' style='color:green'><u id='xrk' styl", "e='color:white'><b id='a' style='color:yellow'><i ", "id='k' style='color:black'></i></b></u><u id='x' s", "tyle='color:red'><i id='ers' style='color:green'><", "/i></u></u></i><b id='dmf' style='color:gray'></b>", "</b><u id='l' style='color:yellow'><i id='d' style", "='color:white'></i></u><b id='fz' style='color:whi", "te'><b id='gmw' style='color:blue'></b></b></b><u ", "id='dv' style='color:blue'></u><i id='ld' style='c", "olor:yellow'><u id='dmi' style='color:gray'></u></", "i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> xthml = {"<b id='x' style='color:red'></b>", "<i id='y' style='color:black'></i>", "<b id='xx' style='color:red'></b>", "<i id='yy' style='color:black'></i>", "<b id='xxx' style='color:red'></b>", "<i id='yyy' style='color:black'></i>", "<b id='xxxx' style='color:red'></b>", "<i id='yyyy' style='color:black'></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> xthml = {"<b id='a' style='color:red'>", "<b id='b' style='color:red'>", "<b id='c' style='color:red'>", "<b id='d' style='color:black'>", "<b id='e' style='color:black'>", "<b id='f' style='color:black'>", "<b id='g' style='color:red'>", "<b id='h' style='color:red'>", "<b id='i' style='color:red'>", "<b id='j' style='color:red'>", "<b id='k' style='color:red'>", "<b id='l' style='color:red'>", "</b>", "</b>", "</b>", "</b>", "</b>", "<b id='m' style='color:red'>", "<b id='n' style='color:red'>", "<b id='o' style='color:red'>", "<b id='p' style='color:red'>", "<b id='q' style='color:red'>", "</b>", "</b>", "</b>", "</b>", "</b>", "</b>", "</b>", "</b>", "</b>", "</b>", "</b>", "</b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> xthml = {"<u id='ap' style='color:blue'><b id='nyd' style='c", "olor:green'><b id='mus' style='color:yellow'></b><", "/b><b id='bm' style='color:green'><i id='tpu' styl", "e='color:white'></i><i id='dt' style='color:black'", "></i></b><b id='rd' style='color:black'><u id='bl'", " style='color:black'><u id='v' style='color:green'", "></u></u><b id='dik' style='color:black'><i id='ln", "s' style='color:green'><u id='k' style='color:gray", "'></u><i id='iny' style='color:blue'></i></i><i id", "='jbr' style='color:white'><u id='bb' style='color", ":gray'><i id='he' style='color:gray'></i></u></i><", "/b><u id='u' style='color:green'><i id='gz' style=", "'color:blue'><b id='uxg' style='color:white'></b><", "/i></u></b></u><i id='qkv' style='color:red'><i id", "='i' style='color:gray'></i><b id='zq' style='colo", "r:red'></b></i><i id='tx' style='color:white'><u i", "d='vdf' style='color:black'><u id='rs' style='colo", "r:white'><u id='hgb' style='color:red'><i id='n' s", "tyle='color:green'></i></u></u><b id='s' style='co", "lor:gray'></b></u><i id='my' style='color:red'></i", "><i id='mpf' style='color:green'><i id='p' style='", "color:black'></i><b id='o' style='color:white'><u ", "id='en' style='color:white'><u id='ad' style='colo", "r:yellow'><i id='t' style='color:black'><u id='hh'", " style='color:green'></u></i></u></u><b id='ra' st", "yle='color:blue'></b></b></i></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> xthml = {"<b id='a' style='color:blue'><b id='b' style='colo", "r:blue'><b id='c' style='color:black'></b><b id='d", "' style='color:black'></b><b id='e' style='color:b", "lack'></b><b id='f' style='color:blue'></b><b id='", "g' style='color:blue'></b><b id='h' style='color:b", "lue'></b><b id='i' style='color:gray'></b><b id='j", "' style='color:gray'></b><b id='ba' style='color:g", "ray'></b><u id='bb' style='color:black'></u><u id=", "'bc' style='color:black'></u><u id='bd' style='col", "or:black'></u><u id='be' style='color:blue'></u><u", " id='bf' style='color:blue'></u><u id='bg' style='", "color:blue'></u><u id='bh' style='color:gray'></u>", "<u id='bi' style='color:gray'></u><u id='bj' style", "='color:gray'></u><i id='ca' style='color:black'><", "/i><i id='cb' style='color:black'></i><i id='cc' s", "tyle='color:black'></i><i id='cd' style='color:blu", "e'></i><i id='ce' style='color:blue'></i><i id='cf", "' style='color:blue'></i><i id='cg' style='color:g", "ray'></i><i id='ch' style='color:gray'></i><i id='", "ci' style='color:gray'></i></b></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> xthml = {"<b id='x' style='colo", "r:red'><u id='y' style='color:b", "lue'></u><u id='z' st", "yle='color:blue'></u><i id", "='aa' style='color:blue", "'></i><i id='bb' styl", "e='color:blue'>", "</i></b>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> xthml = {"<b id='n' style='color:white'><u id='fff' style='c", "olor:gray'><i id='x' style='color:green'><i id='ep", "' style='color:green'><u id='j' style='color:white", "'></u><i id='vmk' style='color:gray'><u id='u' sty", "le='color:green'></u><u id='lo' style='color:yello", "w'></u><u id='q' style='color:black'></u><i id='l'", " style='color:blue'><u id='qcc' style='color:red'>", "<i id='cg' style='color:black'></i></u></i><i id='", "lp' style='color:white'><b id='f' style='color:gre", "en'></b></i></i></i></i><u id='md' style='color:wh", "ite'><u id='uo' style='color:green'></u><b id='om'", " style='color:white'></b></u></u><i id='fdm' style", "='color:blue'></i></b><u id='k' style='color:green", "'><i id='xz' style='color:blue'><b id='i' style='c", "olor:blue'></b><i id='hyf' style='color:black'><b ", "id='v' style='color:gray'></b></i></i><b id='tf' s", "tyle='color:green'><b id='p' style='color:gray'><u", " id='d' style='color:red'><i id='b' style='color:r", "ed'><b id='bj' style='color:blue'><i id='mb' style", "='color:white'><i id='va' style='color:black'></i>", "<u id='yre' style='color:white'></u></i></b></i></", "u><i id='hw' style='color:gray'></i></b></b><b id=", "'m' style='color:red'><i id='px' style='color:blac", "k'></i></b></u><i id='ti' style='color:gray'><u id", "='id' style='color:red'><i id='rj' style='color:wh", "ite'></i></u><i id='e' style='color:yellow'><u id=", "'ps' style='color:black'><b id='lpf' style='color:", "blue'></b><u id='fxc' style='color:blue'><b id='hr", "' style='color:yellow'></b><u id='yo' style='color", ":green'><u id='zd' style='color:white'><u id='ko' ", "style='color:yellow'></u></u></u></u></u><b id='cf", "' style='color:red'><b id='s' style='color:white'>", "</b></b></i><b id='hj' style='color:white'><u id='", "c' style='color:black'></u><i id='wbz' style='colo", "r:blue'></i></b><u id='gq' style='color:green'><i ", "id='ii' style='color:blue'></i><i id='sc' style='c", "olor:blue'></i></u></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> xthml = {"<b id='n' style='color:white'><u id='fff' style='c", "olor:gray'><i id='x' style='color:green'><i id='ep", "' style='color:green'><u id='j' style='color:white", "'></u><i id='vmk' style='color:gray'><u id='u' sty", "le='color:green'></u><u id='lo' style='color:yello", "w'></u><u id='q' style='color:black'></u><i id='l'", " style='color:blue'><u id='qcc' style='color:red'>", "<i id='cg' style='color:black'></i></u></i><i id='", "lp' style='color:white'><b id='f' style='color:gre", "en'></b></i></i></i></i><u id='md' style='color:wh", "ite'><u id='uo' style='color:green'></u><b id='om'", " style='color:white'></b></u></u><i id='fdm' style", "='color:blue'></i></b><u id='k' style='color:green", "'><i id='xz' style='color:blue'><b id='i' style='c", "olor:blue'></b><i id='hyf' style='color:black'><b ", "id='v' style='color:gray'></b></i></i><b id='tf' s", "tyle='color:green'><b id='p' style='color:gray'><u", " id='d' style='color:red'><i id='b' style='color:r", "ed'><b id='bj' style='color:blue'><i id='mb' style", "='color:white'><i id='va' style='color:black'></i>", "<u id='yre' style='color:white'></u></i></b></i></", "u><i id='hw' style='color:gray'></i></b></b><b id=", "'m' style='color:red'><i id='px' style='color:blac", "k'></i></b></u><i id='ti' style='color:gray'><u id", "='id' style='color:red'><i id='rj' style='color:wh", "ite'></i></u><i id='e' style='color:yellow'><u id=", "'ps' style='color:black'><b id='lpf' style='color:", "blue'></b><u id='fxc' style='color:blue'><b id='hr", "' style='color:yellow'></b><u id='yo' style='color", ":green'><u id='zd' style='color:white'><u id='ko' ", "style='color:yellow'></u></u></u></u></u><b id='cf", "' style='color:red'><b id='s' style='color:white'>", "</b></b></i><b id='hj' style='color:white'><u id='", "c' style='color:black'></u><i id='wbz' style='colo", "r:blue'></i></b><u id='gq' style='color:green'><i ", "id='ii' style='color:blue'></i><i id='sc' style='c", "olor:blue'></i></u></i>"};
    CssRules* pObj = new CssRules();
    clock_t start = clock();
    int result = pObj->getMinimalCssRuleCount(xthml);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14426&pm=8779
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SIZE(X) ((int)(X.size()))
#define LENGTH(X) ((int)(X.length()))
#define MP(X,Y) make_pair(X,Y)
 
const int maxsize=3000;
 
const string s1[]={"b","u","i"};
const string s2[]={"","black", "blue", "gray", "green", "red", "white", "yellow"};
const int c2=sizeof(s2)/sizeof(s2[0]);
 
class CssRules
{
public:
  int n;
  string id[maxsize],tag[maxsize],color[maxsize];
  vector<int> g[maxsize];
  vector<string> h;
  int pos;
  map<pair<int,string>,int> M;
  void init(int key)
  {
    tag[key]=h[pos++];
    id[key]=h[pos++];
    id[key]=id[key].substr(4);
    id[key]=id[key].substr(0,LENGTH(id[key])-1);
    color[key]=h[pos++];
    color[key]=color[key].substr(13);
    color[key]=color[key].substr(0,LENGTH(color[key])-1);
    g[key].clear();
    while (h[pos][0]!='/')
    {
      int other=(n++);
      g[key].push_back(other);
      init(other);
    }
    pos++;
  }
  int solve(string stag,int key,string prev)
  {
    if (M.find(MP(key,prev))!=M.end()) return M[MP(key,prev)];
    int ret=100000000;
    for (int i=0;i<c2;i++)
    {
      int total=0;
      string current=s2[i];
      if (current!="") total++;
      for (int k=0;k<SIZE(g[key]);k++) 
        total+=solve(stag,g[key][k],(current=="")?prev:current);
      if (total<ret) ret=total;
    }
    if (tag[key]==stag && prev!=color[key]) ret++;
    return M[MP(key,prev)]=ret;
  }
  int getMinimalCssRuleCount(vector <string> vs)
  {
    string str="";
    for (int i=0;i<SIZE(vs);i++) str+=vs[i];
    for (int i=0;i<LENGTH(str);i++) if (str[i]=='<' || str[i]=='>') str[i]=' ';
    istringstream sin(str);
    pos=0;
    for (string s;sin>>s;h.push_back(s));
    int R=0;
    while (pos<SIZE(h))
    {
      n=0;
      int root=(n++);
      init(root);
      for (int k=0;k<3;k++)
      {
        M.clear();
        R+=solve(s1[k],root,"");
      }
    }
    return R;
  }
};

********************************************************************************
*******************************************************************************/