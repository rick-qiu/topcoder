/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2017
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

class EngineersPrimes {
public:
    long smallestNonPrime(int N);
};

long EngineersPrimes::smallestNonPrime(int N) {
    long ret;
    return ret;
}


int test0() {
    int N = 3;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 1;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 265;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2886601;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 1835;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 247716121;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 4000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1431184561;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 3417;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1010794849;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 2;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 4;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 121;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 5;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 169;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 50;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 54289;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 300;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 3972049;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 3000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 753886849;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 2000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 302516449;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 1000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 62837329;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 3999;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1429822969;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 3998;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1429671721;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 688;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 26739241;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 2460;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 482285521;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 3990;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1420611481;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 10000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10971096049;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 100000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1689274677841;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 15048;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 27019798129;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 33912;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 160577319841;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 95899;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1543013636761;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 99999;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1689243484681;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 46001;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 312591691801;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 65536;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 675103792609;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 153;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 786769;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 10000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 10971096049;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 100000;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1689274677841;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 1;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 98999;
    EngineersPrimes* pObj = new EngineersPrimes();
    clock_t start = clock();
    long result = pObj->smallestNonPrime(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1652553957289;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8347440&rd=4725&pm=2017
********************************************************************************
class EngineersPrimes{
public:
 
long long smallestNonPrime(int N)
{
  long long * ptr = new long long [N+2];
  if (N==1)
    return 9;
  ptr[1]=2;
  int num=1;
  for(int k=3;;k++)
  {
    bool prime =true;
    for(int i=1;ptr[i]*ptr[i]<=k; i++)
    {
      if(k%ptr[i]==0)
      {
      prime=false;
      break;
      }  
      
    }
    if(prime)
    ptr[++num]=k;
    if(num==N+1)
    {
      long long ret= (long long)ptr[N+1]*(long long)ptr[N+1];
      return ret;
    }
 
  }
  
 
}
};

********************************************************************************
*******************************************************************************/