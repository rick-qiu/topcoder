/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=762
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

class StockSales {
public:
    vector<int> getAmounts(vector<int> values);
};

vector<int> StockSales::getAmounts(vector<int> values) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> values = {6, 12, 17};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, -7, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> values = {10, 4};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> values = {79};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> values = {60, 60, 60, 60, 60, 60, 60};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> values = {84, 23, 46};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, 1, 5};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> values = {23, 46, 84};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, -3};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> values = {46, 84, 23};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, -3, 11};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> values = {4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> values = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> values = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> values = {17, 19, 5, 13, 11, 37, 59};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 8, -5};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> values = {17, 19, 37, 11, 22, 110};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 0, 0, -1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> values = {17, 19, 37, 110, 22, 11};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 0, 0, -10};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> values = {17, 19, 37, 11, 110, 33};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 0, -1, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> values = {1000000, 499999};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-249999, 499999};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> values = {17, 19, 11, 22, 110, 37, 73, 91, 52, 13, 98, 4002, 32, 501, 772, 999, 112, 97, 95};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -47, 48};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> values = {17, 19, 11, 22, 110, 37, 73, 91, 52, 13, 98, 4002, 32, 501, 772, 999, 112, 100, 95};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2, 7, -5};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> values = {255255, 170170, 102102, 72930, 46410, 39270, 30030};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, -2, 2, 1, 4, -19};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> values = {510510, 340340, 204204, 145860, 92820, 78540, 60060};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, -2, 2, 1, 4, -19};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> values = {20, 4, 9, 6};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, -2};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> values = {200000, 240000, 300000, 150000, 400000, 120000, 800000};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, -1, 0, 8, -1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> values = {6, 15, 35};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, -1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> values = {5, 5, 5, 5, 5};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> values = {6, 10, 15};
    StockSales* pObj = new StockSales();
    clock_t start = clock();
    vector<int> result = pObj->getAmounts(values);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, -1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5848&pm=762
********************************************************************************
#line 2 "StockSales.cpp" 
 
// Warning: no successful challenges against me yet. 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
#include <sstream> 
 
using namespace std; 
typedef long long ll; typedef long double ld; 
typedef vector<int> vi; typedef vector<string> vs; 
 
#define LS < 
#define FOR(k,start,end) for(typeof(start) k=(start); k LS (end); ++k) 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
  
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); k++) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
#define FORALL(k,a,b,cond) (!EXISTS(k,a,b,!(cond))) 
  
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); k++) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
#define PRODTO(k,a,b,init,x) FOLD0(k,a,b,init,R##k *= (x)) 
#define MAXTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k >?= (x)) 
#define MINTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k <?= (x)) 
#define SUM(k,a,b,x) SUMTO(k,a,b,(typeof(x)) (0), x) 
#define PROD(k,a,b,x) PRODTO(k,a,b,(typeof(x)) (1), x) 
  
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(k++; k LS (b); k++) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
#define MIN(k,a,b,x) FOLD1(k,a,b,x, R##k <?= (x)) 
  
#define INF 2000000000 
int tcize(int n) {return n<INF ? n : -1;} 
 
 
ll gcd(ll k, ll l) { 
  return k ? gcd(l%k,k) : l; 
  } 
 
ll cd[200]; 
 
bool mod(ll a, ll b, ll c) { 
  a %= b; 
  if(a<0) a += b; 
  return a == c; 
  } 
 
class StockSales { 
  public: 
  vector <int> getAmounts(vector <int> values) { 
    // !FDI 
    int N = Size(values); 
    cd[N-1] = values[N-1]; 
    for(int k=N-2; k>=0; k--) cd[k] = gcd(cd[k+1], values[k]); 
    ll curr = 0; 
    ll min = cd[0]; 
    vector<int> res; 
    FOR(k,0,N-1) if(cd[k+1] == cd[0]) res.push_back(0); else { 
      ll cr = 0; 
      while(true) { 
        if(mod((curr+cr*values[k]), cd[k+1], cd[0])) { 
          curr += cr*values[k]; 
          res.push_back(cr); 
          break; 
          } 
        else if(mod((curr-cr*values[k]), cd[k+1], cd[0])) { 
          curr -= cr*values[k]; 
          res.push_back(-cr); 
          break; 
          } 
        else cr++; 
        } 
      } 
    res.push_back((min-curr) / values[N-1]); 
    return res; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/