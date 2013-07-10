/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7332
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

class FairTournament {
public:
    string countPermutations(int n, int k);
};

string FairTournament::countPermutations(int n, int k) {
    string ret;
    return ret;
}


int test0() {
    int n = 3;
    int k = 1;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
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
    int k = 2;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 10;
    int k = 3;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "19708";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 100;
    int k = 1;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "573147844013817084101";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1;
    int k = 1;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 5;
    int k = 2;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "31";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 9;
    int k = 3;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "6404";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 12;
    int k = 4;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1396948";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 14;
    int k = 5;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "135025756";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 1;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 2;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "2";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 3;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 4;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "24";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 5;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "120";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 6;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "720";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 20;
    int k = 1;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "10946";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 33;
    int k = 2;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "634245200926";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 42;
    int k = 3;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "69850708085388667677";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 57;
    int k = 4;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "159128297041016435714751131714066";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 60;
    int k = 5;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "198899054347029676663136942820561016192";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 64;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "704724510370835968978398201517613241969210494";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 77;
    int k = 1;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "8944394323791464";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 83;
    int k = 2;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1596437957527888762181476388934";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 78;
    int k = 3;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "21837383439504338719488921621840706409";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 93;
    int k = 4;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "111494812890123593989212189685194654756253116957177754";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 99;
    int k = 5;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "7488476460554583387809300269213525343844718913007616902164197555";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 97;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "439331534188737229355695791949863554660183606464421634807769978978048";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 100;
    int k = 6;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "63966642926037141928677083283801398106777787737963379360032740763763584";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 1;
    int k = 1;
    FairTournament* pObj = new FairTournament();
    clock_t start = clock();
    string result = pObj->countPermutations(n, k);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8433628&rd=10668&pm=7332
********************************************************************************
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <iostream>
#include <iterator>
#include <math.h>
#include <cstdio>
#include <cstdlib>
#include <sstream>
 
using namespace std;
 
#define FOR(i,a,b) for (int _n(b), i(a); i < _n; i++)
#define REP(i,n) FOR(i,0,n)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
#define ALL(c) (c).begin(), (c).end()
#define SORT(c) sort(ALL(c))
#define INF 1000000000
#define X first
#define Y second
#define pb push_back
 
typedef vector <int> VI;
 
#define mod 10
 
VI add (VI a, VI b)
{
  if (a.size ()<b.size ())
    swap (a, b);
  int k = 0;
  REP (i, a.size ())
  {
    if (i<b.size ())
      a[i]+=b[i];
    a[i]+=k;
    k = a[i]/mod;
    a[i]%=mod;
  }
  if (k)
    a.pb (k);
  return a;
}
 
 
class FairTournament {
public:
  string countPermutations(int n, int k) {
    VI a[n+1][(1<<(k*2))];
    a[0][(1<<k)-1].pb (1);
    
    REP (i, n)
      REP (j, 1<<(k*2))
        if (a[i][j].size ())
        {
          REP (l, k*2+1)
          {
            if (i+l-k<0)
              continue;
            if (i+l-k>=n)
              continue;
            if ((1<<l)&j)
              continue;
            int z = (1<<l)|j;
            if (!(z&1))
              continue;
            z/=2;
            a[i+1][z] = add (a[i+1][z], a[i][j]);
          }
        }
    VI r;
    REP (j, 1<<(k*2))
      if (a[n][j].size ())
        r = add (r, a[n][j]);
    string res;
    REP (i, r.size ())
      res+= char('0'+r[i]);
    reverse (ALL (res));
          
    return res;
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/