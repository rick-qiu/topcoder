/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1608
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

class Quilting {
public:
    string lastPatch(int length, int width, vector<string> colorList);
};

string Quilting::lastPatch(int length, int width, vector<string> colorList) {
    string ret;
    return ret;
}


int test0() {
    int length = 3;
    int width = 2;
    vector<string> colorList = {"RED", "BLUE", "TAN"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "TAN";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 4;
    int width = 3;
    vector<string> colorList = {"E", "D", "C", "B", "A"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 5;
    int width = 4;
    vector<string> colorList = {"RED", "BLUE", "YELLOW", "GREEN", "ORANGE", "PURPLE", "BROWN"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "ORANGE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 100;
    int width = 100;
    vector<string> colorList = {"A", "B", "C", "D", "E"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 3;
    int width = 3;
    vector<string> colorList = {"A", "B", "C", "D"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 1;
    int width = 1;
    vector<string> colorList = {"RED", "BLUE", "YELLOW"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 10;
    int width = 10;
    vector<string> colorList = {"X", "Y", "Z"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 100;
    int width = 99;
    vector<string> colorList = {"ORGANDY", "ORGANZA", "A", "B", "C", "D", "O", "X", "Y", "Z"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 40;
    int width = 40;
    vector<string> colorList = {"A", "B"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 39;
    int width = 39;
    vector<string> colorList = {"X", "D"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 17;
    int width = 17;
    vector<string> colorList = {"G", "H"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "G";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 2;
    int width = 1;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 9;
    int width = 9;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 9;
    int width = 8;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 8;
    int width = 8;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 8;
    int width = 7;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 44;
    int width = 44;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 57;
    int width = 56;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 89;
    int width = 88;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 89;
    int width = 89;
    vector<string> colorList = {"A"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 45;
    int width = 44;
    vector<string> colorList = {"ORGANDY", "ORGANZA", "A", "B", "C", "D", "O", "X", "Y", "Z"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 32;
    int width = 32;
    vector<string> colorList = {"ORGANDY", "ORGANZA", "A", "B", "C", "D", "O", "X", "Y", "Z"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 97;
    int width = 96;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F", "G", "H", "I"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 5;
    int width = 5;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F", "G"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 99;
    int width = 99;
    vector<string> colorList = {"A", "B", "C", "D", "E", "F", "G", "W", "Z"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 3;
    int width = 3;
    vector<string> colorList = {"A", "B", "C", "D"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 3;
    int width = 3;
    vector<string> colorList = {"A", "B", "C"};
    Quilting* pObj = new Quilting();
    clock_t start = clock();
    string result = pObj->lastPatch(length, width, colorList);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=288584&rd=4605&pm=1608
********************************************************************************
/****************************  http://www.thisisjeff.com/  ****************************/
 
#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <stdarg.h>
#include <string>
#include <vector>
using namespace std;
 
#define Forc(i, c) for(typeof(c.begin()) i(c.begin()); i != c.end(); ++i)
#define In(c, x) (c.find(x) != c.end())
#define Inv(v, x) (find(v, x) >= 0)
#define X first
#define Y second
#define Pair(x, y) make_pair(x, y)
#define SetPair(a, x, y) pair<typeof(x), typeof(y)> a(x, y)
#define mkvecint makeVec<int, int>
#define mkvecstring makeVec<string, char *>
typedef pair<int, int> point; typedef long long ll;
 
template <class T> T strToInt(string); template <class T> string intToStr(T);
int strToInt(string str) { return strToInt<int>(str); }
string intToStr(int x) { return intToStr<int>(x); }
vector<string> tokenize(string, string = " ", bool = false);
vector<int> tokenizeInt(string, string = " ", bool = false);
template <class A, class B> int find(const vector<A>&, B);
template <class T> T nth(const set<T>&, int);
template <class A, class B> void hookSort(vector<A>&, vector<B>&, bool = false);
template <class T> ostream &operator <<(ostream&, const vector<T>&);
template <class A, class B> ostream &operator <<(ostream&, const pair<A, B>&);
template <class A, class B> vector<A> makeVec(int, ...);
void validateExample(string, string, string, string);
 
/**************************************************************************************/
/*************************** Here is where my code begins. ****************************/
/**************************************************************************************/
 
const int RDIR[] = {0, -1, 0, 1};
const int CDIR[] = {1, 0, -1, 0};
 
string MyCode(int a, int b, vector<string> c) {
  vector<vector<int> > q(300, vector<int>(300, -1));
  int r = 150, C = 150;
  vector<vector<int> > toSort(c.size(), vector<int>(3, 0));
  for (int i(0); i < c.size(); ++i)
    toSort[i][2] = i;
  int lastCol(0), currDir(0);
  for (int i(0); i < a * b; ++i) {
    for (int j(0); j < c.size(); ++j)
      toSort[j][0] = 0;
    for (int j(-1); j < 2; ++j) for (int k(-1); k < 2; ++k)
      if (q[r + j][C + k] >= 0)
        ++toSort[q[r + j][C + k]][0];
    vector<vector<int> > cop(toSort);
    sort(cop.begin(), cop.end());
    lastCol = cop[0][2];
    q[r][C] = lastCol;
    ++toSort[lastCol][1];
    int goodDir((currDir + 1) % 4);
    if (q[r + RDIR[goodDir]][C + CDIR[goodDir]] == -1)
      currDir = goodDir;
    r += RDIR[currDir];
    C += CDIR[currDir];
  }
  return c[lastCol];
}
 
/**************************************************************************************/
/**************** And here is where my code ends.  Thanks for looking! ****************/
/**************************************************************************************/
 
struct Quilting {
  string lastPatch(int a, int b, vector<string> c) {
    validateExample("1", MyCode(3,2,mkvecstring(3,"RED","BLUE","TAN")), "TAN", "lastPatch(3,2,mkvecstring(3,\"RED\",\"BLUE\",\"TAN\"))");
    validateExample("2", MyCode(4,3,mkvecstring(5,"E","D","C","B","A")), "E", "lastPatch(4,3,mkvecstring(5,\"E\",\"D\",\"C\",\"B\",\"A\"))");
    validateExample("3", MyCode(3,3,mkvecstring(4,"A","B","C","D")), "C", "lastPatch(3,3,mkvecstring(4,\"A\",\"B\",\"C\",\"D\"))");
    validateExample("4", MyCode(1,1,mkvecstring(3,"RED","BLUE","YELLOW")), "RED", "lastPatch(1,1,mkvecstring(3,\"RED\",\"BLUE\",\"YELLOW\"))");
    validateExample("5", MyCode(10,10,mkvecstring(3,"X","Y","Z")), "Z", "lastPatch(10,10,mkvecstring(3,\"X\",\"Y\",\"Z\"))");
    return MyCode(a,b,c);
  }
};
 
template <class T> T strToInt(string str) {
  stringstream ss(str);
  T answer;
  ss >> answer;
  return answer;
}
 
template <class T> string intToStr(T x) {
  stringstream s;
  s << x;
  return s.str();
}
 
vector<string> tokenize(string str, string delim, bool returnDelims) {
  vector<string> answer;
  string temp;
  for (int i(0); i < str.length(); ++i) {
    bool isDelim(false);
    for (int j(0); j < delim.length(); ++j)
      if (str[i] == delim[j]) isDelim = true;
    if (!isDelim) {
      temp += str[i];
      continue;
    }
    if (temp != "") answer.push_back(temp);
    temp = "";
    if (returnDelims) answer.push_back(string(1, str[i]));
  }
  if (temp != "") answer.push_back(temp);
  return answer;
}
 
vector<int> tokenizeInt(string str, string delim, bool returnDelims) {
  vector<string> tokens(tokenize(str, delim, returnDelims));
  vector<int> answer(tokens.size());
  for (int i(0); i < tokens.size(); ++i)
    answer[i] = strToInt(tokens[i]);
  return answer;
}
 
template <class A, class B> int find(const vector<A> &vec, B item) {
  for (int i(0); i < vec.size(); ++i)
    if (vec[i] == item) return i;
  return -1;
}
 
template <class T> T nth(const set<T> &s, int x) {
  typename set<T>::iterator answer(s.begin());
  for (int i(0); i < x; ++i) ++answer;
  return *answer;
}
 
template <class A, class B> void hookSort(vector<A> &a, vector<B> &b, bool complete) {
  vector<pair<A, int> > toSort(a.size());
  for (int i(0); i < a.size(); ++i)
    toSort[i] = Pair(a[i], i);
  sort(toSort.begin(), toSort.end());
  vector<B> old(b);
  for (int i(0); i < b.size(); ++i)
    b[i] = old[toSort[i].Y];
  if (complete)
    sort(a.begin(), a.end());
}
 
template <class T> ostream &operator <<(ostream &os, const vector<T> &vec) {
  if (vec.empty()) return os;
  for (int i(0); i < vec.size() - 1; ++i) os << vec[i] << ',';
  return os << vec[vec.size() - 1];
}
 
template <class A, class B> ostream &operator <<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.X << ',' << p.Y << ')';
}
 
template <class A, class B> vector<A> makeVec(int n, ...) {
  vector<A> answer(n);
  va_list vl;
  va_start(vl, n);
  for (int i(0); i < n; ++i) answer[i] = va_arg(vl, B);
  va_end(vl);
  return answer;
}
 
void validateExample(string exampleNo, string returned, string expected, string args) {
  cout << "Example " << exampleNo << ": ";
  if (returned == expected)
    cout << "Success!" << endl;
  else {
    cout << "FAILURE..." << endl;
    cout << "   Expected: " << expected << endl;
    cout << "   Returned: " << returned << endl;
    cout << "   " << args << endl;
  }
}
 
// Powered by the awesomeness that is LunaticFringe.
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/