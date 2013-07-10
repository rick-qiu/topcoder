/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8480
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

class ForbiddenStrings {
public:
    long countNotForbidden(int n);
};

long ForbiddenStrings::countNotForbidden(int n) {
    long ret;
    return ret;
}


int test0() {
    int n = 2;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 3;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 1;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 5;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 123;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 10;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 10089;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 20;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 67858611;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 30;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 456417007497;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 6;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 297;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 7;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 717;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 8;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1731;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 9;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4179;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 11;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 24357;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 12;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 58803;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 13;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 141963;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 14;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 342729;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 15;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 827421;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 16;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1997571;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 17;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4822563;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 18;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 11642697;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 19;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 28107957;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 21;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 163825179;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 22;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 395508969;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 23;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 954843117;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 24;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2305195203;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 25;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5565233523;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 26;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 13435662249;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 27;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 32436558021;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 28;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 78308778291;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 29;
    ForbiddenStrings* pObj = new ForbiddenStrings();
    clock_t start = clock();
    long result = pObj->countNotForbidden(n);
    clock_t end = clock();
    delete pObj;
    long expected = 189054114603;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13503&pm=8480
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define LENGTH(X) ((int)(X.length()))
typedef long long int64;
 
class ForbiddenStrings
{
public:
  map<string,int64> M[60];
  int64 solve(int n,string s)
  {
    if (LENGTH(s)==3 && s[0]!=s[1] && s[0]!=s[2] && s[1]!=s[2]) return 0;
    if (LENGTH(s)>2) return solve(n,s.substr(1));
    if (n==0) return 1;
    if (M[n].find(s)!=M[n].end()) return M[n][s];
    int64 ret=0;
    for (char c='A';c<='C';c++) ret+=solve(n-1,s+c);
    return M[n][s]=ret;
  }
  int64 countNotForbidden(int n)
  {
    int64 ret=solve(n,"");
    return ret;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/