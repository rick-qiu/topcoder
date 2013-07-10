/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6063
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

class PrimePalindromic {
public:
    int count(int A, int B);
};

int PrimePalindromic::count(int A, int B) {
    int ret;
    return ret;
}


int test0() {
    int A = 2260;
    int B = 2262;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
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
    int A = 2;
    int B = 9;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 2;
    int B = 100;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 2;
    int B = 10000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 728;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 2;
    int B = 1000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 1001;
    int B = 2000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 2001;
    int B = 3000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 3001;
    int B = 4000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 4001;
    int B = 5000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 5001;
    int B = 6000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 6001;
    int B = 7000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 7001;
    int B = 8000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 8001;
    int B = 9000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 9001;
    int B = 10000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 2;
    int B = 2;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 10000;
    int B = 10000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 18;
    int B = 9973;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 716;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 123;
    int B = 7711;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 578;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 1723;
    int B = 4455;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 197;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 8899;
    int B = 9988;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 4878;
    int B = 9951;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 1111;
    int B = 9999;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 541;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 8712;
    int B = 9827;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 100;
    int B = 10000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 693;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 99;
    int B = 5001;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 1023;
    int B = 8191;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 469;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 2;
    int B = 10000;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 728;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 2;
    int B = 100;
    PrimePalindromic* pObj = new PrimePalindromic();
    clock_t start = clock();
    int result = pObj->count(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20289202&rd=9824&pm=6063
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <deque>
#include <iostream>
#include <sstream>
using namespace std;
 
#define pb push_back
#define ll long long
#define inf 2147483647
 
 
string str(int w)
{
  int T[20],n=0;
  while (w>0)
  {
    T[n++]=w%10;
    w/=10;
  }
  string W;
  for (int i=n-1; i>=0; i--)
  W+=(T[i]+'0');
  return W;
}
 
class PrimePalindromic {
  
  bool pal(string A)
  {
    int i;
    for (i=0; i<A.size()/2; i++)
    if (A[i]!=A[A.size()-1-i])
    return false;
    return true;
  }
  
  public:
  int count(int A, int B) {
    int i,j,T[20],il;
    int w, wynik=0,x;
    string s;
    
    for (i=A; i<=B; i++)
    {
      x=i,il=0;
      for (j=2; j<=(long)sqrt(i); j++)
      while (x%j==0)
      T[il++]=j,x/=j;
      if (x>1)
      T[il++]=x;
      
      w=0;
      do
      {
        s="";
        for (j=0; j<il; j++)
        s+=str(T[j]);
        
        if (pal(s))
        {
          w=1;
          break;
        }        
      }
      while (next_permutation(T,T+il));
      wynik+=w;
    }
      
    return wynik;
    
  }
};
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/