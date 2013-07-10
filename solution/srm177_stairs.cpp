/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2011
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

class Stairs {
public:
    int designs(int maxHeight, int minWidth, int totalHeight, int totalWidth);
};

int Stairs::designs(int maxHeight, int minWidth, int totalHeight, int totalWidth) {
    int ret;
    return ret;
}


int test0() {
    int maxHeight = 22;
    int minWidth = 25;
    int totalHeight = 100;
    int totalWidth = 100;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int maxHeight = 25;
    int minWidth = 25;
    int totalHeight = 60;
    int totalWidth = 100;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxHeight = 1000;
    int minWidth = 1;
    int totalHeight = 600;
    int totalWidth = 600;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxHeight = 359;
    int minWidth = 1;
    int totalHeight = 720;
    int totalWidth = 720;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxHeight = 360;
    int minWidth = 1;
    int totalHeight = 720;
    int totalWidth = 720;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int maxHeight = 355;
    int minWidth = 2;
    int totalHeight = 720;
    int totalWidth = 719;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
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
    int maxHeight = 22;
    int minWidth = 18;
    int totalHeight = 60;
    int totalWidth = 48;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int maxHeight = 10;
    int minWidth = 10;
    int totalHeight = 1000;
    int totalWidth = 1000;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
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
    int maxHeight = 390;
    int minWidth = 54;
    int totalHeight = 324;
    int totalWidth = 160;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxHeight = 1000;
    int minWidth = 1000;
    int totalHeight = 1000;
    int totalWidth = 1000;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxHeight = 1000;
    int minWidth = 2;
    int totalHeight = 720;
    int totalWidth = 480;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxHeight = 1000;
    int minWidth = 61;
    int totalHeight = 720;
    int totalWidth = 480;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxHeight = 300;
    int minWidth = 61;
    int totalHeight = 720;
    int totalWidth = 480;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxHeight = 1;
    int minWidth = 2;
    int totalHeight = 3;
    int totalWidth = 4;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxHeight = 10;
    int minWidth = 3;
    int totalHeight = 30;
    int totalWidth = 40;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
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
    int maxHeight = 170;
    int minWidth = 4;
    int totalHeight = 960;
    int totalWidth = 720;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxHeight = 1;
    int minWidth = 1;
    int totalHeight = 1;
    int totalWidth = 1;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
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
    int maxHeight = 3;
    int minWidth = 3;
    int totalHeight = 9;
    int totalWidth = 6;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxHeight = 12;
    int minWidth = 5;
    int totalHeight = 24;
    int totalWidth = 24;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int maxHeight = 1;
    int minWidth = 1;
    int totalHeight = 2;
    int totalWidth = 1;
    Stairs* pObj = new Stairs();
    clock_t start = clock();
    int result = pObj->designs(maxHeight, minWidth, totalHeight, totalWidth);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8365685&rd=4690&pm=2011
********************************************************************************
#line 5 "Stairs.cpp" 
#include <string> 
#include <vector> 
#include <cstdio> 
#include <algorithm> 
#include <utility> 
 
using namespace std; 
 
#define REP(i,n) for(int i=0;i<(n);++i) 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i) 
#define FORD(i,b,a) for(int i=(b);i>=(a);--i) 
#define VAR(i,c) __typeof(c) i(c) 
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i) 
 
template <class T> 
inline int size(const T &v) {return v.size();} 
 
const int INF = 1000000000; 
 
//////////////////////////////// 
 
class Stairs 
{  
public:  
  int designs(int maxHeight, int minWidth, int totalHeight, int totalWidth)  
  {  
    int ile1=0; 
    FOR (a,1,maxHeight) 
      if (totalHeight%a==0) 
      { 
        int r = totalHeight/a; 
        int p = r-1; 
        if (p>0 && totalWidth%p==0 &&  
          totalWidth/p>=minWidth) 
          ile1++; 
      } 
    return ile1; 
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/