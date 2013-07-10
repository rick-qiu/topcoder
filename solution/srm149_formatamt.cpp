/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1313
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

class FormatAmt {
public:
    string amount(int dollars, int cents);
};

string FormatAmt::amount(int dollars, int cents) {
    string ret;
    return ret;
}


int test0() {
    int dollars = 123456;
    int cents = 0;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$123,456.00";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int dollars = 49734321;
    int cents = 9;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$49,734,321.09";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int dollars = 0;
    int cents = 99;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$0.99";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int dollars = 249;
    int cents = 30;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$249.30";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int dollars = 2;
    int cents = 2;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$2.02";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int dollars = 29;
    int cents = 69;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$29.69";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int dollars = 1000;
    int cents = 1;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$1,000.01";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int dollars = 99999;
    int cents = 10;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$99,999.10";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int dollars = 2000000000;
    int cents = 55;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$2,000,000,000.55";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int dollars = 3040506;
    int cents = 0;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$3,040,506.00";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int dollars = 0;
    int cents = 0;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$0.00";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int dollars = 0;
    int cents = 5;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$0.05";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int dollars = 205;
    int cents = 6;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$205.06";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int dollars = 20502030;
    int cents = 70;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$20,502,030.70";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int dollars = 1001001001;
    int cents = 1;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$1,001,001,001.01";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int dollars = 600;
    int cents = 0;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$600.00";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int dollars = 12345;
    int cents = 0;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$12,345.00";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int dollars = 1010001;
    int cents = 1;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$1,010,001.01";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int dollars = 0;
    int cents = 0;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$0.00";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int dollars = 100000;
    int cents = 44;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$100,000.44";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int dollars = 324567789;
    int cents = 54;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$324,567,789.54";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int dollars = 29;
    int cents = 29;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$29.29";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int dollars = 1000;
    int cents = 1;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$1,000.01";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int dollars = 1000;
    int cents = 99;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$1,000.99";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int dollars = 1234;
    int cents = 1;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$1,234.01";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int dollars = 7;
    int cents = 7;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$7.07";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int dollars = 0;
    int cents = 98;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$0.98";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int dollars = 12345;
    int cents = 6;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$12,345.06";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int dollars = 21;
    int cents = 0;
    FormatAmt* pObj = new FormatAmt();
    clock_t start = clock();
    string result = pObj->amount(dollars, cents);
    clock_t end = clock();
    delete pObj;
    string expected = "$21.00";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7223199&rd=4550&pm=1313
********************************************************************************
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <sstream>
#include <iostream>
 
using namespace std;
 
typedef vector <int> VI;
typedef vector <string> VS;
 
class FormatAmt
{
public:
  string amount(int dollars, int cents)
  {
    string r;
    if (dollars==0)
      r="0";
    else
    {
      ostringstream os;
      os << dollars;
      string s=os.str();
      for (int i=0; i<s.size(); i++)
      {
        r=s[s.size()-i-1]+r;
        if (i % 3 == 2 && i<s.size()-1)
          r=","+r;
      }
    }
    r=r+".";
    
    ostringstream os2;
    os2 << cents;
    if (cents<10)
      r=r+"0";
    r=r+os2.str();
 
    r="$"+r;
    return r;
  }
};

********************************************************************************
*******************************************************************************/