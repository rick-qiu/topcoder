/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2375
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

class NumericalIntegral {
public:
    string integrate(double x1, double x2);
};

string NumericalIntegral::integrate(double x1, double x2) {
    string ret;
    return ret;
}


int test0() {
    double x1 = -0.5;
    double x2 = 0.5;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.92256";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    double x1 = 0.0;
    double x2 = 0.1;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.09967";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    double x1 = 2.0;
    double x2 = 2.451;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00368";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    double x1 = -9.0001;
    double x2 = -9.0;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00000";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    double x1 = 2.5;
    double x2 = 3.0;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00034";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    double x1 = 0.0;
    double x2 = 0.98;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.73932";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    double x1 = 0.1;
    double x2 = 1.01;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.65080";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    double x1 = 1.5E-5;
    double x2 = 1.0;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.74681";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    double x1 = 0.500001;
    double x2 = 1.0;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.28554";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    double x1 = 1.5;
    double x2 = 2.5;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.02968";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    double x1 = 0.32;
    double x2 = 1.3;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.51834";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    double x1 = 0.4;
    double x2 = 1.4;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.46429";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    double x1 = -1.0001;
    double x2 = -0.0030;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.74386";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    double x1 = -10.0;
    double x2 = -9.0;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00000";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    double x1 = 1.22;
    double x2 = 1.23;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00223";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    double x1 = 2.71828183;
    double x2 = 3.14159265;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00010";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    double x1 = 9.0;
    double x2 = 10.0;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00000";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    double x1 = -0.4111084;
    double x2 = 0.4111084;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.77815";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    double x1 = 0.6;
    double x2 = 0.9000111;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.17109";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    double x1 = 1.200005;
    double x2 = 1.8;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.06981";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    double x1 = 1.300074915;
    double x2 = 2.3;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.05746";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    double x1 = 0.0;
    double x2 = 1.0E-5;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00001";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    double x1 = 0.0;
    double x2 = 1.0E-5;
    NumericalIntegral* pObj = new NumericalIntegral();
    clock_t start = clock();
    string result = pObj->integrate(x1, x2);
    clock_t end = clock();
    delete pObj;
    string expected = "0.00001";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4755&pm=2375
********************************************************************************
/*
 *   Don't even try to understand.
 */
 /*
 *    Seriously, my code is _intentionally_ this ugly!
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue> 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define si size()
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef vector<string> vs;
typedef long long ii;
typedef long long i64;
typedef long long intint;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
 
string lltos (long long i) {stringstream s; s << i; return s.str();}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) {
    if (i) os << ", ";
    os << temp[i];
  }
  os << "}";
  return os;
}
//int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
ii gcd(ii a, ii b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}
 
//------------------------------------------------------//
class NumericalIntegral {
  public:
  string integrate(double x1, double x2) {
    double ret = 0, dx = 1e-7 * (x2-x1);
    for (double X = x1; X <= x2; X += dx) {
      ret += dx * exp(-X*X);
    }
    printf("%.12f\n", ret);
    char buf[1000];
    sprintf(buf, "%.5f", ret);
    return string(buf);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/