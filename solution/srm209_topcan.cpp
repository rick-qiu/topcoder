/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1729
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

class TopCan {
public:
    double minSurface(int volume);
};

double TopCan::minSurface(int volume) {
    double ret;
    return ret;
}


int test0() {
    int volume = 10;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 25.694955950835347;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int volume = 20;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 40.78820010663257;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int volume = 1;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 5.535810445932085;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int volume = 2;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 8.787551325369138;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int volume = 3;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 11.514949756065077;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int volume = 13;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 30.606249366769717;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int volume = 117;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 132.42554999383506;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int volume = 2048;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 892.7595659593932;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int volume = 17280;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 3700.07365692029;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int volume = 42376;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 6728.648641647673;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int volume = 76294;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 9958.061425281121;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int volume = 100000;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 11926.542062156956;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int volume = 3;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 11.514949756065077;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int volume = 26;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 48.5843924416113;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int volume = 1;
    TopCan* pObj = new TopCan();
    clock_t start = clock();
    double result = pObj->minSurface(volume);
    clock_t end = clock();
    delete pObj;
    double expected = 5.535810445932085;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5855&pm=1729
********************************************************************************
#line 2 "TopCan.cpp" 
 
// Warning: no successful challenges against me yet. 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
#include <sstream> 
#include <complex> 
 
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
 
class TopCan { 
  public: 
  double minSurface(int volume) { 
    // !FDI 
    double v = volume; 
    v /= 2*M_PI; 
    v = pow(v, 2/3.0); 
    v *= 6*M_PI; 
    return v; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/