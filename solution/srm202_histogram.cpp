/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2874
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

class Histogram {
public:
    vector<string> draw(vector<string> title, vector<int> value);
};

vector<string> Histogram::draw(vector<string> title, vector<int> value) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> title = {"EAST", "NORTH", "SOUTH", "WEST", "INTERNATIONAL"};
    vector<int> value = {1, 2, 1, 4, 1};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X", " X X", " X X X X X", "EAST NORTH SOUTH WEST INTERNATIONAL"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> title = {"A", "B", "C"};
    vector<int> value = {2, 1, 2};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X X", "X X X", "A B C"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> title = {"VERYLARGE", "XX"};
    vector<int> value = {10, 1};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X", " X", " X", " X", " X", " X", " X", " X", " X X", "VERYLARGE XX"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> title = {"VERYLARGER", "XX"};
    vector<int> value = {1, 10};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X", " X", " X", " X", " X", " X", " X", " X", " X X", "VERYLARGER XX"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> title = {"VERYLARGER", "BIG"};
    vector<int> value = {1, 1};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X", "VERYLARGER BIG"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> title = {"ABCDEFGHIJKLMNO", "A", "A", "A", "A", "A", "A", "A", "A", "BB"};
    vector<int> value = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", " X X X X X X X X X X", "ABCDEFGHIJKLMNO A A A A A A A A BB"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> title = {"X", "ABCDEF", "Y", "DEFG"};
    vector<int> value = {6, 5, 4, 3};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X", "X X", "X X X", "X X X X", "X X X X", "X X X X", "X ABCDEF Y DEFG"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> title = {"ONE", "TWO", "THREE", "FOUR", "FIVE"};
    vector<int> value = {1, 2, 3, 4, 5};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X X", " X X X", " X X X X", " X X X X X", "ONE TWO THREE FOUR FIVE"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> title = {"HARVEST", "HUNTERS", "FULL", "HALF", "WANING", "WAXING"};
    vector<int> value = {1, 1, 1, 1, 1, 4};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X", " X", " X X X X X X", "HARVEST HUNTERS FULL HALF WANING WAXING"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> title = {"MEASLES", "XXX", "PNEUMONIA", "AGUE"};
    vector<int> value = {3, 3, 1, 1};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X", " X X", " X X X X", "MEASLES XXX PNEUMONIA AGUE"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> title = {"MEASLES", "XXX", "PNEUMONIA", "AGUE"};
    vector<int> value = {3, 4, 1, 4};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X", " X X X", " X X X", " X X X X", "MEASLES XXX PNEUMONIA AGUE"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> title = {"ABC", "DEF", "ABC"};
    vector<int> value = {7, 7, 7};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X X", " X X X", " X X X", " X X X", " X X X", " X X X", " X X X", "ABC DEF ABC"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> title = {"ABC", "DEF", "ABC"};
    vector<int> value = {2, 1, 7};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X", " X", " X", " X", " X X", " X X X", "ABC DEF ABC"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> title = {"ABC", "DEFG", "ABC"};
    vector<int> value = {2, 1, 1};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X X X", "ABC DEFG ABC"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> title = {"TOPCODER", "BOTTOMCODER", "BOTTOMFEEDER", "TOPDOG"};
    vector<int> value = {2, 10, 10, 4};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X", " X X", " X X", " X X", " X X", " X X", " X X X", " X X X", " X X X X", " X X X X", "TOPCODER BOTTOMCODER BOTTOMFEEDER TOPDOG"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> title = {"EVEN", "ODD", "ONE", "XXXXXXXXXXXXXXX", "SEVEN"};
    vector<int> value = {8, 2, 5, 8, 5};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X", " X X", " X X", " X X X X", " X X X X", " X X X X", " X X X X X", " X X X X X", "EVEN ODD ONE XXXXXXXXXXXXXXX SEVEN"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> title = {"T", "FW", "JMSJVPJFHFEAAAE", "JQIGGMYQZ", "VOROIGDJJPNTQKU"};
    vector<int> value = {10, 3, 4, 10, 3};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X X", "X X", "X X", "X X", "X X", "X X", "X X X", "X X X X X", "X X X X X", "X X X X X", "T FW JMSJVPJFHFEAAAE JQIGGMYQZ VOROIGDJJPNTQKU"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> title = {"VERYLARGE", "XX"};
    vector<int> value = {10, 1};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X", " X", " X", " X", " X", " X", " X", " X", " X X", "VERYLARGE XX"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> title = {"A", "SDJFOISE", "OIWNMEFW", "J", "WIOWEOFIWN", "SJEIFMTNSIEOSA", "SE", "SIEMFNSIE", "SD", "A"};
    vector<int> value = {2, 10, 1, 6, 8, 3, 8, 10, 1, 3};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X X", " X X", " X X X X", " X X X X", " X X X X X", " X X X X X", " X X X X X", " X X X X X X X", "X X X X X X X X", "X X X X X X X X X X", "A SDJFOISE OIWNMEFW J WIOWEOFIWN SJEIFMTNSIEOSA SE SIEMFNSIE SD A"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> title = {"EAST", "NORTH", "SOUTH", "WEST", "INTERNATIONAL"};
    vector<int> value = {1, 2, 1, 4, 1};
    Histogram* pObj = new Histogram();
    clock_t start = clock();
    vector<string> result = pObj->draw(title, value);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" X", " X", " X X", " X X X X X", "EAST NORTH SOUTH WEST INTERNATIONAL"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5848&pm=2874
********************************************************************************
/*
 * Hey, stop reading this code right this instant!
 * You don't know what it could do to your fragile mind!
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
//#include <brains>  /* commented out to avoid compile error -- brains not found */
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define len length()
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef long long ii;
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
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i];
  os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
 
/*
public class antimatter extends Idiot {
  String[] codeSolution(String[] problemStatement) {
    //re-code this method!
    //it always returns quickly, but is often incorrect (about 33% of the time)
    return null;
  }
}
*/
 
//----------------------------
 
class Histogram {
  public:
  vector <string> draw(vector <string> title, vector <int> value) {
    int height = *max_element(value.begin(),value.end()) + 1;
    vi ls, rs;
    for (int i = 0; i < value.si; i++) {
      ls.push_back((title[i].si-1)/2);
      rs.push_back(title[i].si/2);
    }
    int spacing = 0;
    for (int i = 0; i < value.si - 1; i++) spacing >?= rs[i] + ls[i+1] + 1;
    debug(spacing);
    vs ret(height);
    int X = height - 1;
    for (int i = 0; i < value.si; i++) {
      if (i) {
        int S = spacing - rs[i-1] - ls[i];
        for (int m = 0; m < S; m++) 
        for (int j = 0; j <= X; j++) ret[j] += " ";
      }
      ret[X] += title[i];
      for (int j = 0; j < ls[i]; j++) for (int k = 0; k < X; k++) ret[k] += " ";
      for (int j = 0, k = X - 1; j < value[i]; j++,k--) ret[k] += "X";
      for (int j = X - 1 - value[i]; j >= 0; j--) ret[j] += " ";
      for (int j = 0; j < rs[i]; j++) for (int k = 0; k < X; k++) ret[k] += " ";
    }
    for (int i = 0; i < ret.si; i++) {
      int S = ret[i].si;
      while (ret[i][S-1] == ' ') S--;
      ret[i].resize(S);
    }
    for (int i = 0; i < ret.si; i++)
    cout << ret[i] << "_\n";
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/