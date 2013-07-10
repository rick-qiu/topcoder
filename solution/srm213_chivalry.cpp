/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2850
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

class Chivalry {
public:
    string getOrder(string first, string second);
};

string Chivalry::getOrder(string first, string second) {
    string ret;
    return ret;
}


int test0() {
    string first = "M";
    string second = "W";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WM";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string first = "MM";
    string second = "MW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMW";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string first = "MMMM";
    string second = "W";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WMMMM";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string first = "M";
    string second = "WWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWM";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string first = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW";
    string second = "WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string first = "MMMMMWWWW";
    string second = "MWWWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMWWWWMWWWW";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string first = "MWWWW";
    string second = "MMMMMWWWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "MWWWWMMMMMWWWW";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string first = "WMW";
    string second = "WMW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWMWMW";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string first = "WWWW";
    string second = "WWWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWW";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string first = "MMMM";
    string second = "W";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WMMMM";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string first = "W";
    string second = "MMMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WMMMM";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string first = "MMMMMMMMMMWWWWWWWWWWMMMMMMMMMMWWWWWWWWWWMMMMMMMMMM";
    string second = "WWWWWWWWWWMMMMMMMMMMWWWWWWWWWWMMMMMMMMMMWWWWWWWWWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWMMMMMMMMMMWWWWWWWWWWMMMMMMMMMMWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWMMMMMMMMMMWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string first = "MWW";
    string second = "WMMMMMMMWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WMWWMMMMMMMWW";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string first = "MWWWMMMMWWM";
    string second = "MMMWWWMWMW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "MWWWMMMMWWMMMMWWWMWMW";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string first = "WMWMWMWM";
    string second = "MMMMMMMMMMMMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WMWMWMWMMMMMMMMMMMMMM";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string first = "WWWMMMWWWWWWWWWMWWWWWWWWWW";
    string second = "WMMMWMWMWMWMMMMMWWMWWMWMW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWMMMWWWWWWWWWMWWWWWWWWWWMMMWMWMWMWMMMMMWWMWWMWMW";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string first = "WWMM";
    string second = "MMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWMMMMM";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string first = "MWWWW";
    string second = "WMMMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WMWWWWMMMM";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string first = "WWWWW";
    string second = "WWWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string first = "M";
    string second = "W";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WM";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string first = "MW";
    string second = "M";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "MWM";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string first = "MMMMWMMWMMMMMM";
    string second = "WWWWMMMWWWWWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWMMMMWMMWMMMMMMMMMWWWWWW";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string first = "WWWWW";
    string second = "MMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWMMM";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string first = "WMM";
    string second = "WMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWMMMM";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string first = "WMM";
    string second = "WWW";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWMM";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string first = "WMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWM";
    string second = "WMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "WWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWM";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string first = "MMWW";
    string second = "MMMM";
    Chivalry* pObj = new Chivalry();
    clock_t start = clock();
    string result = pObj->getOrder(first, second);
    clock_t end = clock();
    delete pObj;
    string expected = "MMWWMMMM";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8471704&rd=5859&pm=2850
********************************************************************************
// Libraries
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <cmath>
 
// Some useful macros
#define FOR(i,n) for(int i=0;i<n;i++)
#define REP(i,f,t) for(int i=f;i<=t;i++)
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end())
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c),0)
using namespace std;
typedef vector<int> VI;
 
class Chivalry {
  public:
  string getOrder(string first, string second) {
    int i=0,j=0;
    string result;
    while(i<first.size() && j<second.size()) {
      if(first[i] == 'W') { result+='W'; i++; }
      else if(second[j] == 'W') { result += 'W'; j++; }
      else if(first[i] == second[j] && first[i] == 'M') {
        result+='M';
        i++;
      }
    }
    while(i<first.size()) {
      result+=first[i++];
    }
    while(j<second.size()) { result+=second[j++]; }
    return result;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/