/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2891
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

class RedSquare {
public:
    int countTheEmptyReds(int maxRank, int maxFile, vector<int> rank, vector<int> file);
};

int RedSquare::countTheEmptyReds(int maxRank, int maxFile, vector<int> rank, vector<int> file) {
    int ret;
    return ret;
}


int test0() {
    int maxRank = 3;
    int maxFile = 5;
    vector<int> rank = {1, 2, 2};
    vector<int> file = {4, 1, 2};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int maxRank = 3;
    int maxFile = 3;
    vector<int> rank = {1, 2, 3, 1, 2, 3, 1, 2, 3};
    vector<int> file = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxRank = 5;
    int maxFile = 5;
    vector<int> rank = {1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5};
    vector<int> file = {2, 4, 1, 3, 5, 2, 4, 1, 3, 5, 2, 4};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxRank = 5;
    int maxFile = 6;
    vector<int> rank = {1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5};
    vector<int> file = {2, 4, 1, 3, 5, 2, 4, 1, 3, 5, 2, 4};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxRank = 1;
    int maxFile = 1;
    vector<int> rank = {};
    vector<int> file = {};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int maxRank = 50;
    int maxFile = 50;
    vector<int> rank = {1};
    vector<int> file = {1};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1249;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int maxRank = 49;
    int maxFile = 50;
    vector<int> rank = {1};
    vector<int> file = {1};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1224;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int maxRank = 50;
    int maxFile = 49;
    vector<int> rank = {1};
    vector<int> file = {1};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int maxRank = 49;
    int maxFile = 49;
    vector<int> rank = {1};
    vector<int> file = {1};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxRank = 50;
    int maxFile = 50;
    vector<int> rank = {};
    vector<int> file = {};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1250;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxRank = 50;
    int maxFile = 49;
    vector<int> rank = {};
    vector<int> file = {};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxRank = 49;
    int maxFile = 50;
    vector<int> rank = {};
    vector<int> file = {};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxRank = 49;
    int maxFile = 49;
    vector<int> rank = {};
    vector<int> file = {};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxRank = 1;
    int maxFile = 50;
    vector<int> rank = {1};
    vector<int> file = {1};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxRank = 50;
    int maxFile = 1;
    vector<int> rank = {1};
    vector<int> file = {1};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int maxRank = 50;
    int maxFile = 50;
    vector<int> rank = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> file = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxRank = 50;
    int maxFile = 50;
    vector<int> rank = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> file = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int maxRank = 2;
    int maxFile = 2;
    vector<int> rank = {1, 1};
    vector<int> file = {1, 2};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxRank = 4;
    int maxFile = 5;
    vector<int> rank = {1, 1, 2, 2, 2};
    vector<int> file = {2, 4, 1, 3, 5};
    RedSquare* pObj = new RedSquare();
    clock_t start = clock();
    int result = pObj->countTheEmptyReds(maxRank, maxFile, rank, file);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=288584&rd=5073&pm=2891
********************************************************************************
#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <stdarg.h>
#include <string>
#include <vector>
using namespace std;
 
#define Forc(i, c) for(typeof(c.begin()) i(c.begin()); i != c.end(); ++i)
#define In(c, x) (c.find(x) != c.end())
#define Inv(v, x) (find(v, x) >= 0)
#define X first
#define Y second
#define Pair(x, y) make_pair(x, y)
#define SetPair(a, x, y) pair<typeof(x), typeof(y)> a(x, y)
#define mkvecint makeVec<int, int>
#define mkvecstring makeVec<string, char *>
typedef pair<int, int> point; typedef long long ll;
 
template <class T> T strToInt(string); template <class T> string intToStr(T);
int strToInt(string str) { return strToInt<int>(str); }
string intToStr(int x) { return intToStr<int>(x); }
vector<string> tokenize(string, string = " ", bool = false);
vector<int> tokenizeInt(string, string = " ", bool = false);
template <class A, class B> int find(const vector<A>&, B);
template <class T> T nth(const set<T>&, int);
template <class A, class B> void hookSort(vector<A>&, vector<B>&, bool = false);
template <class T> ostream &operator <<(ostream&, const vector<T>&);
template <class A, class B> ostream &operator <<(ostream&, const pair<A, B>&);
template <class A, class B> vector<A> makeVec(int, ...);
 
/**************************************************************************/
 
int MyCode(int maxRank, int maxFile, vector <int> rank, vector <int> file) {
  int answer(maxRank * maxFile / 2);
  for (int i(0); i < rank.size(); ++i) {
    if ((rank[i] + maxFile - file[i]) % 2 == 0) --answer;
  }
  return answer;
}
 
/**************************************************************************/
 
struct RedSquare {
  int countTheEmptyReds(int maxRank, int maxFile, vector <int> rank, vector <int> file) {
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
    return MyCode(maxRank, maxFile, rank, file);
  }
  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { int Arg0 = 3; int Arg1 = 5; int Arr2[] = {1, 2, 2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {4, 1, 2}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 5; verify_case(0, Arg4, countTheEmptyReds(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_1() { int Arg0 = 3; int Arg1 = 3; int Arr2[] = {1,2,3,1,2,3,1,2,3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1,1,1,2,2,2,3,3,3}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 0; verify_case(1, Arg4, countTheEmptyReds(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_2() { int Arg0 = 5; int Arg1 = 5; int Arr2[] = {1,1,2,2,2,3,3,4,4,4,5,5}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {2,4,1,3,5,2,4,1,3,5,2,4}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 0; verify_case(2, Arg4, countTheEmptyReds(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_3() { int Arg0 = 5; int Arg1 = 6; int Arr2[] = {1,1,2,2,2,3,3,4,4,4,5,5}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {2,4,1,3,5,2,4,1,3,5,2,4}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 15; verify_case(3, Arg4, countTheEmptyReds(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_4() { int Arg0 = 1; int Arg1 = 1; int Arr2[] = {}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 0; verify_case(4, Arg4, countTheEmptyReds(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_5() { int Arg0 = 50; int Arg1 = 50; int Arr2[] = {1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 1249; verify_case(5, Arg4, countTheEmptyReds(Arg0, Arg1, Arg2, Arg3)); }
  void test_case_6() { int Arg0 = 50; int Arg1 = 50; int Arr2[] = {1,2,3,4,5,6,7,8,9,10,
 1,2,3,4,5,6,7,8,9,10,
 1,2,3,4,5,6,7,8,9,10,
 1,2,3,4,5,6,7,8,9,10,
 1,2,3,4,5,6,7,8,9,10}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arr3[] = {1,1,1,1,1,1,1,1,1,1,
 2,2,2,2,2,2,2,2,2,2,
 3,3,3,3,3,3,3,3,3,3,
 4,4,4,4,4,4,4,4,4,4,
 5,5,5,5,5,5,5,5,5,5}; vector <int> Arg3(Arr3, Arr3 + (sizeof(Arr3) / sizeof(Arr3[0]))); int Arg4 = 1225; verify_case(6, Arg4, countTheEmptyReds(Arg0, Arg1, Arg2, Arg3)); }
 
// END CUT HERE
};
 
template <class T> T strToInt(string str) {
  stringstream ss(str);
  T answer;
  ss >> answer;
  return answer;
}
 
template <class T> string intToStr(T x) {
  stringstream s;
  s << x;
  return s.str();
}
 
vector<string> tokenize(string str, string delim, bool returnDelims) {
  vector<string> answer;
  string temp;
  for (int i(0); i < str.length(); ++i) {
    bool isDelim(false);
    for (int j(0); j < delim.length(); ++j)
      if (str[i] == delim[j]) isDelim = true;
    if (!isDelim) {
      temp += str[i];
      continue;
    }
    if (temp != "") answer.push_back(temp);
    temp = "";
    if (returnDelims) answer.push_back(string(1, str[i]));
  }
  if (temp != "") answer.push_back(temp);
  return answer;
}
 
vector<int> tokenizeInt(string str, string delim, bool returnDelims) {
  vector<string> tokens(tokenize(str, delim, returnDelims));
  vector<int> answer(tokens.size());
  for (int i(0); i < tokens.size(); ++i)
    answer[i] = strToInt(tokens[i]);
  return answer;
}
 
template <class A, class B> int find(const vector<A> &vec, B item) {
  for (int i(0); i < vec.size(); ++i)
    if (vec[i] == item) return i;
  return -1;
}
 
template <class T> T nth(const set<T> &s, int x) {
  typename set<T>::iterator answer(s.begin());
  for (int i(0); i < x; ++i) ++answer;
  return *answer;
}
 
template <class A, class B> void hookSort(vector<A> &a, vector<B> &b, bool complete) {
  vector<pair<A, int> > toSort(a.size());
  for (int i(0); i < a.size(); ++i)
    toSort[i] = Pair(a[i], i);
  sort(toSort.begin(), toSort.end());
  vector<B> old(b);
  for (int i(0); i < b.size(); ++i)
    b[i] = old[toSort[i].Y];
  if (complete)
    sort(a.begin(), a.end());
}
 
template <class T> ostream &operator <<(ostream &os, const vector<T> &vec) {
  if (vec.empty()) return os;
  for (int i(0); i < vec.size() - 1; ++i) os << vec[i] << ',';
  return os << vec[vec.size() - 1];
}
 
template <class A, class B> ostream &operator <<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.X << ',' << p.Y << ')';
}
 
template <class A, class B> vector<A> makeVec(int n, ...) {
  vector<A> answer(n);
  va_list vl;
  va_start(vl, n);
  for (int i(0); i < n; ++i) answer[i] = va_arg(vl, B);
  va_end(vl);
  return answer;
}
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/