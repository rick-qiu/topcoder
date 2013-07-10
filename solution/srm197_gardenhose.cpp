/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=987
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

class GardenHose {
public:
    int countDead(int n, int rowDist, int colDist, int hoseDist);
};

int GardenHose::countDead(int n, int rowDist, int colDist, int hoseDist) {
    int ret;
    return ret;
}


int test0() {
    int n = 3;
    int rowDist = 2;
    int colDist = 1;
    int hoseDist = 2;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
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
    int n = 3;
    int rowDist = 2;
    int colDist = 1;
    int hoseDist = 1;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    int rowDist = 50;
    int colDist = 2;
    int hoseDist = 2;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    int rowDist = 50;
    int colDist = 2;
    int hoseDist = 4;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
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
    int n = 4;
    int rowDist = 3;
    int colDist = 2;
    int hoseDist = 3;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 50;
    int rowDist = 50;
    int colDist = 50;
    int hoseDist = 1250;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 50;
    int rowDist = 50;
    int colDist = 50;
    int hoseDist = 1249;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 50;
    int rowDist = 49;
    int colDist = 50;
    int hoseDist = 1249;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 49;
    int rowDist = 50;
    int colDist = 50;
    int hoseDist = 1249;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 6;
    int rowDist = 2;
    int colDist = 5;
    int hoseDist = 5;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 6;
    int rowDist = 2;
    int colDist = 5;
    int hoseDist = 3;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 50;
    int rowDist = 50;
    int colDist = 50;
    int hoseDist = 49;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1;
    int rowDist = 2;
    int colDist = 2;
    int hoseDist = 1;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 6;
    int rowDist = 2;
    int colDist = 5;
    int hoseDist = 5;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 3;
    int rowDist = 2;
    int colDist = 1;
    int hoseDist = 1;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 50;
    int rowDist = 50;
    int colDist = 50;
    int hoseDist = 49;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 1;
    int rowDist = 1;
    int colDist = 1;
    int hoseDist = 10000;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 2;
    int rowDist = 2;
    int colDist = 2;
    int hoseDist = 9000;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 1;
    int rowDist = 1;
    int colDist = 1;
    int hoseDist = 10;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 3;
    int rowDist = 2;
    int colDist = 1;
    int hoseDist = 2;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 2;
    int rowDist = 2;
    int colDist = 2;
    int hoseDist = 6000;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 5;
    int rowDist = 5;
    int colDist = 5;
    int hoseDist = 1;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 10;
    int rowDist = 1;
    int colDist = 1;
    int hoseDist = 20;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 5;
    int rowDist = 1;
    int colDist = 1;
    int hoseDist = 2;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 3;
    int rowDist = 3;
    int colDist = 3;
    int hoseDist = 50;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 3;
    int rowDist = 2;
    int colDist = 1;
    int hoseDist = 20;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
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
    int n = 3;
    int rowDist = 2;
    int colDist = 2;
    int hoseDist = 5;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
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
    int n = 6;
    int rowDist = 2;
    int colDist = 5;
    int hoseDist = 300;
    GardenHose* pObj = new GardenHose();
    clock_t start = clock();
    int result = pObj->countDead(n, rowDist, colDist, hoseDist);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=301843&rd=5072&pm=987
********************************************************************************
#include <iostream>
#include <algorithm>
using namespace std;
 
class GardenHose {
public:
 int countDead ( int n, int rowDist, int colDist, int hoseDist ) {
  int result = 0;
  for ( int a =1; a<=n; ++a )
   for ( int b =1; b<=n ; ++b) 
    if ( min ( min ( a, n - a + 1 ) * rowDist, min ( b, n - b + 1 ) * colDist ) > hoseDist ) ++result;
  return result;
 };
 
};

********************************************************************************
*******************************************************************************/