/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4471
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

class UnsealTheSafe {
public:
    long countPasswords(int N);
};

long UnsealTheSafe::countPasswords(int N) {
    long ret;
    return ret;
}


int test0() {
    int N = 2;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 74;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 25;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 768478331222;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 4;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 210;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 5;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 600;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 6;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1710;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 7;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 4882;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 8;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 13926;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 9;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 39746;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 10;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 113406;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 11;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 323638;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 12;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 923502;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 13;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2635406;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 14;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 7520334;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 15;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 21460630;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 16;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 61240062;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 17;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 174759014;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 18;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 498693678;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 19;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 1423106470;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 20;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 4060990974;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 21;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 11588718614;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 22;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 33069692814;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 23;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 94369903558;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 24;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 269294999646;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 26;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 2192938314414;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 27;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 6257916269734;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 28;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 17857659623934;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 29;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 50959818439094;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 30;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 145419506315214;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 30;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 145419506315214;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 29;
    UnsealTheSafe* pObj = new UnsealTheSafe();
    clock_t start = clock();
    long result = pObj->countPasswords(N);
    clock_t end = clock();
    delete pObj;
    long expected = 50959818439094;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22686261&rd=10711&pm=4471
********************************************************************************
#include <cstdio> 
class UnsealTheSafe{ 
public: 
  long long countPasswords(int N){ 
    long long d[50][20]; 
    int i; 
    for(i=0; i<=9; i++){ 
      d[1][i]=1; 
    } 
    for(i=2; i<=N; i++){ 
      d[i][0]=d[i-1][7]; 
      d[i][1]=d[i-1][2]+d[i-1][4]; 
      d[i][2]=d[i-1][1]+d[i-1][3]+d[i-1][5]; 
      d[i][3]=d[i-1][2]+d[i-1][6]; 
      d[i][4]=d[i-1][1]+d[i-1][5]+d[i-1][7]; 
      d[i][5]=d[i-1][2]+d[i-1][4]+d[i-1][6]+d[i-1][8]; 
      d[i][6]=d[i-1][3]+d[i-1][5]+d[i-1][9]; 
      d[i][7]=d[i-1][4]+d[i-1][8]+d[i-1][0]; 
      d[i][8]=d[i-1][5]+d[i-1][7]+d[i-1][9]; 
      d[i][9]=d[i-1][6]+d[i-1][8]; 
      d[i][0]=d[i-1][7]; 
    } 
    long long ans=0; 
    for(i=0; i<=9; i++){ 
      ans+=d[N][i]; 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/