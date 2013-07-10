/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11196
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

class TheBoringStoreDivOne {
public:
    string find(string J, string B);
};

string TheBoringStoreDivOne::find(string J, string B) {
    string ret;
    return ret;
}


int test0() {
    string J = "StoreOfJohn";
    string B = "StoreOfBrus";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "or";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string J = "JohnAndJohn";
    string B = "John";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string J = "JohnLikesToPlayGames";
    string B = "BrusAlsoLikesToPlayGames";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "esToPlayGames";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string J = "abacaba";
    string B = "abacabadabacaba";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abaabacaba";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string J = "kAT";
    string B = "O";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string J = "C";
    string B = "ey";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string J = "OOCSDp";
    string B = "N";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string J = "KWandRoiOUKWY";
    string B = "AImnsf";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string J = "FqmIVNkeeWqW";
    string B = "ggCUiNSW";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Wg";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string J = "uAQWLVQOkATO";
    string B = "UDCeyDAOOCSDpN";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "QOC";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string J = "MWaSyaMgqyVOaWS";
    string B = "yiAxCyvCaRA";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "MA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string J = "jCGAWWAJ";
    string B = "JzAuqKYEnK";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "AK";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string J = "MgyqGWaeloyk";
    string B = "AdWuaaxC";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ya";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string J = "EEGLuQvSCZAGuUj";
    string B = "OpPchWECUsm";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string J = "zKyKQuaCPkgGii";
    string B = "anYOOlwgYKy";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "KO";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string J = "RAIyiGFUxaGvWX";
    string B = "FKCemI";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string J = "iaMyul";
    string B = "OKgcKCGuGMU";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string J = "aqJkJaKO";
    string B = "aTxCeGnrKa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aKa";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string J = "sGidSYOaKp";
    string B = "smKWaW";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string J = "ukoJHa";
    string B = "uGvJHuuUOmP";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string J = "aaabbbaaaaaaa";
    string B = "aaababaabaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaba";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string J = "baaaaaaaaaaabaa";
    string B = "aaaaaabbaaaaba";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string J = "aaabaaaaabb";
    string B = "bbbaaaaaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabaaaaa";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string J = "aaaaaaabaabaaba";
    string B = "aabaaaaaabb";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaab";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string J = "aaaaabaaaaaa";
    string B = "aaaaabaaaabaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string J = "babbaaabaab";
    string B = "aabaaaababb";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abbaaaab";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string J = "aaaaaaabbaaaaaa";
    string B = "abaaaaaabaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaabaa";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string J = "aaaaaaabaaaaaba";
    string B = "baababbaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaabbaa";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string J = "baaaaabaaaaaa";
    string B = "aaaaaaaaaba";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string J = "aaabbaaabba";
    string B = "aaaaaabaaaaab";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabbaaaaaab";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string J = "aaabbbaaaaaaaaa";
    string B = "ababaabaaabbaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaabaaa";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string J = "aaaaaabaaaaaaaa";
    string B = "bbaaaabaabaaaba";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaabaaaaba";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string J = "aabbbbbaaaaaaaa";
    string B = "aabaaaaaaabaaba";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbaaaaaaaba";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string J = "aaabaaaaaabbbaa";
    string B = "aaaabaaaaaaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string J = "aaaabaaaababbaa";
    string B = "abaabaabaaaabab";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaabaaaabab";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string J = "hhhikkjhhjhhjjj";
    string B = "hijijhkhhjkkjhh";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "hhjjhh";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string J = "hjjhjhkhhhhhjjh";
    string B = "ikjhjjihjihhhij";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "hjjhjjih";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string J = "hhikkkijhhhhhjj";
    string B = "hhkhhhhhhjkhhih";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "hhhhhjkhh";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string J = "jjhihhjhhjkkijh";
    string B = "hhjjihhjjjhhhhh";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "jhihhjjj";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string J = "jhjjkhhhhkhiijj";
    string B = "hihjihhkjhhjihk";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "khhhjih";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string J = "zzzzzzzzzzzzzzz";
    string B = "zzzzzzzzzzzzzzz";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string J = "vvvvvvvvvvvvvv";
    string B = "vvvvvvvvvvvvvvv";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "vvvvvvvvvvvvvv";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string J = "nnnnnnnnnnnnnnn";
    string B = "mmmmmmmmmmmmmmm";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "nnnnnnnmmmmmmm";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string J = "efeeeeefeeeeffe";
    string B = "eeeeeeeeeefeeee";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "efeeeeefeeee";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string J = "efeeeeefeeeeffe";
    string B = "eeeeeeeeeefeeee";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "efeeeeefeeee";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string J = "efffefffefeeffe";
    string B = "fffeeefeeffffff";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "efffefeefffff";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string J = "efeeeeefeeeeffe";
    string B = "eeeeeeeeeeeeeee";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "efeeeeeeeeeee";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string J = "YYYYYYYYYYYYZYYYYZYYYYYZYYYYYYYZYZYYYYYYYYYYYYY";
    string B = "YYYYYYYYYYYZYYYYYYYYYYYYYYYYYYYYYYYYYZYZYYYZYYY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYYYYYYZYZYYYYYYYYYYYYYYYYYYYYYYYY";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string J = "YYYYYYYYYYYYYYZYYYYYYYYYZYYYYYYYYYYYYYYYYYZYYYY";
    string B = "YYZYYZYYYYYYYZYYYYYZYYZYYYYYYYYYYYYYYYYYYYYYYYY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYYYYYYYYYYYYYZYYYYYYYYYZYYYYYZYYZYY";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string J = "YYZZYYZYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY";
    string B = "YYYYYYYYYYZYYYYYYYYYYYYYZYYZZYYYYYYYYYYYYYYYYYY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYYYYYYYYYYYYYYYYYYYYYYYYZYYYYYYYYYYYYY";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string J = "YYYYYYYYYYYYZYYYYYYYYYYYYYYYYYYYYZYYYYYYYYYYYYY";
    string B = "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYZYYYYYYYYY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYYYYYYYYYYYZYYYYYYYYYYYYYYYYYYYYYYYYYYYYY";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string J = "YYZYZZZZZZYYZYZYYZYZYZYZYYYYYYZZYZYZYYYYYYZYYYY";
    string B = "YYYYYYYZYYZZYYYYYYYYYYYYZYYYYYYYYYYYZZZZYYYZYYY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ZYZYZYYYYYYZYYYYYYYYYYYZYY";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string J = "YZYYYYYYYYYYYYZYYYYYYYYYZZYYZYZYYYYYYYYYYYZZYYY";
    string B = "ZYZYYZYYYYZZYZYYYYYZYZZYYYYYYYZYYYYYYYYYYZZZYYY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYYYYYYYYYYZYYYYYYYYYZZZYYY";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string J = "YYZZYYZYZYYYYYYYZYYYYYZYYYYYYYYYYYYYYYYYYYYYYYY";
    string B = "YYYYYZYZYYZYYYZYYYZYYYYYZYYZZYZYYYYYYZYYYYYYYZY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYYYYYYYYYYYYYYYZYYYYY";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string J = "ZYYZYZYYYZYYYYYYZYYYYYYYYYYYYYYYZZYYYZYYYYYYZYY";
    string B = "YYYZYYYZYYYYYYYYYYYYYYYYYZYYYYYYZYYZYYYZYYYYYYY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ZYYYZYYYYYYZYYYYYYYYYYYYYYYYYYZYYYYYY";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string J = "ZYZZZZZZZZZYZZZYYZZZZZYZYYYZZYZZZZYZYYYYYYZYYZZ";
    string B = "YZYYYYYZYYZZZYYZZYYYZYZZZYYZYZYYYYYYZZZZYYYZYYZ";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZYZZZZYZYYYYYYZZZZYY";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string J = "YZYYYYYYZZZZZZZYZYZYYZYYZZZZZYZZYZYZYYZYYZZZYYY";
    string B = "ZYZYZZYYZYZZYZYYZYYZZZZZYYYZYYZZYZYZYYYYZZZZYYZ";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ZYZYZYYZYYZZZZZYZYYZYYZZ";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string J = "YYZZZZZYZYZZZYZZZYZYYZZYZYYYZYZZZZZYZYZZYZYZZZZ";
    string B = "YYYZYZZZZYZZYYZYZYZZYZYZZYZZZZZYYYZZZZYYYZZYYZZ";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YZZZZZYZYZZYZYZZZZYZZYYZ";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string J = "ZZYZZZZYZZYYYYZZZYYYYYYZYZZYZZZYZZYZYZYYYZYZZYY";
    string B = "YZYZYZYZZZZYZZZYZYYYYYYYZZZYYZYYZZYZZZYZYYYYZZY";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYYZYZZYZZZZYZZZYZYYYY";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string J = "YZYYYZZZYYYZZZYYZYYZYYZYYYZZYZZZZZYYZYYYZYYYYYZ";
    string B = "YYZYYYYZYZZZYZZYZZYZYYZYYZYZYZZZZYYZZZZYZZZZYYZ";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "YYZZZYYZYYZYYZYZYZZZZYYZ";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string J = "aaabbbaaaaaaaaaababaabaaabbaaaaaaaaaaabaaaaaaaa";
    string B = "bbaaaabaabaaabaaaaabbbbbaaaaaaaaaabaaaaaaaba";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaabaaaaaaaaaaabaaaaa";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string J = "baaabaabaabaaaababbabaaaaaaabbaaaaaaabaaaaaa";
    string B = "baaabaaaaaaabaaaaababaababbaaaaaabaaaaabaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aabaaaababbaaaaaabaaaaaba";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string J = "aaabbaaabbbaaaaababbaaaabbaababaaaaaabbabaaa";
    string B = "aaaaabaabaaaabaabaaabbaabbaaaaaaababaaaabaaabaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aababaaaaaababaaaabaa";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string J = "baaabaabaaaaaababaaabaaaaaabaaaaaabaaaaabaab";
    string B = "babaaaaabbbaabbaaaaaabbaaaaaabaababbaaabaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aabaaaaaabaaaaabaababbaaa";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string J = "aaaaabaaaaaaaaaabbaaaaabaaaaaaabbabaabaaaaaa";
    string B = "bbbbabaaabbaaaaaaaaaaaaabbaaaaaaaaaaaaaaaabaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaabaaaaaaabbabaaabbaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string J = "KWandRoiOUKWYAImnsfUiFqmI";
    string B = "VNkeeWqWggCUiNSWauuAQWLVQOkATOUDCeyDAOOCSD";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "KWau";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string J = "aRAEijCGAWWAJJzAuqKYEnKaUMgyqGWaeloykAdWuaaxCn";
    string B = "LEEGL";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "CGL";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string J = "abababababababababababababababababababababababa";
    string B = "bababababababababababababababababababababababab";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ababababababababababababababababababababababab";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string J = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string B = "aaaaaaaaaaabaaaaaaaaaaabaaaaaaaaaaabaaaaaaaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string J = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string B = "baaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaab";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string J = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string B = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string J = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string B = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string J = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string B = "baaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string J = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string B = "baaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string J = "nnE";
    string B = "CEttsnEtntCsCttssCE";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "nEtts";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string J = "qssq";
    string B = "qssOOsq";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "qssO";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string J = "llllGlllll";
    string B = "GGGlGGGlllGGGGlll";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "llllGlGGGlll";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string J = "PkkaP";
    string B = "jPQvkyyEEj";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Pky";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string J = "gyQMgQ";
    string B = "gMMMQQMMgQyM";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "QMMM";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string J = "qwertyqwertyhelltrentworlhelloworldhellthello";
    string B = "qwertyqwertyfuckfufuworldfuckckckqwertyputty";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "wertyqwertyfuck";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string J = "aaaAaAaAAAAaaAAAAaAaaAaaaaAaaaAaaAaAAAaAAAaAaaa";
    string B = "AAAaaaAAaAaAAAaaAaaaAAaAaAaaaAaAaAaAAaaAaAaAaAA";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAaAaaAaaAaaaAAaAaA";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string J = "abacaba";
    string B = "abacaba";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abacaba";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string J = "abaabbabaaababbaabababaababaaabaaaaabaabbbbbbaa";
    string B = "abaabbabaaababbaabababaababaaabaaaaabaabbbbbbaa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abaabbabaaababbaabababaababaaabaaaaabaabbbbbbaa";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string J = "acaAcA";
    string B = "bdbBdB";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string J = "BABAAABAAABBABBAABBBBAAABAAABBBBABBBABBAAABBAAB";
    string B = "AABAAAAAABBBABBBBABAAAABABBBAAAABAABABBBBBBBAAB";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "BAAABAAABBBBABAAAABA";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string J = "BBBBBBBBBBBBBBBBBBBBBBECBBBBBBBBBBBBBBBBBBBBBB";
    string B = "EAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBBBBBBBBBBBBBBBEAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string J = "aaaAAAaaaBBBaaaBbbbbbbbbbaaaaaaabbbbaaaaaabbbb";
    string B = "aaaaAAAaaaaabbbbbaaabbbbbbbbbaaaaaabbbbbaaaaab";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaBbbbbbbbbbaaaaaabbbbbaaa";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string J = "abababababCCCCCCCCCCXTSabababababCCCCCCCCCCSTX";
    string B = "abababababCCCCCCCCCCXTSabababababCCCCCCCCCCSTX";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababCCCCCCCCCCXTSabababababCCCCCCCCCC";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string J = "cbababcbabcbabbcbcbabcbbcbabcbcbfbcabbcbcbacbca";
    string B = "cbababcbcbabcbabcbfbacbabcbcbcabcbccbabcbcbacbc";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abbcbcbacbccbabcbcb";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string J = "abacabaDabaCabaABACABAabracadabraABACABABABAzz";
    string B = "ABACABADABADabaCabaABACAbAbracadaraAABAAABBAB";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abaDabaCabaABACAb";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string J = "SNJAUTHFGBHGQDSFNKBCXAQSIOPRMCCXPIXBDCOQ";
    string B = "UWLLWPOPHMGCKOPEEWTRKANTWMRUYLOCRSNBOBWT";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "CXPOP";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string J = "sotostytxxutouuoxxaayuuaatxusxauaysxttxotyxatst";
    string B = "toxtuutuaoosoyysxtoxouotauuytosutsaxuauysoxoxsu";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "uaysxtoxo";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string J = "A";
    string B = "BBBB";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string J = "ccccaaaa";
    string B = "aa";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string J = "fpbbg";
    string B = "srwfw";
    TheBoringStoreDivOne* pObj = new TheBoringStoreDivOne();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "bw";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663117&rd=14241&pm=11196
********************************************************************************
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
const int MAX = 50;
 
int N, M;
int backward [MAX][MAX], forward [MAX][MAX];
 
inline bool better (string now, string best)
{
    if (now.length () > best.length ())
        return true;
    else if (now.length () == best.length ())
        return now < best;
    else
        return false;
}
 
struct TheBoringStoreDivOne
{
    string find (string A, string B)
    {
        N = A.length ();
        M = B.length ();
        string best = "";
 
        memset (backward, 0, sizeof (backward));
        memset (forward, 0, sizeof (forward));
 
        for (int i = 0; i < N; i++)
            for (int j = i; j <= N; j++)
                for (int k = 0; k <= i; k++)
                {
                    string sub = A.substr (i - k, k);
                    bool match = false;
 
                    for (int s = 0; s + k <= N; s++)
                        if (s <= i - 2 * k || s >= j)
                            if (sub == A.substr (s, k))
                                match = true;
 
                    if (match)
                        backward [i][j] = k;
                }
 
        for (int i = 0; i < M; i++)
            for (int j = i; j <= M; j++)
                for (int k = 0; k <= M - j; k++)
                {
                    string sub = B.substr (j, k);
                    bool match = false;
 
                    for (int s = 0; s + k <= M; s++)
                        if (s <= i - k || s >= j + k)
                            if (sub == B.substr (s, k))
                                match = true;
 
                    if (match)
                        forward [i][j] = k;
                }
 
        for (int len = 0; len <= min (N, M); len++)
            for (int i = 0; i + len <= N; i++)
                for (int j = 0; j + len <= M; j++)
                    if (A.substr (i, len) == B.substr (j, len))
                    {
                        if (backward [i][i + len] == 0 || forward [j][j + len] == 0)
                            continue;
 
                        int a = i - backward [i][i + len];
                        int b = j + len + forward [j][j + len];
                        string now = A.substr (a, i - a) + B.substr (j, b - j);
 
                        if (better (now, best))
                            best = now;
                    }
 
        return best;
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/