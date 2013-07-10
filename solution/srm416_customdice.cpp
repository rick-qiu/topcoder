/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9904
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

class CustomDice {
public:
    int countDice(int M);
};

int CustomDice::countDice(int M) {
    int ret;
    return ret;
}


int test0() {
    int M = 3;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int M = 4;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int M = 10;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 863010;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int M = 20;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 101548350;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int M = 50;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 375588112;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int M = 100;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 196717870;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int M = 200;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 665802632;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int M = 500;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 879053231;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int M = 1000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 962358859;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int M = 2000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 132854201;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int M = 5000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 526200842;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int M = 10000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 276610130;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int M = 20000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 792436673;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int M = 25000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 241849830;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int M = 50000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 782989301;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int M = 100000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 110520781;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int M = 125013;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 503092938;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int M = 249850;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 826840433;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int M = 312000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 996281693;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int M = 555222;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 19525097;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int M = 555123;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 942200740;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int M = 800000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 543105712;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int M = 900000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 174984532;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int M = 950000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 484722537;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int M = 999999;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 34356100;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int M = 1000000;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 432413968;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int M = 1;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int M = 2;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int M = 5;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2700;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int M = 6;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 14940;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int M = 7;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 55320;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int M = 8;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 160590;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int M = 9;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 395280;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int M = 999996;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 12748786;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int M = 999987;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 698655835;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int M = 134351;
    CustomDice* pObj = new CustomDice();
    clock_t start = clock();
    int result = pObj->countDice(M);
    clock_t end = clock();
    delete pObj;
    int expected = 782682397;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=13507&pm=9904
********************************************************************************
#include <math.h> 
#include <string.h> 
#include <vector> 
#include <string> 
#include <queue> 
#include <algorithm> 
using namespace std; 
 
int p1[6000001], p2[6000001]; 
const int mmod = 1000000007; 
 
class CustomDice 
{ 
  public: 
  int countDice(int M) 
  { 
    int remain = M*6-21; 
    if (remain<0) return 0; 
    for (int i=0; i<=remain; i++) p2[i] = 0; 
    p2[0] = 1; 
    for (int i=1; i<=6; i++) 
    { 
      for (int j=0; j<=remain; j++) 
        if (j>=i) p1[j] = (p1[j-i]+p2[j])%mmod; else p1[j] = p2[j]; 
      for (int j=0; j<=remain; j++) 
        p2[j] = p1[j]; 
    } 
    int pp = 0; 
    for (int i=0; i<=remain; i++) 
      pp = (pp+p2[i])%mmod; 
    return (((long long)pp)*30)%mmod; 
  }; 
};

********************************************************************************
*******************************************************************************/