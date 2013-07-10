/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3446
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

class EqualSubstrings {
public:
    vector<string> getSubstrings(string str);
};

vector<string> EqualSubstrings::getSubstrings(string str) {
    vector<string> ret;
    return ret;
}


int test0() {
    string str = "aaabbb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaa", "bbb"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string str = "bbbaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbb", "aaa"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string str = "bbbbbb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbbbbb", ""};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string str = "aaaaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "aaaaaa"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string str = "abjlkbjalkbjaljsbljbalb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abjlkbjalkbjaljs", "bljbalb"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string str = "cccccccc";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cccccccc", ""};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string str = "abjabjabjabjabjabjabjabjabjabjabjabjabjabjabjabjab";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abjabjabjabjabjabjabjabja", "bjabjabjabjabjabjabjabjab"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string str = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", ""};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string str = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", ""};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string str = "ababababababababababababababababababababababababab";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ababababababababababababa", "babababababababababababab"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string str = "jnoidabjasodjbaoibjaobjaiobjoaijbnoijbbn";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jnoidabjasodjbaoibjaobj", "aiobjoaijbnoijbbn"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string str = "abjkabjakjbakbjalkbjlaejjebajb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abjkabjakjbak", "bjalkbjlaejjebajb"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string str = "jwoabijobijaoibjaobijeoaibjoia";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"jwoabijobijaoibj", "aobijeoaibjoia"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string str = "aiowbejowbbjowijboibjweoibjawojb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aiowbejowbbjowijboibjweoibj", "awojb"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string str = "awebwakbkababkabk";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"awebwakbka", "babkabk"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string str = "greatproblemset";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"greatpro", "blemset"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string str = "reallyterrific";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"re", "allyterrific"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string str = "axxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "axxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string str = "axxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"axxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "b"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string str = "a";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "a"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string str = "bbb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbb", ""};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string str = "xxxx";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxx", ""};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string str = "bab";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "b"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string str = "fazmlkfmlkfmqzlekjfmlsqdkjfmlsqekjfmzalefkjmldkjb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fazmlkfmlkfmqzlekjfmlsqdkjfmlsqekjfmz", "alefkjmldkjb"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string str = "aaaaaaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "aaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string str = "sdfsdfsdf";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sdfsdfsdf", ""};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string str = "aasdfbabb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aasdfb", "abb"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string str = "cccccccc";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cccccccc", ""};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string str = "abjlkbjalkbjaljsbljbalb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abjlkbjalkbjaljs", "bljbalb"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string str = "ddddddddddddddddddddddddda";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ddddddddddddddddddddddddd", "a"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string str = "z";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"z", ""};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string str = "aaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "aaaa"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string str = "fezfzeafcxpvoiuwxcvaazareeaaaaaaaaaaaaaaaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fezfze", "afcxpvoiuwxcvaazareeaaaaaaaaaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string str = "zzzzzzssssssssss";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zzzzzzssssssssss", ""};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string str = "bb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bb", ""};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string str = "a";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "a"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string str = "bbb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bbb", ""};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string str = "xxxx";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"xxxx", ""};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string str = "bab";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ba", "b"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string str = "fazmlkfmlkfmqzlekjfmlsqdkjfmlsqekjfmzalefkjmldkjb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fazmlkfmlkfmqzlekjfmlsqdkjfmlsqekjfmz", "alefkjmldkjb"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string str = "aaaaaaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "aaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string str = "sdfsdfsdf";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"sdfsdfsdf", ""};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string str = "aasdfbabb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aasdfb", "abb"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string str = "cccccccc";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"cccccccc", ""};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string str = "abjlkbjalkbjaljsbljbalb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"abjlkbjalkbjaljs", "bljbalb"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string str = "ddddddddddddddddddddddddda";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ddddddddddddddddddddddddd", "a"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string str = "z";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"z", ""};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string str = "aaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"", "aaaa"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string str = "fezfzeafcxpvoiuwxcvaazareeaaaaaaaaaaaaaaaaa";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"fezfze", "afcxpvoiuwxcvaazareeaaaaaaaaaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string str = "zzzzzzssssssssss";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"zzzzzzssssssssss", ""};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string str = "bb";
    EqualSubstrings* pObj = new EqualSubstrings();
    clock_t start = clock();
    vector<string> result = pObj->getSubstrings(str);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"bb", ""};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287073&rd=5867&pm=3446
********************************************************************************
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <numeric>
#include <set>
#include <vector>
 
using namespace std;
 
//Read directions before submitting
 
class EqualSubstrings
{
public:
  vector <string> getSubstrings(string str);
};
 
vector <string> EqualSubstrings::getSubstrings(string str)
{
  for(int i = str.length(); i >= 0; --i)
  {
    string x = str.substr(0, i);
    string y = str.substr(i, str.length()-i);
    if(count(x.begin(), x.end(), 'a') == count(y.begin(), y.end(), 'b') )
    {
      vector<string> returny;
      returny.push_back(x);
      returny.push_back(y);
      return returny;
    }
  }
  vector<string> returny;
  return returny;
}

********************************************************************************
*******************************************************************************/