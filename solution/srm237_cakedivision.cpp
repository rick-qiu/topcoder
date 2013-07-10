/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3944
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

class CakeDivision {
public:
    double ratio(int length, int width, int pieces);
};

double CakeDivision::ratio(int length, int width, int pieces) {
    double ret;
    return ret;
}


int test0() {
    int length = 2;
    int width = 3;
    int pieces = 6;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 5;
    int width = 5;
    int pieces = 5;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 333;
    int width = 333;
    int pieces = 9;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 500;
    int width = 1;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 950;
    int width = 430;
    int pieces = 9;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2573099415204678;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 1;
    int width = 1;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 10;
    int width = 10;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 100;
    int width = 100;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 1000;
    int width = 1000;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 1;
    int width = 1;
    int pieces = 8;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 1000;
    int width = 1000;
    int pieces = 7;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.75;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 999;
    int width = 1000;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5984;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 1000;
    int width = 998;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5968;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 1;
    int width = 1000;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 1000;
    int width = 1;
    int pieces = 1;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 324;
    int width = 984;
    int pieces = 9;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7083333333333333;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 23;
    int width = 782;
    int pieces = 8;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 4.25;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 526;
    int width = 623;
    int pieces = 7;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5228136882129277;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 4;
    int width = 5;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3888888888888888;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 998;
    int width = 999;
    int pieces = 3;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 2.996996996996997;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 1000;
    int width = 599;
    int pieces = 9;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.663888888888889;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 1000;
    int width = 600;
    int pieces = 9;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6666666666666667;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 1000;
    int width = 601;
    int pieces = 9;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.663893510815308;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 10;
    int width = 9;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.44;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 1000;
    int width = 1000;
    int pieces = 10;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 10;
    int width = 10;
    int pieces = 1;
    CakeDivision* pObj = new CakeDivision();
    clock_t start = clock();
    double result = pObj->ratio(length, width, pieces);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7504863&rd=6536&pm=3944
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <map>
#include <queue>
#include <set>
 
using namespace std;
 
#define FOR(i,n) for(int i=0; i<(n); i++)
 
struct CakeDivision {
double ratio(double length, double width, int pieces) {
  if (width > length) swap(width, length);
  if (pieces == 1) return length / width;
  double res = 1000;
  tryagain:
  for(int i = 1; i < pieces; i++) {
    double l1 = i * length / pieces, l2 = length - l1;  
    res <?= (ratio(l1, width, i) >? ratio(l2, width, pieces - i));
  }
  if (length > width) { swap(length, width); goto tryagain; }
  return res;
}
};
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/