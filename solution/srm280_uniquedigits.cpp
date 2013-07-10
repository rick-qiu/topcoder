/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5988
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

class UniqueDigits {
public:
    int count(int n);
};

int UniqueDigits::count(int n) {
    int ret;
    return ret;
}


int test0() {
    int n = 21;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 101;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1001;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 738;
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
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 2;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 10000;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 5274;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 62;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 3090;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 1795;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 6795;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 3648;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 7358;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 3963;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 2314;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 1362;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 995;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 738;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 6526;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 3556;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 1408;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 911;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 877;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 657;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 7560;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 4077;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 3969;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 2236;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 6685;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 3594;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 1871;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 1173;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 9387;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 4993;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 4531;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 2496;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 10000;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 5274;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 5000;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 2754;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 9000;
    UniqueDigits* pObj = new UniqueDigits();
    clock_t start = clock();
    int result = pObj->count(n);
    clock_t end = clock();
    delete pObj;
    int expected = 4770;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20060194&rd=8077&pm=5988
********************************************************************************
#include <cmath> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <string> 
#include <cstring> 
#include <vector> 
#include <set> 
#include <map> 
 
using namespace std; 
 
typedef vector<int> VI;  
typedef vector<VI> VVI;  
typedef vector<string> VS; 
typedef vector<VS> VVS; 
 
#define min(x, y)(((x)<(y))?(x):(y)) 
#define max(x, y)(((x)<(y))?(y):(x)) 
 
#define REP(i, n) for(i=0; i<(n); ++i) 
 
class UniqueDigits  {  
public:  
  bool is(int n) { 
    set<int> s; 
    while(n>0) { 
      if(s.find(n%10)!=s.end()) return false; 
      s.insert(n%10); 
      n=n/10; 
    } 
    return true; 
  } 
        int count(int n)  {  
               int i, j, k; 
               int ret=0; 
         for(i = 1; i < n; i++)  
           if(is(i)) ret++; 
               return ret; 
          }  
  
        };  
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/