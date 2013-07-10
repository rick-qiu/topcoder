/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1856
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

class WhatSort {
public:
    string sortType(vector<string> name, vector<int> age, vector<int> wt);
};

string WhatSort::sortType(vector<string> name, vector<int> age, vector<int> wt) {
    string ret;
    return ret;
}


int test0() {
    vector<string> name = {"BOB", "BOB", "DAVE", "JOE"};
    vector<int> age = {22, 35, 35, 30};
    vector<int> wt = {122, 122, 195, 200};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> name = {"BOB", "BOB", "DAVE", "DAVE"};
    vector<int> age = {22, 35, 35, 30};
    vector<int> wt = {122, 122, 195, 200};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> name = {"BOB", "BOB", "DAVE", "DAVE"};
    vector<int> age = {22, 35, 35, 30};
    vector<int> wt = {122, 122, 195, 190};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NWA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> name = {"A", "A", "A", "AA", "A"};
    vector<int> age = {3, 8, 2, 4, 9};
    vector<int> wt = {175, 173, 160, 160, 122};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> name = {"A", "A", "AAA", "AA", "A"};
    vector<int> age = {3, 8, 2, 4, 9};
    vector<int> wt = {175, 173, 160, 160, 122};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "WAN";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> name = {"A", "A", "A", "B", "B", "C"};
    vector<int> age = {48, 48, 72, 70, 71, 75};
    vector<int> wt = {10, 10, 9, 9, 8, 8};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> name = {"A", "B", "A", "B", "B", "C"};
    vector<int> age = {48, 48, 72, 70, 71, 75};
    vector<int> wt = {10, 10, 9, 9, 8, 8};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "WNA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> name = {"D", "D", "D", "D", "D", "D"};
    vector<int> age = {1, 2, 3, 4, 5, 6};
    vector<int> wt = {6, 5, 4, 1, 3, 2};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> name = {"JEREMIAH", "BOB", "BOB"};
    vector<int> age = {7, 2, 3};
    vector<int> wt = {200, 180, 180};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> name = {"JEREMIAH", "JEREMIAH", "YAHOUDI"};
    vector<int> age = {7, 12, 3};
    vector<int> wt = {200, 220, 220};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NAW";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> name = {"A", "B", "C", "C", "A", "A", "A"};
    vector<int> age = {1, 1, 1, 1, 2, 2, 2};
    vector<int> wt = {200, 230, 240, 230, 300, 300, 198};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "ANW";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> name = {"DAVE", "EDGAR", "AL", "AL", "BILL", "BILL", "ABLE", "AL", "JIM", "JIM"};
    vector<int> age = {20, 21, 22, 23, 23, 23, 23, 24, 25, 25};
    vector<int> wt = {150, 180, 200, 212, 212, 200, 100, 223, 229, 229};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "AWN";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> name = {"DAVE", "EDGAR", "ALL", "AL", "BILL", "BILL", "ABLE", "AL", "JIM", "JIM"};
    vector<int> age = {20, 21, 22, 23, 23, 23, 23, 25, 25, 25};
    vector<int> wt = {150, 180, 200, 212, 212, 200, 100, 223, 229, 229};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> name = {"DAVE", "EDGAR", "AL", "AL", "AL", "AL", "ABLE", "AL", "JIM", "JIM"};
    vector<int> age = {20, 21, 22, 23, 23, 23, 23, 24, 25, 25};
    vector<int> wt = {150, 180, 212, 212, 212, 212, 201, 223, 229, 229};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "AWN";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> name = {"A", "B", "C", "C", "A", "A", "A"};
    vector<int> age = {1, 1, 1, 1, 2, 2, 2};
    vector<int> wt = {260, 250, 240, 240, 300, 300, 198};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> name = {"A", "B", "C", "C", "A", "A", "A"};
    vector<int> age = {1, 1, 1, 1, 1, 1, 1};
    vector<int> wt = {200, 230, 240, 230, 300, 300, 198};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> name = {"JEREMIAHJONES", "JEREMIAH", "YAHOUDI"};
    vector<int> age = {7, 12, 3};
    vector<int> wt = {200, 220, 220};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> name = {"JEREMIAH", "JEREMIAH", "YAHOUDI"};
    vector<int> age = {7, 12, 3};
    vector<int> wt = {220, 220, 220};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> name = {"A", "B", "A", "A", "B", "C"};
    vector<int> age = {48, 48, 72, 70, 71, 75};
    vector<int> wt = {10, 10, 9, 9, 8, 8};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> name = {"A", "B", "A", "B", "B", "C", "C"};
    vector<int> age = {48, 48, 72, 70, 71, 75, 75};
    vector<int> wt = {10, 10, 9, 9, 8, 8, 8};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "WNA";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> name = {"BOB", "BOB", "DAVE", "DAVE"};
    vector<int> age = {22, 35, 35, 30};
    vector<int> wt = {122, 122, 195, 200};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> name = {"BOB", "BOB", "DAVE", "JOE"};
    vector<int> age = {22, 35, 35, 30};
    vector<int> wt = {122, 122, 195, 200};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> name = {"BOB", "BOB", "DAVE", "DAVE"};
    vector<int> age = {22, 35, 35, 30};
    vector<int> wt = {122, 122, 195, 190};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NWA";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> name = {"DAVE", "DAVE", "BOB", "DAVE"};
    vector<int> age = {25, 30, 30, 25};
    vector<int> wt = {200, 200, 180, 180};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "WNA";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> name = {"BOB", "BOB"};
    vector<int> age = {20, 20};
    vector<int> wt = {100, 100};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> name = {"ZZZ", "AAA", "AAA"};
    vector<int> age = {1, 2, 3};
    vector<int> wt = {66, 55, 44};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "IND";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> name = {"BOB", "BOB"};
    vector<int> age = {200, 40};
    vector<int> wt = {2, 2};
    WhatSort* pObj = new WhatSort();
    clock_t start = clock();
    string result = pObj->sortType(name, age, wt);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=345049&rd=4625&pm=1856
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <iostream>
#include <cmath>
 
using namespace std;
 
class WhatSort {
public:
  template< class T, class S, class V >
  bool sorted( vector< T > &a, vector< S > &b, vector< V > &c ) {
    for( int i = 1; i < a.size(); i++ ) {
      if( a[i-1] > a[i] )
  return false;
      if( a[i-1] == a[i] && b[i-1] > b[i] )
  return false;
      if( a[i-1] == a[i] && b[i-1] == b[i] && c[i-1] > c[i] )
  return false;
    }
    return true;
  }
  string sortType(vector <string> name, vector <int> age, vector <int> wt) {
    for( int i = 0; i < wt.size(); i++ )
      wt[i] = -wt[i];
    vector< string > sols;
    if( sorted( name, age, wt ) )
      sols.push_back( "NAW" );
    if( sorted( name, wt, age ) )
      sols.push_back( "NWA" );
    if( sorted( age, name, wt ) )
      sols.push_back( "ANW" );
    if( sorted( age, wt, name ) )
      sols.push_back( "AWN" );
    if( sorted( wt, name, age ) )
      sols.push_back( "WNA" );
    if( sorted( wt, age, name ) )
      sols.push_back( "WAN" );
    if( sols.size() > 1 )
      return "IND";
    if( sols.size() == 0 )
      return "NOT";
    return sols[0];
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/