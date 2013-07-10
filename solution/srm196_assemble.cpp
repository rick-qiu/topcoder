/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1283
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

class Assemble {
public:
    int minCost(vector<int> connect);
};

int Assemble::minCost(vector<int> connect) {
    int ret;
    return ret;
}


int test0() {
    vector<int> connect = {19, 50, 10, 39};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 19400;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> connect = {13, 18, 24, 11, 25, 100, 93, 92, 79};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 407518;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> connect = {3, 100, 2, 7, 9, 94, 23, 54, 72, 14, 26, 53, 5, 92, 3, 99, 100, 23, 32, 96, 91, 92, 93, 95, 82, 81, 4, 4, 34, 47, 75, 65, 4, 3, 47, 68, 12, 35, 69, 80, 88, 87, 79, 17, 76, 75, 43, 71, 23, 23};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 1136260;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> connect = {3, 100, 2, 7, 9, 94, 23, 54, 72, 14, 26, 53, 5, 92};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 78868;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> connect = {3, 100, 2, 7, 9};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 1520;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> connect = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> connect = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 50907600;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> connect = {17, 19, 23};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 8208;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> connect = {1, 100, 1, 1, 1, 1, 1, 1};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> connect = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 1701;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> connect = {32, 11, 98, 23, 12, 15, 55, 55, 92, 33, 3, 3, 3, 99, 17};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 112322;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> connect = {83, 83, 83, 83, 83, 83, 83, 1, 83, 83, 83, 83, 83};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 293772;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> connect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 18581;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> connect = {10, 50, 90, 90};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 148330;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> connect = {1, 100, 1, 100, 1, 100, 1, 100, 100};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 22138;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> connect = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 92, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 49607680;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> connect = {27, 50, 17, 13, 22, 19, 22, 44, 99, 77, 43, 31, 87, 31, 1, 12, 48, 12, 17, 23, 37, 39, 14, 10, 34, 64, 89, 78, 21, 24, 99, 83, 31, 32, 73, 13, 41, 34, 68, 13, 87, 63, 98, 37, 31, 31, 10, 31, 41, 20};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 1055386;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> connect = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 1503;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> connect = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 87660;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> connect = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Assemble* pObj = new Assemble();
    clock_t start = clock();
    int result = pObj->minCost(connect);
    clock_t end = clock();
    delete pObj;
    int expected = 50907600;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5071&pm=1283
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
 
VI a; 
int memo[100][100]; 
int doit(int s, int e) { 
  if( s == e ) return 0; 
  int &ret = memo[s][e]; 
  if( ret ) return ret; 
  ret = 1000000000; 
  for( int i = s; i < e; i++ ) 
    ret <?= doit(s, i) + doit(i+1, e) +  
      (a[s]+i-s+1)*a[i+1]*(a[e+1]+e-i); 
  return ret; 
} 
 
class Assemble { 
public: 
int minCost(vector <int> A) { 
  a = A; 
  return doit(0, a.size()-2); 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/