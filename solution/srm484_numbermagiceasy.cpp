/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11129
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

class NumberMagicEasy {
public:
    int theNumber(string answer);
};

int NumberMagicEasy::theNumber(string answer) {
    int ret;
    return ret;
}


int test0() {
    string answer = "YNYY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string answer = "YNNN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string answer = "NNNN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string answer = "YYYY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string answer = "NYNY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string answer = "NNNY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string answer = "NNYN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string answer = "NNYY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string answer = "NYNN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string answer = "NYYN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string answer = "NYYY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string answer = "YNNY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string answer = "YNYN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string answer = "YYNN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string answer = "YYNY";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
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
    string answer = "YYYN";
    NumberMagicEasy* pObj = new NumberMagicEasy();
    clock_t start = clock();
    int result = pObj->theNumber(answer);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22874271&rd=14237&pm=11129
********************************************************************************
#line 2 "NumberMagicEasy.cpp" 
#include <set> 
#include <vector> 
#include <string> 
#include <math.h> 
#include <ctype.h> 
#include <numeric>//0=48,1=49,....a=97 A=65 ASCII 
#include <sstream> 
#include <iostream> 
#include <stdlib.h> 
#include <algorithm> 
#include <functional> 
 
#define vi vector<int> 
#define vs vector<string> 
#define sz(x) (int)x.size() 
#define FOR(i,n) for(int i=0;i<(int)(n.size());i++) 
#define FORE(i,a,b) for(int i=a;i<(int)b;i++) 
#define acu(x) accumulate(x.begin(),x.end(),0) 
#define all(x) x.begin(), x.end() 
#define allm(x) x.begin(), x.end(), greater<int>() 
#define PI 3.1415926535897932384626433832795 
 
using namespace std; 
class NumberMagicEasy{  
public:  
  int theNumber(string a){ 
    string c1="YYYYYYYYNNNNNNNN"; 
    string c2="YYYYNNNNYYYYNNNN"; 
    string c3="YYNNYYNNYYNNYYNN"; 
    string c4="YNYNYNYNYNYNYNYN"; 
    string tem; 
    FORE(i,0,16){ 
      tem+=c1[i]; 
      tem+=c2[i]; 
      tem+=c3[i]; 
      tem+=c4[i]; 
      if(a==tem)return i+1; 
      tem=""; 
    } 
       
  }  
         
  
    };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/