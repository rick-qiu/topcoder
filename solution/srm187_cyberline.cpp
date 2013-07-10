/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2396
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

class Cyberline {
public:
    string lastCyberword(string cyberline);
};

string Cyberline::lastCyberword(string cyberline) {
    string ret;
    return ret;
}


int test0() {
    string cyberline = "Zowie: This is a line of##cyber-poetry## !";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "cyberpoetry";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string cyberline = "2-b|!2-b -- ?";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "2b";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string cyberline = "if then{}; elseif schmelshif();";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "schmelshif";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string cyberline = "~y?";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string cyberline = "y#/ y#: !!! y~#keys&h4x-h4x-h4x?";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "h4xh4xh4x";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string cyberline = "@$%#$#)%(#&$){$@!}";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "@";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string cyberline = "a!ing&#ing.=?";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "ing";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string cyberline = "froggly doggly blogly";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "blogly";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string cyberline = "abcdefg-high-phen--ing";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghighphening";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string cyberline = " c at t y p in g ";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string cyberline = "12345678901234567890123456789012345678901234567890";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "12345678901234567890123456789012345678901234567890";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string cyberline = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string cyberline = "@------------------------------------------------@";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "@@";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string cyberline = "@-------------------------------------------------";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "@";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string cyberline = "-------------------------------------------------@";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "@";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string cyberline = "------foo bar--------";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "bar";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string cyberline = "two programmers walked into a foobar.";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "foobar";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string cyberline = "afterwards they bletched!";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "bletched";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string cyberline = "&h1j2h3h4j4k5nm5h6m7";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "h1j2h3h4j4k5nm5h6m7";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string cyberline = "(quiet) LOUD!!!!";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "LOUD";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string cyberline = "---a";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string cyberline = "fhqwhgads -----";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "fhqwhgads";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string cyberline = "123 00";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "00";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string cyberline = "a--b";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string cyberline = "failed -- -- -- - - - - -";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "failed";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string cyberline = "a";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string cyberline = "a:b";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string cyberline = "a!--";
    Cyberline* pObj = new Cyberline();
    clock_t start = clock();
    string result = pObj->lastCyberword(cyberline);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4755&pm=2396
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define ALL(x) (x).begin(),(x).end()
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
 
struct Cyberline {
  // MAIN
  string lastCyberword(string cyberline) {
    cyberline+=' ';
    string res;
    string w;
    FOREACH(it,cyberline) {
      char c = *it;
      if(isalnum(c) || c=='-' || c=='@') { w+=c; }
      else {
        string w2;
        FOREACH(jt,w) if(*jt!='-') w2+=*jt;
        if(w2!="") res=w2;
        w="";
      }
    }
    return res;
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/