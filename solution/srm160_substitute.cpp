/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1333
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

class Substitute {
public:
    int getValue(string key, string code);
};

int Substitute::getValue(string key, string code) {
    int ret;
    return ret;
}


int test0() {
    string key = "TRADINGFEW";
    string code = "LGXWEV";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 709;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string key = "ABCDEFGHIJ";
    string code = "XJ";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string key = "CRYSTALBUM";
    string code = "MMA";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
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
    string key = "ABCDEFGHIJ";
    string code = "BLKVA";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string key = "KLMNOPQRST";
    string code = "P";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string key = "ABCDEFGHIJ";
    string code = "JAJAJAJAX";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 1010101;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string key = "ABCDEFGHIJ";
    string code = "IXJYXIJAX";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 90901;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string key = "ACFHTBDEGQ";
    string code = "QGEDBTHFC";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 98765432;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string key = "ABCDEFGHIJ";
    string code = "JJJJJJJJJ";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string key = "ABCDEFGHIJ";
    string code = "XDJYXDJ";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 4040;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string key = "ABCDEFGZYX";
    string code = "YAZLDKSMN";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 9184;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string key = "FREAKYQUIP";
    string code = "ZBFEK";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string key = "PLASTERWIG";
    string code = "ASTERWIX";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 3456789;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string key = "FGHIJKLMNO";
    string code = "ABKAOAK";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 606;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string key = "ABCDEFGHIJ";
    string code = "I";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string key = "THREWAKING";
    string code = "DIJKLSIY";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 878;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string key = "CRYSTALBUM";
    string code = "MMA";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string key = "ABCDEFGHIJ";
    string code = "BCA";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string key = "ABCDEFGHIJ";
    string code = "C";
    Substitute* pObj = new Substitute();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287130&rd=4605&pm=1333
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <queue>
#include <climits>
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef long long ll;
 
char buffer[500];
string sval(int num)    { sprintf(buffer, "%d", num); return buffer; }
int    ival(string inp) { return atoi(inp.c_str()); }
float  fval(string inp) { return (float)atof(inp.c_str()); }
double dval(string inp) { return (double)atof(inp.c_str()); }
 
VS split(string inp, string sep) {
   VS ans;
   inp += sep;      // this is SO ugly...
   for (int i = 0, j = 0; i < inp.length(); i++)
      if (inp[i] == sep[0]) {
         ans.push_back(inp.substr(j, i - j));
         j = i + 1;
      }
   return ans;
}
 
// ****************************************** //
 
class Substitute {
   public:
 
int getValue(string key, string code) {
  string ans;
  int j;
    for (int i = 0; i < code.length(); i++) {
      char thisone = code[i];
      char inthere = false;
      for (j = 0; j < key.length(); j++) {
        if (key[j] == thisone) { inthere = true; break; }
      }
      j++;
      if (j > 9) j = 0;
      if (inthere) ans += sval(j);
    }
    return ival(ans);
   }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/