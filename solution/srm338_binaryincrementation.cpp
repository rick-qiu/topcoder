/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7385
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

class BinaryIncrementation {
public:
    string plusOne(string x);
};

string BinaryIncrementation::plusOne(string x) {
    string ret;
    return ret;
}


int test0() {
    string x = "10011";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10100";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string x = "10000";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10001";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string x = "1111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10000";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string x = "1";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string x = "101010101010101010101010101010";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "101010101010101010101010101011";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string x = "111111111111111111111111111111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string x = "10";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string x = "11";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string x = "100";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "101";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string x = "101";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "110";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string x = "110";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string x = "111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string x = "1000";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "1001";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string x = "1001";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "1010";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string x = "1010";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "1011";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string x = "1011";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "1100";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string x = "100101010101010000";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100101010101010001";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string x = "101111111111111111111111111111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "110000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string x = "100000000000000000000000000000";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string x = "100000000000011000000000000001";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100000000000011000000000000010";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string x = "100001111110111111011111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100001111110111111100000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string x = "100001";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100010";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string x = "111111111111111111111111111111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string x = "1111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10000";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string x = "100101";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100110";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string x = "10001";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10010";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string x = "11111";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "100000";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string x = "10011";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10100";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string x = "1";
    BinaryIncrementation* pObj = new BinaryIncrementation();
    clock_t start = clock();
    string result = pObj->plusOne(x);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=19819911&rd=10662&pm=7385
********************************************************************************
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
 
class BinaryIncrementation {
public:
  string plusOne(string);
};
 
string BinaryIncrementation::plusOne(string x) {
  int i;
  for (i=x.size()-1; i>=0; i--)
  {
    if (x[i]=='1')
    {
      x[i]='0';
    }
    else
    {
      x[i]='1';
      break;
    }
  }
  if (i<0) x='1'+x;
  return x;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/