/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2361
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

class Partial {
public:
    string derivative(string expr, string vars);
};

string Partial::derivative(string expr, string vars) {
    string ret;
    return ret;
}


int test0() {
    string expr = "7*x";
    string vars = "x";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "7";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string expr = "x + z + 9*z^2 + y*z^3";
    string vars = "z";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "3*y*z^2 + 18*z + 1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string expr = "x^2*y^2*z^2";
    string vars = "xy";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "4*x*y*z^2";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string expr = "y*8*z*x^3 + x^5 + y*2*x^4 + 9*x^4*z + x^5*5";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "6*x^5 + 2*x^4*y + 9*x^4*z + 8*x^3*y*z";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string expr = "9*x^9*y^9*z^9 + x^2*y^2*z^2";
    string vars = "xyzzy";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "419904*x^8*y^7*z^7 + 8*x";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string expr = "x + y + z";
    string vars = "yy";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string expr = "9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9*x^9";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "54*x^9";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string expr = "9*y^9 + 9*y^9 + 9*y^9 + 9*y^9 + 9*y^9 + 9*y^9";
    string vars = "yyyyy";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "816480*y^4";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string expr = "9*z^9 + 9*z^9 + 9*z^9 + 9*z^9 + 9*z^9 + 9*z^9";
    string vars = "y";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string expr = "2*x^7*z^5 + x^7*y^5*z*7 + y^8*z^8*4 + x^7*3*z^3";
    string vars = "xzyx";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "1470*x^5*y^4";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string expr = "y^7*x^4*6*z^3 + y*z^3*7*x^6 + x*y^8*z^2*7";
    string vars = "yzzx";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "1008*x^3*y^6*z + 112*y^7 + 252*x^5*z";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string expr = "y*6*x^2*z^6 + x^6*y^3*z^8 + x^6*z^5*5*y^6 + x^7*7";
    string vars = "x";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "30*x^5*y^6*z^5 + 6*x^5*y^3*z^8 + 12*x*y*z^6 + 49*x^6";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string expr = "x^8*z^7*y^9 + z^4*y^6*5*x^8 + x^8*z^6*y^7*3";
    string vars = "xyzxz";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "21168*x^6*y^8*z^5 + 35280*x^6*y^6*z^4 + 20160*x^6*y^5*z^2";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string expr = "2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 2 + 3 + 4 + 5 + 6";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "64";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string expr = "x + y + z + x + y + z + x + y + z + x + y + z + x";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "5*x + 4*y + 4*z";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string expr = "x + y + z + x + y + z + x + y + z + x + y + z + x";
    string vars = "x";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string expr = "x + y + z + x + y + z + x + y + z + x + y + z + x";
    string vars = "z";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "4";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string expr = "x*z*y + 2*y*x*z + y*3*z*x + z*x*4*y + z*y*x*5";
    string vars = "yzx";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "15";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string expr = "x + y + z";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "x + y + z";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string expr = "x^2*y + x*y^2";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "x^2*y + x*y^2";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string expr = "x^2";
    string vars = "x";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "2*x";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string expr = "x*y*z";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "x*y*z";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string expr = "x";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string expr = "x^4 + y^3*z^3";
    string vars = "";
    Partial* pObj = new Partial();
    clock_t start = clock();
    string result = pObj->derivative(expr, vars);
    clock_t end = clock();
    delete pObj;
    string expected = "y^3*z^3 + x^4";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=4760&pm=2361
********************************************************************************
#line 2 "Partial.cpp" 
 
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
typedef vector<int> VI; typedef vector<string> VS; typedef string S; 
 
#define LS < 
#define FOR(k,start,end) for(typeof(start) k=(start); k LS (end); ++k) 
#define Size(x) (int(x.size())) 
 
 
ll coeff[10][10][10]; 
 
string itoa(ll i) { 
  char buf[64]; 
  sprintf(buf, "%Ld", i); 
  string s = buf; 
  return s; 
  } 
 
class Partial { 
  public: 
  string derivative(string expr, string vars) { 
    FOR(x,0,10)  FOR(y,0,10)  FOR(z,0,10) coeff[x][y][z] = 0; 
    expr += " "; 
    int cx = 0, cy = 0, cz = 0, co = 1; 
    FOR(c,0,Size(expr)) { 
      if(isdigit(expr[c])) co *= expr[c]-48; 
      if(expr[c] == 'x' && expr[c+1] != '^') cx += 1; 
      if(expr[c] == 'y' && expr[c+1] != '^') cy += 1; 
      if(expr[c] == 'z' && expr[c+1] != '^') cz += 1; 
      if(expr[c] == 'x' && expr[c+1] == '^') {cx += expr[c+2]-48; c+=2;} 
      if(expr[c] == 'y' && expr[c+1] == '^') {cy += expr[c+2]-48; c+=2;} 
      if(expr[c] == 'z' && expr[c+1] == '^') {cz += expr[c+2]-48; c+=2;} 
      if(expr[c] == ' ') { 
        coeff[cx][cy][cz] += co; cx=0;cy=0;cz=0;co=1; c+=2; 
        } 
      } 
    FOR(l,0,Size(vars)) FOR(x,0,10)  FOR(y,0,10) FOR(z,0,10)  
      coeff[x][y][z] = 
        vars[l] == 'x' ? (x==9 ? 0 : coeff[x+1][y][z] * (x+1)) : 
        vars[l] == 'y' ? (y==9 ? 0 : coeff[x][y+1][z] * (y+1)) : 
        vars[l] == 'z' ? (z==9 ? 0 : coeff[x][y][z+1] * (z+1)) : 0; 
    string rs; 
    int terms = 0; 
    for(int s=30; s>=0; s--) 
    for(int x=9; x>=0; x--) for(int y=9; y>=0; y--) for(int z=9; z>=0; z--) 
    if(x+y+z == s && coeff[x][y][z]) { 
      if(terms) rs += " + "; terms++; 
      if(x==0 && y==0 && z==0) rs += itoa(coeff[x][y][z]); 
      else { 
        int ms = 0; 
        if(coeff[x][y][z]>1) {ms++; rs += itoa(coeff[x][y][z]);} 
        if(x>0) { 
          if(ms) rs+="*"; ms++; rs+="x"; if(x>1) rs+="^"; if(x>1) rs+=itoa(x); 
          } 
        if(y>0) { 
          if(ms) rs+="*"; ms++; rs+="y"; if(y>1) rs+="^"; if(y>1) rs+=itoa(y); 
          } 
        if(z>0) { 
          if(ms) rs+="*"; ms++; rs+="z"; if(z>1) rs+="^"; if(z>1) rs+=itoa(z); 
          } 
        } 
      } 
    if(!terms) rs = "0"; 
    return rs; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/