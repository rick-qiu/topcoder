/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1358
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

class AntiMatter {
public:
    string unstable(vector<int> xform);
};

string AntiMatter::unstable(vector<int> xform) {
    string ret;
    return ret;
}


int test0() {
    vector<int> xform = {6, 6, 6, 6};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".00010000";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> xform = {0, 0, 0, 0};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".00010000";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> xform = {2, -3, 4, -5};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00000000";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> xform = {9993, -7, 743, -7};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".00400000";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> xform = {-10000, 9997, 9999, 10000};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00000000";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> xform = {-10000, 1, 1, 10000};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00000000";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> xform = {1, -1, 1, -1};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".50000000";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> xform = {0, 1, -1, 1};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00000000";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> xform = {0, 0, 0, 792};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".00126448";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> xform = {-10000, -10000, -10000, -9999};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00000000";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> xform = {7000, 8000, 9000, 10000};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".00100000";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> xform = {7000, 8004, 9000, 10000};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".25000000";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> xform = {7000, 8004, 7000, 7000};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".00099640";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> xform = {7000, 8004, 7000, 7006};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".50000000";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> xform = {-7000, -8029, -7000, 7000};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".14285716";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> xform = {-72, 60, 48, -480};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".08333336";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> xform = {0, 0, 0, 792};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = ".00126448";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> xform = {-10000, 10000, 0, 3};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00000000";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> xform = {0, 12, 15, 19};
    AntiMatter* pObj = new AntiMatter();
    clock_t start = clock();
    string result = pObj->unstable(xform);
    clock_t end = clock();
    delete pObj;
    string expected = "1.00000000";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4715&pm=1358
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
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
int nwd(int a,int b) { return b==0?a:nwd(b,a%b) ; }
 
struct AntiMatter {
  // MAIN
  string unstable(vector <int> xform) {
    int n=0;
    REP(i,4) REP(j,4) n = nwd(n,abs(xform[i]-xform[j]));
    int p=0;
    FOR(d,-10000,10000) {
      if(n==0 && d==0 || n!=0 && d%n==0) p+=10000 - abs(d);
    }
    if(p==100000000) return "1.00000000";
    else {
      char buf[30];
      sprintf(buf,".%08d",p);
      return buf;
    }
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/