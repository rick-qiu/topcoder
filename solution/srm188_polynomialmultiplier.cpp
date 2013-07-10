/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2418
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

class PolynomialMultiplier {
public:
    string product(string f1, string f2);
};

string PolynomialMultiplier::product(string f1, string f2) {
    string ret;
    return ret;
}


int test0() {
    string f1 = "1 + x";
    string f2 = "1 + x";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "x^2 + 2*x + 1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string f1 = "4*x^4 + 1";
    string f2 = "3*x^5 + 7*x";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "12*x^9 + 31*x^5 + 7*x";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string f1 = "1 + x + 1 + x";
    string f2 = "5 + 5";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "20*x + 20";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string f1 = "8*x^5";
    string f2 = "9*x^7";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "72*x^12";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string f1 = "5*x^3 + x^4 + 8 + 2*x^6";
    string f2 = "3*x^5 + 4*x + 7*x^9";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "14*x^15 + 7*x^13 + 35*x^12 + 6*x^11 + 59*x^9 + 15*x^8 + 8*x^7 + 28*x^5 + 20*x^4 + 32*x";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string f1 = "9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9";
    string f2 = "9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9*x^9 + 9";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "2916*x^18 + 972*x^9 + 81";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string f1 = "9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9";
    string f2 = "9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9 + 9";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "13689";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string f1 = "9*x^9 + 9*x^5 + 9*x^4 + 9*x^3 + 9*x^2 + 9*x + 9";
    string f2 = "9*x^9 + 9*x^8 + 9*x^7 + 9*x^6 + 9*x^5 + 9*x^4 + 9";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "81*x^18 + 81*x^17 + 81*x^16 + 81*x^15 + 162*x^14 + 243*x^13 + 243*x^12 + 324*x^11 + 405*x^10 + 567*x^9 + 405*x^8 + 324*x^7 + 243*x^6 + 243*x^5 + 162*x^4 + 81*x^3 + 81*x^2 + 81*x + 81";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string f1 = "1";
    string f2 = "1";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string f1 = "x";
    string f2 = "x";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "x^2";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string f1 = "1";
    string f2 = "x";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string f1 = "x";
    string f2 = "1";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string f1 = "1 + x + x^2 + x^3 + x^4 + x^5 + x^6 + x^7 + x^8";
    string f2 = "x^9 + x^8 + x^7 + x^6 + x^5 + x^4 + x^3 + x^2 + x";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "x^17 + 2*x^16 + 3*x^15 + 4*x^14 + 5*x^13 + 6*x^12 + 7*x^11 + 8*x^10 + 9*x^9 + 8*x^8 + 7*x^7 + 6*x^6 + 5*x^5 + 4*x^4 + 3*x^3 + 2*x^2 + x";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string f1 = "4*x^8 + 7*x + 6*x^3 + x^9 + 8*x^5 + 5*x^2 + 9*x^7";
    string f2 = "6*x^8 + 5*x^3 + 2*x^7 + 9*x^5 + 8*x^9 + 4*x^4";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "8*x^18 + 38*x^17 + 98*x^16 + 62*x^15 + 91*x^14 + 88*x^13 + 166*x^12 + 132*x^11 + 215*x^10 + 84*x^9 + 108*x^8 + 69*x^7 + 113*x^6 + 53*x^5 + 35*x^4";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string f1 = "4*x";
    string f2 = "x^4";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "4*x^5";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string f1 = "3*x^4 + 5*x^6 + 3*x^4 + 5*x^6";
    string f2 = "6*x^7 + 8*x^9 + 6*x^7 + 8*x^9 + 6*x^7 + 8*x^9";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "240*x^15 + 324*x^13 + 108*x^11";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string f1 = "5*x^3 + x^4 + 8 + 2*x^6";
    string f2 = "3*x^5 + 4*x + 7*x^9";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "14*x^15 + 7*x^13 + 35*x^12 + 6*x^11 + 59*x^9 + 15*x^8 + 8*x^7 + 28*x^5 + 20*x^4 + 32*x";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string f1 = "1";
    string f2 = "1";
    PolynomialMultiplier* pObj = new PolynomialMultiplier();
    clock_t start = clock();
    string result = pObj->product(f1, f2);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=4760&pm=2418
********************************************************************************
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <setjmp.h>
using namespace std;
class PolynomialMultiplier {
 public:
  int poly[64], poly2[64];
  int result[64];
  void prs(char*foo,int*poly) {
   char *bar;
   for (bar = strtok(foo, " "); bar; bar = strtok(NULL, " ")) {
    if (!strcmp(bar, "+")) continue;
    switch(strlen(bar)) {
     case 1:
      if (isdigit(bar[0])) poly[0]+=bar[0]-'0';
      else poly[1]++;
      break;
     case 3:
      if (bar[1] == '^') poly[bar[2]-'0']++;
      else poly[1] += bar[0]-'0';
      break;
     case 5:
      poly[bar[4]-'0'] += bar[0]-'0';
    }
   }
  }
  string product(string f1, string f2) {
   char foo[512];
   int i, j;
   char buf[512];
   memset(poly,0,sizeof(poly));
   memset(poly2,0,sizeof(poly2));
   strcpy(foo,f1.c_str());
   prs(foo,poly);
   strcpy(foo,f2.c_str());
   prs(foo,poly2);
   memset(result,0,sizeof(result));
   for (i = 0; i < 16; i++)
    for (j = 0; j < 16; j++)
     result[i+j] += poly[i]*poly2[j];
   memset(foo,0,sizeof(foo));
   for (i = 32; i >= 0; i--) {
    if (!result[i]) continue;
    if (result[i] > 1 && i > 1) sprintf(buf, "%i*x^%i", result[i], i);
    if (result[i] > 1 && i == 1) sprintf(buf, "%i*x", result[i]);
    if (result[i] && i == 0) sprintf(buf, "%i", result[i]);
    if (result[i] == 1 && i > 1) sprintf(buf, "x^%i", i);
    if (result[i] == 1 && i == 1) sprintf(buf, "x");
    if (foo[0]) strcat(foo, " + ");
    strcat(foo, buf);
   }
   return string(foo);
    
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/