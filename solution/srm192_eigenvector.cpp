/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2423
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

class EigenVector {
public:
    vector<int> findEigenVector(vector<string> A);
};

vector<int> EigenVector::findEigenVector(vector<string> A) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> A = {"1 0 0 0 0", "0 1 0 0 0", "0 0 1 0 0", "0 0 0 1 0", "0 0 0 0 1"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> A = {"100 0 0 0", "0 200 0 0", "0 0 333 0", "0 0 0 42"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> A = {"10 -10 -10 10", "20 40 -10 -10", "10 -10 10 20", "10 10 20 5"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -5, 2, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> A = {"1 0 0", "0 0 -1", "0 1 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> A = {"0 1 2 2 1", "1 0 1 2 2", "2 1 0 1 2", "2 2 1 0 1", "1 2 2 1 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> A = {"1000 1000 999 999 1", "0 0 0 1 0", "0 0 1 0 0", "0 1 0 0 0", "1 0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -1, 1, -1, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> A = {"30 20", "87 2"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> A = {"7 7", "1 1"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> A = {"6 6 6", "1 1 1", "1 1 1"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> A = {"1 1 1 1", "1 1 1 1", "2 2 2 2", "3 3 3 3"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> A = {"4 4 4 4", "1 1 1 1", "1 1 1 1", "1 1 1 1"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> A = {"7 7 7 7 7", "1 1 1 1 1", "0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> A = {"333 333 333 333 333", "222 222 222 222 222", "-111 -111 -111 -111 -111", "111 111 111 111 111", "0 0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, -1, 1, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> A = {"33 33 33 33 33", "0 0 0 0 0", "22 22 22 22 22", "0 0 0 0 0", "-33 -33 -33 -33 -33"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 2, 0, -3};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> A = {"7 7 7 7 7", "1 1 1 1 1", "-1 -1 -1 -1 -1", "0 0 0 0 0", "0 0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1, -1, 0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> A = {"4 4 4 4", "2 2 2 2", "1 1 1 1", "0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 1, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> A = {"5 5 5 5", "-3 -3 -3 -3", "-1 -1 -1 -1", "0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, -3, -1, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> A = {"50 50 50 50 50", "30 30 30 30 30", "0 0 0 0 0", "-10 -10 -10 -10 -10", "0 0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 0, -1, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> A = {"800 800 800 800 800", "-100 -100 -100 -100 -100", "0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, -1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> A = {"4 4 4 4 4", "-4 -4 -4 -4 -4", "1 1 1 1 1", "0 0 0 0 0", "0 0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, -4, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> A = {"10 -10 -10 10", "20 40 -10 -10", "10 -10 10 20", "10 10 20 5"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -5, 2, 0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> A = {"100 100 100", "100 100 100", "100 100 100"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> A = {"1 0 0 0", "0 0 0 0", "0 0 0 0", "0 0 0 0"};
    EigenVector* pObj = new EigenVector();
    clock_t start = clock();
    vector<int> result = pObj->findEigenVector(A);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0, 0};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4780&pm=2423
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
using namespace std; 
#define foreach(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++) 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
vector<vector<int> > tokmat(vector<string> s, string ch) { 
  vector<vector<int> > ret; 
  for( int i = 0; i < s.size(); i++ ) 
    ret.push_back( tokint(s[i], ch) ); 
  return ret; 
} 
 
VVI A; 
VI v; 
int doit(int L, int n, int first) { 
  if( n == A.size() ) { 
    int totn = 0, totd = 0; 
    for( int j = 0; j < A.size(); j++ ) { 
      int tot = 0; 
      for( int i = 0; i < A.size(); i++ ) tot += A[j][i]*v[i]; 
      if( !v[j] && tot ) return 0; 
      if( v[j] && !tot ) return 0; 
      if( !v[j] && !tot ) continue; 
      if( totd == 0 ) {totn = v[j]; totd = tot;} 
      if( tot*totn != totd*v[j] ) return 0; 
    } 
    return 1; 
  } 
  if( n == A.size()-1 ) { 
    if( !first ) { 
      v[n] = -L; 
      if( doit(0, n+1, 0) ) return 1; 
    } 
    v[n] = L; 
    if( doit(0, n+1, 0) ) return 1; 
    return 0; 
  } 
  int s = -L, e = L; 
  if( first ) s = 0; 
  for( v[n] = s; v[n] <= e; v[n]++ ) 
    if( doit(L-abs(v[n]), n+1, first && !v[n]) ) return 1; 
  return 0; 
} 
 
class EigenVector { 
public: 
vector <int> findEigenVector(vector <string> a) { 
  A = tokmat(a, " "); 
  v = VI(A.size(), 0); 
  int i, j, k, x, y, z, n; 
 
  for( n = 1; n <= 9; n++ ) 
    if( doit(n, 0, 1) ) break; 
  return v; 
} 
};

********************************************************************************
*******************************************************************************/