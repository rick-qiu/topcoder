/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6603
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

class UnrepeatableWords {
public:
    string getWord(int k, int n, int allowed);
};

string UnrepeatableWords::getWord(int k, int n, int allowed) {
    string ret;
    return ret;
}


int test0() {
    int k = 3;
    int n = 5;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAA";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int k = 3;
    int n = 5;
    int allowed = 1;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int k = 3;
    int n = 10;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAABABAA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 3;
    int n = 50;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAABABAABAABBAABAABABAABAABBAABAABABAABABBAABAAB";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int k = 4;
    int n = 50;
    int allowed = 3;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABAAABAAABAAACAAABAAABAAABAAACAAABAAABAAABAAACAA";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int k = 4;
    int n = 50;
    int allowed = 26;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABAAABAAABAAACAAABAAABAAABAAACAAABAAABAAABAAACAA";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 2;
    int n = 1;
    int allowed = 1;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int k = 2;
    int n = 1;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 10;
    int n = 40;
    int allowed = 26;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAABAAAAAAAAABAAAAAAAAABAAAAAAAAAB";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 10;
    int n = 40;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAABAAAAAAAAABAAAAAAAAABAAAAAAAAAB";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 10;
    int n = 40;
    int allowed = 3;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAABAAAAAAAAABAAAAAAAAABAAAAAAAAAB";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 3;
    int n = 49;
    int allowed = 26;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAABAACAABAABAACAABAABAADAABAABAACAABAABAACAABA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 10;
    int n = 1;
    int allowed = 26;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 7;
    int n = 48;
    int allowed = 26;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAA";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 7;
    int n = 49;
    int allowed = 1;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 7;
    int n = 50;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAABAA";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 7;
    int n = 50;
    int allowed = 3;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAACA";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 7;
    int n = 49;
    int allowed = 5;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAAC";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int k = 7;
    int n = 49;
    int allowed = 6;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAABAAAAAAC";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 3;
    int n = 2;
    int allowed = 1;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 8;
    int n = 49;
    int allowed = 26;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABA";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 8;
    int n = 49;
    int allowed = 13;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABA";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 8;
    int n = 50;
    int allowed = 8;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABAA";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 2;
    int n = 10;
    int allowed = 10;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACABADAB";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 2;
    int n = 3;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "ABA";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 2;
    int n = 4;
    int allowed = 2;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 2;
    int n = 50;
    int allowed = 9;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACABADABACABAEABACABADABACABAFABACABADABACABAEAB";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 8;
    int n = 50;
    int allowed = 7;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABAAAAAAABAA";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int k = 3;
    int n = 50;
    int allowed = 20;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAABAACAABAABAACAABAABAADAABAABAACAABAABAACAABAA";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int k = 5;
    int n = 40;
    int allowed = 20;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABAAAABAAAABAAAABAAAACAAAABAAAABAAAAB";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int k = 10;
    int n = 50;
    int allowed = 26;
    UnrepeatableWords* pObj = new UnrepeatableWords();
    clock_t start = clock();
    string result = pObj->getWord(k, n, allowed);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAABAAAAAAAAABAAAAAAAAABAAAAAAAAABAAAAAAAAAB";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653739&rd=10003&pm=6603
********************************************************************************
#include <cstdio> 
#include <string> 
 
using namespace std; 
 
string answer; 
int a[50]; 
int k, n, allowed; 
 
class UnrepeatableWords { 
public: 
  bool check(int size) { 
    for (int i = 1; i <= (size + 1) / k; i++) { 
      bool sw = false; 
      for (int j = size - i; j > size - i * k; j--) { 
        if (a[j] != a[j + i]) { 
          sw = true; 
          break; 
        } 
      } 
      if (sw == false) return true; 
    } 
    return false; 
  } 
   
  void backtr(int m) { 
    if (answer.size() > 0) return; 
    if (m == n) { 
      char c; 
      for (int i = 0; i < m; i++) { 
        c = 'A' + a[i]; 
        answer = answer + c; 
      } 
      return; 
    } 
    for (int i = 0; i < allowed; i++) { 
      a[m] = i; 
      if (check(m)) continue; 
      backtr(m + 1); 
    }     
  } 
   
  string getWord(int I1, int I2, int I3) { 
    k = I1, n = I2, allowed = I3; 
    answer = ""; 
    backtr(0); 
    return answer; 
  } 
};

********************************************************************************
*******************************************************************************/