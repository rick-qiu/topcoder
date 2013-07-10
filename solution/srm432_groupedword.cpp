/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10153
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

class GroupedWord {
public:
    string restore(vector<string> parts);
};

string GroupedWord::restore(vector<string> parts) {
    string ret;
    return ret;
}


int test0() {
    vector<string> parts = {"aaa", "a", "aa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaa";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> parts = {"ab", "bba"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> parts = {"te", "st"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "stte";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> parts = {"te", "s", "t"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> parts = {"orr", "rd", "woo", "www"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "wwwwooorrrd";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> parts = {"aa", "a", "aaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaa";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> parts = {"te", "s", "t"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> parts = {"te", "st"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "stte";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> parts = {"ab", "ba"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> parts = {"abcb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> parts = {"aa", "a", "aaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaa";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> parts = {"te", "s", "t"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> parts = {"te", "st"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "stte";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> parts = {"ab", "ba"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> parts = {"ooor", "rrdd", "wooo", "ddd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "woooooorrrddddd";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> parts = {"ab", "bc", "ca"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> parts = {"aaaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaa";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> parts = {"abcdefghijklmnopq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopq";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> parts = {"aaaaaaaaazaaaaaaaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> parts = {"aaaaaaaaaaz", "aaaaaaaaaaaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaz";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> parts = {"john", "jack"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> parts = {"abc", "cba", "c", "a"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> parts = {"bbb", "zzzz", "bzzz", "zzzz", "bbbb", "zzz"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> parts = {"dd", "de", "cd", "ab", "bc", "bb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbccdddde";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> parts = {"bb", "ab", "bc"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbc";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> parts = {"ddde", "ddddd", "cccccc", "ccccoo", "oooodd", "cccccc", "ooooooo", "oo", "eeeeeeeee", "ee", "ddddddd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ccccccccccccccccooooooooooooooodddddddddddddddddeeeeeeeeeeee";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> parts = {"tttttttttt", "issssssssssssst", "diiiiiiii"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "diiiiiiiiisssssssssssssttttttttttt";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> parts = {"fffff", "hggggggg", "fh", "hhh", "ddde", "ddddd", "cccccc", "ccccoo", "oooodd", "cccccc", "ooooooo", "oo", "eeeeeeeee", "ee", "ddddddd", "ggggggg", "fff"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> parts = {"aa", "bb", "cc", "dd", "ee", "dd", "ac", "cd", "db", "be"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaccccddddddbbbbeee";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> parts = {"zaaaaaaaaaaaaaaaaaz"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> parts = {"practice", "practice", "practice"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> parts = {"topcoder"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> parts = {"abab"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> parts = {"abcb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> parts = {"code", "code", "code"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> parts = {"ab", "ab"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> parts = {"aba", "a"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> parts = {"ca", "cc", "ccc", "aa", "aaa", "ab"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ccccccaaaaaaab";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> parts = {"pas", "sed"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "passed";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> parts = {"swor", "pas", "rd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "passworrd";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> parts = {"ab", "bc", "ac"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> parts = {"ab", "bc", "cd", "ac"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> parts = {"a", "b"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> parts = {"ab", "bc", "bd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> parts = {"a", "b", "c", "d", "e", "f", "g", "h", "z", "x", "y", "v", "w"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> parts = {"abc", "fbe"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> parts = {"abc", "cbe"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> parts = {"abc", "ab"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> parts = {"abc", "abc"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> parts = {"abc", "adc"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> parts = {"aba", "ab", "ba"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> parts = {"a", "a", "b", "b", "a"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> parts = {"a", "b", "a", "b", "ba"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbaaa";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> parts = {"bc", "ab", "de", "ef", "fd", "ca"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> parts = {"a", "a", "b", "b", "x", "x", "x", "a", "x", "a", "ax", "x", "x", "ba"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbaaaaaaxxxxxxx";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> parts = {"thissgrouped"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "thissgrouped";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> parts = {"aaaaaabaaaaaabbbbbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> parts = {"lkasjfhlkjashdflkj"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> parts = {"qwertyuiopr"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> parts = {"qwertyuioizxcvbn"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> parts = {"uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> parts = {"dddddddddddddddddddd", "ssssssssssssssssssss", "dddddddddddddddddddd", "ssssssssssssssssssss", "dddddddddddddddddddd", "ssssssssssssssssssss", "ssssssssssssssssssss", "dddddddddddddddddddd", "dddddddddddddddddddd", "ssssssssssssssssssss", "ssssssssssssssssssss", "dddddddddddddddddddd", "ssssssssssssssssssss", "ssssssssssssssssssss", "dddddddddddddddddddd", "ssssssssssssssssssss", "ssssssssssdddddddddd", "dddddddddddddddddddd", "dddddddddddddddddddd", "ssssssssssssssssssss"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> parts = {"cccccc", "kkkkkkkkkkkkkkkkkkkk", "cccccccccccccc", "kkkkkkkkkkkkkkkk", "cccccccccccccccccc", "kkkkkk", "kkkkk", "c", "cc", "kkkkkkkk", "kkkkkkkkkkkkkkkkkkk", "ccccccccccccccc", "kkkkkkkkk", "kkkkkkkkkkk", "ccccccccccccccc", "k", "kkkkkkkkkkcc", "ccccccc", "cccccccccc", "kkk"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkcccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> parts = {"qqqqqqqqqqqqqqqqqqqq", "gggggggggggggggggggg", "gggggggggggggggggggg", "qqqqqqqqqqqqqqqqqqqq", "gggggggggggggggggggg", "qqqqqqqqqqqqqqgggggg", "gggggggggggggggggggg", "gggggggggggggggggggg", "qqqqqqqqqqqqqqqqqqqq", "gggggggggggggggggggg", "gggggggggggggggggggg", "qqqqqqqqqqqqqqqqqqqq", "gggggggggggggggggggg", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "gggggggggggggggggggg", "gggggggggggggggggggg", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqgggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> parts = {"wwww", "k", "kkkkkkkkkkkkkkkkkk", "ww", "k", "wwwwwwwwwwwwwwk", "kkkkkkkkkkkk", "kkkkkk", "wwwwwwwwww", "kkkkkkkkkkkkkkkkkkk", "kkk", "wwwww", "kkkkkkkkkkkkk", "wwwwwwww", "wwwwwwwwwwwwww", "wwwwwwwwwwwwww", "kkkkkkkkkkk", "kkkkkkkkkkkkk", "wwww", "wwwwwwwwwwwwwww"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> parts = {"bbcccccccccccccccccc", "dddddddddddfffffffff", "mmmmmmmmmuuuuuuuuuuu", "ppppppppppprrrrrrrrr", "eeeeeeeeeeeewwwwwwww", "rrrrrrjjjjjjjjjjjjjv", "aaaaaaaaaaaaaaaaaaaa", "vvvvvvvvvvvvvvvmmmmm", "lllllnnnnnnnnnnnnnnn", "wwwwwwzzzzzzzzzzzzzz", "aqqqqqqqqqqqqsssssss", "kkgggggggggggggggggg", "uuuhhhhhhhhhhttttttt", "fffffffbbbbbbbbbbbbb", "tttttlllllllllllllll", "kkkkkkkkkkkkkkkkkkkk", "niiiiiiiiiiiiiiiiiee", "xxxxxxxxxxxxxxxxxxxa", "oooooooooooooppppppp", "ggyyyyyyyyyyyydddddd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> parts = {"pprrrrrrrrrr", "jjjjjjjj", "eeeeeeeeebbb", "kkkkkkkkkkkyyyyyy", "v", "yyyyyyllllllllllll", "oooo", "ccccccccc", "iiiiiwwwwwwwwwww", "xxxx", "ogggggggg", "nnuuu", "bbbhhhhhhhh", "mmmmmmmpppppp", "fffffiiii", "nnnnnnnnnnnnnn", "w", "aaaaaaaaaaaaaaaaa", "zzzzzzzzzzzzzkkkkk", "uuqqqqqqqqqqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> parts = {"ttttttttttttgggggggg", "ggggggggggggxxxxxxxx", "oooooossssssssssssss", "mmmmmmmmmmmmmmmmmmmm", "iiiiiuuuuuuuuuuuuuuu", "fffffffffffffooooooo", "llllllllllllllffffff", "jjjjjjjjjjjjmmmmmmmm", "uhhhhhhhhhhhhhhhhhhh", "wwwwwwrrrrrrrrrrrrrr", "xxxxxxxxvvvvvvvvvvvv", "cccccccccccccccccccd", "kkkkkkkkkkkkkkjjjjjj", "eeeeeeeeeeeeeeeeeeee", "rrrrraaaaaaaaaaaaaaa", "vvvvqqqqqqqqqqqqiiii", "ddddddddddpppppppppp", "syyyyyyyyyyyyyywwwww", "eebbbbbbbbbbbbbbbbbk", "pppppppppppptttttttt"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> parts = {"eeeee", "vvvvvvvvvvvvm", "ssssss", "ffffffffffff", "iiiiibbbb", "xxxxxxxxxxx", "ll", "uuuuuuuuuuuufffffff", "b", "jjj", "mmmmmmmmkkk", "ppppp", "hhhhhhhhhhhhhhuuu", "ggggggg", "rrrrrccccccccc", "kkkkwwwwwwwwwwwwiiii", "ttttttttttyyyyy", "annnnnnnnnnnnn", "ggddddd", "y"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> parts = {"iiiiiiiiiiiiiiiiiiip", "nnnnnnneeeeeeeeeeeee", "pppppppppppppppppppp", "xxxxxxxxxxxxxxssssss", "sssssssssssssssuuuuu", "eeeeeeeeeeeyyyyyyyyy", "yyzzzzzzzzzzzzzzzzzz", "oooqqqqqqqqqqqqqqqqq", "oooooooooooooooooooo", "aaaaaaaaaaaaaaaaaaaa", "hhhhhhcccccccccccccc", "qqqqqqqqhhhhhhhhhhhh", "wwwwwwwwwwwlllllllla", "kkkkkkkkkkkkkkkmmmmm", "cfffffffffffffxxxxxx", "uuuuuuuuuuukkkkkkkkk", "bbbbbbbbbbbbbrrrrrrr", "rrrrrrrrrrnnnnnnnnnn", "mmmmmmmmmmmmmmmmmmww", "gggggggggggggggbbbbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> parts = {"zzzzzzzzzzzzzzzz", "fffffffrrrrrrrrrrrr", "sssssssssssssss", "ddddddddddddddmmmmmm", "mmmmmmmmmmm", "rrrrrrrrrrr", "jjvvvvvvvvvvvv", "xxxuuuuu", "xxxxxxxx", "iiiiiiiiiiii", "yyyyyyggg", "uuu", "tttttt", "qqqqqqqqqqqqqqq", "gnnnn", "llllllll", "pppppppppppppkkkkkkk", "kkkkkkkkkk", "cccccccc", "eeeeeeeeeeeeeeepppp"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> parts = {"nnnnnnnnnnnnvvvvvvvv", "iqqqqqqqqqqqqqqqqqqq", "rrrrrrreeeeeeeeeeeee", "iiiiiiiiiiiiiiiiiiii", "yyyyyyyyyyyyyyyyyyyy", "wwwwwwwwwwwwwwwwwwff", "cccccccczzzzzzzzzzzz", "ttttttttttttttttttty", "yyyyyyyyyccccccccccc", "vvvvvvvvvvvvvvvvviii", "ffffffffffffffffffff", "ggggggggggggnnnnnnnn", "eeeeeekkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkxxx", "mmmmmmmmmmgggggggggg", "xxxxxxxxxxxxxxxxtttt", "bbbbbbrrrrrrrrrrrrrr", "mmmmmmmmmmmmmmmmmmmm", "bbbbbbbbbbbbbbbbbbbb", "zzzzzzzzzzzzzwwwwwww"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> parts = {"nnnn", "zqqqqqq", "sssssssxxxxxxxx", "zzzzzzz", "pppppppppppp", "dd", "eee", "oooooo", "ppppppp", "uuuuuu", "tttttttttttttttttttt", "yyyyyyyy", "xxxxxx", "fffffffffffffffffjj", "ggggggggggyyyy", "jjjjjjjjjjjj", "rr", "gggggggg", "rrrrrrrr", "lll"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> parts = {"eeeeeeeeeeeeeeeeennn", "mmmmmmmmmmbbbbbbbbbb", "ppppppppplllllllllll", "xxxxxxxxxxxxxxxxxxyy", "uuuuuuuummmmmmmmmmmm", "fffffkkkkkkkkkkkkkkk", "wwwwwwwwwwwwwwwuuuuu", "vvvvvvvvvvvvvvvaaaaa", "cciiiiiiiiiiiiiiiiir", "nnnnnnnnnnnnnppppppp", "llllllllzzzzzzzzzzzx", "ssssssssssssssssssoo", "kkkkgggggggggggggqqq", "qqqqqqhhhhhhhhhhhhhs", "ooooooooooooooowwwww", "tttttttttttttvvvvvvv", "rrrrrrrrrrrddddddddd", "yyyyyyyyyyjjjjjjjjjj", "bbcccccccccccccccccc", "aaaaaaafffffffffffff"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> parts = {"zzzzzzzzzzzzzzzzzgg", "kkkkk", "hhhhhhhhhff", "i", "mmmmmmmmkk", "xxxxxaaaa", "cccccccccccc", "bbbbbbbbbbbbbbbee", "pptttt", "ggggggggggggghhhhhh", "ffffffffddddddddddd", "wwwww", "aaaayyyyyyyyyyyyy", "sssss", "qqqqqqqqqqqqqqqccc", "uuu", "ooooooooooolllllll", "r", "nnppppp", "eeeeeeexxxxxxxx"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> parts = {"yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "bbbbbbbbbbbbbbbbbbbb", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "bbbbbbbbbbbbbbbbbbbb", "yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "yyyyyyyyyyyyyyyyyyyy", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz", "yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "bbbbbbbbbbbbbbbbbbbb", "yyyyyyyyyyyyyzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "yyyyyyyyyyyyyyyyyyyy", "bbbbbbbbbbbbbbbbbbbb", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "bbbbbbyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz", "yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "bbbbbbbbbbbbbbbbbbbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> parts = {"ppppp", "ssssss", "ssssssss", "ssssssssssssssssssss", "ppppp", "p", "yyyyy", "pppppppppppppppppppp", "pppp", "yyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyy", "ss", "ssssss", "yyyyyyyyyyyy", "ppppppppppppppppp", "ssssssssssssssss", "ssssssssss", "pppp", "yyyyyyyy", "yyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyy", "pppppppppppppppppp", "sss", "pppppppppppppp", "sssssssssss", "yyyyyyyyyyyyyy", "yyyyyyyyyyyy", "s", "sssssssss", "yyyyyyyyyyy", "yyyyyyyyyyyy", "yyy", "yyyyyyyyyyyyyyyy", "ssssssss", "s", "yyyyyyyyyy", "ppppppppp", "sssssssssssssss", "ppppp", "yyyyyyyyyyyyyyyyyyyy", "pppppppp", "pppp", "p", "sssssssssssssssssss", "sssssssssss", "yyyyyyppppppppppp", "ss", "ppppppppppp", "ppp", "yyyyyyyyyyyy"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> parts = {"iiiinnnnnnnnnnnnnnnn", "dddddddddddddddddddd", "tttttttttttttttttttt", "iiiiiiiiiiiiiiiiiiii", "tttttttttttttttttttt", "dddddddddddddddddddd", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvpppppppp", "dddddddddddddddddddd", "aaaaaaaaaaaaaaaaaaaa", "pppppppppppppppppppp", "aaaaaaaaaaaaaaaaaaaa", "nnnnnnnnnnnnnnnnnnnn", "lllllllttttttttttttt", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "aaaaaaaaaaaaaaaaaaaa", "eeeeeeeeeeeeeeeeeeee", "pppppppppppppppppppp", "ffffffffffffffffffff", "llllllllllllllllllll", "pppppppppppppppppppp", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "llllllllllllllllllll", "iiiiiiiiiiiiiiiiiiii", "vvvvvvvvvvvvvvvvvvvv", "iiiiiiiiiiiiiiiiiiii", "llllllllllllllllllll", "dddddddddddddddddddd", "ffffffffffffffffffff", "fffffffffffffddddddd", "llllllllllllllllllll", "nnnnnnnnnnnnnnnnnnnn", "ffffffffffffffffffff", "nnnnnnnnnnnnnnnnnnnn", "efffffffffffffffffff", "tttttttttttttttttttt", "tttttttttttttttttvvv", "aaaaaaaaaaaaaaaaaaaa", "iiiiiiiiiiiiiiiiiiii", "vvvvvvvvvvvvvvvvvvvv", "pppppppppiiiiiiiiiii", "nnneeeeeeeeeeeeeeeee", "ffffffffffffffffffff", "ddddddaaaaaaaaaaaaaa", "pppppppppppppppppppp", "nnnnnnnnnnnnnnnnnnnn", "llllllllllllllllllll"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvpppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiinnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnneeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> parts = {"ddddg", "ppppppppppppppp", "ssssssssssss", "ddddddddddddddddddd", "ssssssssssssssssssss", "pppppppppppppppppppp", "zzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzz", "zzzzzzzz", "ppppppp", "l", "jjjjjjjjjjjjjjjjjjjj", "lllllll", "gggggggggggggggggg", "qqqqqqqsss", "iiiiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiiiiiii", "lllllllllllll", "iiiiiiiiiiiiiiiiiii", "jjjjjjjjjj", "nnnnnnnnnnnnnnnn", "q", "jjjjjjjjjjjjjjjjj", "ppp", "iiiiiiiiiiiii", "qqqqqqqqqqqqqqqqqq", "ddddddddddddd", "zzzzzzzzzzzzzzzzzz", "dd", "qqqqqqqq", "pppppppppppppp", "nnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnppppp", "qqq", "gggggg", "nnnnnnnnnnnnnnnn", "gggggggggggggg", "innnnnnn", "sssssssssssssssssss", "ssssss", "llllllllllllllllllll", "dddddddddddddd", "zz", "jjjjjjjj", "gggiiiiiiiii", "nnnnnnnnnn", "ppppppllllll", "jjjjjj", "gggggggg", "qqqqqqqqqqqqqqqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> parts = {"bbbbbbbbbbbbbbbbbbbb", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbuuuuuuuuuuuuu", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "ttttttttttttttttttbb", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt", "tttttttttttttttttttt", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "tttttttttttttttttttt", "tttttttttttttttttttt", "tttttttttttttttttttt", "bbbbbbbbbbbbbbbbbbbb", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> parts = {"bbbbbbbbbbb", "vvv", "ffffffffffffffffff", "bbbbbbbbbbbbbbb", "bbbbbbbbbbbb", "bbbbbbbb", "fffffffffffffffff", "bbbbbbbffffffffffff", "vvvvvvvvvv", "fffffffffffff", "vvvvv", "vvvvv", "ff", "vvv", "vvvvvvvvvvvvvvvvvv", "ffffffffffffffffff", "vvvvvvvvv", "fffffffffffffffffff", "vvvvvvvvvvv", "v", "ffffff", "vvvvvvvvv", "vvvvvvvvvvvvvvv", "bbbbbbbbbbbbbbbbbbbb", "fff", "vvvvvvvvvvvvvvv", "bb", "bbbb", "bbb", "fffffffffffffffff", "fffffffffffff", "bbbbbbbb", "ffffffffffffffffff", "bbbb", "bb", "ffff", "ffffffffffffffffff", "bbbbbbbbbbbbb", "fffffffffffffff", "bbbbbbbbbbbbbbbbbb", "ffffffffffffffff", "bbbbbb", "bbbbbbb", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvv", "vvvvv", "bbb", "vv", "ffffffffffffffffff", "vvvvvv"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> parts = {"llllllllllllllllllll", "dddddddddddddddddddd", "jjjjjjjjjjjjjjjjjjjj", "rrrrrrrrrrrrrrrrrrrr", "xxrrrrrrrrrrrrrrrrrr", "bbbbbhhhhhhhhhhhhhhh", "eeeeeeeeeeeeeeeeeeee", "ppppppppppppbbbbbbbb", "llyyyyyyyyyyyyyyyyyy", "dddddddddddddddddttt", "kkkkkkkkkkkkkkkkkkkk", "hhhhhhhhhhhhhhhhhhhh", "eeeeeeeeeeeeeeeeeeee", "rrrrrrrrrrrrrrrrrrrr", "pppppppppppppppppppp", "bbbbbbbbbbbbbbbbbbbb", "vvvvvvvvjjjjjjjjjjjj", "pppppppppppppppppppp", "kkkkkkkkkkkkwwwwwwww", "bbbbbbbbbbbbbbbbbbbb", "yyyyyyyyyyyyyyyyyyyy", "sssssddddddddddddddd", "xxxxxxxxxxxxxxxxxxxx", "tttttttttttttttttttt", "ssssssssssssssssssss", "ttttttttllllllllllll", "hhhhhhkkkkkkkkkkkkkk", "ssssssssssssssssssss", "wwwwwwwwwwwwwwwwwwww", "llllllllllllllllllll", "wwwwwwwwwwwwwwwwwwww", "kkkkkkkkkkkkkkkkkkkk", "xxxxxxxxxxxxxxxxxxxx", "jjjjjjjjjjjjjjjjjjjj", "xxxxxxxxxxxxxxxxxxxx", "hhhhhhhhhhhhhhhhhhhh", "tttttttttttttttttttt", "wwwwwvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "jjjjjjjjjjjjjjeeeeee", "pppppppppppppppppppp", "vvvvvvvvvvvvvvvvvvvv", "llllllllllllllllllll", "eeeeeeeeeeeeeeeeeeee", "yyyyyyyppppppppppppp", "yyyyyyyyyyyyyyyyyyyy", "bbbbbbbbbbbbbbbbbbbb", "ssssssssssssssssssss", "eeeeeeeeeeeeexxxxxxx"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "sssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssddddddddddddddddddddddddddddddddddddddddddddddddddddtttttttttttttttttttttttttttttttttttttttttttttttttttllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyypppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeexxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> parts = {"jjjjjjjjjjjjj", "ll", "www", "o", "iiooo", "dddddhhhhhhhh", "yyyyyyyy", "aaaaaaaaa", "jjggggggggggggggg", "llll", "vvvvvvvvv", "hhhh", "yy", "oooooooooooooooooooo", "aaaaaa", "dd", "qqqqqqq", "aaaa", "v", "dddddddddddddddd", "gggggggg", "zzzzzll", "iiiiiiiiiiiiiiiiii", "ffffffffffffffffff", "zzzzzzzzzzz", "ffff", "hhhhhhvvvvvvvvvvvvvv", "zzzzzzzzzzzzzzzz", "nnnnnnnnnnnnnnnnn", "jjjjjjjjjjjjjjjj", "n", "vvvvvvvvv", "iiiiiiiiiiiiiiiiiiii", "wwwwww", "iiiiiiiiiiiii", "hhhhhhhhh", "ffffffffffffff", "nnnnnqqqqqqqqq", "qqqq", "nnnnnnnnnnn", "wwwwwwwwwwwwwwyy", "aaaaaaaaaa", "qqqqqqqqqqqqqqqq", "jjjjjjjjjjjjjjjjj", "yyy", "gggggggaaaaaaaaaaaa", "ggggggggggggg", "dddddddddd", "zzzzzzzzzzzzzz", "yy"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> parts = {"rrrrrrrrrrrrrrrrrrrr", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "iiiiiiiiiiiiiiiiiiii", "ffffffffffffffffffff", "pppppppppppppppppppp", "uuuuuuuuuuuuuuuuuuuu", "nnnnnnnnnnnnnnnnnnnn", "ffffffffffffffaaaaaa", "ffffffffffffffffffff", "nnnnnnnnnnnnnnnnnnnn", "pppppppppppppppppppp", "aaaaarrrrrrrrrrrrrrr", "uuuuuuuuuuuuuuuuuupp", "aaaaaaaaaaaaaaaaaaaa", "pppppppppppppppppppp", "pppppppppppppppppppp", "iiiiiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiiiiiiii", "ffffffffffffffffffff", "uuuuuuuuuuuuuuuuuuuu", "rrrrrrrruuuuuuuuuuuu", "pppppppppppqqqqqqqqq", "qqqqqqqqnnnnnnnnnnnn", "qqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrr", "pppppppppppppppppppp", "nnnnnnnnnnnnnnnnnnnn", "rrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrr", "nnnnnnnnnnnnnnnnnnnn", "ffffffffffffffffffff", "uuuuuuuuuuuuuuuuuuuu", "pppppppppppppppppppp", "qqqqqqqqqqqqqqqqqqqq", "iiiiiiiiiiiiiiiiffff", "rrrrrrrrrrrrrrrrrrrr", "qqqqqqqqqqqqqqqqqqqq", "uuuuuuuuuuuuuuuuuuuu", "iiiiiiiiiiiiiiiiiiii", "uuuuuuuuuuuuuuuuuuuu", "aaaaaaaaaaaaaaaaaaaa", "nnnnnnnnnnnnnnnnnnnn", "nnnnnnnnnnnnnnnnnnnn", "iiiiiiiiiiiiiiiiiiii", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "ffffffffffffffffffff", "iiiiiiiiiiiiiiiiiiii", "aaaaaaaaaaaaaaaaaaaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaarrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrruuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuupppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> parts = {"kkkkkkkkkkkkkkkkk", "dd", "dddddd", "wwwwwwww", "ppppppppppppppp", "sssssssssss", "ccccccccccc", "eeeeeeeeeeeee", "pppppppp", "pppppppppppppp", "eeeeeeeeeeeeeeeee", "s", "iiiiikkkkkkkkkkkk", "cccc", "iiii", "ssssssssssss", "sssssssss", "wwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwww", "ppppppppppppppp", "cccccccccccccc", "kkkkkkkkccccccccc", "sssssssssssddddddd", "dddddddde", "dddd", "kkkkkkkkkkkkkkkkkk", "sssssssssssssssss", "eeeeeeeeeeeeeeeeee", "kkkk", "kkkkkkkkkkkk", "eeeeeeeee", "ppppppppppppppp", "ccccccccccc", "ssssss", "dddd", "wwwwwwww", "kkkkkkkkkkk", "ddd", "cccccccc", "wwwwwwwwwwww", "ccccccc", "iiiiiii", "eeeeee", "eeeeeeeeeeeeeee", "wwwww", "iiiii", "iiiiiiiii", "ppppppppppppppp", "ww", "iiiiiiiiiiiiiiiii"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> parts = {"dddddddddddddddddddd", "kkkkkkkkkkkkkkkkkkkk", "ooooovvvvvvvvvvvvvvv", "ddddddcccccccccccccc", "qqqqqqqqqqqqqqqqqqqq", "aaaaaaaaaaaaaaaaaaaa", "pppppppppppppppppppq", "jjjhhhhhhhhhhhhhhhhh", "ssjjjjjjjjjjjjjjjjjj", "eeeeeeeeeeeeeeeeeeee", "rrrrrrrrrrrrrrrrrrrr", "nnnnnnnngggggggggggg", "zzzzzzzzzzzzzzzzzzzz", "lllllllllbbbbbbbbbbb", "mmmmmmmmmmmmmmmmmmmm", "ttttttttttyyyyyyyyyy", "xxxxxxxxxxxxxxxxxxxx", "ssssssssssssssssssss", "zzzzzzzzzeeeeeeeeeee", "vvviiiiiiiiiiiiiiiii", "yyyyyyyyyyyyyyyyyyyy", "cccccccccccccccccccc", "gggggggggggggggggggg", "ssssssssssssssssssss", "tttttttttttttttttttt", "rrrrrwwwwwwwwwwwwwww", "gggggggggggooooooooo", "kkkkkkklllllllllllll", "ffrrrrrrrrrrrrrrrrrr", "hhhhhhhhhhhhhhhhhhhh", "oooooooooooooooooooo", "vvvvvvvvvvvvvvvvvvvv", "nnnnnnnnnnnnnnnnnnnn", "iiiiiimmmmmmmmmmmmmm", "qqqqqqqqqqqqqqqqqqqq", "eeeeeeeeeedddddddddd", "bbbbbbbbbbzzzzzzzzzz", "wwwwwwwwwwwwwwwwwwww", "ffffffffffffffffffff", "xxxxxxxxxxxppppppppp", "wwwwwwwwwwwwwxxxxxxx", "llllllllllllllllllll", "mmkkkkkkkkkkkkkkkkkk", "hhhhhhhhhaaaaaaaaaaa", "iiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjj", "yyyyyynnnnnnnnnnnnnn", "bbbbbbbbbbbbbbbbbbbb", "ccccccffffffffffffff", "aaaaaaaaaaaatttttttt"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ssssssssssssssssssssssssssssssssssssssssssjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaattttttttttttttttttttttttttttttttttttttyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyynnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnngggggggggggggggggggggggggggggggggggggggggggoooooooooooooooooooooooooooooooooovvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvviiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiimmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkllllllllllllllllllllllllllllllllllllllllllbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeddddddddddddddddddddddddddddddddddddccccccccccccccccccccccccccccccccccccccccffffffffffffffffffffffffffffffffffffrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxppppppppppppppppppppppppppppqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> parts = {"aaaaaaaaaaaaaaaaaaaa", "iiiiiiiiiiiiiiiiiiii", "bbbbbwwwwwwwwwwwwwww", "aaaaaahhhhhh", "eeeeeeeeeeeeeee", "ssssssssssss", "zzzzzzzz", "vvvggggggggggg", "ccvvvvvvvvvvv", "tttttttt", "dddddddddd", "llllllllnnnnnnnnnn", "uuuuuu", "mmmmmmmmmjjjjjjj", "kkkkkkkkkk", "ffffffffffqqqqqqqq", "ppppppppppppp", "ccccccc", "uuuuuuuuuttttttttttt", "wwwooooooooooooooo", "qqqqqqq", "hhhhhhhhhhhhhh", "nnnnnnnnnn", "c", "f", "dddddx", "nnnnnnnnn", "iiiii", "yydddddddd", "gggggggggg", "bbbb", "wwwwwwwwwwwwwwwwwww", "lllllll", "oooooo", "ee", "ttttttttttaaaaaaaaa", "jjjjj", "xxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyy", "pppppp", "xxxxxxxxxx", "mmmmmmmmm", "kk", "gggggggggsssssss", "ooooooooooooooooo", "vvvvvvvvvvvvvvvvvvvv", "qqqqqqllllllllllll", "jjjjjjjjjjjjjjjj", "hhhhhhy", "s"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> parts = {"oooooooooooooooooooo", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "eeeeeooooooooooooooo", "oooooooooooooooooooo", "dddddddddddddddddddd", "oooooooooooooooooooo", "eeeeeeeeeeeeeeeeeeee", "oooooooooooooooooooo", "dddddddddddddddddddd", "dddddddddddddddddddd", "dddddddddddddddddddd", "oooooooooooooooooooo", "dddddddddddddddddddd", "oooooooooooooooooooo", "eeeeeeeeeeeeeeeeeeee", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "dddddddddddddddddddd", "oooooooooooooooooooo", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "oooodddddddddddddddd", "dddddddddddddddddddd", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "oooooooooooooooooooo", "oooooooooooooooooooo", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "dddddddddddddddddddd", "oooooooooooooooooooo", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "oooooooooooooooooooo", "oooooooooooooooooooo", "oooooooooooooooooooo", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "oooooooooooooooooooo", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "oooooooooooooooooooo", "dddddddddddddddddddd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooodddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> parts = {"wwww", "qqqqqqqqqqqqqqqqqqqq", "uuuuuuuuuuuuuuuuuu", "uuuuuwwwwwwwwwwwwwww", "wwwwwwwwwwwww", "qqqqqqqq", "wwwwww", "uuuuuuuuuuuuuuuuuuuu", "wwwwwwwwwwwwwwwwww", "qqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqq", "wwwwwwwwwwwwwwwww", "qqqq", "wwwww", "u", "qqqqqqqqqqqqqqq", "uuuuuuuuuu", "qqq", "wwwwwwwwwwwwwwwwwww", "uuuuuuu", "uuuuuu", "uu", "qqqqqqqqqqqqqqq", "u", "uuu", "ww", "qqqqqqqqqqqqqqq", "qqqqqqqqqqqq", "uuuuuuuuuuuu", "ww", "www", "qqqqqqqqqq", "uuuuuuuuuuuuuuuu", "qqqqqqqqqqqq", "uuuuuuu", "q", "wwwwwwwww", "uuu", "uuuuuuu", "wwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwww", "qqqqqqqqq", "uuuuuuuuuuuuu", "wwwwwwwww", "qqqqq", "uuuuuuuuuuuu", "wwwwwwwwwwwwwwwwwwww", "qqqqqqqqqqqqqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> parts = {"kkkkkkkkkkkkkkkkkzzz", "ffffffffffffffffffff", "vvvvvrrrrrrrrrrrrrrr", "cccccccccccccxxxxxxx", "qqqqqqqqqqqqqqqqqqqq", "ggggglllllllllllllll", "jjjjjjjjjjjjjjjjjjjj", "eeeeeeeeeeeeeeeeeeee", "cccccccccccccccccccc", "ppppppppppphhhhhhhhh", "rrrrnnnnnnnnnnnnnnnn", "aaaaaaaaaaaaaaaaaaee", "llllllllllllllllllll", "ssssssssssssssssssss", "uuuuukkkkkkkkkkkkkkk", "yymmmmmmmmmmmmmmmmmm", "eeeeyyyyyyyyyyyyyyyy", "rrrrrrrrrrrrrrrrrrrr", "gggggggggggggggggggg", "zzzzzzzzzzzzzzzziiii", "tttttttttttccccccccc", "ooooooouuuuuuuuuuuuu", "qqqqqqqqqqqqqqqqqqqq", "xxxxxxxxxxxxxxxxxxxx", "wwwwwwwwwwwwwwwwwwww", "mmmmmmmmmmmmmmpppppp", "zzzzzzzzzzzzzzzzzzzz", "ffffffffffffffffffff", "iiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjdddddddd", "bbbbbbbbbbbbbbbbjjjj", "wwwwwwwwwwwwwwwwwwtt", "xxxxxxxxxxxxxxxvvvvv", "dddddddddddddddddddd", "aaaaaaaaaaaaaaaaaaaa", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt", "hhhhhhhhhbbbbbbbbbbb", "hhhhhhhhhhhhhhhhhhhh", "eeeeeeeeeeeeeeeeeeee", "yyyyyyyyyyyyyyyyyyyy", "looooooooooooooooooo", "qqqsssssssssssssssss", "bbbbbbbbbbbbbbbbbbbb", "pppppppppppppppppppp", "oooooooooooooooooooo", "dddddggggggggggggggg", "nnnnnnnnnnnnnnnfffff", "vvvvvvvvvvvvvvvvvvvv", "iiiiiiiiiiiiiiiiiqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> parts = {"llll", "hhhhhhhhh", "xxxx", "yyyyyyyyyy", "qqqqqqq", "b", "ggggggg", "pppppppppppppppp", "yyyyyyyyyyyyyyyyyy", "iiiiiiiiiiijjjj", "sssskkkkkkkkkk", "aaaaaaaaaaaaaaaaaap", "ooooooo", "ww", "cccccllllllllll", "nnuuuuuuuu", "ppppnnnnnnn", "ssssssssssssssssss", "bbbbbb", "fffffffff", "tttttttt", "zzzzzzzccccc", "q", "rrrrrrrrrrrrrrrrrrr", "vvvvvvv", "uuuuuuuu", "ffffff", "hhhhhhhhhhhhhhhhhhhh", "d", "ggggggggg", "eeeeeeeeeeeee", "vvv", "r", "mmmmmmmmmmmmmmmmmmmm", "aaaaa", "cccccccccccccccccccc", "ttttttt", "jjjjjjjjje", "jjjjjjjjjjjjjjjjjjjj", "ppppppp", "nnnnn", "ozzzzzzzzzzzzzzzz", "qqqwwwwwwwwww", "e", "iiiiiiii", "zzzzzzzzzzzzzzzzzzz", "mmmmmbbb", "kkkkk", "xxxxxxxxxxxxxxxx", "ddddd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> parts = {"rrrrrrrrrrrrrrrrrrrr", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "qqqqqqqqqqqqqqqqqqqq", "uuuuuuuuuuuuuuuuuuuu", "rrrrrrrrrrrrrrrttttt", "tttttttttttttttttttt", "tttttttttttttttttttt", "zzzzzzzzzzzzzzzzzzzz", "ssssssssssssssssssss", "tttttttttttttttttttt", "wwwwwwwwwwwsssssssss", "rrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrr", "qqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrr", "ssssssssssssssssssss", "qqqqqqqqqqqqqqqqqqqq", "tttttttttttttttttttt", "ssssssssssssssssssss", "ssssssssssssssssssss", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzww", "zzzzzzzzzzzzzzzzzzzz", "qqqqqqqqqqqqqqqqqqqq", "ssssssssssssssrrrrrr", "qqqqqqqqqqqqqqqqqqqq", "wwwwwwwwwwwwwwwwwwww", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "wwwwwwwwwwwwwwwwwwww", "tttttttttttttttttttt", "rrrrrrrrrrrrrrrrrrrr", "zzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzz", "uuuuuuuuuuuuuuuuuuuu", "ssssssssssssssssssss", "qqqqqqqqqqqqqqqqqqqq", "ssssssssssssssssssss", "uuuuuuuuuuuuuuuuuuuu", "zzzzzzzzzzzzzzzzzzzz", "ttttttttttttttttuuuu", "qqqqqqqqqqqqqqqqqqqq", "uuuuuuqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrr", "uuuuuuuuuuuuuuuuuuuu"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrtttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> parts = {"ooo", "a", "aaaaaaaaa", "a", "aa", "yyyyyy", "mmmmmmmmmmmmm", "oooooooooo", "ffffffffffffffff", "fffffff", "bb", "n", "fffffffffffffffffff", "aaaaaaaaaaan", "oo", "ooooo", "yyyyyyy", "ooooooooooooooooo", "nnnnnnnnnnnnnnnnn", "yyyyyyyyyy", "ffffffffffffff", "nnnnnnnnnnnnnn", "nnnnn", "bbbbbbbbbbbbb", "bbbbbbbbbbb", "bbbbbbbbbbbb", "yyyyyyyyyyy", "nnnnnnn", "yyyyyyyyyyyyy", "aaaaaaaaaaaaaaa", "mmmmmmmmmmmmmmmmmm", "mmmm", "fffffff", "mmmmmm", "aaaaaaaaaaaaaa", "ffffffffffff", "ooooooo", "bb", "bbbbbbbbbbbbbbbbb", "mmmmmmmmmmmmmm", "nnnnnnnnn", "yyyyyyy", "n", "mmmmmmmmmmm", "b", "fffffffffff", "yyyyyyyyyy", "mmmmm", "ooooo", "mmm"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> parts = {"aaaaaaaaaaaaaaaaaaaa", "cckkkkkkkkkkkkkkkkkk", "iiiiiiiiiiiiiiiiiiii", "bbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccc", "cccccccccccccccccccc", "uuuuuuuuuuuuuuuuuuuu", "bbbsssssssssssssssss", "aaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbb", "kkkkkkkkkkkkkkkkkkkk", "aaaaaaaaaaaaaaaaaaaa", "pppppppppppppppppppp", "iiiiiiiiiiiiiiiiiiii", "ssssssssssssssssssss", "aiiiiiiiiiiiiiiiiiii", "uuuuuuuuuuuuuuuuuuuu", "aaaaaaaaaaaaaaaaaaaa", "kkkkkkkkkkkkkkkkkkkk", "bbbbbbbbbbbbbbbbbbbb", "iiiiiiiiiiiiiiiiiiii", "bbbbbbbbbbbbbbbbbbbb", "mmmmmmmmmmmmmmmmmmmm", "uuuuuuuuuuuuuuuuuuuu", "ssssssssssssssssssss", "kkkkkkkkkkkkkkkkkkkk", "cccccccccccccccccccc", "kkkkkkkkbbbbbbbbbbbb", "iiiiiiiiiiiiiiiiiiii", "uuuuuuuuuuuuuuuuuuuu", "ssssssmmmmmmmmmmmmmm", "aaaaaaaaaaaaaaaaaaaa", "pppppppppuuuuuuuuuuu", "pppppppppppppppppppp", "pppppppppppppppppppp", "uuuccccccccccccccccc", "bbbbbbbbbbbbbbbbbbbb", "uuuuuuuuuuuuuuuuuuuu", "ssssssssssssssssssss", "kkkkkkkkkkkkkkkkkkkk", "mmmmmmmmmmmmmmmmmmmm", "mmmmaaaaaaaaaaaaaaaa", "mmmmmmmmmmmmmmmmmmmm", "ssssssssssssssssssss", "kkkkkkkkkkkkkkkkkkkk", "pppppppppppppppppppp", "iiiiiiiiiiiiiiiiiiii", "cccccccccccccccccccc", "mmmmmmmmmmmmmmmmmmmm", "pppppppppppppppppppp"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccckkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> parts = {"pppppppppppppppppp", "cc", "iiiiiiiiiiiiiiiiiiii", "uuuuuuu", "ccccc", "cc", "tttttttttttttttttt", "uuunnn", "pppppppppppppppppppp", "uuuuu", "ooo", "pppp", "zzzzzzz", "iiiiiiiiiiiiii", "nnnnnnnnnn", "piiiiiiii", "tttttttttttttttttt", "ppppp", "ooooooooooooooo", "uuuu", "iiiiiiiiiiiiiiiii", "uuuuuuuu", "yyyyyyyyyyyyyyyyyyy", "ttttttttttttttttt", "nnnnnnnnnnnnn", "oooooooooooooooo", "c", "oooooooouuuuuuuuuuu", "iiiiiiiiiiiiiiiiiii", "ttttttttttttttttttt", "nnnnnnyyyy", "ppppppppppppppppppp", "zzzzzzzzzttt", "zzzzzzz", "zzzzzzzzzzzzzzzz", "tttccccccccccccccc", "uuuuuuu", "tttt", "nnnnnnn", "oooooooooooo", "yyyy", "yyyypp", "yyyyyyyyyyyyy", "nnnnnnnnnnnnnnnnnn", "ooooooooooooooooo", "zzzzzzzzzzzzzzzzzzzz", "iiiiiiii", "cccc", "yyyyyyyyyyyy", "zz"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> parts = {"fffff", "hhhhh", "hhhhh", "bbbbb", "cccbb", "srrrr", "fffff", "ppppp", "reeee", "ooyyy", "fffff", "ooooo", "ccccc", "eeeff", "ppsss", "hhhhh", "hhhhh", "fffff", "ccccc", "hhhhh", "rrrrr", "fffff", "ooooo", "ccccc", "sssss", "sssss", "zzzzz", "ppppp", "eeeee", "zzzzz", "yyyyy", "zzzzz", "bbbbb", "bbbbb", "eeeee", "sssss", "ppppp", "yyyyy", "bbbbh", "ccccc", "ccccc", "fffff", "sssss", "yyyyy", "sssss", "ypppp", "ooooo", "fffff", "ooooo", "rrrrr"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> parts = {"yyyyy", "ssss", "sssss", "bbbbb", "hhhb", "ijjjj", "yy", "qq", "joooo", "uu", "yyyyy", "uuuu", "hhh", "oooy", "qqi", "sssss", "ssss", "y", "hhhh", "sssss", "jjjjj", "yyyyy", "uuuuu", "hh", "iii", "ii", "k", "q", "oo", "kkk", "gg", "kkkk", "bbb", "bb", "oooo", "iiiii", "qqq", "gg", "bbb", "hh", "hh", "yyyy", "iiiii", "ggg", "iii", "gq", "uuuuu", "yyyy", "uuuuu", "jjjjj"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> parts = {"aaaaa", "qqqqq", "qqqqq", "aaaaa", "ccccc", "ccccc", "ccccc", "qqqqq", "ccccc", "aaaaa", "qqqqq", "qqqqq", "ccccc", "ccccc", "qqqqq", "ccccc", "qqqqq", "aaaaa", "aaaaa", "ccccc", "aaaaa", "qqqqq", "aaaaa", "ccccc", "ccccc", "qqqqq", "ccccc", "ccccc", "qqqqq", "aaaaa", "qqqqq", "aaaaa", "aaaaa", "ccccc", "ccccc", "qqqqq", "aaaaa", "qqqqq", "qqccc", "aaaaa", "ccccc", "aaaaa", "qqqqq", "ccccc", "aaaaa", "aaaaa", "qqqqq", "aaaaa", "ccccc", "aaqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqcccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> parts = {"aa", "d", "d", "aaa", "cccc", "c", "cccc", "d", "cc", "aaaaa", "ddddd", "ddddd", "c", "cc", "ddd", "ccc", "dd", "aaa", "aaaaa", "c", "aaaaa", "dddd", "aaa", "c", "cccc", "d", "cccc", "cccc", "ddd", "a", "dddd", "aa", "aaaa", "cc", "cccc", "ddd", "aaaaa", "dd", "ddccc", "a", "ccccc", "aaa", "dddd", "ccccc", "aaa", "aa", "dd", "aaaa", "cc", "aa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> parts = {"xxxxx", "xxxxx", "twwww", "wwwww", "bbbbb", "gssss", "rrrrg", "yyyyy", "hhhhh", "czzzz", "kkkkk", "aaaaa", "pppjj", "scccc", "nvvvv", "vvvvv", "yyyyy", "ccccc", "mmmmm", "fffff", "xxnnn", "kkkdd", "zzuuu", "ddddd", "wwwww", "nnnnn", "ttttt", "vvvvv", "ddddb", "eeeee", "fffff", "jjmmm", "apppp", "vveee", "bbbrr", "eeeee", "rrrrr", "ttttt", "yyyyk", "wwwyy", "uuuii", "zzzzz", "kkkkk", "uuuuu", "fffxx", "hhhhh", "aaaaa", "ggggg", "iiiii", "jjjjj"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> parts = {"qqqqq", "qqq", "phhh", "hhh", "ww", "r", "ee", "ll", "ggg", "yoooo", "zzz", "ttt", "nnnc", "a", "fm", "mmm", "ll", "yy", "iii", "bbbb", "qqff", "zzzk", "oojjj", "kkkk", "hhhhh", "fff", "ppp", "mm", "kk", "ddd", "bb", "cci", "tnn", "mmdd", "wwwe", "ddddd", "eeeee", "pppp", "lll", "hhhl", "jjjss", "oo", "zz", "jjjj", "bb", "gggg", "ttt", "rrrr", "sss", "ccccc"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> parts = {"xx", "zz", "jj", "ss", "pp", "oo", "kk", "kk", "mm", "yy", "gg", "hh", "ff", "sf", "zz", "mm", "uu", "ee", "dc", "kk", "ww", "cc", "rx", "ws", "xx", "vv", "ff", "zq", "eo", "gb", "jj", "vv", "yy", "rr", "vv", "ll", "aa", "lw", "pe", "uz", "ii", "ff", "dd", "pp", "tt", "ss", "qq", "np", "hi", "bb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> parts = {"k", "xx", "w", "aa", "d", "q", "s", "s", "uu", "r", "o", "t", "ee", "ae", "xx", "u", "bb", "p", "nv", "ss", "jj", "vv", "mk", "ja", "k", "yy", "e", "xc", "pq", "oi", "ww", "y", "rr", "mm", "yy", "f", "hh", "fj", "dp", "bx", "l", "ee", "nn", "d", "gg", "a", "cc", "zd", "tl", "ii"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> parts = {"sm", "xx", "zz", "bb", "cc", "ss", "rr", "tt", "ii", "qs", "dd", "cn", "mi", "ip", "bl", "nn", "oo", "fz", "tt", "kk", "hh", "bb", "dd", "wy", "zz", "xx", "vx", "yy", "kk", "yy", "ll", "rr", "ww", "cc", "nn", "yy", "zz", "dv", "rr", "yy", "uu", "kt", "pp", "gg", "ub", "bb", "tg", "ww", "nn", "rf"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> parts = {"fi", "ee", "a", "yy", "oo", "f", "r", "z", "g", "xf", "hh", "op", "ig", "gv", "ym", "p", "d", "na", "zz", "ss", "t", "y", "hh", "lj", "a", "e", "be", "jj", "s", "jj", "mm", "r", "l", "oo", "pp", "jj", "aa", "hb", "rr", "jj", "uu", "sz", "vv", "k", "uy", "yy", "zk", "l", "p", "rn"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> parts = {"hh", "ss", "ss", "oo", "cc", "cc", "bb", "dd", "ii", "vv", "gg", "bb", "ss", "vt", "nn", "ll", "ko", "ll", "xx", "wc", "aa", "ol", "tt", "ww", "xx", "kk", "rv", "bb", "jj", "hh", "jj", "xx", "dd", "cc", "eg", "dy", "cc", "oo", "ee", "gg", "ae", "bb", "nn", "vv", "oo", "ir", "bb", "qq", "qq", "qq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> parts = {"bb", "q", "q", "t", "oo", "oo", "mm", "ll", "x", "s", "n", "mm", "q", "sj", "vv", "ii", "yt", "i", "z", "fo", "kk", "ti", "jj", "ff", "zz", "y", "gs", "mm", "dd", "bb", "d", "z", "ll", "o", "wn", "lu", "oo", "t", "ww", "n", "kw", "mm", "vv", "s", "tt", "xg", "mm", "ee", "ee", "e"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> parts = {"jgclhevapfvylenrmfl", "gtxqvpclu", "kycqzozwxmctfnwavjg", "mhkitkxrtrbsrbrxr", "ynxpcxyvahnwervfnwf", "asckmghdxgdzogoyxcil", "wqmcvkxbobyvmkzkmsge", "cfgsvgwhwsqiwqyowie", "iepyvwetpapadpaw", "vbsacobohoyhvhaq", "hwltwtozjobqhfhlohtj", "geylylexmlidygtfpgz", "emdaqzxihzveljymdqy", "jrhvkfjfqgiwyjkefwr", "nkocnqvicbodivnfqdk", "qhaxzgknjylspsnpxhv", "caxfoxcpwbzvcaoymg", "fnkhohazokzizozotpzg", "dagrgwkbwodvzcnwxab", "skpnzmlztxbaolcbxkcl", "toeglwybsflhgryikesa", "rfqdqhkhpwjhjwjtwgj", "tmszjcoazvpixfszgxf", "hylcxgljsyjocgynogdj", "ibdoysdkhkbkmkmsa", "ehyixnwsnmtmbyvixtkm", "hjywyjfxwhqiwfjkvnw", "xitshemvfncoephwmba", "rldwqedjhaxkwphrbgt", "dypcvzhnmdazpermfbg", "u"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> parts = {"wwwwwwwwzzzzzzzzzzzz", "rrrrrrrrrrrddddddddd", "uuuuuuuuuuucccccccct", "eeeeeeeeeeennnnnnnnn", "yoooooooookkkkkkkkkw", "gggggggmmmmmmmmmmmms", "lllllllllllllllggggg", "fffffiiiiiiiiiaaaaaa", "ttttttttttttttttteee", "vvvvvvvyyyyyyyyyyyyy", "hhhhhhhhhhbbbbbbbbbl", "sssssssssspppppppppf", "xxxxjjjjjjjjjjvvvvvv", "aaaqqqqqqqqqqqxxxxxx"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> parts = {"wd", "je", "oty", "ni", "rasw", "bfv", "pb", "hgu", "yn", "kr", "lcp", "vqh", "zmk", "uxz"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> parts = {"ssssssssssssoooooooo", "kkkkkkkkkkhhhhhhhhhh", "yybbbbbbbbbbbbbbbbbb", "fffffffffffffffffmmm", "aaaaaaaaaaaaaaaaaaaa", "xxxxxeeeeeeeeeeeeeee", "mmmmmmmmmmmmmmmmmmmm", "jjjjjjjjjjjjjjjjjjjj", "iixxxxxxxxxxxxxxxxxx", "vvvvvvvvtttttttttttt", "nnnnnnnnnnnnnnnnnnnn", "rrrrrggggggggggggggg", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbwwwwwww", "ooooooovvvvvvvvvvvvv", "lllppppppppppppppppp", "nnnnnnnnnnnnnnnnnnnn", "eeeeeeeeeeeeeeeeeess", "yyyyyyyyyyyyyyyyyyyy", "dddddddddddddddfffff", "mmmmmmmmmmmmmmmmmuuu", "uiiiiiiiiiiiiiiiiiii", "zzzzzzzzzzzzzzzzzzkk", "ccccccccccqqqqqqqqqq", "zzzzzzzzzzzzzzzzzzzz", "qqqqqqqqqqqqqqqqqzzz", "wwwwwwwwwwwwwwwwwwww", "ffffffffffffffffffff", "dddddddddddddddddddd", "wwwwwwwwwaaaaaaaaaaa", "llllllllllllllllllll", "ssssssssssssssssssss", "hhhhhhhhhhhhhhhhhhhh", "tttttttttttttttttttt", "rrrrrrrrrrrrrrrrrrrr", "xxxxxxxxxxxxxxxxxxxx", "uuuuuuuuuuuuuuuuuuuu", "kkkkkkkkkkkkkkkkkkkk", "cccccccccccccccccccc", "iiiiiiiiiiiiiiiiiiii", "gggggggggggggggggggy", "nnnnnnnnnjjjjjjjjjjj", "vvvvvvvvvvvvvvvvvvvv", "oooooooooooooooooooo", "yyyyyyyyyyyyyyyyyyyy", "ppppppppppppprrrrrrr", "aaaaaaaadddddddddddd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> parts = {"xf", "br", "nq", "la", "c", "th", "a", "y", "gt", "oe", "d", "ip", "s", "qv", "fo", "wm", "d", "hx", "n", "kl", "as", "sg", "jb", "zu", "j", "uj", "v", "l", "k", "vc", "w", "x", "r", "e", "i", "t", "s", "b", "z", "g", "pn", "dy", "o", "f", "n", "mi", "ck"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> parts = {"uuuuuuuuuucccccccccc", "eeeeeggggggggggggggg", "mmmmmmmmmmmmmmmmmmmm", "zzzzzzzzzzzzzsssssss", "llllllllllllllllllll", "lllllllyyyyyyyyyyyyy", "ssssssssssssssssvvvv", "bbbbbppppppppppppppp", "eeeeeeeeeeeeeeeeeeee", "ttttttttwwwwwwwwwwww", "qqqddddddddddddddddd", "oooooooooooooooooooo", "kkkkkkkkkkkkkkkkkkkk", "nnnnnnuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbbbbb", "vvvvvvvvvvvvvvvveeee", "rrrrrrrrrrrrrrrrrrrr", "ffffffffffffffffffff", "rjjjjjjjjjjjjjjjjjjj", "hhhhhhhhhhhhhhhhhhhh", "iiiiiiiiiiiiiiiiikkk", "xxxxxttttttttttttttt", "wwwwwwwwwwwzzzzzzzzz", "aaaaaaaaaaaaaaaaaqqq", "cccciiiiiiiiiiiiiiii", "dddddddddddddddbbbbb", "cccccccccccccccccccc", "ggggggggggggggoooooo", "yyyyyyyyyyyyyyyyyyym", "mmxxxxxxxxxxxxxxxxxx", "qqqqqqqqqqqqqqqqqqqq", "jjjjjjjjjaaaaaaaaaaa", "hhnnnnnnnnnnnnnnnnnn"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> parts = {"am", "tz", "h", "fr", "o", "op", "rq", "yc", "t", "jd", "ix", "u", "g", "na", "y", "qt", "k", "w", "ke", "s", "vg", "bj", "df", "li", "mv", "xy", "m", "zu", "ph", "hb", "i", "el", "sn"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> parts = {"nnooooooooojjjjjjjjj", "wwvvvvvvvvvvvxxxxxxx", "jjjjjcccccccccccssss", "aaaaaaaagggggggggrrr", "zeeeeeeeeeeeuuuuuuuf", "xxxxxxxxxxxaaaaaaaaa", "hhkkkkkkkkkkkkkkkkkk", "ffffffffffnnnnnnnnnn", "qqqbbbbbbbbbhhhhhhhh", "ssssssssssssiiiiiiii", "ppppmmmmmmmmmmdddddd", "ddddddddddddddqqqqqq", "yyyyyyyyyyyypppppppp", "rrrrrrrrrrrttttttttt", "llllllllllllwwwwwwww", "kkkkzzzzzzzzzzzzzzzz"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> parts = {"oje", "axg", "eml", "yhi", "tqvb", "gy", "ku", "bo", "spk", "lz", "cnd", "ds", "rc", "iw", "fa", "ut"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> parts = {"zzzzzzzzzzziiiiiiiii", "ssssssssssssssssssss", "bbbbbbbbbbbbbbcccccc", "hhhhhhhhhhhhhhzzzzzz", "cccccccccccccccccccc", "iiiiiiiiiiiiiiiiiiii", "xxxxxxxxxxxxxxxxxxxx", "qqqqqqqqqqqqqqqqqqqq", "oohhhhhhhhhhhhhhhhhh", "gggggggggggggggggggg", "wwwwwwwaaaaaaaaaaaaa", "dddddddsssssssssssss", "aaaaaaaaaaaaaaaaaaaa", "eeeeeeeeeeeeeeeebbbb", "jjjjjjjjjjjjjjjjjjjj", "iikkkkkkkkkkkkkkkkkk", "mmmmmmmmmmmmwwwwwwww", "llllllllllllllllllll", "nnnnnnnnnnnnnnnnnnnn", "qqyyyyyyyyyyyyyyyyyy", "lllllllloooooooooooo", "kkkkkkkkkkkkkkkqqqqq", "ggggeeeeeeeeeeeeeeee", "rrrrrrrrrrrrrrrrrrrr", "nnnnpppppppppppppppp", "pfffffffffffffffffff", "vvdddddddddddddddddd", "zzzzzzzzzzzzzzzzzzzz", "oooooooooooooooooooo", "yyyyyyyyyyyyyygggggg", "jjjrrrrrrrrrrrrrrrrr", "tttttttttttttttttttt", "tttttttttttttlllllll", "pppppppppppppppppppp", "ssssuuuuuuuuuuuuuuuu", "xxxxxxxnnnnnnnnnnnnn", "ffffffmmmmmmmmmmmmmm", "ccccccccccccjjjjjjjj", "bbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaavvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "uuuuuuuuuuuuuuuuuuut", "vvvvvvvvvvvvvvvvvvvv"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxxxxxxxxxxxxxxxxxxxxxnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnpppppppppppppppppppppppppppppppppppppfffffffffffffffffffffffffmmmmmmmmmmmmmmmmmmmmmmmmmmwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaavvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvdddddddddddddddddddddddddsssssssssssssssssssssssssssssssssssssuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuttttttttttttttttttttttttttttttttttllllllllllllllllllllllllllllllllllloooooooooooooooooooooooooooooooooohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzziiiiiiiiiiiiiiiiiiiiiiiiiiiiiiikkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkqqqqqqqqqqqqqqqqqqqqqqqqqqqyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyggggggggggggggggggggggggggggggeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeebbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccccccccccccccccccccccccccccccccccccjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> parts = {"rd", "q", "np", "vr", "p", "d", "c", "i", "hv", "a", "bx", "fq", "x", "mn", "s", "du", "lb", "t", "o", "ij", "th", "ui", "am", "k", "oz", "zw", "ef", "r", "h", "ja", "sk", "y", "yt", "z", "qg", "co", "wl", "ps", "n", "xe", "b", "gy", "e"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ccooozzzwwllbbbxxxeeeffqqqggyyyttthhhvvrrrddduuiiijjaaammnnnpppssskk";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> parts = {"sssssbbbbbbbooooorrr", "rrrrrrrqqqqxxxxxxjjj", "jjjjjjjjjiiiiiiiiiii", "gggggggggffffffffmmm", "ccccccccccckkkknnnnn", "hhhhhhyyyyyyyyyzzzzz", "uaaaaaaaaaaaaatttttt", "nneeeeeeeeevvvvvvvhh", "mmmwwwwwwppppppppsss", "illlldddddddduuuuuuu"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> parts = {"cfdt", "tahq", "qr", "bsi", "mxl", "oyz", "ngk", "lpeo", "ivuc", "rjwn"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> parts = {"uuuuuuuuuuuuuddddddd", "ppppppppppppppppppss", "iiiiiiiiiiiiiiiiiiii", "kkkkkkkkkkkkknnnnnnn", "wwwwwwwwwwwwwwwwwwwh", "nnnnnnnnnnnnnnnnnnnn", "aaaabbbbbbbbbbbbbbbb", "iiiioooooooooooooooo", "oooooooooooooooooqqq", "jjjjjjjjjjjjjjjjjjjj", "llllllllllluuuuuuuuu", "hhhhhhhhhhhhhhhhhhhh", "zzzzzzzzffffffffffff", "tvvvvvvvvvvvvvvvvvvv", "vvvvvvveeeeeeeeeeeee", "cccccccccccccccccccc", "ffflllllllllllllllll", "ddddddddddddddddddcc", "bbbbbbbbbbbbbbbttttt", "ffffffffffffffffffff", "qqqqqqqqqqqppppppppp", "xxxxxxxxxxxxxxxxxxzz", "tttttttttttttttttttt", "eeeeeeeeeeeeekkkkkkk", "yyyyyyyyyyyyyyyyyyyj", "zzzzzzzzzzzzzzzzzzzz", "qqqqqqqqqqqqqqqqqqqq", "mmmmmmmmmaaaaaaaaaaa", "ggggggggggrrrrrrrrrr", "ssssssssssssssssssww", "mmmmmmmmmmmmmmmmmmmm", "aaaaaaaaaaaaaaaaaaaa", "jjjjjjgggggggggggggg", "nnnnnnnnxxxxxxxxxxxx", "rrrrrrrrrrrrrrrrriii", "ccccccccccyyyyyyyyyy"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbttttttttttttttttttttttttttvvvvvvvvvvvvvvvvvvvvvvvvvveeeeeeeeeeeeeeeeeeeeeeeeeekkkkkkkkkkkkkkkkkkkknnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzffffffffffffffffffffffffffffffffffflllllllllllllllllllllllllllluuuuuuuuuuuuuuuuuuuuuudddddddddddddddddddddddddccccccccccccccccccccccccccccccccyyyyyyyyyyyyyyyyyyyyyyyyyyyyyjjjjjjjjjjjjjjjjjjjjjjjjjjjggggggggggggggggggggggggrrrrrrrrrrrrrrrrrrrrrrrrrrriiiiiiiiiiiiiiiiiiiiiiiiiiioooooooooooooooooooooooooooooooooqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqpppppppppppppppppppppppppppsssssssssssssssssssswwwwwwwwwwwwwwwwwwwwwhhhhhhhhhhhhhhhhhhhhh";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> parts = {"ot", "yr", "x", "fd", "pn", "d", "ma", "xc", "cj", "z", "lo", "n", "he", "iq", "qv", "b", "el", "tb", "ai", "e", "jy", "sh", "i", "vf", "wz", "h", "j", "um", "kg", "rp", "u", "m", "zk", "ds", "gx", "bw"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "uummmaaiiiqqvvffdddsshhheeelloottbbbwwzzzkkggxxxccjjjyyrrppnn";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> parts = {"jjjjjxxxxxxxxxxxxxxx", "llllllllllllllllllll", "wwwwwwwwwwwwwwbbbbbb", "uuuuuuuccccccccccccc", "wwwwwwwwwwwwwwwwwwww", "rrrrrrrrrrrrrrrrrrrr", "iiiiiiiiiiiiiiizzzzz", "tttttttttttttttttttt", "gggggggggggggggggggg", "llllllllllllllllllgg", "uuuuuuuuuuuuuuuuuuuu", "bbbbbbbbbbbbbbbbtttt", "vvjjjjjjjjjjjjjjjjjj", "bbbbbbbbbbbbbbbbbbbb", "ccccccccccccllllllll", "uuuuuuuuuuuuuuuuuuuu", "cccccccccccccccccccc", "ffffffffffffffiiiiii", "vvvvvvvvvvvvvvvvvvvv", "nnnnnnnnvvvvvvvvvvvv", "ssssssssssssssssssss", "aaaaaaaaaaaaaaaaaaaa", "eeeeeeeeqqqqqqqqqqqq", "tttttttteeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "zzzzzzzzzzzzzzzzzzzz", "qqqqqqqqqqqqqqqqdddd", "tttttttttttttttttttt", "xxrrrrrrrrrrrrrrrrrr", "hhhhhhhhhsssssssssss", "iiiiiiiiiiiiiiiiiiii", "mmmmmmmmmmmmaaaaaaaa", "nnnnnnnnnnnnnnnnnnnn", "ffffffffffffffffffff", "dddddddddddddddddddd", "yyyyyyyyyyyyyyywwwww", "mmmmmmmmmmmmmmmmmmmm", "aaaaaaaooooooooooooo", "gggggggggggggggggggg", "kkkkkkkkkkkkkkmmmmmm", "zzzzzzzzzzzzzzzyyyyy", "pppppppppppppppppppp", "xxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyy", "pppppppppppphhhhhhhh", "oooooooooooooouuuuuu", "sssssssssssskkkkkkkk", "jjjjjjjjjjjjjjjjjjjj", "ddddddddddddddnnnnnn", "kkkkkkkkkkkkkkkkkkkk"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> parts = {"lj", "f", "vh", "ds", "v", "t", "cr", "q", "o", "fo", "d", "hq", "nl", "h", "sf", "d", "s", "ac", "n", "zn", "e", "p", "mb", "qm", "m", "r", "bk", "q", "jt", "ue", "c", "ip", "z", "a", "k", "xv", "i", "py", "o", "gi", "rx", "w", "j", "x", "wu", "yd", "eg", "l", "kz", "g"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> parts = {"rrrrrrrrrrrrllllllll", "sssssssssssttttttttu", "dddddeeeeeeeaaaaaaaa", "yvvvvvvvvkkkwwwwwwww", "uuuuuuuuuuupppppppff", "ffffffffffffzzzzzzzz", "cchhhhhhhhhhhhhhssss", "nnnnnnnnnnooooyyyyyy", "jjjjjjjjjjjxxxxxxxxx", "wwwbbbbbbbbbbqqqqqqq", "mmmmmmmmmmmccccccccc", "iiiiiiiiigggggggggdd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> parts = {"bn", "qig", "stm", "jdle", "gku", "ux", "hfq", "yvj", "ra", "ecw", "oh", "zps"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> parts = {"qqqqqqqqqqqqqooooooo", "aaaaaaaaaaawwwwwwwww", "nnnnnnnnnnnnnggggggg", "ffffffnnnnnnnnnnnnnn", "xxxxxxxxxxxxxkkkkkkk", "pppppppppppppppppppp", "oooooooooozzzzzzzzzz", "bbbbbbbbbbbbbbbbbbbb", "rrrrrrrrrrrrrrrrrrrr", "vvvvvvvvvvvvvvvvvvvv", "eeeeeeeeeeeeeeeeerrr", "rrrrrrrddddddddddddd", "mmmmmmmmeeeeeeeeeeee", "ggggggggggggggggaaaa", "sssscccccccccccccccc", "vvvvvvvxxxxxxxxxxxxx", "iiiiiiiqqqqqqqqqqqqq", "yyyyyyyyyyyyyyyyyppp", "ttttttttthhhhhhhhhhh", "ppllllllllllllllllll", "zzzzzzzzzzzzzzzzzzss", "kkyyyyyyyyyyyyyyyyyy", "wjjjjjjjjjjjjjjjjjjj", "aaaaaaaaaaaaaaaaaaaa", "hhhhhhhhhhhhhhhhhhii", "ffffffffffffffffffff", "jjjjjjjjjjjjjjjjjjjj", "dddddddddddddddddddv", "ssssssssssssssssssss", "cccccccccccccccccccc", "wwwwwwwwwwwwwwwwwwww", "uuuuuuuuuuuubbbbbbbb", "kkkkkkkkkkkkkkkkkkkk", "tttttttttttttttttttt", "iiiiiiiiiiiiiiiiiiii", "mmmmmmmmmmmmmmmmmmmm", "lllllllllllllluuuuuu"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> parts = {"pk", "tg", "xs", "zx", "ar", "y", "kj", "h", "l", "n", "ol", "lq", "vo", "st", "ui", "na", "mp", "wy", "bc", "yd", "ju", "rw", "ge", "t", "cm", "z", "e", "qn", "u", "i", "g", "fh", "r", "b", "m", "v", "df"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> parts = {"ffffffffffffffffffff", "cccccccccccccccccccc", "hhhhhhhhhhhhhhhfffff", "kkkkkkkkkkkkkkkkkkkk", "hhhhhhhhhhhhhhhhhhhh", "iiiiiiiiiiiiiiiiiiii", "ttttrrrrrrrrrrrrrrrr", "yyyyyyyyyyyyyyyyyhhh", "tttttttttttttttttttt", "kkkkkkkkkkkkkkkkkkww", "eeeeeeeeeeeeeeeeeeee", "nnnnnnnnnnnnnnnnnnnn", "ccccccccccccccccccco", "pppppyyyyyyyyyyyyyyy", "rrrrrrrrrrrrrrrrrrrr", "ffffffffffffffffffff", "ssssssssnnnnnnnnnnnn", "yyyyyyyyyyyyyyyyyyyy", "uuuuuuuuuuuuuuuuuuuu", "lllppppppppppppppppp", "oooooooooooooooodddd", "eeeeeeeeeeeeeeeeeeee", "fffffffccccccccccccc", "llllllllllllllllllll", "oooooooooooooooooooo", "mmmmiiiiiiiiiiiiiiii", "wwwwwwwwwwwwwuuuuuuu", "mmmmmmmmmmmmmmmmmmmm", "iiiiiiiiiiiiiiiitttt", "ddddddddddddddddddee", "wwwwwwwwwwwwwwwwwwww", "dddddddddddddddddddd", "uuuuuuuuuuuuuuuuuuuu", "ssssssssssssssssssss", "tttttttttttttttttttt", "nnnnnnnnnnnnnnllllll", "llllllllllllllllllll", "ssssssssssssssssssss", "rrrrrrrrrrrrrrrrrrrr", "pppppppppppppppppppp", "eeeeemmmmmmmmmmmmmmm"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> parts = {"h", "l", "ch", "e", "c", "o", "au", "xc", "a", "eg", "y", "t", "lr", "kx", "u", "h", "vt", "x", "z", "mk", "rp", "y", "hl", "m", "r", "io", "gz", "i", "oa", "py", "g", "p", "z", "v", "a", "tm", "m", "v", "u", "k", "yi"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> parts = {"aaaaaaaaaaaaaaaaaaaa", "rrrrrrrrrrrrrrrrrrrr", "aaaaaaaaaaappppppppp", "yyyyyyyyyyyyyyyyyyyy", "rrrrrrrrrrrrrrrrrrrr", "yyyyyyyyyyyyyyyyyyyy", "gggggggggggggggggggg", "gggggggggggggggggggg", "rrrrrrrrrrrrrrrrrrrr", "nnnnynnnnnnynnnnnnny", "pppppppppppppppppppp", "gggggggggggggggggggg", "nnnnnynnnnnnnnnynnnn", "pppppppppppppppppppp", "anyyaaynaayaaaaaaaaa", "nnynnynnynnnnnnnaaaa", "yyyynnnnnnnnnynnnnyn", "nnynnnnynynnnnnnynyn", "gggggggggggggggrrrrr", "pppppppppppppppppppp", "pppppppppppppppppppp", "nnnnnnnnyynnnynnnnnn", "yyyyyyyyyyyyyyyyyyyy", "aaaaaaaaaaaaaaaaaaaa", "rrrrrrrrrrrrrrrrrrrr", "aaaaaaaaaaaaaaaaaaaa", "pppggggggggggggggggg"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> parts = {"y", "e", "yx", "z", "e", "z", "k", "k", "e", "iziziz", "x", "k", "izizi", "x", "yizyziyzy", "iziziziy", "zizizi", "izizizizizi", "ke", "x", "x", "izizi", "z", "y", "e", "y", "xk"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> parts = {"vvvvvmvvvivvmvivvuuu", "gggiggggggggggggggmg", "eeeeeeeeeeeeeeeeeeee", "pppppppppppppppppppp", "iiiiiiiiiiiiiimmmmmm", "mimmmgmgggggmmgggmmm", "gigggigigggggvvvvmvm", "mimmmmmmmmmmmmmmmmmi", "umguumuuuvuugrrurrru", "uuuuuugmvuuuuuugvuuv", "grvrrrrrrrrrrrrrrrrr", "bbbbbbbbbbbbbbbbbbkk", "nnnnnnnnnnnnnnnnnnnn", "eeeeeeeeeeeeeeeeeenn", "iiiiiiiiiiiiiiiiiiii", "pppppppppppppppppppp", "yyyyyyyyyyyyyyyyyyyy", "uguuuguuvuuuuiumvuiu", "vvvvvmvvviivvimvvvvi", "kkkkkkkkkkkkkkkkkkkk", "rrrrrrrrrrrrrrrrrryy", "nnnnnnnnnnnnbbbbbbbb", "kkkkkkkkkkkkkkkkkkkk", "bbbbbbbbbbbbbbbbbbbb", "nnnnnnnnnnnnnnnnnnnn", "yyyyyyyyyyyyyyyyyyyy"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> parts = {"zxznzxznzl", "ynyxy", "u", "f", "nx", "xnxyxyxyx", "ynynynyzxzx", "xnxn", "lxylxlzlydldl", "lyxzlyzlz", "ydzd", "mk", "s", "us", "n", "f", "q", "lylylzlnlxzlnl", "zxznznxzn", "k", "dq", "sm", "k", "m", "s", "q"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> parts = {"kkklllllllllllllllll", "ccccccccccccccccccco", "dddddddddddddddddddd", "mmmmmmmmmmmmmmmmmmmm", "zzzzzzzzzjjjjjjjjjjj", "llllllllllllllllllll", "ssssssssssssstsssstb", "hhrrrrrrrrrrrrrrrrrr", "iiiiiiiiiiiiiiiiiiii", "eeeeeeeeeeeeeeeeeeee", "oqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqzzzzz", "ssssssssssssssssssss", "yyyyyyyyyyyyyycccccc", "qqqqqqqqqqqqqqqqqqqq", "jjjjjjjjjjjjjjjjjjjj", "ththhhhshhhhhhhhehhe", "bbbbbbbsbbbbeeeeebee", "yyyyyyyyyyyyyyyyyyyy", "tttttttttttttttttttt", "etbeebeeeeeeeeeeeese", "cccccccccccccccccccc", "hhhshbhhhhthhhhbhhst", "zzzzzzzzzzzzzzzzzzzz", "tttttttttttttttsssss", "jjjjjjjjjjjjjjjjjjjj", "bbbbbbbbbbbstbbbbbbb", "iiiiiiiiiiiiiiiiiiii", "oooooooooooooooooooo", "bbbbbbbbbbbbbbtbtbbb", "dddddddddddddddddkkk", "eeeeeeehhbbthhhthehs", "rrrrrrrrrrrrrruuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "oooooooooooooooooooo", "zzzzzzzzzzzzzzzzzzzz", "jjjjjjjjjmmmmmmmmmmm", "rrrrrrrrrrrrrrrrrrrr", "mmmmmmmmmmmmmmmmmmmm", "kkkkkkkkkkkkkkkkkkkk", "llllllllllllllllliii", "kkkkkkkkkkkkkkkkkkkk", "hhshhtthhhehhhhhhhhh", "uuuuuuuudddddddddddd", "iiiiiiiiyyyyyyyyyyyy", "oooooooooooooooooooo", "uuuuuuuuuuuuuuuuuuuu"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> parts = {"iy", "bq", "e", "c", "nl", "y", "gvgvs", "dm", "k", "h", "qj", "jn", "g", "pb", "j", "l", "vdvdgdhdh", "sgshsh", "p", "v", "hvshshgh", "b", "dgdsdvdsdgv", "n", "vg", "l", "sgvs", "k", "q", "svsvs", "ei", "hdsvdvdhdg", "ma", "a", "a", "q", "n", "lc", "m", "c", "i", "yk", "i", "dgdvdhd", "ae", "kp", "q", "a"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> parts = {"tttttttsssssssssssss", "wfwwwcwwwwwlwcwwwwww", "ffffffcfrrrclrrrrrfr", "kkkttttttttttttttttt", "rrrrrrrrlrrrcrcrrcrf", "wwwrcwlzzzzzzzzzzzzz", "qqqqqqqqqddddddddddd", "dddddddddddddddddddd", "kkkkkkkkkkkkkkkkkkkk", "zzzzzzzzzzzzzzzzzzzz", "ppppppppppppppppppkk", "ssssqqqqqqqqqqqqqqqq", "ccccccccccclcccccccc", "ccccclccccccffffffff", "llllllllllllllllllcc", "mmmmmmmmmmmmmmmmmmmm", "fflffflffffffffflllc", "mmmppppppppppppppppp"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> parts = {"vi", "gzgfgqgfg", "zfzufquzu", "sv", "uqufufufuz", "gufgqh", "jr", "r", "s", "h", "ys", "ij", "fqf", "fqfz", "qf", "d", "zqzqzqf", "dy"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> parts = {"yyyyyyyyyyyyyyyyyyyy", "yyyyyyyyyyyyyyyyyyyy", "uuuuuuuuuuuuuuuuuuuu", "vvvvvmvmmmmmmmmmmmmm", "rrrrrrrrrrrrrrrrrrrr", "wwwwwmwvwvwwwwwwwwww", "uuuuuuuuuuuuuuuuuuuu", "cccccccccccccccccccc", "xxxxxxxxxxxxxxxxxxxx", "rrrrrrrrrrrrrrrrrrrr", "xxxxxxxxxxxxxxxxxxxx", "cccccccccccccccccccc", "mmmmmmmmmmmmmmwwwwwv", "xxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxx", "mmmmmmmmmmmmvmmmmmmm", "wwwwwwwyyyyyyyyyyyyy", "xxxxxrrrrrrrrrrrrrrr", "xxxxxxxxxxxxxxxxxxxx", "uccccccccccccccccccc", "cccccccccccccccccccc", "rrrrrrrrrrrrrrrrrrrr", "cccccccccccccccccccc", "mmmmmmmmvmmmmmmmmmmm", "yyyyyyyxxxxxxxxxxxxx", "mmmmmmmmmmmmmmmmmmmm", "uuuuuuuuuuuuuuuuuuuu", "wwmwwwvwvwwwwwwwwwww", "llllllllllllllllllll", "yyyyyyyyyyyyyyyyyyyy", "llllllllllllllllllll", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "llllllllllllllllllll", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "cccccccccccccccccccc", "llllllllllllllllllll", "uuuuuuuuuuuuuuuuuuuu", "rrrrrrrrrrrrrrrrrrrr", "mmwwwwwwwwvmwwwwvwww", "rrrrrrrrrlllllllllll", "vvvvvvvvvvvvvvvvvvvv", "wwvmvwvwwwwwwwwwwwwv", "yyyyyyyyyyyyyyyyyyyy", "mmmmmmmmmmmmmvmmmmmm", "wwwwmwwvmwwmwwwwwvwv", "lllllluuuuuuuuuuuuuu"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> parts = {"q", "q", "o", "sgsg", "h", "bgbsbsb", "o", "w", "z", "h", "z", "w", "gbs", "z", "z", "gsg", "bq", "zh", "z", "ow", "w", "h", "w", "gsg", "qz", "g", "o", "bgbsbsb", "i", "q", "i", "s", "s", "i", "s", "b", "w", "i", "o", "h", "gbsgbsb", "hi", "s", "bsgsbsbs", "q", "gsg", "bgbsgbgbsbs", "io"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> parts = {"kkkkkkkkkkkkkkkkaaaa", "ssssssssssssssssslll", "llllllllllllllllllll", "zzzzzzzzzzzzzzzkkkkk", "vvvvvvvvvvvvvvvvvvvv", "iiiiiiiiiiiiiiiiiiii", "aaaaaaaaaaaaaaasssss", "mvmmmmmjmmmmmjmmmmmm", "vvvvvvvvvvvvvvvvvvvv", "jjjjjfjvjjfmmmmvmfmm", "llllllllllllllllllll", "ssssssssssssssssssss", "iiiiiiiiiiiiiiiiiiii", "fffffvfvffffffvffffv", "xxxxxxxxxxxxxxxxxxxx", "zzzzzzzzzzzzzzzzzzzz", "lllllllllllllxxxxxxx", "vvvvffffffffffffffff", "jvjjjfjvjjjjjjjjjjjj", "mmmmmmmmmmmmmmmmmmmm", "mzzzzzzzzzzzzzzzzzzz", "rrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrri", "kkkkkkkkkkkkkkkkkkkk", "aaaaaaaaaaaaaaaaaaaa", "xxxxxxxxxxxxxxxxxxxx", "jjjjjvjjjjjjjjjjfjvv", "kkkkkkkkkkkkkkkkkkkk"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> parts = {"rv", "oi", "i", "nr", "p", "l", "vo", "qpqxqxq", "p", "xkxpxkqpqkq", "i", "o", "l", "kpkpkpkp", "e", "n", "ie", "pk", "xpxkxpx", "q", "qn", "t", "tl", "r", "v", "e", "xpxkxp", "r"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> parts = {"llllllllllllllllllll", "llllllllllllllllllll", "iiiiiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiiiiiiii", "iiiiiiiikikikkikkkkk", "ikkikkkkkkkkkkkkkkkk", "kkikkkkkkikkkikiikkk", "llllllllllllllllllll", "llllllllllllllllllll", "kkkkllllllllllllllll", "kikkiikkkkkkkkkkkiki", "llllllllllllllllllll", "kkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkk", "llllllllllllllllllll", "iiiiiiiiiiiiiiiiiiii", "iiiiiiiiiiiiiiiiiiii", "kkkkkkkkkkkkkkkkkkkk", "kkikkkkkkkikkkkkkiki", "iiiiiiiiiiiiiiiiiiii", "kkkikkiiikikkkkkikik", "llllllllllllllllllll", "llllllllllllllllllll", "iiiiiiiiiiiiiiiiiiii"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> parts = {"f", "f", "g", "g", "gvgvgvgv", "gvgv", "vgvgvgvgv", "f", "f", "vf", "vgvgvgvg", "f", "v", "v", "f", "g", "g", "v", "vgvgvgvg", "g", "vgvgvgvgvgv", "f", "f", "g"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> parts = {"eeeeeeeeeeeeeeeeeeee", "pppppppppppppppppppp", "vvvvvvvvvvvvvvvvvvvv", "pppppppppppppppppppp", "eeeeeeeeeeeeeeeeeeee", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "pppppppppppppppppppp", "eeeeeeeeeeeeeeeeeeee", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "pppppppppppppppppppp", "vppvvpvppppppvvpvpvv", "pvppvpppvvppppvvvpvv", "pvpvpvpvvvpvpppppvpp", "eeeeeeeeeeeeeeeeeeee", "vvvvvvvvvvvvvvvvvvvv", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "pppppppppppeeeeeeeee", "ppvpppppppvvvppppppp", "pppppppppppppppppppp", "pppppppppppppppppppp", "pppvvpvpppppppvvpvpp", "eeeeeeeeeeeeeeeeeeee", "vvvvvvvvvvvvvvvvvvvv", "pppppppppppppppppppp", "vvvvvvvvvvvvvvvvvvvv", "eeeeeeeeeeeeeeeeeeee", "vvvvvvvvvvvvvvvvvvvv", "eeeeeeeeeeeeeeeeeeee", "pvpvpppppvvppppppppp", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee", "vvvpvpvpppvpvvppvpvv", "pppppppppppppppppppp", "eeeeeeeeeeeeeeeeeeee", "vvvvvvvvvvvvvvvvvvvv", "vpvvpppvppppvvpppvpp", "pppvpppvpppppppppppp", "vvvvvvvvvvvvvvvvvvvv", "eeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeee"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> parts = {"g", "c", "l", "c", "g", "l", "l", "c", "g", "l", "l", "g", "g", "c", "lclclclclcl", "clclclclcl", "clclclclclclc", "g", "l", "g", "g", "l", "l", "cg", "clclc", "c", "c", "clclclclc", "g", "l", "c", "l", "g", "l", "g", "clclclc", "g", "g", "lclclclclclcl", "c", "g", "l", "lclclclclc", "clclc", "l", "g", "g"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> parts = {"jjjjjjjjjjjjjjjjxxxx", "fihiihiiiihiiiiiiiii", "nnnnnnnnnnnnnnnnnnnn", "sssssszzzzzzzzzzzzzz", "zzzzzzzwwwwwwwwwwwww", "ppppiipipppppppccccc", "ppphpppplpppippppipp", "hiiiiiiiiillllllllll", "llllllllhllilfpppppp", "xxxxxxxxxxxxxxxxxxxx", "hhhhhhhhhhhhhhhhhhhh", "gggggggggggggggggggg", "hcciicccccicicchcccc", "wwwwwwwwwwwwwwwwwwww", "xxxxxxxxxxxxxxxxxxxx", "gggggggggggggggggggg", "yyyyyyyyyyyyyyyyyyyy", "nnnnnnnnnnnnnnnnnnnn", "xxxxxxxsssssssssssss", "iiiiifiiiiiiiififihh", "qlqqqqqqqqqqqqqqqqqq", "hfpifpppppppippppppp", "zzzzzzzzzzzzzzzzzzzz", "hhhhhhhhhhhhhhhhhhhh", "cfcicflfccccccicccil", "xxxxxxxxxxxxxxxxxxxx", "uuuuuuuuuuuuuuuuuuuu", "lillfllllllllhlllhll", "yyyyyyyyyyyyyyyyyyyy", "qqjjjjjjjjjjjjjjjjjj", "qiqlqqpqiplqhqfiqqqp", "fffffffffffhffffffff", "phqcqflqcqpqpqqqqhcq", "hhccccccicqqqqqqqiqq", "hhffffffhfffffffffff", "zzzzzzzzzzzzzzzzzzzz", "ssssssssssssssssssss", "zzzzzzzzzzzzzzzzzzzz", "uuuuuuuuuuuuuuuuuunn", "hicccichccpcccllcchc", "nnnggggggggggggggggg", "yyyyuuuuuuuuuuuuuuuu", "wwwwwwwwwwwwyyyyyyyy", "jjjjjjjjjjjjjjjjjjjj", "wwwwwwwwwwwwwwwwwwww", "qpqqqqqcqlqqqqqqqpqq", "ssssssssssssssssssss"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> parts = {"so", "cxjxjxjx", "u", "mb", "bd", "gxgxgi", "gjgwgxgxg", "jxw", "wjwxwcg", "o", "j", "q", "jixixixiji", "d", "o", "q", "r", "u", "om", "xcxcxcxj", "awa", "jcgxcgxg", "b", "j", "icixicwcixixw", "o", "e", "wxwcwjwjw", "r", "as", "axawagaxgwajacxag", "cjc", "gjaiacwaiagagajia", "jixiaxa", "jcjc", "b", "m", "b", "eu", "jxixijigiwiji", "uq", "re", "dr", "s", "d", "agaiawaga", "m"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> parts = {"wwwwwiiiiiiiiiiiiiii", "wwwwwwwwwwwwwwwwwwww", "uuuuuuuuuuuuuuuuuuuu", "hhhhhhhhhhhhhhhhhhhg", "oooooooooooooooooooo", "iiiiiiiiiiiiiiiiiiii", "ooyyyyyyyyyyyyyyyyyy", "ssssssssssssuuuuuuuu", "bmbbbbbbbbbblbvvmvbv", "mmmmhbbbbblbbbmbbbbb", "jjjjjjoooooooooooooo", "yyyyyyyyyyyyyyyyyyyy", "vlvvvmvvlggvvvbbvvmv", "mbddvrrrrvrhvglrrrrh", "lllmlmmmmmmmmlmgmmgm", "dlhddhddvdbddvdddlhd", "zzzzzzzzzzzzzzzzzwww", "vvvvmvvvmvvvdddddddd", "kkkkkkssssssssssssss", "rrrvrrbhrrlkkkblkvkk", "rrlrrrhrrllrlrrrrrrg", "ujjjjjjjjjjjjjjjjjjj", "kbkrhvkkkkkkkkkkkkkk", "ggggggggggggggllllll", "dlvdddhddbddlhllghmd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> parts = {"nk", "n", "x", "rd", "z", "k", "zc", "px", "gogjgaoaga", "orgjgog", "sz", "c", "ajaoajdagaoa", "ogmatatradjtr", "jojojododo", "mjrmrmamgmamjrm", "en", "aoaoam", "up", "tatgrtjugjuau", "tjtrtjtjtd", "xs", "ugutrau", "dj", "mjamrmgmjrjdrom"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> parts = {"ccuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "ubbbbbbbbbbbbbbbbbbb", "bbbbbbqqqqqqqqqqqqqq", "qqqqqhhhhhhhhhhhhhhh", "bbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccc", "hhhhhhhhhhhhhhhhhhhh", "cccccccccccccccccccc", "qqqqqqqqqqqqqqqqqqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ccccccccccccccccccccccccccccccccccccccccccuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuubbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> parts = {"bf", "f", "fu", "us", "sp", "u", "b", "p", "b", "s"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbfffuuussspp";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> parts = {"vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvv", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvv", "vvvvuuuuuuuuuuuuuuuu", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "uuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvv", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuu", "wwwwwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwww", "uuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuwww", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> parts = {"j", "o", "f", "f", "f", "f", "j", "f", "f", "j", "o", "j", "jf", "o", "o", "o", "o", "j", "j", "f", "j", "f", "f", "j", "j", "o", "o", "j", "o", "j", "o", "f", "f", "o", "j", "o", "o", "f", "fo", "j", "j", "j", "o"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "jjjjjjjjjjjjjjjjffffffffffffffooooooooooooooo";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> parts = {"wwwwwwwwwwwwwwvvvvvv", "cccccccccccccccccccx", "iiiiiiiwwwwwwwwwwwww", "dddddddddddddddddddd", "ssssssssssssssssslll", "dkkkkkkkkkkkkkkkkkkk", "fffffffffffaaaaaaaaa", "mmmmmmoooooooommoooo", "xxxxxxxyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzdd", "hhrrrrrrrrrrrrrrrrrr", "tttttttttttttttiiiii", "vvvvvvvvvvvvvvvvvvvv", "aaaaaaaaaassssssssss", "iiiiiiiiiiiiiiiiiiii", "kkkjjjjjjjjjjjjjjjjj", "jjjjjqqqqqqqqqqqqqqq", "rrffffffffffffffffff", "hhhhhhhhhhhhhhhhhhhh", "eeeeeeeeeeeeeeeeecce", "qqqqqqqqqqqqqqqqqqqq", "yyyggggggggggggggggg", "vnnnnnnnnnnnnnnnnnnn", "mmmmmmmmmmmmmmmmmmmm", "ooooooooooeeeeeeeeeo", "xxxxxxxxxxxxxxxxxxxx", "gggggttttttttttttttt", "llllllllllllllllllzz", "nnnnnnnnnnhhhhhhhhhh"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> parts = {"qj", "ep", "iq", "c", "zn", "cv", "ym", "hfhf", "pu", "bc", "tl", "di", "j", "mz", "i", "vw", "ws", "ly", "t", "xex", "s", "ug", "jr", "h", "fxf", "p", "gd", "nb", "rt"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> parts = {"llllllllllllllllllll", "rrrrrrrrrrhhhhhhhhhh", "gggggmmmmmmmmmmmmmmm", "ppoppiipiiiiiiiipiii", "iwzzzzbzzzzztzzubkzo", "nnnnnnnnnnnnnnnnnnll", "aoguugggkiggakwggdzg", "iiiwpdwwwwwwwwwwtttt", "tttttpttdttkkkkkokkk", "dddddddddddddooooooo", "sscccccccccccccccccc", "eeeeeeeeeeeeeeeeeeee", "jjjjjjjjrrrrrrrrrrrr", "uuuupuuuuuuupupuuuuu", "zdzzztzzzzwzkzaaaaaa", "xxxxxqqqqqqqqqqqqqqq", "vvvvvvvvvvvvvvvvvyyy", "oggggpgawpgggwoguggg", "qqqqqjjjjjjjjjjjjjjj", "fffffffffvvvvvvvvvvv", "yyyyyyyyyyyyyynnnnnn", "kopkkkkkkkkpkkkkuutp", "ccccxxxxxxxxxxxxxxxx", "llllllleeeeeeeeeeeee", "oooooooooppppppppppp", "patataaazoakaaaagigb", "dupubbbbbbbbbbbwbbbb", "kbbbbbbibbzzzzzzbzzb", "esssssssssssssssssss", "mmmmmmmmmmffffffffff", "hhhhhhhhhhhhhhhhhhhh"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> parts = {"g", "lu", "km", "yvybybyb", "bqhohshcoahv", "fg", "dvkckabkdaqkihk", "bqyiqs", "sysisava", "iv", "ep", "w", "zl", "cycycyc", "hihshqhahd", "jn", "xr", "vkykdqykqvkck", "nz", "tx", "rf", "avyayacsy", "pj", "gw", "vy", "ydsdsdhvdadkbko", "icycoqo", "aobohoho", "we", "mt", "u"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> parts = {"looooooaooomooooojro", "jljjjbbbbbbbbbjbmbbb", "obubmuruumuruuuuuouu", "aaaaaaaaaaaaaaaaaaaa", "mbbrararrlrbrrrjrjrr", "mlllllllllamllljjjjm", "gkkkkkkkkkkkkkkkkkkk", "uuueeeeeeeeeeeeeeeee", "tttttttttttttttttttt", "uuuujuujmujuubmouuuu", "eeeeeeeeeeeeeeeeeeee", "ttttttttttttiiiiiiii", "ooooroaobooaorooooou", "qqqqqqgggggggggggggg", "iiiiiiiiiiiiiiiiiiii", "fffffffffffffffffppp", "pppppppppppppppppppp", "zzzzzzzzzzznnnnnnnnn", "jjjjajjjjjjjjjljjjjj", "vvvvvvvvvvvvvvvvvvvv", "gggggggggggggggggggg", "iiiiiiiiiiiiiiiiiizz", "hhhhhhhhqqqqqqqqqqqq", "mrrrrbrojololobobooo", "nnnnnnnnnnnnnnnnnnnn", "pppppppppppppppppppv", "qqqqqqqqqqqqqqqqqqqq", "amammmmmmmmmmmmmmmmm", "wwwwwwwwwwwwwwwwwttt", "mmmmmmmmmmmallllllll", "luurmbbjauuouluuujuo", "rrbrrrlrarrrjmrrjrrr", "eeeeeeffffffffffffff", "xxxxwwwwwwwwwwwwwwww", "vvvvvvvvvvvvvvvhhhhh", "zzzzzzzzzzzzzzzzzzzz", "xxxxxxxxxxxxxxxxxxxx", "bbabbbbbblbbbbjlbbmb", "kkkkkkkkkkxxxxxxxxxx", "hhhhhhhhhhhhhhhhhhhh"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> parts = {"vgaghgfwg", "fvfmfmhm", "gmzmhzwzhzwzgz", "a", "hmwawawvwmwfwfw", "hvahvfh", "op", "zb", "i", "zfzfhzfzmhgz", "b", "ie", "gwgagmgagwgz", "xo", "e", "rk", "k", "cq", "fafvf", "n", "o", "ec", "ux", "hwmwgfgvgvgmgmg", "q", "kn", "x", "ahah", "si", "hav", "vzwhmfazgzvzfzg", "wmwvwawfhwfw", "br", "ds", "nu", "c", "d", "mamvmfvmhm", "pd", "u"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> parts = {"rrrrrrrrrggrgggrgggg", "aaaaaaaaabawaaaaaaaa", "ttttttyyyyyyyyyyyykk", "jjjjjjjjjjjfbffjbgff", "cccccccccccctttttttt", "gggdddgdddgddddjjjdj", "wwwwwbwbbbbbbbbbrrrr", "eeezzzzzzzzzzzzzzzzh", "ooooooooommmmmmmmmmm", "npppppppppppppiiiiii", "kkkkkkkkkkkeeeeeeeee", "iiiiiiiiiiiiiiivvvvv", "vvvvvvvvvvvvvooooooo", "frjbfffbfffgjfgffffq", "uuuuuuuuuuuuuuuuuucc", "xsssssssssssssssssss", "llfllllgllbldajdllll", "hhhhhhhhhhhhhhhhhhhh", "hxxxxxxxxxxxxxxxxxxx", "dlblllnnnnnnnnnnnnnn", "qqqqqbqqqdqqrqqqdara"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> parts = {"cfcfcf", "wbwzw", "yxn", "ljbjlbfj", "ry", "fgfgfglgl", "zbzbc", "dsq", "oi", "vma", "nd", "ae", "eo", "jclbjbjfljfju", "kr", "ht", "pjpfpbpgwlgp", "q", "qh", "gpbpv", "ubugucugwcw"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> parts = {"nkkkkkkiikidiiiiikin", "aaaaaaaaaaaaaaaaaaaa", "illlllllqllllkllllil", "hdhhlhihhknhhhnnhlhh", "mmmmmmmrrrrrrrrrrrrr", "yyyyyyyyyyyyyyyyyyyy", "ddddddddddddddqqqqqq", "vvvvvvvvvvvvoooooooo", "ikinidiiiiiiikiiiiii", "vvvvvvvvvvvvvvvvvvvv", "qqqqqqqqqqqnnnnnnnnq", "yyyyyyyaaaaaaaaaaaaa", "zzzzzzzzzzssssssssss", "ldlllllilllnllillhdh", "ggggggggggtttttttttt", "ssssssssssssssssssss", "rrrrrrrrrrrrrrrrrrrr", "dqqqqqqqqqqdqqqdqqqq", "gggggggggggggggggggg", "qhqhnhhhhhhhhlhhhhhh", "mmmmmmmmmmmmmmmmmmmm", "aaaaaaaaaaaaaaaaazzz", "mmmmmmmmmmmmmmmmmmmm", "rrrrrrrrrrryyyyyyyyy", "nnnnnnkknnnkqkkkkkdk", "dddddddddddddddddddd", "ssssssssgggggggggggg", "zzzzzzzzzzzzzzzzzzzz", "iiiqiqkiikkiiniikill", "hhhhhhhhhhhhhhvvvvvv", "nnqnnnnnnnnnnnnnnnnn", "oooooooooooooooooooo", "ooooooooooooooooooom", "tttttttttttttttttttt"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> parts = {"zrorokoroz", "d", "oytyryoy", "vkvyvovrzvzvyv", "ax", "e", "kt", "js", "orozokoro", "j", "tzt", "ed", "cf", "ykyoyzyoyvkv", "hw", "f", "x", "ktktkt", "h", "tvtvzvyv", "a", "dc", "a", "xe", "zrzrtrkr", "k", "fh", "c", "ototrorozoroy", "vj", "ztz", "s", "sa", "w"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> parts = {"gggggggggggggggggggg", "dddddddddddddddddddd", "bbffffffffffffffffff", "bbbbbbbbbbbbbbbbbbbb", "ffffffffffffffffffff", "pppppppppppppppppppp", "gggggggggggggggggggg", "llllllllllllllllllll", "bbbbbbbbbbbbbbbbbbbb", "pppppppppppppppppppp", "dddddddddddddddddddd", "llllllllllllllllllll", "bbbbbbbbbbbbbbbbbbbb", "ffffffffffffffffffff", "ffffffffffffffffffff", "pppppppppppppppppppp", "llllllllllllpppppppp", "gggggggggggggggggggg", "ffffffffffffffffffff", "ddddddddddddddddbbbb", "gggggggggggggggggggg", "pppppppppppppppppppg", "dddddddddddddddddddd", "bbbbbbbbbbbbbbbbbbbb", "ffllllllllllllllllll", "llllllllllllllllllll"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllpppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> parts = {"s", "l", "bg", "b", "g", "w", "s", "h", "b", "w", "l", "h", "b", "g", "g", "w", "hw", "s", "g", "lb", "s", "ws", "l", "b", "gh", "h"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "llllbbbbbbgggggghhhhhwwwwwsssss";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> parts = {"sssshhhhhhhhhhhhhhhh", "tvvvvvvvvvvvvvvvvvii", "xxxxxxxxxxxxxxxxxxxx", "oooooooooooooooooooo", "xxxxxxxxxxxxxkkkkkkk", "iiiiiiiiiiiiiiiiiiii", "cccccccggggggggggggg", "wwwwwwwwoooooooooooo", "cccccccccccccccccccc", "kkkkkkkkkkkkkkkkkkkk", "gggggggggggggggggggg", "ffffffffffffffffffaa", "hhhhhhhhhhhhhhhhhwww", "zzzzzzzzzzzzzzzzzzzz", "pppppppppppppppppppu", "qqqqqqqqqqqqqqqqffff", "aaaaaaaaaaaaaaaaaaaa", "wwwwwwwwwwwwwwwwwwww", "ooorrrrrrrrrrrrrrrrr", "aaaaaaaaaajjjjjjjjjj", "tttttttttttttttttttt", "rrrrrrrrrlllllllllll", "ffffffffffffffffffff", "gggggppppppppppppppp", "uuuuuuuuuuuuuuuuuuuu", "ssssssssssssssssssss", "zzzzzzzzzzzzzccccccc", "eeeeeeeeeeexxxxxxxxx", "llllllllllllllllllzz", "tttttvvvvvtvvvvvvvvv", "jjjjjjjjjjjjjjjjjjss", "uuuuuueeeeeeeeeeeeee", "iiiiiiiiiiiqqqqqqqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> parts = {"es", "xmh", "d", "c", "do", "h", "ij", "bc", "i", "o", "j", "at", "sb", "y", "gk", "pa", "t", "b", "cu", "tw", "x", "ur", "a", "jg", "k", "e", "yi", "fd", "ry", "xmxm", "we", "kf", "hp"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> parts = {"ac", "bc"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> parts = {"xy", "xz", "zt", "yt"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> parts = {"ab", "ab", "ab", "ab", "abbbbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> parts = {"ab", "ab"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> parts = {"ba", "ca", "ax"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> parts = {"da", "az", "aqaa", "zx", "xw", "xtxx"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> parts = {"ab", "bc", "bb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbc";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> parts = {"ab", "bc", "ca", "dd", "ef"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> parts = {"aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaabbbbbb", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "ccccccaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "ccccccaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbb";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> parts = {"gggg", "ccbbddd", "rrrrrrr", "ppp", "ppp", "pp", "pp", "ddee", "ppp", "ppp", "pp", "pp", "wwwww", "wwqqq", "qqqqssssrrr", "ttt", "tttkkkkk", "kkkkllllmmmm", "mmmmnnn", "no", "opppp", "ppp", "ppp", "pp", "pp", "eeeeeee", "fffggg", "ggg", "rrrrr", "ggghhhhiiiijjjj", "ddd", "ddd", "ddd", "ddd", "ggggg", "efffff", "jjyyyxxx", "ppp", "ppp", "pp", "pp", "p", "xxxxvvvvvuuuu", "uuuuwwww", "rrrtttt", "ddd", "ddd", "ddd", "ddd", "aaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> parts = {"aaa", "a", "abc", "ccc", "cd", "deeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeee", "eeeeeeeeeeeeeee", "eeeeeeeeeeeeeee", "eeeeeeeeeeeeeee", "eeeeeeeeeeeeeee", "eeeeeeeeeeeeeee", "eeeeeeeeeeeeeee"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaabcccccddeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> parts = {"qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "zghixqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqowejda", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqq"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "zghixqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqowejda";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> parts = {"pppppp", "aaaabbbbbp", "aaaaaaaa", "wwwwwzzzzz", "wwwwwww", "zzzzaaaaaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "wwwwwwwwwwwwzzzzzzzzzaaaaaaaaaaaaaaaaaabbbbbppppppp";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> parts = {"aaa", "abbbb", "bbb", "bbbbbb", "bc", "cdddd", "d", "d", "def", "fg", "f", "g", "ggg", "ggggg", "gggg", "ggg", "gg", "g", "g"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabbbbbbbbbbbbbbccdddddddefffggggggggggggggggggggg";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> parts = {"xx", "axb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> parts = {"aa", "ab", "ca", "aa", "bb", "a", "c", "a", "dd", "dc", "c", "cc", "a", "bk", "bbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "dddccccccaaaaaaaaabbbbbbbk";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> parts = {"abc", "cde", "ee", "ee", "e", "eee", "errgoz", "zx", "e"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abccdeeeeeeeeeeerrgozzx";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> parts = {"zzzzzzzzzzzzz", "mn", "no", "op", "pr", "rs", "ab", "bc", "cd", "de", "ef", "fg", "gh", "hj", "jk", "kl", "lm", "aaa", "bbb", "ccc", "st", "tu", "uv", "vw", "wx", "xy", "yz"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabbbbbcccccddeeffgghhjjkkllmmnnoopprrssttuuvvwwxxyyzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> parts = {"ac", "ba", "aa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaac";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> parts = {"ab", "bc", "bbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbbc";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> parts = {"ba", "aa", "ac"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaac";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> parts = {"abc", "dxe", "fxg"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> parts = {"cc", "ab", "bc", "bb", "cd", "dd", "dfffe"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbccccddddfffe";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> parts = {"abbbbc"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbc";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> parts = {"bd", "dc", "dd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "bddddc";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> parts = {"abcde", "eeeee"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeeeeee";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> parts = {"ax", "by", "cz", "yc", "xb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "axxbbyyccz";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> parts = {"abc", "ebf"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> parts = {"aba"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> parts = {"ba", "ac", "aa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaac";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> parts = {"aaaaaaaaaabbbbbbbbb", "bbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbb", "ccccccccccccccccccc", "ccccccccddddddddddd", "bbbbbbbbccccccccccc", "dddddddgggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggkkkkkkkkk", "kkkkkwwwwwwwwwwxxxx", "xzzzzzzzzzzzzzzzzzr"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccccccccccccccccccccccccccccccccccccccddddddddddddddddddggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggkkkkkkkkkkkkkkwwwwwwwwwwxxxxxzzzzzzzzzzzzzzzzzr";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> parts = {"bca", "aad", "aaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "bcaaaaaad";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> parts = {"ab", "bc", "de", "ef", "fd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> parts = {"abc", "cbe"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> parts = {"aat", "tzz", "ttt"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aatttttzz";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> parts = {"aabb", "bbcc", "xxyy", "yyzz", "de", "ef", "fd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> parts = {"aaa", "a", "aa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaa";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> parts = {"at", "tb", "t"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "atttb";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> parts = {"cd", "da", "dd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "cdddda";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> parts = {"abbc", "dbbe"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> parts = {"ca", "ab", "a"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "caaab";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> parts = {"dd", "fd", "dg", "ba", "ac", "aa", "gb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "fddddggbbaaaac";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> parts = {"aaa", "ab", "ca", "de", "fd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> parts = {"a", "bac"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> parts = {"ab", "bc", "ca", "de", "ef", "zx", "xy"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> parts = {"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaa", "aaaaaaa", "aaaaaaaa", "aaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "b", "bb", "bbbb", "bbbbb", "bbbbbb", "bbbbbbbb", "bbbbbbbbb", "bbbbbbbb", "bbbbbbbbb", "bbbbbbbbbb", "bbbbbbbbbbb", "bbbbbbbbbbbb", "cd", "de", "ddd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> parts = {"abc", "bcd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> parts = {"mooz"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "mooz";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> parts = {"ba", "ac", "aaa"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaaac";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> parts = {"aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "bbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "cccccccccccccccccccc", "zzzzzzzzzzzzzzzzzzzz", "aaaaazzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzccccc", "cccccccccccccccbbbbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> parts = {"abc", "b", "de"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> parts = {"ab", "bc", "bd"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> parts = {"abc", "cok"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "abccok";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> parts = {"ab", "ac"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<string> parts = {"abc", "b"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<string> parts = {"aab", "bcc", "bbb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aabbbbbcc";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<string> parts = {"c", "a", "cc", "bb", "ccc", "aa", "ccc", "ab", "c", "aaa", "c", "bb", "c", "aaa", "c", "bc", "ch", "aaa", "c", "bb", "c", "aaaa", "c", "cc", "c", "aaaaa", "c", "bb", "c", "a", "c"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbcccccccccccccccccccccccch";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<string> parts = {"ab", "bx", "cb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<string> parts = {"bc", "ab", "cd", "zzc"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<string> parts = {"aaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccc", "dddddddddddddddddddd", "eeeeeeeeeeeeeeeeeeee", "ffffffffffffffffffff", "gggggggggggggggggggg", "hhhhhhhhhhhhhhhhhhhh", "iiiiiiiiiiiiiiiiiiii", "jjjjjjjjjjjjjjjjjjjj", "kkkkkkkkkkkkkkkkkkkk", "llllllllllllllllllll", "mmmmmmmmmmmmmmmmmmmm", "nnnnnnnnnnnnnnnnnnnn", "oooooooooooooooooooo", "pppppppppppppppppppp", "qqqqqqqqqqqqqqqqqqqq", "rrrrrrrrrrrrrrrrrrrr", "ssssssssssssssssssss", "tttttttttttttttttttt", "uuuuuuuuuuuuuuuuuuuu", "vvvvvvvvvvvvvvvvvvvv", "wwwwwwwwwwwwwwwwwwww", "xxxxxxxxxxxxxxxxxxxx", "yyyyyyyyyyyyyyyyyyyy", "zzzzzzzzzzzzzzzzzzzz", "aaaaaaaaaabbbbbbbbbb", "bbbbbbbbbbcccccccccc", "ccccccccccdddddddddd", "ddddddddddeeeeeeeeee", "eeeeeeeeeeffffffffff", "ffffffffffgggggggggg", "gggggggggghhhhhhhhhh", "hhhhhhhhhhiiiiiiiiii", "iiiiiiiiiijjjjjjjjjj", "jjjjjjjjjjkkkkkkkkkk", "kkkkkkkkkkllllllllll", "llllllllllmmmmmmmmmm", "mmmmmmmmmmnnnnnnnnnn", "nnnnnnnnnnoooooooooo", "oooooooooopppppppppp", "ppppppppppqqqqqqqqqq", "qqqqqqqqqqrrrrrrrrrr", "rrrrrrrrrrssssssssss", "sssssssssstttttttttt", "ttttttttttuuuuuuuuuu", "uuuuuuuuuuvvvvvvvvvv", "vvvvvvvvvvwwwwwwwwww", "wwwwwwwwwwxxxxxxxxxx", "xxxxxxxxxxyyyyyyyyyy"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "MANY";
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<string> parts = {"bd", "cb", "eb"};
    GroupedWord* pObj = new GroupedWord();
    clock_t start = clock();
    string result = pObj->restore(parts);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8527113&rd=13694&pm=10153
********************************************************************************
#include <cassert> 
#include <cctype> 
#include <cfloat> 
#include <cmath> 
#include <cstdarg> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
 
#include <sys/resource.h> 
#include <sys/time.h> 
#include <unistd.h> 
 
#include <algorithm> 
#include <bitset> 
#include <complex> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iomanip> 
#include <iterator> 
#include <limits> 
#include <list> 
#include <map> 
#include <memory> 
#include <new> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <valarray> 
#include <vector> 
 
#include <ext/algorithm> 
#include <ext/hash_map> 
#include <ext/hash_set> 
#include <ext/numeric> 
 
using namespace std; 
using namespace __gnu_cxx; 
 
template<class T, class V> 
vector<T> operator,(vector<T> v, V t) { 
    v.push_back(t); 
    return v; 
} 
 
#define VAR(i,e) __typeof(e) i = (e) 
#define FOREACH(i, C) for (VAR(i, (C).begin()); i != (C).end(); ++i) 
 
#define FORI(p, x) for (int i = p; i < (int)(x); ++i) 
#define FORJ(p, x) for (int j = p; j < (int)(x); ++j) 
#define FORK(p, x) for (int k = p; k < (int)(x); ++k) 
#define S size() 
 
#define ALL(C) (C).begin(), (C).end() 
 
#define VS vector<string> 
#define SI set<int> 
 
struct GroupedWord{ 
    string restore(vector <string> parts); 
}; 
 
bool join1(VS &vs) { 
    FORI (0, vs.S) FORJ (0, vs.S) if (i != j) { 
        char c = vs[i][vs[i].S - 1]; 
        if (c == vs[j][0] && c == vs[j][vs[j].S - 1]) { 
            vs[i] += vs[j]; 
            vs.erase(vs.begin() + j); 
            return true; 
        } 
    } 
    return false; 
} 
 
bool join2(VS &vs) { 
    FORI (0, vs.S) FORJ (0, vs.S) if (i != j) { 
        char c = vs[i][vs[i].S - 1]; 
        if (c == vs[j][0]) { 
            vs[i] += vs[j]; 
            vs.erase(vs.begin() + j); 
            return true; 
        } 
    } 
    return false; 
} 
 
bool test(const string &str) { 
    FORI (0, str.S) FORJ (i + 1, str.S) if (str[i] == str[j]) { 
        FORK (i + 1, j) if (str[k] != str[i]) return false; 
    } 
    return true; 
} 
 
string GroupedWord::restore(vector <string> parts) { 
    FOREACH (it, parts) if (!test(*it)) return "IMPOSSIBLE"; 
    while (join1(parts)) {} 
    while (join2(parts)) {} 
    FOREACH (it, parts) if (!test(*it)) return "IMPOSSIBLE"; 
 
    FORI (0, parts.S) FORJ (i + 1, parts.S) { 
        SI s1(ALL(parts[i])); 
        SI s2(ALL(parts[j])); 
        FOREACH (it, s1) if (s2.count(*it)) return "IMPOSSIBLE"; 
    } 
 
    if (parts.S > 1) return "MANY"; 
    return parts[0]; 
} 
// Powered by Krzysan's Cleaner 1.4-6a 
 
 
// Powered by FileEdit
// Powered by moj 4.1 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/