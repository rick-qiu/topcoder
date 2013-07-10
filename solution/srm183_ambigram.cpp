/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2277
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

class Ambigram {
public:
    string ambiword(string word);
};

string Ambigram::ambiword(string word) {
    string ret;
    return ret;
}


int test0() {
    string word = "BXC";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string word = "XIXHZMOAOSHXIX";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "XIXHMOOWHXIX";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string word = "C";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string word = "AMWZ";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "MW";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string word = "ABCDEFGHIJKLMNOP";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HHHHIIIIHHHH";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string word = "MIW";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "MIW";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string word = "MWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMW";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "MWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMW";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string word = "MWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWM";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWN";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string word = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string word = "DDDDDDDDDD";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HHHHHHHHHH";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string word = "FDKLKJSDKJSAKJDASDLKDLKHALKASKL";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HHINHIWHIISIISIIHMIHNIHH";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string word = "GLSMSMWMSIDHSFLLSMDMMWMWLSFKDFH";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HISNWNWNSIHHSHHISNMNMNSIH";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string word = "HEREISASTRINGOFMODESTLENGTH";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HHNHISSONHNHNHNOSSIHNHH";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string word = "WHOKNOWSWHATTHISMIGHTBE";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HMHHIWSWHSSHMSMIHHWH";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string word = "LLLLLSTUVW";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMWWWWW";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string word = "ZZZZZZZZZZZZ";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string word = "ZZYZZZZZZZZZZ";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string word = "Y";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string word = "ZZZZZZYZZZZZZ";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZXZZZZZZ";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string word = "DDDDDDDDDDD";
    Ambigram* pObj = new Ambigram();
    clock_t start = clock();
    string result = pObj->ambiword(word);
    clock_t end = clock();
    delete pObj;
    string expected = "HHHHHHHHHHH";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=113178&rd=4735&pm=2277
********************************************************************************
#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<unsigned> VU;
typedef long long LL;
typedef unsigned UI;
typedef unsigned long long UL;
#define FU(var, lo, hi)  for (unsigned var = (lo); var < (hi); ++var)
#define FI(var, lo, hi)  for (int var = (lo); var < (hi); ++var)
int mdays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int primes100[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53,
       59, 61, 67, 71, 73, 79, 83, 89, 97};
long long pow2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096,
        8192, 16384, 32768, 65536};
vector<string> split(string food, string separators=" \t") {
  bool active = false;  int begin = -1;  vector<string> ret;
  for (size_t i = 0; i < food.size(); ++i)
    if (active) {
      if (strchr(separators.c_str(), food[i]) != NULL)
  { ret.push_back(food.substr(begin, i-begin));  active = false; }
    }
    else if (strchr(separators.c_str(), food[i]) == NULL)
      { begin = i;  active = true; }
  if (active)  ret.push_back(food.substr(begin));
  return ret;
}
string toString(int d) { char ret[30];  sprintf(ret, "%d", d);  return ret; }
int toInt(string str) { int ret;  sscanf(str.c_str(), "%d", &ret);  return ret; }
long double toLD(string str) { long double ret;  sscanf(str.c_str(), "%Lf", &ret);  return ret; }
bool strin(string s, char c) { return s.find(c) != s.npos; }
string substr(string s, size_t n) { return (n >= s.size())?"":s.substr(n); }
 
 
class Rec {
public:
  string s;
  bool nonzero;
  bool operator<(const class Rec &b) const {
    if (s < b.s) return true;
    if (s > b.s) return false;
    return nonzero < b.nonzero;
  }
};
 
class Data {
public:
  int cost;
  string ans;
 
  bool operator<(const class Data &b) const {
    if (cost < b.cost)  return true;
    if (cost > b.cost)  return false;
    if (ans.size() > b.ans.size())  return true;
    if (ans.size() < b.ans.size())  return false;
    return ans < b.ans;
  }
};
 
 
class Ambigram {
public:
  map<Rec, Data> memo;
  string m1, m2;
  string unchg;
 
  int kill(char c) {
    return min(c - 'A' + 1, 'Z' - c + 1);
  }
  
 
  Data solve(string in, bool nonzero) {
    Rec rin;
    rin.s = in;  rin.nonzero = nonzero;
    if (memo.count(rin) > 0)
      return memo[rin];
 
    Data result, comp;
 
    if (in.size() == 0) {
      result.cost = nonzero?1000000000:0;
      result.ans = in;
      memo[rin] = result;
      return result;
    }
    if (in.size() == 1) {
      int lowcost = 100000;
      int idx = -1;
      string a;
      FU (k, 0, unchg.size()) {
  int now = abs(in[0] - unchg[k]);
  if (now < lowcost) {
    lowcost = now;
    idx = k;
    a = unchg[idx];
  }
      }
      if (!nonzero) {
  if (kill(in[0]) < lowcost) {
    lowcost = kill(in[0]);
    a = "";
  }
      }
      result.cost = lowcost;
      result.ans = a;
      memo[rin] = result;
      return result;
    }
 
    char f = in[0];
    char l = in[in.size()-1];
    
    // find cost of removing front
    Data dt = solve(in.substr(1), true);
    result.cost = kill(f) + dt.cost;
    result.ans = dt.ans;
    // find cost of removing end
    dt = solve(in.substr(0, in.size()-1), true);
    dt.cost += kill(l);
    if (dt < result)
      result = dt;
    // find cost of removing both f/e
    
    // find cost of matching f/l
    dt = solve(in.substr(1, in.size()-2), false);
    int lowest = 1000;
    int idx = -1;
    // make equal
    FU (k, 0, m1.size()) {
      int now = abs(f - m1[k]) + abs(l - m2[k]);
      if (now < lowest) {
  idx = k;
  lowest = now;
      }
    }
    dt.cost += lowest;
    dt.ans = m1[idx] + dt.ans + m2[idx];
    if (dt < result)
      result = dt;
 
    memo[rin] = result;
    return result;
  }
  
  string ambiword(string word) {
    // start here
    m1 = "HIMNOSWXZ";
    m2 = "HIWNOSMXZ";
    unchg = "HINOSXZ";
    return solve(word, true).ans;
  }
};
 
 
// #include "cppio.h"
// #include <sys/time.h>
// #include <unistd.h>
 
// int main(void) {
//   struct timeval tv1, tv2;
//   struct timezone tz;
//   CppInput i("Ambigram.in", "ss");
  
//   while (i.read()) {
//     cout << "CPPIO: inputs:" << endl;
//     cout << "       " + o.print(i.strings[0]) << endl;
//     cout << "CPPIO: complete." << endl;
//     Ambigram x;
//     gettimeofday(&tv1, &tz);
//     string ret = x.ambiword(i.strings[0]);
//     gettimeofday(&tv2, &tz);
    
//     cout << "ans: " << o.print(i.strings[1]) << endl;
//     cout << "ret: " << o.print(ret) << endl;
//     cout << "execution time: " << tv2.tv_sec - tv1.tv_sec + 1e-6*(tv2.tv_usec - tv1.tv_usec) << " sec." << endl;
    
//     if (i.gotOutputCheck)
//       if (i.strings[1] == ret)
//         cout << "answer checks OK!" << endl;
//       else {
//         cout << "answer INCORRECT INCORRECT INCORRECT INCORRECT INCORRECT INCORRECT INCORRECT!" << endl;
//        for (int k = 0; k < 5; ++k)  { cout << '\a';  cout.flush();  usleep(200000); }
//       }
//     cout << "=================================================" << endl;
//   }
//   return 0;
// }
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/