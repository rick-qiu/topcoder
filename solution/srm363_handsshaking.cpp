/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7868
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

class HandsShaking {
public:
    long countPerfect(int n);
};

long HandsShaking::countPerfect(int n) {
    long ret;
    return ret;
}


int test0() {
    int n = 2;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
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
    int n = 6;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 8;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 10;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 12;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 132;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 14;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 429;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 16;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1430;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 18;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4862;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 20;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 16796;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 22;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 58786;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 24;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 208012;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 26;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 742900;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 28;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 2674440;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 30;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 9694845;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 32;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 35357670;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 34;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 129644790;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 36;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 477638700;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 38;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1767263190;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 40;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 6564120420;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 42;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 24466267020;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 44;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 91482563640;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 46;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 343059613650;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 48;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 1289904147324;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 50;
    HandsShaking* pObj = new HandsShaking();
    clock_t start = clock();
    long result = pObj->countPerfect(n);
    clock_t end = clock();
    delete pObj;
    long expected = 4861946401452;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22014601&rd=10777&pm=7868
********************************************************************************
struct HandsShaking 
{ 
  long long countPerfect(int n) { 
    long long dp[100]; 
    dp[0] = 1; 
    for (int i = 1; i <= n / 2; i++) 
    { 
      dp[i] = 0; 
      for (int j = 0; j < i; j++) 
      { 
        dp[i] += dp[j] * dp[i - j - 1]; 
      } 
    } 
    return dp[n / 2]; 
  } 
};

********************************************************************************
*******************************************************************************/