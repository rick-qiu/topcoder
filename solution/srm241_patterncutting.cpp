/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4425
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

class PatternCutting {
public:
    int getMax(int width, int height, vector<string> pattern);
};

int PatternCutting::getMax(int width, int height, vector<string> pattern) {
    int ret;
    return ret;
}


int test0() {
    int width = 4;
    int height = 5;
    vector<string> pattern = {"XXX", ".X."};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
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
    int width = 6;
    int height = 5;
    vector<string> pattern = {"XX", "XX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 4;
    int height = 3;
    vector<string> pattern = {"XXXXX", "XX..."};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"X"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"XX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"XX.", ".XX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"XX.", ".X.", ".XX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"XX.", ".XX", "..X"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"XXX", "X.X", "XXX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 4;
    int height = 5;
    vector<string> pattern = {"XXX", ".XX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 6;
    int height = 5;
    vector<string> pattern = {"XX", "X."};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 3;
    int height = 2;
    vector<string> pattern = {"XX", "X."};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"X"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 6;
    int height = 5;
    vector<string> pattern = {"X.", "XX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"X.", "XX"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 6;
    int height = 6;
    vector<string> pattern = {"XXX", "X.X"};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 6;
    int height = 5;
    vector<string> pattern = {"XX", "X."};
    PatternCutting* pObj = new PatternCutting();
    clock_t start = clock();
    int result = pObj->getMax(width, height, pattern);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8365685&rd=7216&pm=4425
********************************************************************************
#line 5 "PatternCutting.cpp" 
#include <string> 
#include <vector> 
#include <cstdio> 
#include <algorithm> 
#include <utility> 
#include <sstream> 
 
using namespace std; 
 
#define REP(i,n) for(int i=0;i<(n);++i) 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i) 
#define FORD(i,b,a) for(int i=(b);i>=(a);--i) 
#define VAR(i,c) __typeof(c) i(c) 
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i) 
 
template <class T> inline int size(const T &v) {return v.size();} 
 
const int INF = 1000000000; 
 
//////////////////////////////// 
 
int tab[6][6]; 
 
int pat[4][6][6]; 
 
int pxs[4], pys[4], xs, ys, capa; 
 
int best; 
 
void dzialaj(int x, int y, int ile, int left) 
{ 
  best >?= ile; 
  if (x==xs) { x = 0; ++y; } 
  if (y==ys) return; 
  if (ile+left/capa<=best) 
  { 
    return; 
  } 
  REP(d, 4) 
  if (x+pxs[d]<=xs && y+pys[d]<=ys) 
  { 
    REP(x2, pxs[d]) 
    REP(y2, pys[d]) 
    if (pat[d][x2][y2] && tab[x+x2][y+y2]) 
      goto zle; 
    REP(x2, pxs[d]) 
    REP(y2, pys[d]) 
    if (pat[d][x2][y2]) 
      tab[x+x2][y+y2] = 1; 
 
    dzialaj(x, y, ile+1, left-capa); 
     
    REP(x2, pxs[d]) 
    REP(y2, pys[d]) 
    if (pat[d][x2][y2]) 
      tab[x+x2][y+y2] = 0; 
     
    zle:; 
  } 
   
  dzialaj(x+1, y, ile, left-!tab[x][y]); 
} 
 
class PatternCutting 
{  
public:  
  int getMax(int xs2, int ys2, vector <string> pattern)  
  {  
    pxs[0]=pxs[1]=pys[2]=pys[3] = size(pattern); 
    pys[0]=pys[1]=pxs[2]=pxs[3] = size(pattern[0]); 
    capa = 0; 
    REP(x, pxs[0]) 
    REP(y, pys[0]) 
    { 
      pat[0][x][y] = pattern[x][y]=='X'; 
      if (pat[0][x][y]) ++capa; 
      pat[1][pxs[0]-1-x][pys[0]-1-y] = pat[0][x][y]; 
      pat[2][y][pxs[0]-1-x] = pat[0][x][y]; 
      pat[3][pys[0]-1-y][x] = pat[0][x][y]; 
    } 
     
     
    xs = xs2; 
    ys = ys2; 
    best = 0; 
    if (pxs[0]==1 && pys[0]==1) return xs*ys; 
    if (pxs[0]==2 && pys[0]==1) return xs*ys/2; 
    if (pxs[0]==1 && pys[0]==2) return xs*ys/2; 
    REP(x, xs) REP(y, ys) tab[x][y] = 0; 
    dzialaj(0, 0, 0, xs*ys); 
    return best; 
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/