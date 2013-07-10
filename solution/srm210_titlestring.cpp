/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2988
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

class TitleString {
public:
    string toFirstUpperCase(string title);
};

string TitleString::toFirstUpperCase(string title) {
    string ret;
    return ret;
}


int test0() {
    string title = "introduction to algorithms";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Introduction To Algorithms";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string title = "more than one space between words";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "More Than One Space Between Words";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string title = " lord of the rings the fellowship of the ring ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Lord Of The Rings The Fellowship Of The Ring ";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string title = " ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string title = "i";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string title = "the king and i";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "The King And I";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string title = "";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
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
    string title = "px ilfkus nj f ovql lkrjnn b";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Px Ilfkus Nj F Ovql Lkrjnn B";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string title = "y a";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Y A";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string title = "j shz";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "J Shz";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string title = "xjj shkyckfvkyy ia pu";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Xjj Shkyckfvkyy Ia Pu";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string title = "kj";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Kj";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string title = "xaon";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Xaon";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string title = "mk lky lk u ybu qp ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Mk Lky Lk U Ybu Qp ";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string title = "rl";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Rl";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string title = "ykexwcl y t ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Ykexwcl Y T ";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string title = "c ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "C ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string title = " hmsupo mrjo w svwzjqk qudaixfue ivemgsq ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Hmsupo Mrjo W Svwzjqk Qudaixfue Ivemgsq ";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string title = "daf";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Daf";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string title = "vo gcdfzse";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Vo Gcdfzse";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string title = "rvrhg cr";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Rvrhg Cr";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string title = "gdsdhyizrevv";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Gdsdhyizrevv";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string title = "enapoktgxo lqloeslni ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Enapoktgxo Lqloeslni ";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string title = "d ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "D ";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string title = "v";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string title = "aqf lieekfwa a";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Aqf Lieekfwa A";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string title = "xws t hy qdggr mjwjqdyantvckpm bltlo ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Xws T Hy Qdggr Mjwjqdyantvckpm Bltlo ";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string title = "bmis jb yzqtwmqr fvispgb";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Bmis Jb Yzqtwmqr Fvispgb";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string title = "wqoezwaxpl oc go";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Wqoezwaxpl Oc Go";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string title = " j";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " J";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string title = " dvp uwyr";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Dvp Uwyr";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string title = " rlsiup wtxu uefvmlq vazh ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Rlsiup Wtxu Uefvmlq Vazh ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string title = "bnx sx";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Bnx Sx";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string title = "t";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string title = "j";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string title = "biqgx";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Biqgx";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string title = "lnmf hf tblckjj qyieklffauj";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Lnmf Hf Tblckjj Qyieklffauj";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string title = "u m iybj y ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "U M Iybj Y ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string title = " marjzjff y ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Marjzjff Y ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string title = "xzbks";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Xzbks";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string title = "y mgvo rkscjax osup";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Y Mgvo Rkscjax Osup";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string title = "kss yko";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Kss Yko";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string title = "x tyurv l ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "X Tyurv L ";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string title = " s sf ksjll e ldah";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " S Sf Ksjll E Ldah";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string title = " xkbmi glezojchtaqancpb";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Xkbmi Glezojchtaqancpb";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string title = "ja r wybmrallvp";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Ja R Wybmrallvp";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string title = "cgkxkwhrqgfstmxad nqtk vb mywkd";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "Cgkxkwhrqgfstmxad Nqtk Vb Mywkd";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string title = "more than one space between words";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "More Than One Space Between Words";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string title = "i";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string title = " lord of the rings the fellowship of the ring ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Lord Of The Rings The Fellowship Of The Ring ";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string title = " dupa a nie program";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Dupa A Nie Program";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string title = "more than one space between words";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "More Than One Space Between Words";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string title = "i";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string title = " lord of the rings the fellowship of the ring ";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Lord Of The Rings The Fellowship Of The Ring ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string title = " dupa a nie program";
    TitleString* pObj = new TitleString();
    clock_t start = clock();
    string result = pObj->toFirstUpperCase(title);
    clock_t end = clock();
    delete pObj;
    string expected = " Dupa A Nie Program";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8369955&rd=5856&pm=2988
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <utility>
using namespace std;
 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define si size()
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
class TitleString
{
  public:
  string toFirstUpperCase(string title)
  {
    if(title.si==0)
      return "";
    title[0]=toupper(title[0]);
    for(int c=0;c<title.si-1;c++)
      if(title[c]==' ')
        title[c+1]=toupper(title[c+1]);
    return title;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/