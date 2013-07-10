/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1911
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

class Hyphenated {
public:
    double avgLength(vector<string> lines);
};

double Hyphenated::avgLength(vector<string> lines) {
    double ret;
    return ret;
}


int test0() {
    vector<string> lines = {" now is the ex-", "ample. "};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.75;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> lines = {" now is the ex-", " ample. "};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> lines = {"inter-", "national-", "ization.."};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> lines = {"All the time I have well-defined ", " trouble."};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.125;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> lines = {"...-", "all...some-", "thing- ", " ", "b.i. .g"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> lines = {"a---", " ---", "a bc"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> lines = {"---", "---", "a bc"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> lines = {"a-", "b--", "c.-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> lines = {"-adssfssfsfsfsfssfsfs-", "b--", "c-", "-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> lines = {"-a-d-s-sfssfsfsfsfssfsfs-", "-b--", "c-", "-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6666666666666665;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> lines = {" ", " ", "a"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> lines = {"here are two-fold meaningsS."};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> lines = {"a-", "b-", "c-", "d-", "e-", "f-", " g-", "h."};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> lines = {"A fine sentence.", "A fine sentence", "-ending."};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.571428571428571;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> lines = {"-A -fine sentence.", "A fine sentence-", "-ending."};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.571428571428571;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> lines = {"hello-", "-", "-", "-", "great"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> lines = {"un-done-", "-", "abc-de--", "good", "-", "bad.person"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4285714285714284;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> lines = {"A-B", "C"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> lines = {"A", "B"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> lines = {"abc", "def", "abcdefg"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.333333333333333;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> lines = {" now is the ex-", "ample. "};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.75;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> lines = {"hello-", "-", "-", "-", "great"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> lines = {"-a-", "-- - - --", "-- -b-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> lines = {"AAA-", "-", "AAA"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> lines = {"A-B", "C"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> lines = {"a", "-", "ba"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> lines = {"hello.world"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> lines = {"a - h", "b -ff - - ff -", "- - -"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> lines = {". x"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> lines = {"apple", "apple"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> lines = {"All the time I have well-defined ", " trouble.", "-aaaaaaa-", "bbb -bb ---aaa"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.363636363636363;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> lines = {"help--", "me"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> lines = {"a - - -s -", "- ss - -s - sss -", "aaaaa -- - aa"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 2.142857142857143;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> lines = {"All the time I have well-defined ", " trouble.", "a-a-a-a-a-a aaaaaaaaa", "bbbbbbbb bbbbbbbbbbbb-", " cccccccccccccc"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.555555555555555;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> lines = {"hello-", "-", "-", "-", "great", "mazin", "ma-asdf-", "gfadsfga"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> lines = {"a b-c", "-", "b-", "c", "b-", "-c", "b-", "-c-", "d", " d-", "e ", "b", "c", "d"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> lines = {"asdf-bad", "asdf-bad-", "asdf bad", "asdf bad-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> lines = {"abc.def"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> lines = {"he-", "-", "-l", "n.i-", " s.da-", "-", "-sdml .-", " bla-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.875;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> lines = {"All the time I have well-defined ", " trouble.", "aaaaa aaaaaaaaaaaaaaaa-", "aacc c cccccccccccccccc", "-aaaaaaaaaaaaaaa ----", "a-a-a-a--a-a-a--a-a-a--a-a-a", "aaaaaaaaaaaa-", " bbbbbbbbbbb"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> lines = {"a", "b"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> lines = {"ab", "cd", "ef"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> lines = {"a.a"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> lines = {"a aa sss -- -", "a dasd aasa -", "aa aa -", "aaa ss"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> lines = {"a", "-", "b"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> lines = {"abi", "-", "abi"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> lines = {"All the time I have well-defined ", " trouble.", "aaaaaaaaaaaaaaa-aaaaaaaaaa", "aaaaaaaaaaaaa aaaaaaaaaa-", " cccccccccccccc", "asaa--a-a-a-a--a-a--a-a-a--a-a-a-a--a-a-a", "aaaaaa aaaaaaaaaaaa-", "a"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1875;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> lines = {"abc-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> lines = {"booo -", "weee"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> lines = {"a-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> lines = {"oxi", "foximotomox-"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> lines = {"aaa", "aaa", "aaa"};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> lines = {"All the time I have well-defined ", " trouble.", "a-a-a-a-a-a-", "--", "-", "-", "aaaaaaa-", " bbb bbb "};
    Hyphenated* pObj = new Hyphenated();
    clock_t start = clock();
    double result = pObj->avgLength(lines);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0588235294117645;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7210680&rd=5848&pm=1911
********************************************************************************
#line 85 "Hyphenated.cpp" 
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
 
using namespace std; 
 
class Hyphenated { 
  public: 
  double avgLength(vector <string> lines) { 
     
    int size = lines.size(); 
    int curword = 0; 
    int sum = 0; 
    int totcount = 0; 
    for (int i=0;i<size;i++) 
    { 
      int pos = 0; 
      while (lines[i][pos]) 
      { 
        if (lines[i][pos]=='-' && !lines[i][pos+1] && pos) goto end; 
 
        if ((lines[i][pos]>='A' && lines[i][pos]<='Z') 
          || 
          (lines[i][pos]>='a' && lines[i][pos]<='z')) 
        { 
          curword++; 
        } 
        else 
        { 
          sum += curword; 
          if (curword) totcount++; 
          curword = 0; 
        } 
 
end: 
        pos++; 
      } 
 
      if (pos && lines[i][pos-1]!='-') 
      { 
        sum += curword; 
        if (curword) totcount++; 
        curword = 0; 
      } 
    } 
 
    if (curword!=0) 
    { 
      sum += curword; 
      if (curword) totcount++; 
      curword = 0; 
    } 
 
    double answer = sum; 
    answer /= totcount; 
 
    return answer; 
  } 
 
   
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/