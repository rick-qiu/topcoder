/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4713
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

class SubstitutionCode {
public:
    int getValue(string key, string code);
};

int SubstitutionCode::getValue(string key, string code) {
    int ret;
    return ret;
}


int test0() {
    string key = "TRADINGFEW";
    string code = "LGXWEV";
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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
    SubstitutionCode* pObj = new SubstitutionCode();
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

int test19() {
    string key = "TRADINGFEW";
    string code = "LGXWEVTA";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 70913;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string key = "TRADINGFEW";
    string code = "LGXWEV";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 709;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string key = "ABCDEFGHIW";
    string code = "ABDRYHGOW";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 124870;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string key = "ABCDEFGHIJ";
    string code = "XJABJ";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string key = "ABCDEFGHIJ";
    string code = "BABA";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 2121;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string key = "CRYSTALBUM";
    string code = "MMA";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string key = "ABCDEFGHIJ";
    string code = "AAABCDEFG";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 111234567;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string key = "LRADINGFEW";
    string code = "LGXWEV";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 1709;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string key = "TRADINGFEW";
    string code = "LGXWEVFAF";
    SubstitutionCode* pObj = new SubstitutionCode();
    clock_t start = clock();
    int result = pObj->getValue(key, code);
    clock_t end = clock();
    delete pObj;
    int expected = 709838;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15422578&rd=8005&pm=4713
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <numeric> 
#include <functional> 
using namespace std; 
 
class SubstitutionCode 
{ 
public: 
  int getValue(string key, string code) 
  { 
    int i,j,val=0; 
    for(i=0;i<code.size();++i) 
      for(j=0;j<key.size();++j) 
  if(code[i]==key[j]) 
    val=10*val+(j+1)%10; 
    return val; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/