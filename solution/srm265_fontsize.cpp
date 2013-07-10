/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2000
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

class FontSize {
public:
    int getPixelWidth(string sentence, vector<int> uppercase, vector<int> lowercase);
};

int FontSize::getPixelWidth(string sentence, vector<int> uppercase, vector<int> lowercase) {
    int ret;
    return ret;
}


int test0() {
    string sentence = "Dead Beef";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sentence = "Hello World";
    vector<int> uppercase = {7, 8, 8, 8, 7, 8, 8, 8, 7, 8, 8, 8, 8, 8, 7, 8, 8, 8, 8, 8, 7, 8, 8, 8, 8, 8};
    vector<int> lowercase = {5, 6, 6, 6, 5, 6, 6, 6, 5, 6, 6, 6, 6, 6, 5, 6, 6, 6, 6, 6, 5, 6, 6, 6, 6, 6};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sentence = "Hello World";
    vector<int> uppercase = {7, 7, 7, 7, 7, 7, 7, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 9, 7, 7, 7};
    vector<int> lowercase = {5, 5, 5, 6, 6, 5, 5, 5, 5, 5, 5, 1, 5, 5, 6, 5, 5, 6, 5, 5, 5, 5, 5, 5, 5, 5};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sentence = "ThE qUiCk BrOwN fOx JuMpEd OvEr ThE lAzY dOg";
    vector<int> uppercase = {36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    vector<int> lowercase = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 778;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sentence = " WWW lll MMM iii ";
    vector<int> uppercase = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 36, 9, 9, 9, 9, 9, 9, 9, 9, 9, 36, 9, 9, 9};
    vector<int> lowercase = {9, 9, 9, 9, 9, 9, 9, 9, 1, 9, 9, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 293;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sentence = "two spaces";
    vector<int> uppercase = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sentence = "v ktiFKHL Yc GEo";
    vector<int> uppercase = {4, 27, 3, 34, 11, 6, 17, 22, 25, 28, 20, 3, 5, 18, 35, 35, 18, 11, 28, 30, 19, 15, 10, 3, 23, 2};
    vector<int> lowercase = {1, 11, 12, 11, 20, 16, 24, 22, 1, 11, 10, 11, 33, 12, 13, 31, 19, 16, 3, 14, 19, 6, 25, 14, 5, 21};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sentence = "dLwS SLSjxohiRMp VmEzDj gcZKRn ";
    vector<int> uppercase = {3, 1, 26, 21, 27, 23, 28, 6, 11, 9, 6, 29, 20, 31, 34, 26, 29, 36, 31, 23, 1, 1, 17, 30, 10, 31};
    vector<int> lowercase = {5, 25, 1, 17, 9, 25, 10, 28, 22, 15, 1, 28, 2, 16, 31, 36, 33, 9, 7, 17, 24, 13, 28, 3, 5, 7};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 602;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sentence = " Y S GC WkmQstWD MjpcG T";
    vector<int> uppercase = {16, 25, 34, 23, 18, 34, 17, 2, 8, 14, 21, 13, 18, 28, 2, 35, 36, 32, 17, 10, 18, 21, 15, 32, 21, 32};
    vector<int> lowercase = {8, 28, 16, 13, 6, 35, 31, 13, 31, 23, 12, 15, 16, 2, 8, 12, 14, 4, 16, 10, 19, 10, 9, 16, 35, 19};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 369;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sentence = " nQPH U QgiXiXKa xW dWK kDHSUm ute vV hr fR";
    vector<int> uppercase = {18, 14, 14, 15, 22, 29, 8, 34, 25, 30, 35, 13, 9, 9, 28, 5, 31, 16, 24, 35, 7, 2, 12, 14, 21, 33};
    vector<int> lowercase = {25, 1, 26, 24, 25, 4, 17, 7, 32, 15, 15, 19, 34, 28, 19, 21, 17, 33, 33, 15, 35, 31, 22, 28, 23, 31};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 797;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sentence = "i DBCHGZK jW KdZR V jj aGXpwnwTMdP iyxc";
    vector<int> uppercase = {17, 21, 6, 22, 29, 7, 20, 24, 28, 23, 17, 4, 27, 9, 29, 28, 33, 34, 11, 22, 31, 13, 10, 28, 35, 4};
    vector<int> lowercase = {23, 5, 1, 13, 20, 22, 21, 12, 12, 3, 22, 34, 3, 1, 11, 32, 29, 23, 11, 30, 16, 25, 1, 11, 7, 33};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 524;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sentence = "y akdY yNMa W t R yrXOTfXG";
    vector<int> uppercase = {15, 15, 8, 10, 30, 5, 14, 19, 34, 2, 6, 30, 1, 2, 25, 32, 2, 32, 20, 25, 25, 25, 16, 34, 4, 34};
    vector<int> lowercase = {8, 31, 33, 35, 6, 31, 2, 36, 11, 36, 5, 26, 26, 12, 28, 35, 35, 25, 32, 24, 21, 5, 19, 8, 8, 23};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 394;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sentence = "Nyx C k eHu ibScJWRgPcBa d NPbMxdjHlR z ";
    vector<int> uppercase = {25, 7, 35, 17, 8, 15, 13, 5, 1, 25, 7, 15, 4, 32, 16, 30, 19, 7, 34, 3, 16, 21, 32, 31, 17, 34};
    vector<int> lowercase = {2, 22, 30, 30, 7, 27, 30, 36, 30, 12, 3, 25, 15, 14, 36, 1, 36, 6, 36, 15, 16, 27, 25, 4, 29, 35};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 713;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sentence = "LDzBKVXUeyZ ziBfWho mXMqxDUICxuOp qmRC";
    vector<int> uppercase = {18, 1, 13, 27, 16, 26, 21, 14, 29, 21, 24, 1, 32, 6, 16, 8, 16, 20, 15, 12, 30, 17, 19, 7, 15, 31};
    vector<int> lowercase = {34, 11, 11, 19, 4, 9, 28, 36, 26, 8, 33, 24, 9, 8, 14, 32, 6, 6, 21, 22, 21, 36, 23, 4, 4, 3};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 581;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sentence = "uCqKSn nkk UdwzTrN af w Aly WsgiDaeZ WOVhO w";
    vector<int> uppercase = {31, 28, 23, 2, 23, 7, 19, 14, 21, 19, 6, 36, 15, 29, 3, 14, 26, 2, 17, 11, 12, 13, 27, 9, 29, 8};
    vector<int> lowercase = {19, 31, 32, 1, 11, 22, 14, 10, 16, 25, 9, 29, 19, 1, 22, 14, 18, 26, 1, 19, 4, 9, 18, 27, 31, 7};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sentence = " K o P HGxXN gAINhA C ";
    vector<int> uppercase = {33, 5, 15, 8, 26, 13, 28, 12, 24, 10, 27, 19, 4, 11, 11, 9, 17, 28, 18, 23, 10, 32, 30, 35, 19, 19};
    vector<int> lowercase = {3, 24, 4, 21, 1, 10, 16, 14, 25, 18, 17, 2, 14, 5, 6, 2, 27, 7, 10, 30, 24, 3, 23, 22, 18, 7};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 338;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sentence = "m pLF ifaR sRtsBk l";
    vector<int> uppercase = {5, 36, 17, 35, 12, 11, 22, 18, 27, 32, 11, 19, 2, 31, 20, 24, 17, 17, 2, 1, 28, 17, 6, 24, 25, 10};
    vector<int> lowercase = {23, 5, 8, 23, 12, 21, 20, 25, 24, 31, 29, 36, 1, 33, 21, 17, 28, 9, 5, 12, 11, 33, 11, 7, 29, 23};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sentence = "JgGu cWbRYOTtnOO WmRH hYAl ";
    vector<int> uppercase = {3, 9, 21, 2, 18, 2, 1, 33, 9, 33, 19, 12, 32, 28, 29, 35, 30, 36, 5, 20, 17, 7, 2, 29, 35, 31};
    vector<int> lowercase = {31, 12, 17, 33, 2, 12, 11, 9, 35, 20, 19, 16, 26, 11, 11, 36, 28, 22, 31, 17, 34, 33, 28, 25, 25, 12};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 514;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sentence = "omCXKYngA i aFBSD o R QzIXOSuKt gMqpKp";
    vector<int> uppercase = {26, 19, 35, 21, 2, 18, 9, 10, 14, 29, 8, 27, 28, 26, 8, 2, 33, 20, 3, 36, 31, 4, 9, 5, 1, 12};
    vector<int> lowercase = {24, 29, 15, 9, 20, 2, 15, 20, 19, 21, 30, 32, 26, 1, 7, 27, 12, 24, 33, 29, 7, 29, 8, 35, 30, 33};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 571;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sentence = "X kF vD ca ITh";
    vector<int> uppercase = {35, 16, 19, 10, 22, 20, 8, 11, 11, 29, 11, 17, 29, 30, 25, 10, 30, 23, 25, 3, 36, 13, 19, 36, 8, 32};
    vector<int> lowercase = {19, 2, 32, 20, 23, 3, 10, 36, 27, 22, 31, 32, 15, 1, 26, 20, 28, 1, 29, 15, 13, 13, 34, 6, 6, 4};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 244;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sentence = "Sx iONEoP UjhuctnnkY";
    vector<int> uppercase = {3, 23, 32, 1, 17, 4, 20, 2, 24, 21, 13, 2, 32, 31, 20, 16, 35, 9, 24, 15, 11, 31, 2, 13, 30, 4};
    vector<int> lowercase = {34, 8, 28, 26, 14, 7, 11, 7, 18, 36, 21, 1, 10, 35, 31, 19, 9, 7, 9, 27, 11, 4, 34, 12, 21, 11};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sentence = " LNjh o JQTl ";
    vector<int> uppercase = {35, 11, 13, 36, 3, 8, 8, 26, 5, 5, 30, 19, 10, 9, 19, 27, 8, 27, 20, 15, 2, 7, 27, 17, 17, 3};
    vector<int> lowercase = {27, 18, 16, 20, 33, 3, 3, 16, 15, 8, 10, 33, 25, 24, 28, 35, 10, 19, 33, 24, 24, 19, 29, 9, 32, 34};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sentence = "nQC H nqiwNc hZlD nX";
    vector<int> uppercase = {27, 30, 25, 27, 15, 35, 1, 32, 23, 30, 4, 33, 3, 12, 18, 9, 27, 36, 11, 29, 8, 28, 21, 5, 6, 34};
    vector<int> lowercase = {2, 32, 5, 19, 27, 23, 11, 7, 32, 9, 8, 27, 23, 2, 20, 27, 25, 18, 18, 30, 28, 34, 11, 5, 4, 30};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sentence = "aVYSurDCK oNkaKr wPA KpykOUi M";
    vector<int> uppercase = {26, 18, 25, 21, 13, 33, 15, 33, 17, 30, 14, 8, 36, 21, 6, 36, 13, 10, 22, 36, 4, 17, 8, 23, 34, 18};
    vector<int> lowercase = {30, 1, 6, 12, 3, 8, 2, 3, 36, 29, 13, 33, 25, 31, 17, 10, 27, 5, 4, 12, 9, 7, 24, 26, 12, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 543;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sentence = "OOw V fha zp BOsH CqLJEQbl gRoqMKseopeszNr";
    vector<int> uppercase = {36, 9, 35, 35, 33, 5, 31, 9, 15, 28, 19, 4, 8, 9, 32, 25, 36, 36, 1, 10, 16, 25, 1, 36, 7, 1};
    vector<int> lowercase = {28, 9, 14, 24, 29, 21, 22, 30, 33, 28, 2, 21, 14, 36, 13, 5, 18, 15, 29, 35, 31, 15, 18, 11, 24, 10};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 823;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sentence = " vKJMtl mLIPNpcl OpMW Xs GtRhBuuPbx";
    vector<int> uppercase = {24, 36, 35, 24, 12, 28, 23, 14, 21, 8, 6, 5, 4, 18, 18, 23, 13, 9, 10, 3, 31, 35, 29, 28, 16, 16};
    vector<int> lowercase = {11, 15, 8, 34, 8, 24, 18, 14, 16, 24, 1, 3, 20, 25, 9, 34, 2, 15, 24, 18, 3, 16, 12, 10, 22, 32};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 527;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sentence = "N pfersH vw jaaySrHF SUJR W AIm z EbaV";
    vector<int> uppercase = {23, 21, 21, 6, 22, 9, 13, 4, 19, 3, 21, 29, 26, 19, 14, 18, 4, 28, 32, 13, 2, 2, 26, 15, 9, 29};
    vector<int> lowercase = {16, 5, 9, 16, 13, 4, 19, 5, 3, 29, 1, 18, 10, 8, 11, 25, 6, 6, 8, 29, 21, 35, 12, 16, 33, 6};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 526;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sentence = "Tm mHXQVfYDyhNd fY d dlFTSg Wz n";
    vector<int> uppercase = {33, 6, 22, 18, 28, 20, 20, 20, 27, 36, 11, 9, 7, 1, 2, 10, 36, 26, 28, 32, 3, 20, 30, 31, 24, 7};
    vector<int> lowercase = {8, 30, 36, 22, 8, 21, 11, 2, 1, 14, 11, 2, 13, 27, 23, 16, 19, 29, 4, 2, 16, 34, 15, 20, 29, 1};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 575;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sentence = " mB aNh CONele";
    vector<int> uppercase = {24, 19, 20, 16, 19, 26, 11, 4, 23, 30, 5, 28, 6, 5, 8, 6, 2, 23, 13, 14, 5, 12, 17, 8, 7, 27};
    vector<int> lowercase = {10, 14, 30, 2, 36, 24, 26, 21, 9, 31, 31, 27, 10, 32, 32, 1, 8, 28, 26, 14, 8, 21, 10, 16, 11, 4};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sentence = " n wPyHp Aaaig yRtj gFZ f idIl ";
    vector<int> uppercase = {29, 21, 3, 31, 30, 24, 24, 25, 2, 17, 13, 25, 10, 3, 17, 17, 17, 17, 25, 19, 29, 23, 3, 7, 2, 28};
    vector<int> lowercase = {19, 18, 3, 19, 18, 13, 21, 15, 9, 35, 34, 13, 2, 8, 27, 1, 2, 21, 15, 25, 15, 17, 12, 23, 25, 19};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 478;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sentence = "LhQW XHVkDBwJCczVgKaLxRzUsEcgiln";
    vector<int> uppercase = {20, 3, 26, 23, 10, 17, 25, 24, 34, 24, 8, 17, 35, 14, 30, 36, 25, 20, 24, 35, 30, 28, 13, 20, 17, 8};
    vector<int> lowercase = {22, 2, 31, 31, 12, 35, 3, 34, 1, 4, 3, 5, 26, 32, 1, 31, 6, 3, 20, 36, 13, 18, 15, 7, 12, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 575;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sentence = " ";
    vector<int> uppercase = {33, 5, 15, 8, 26, 13, 28, 12, 24, 10, 27, 19, 4, 11, 11, 9, 17, 28, 18, 23, 10, 32, 30, 35, 19, 19};
    vector<int> lowercase = {33, 5, 15, 8, 26, 13, 28, 12, 24, 10, 27, 19, 4, 11, 11, 9, 17, 28, 18, 23, 10, 32, 30, 35, 19, 19};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sentence = "asdfjrijhirgjrgjroSDFGJOJSOJDOFJSODF";
    vector<int> uppercase = {34, 8, 28, 26, 14, 7, 11, 7, 18, 36, 21, 1, 10, 35, 31, 19, 9, 7, 9, 27, 11, 4, 34, 12, 21, 11};
    vector<int> lowercase = {34, 8, 28, 26, 14, 7, 11, 7, 18, 36, 21, 1, 10, 35, 31, 19, 9, 7, 9, 27, 11, 4, 34, 12, 21, 11};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sentence = "Dead Beef";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sentence = "D";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sentence = "ThE qUiCk BrOwN fOx JuMpEd OvEr ThE lAzY dOg";
    vector<int> uppercase = {36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    vector<int> lowercase = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 778;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sentence = " ";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sentence = "Dead Beef ";
    vector<int> uppercase = {5, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 6, 6, 6, 5, 6, 6, 6, 5, 6, 6, 6, 6, 6, 5, 6, 6, 6, 6, 6, 5, 6, 6, 6, 6, 6};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sentence = " ";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string sentence = "ABCDEFGHIJKLMNOPQRSTUVWYZabcdfghijklmopqrstuvwxyz ";
    vector<int> uppercase = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    vector<int> lowercase = {26, 25, 24, 23, 22, 21, 20, 18, 16, 14, 12, 11, 10, 9, 8, 6, 7, 5, 4, 3, 2, 1, 13, 15, 17, 19};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 699;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string sentence = " ";
    vector<int> uppercase = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> lowercase = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string sentence = " ";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string sentence = "two spaces between ";
    vector<int> uppercase = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string sentence = "ThE qUiCk BrOwN fEzzzd OzzzvEr TZZZ lAzY dOg";
    vector<int> uppercase = {36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    vector<int> lowercase = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 790;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string sentence = "ZZZZZ";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string sentence = "hello world is d u m b";
    vector<int> uppercase = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> lowercase = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string sentence = " ";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string sentence = "Aead Beef";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string sentence = " Hola pola ";
    vector<int> uppercase = {6, 6, 6, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {5, 5, 5, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string sentence = "AAAAAAA";
    vector<int> uppercase = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> lowercase = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    FontSize* pObj = new FontSize();
    clock_t start = clock();
    int result = pObj->getPixelWidth(sentence, uppercase, lowercase);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13284374&rd=8007&pm=2000
********************************************************************************
/*
*/
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cctype>
using namespace std;
struct FontSize 
{
  int getPixelWidth(string sentence, vector <int> uppercase, vector <int> lowercase) 
  {
 
    int count=0;
    int i=0;
    while(sentence[i]!='\0')
      {
  if(sentence[i]==' ')
    count+=4;
  else
    {
      if(sentence[i]>=97)
        count+=1+lowercase[sentence[i]-'a'];
      else
        count+=1+uppercase[sentence[i]-'A'];
    }
  i++;
      }
    count--;
    return count;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  }
    
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/