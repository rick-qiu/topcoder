/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3440
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

class KingOfTheCourt {
public:
    double chancesOfWinning(vector<int> ability);
};

double KingOfTheCourt::chancesOfWinning(vector<int> ability) {
    double ret;
    return ret;
}


int test0() {
    vector<int> ability = {1, 1};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> ability = {2, 1};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9350649350649349;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> ability = {1, 2};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5844155844155844;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> ability = {1, 1, 1, 1};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5065812082824602;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> ability = {47, 82, 65, 99, 2, 14, 9};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22734781036506918;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> ability = {39, 13, 54};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6762153623688765;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> ability = {86, 2};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999767767581795;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> ability = {89, 46, 1, 91, 18, 36, 12};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6868719469373123;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> ability = {39, 41, 59, 32, 97, 42};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16379671009097374;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> ability = {35, 69};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5891924484230299;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> ability = {8, 71, 70};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.037826189197781315;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> ability = {60, 29, 55};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7692771265722392;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> ability = {65, 96, 55, 79, 97};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28015674257401985;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> ability = {94, 3, 60, 33, 19, 22, 22};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8428053892425473;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> ability = {14, 85};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2667629127540412;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> ability = {71, 42, 91, 40, 20, 50};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.511518638371499;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> ability = {18, 50, 53, 57};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0925390880924591;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> ability = {99, 40, 94};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7747150192386446;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> ability = {16, 74};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3310234290528628;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> ability = {99, 62};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.902297361097626;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> ability = {16, 71, 58, 73};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04401935785171435;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> ability = {65, 49, 85, 99, 82, 75};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2258693317308275;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> ability = {15, 57};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3837013673079247;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> ability = {24, 10, 19, 14, 6, 69};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30833921892246624;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> ability = {72, 89, 91, 93, 94, 96, 99};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1403814777824161;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> ability = {47, 82, 65, 99, 2, 14, 9};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22734781036506918;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> ability = {50, 2, 30, 4, 5, 6, 7};
    KingOfTheCourt* pObj = new KingOfTheCourt();
    clock_t start = clock();
    double result = pObj->chancesOfWinning(ability);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8971810034837033;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5868&pm=3440
********************************************************************************
// Warning: less successful challenges against me than against tomek. 
// I'm now automatically removing unused stuff. 
 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
typedef long double ld; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Standard mathematical quantifiers, plus tools to implement them 
// find the first k in [a,b) that satisfies cond, or b if none 
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); ++k) if(cond) break, k) 
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); ++k) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
#define SUM(k,a,b,x) SUMTO(k,a,b,(typeof(x)) (0), x) 
 
#line 3 "KingOfTheCourt.cc" 
 
ld chance[6000][8]; 
 
int newx[6000][8]; 
 
ld curchance[6000]; 
 
int N; 
 
int encode(int* tab) { 
  int fac[8] = {1, 1, 2, 6, 24, 120, 720, 5040}; 
  int tab2[7]; 
  FOR(k ,0, N) tab2[k] = tab[k]; 
 
  int sum = 0; 
 
  for(int t=N-1; t>=0; t--) { 
    int c = FIRST(k, 0, N, tab2[k] == t); 
    sum += c * fac[t]; 
    tab2[c] = tab2[t]; 
    } 
  return sum; 
  } 
 
vector<int> ab; 
 
ld chanceWin(int p0, int p1) { 
  p0 = ab[p0]; 
  p1 = ab[p1]; 
  ld px = p0 / (p0 + p1 + 0.0); 
  return px * px; 
  } 
 
class KingOfTheCourt { 
  public: 
  double chancesOfWinning(vector <int> ability) { 
    // !FDI 
    ab = ability; 
 
    N = Size(ability); 
 
    int players[7] = {0,1,2,3,4,5,6}; 
     
    int nperm = 0; 
    int fcode = encode(players); 
 
    do { 
//    printf("P.\n"); fflush(stdout); 
      int cod = encode(players); 
 
      ld chanceLeft = 1; 
      FOR(t, 1, N) { 
        ld pc = chanceWin(players[t], players[0]); 
        chance[cod][t] = chanceLeft * pc; 
        chanceLeft *= (1-pc); 
        int players2[7]; 
        FOR(u, 0, N-t) players2[u] = players[u+t]; 
        FOR(u, 0, t) players2[u + (N-t)] = players[u+1]; 
        players2[N-1] = players[0]; 
        newx[cod][t] = encode(players2); 
        } 
      chance[cod][0] = players[0] == 0 ? chanceLeft : 0; 
//    printf("cl = %Lf\n", chance[cod][0]); 
//    printf("1: %d -> %Lf %d\n", cod, chance[cod][1], newx[cod][1]); 
      nperm++; 
      } 
    while(next_permutation(players, players+N)); 
 
    FOR(q, 0, nperm) curchance[q] = 0; 
 
    FOR(it, 0, 2000) 
    FOR(q, 0, nperm) curchance[q] = 
      chance[q][0] + 
      SUM(t, 1, N, 
        chance[q][t] * curchance[newx[q][t]] 
        ); 
     
    return curchance[fcode]; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/