/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4574
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

class BrokenCalculator {
public:
    int fewestKeys(vector<int> keys, string operators, int target);
};

int BrokenCalculator::fewestKeys(vector<int> keys, string operators, int target) {
    int ret;
    return ret;
}


int test0() {
    vector<int> keys = {0, 1, 2, 3};
    string operators = "+";
    int target = 5;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> keys = {0};
    string operators = "+-*/";
    int target = 5;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> keys = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string operators = "/-+*";
    int target = 124;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> keys = {1, 2, 4, 8};
    string operators = "+-*/";
    int target = 875;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> keys = {5, 6, 7, 9};
    string operators = "/";
    int target = 476;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> keys = {1, 3, 4, 5, 6, 7, 9};
    string operators = "+/";
    int target = 13;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> keys = {3, 4, 5, 7, 8, 9};
    string operators = "+-*";
    int target = 887;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> keys = {3, 5, 6, 7, 9};
    string operators = "/";
    int target = 363;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> keys = {7, 8, 9};
    string operators = "+*";
    int target = 825;
    BrokenCalculator* pObj = new BrokenCalculator();
    clock_t start = clock();
    int result = pObj->fewestKeys(keys, operators, target);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=7216&pm=4574
********************************************************************************
#define FR(i,a,b) for (int i = (a); i < (b); i++)
#define FOR(i,n) FR(i,0,n)
#define FORI(i,n) FOR(i,n.size())
#include <string>
#include <vector>
#include <queue>
#define MP make_pair
#define SZ size()
#define CS c_str()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <setjmp.h>
#include <regex.h>
#include <utility>
#define ll long long
#define ld long double
#define EPS 1e-9
using namespace std;
 
#include <queue>
 
struct BrokenCalculator {
int fewestKeys(vector <int> keys, string operators, int target) {
 int can[2222] = {0};
 int candig[22]={0};
 int digs[2222];
 FORI(i,keys)
  candig[keys[i]] = 1;
 FOR(i,1000) {
  char foo[512]; sprintf(foo, "%i", i);
  digs[i] = 10000;
  for (int j=0;foo[j];j++) if (!candig[foo[j]-'0']) goto sadface;
  digs[i] = strlen(foo);
  can[i] = 1;
  sadface:;
 }
 int dis[2222];
 memset(dis,1,sizeof(dis));
#define PII pair<int,int>
 priority_queue<PII> q;
 FOR(i,1000) if (can[i])
  dis[i] = digs[i], q.push(MP(-dis[i], i));
 while (q.SZ) {
  int k = q.top().second; q.pop();
  if (k<0 || k>999) continue;
  FOR(i,1000) if (can[i]) {
   if (i+k<1000&&strchr(operators.CS, '+')) if (dis[k]+1+digs[i] < dis[k+i]) q.push(MP(-(dis[k+i] = dis[k]+1+digs[i]), k+i));
   if (i>=k&&strchr(operators.CS, '-')) if (dis[k]+1+digs[i] < dis[k-i]) q.push(MP(-(dis[k-i] = dis[k]+1+digs[i]), k-i));
   if (i*k<1000&&strchr(operators.CS, '*')) if (dis[k]+1+digs[i] < dis[k*i]) q.push(MP(-(dis[k*i] = dis[k]+1+digs[i]), k*i));
   if (i&&strchr(operators.CS, '/')) if (dis[k]+1+digs[i] < dis[k/i]) q.push(MP(-(dis[k/i] = dis[k]+1+digs[i]), k/i));
  }
 }
 if (dis[target] < 5000000) return (dis[target]+1) <? digs[target];
 return -1;
}};
// Powered by ted

********************************************************************************
*******************************************************************************/