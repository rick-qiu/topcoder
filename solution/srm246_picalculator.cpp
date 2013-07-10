/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4470
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

class PiCalculator {
public:
    string calculate(int precision);
};

string PiCalculator::calculate(int precision) {
    string ret;
    return ret;
}


int test0() {
    int precision = 2;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int precision = 4;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1416";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int precision = 12;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141592653590";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int precision = 1;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int precision = 3;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.142";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int precision = 5;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int precision = 6;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141593";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int precision = 7;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415927";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int precision = 8;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159265";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int precision = 9;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141592654";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int precision = 10;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415926536";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int precision = 11;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159265359";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int precision = 13;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415926535898";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int precision = 14;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159265358979";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int precision = 15;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141592653589793";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int precision = 16;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415926535897932";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int precision = 17;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159265358979324";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int precision = 18;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141592653589793238";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int precision = 19;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415926535897932385";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int precision = 20;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159265358979323846";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int precision = 21;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141592653589793238463";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int precision = 22;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415926535897932384626";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int precision = 23;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159265358979323846264";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int precision = 24;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141592653589793238462643";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int precision = 25;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415926535897932384626434";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int precision = 4;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1416";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int precision = 3;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.142";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int precision = 18;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.141592653589793238";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int precision = 25;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415926535897932384626434";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int precision = 1;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int precision = 5;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.14159";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int precision = 7;
    PiCalculator* pObj = new PiCalculator();
    clock_t start = clock();
    string result = pObj->calculate(precision);
    clock_t end = clock();
    delete pObj;
    string expected = "3.1415927";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test27() == 0 ? ++passed : ++failed;
    test28() == 0 ? ++passed : ++failed;
    test29() == 0 ? ++passed : ++failed;
    test30() == 0 ? ++passed : ++failed;
    test31() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=7221&pm=4470
********************************************************************************
// You will never see how this line looked after 4 challenges failed! 
#include <algorithm> 
#include <string> 
using namespace std; 
 
#line 3 "PiCalculator.cc" 
 
string pi = "3.141592653589793238462643383279"; 
 
class PiCalculator { 
  public: 
  string calculate(int precision) { 
    // !FDI 
    string s = pi.substr(0, 2+precision); 
    if(pi[2+precision] >= '5') s[1+precision]++; 
    if(s[1+precision] == ':') {s[1+precision] = '0'; s[precision]++;} 
    return s; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/