/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11197
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

class TheBoringStoreDivTwo {
public:
    string find(string J, string B);
};

string TheBoringStoreDivTwo::find(string J, string B) {
    string ret;
    return ret;
}


int test0() {
    string J = "StoreOfJohn";
    string B = "StoreOfBrus";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    string J = "JohnPlaysGames";
    string B = "BrusAlsoPlays";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ays";
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
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
    string J = "abababababababa";
    string B = "abababababababa";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababa";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string J = "aaaaaaaaaaaaaaa";
    string B = "aaaaaaaaaaaaaaa";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string J = "aab";
    string B = "cbc";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string J = "xxxxxxxxxxxxxx";
    string B = "YYYYYYYYYYYYYY";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxYYYYYYY";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string J = "abbcccddddeeeee";
    string B = "abbcccddddeeeee";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "bcccddddeeee";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string J = "ayta";
    string B = "syts";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ayts";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string J = "AAAAAAAAAAAAAAA";
    string B = "AAAAAAAAAAAAAAA";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string J = "aaaaaabbba";
    string B = "bbbaa";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabbba";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string J = "ayAbaA";
    string B = "skysbk";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "Abk";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string J = "abay";
    string B = "ysds";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ays";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string J = "aaaaaaaaaabaaaa";
    string B = "aaaabaaaaaaabaa";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaabaaaaaa";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string J = "absdfasdfasdasd";
    string B = "adcccddsadfsdas";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "sdfasdas";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string J = "aabbbbbbbbbbbbb";
    string B = "abbbbbbbbbbbbba";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbbbbbbbbbba";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string J = "ababababab";
    string B = "cacacacacaca";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ababacacac";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string J = "abcefghahibc";
    string B = "haghbclmnop";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "bch";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string J = "nPlayyyysGames";
    string B = "BrusAlsoPlayyss";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyss";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string J = "sssssssssssssss";
    string B = "sssssssssssssss";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "sssssssssssssss";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string J = "aababcabcdabcde";
    string B = "hghfghefgh";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgh";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string J = "rabcytabcpqw";
    string B = "xyziupqxyz";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abcpqxyz";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string J = "abchjabcpq";
    string B = "xyzoipqxyz";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abcpqxyz";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string J = "nplayyyysGames";
    string B = "brusalsoplayyss";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyss";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string J = "akjdnhbgdujklna";
    string B = "afsdvsdvsdvvvad";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "jdvsd";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string J = "ss";
    string B = "ss";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ss";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string J = "ABA";
    string B = "BCC";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string J = "rrrrrrrrrrrrrr";
    string B = "rrrrrrrrrrrrrr";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "rrrrrrrrrrrrrr";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string J = "abcdefghijkabcd";
    string B = "efghijkXXYYZZ";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijkX";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string J = "aayt";
    string B = "syts";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ayts";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string J = "ABABABABABABABC";
    string B = "CDCDCDCDCDCDEF";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABABCDCDCD";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string J = "abcdcbabacgdyau";
    string B = "babcasdbauadaaa";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "abaa";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string J = "bacb";
    string B = "acdd";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "bacd";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string J = "zaaaaaaaaaaaaaz";
    string B = "zaaaaaaaaaaaaaz";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "zaaaaaaaaaaaaaz";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string J = "abcDbcc";
    string B = "cadadecade";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "bccade";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string J = "bbabb";
    string B = "cac";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "bbac";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string J = "cdabxycdefabnxy";
    string B = "aa";
    TheBoringStoreDivTwo* pObj = new TheBoringStoreDivTwo();
    clock_t start = clock();
    string result = pObj->find(J, B);
    clock_t end = clock();
    delete pObj;
    string expected = "aba";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22682489&rd=14241&pm=11197
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
 
class TheBoringStoreDivTwo {
public:
  string find(string, string);
};
 
int cnt(string s, string t) {
  int c = 0;
  for (int i = 0; i + t.size() <= s.size(); ++i)
    if (s.substr(i, t.size()) == t)
      c++, i += t.size() - 1;
  return c;
}
 
string TheBoringStoreDivTwo::find(string J, string B) {
  /*string a,b,c,d;
   for(int i=J.size();i>0;--i){
   for(int j=0;j+i<=J.size();++j)
   if(cnt(J,J.substr(j,i))>=2)
   a=J.substr(j,i);
   }
   for(int i=B.size();i>0;--i){
   for(int j=0;j+i<=B.size();++j)
   if(cnt(B,B.substr(j,i))>=2)
   b=B.substr(j,i);
   }
   if(a==""||b=="")
   return "";
   return a+b;*/
  vector<string> prea, posta, a;
  vector<string> preb, postb, b;
  for (int i = J.size(); i > 0; --i)
    for (int j = 0; j + i <= J.size(); ++j) {
      prea.push_back(J.substr(0, j));
      posta.push_back(J.substr(j + i));
      a.push_back(J.substr(j, i));
    }
  for (int i = B.size(); i > 0; --i)
    for (int j = 0; j + i <= B.size(); ++j) {
      preb.push_back(B.substr(0, j));
      postb.push_back(B.substr(j + i));
      b.push_back(B.substr(j, i));
    }
  string mx = "", x, c, d;
  for (int i = 0; i < a.size(); ++i)
    for (int j = 0; j < b.size(); ++j) {
      x = a[i] + b[j];
      for (int k = 1; k < x.size(); ++k) {
        c = x.substr(0, k);
        d = x.substr(k);
        int c1 = cnt(prea[i], c) + cnt(posta[i], c);
        int c2 = cnt(preb[j], d) + cnt(postb[j], d);
        if (c1 && c2) {
          if (x.size() > mx.size() || (x.size() == mx.size() && x
              < mx))
            mx = x;
        }
      }
    }
  return mx;
}
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/