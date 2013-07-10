/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1762
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

class DotNotation {
public:
    int countAmbiguity(string dotForm);
};

int DotNotation::countAmbiguity(string dotForm) {
    int ret;
    return ret;
}


int test0() {
    string dotForm = "2";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
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
    string dotForm = "9+5*3";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
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
    string dotForm = "9+5.*3";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string dotForm = "1+2.*.3+4";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string dotForm = "9*8+7*6-5+4*3/2./9";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string dotForm = "1+2*3+4*5-6*7+8*9+1*2+3*4";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 20853;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string dotForm = "2*4";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
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
    string dotForm = "2*2*2*2*2*2*2*2*2*2*2*2*2";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
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
    string dotForm = "5*...3-..4+.6*3";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
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
    string dotForm = "9*9*9*9*9*9*9*9*9*9*9";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string dotForm = "1+...2....*.8..+7";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string dotForm = "3+5.*8+...9-2..*.1+0";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string dotForm = "1+2*3/4+5*6/7*8+9-2..*3";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string dotForm = "1+2*2+1*1+2*2+1*1+2*1.*3";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string dotForm = "3+4*..5+6*7.*7+6*5+4-3";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string dotForm = "5*.....1+...3....*.4..+2";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string dotForm = "8+4+2+.1*1+2..+4+8";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string dotForm = "1+2+3+4+5+6+7+8*8*4*2*1";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string dotForm = "1+2+3+4+5+6+7+8*8*4.*.2+1";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string dotForm = "8+1.*.8-1";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string dotForm = "3/2-1+1";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string dotForm = "2/1-1";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string dotForm = "2/.1-1";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string dotForm = "2+...2*2+2*.2+2*2+2..*2+2";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string dotForm = "9*8+.7/6+1-7";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string dotForm = "5*5*5*5*5*5*5*5*5*8*8*8*2";
    DotNotation* pObj = new DotNotation();
    clock_t start = clock();
    int result = pObj->countAmbiguity(dotForm);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4565&pm=1762
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
#include <map> 
#include <set> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
map<string, set<int> > memo; 
 
const set<int> &doit(string s) { 
  set<int> &ret = memo[s]; 
  if( ret.size() ) return ret; 
  if( s.size() == 1 ) { 
    ret.insert(s[0]-'0'); 
    return ret; 
  } 
  int i, j, k, x, y, z, n, il, ir; 
  char ch; 
  for( i = 0; i < s.size(); i++ ) { 
    ch = s[i]; 
    if( ch != '+' && ch != '-' && ch != '*' && ch != '/' ) continue; 
    for( j = i-1, x = 0; j >= 0 && s[j] == '.'; j-- ) x++; 
    il = j; 
    y = 0; 
    while( j >= 0 ) { 
      if( s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/' ) { 
        if( y > x ) break; 
      } 
      if( s[j] == '.' ) y++; else y = 0; 
      j--; 
    } 
    if( j >= 0 ) continue; 
    for( j = i+1, x = 0; j < s.size() && s[j] == '.'; j++ ) x++; 
    ir = j; 
    y = 0; 
    while( j < s.size() ) { 
      if( s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/' ) { 
        if( y > x ) break; 
      } 
      if( s[j] == '.' ) y++; else y = 0; 
      j++; 
    } 
    if( j < s.size() ) continue; 
    const set<int> &a = doit(s.substr(0, il+1)); 
    const set<int> &b = doit(s.substr(ir)); 
    set<int>::const_iterator ai, bi; 
    for( ai = a.begin(); ai != a.end(); ai++ ) 
    for( bi = b.begin(); bi != b.end(); bi++ ) { 
      if( s[i] == '+' ) { 
        i64 v = (i64)*ai + *bi; 
        if( v > 2000000000 || v < -2000000000 ) continue; 
        ret.insert(v); 
      } else if( s[i] == '-' ) { 
        i64 v = (i64)*ai - *bi; 
        if( v > 2000000000 || v < -2000000000 ) continue; 
        ret.insert(v); 
      } else if( s[i] == '*' ) { 
        i64 v = (i64)*ai * *bi; 
        if( v > 2000000000 || v < -2000000000 ) continue; 
        ret.insert(v); 
      } else if( s[i] == '/' && *bi != 0 ) { 
        i64 v = (i64)*ai / *bi; 
        if( v > 2000000000 || v < -2000000000 ) continue; 
        ret.insert(v); 
      } 
    } 
  } 
  return ret; 
} 
 
class DotNotation { 
public: 
int countAmbiguity(string dotForm) { 
  return doit(dotForm).size(); 
} 
};

********************************************************************************
*******************************************************************************/