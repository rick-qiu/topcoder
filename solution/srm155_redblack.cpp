/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1748
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

class RedBlack {
public:
    int numTwists(vector<int> keys);
};

int RedBlack::numTwists(vector<int> keys) {
    int ret;
    return ret;
}


int test0() {
    vector<int> keys = {1, 2, 3};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
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
    vector<int> keys = {1, 2, 3, 4, 5, 6, 7};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> keys = {7, 1, 4, 6, 3, 5, 2};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> keys = {2, 1, 3, 4};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
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
    vector<int> keys = {1};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
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
    vector<int> keys = {5, 10, 15, 14, 3, 4, 11, 2, 1, 12, 6, 9, 7, 13, 8};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> keys = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> keys = {7, 5, 6, 4, 13, 1, 3, 10, 15, 2, 8, 9, 11, 12, 14};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> keys = {31, 6, 20, 8, 21, 28, 15, 14, 5, 30, 25, 13, 19, 9, 12, 22, 18, 2, 27, 10, 3, 24, 26, 7, 11, 16, 17, 32, 29, 1, 33, 23, 4};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> keys = {1, 20, 2, 19, 3, 18, 4, 17, 5, 16, 6, 15, 7, 14, 8, 13, 9, 12, 10, 11};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> keys = {10, 9, 11, 8, 12, 7, 13, 6, 14, 5, 15, 4, 16, 3, 17, 2, 18, 1, 19};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> keys = {8, 4, 12, 2, 10, 6, 14, 1, 9, 7, 15, 5, 11, 3, 13};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> keys = {2, 4, 9, 7, 10, 6, 8, 1, 5, 3};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> keys = {8, 7, 10, 5, 1, 3, 6, 12, 11, 13, 2, 9, 4};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> keys = {15, 2, 9, 5, 3, 13, 11, 7, 8, 14, 1, 16, 4, 6, 10, 12};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> keys = {6, 8, 10, 12, 4, 2, 18, 14, 16, 19, 7, 15, 9, 17, 13, 5, 11, 3, 1};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> keys = {7, 6, 13, 10, 17, 8, 5, 16, 18, 14, 3, 9, 4, 11, 1, 19, 12, 2, 15};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> keys = {3, 13, 6, 5, 9, 14, 12, 11, 8, 2, 4, 1, 17, 7, 15, 16, 10};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> keys = {5, 4, 6, 9, 3, 1, 8, 2, 7};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
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

int test19() {
    vector<int> keys = {29, 15, 18, 25, 16, 7, 12, 28, 34, 35, 3, 27, 33, 6, 21, 24, 30, 31, 26, 23, 11, 10, 14, 1, 17, 4, 5, 9, 32, 20, 13, 19, 8, 22, 2};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> keys = {25, 7, 16, 33, 1, 19, 30, 13, 12, 29, 28, 34, 39, 41, 38, 22, 11, 32, 26, 14, 31, 23, 37, 6, 40, 21, 24, 10, 5, 17, 36, 35, 15, 2, 4, 3, 9, 8, 18, 20, 27};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> keys = {3, 26, 38, 21, 39, 6, 16, 46, 15, 27, 20, 14, 50, 32, 24, 19, 33, 37, 17, 29, 18, 11, 36, 25, 48, 49, 5, 7, 13, 35, 28, 45, 10, 4, 31, 34, 44, 40, 22, 43, 41, 9, 1, 47, 12, 8, 2, 23, 30, 42};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> keys = {2, 16, 8, 40, 42, 33, 25, 15, 1, 4, 6, 17, 41, 31, 49, 19, 10, 50, 13, 12, 35, 23, 29, 37, 21, 18, 7, 38, 14, 24, 39, 46, 5, 28, 32, 47, 26, 11, 9, 20, 27, 3, 44, 45, 22, 48, 43, 34, 30, 36};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> keys = {19, 12, 17, 6, 2, 8, 23, 10, 14, 21, 3, 15, 25, 27, 1, 13, 4, 11, 16, 22, 9, 20, 24, 7, 26, 5, 18};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> keys = {6, 8, 20, 21, 4, 23, 18, 28, 36, 32, 26, 22, 16, 24, 34, 12, 10, 15, 25, 40, 2, 7, 19, 29, 1, 11, 9, 14, 31, 5, 38, 3, 27, 30, 17, 35, 13, 39, 33, 37};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> keys = {2, 1, 3};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> keys = {5, 10, 15, 14, 3, 4, 11, 2, 1, 12, 6, 9, 7, 13, 8, 19, 18, 17, 16, 20, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 21, 22, 23, 24, 25, 26, 27, 28, 29, 41, 43, 45, 47, 49, 50, 48, 46, 44, 42};
    RedBlack* pObj = new RedBlack();
    clock_t start = clock();
    int result = pObj->numTwists(keys);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4580&pm=1748
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
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
struct node { 
  node *par, *lc, *rc; 
  int isred, val; 
}; 
 
node *root; 
int ret = 0; 
 
void print(node *t) { 
  if( !t ) return; 
  cout << '('; 
  cout << t->val; 
  if( t->isred ) cout << 'R'; 
  cout << ' '; 
  print(t->lc); 
  cout << ' '; 
  print(t->rc); 
  cout << ')'; 
} 
 
void balance(node *t) { 
  if( t->par == 0 || t->par->par == 0 ) return; 
  if( !t->isred || !t->par->isred ) return; 
  node *gp = t->par->par->par; 
  node *x, *y, *z, *t1, *t2, *t3, *t4; 
  if( t->par->lc == t ) { 
    if( t->par->par->lc == t->par ) { 
      x = t; 
      y = t->par; 
      z = t->par->par; 
      t1 = x->lc; 
      t2 = x->rc; 
      t3 = y->rc; 
      t4 = z->rc; 
    } else { 
      y = t; 
      z = t->par; 
      x = t->par->par; 
      t1 = x->lc; 
      t2 = y->lc; 
      t3 = y->rc; 
      t4 = z->rc; 
    } 
  } else { 
    if( t->par->par->lc == t->par ) { 
      y = t; 
      x = t->par; 
      z = t->par->par; 
      t1 = x->lc; 
      t2 = y->lc; 
      t3 = y->rc; 
      t4 = z->rc; 
    } else { 
      z = t; 
      y = t->par; 
      x = t->par->par; 
      t1 = x->lc; 
      t2 = y->lc; 
      t3 = z->lc; 
      t4 = z->rc; 
    } 
  } 
  if( gp && gp->lc == t->par->par ) { 
    gp->lc = y; 
  } else if( gp && gp->rc == t->par->par ) { 
    gp->rc = y; 
  } else if( !gp ) { 
    root = y; 
  } 
  y->par = gp; 
  x->par = y; 
  z->par = y; 
  if( t1 ) t1->par = x; 
  if( t2 ) t2->par = x; 
  if( t3 ) t3->par = z; 
  if( t4 ) t4->par = z; 
  y->lc = x; 
  y->rc = z; 
  x->lc = t1; 
  x->rc = t2; 
  z->lc = t3; 
  z->rc = t4; 
  ret++; 
  y->isred = 1; 
  x->isred = 0; 
  z->isred = 0; 
  balance(y); 
} 
 
void doit(node *t, int v) { 
  if( v < t->val ) { 
    if( !t->lc ) { 
      t->lc = new node; 
      t->lc->isred = 1; 
      t->lc->lc = t->lc->rc = 0; 
      t->lc->par = t; 
      t->lc->val = v; 
      balance(t->lc); 
    } else doit(t->lc, v); 
  } else if( v > t->val ) { 
    if( !t->rc ) { 
      t->rc = new node; 
      t->rc->isred = 1; 
      t->rc->lc = t->rc->rc = 0; 
      t->rc->par = t; 
      t->rc->val = v; 
      balance(t->rc); 
    } else doit(t->rc, v); 
  } 
} 
 
class RedBlack { 
public: 
int numTwists(vector <int> a) { 
  int i, j, k, x, y, z, n; 
 
  root = new node; 
  root->isred = 0; 
  root->val = a[0]; 
  root->lc = root->rc = root->par = 0; 
  for( i = 1; i < a.size(); i++ ) { 
    doit(root, a[i]); 
    root->isred = 0; 
    print(root); 
    cout << '\n'; 
  } 
  return ret; 
} 
};

********************************************************************************
*******************************************************************************/