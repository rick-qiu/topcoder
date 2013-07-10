/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1693
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

class Archimedes {
public:
    double approximatePi(int numSides);
};

double Archimedes::approximatePi(int numSides) {
    double ret;
    return ret;
}


int test0() {
    int numSides = 3;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 2.598076211353316;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numSides = 8;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0614674589207183;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numSides = 17280;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415926362832276;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numSides = 4;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 2.82842712474619;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numSides = 5;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 2.938926261462366;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numSides = 6;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9999999999999996;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numSides = 7;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.037186173822907;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numSides = 8;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0614674589207183;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numSides = 99999;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415926530730114;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numSides = 100000;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415926530730216;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numSides = 48;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1393502030468667;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numSides = 11;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0990581252557265;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numSides = 83;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1408425675666343;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numSides = 80;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.140785260725489;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numSides = 68;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.140475187910292;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numSides = 349;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415502262546897;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numSides = 308;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141538178911329;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numSides = 558;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141576056601735;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numSides = 700;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141582107247802;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numSides = 129;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141282121798652;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numSides = 3523;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141592237225897;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numSides = 1162;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141588826347538;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numSides = 1540;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141590474591773;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numSides = 9361;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415925946167045;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numSides = 7638;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415925650091037;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numSides = 57303;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415926520160147;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numSides = 15275;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141592631441721;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numSides = 80110;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415926527845537;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numSides = 21281;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.14159264217904;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numSides = 19060;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141592639364783;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numSides = 100000;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415926530730216;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numSides = 100000;
    Archimedes* pObj = new Archimedes();
    clock_t start = clock();
    double result = pObj->approximatePi(numSides);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1415926530730216;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4560&pm=1693
********************************************************************************
/*
 *  ... I pity the poor soul trying to read through this code to challenge it...
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
#define vout(x) cout << #x << ": {"; for (int blob = 0; blob < x.size(); blob++) {cout << x[blob]; if (blob!=x.size() -1) cout << ", ";} cout << "}" << endl
#define len length()
#define si size()
#define loop(A,B) for (A = 0; A < B; A++)
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vvb vector<vector<bool> >
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
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
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
int gcd(int a, int b) {if (a==0 || b==0) return max(a,b); if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
 
//----------------------------
 
class Archimedes {
  public:
  double approximatePi(int numSides) {
    return numSides * sqrt(2 - 2 * cos(2*M_PI / numSides)) / 2;
  }
};

********************************************************************************
*******************************************************************************/