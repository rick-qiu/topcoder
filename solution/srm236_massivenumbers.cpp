/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4448
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

class MassiveNumbers {
public:
    string getLargest(string numberA, string numberB);
};

string MassiveNumbers::getLargest(string numberA, string numberB) {
    string ret;
    return ret;
}


int test0() {
    string numberA = "3^100";
    string numberB = "2^150";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "3^100";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string numberA = "1^1000";
    string numberB = "2^1";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "2^1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string numberA = "893^605";
    string numberB = "396^906";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "396^906";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string numberA = "999^1000";
    string numberB = "1000^999";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "999^1000";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string numberA = "50^947";
    string numberB = "236^230";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "50^947";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string numberA = "46^779";
    string numberB = "873^636";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "873^636";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string numberA = "147^982";
    string numberB = "711^820";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "711^820";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string numberA = "558^782";
    string numberB = "511^886";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "511^886";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string numberA = "231^996";
    string numberB = "559^813";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "231^996";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string numberA = "936^50";
    string numberB = "377^466";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "377^466";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string numberA = "934^324";
    string numberB = "387^75";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "934^324";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string numberA = "937^805";
    string numberB = "997^778";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "937^805";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string numberA = "640^334";
    string numberB = "934^44";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "640^334";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string numberA = "915^748";
    string numberB = "725^618";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "915^748";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string numberA = "887^750";
    string numberB = "197^381";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "887^750";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string numberA = "4^8";
    string numberB = "572^268";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "572^268";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string numberA = "539^274";
    string numberB = "415^743";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "415^743";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string numberA = "32^639";
    string numberB = "287^993";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "287^993";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string numberA = "727^311";
    string numberB = "601^744";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "601^744";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string numberA = "298^458";
    string numberB = "944^847";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "944^847";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string numberA = "999^1000";
    string numberB = "1000^999";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "999^1000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string numberA = "3^100";
    string numberB = "2^150";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "3^100";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string numberA = "20^1";
    string numberB = "2^5";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "2^5";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string numberA = "2^56";
    string numberB = "18^99";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "18^99";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string numberA = "893^605";
    string numberB = "396^906";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "396^906";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string numberA = "999^1000";
    string numberB = "1000^999";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "999^1000";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string numberA = "3^100";
    string numberB = "2^150";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "3^100";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string numberA = "20^1";
    string numberB = "2^5";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "2^5";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string numberA = "2^56";
    string numberB = "18^99";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "18^99";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string numberA = "893^605";
    string numberB = "396^906";
    MassiveNumbers* pObj = new MassiveNumbers();
    clock_t start = clock();
    string result = pObj->getLargest(numberA, numberB);
    clock_t end = clock();
    delete pObj;
    string expected = "396^906";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=305695&rd=6535&pm=4448
********************************************************************************
#define MAXINT 1294967296 
#define MAXSIZE 16198653 
 
#include <iostream> 
#include <sstream> 
#include <fstream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <cmath> 
#include <cctype> 
#include <cstdio> 
#include <cstdlib> 
#include <iomanip> 
 
using namespace std; 
 
int toInt(char ch) { 
  return int(ch - '0'); 
} 
 
int toInt(const string &s) { 
  istringstream i(s); 
  int x; 
  i >> x; 
  return x; 
} 
 
vector <int> toInt(const vector <string> &v) { 
  int size = v.size(); 
  vector <int> sol(size); 
  for (int i = 0; i < size; i++) 
    sol[i] = toInt(v[i]); 
  return sol; 
} 
class StrTok { 
public: 
  StrTok(const string &s, const string &del = " ", int it = 0) {str = s; delim = del; iter = it;} 
  StrTok(const string &s, char del, int it = 0) {str = s; delim = del; iter = it;} 
  StrTok(const StrTok &st) {*this = st;} 
  string nextToken(); 
  bool hasMoreTokens() {return (iter < str.size());} 
  int numTokens(); 
  vector <string> separate(); 
  string &getStr() {return str;} 
  void setStr(const string &s) {str = s;} 
  string &getDelim() {return delim;} 
  void setDelim(const string &del) {delim = del;} 
  void setDelim(char del) {delim = del;} 
  int getIter() {return iter;} 
  void setIter(int it) {iter = it;} 
  StrTok &operator=(const StrTok &st) {str = st.str; delim = st.delim; iter = st.iter; return *this;} 
  bool operator==(const StrTok &st) {return (str == st.str && delim == st.delim && iter == st.iter);} 
  bool operator!=(const StrTok &st) {return (!(*this == st));} 
private: 
  string str; 
  int iter; 
  string delim; 
  bool isDelim(); 
}; 
 
string StrTok::nextToken() { 
  string tok; 
  while (iter < str.size() && !isDelim()) { 
    tok += str[iter]; 
    iter++; 
  } 
  iter += delim.size(); 
  return tok; 
} 
 
int StrTok::numTokens() { 
  int it = iter; 
  vector <string> toks = separate(); 
  iter = it; 
  return toks.size(); 
} 
 
vector <string> StrTok::separate() { 
  vector <string> toks; 
  while (hasMoreTokens()) 
    toks.push_back(nextToken()); 
  return toks; 
} 
 
bool StrTok::isDelim() { 
  for (int i = 0, it = iter; i < delim.size(); i++, it++) { 
    if (it >= str.size() || str[it] != delim[i]) 
      return false; 
  } 
  return true; 
} 
class MassiveNumbers 
{  
  public: 
  string getLargest(string a, string b) { 
        int c,d,e,f; 
        double g, h; 
        StrTok st1(a, '^'), st2(b, '^'); 
        c = toInt(st1.nextToken()); 
        d = toInt(st1.nextToken()); 
        e = toInt(st2.nextToken()); 
        f = toInt(st2.nextToken()); 
        g = d*log(double(c)); 
        h = f*log(double(e)); 
        if (g > h) return a; 
        return b; 
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/