/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5898
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

class MonomorphicTyper {
public:
    string infer(string expression, vector<string> definitions);
};

string MonomorphicTyper::infer(string expression, vector<string> definitions) {
    string ret;
    return ret;
}


int test0() {
    string expression = "x";
    vector<string> definitions = {"x:Char"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Char";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string expression = "upper(x)";
    vector<string> definitions = {"x:Char", "upper(Char):Char"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Char";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string expression = "ord(upper(letter))";
    vector<string> definitions = {"ord(Char):Int", "upper(Char):Char", "letter:Char", "Letter:String"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Int";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string expression = "id(id)";
    vector<string> definitions = {"id(Int):Int"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string expression = "abcdefghij(abcdefghik(abcdefghil(abcdefghiJ)))";
    vector<string> definitions = {"abcdefghij(abcdefghik):abcdefghij", "abcdefghik(abcdefghil):abcdefghik", "abcdefghil(abcdefghiJ):abcdefghil", "abcdefghiJ:abcdefghiJ"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghij";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string expression = "f(f(c;
    vector<string> definitions = c);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string expression = "ff(f(c;
    vector<string> definitions = c);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string expression = "f(unknown)";
    vector<string> definitions = {"f(A):B"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
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
    string expression = "fst(zero)";
    vector<string> definitions = {"fst(Int,Int):Int", "zero:Int"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string expression = "Func(Int;
    vector<string> definitions = Char;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Int";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string expression = "D(J(h))";
    vector<string> definitions = {"h:N", "J(N):J", "D(J):a"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string expression = "d(b;
    vector<string> definitions = j(g;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string expression = "vw(Sa(ey;
    vector<string> definitions = YR;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "LQ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string expression = "C(B;
    vector<string> definitions = x(W);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string expression = "l(H;
    vector<string> definitions = d;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "r";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string expression = "khQCE(kAcIkqLkRr;
    vector<string> definitions = ts;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "sgLPL";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string expression = "f(f(f(f(f(f(f(f(f(f(f(f(f(f(f(f(x))))))))))))))))";
    vector<string> definitions = {"f(x):x", "x:x"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string expression = "p(p(p(p(x;
    vector<string> definitions = p(x;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string expression = "p(p(p(x;
    vector<string> definitions = x);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string expression = "p(p(p(x;
    vector<string> definitions = x);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
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
    string expression = "p(p(p(x;
    vector<string> definitions = x);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string expression = "IWgJWOl(vYheToqwdn;
    vector<string> definitions = tsLJD;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "lJFppXkRVv";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string expression = "khQCE(kAcIkqLkRr;
    vector<string> definitions = ts;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "sgLPL";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string expression = "wS(ZE;
    vector<string> definitions = I;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "d";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string expression = "F(d(R(H(l(G))));
    vector<string> definitions = N;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "vJ";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string expression = "DN(ya;
    vector<string> definitions = i(gZ);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string expression = "i(aJ(iQC;
    vector<string> definitions = fx;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "NP";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string expression = "u(qqI;
    vector<string> definitions = Dg;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string expression = "uu(qqI;
    vector<string> definitions = Dg;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "gV";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string expression = "RWL(Gpr;
    vector<string> definitions = Pz;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string expression = "rkxcJ(z;
    vector<string> definitions = N(ykLt;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string expression = "tAxcy(NgKgcbOtV;
    vector<string> definitions = QSRFQ;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "PmaMTdOJ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string expression = "bqF(G(OQe;
    vector<string> definitions = Jp;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "hYv";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string expression = "bqF(G(OQe;
    vector<string> definitions = Jp;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string expression = "Func(Int;
    vector<string> definitions = Char;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Int";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string expression = "ord(upper(letter))";
    vector<string> definitions = {"ord(Char):Int", "upper(Char):Char", "letter:Char", "Letter:String"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Int";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string expression = "c(Func(Int;
    vector<string> definitions = Char;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string expression = "f(unknown)";
    vector<string> definitions = {"f(A):B"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string expression = "Func(Int;
    vector<string> definitions = Char;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string expression = "Func(Int;
    vector<string> definitions = y(z);
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "NULL";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string expression = "c(Func(Int;
    vector<string> definitions = Char;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Char";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string expression = "a(c;
    vector<string> definitions = b(c;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "char";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string expression = "fst(zero)";
    vector<string> definitions = {"fst(Int,Int):Int", "zero:Int"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string expression = "f(g(a;
    vector<string> definitions = b))";
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "char";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string expression = "Func(a;
    vector<string> definitions = Func(a;
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Int";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string expression = "foo(foo(foo(x)))";
    vector<string> definitions = {"Int:Int", "foo(Int):Int", "x:Int", "a:Int"};
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "Int";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string expression = "fi(g(k);
    vector<string> definitions = m(n))";
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "String";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string expression = "fst(fs(Int;
    vector<string> definitions = a(Int));
    MonomorphicTyper* pObj = new MonomorphicTyper();
    clock_t start = clock();
    string result = pObj->infer(expression, definitions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20397185&rd=8083&pm=5898
********************************************************************************
#line 5 "MonomorphicTyper.cpp" 
 
#include <string> 
#include <fstream> 
#include <sstream> 
#include <vector> 
#include <iostream> 
#include <fstream> 
#include <algorithm> 
using namespace std; 
 
#define Max(a,b) ((a)>(b)?(a):(b)) 
#define Min(a,b) ((a)<(b)?(a):(b)) 
 
class MonomorphicTyper 
{  
public:  
  int n, m; 
  vector<string> def; string s; 
  string TYPE(string s) 
  { 
    int i,j; 
    char ide[60]; 
    string cur; 
    while (s.length()>0&&s[0]!='(') 
    { 
      cur += s[0]; 
      s = s.substr(1); 
    } 
    vector<string> arg; 
    if (s[0]=='(') 
    { 
      int k=0, last = 0; 
      for (i=1; i<s.length(); i++) 
      { 
        if (s[i]=='(') k++; 
        else if (s[i]==')') k--; 
        if (s[i]==','&&k==0||s[i]==')'&&k==-1) 
        { 
          arg.push_back(TYPE(s.substr(last+1,i-last-1))); 
          last = i; 
        } 
      } 
      for (i=0; i<arg.size(); i++) if (arg[i]=="") return ""; 
      cur += '('; 
      for (i=0; i<arg.size(); i++) 
      { 
        cur += arg[i]; 
        if (i==arg.size()-1) cur += ')'; else cur += ','; 
      } 
    } 
    for (i=0; i<n; i++) 
    { 
      char s1[60]; strcpy(s1,def[i].c_str()); 
      int mid = strchr(s1,':') - s1; 
      s1[mid] = 0; 
      if (strcmp(s1,cur.c_str())==0) 
        return s1+mid+1; 
    } 
    return ""; 
  } 
  string infer(string _s, vector <string> _def)  
  { 
    int i,j,k; def = _def; s = _s; 
    n = def.size(); 
    return TYPE(_s); 
  } 
   
 
};  
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/