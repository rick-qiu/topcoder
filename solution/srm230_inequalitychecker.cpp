/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3560
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

class InequalityChecker {
public:
    vector<int> getDifferences(int n);
};

vector<int> InequalityChecker::getDifferences(int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 2;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
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
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 100;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2500, 1};
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
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 5;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 4};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 6;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 7;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 8;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 9;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 4};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 10;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 50;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {625, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 33;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1089, 4};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 79;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6241, 4};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 25;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {625, 4};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 97;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9409, 4};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 98;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2401, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 99;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9801, 4};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 91;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8281, 4};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 92;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2116, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 93;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8649, 4};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 94;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2209, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 95;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9025, 4};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 96;
    InequalityChecker* pObj = new InequalityChecker();
    clock_t start = clock();
    vector<int> result = pObj->getDifferences(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2304, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10582231&rd=6519&pm=3560
********************************************************************************
#include <vector>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>
#include <sstream>
#include <map>
 
using namespace std;
 
class InequalityChecker
{
       public:
 
vector <int> getDifferences(int n)
  {
 
vector <int> res (2,0);
 
int s = (n*(n-1)*n*(n-1))/4;
int S = (n*(n+1)*n*(n+1))/4;
 
int x = 2*(s+S) - (n*n*n*n);
int y = 4;
 
if(x % 4 == 0)
  {
  x = x/4;
  y = 1;
  }
 
if(x % 2 == 0 && x % 4 != 0)
  {
  x = x/2;
  y = 2;
  }
 
res[0] = x;
res[1] = y;
 
return res;
 
} 
 
};

********************************************************************************
*******************************************************************************/