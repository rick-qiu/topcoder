/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3518
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

class TreeSpreading {
public:
    long countArrangements(int a, int b, int c, int d);
};

long TreeSpreading::countArrangements(int a, int b, int c, int d) {
    long ret;
    return ret;
}


int test0() {
    int a = 1;
    int b = 1;
    int c = 0;
    int d = 0;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 2;
    int b = 2;
    int c = 0;
    int d = 0;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 1;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 3;
    int b = 2;
    int c = 1;
    int d = 1;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 96;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 174702663548149248;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 5;
    int b = 1;
    int c = 1;
    int d = 1;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 9;
    int b = 10;
    int c = 8;
    int d = 7;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 173887297986990;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 1074;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 5;
    int b = 6;
    int c = 7;
    int d = 8;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 33170046582;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 9;
    int b = 10;
    int c = 10;
    int d = 8;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 5475644741386140;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 3;
    int b = 4;
    int c = 7;
    int d = 9;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 71903316;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 7;
    int b = 8;
    int c = 9;
    int d = 10;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 173887297986990;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 9;
    int b = 7;
    int c = 5;
    int d = 4;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 2552333100;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 10;
    int b = 9;
    int c = 7;
    int d = 5;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 2161729439448;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 10;
    int b = 8;
    int c = 7;
    int d = 1;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 78434892;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 9;
    int b = 6;
    int c = 3;
    int d = 0;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 504;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 174702663548149248;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    TreeSpreading* pObj = new TreeSpreading();
    clock_t start = clock();
    long result = pObj->countArrangements(a, b, c, d);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7421158&rd=6516&pm=3518
********************************************************************************
#include <sstream> 
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <map> 
#include <set> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
typedef long long ll; 
typedef pair<int,int> pii; 
typedef pair<double,double> pdd; 
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef map<string,int> msi; 
 
struct TreeSpreading { 
  ll ways[11][11][11][11][5]; 
 
  ll Ways(int a, int b, int c, int d, int x) { 
    if (a+b+c+d == 0) return 1; 
    ll &r = ways[a][b][c][d][x]; 
    if (r == -1) { 
      r = 0; 
      if (a && x != 0) r += Ways(a-1, b, c, d, 0); 
      if (b && x != 1) r += Ways(a, b-1, c, d, 1); 
      if (c && x != 2) r += Ways(a, b, c-1, d, 2); 
      if (d && x != 3) r += Ways(a, b, c, d-1, 3); 
    }
    return r; 
  } 
   
  TreeSpreading() { 
    memset(ways, -1, sizeof(ways)); 
  } 
 
   long long countArrangements(int a, int b, int c, int d) { 
      return Ways(a,b,c,d,4); 
   } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/