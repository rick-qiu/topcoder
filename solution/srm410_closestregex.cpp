/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9727
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

class ClosestRegex {
public:
    string closestString(string text, string regex);
};

string ClosestRegex::closestString(string text, string regex) {
    string ret;
    return ret;
}


int test0() {
    string text = "abcd";
    string regex = "bcdd";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "bcdd";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "topcoder";
    string regex = "t*px*coa*de*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "ttpcodee";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "cmu";
    string regex = "c*m*fm*u*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "cfu";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "aaaaacccc";
    string regex = "a*abc*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaabccc";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "short";
    string regex = "lo*ts*of*let*ter*s";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "abc";
    string regex = "def";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "def";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "abc";
    string regex = "ab";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "abc";
    string regex = "ab*cd";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "acd";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "cbc";
    string regex = "a*b*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "abb";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "acde";
    string regex = "a*bcde*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "bcde";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "z";
    string regex = "a*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "a";
    string regex = "z*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "p";
    string regex = "p*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "p";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "x";
    string regex = "x";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "x";
    string regex = "y";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "ababababababababababababababababababababababababab";
    string regex = "a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaabababababababababababab";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string regex = "a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*b*a*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "ababababababababababababababababababababababababab";
    string regex = "a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*a*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "bcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxa";
    string regex = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "cb";
    string regex = "c*ca*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "ca";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "qq";
    string regex = "o*ot*a*a*p*a*n*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "oa";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "bbbcaabcbc";
    string regex = "c*cba*a";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "cbaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "cbdaaeed";
    string regex = "e*e*ec*ee*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "ecccceee";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "deeia";
    string regex = "g*gf*ha*f*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "gffha";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "bdadddca";
    string regex = "b*bc*a*d*adc*c";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "baadadcc";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "ggooglegooglegooglegoogleoogle";
    string regex = "o*df*l*o*df*l*p*o*df*l*o*df*l*podfl*p*p*p";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "oooodllloodllloodllloodlpodflp";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "adadfbbasdfasdbfadfasdfqadfadfbadsfbadfadfd";
    string regex = "a*b*c*d*e*f*g*h*i*j*k*l*m*n*o*p*r*s*t*u*v*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaabbbbdddddddddddddddddddddddddddddddddd";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "shortestotnakraj";
    string regex = "lo*ts*of*let*ter*s*ealsr*asra*a*";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "ltoleteealsasraa";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "abfjdsjdhfsjfksdkjfywekjdssgkjkjjksjk";
    string regex = "j*h*f*z*d*g*d*d*d*s*f*fsg*f*fg*s*s*d*a*z*a*h*z*t*e";
    ClosestRegex* pObj = new ClosestRegex();
    clock_t start = clock();
    string result = pObj->closestString(text, regex);
    clock_t end = clock();
    delete pObj;
    string expected = "jjjjjjjhhfsfffsffffffffffssssssssssae";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22741711&rd=12182&pm=9727
********************************************************************************
#include <vector>
#include <string>
#include <iostream>
using namespace std;
 
bool operator<(const pair<int, string>&a, const pair<int, string>&b){
  return a.first<b.first || (a.first==b.first && a.second<b.second);
}
 
class ClosestRegex{
  public:
  string closestString(string t, string reg){
    string r;
    for(int i=0; i<reg.size(); ++i)
      if(i==reg.size()-1 || reg[i+1]!='*') r+=reg[i];
      else{ r+=reg[i]+'A'-'a'; ++i; }
    vector<vector<pair<int, string> > > d(r.size()+1, vector<pair<int, string> >(t.size()+1));  
 
    for(int j=1; j<=t.size(); ++j) d[0][j].first=-1;
    d[0][0].first=0;
    d[0][0].second="";
    for(int i=1; i<=r.size(); ++i) d[i][0].first=-1;
    for(int i=1; i<=r.size(); ++i){
      if(r[i-1]>='a') break;
      d[i][0].first=0;
      d[i][0].second="";
    }
    
    for(int j=1; j<=t.size(); ++j){
      for(int i=1; i<=r.size(); ++i){
        d[i][j].first=987;
        pair<int, string> tmp;
        
        if(r[i-1]<'a' && d[i-1][j].first!=-1) d[i][j]=d[i-1][j];
        if(t[j-1]==r[i-1] && d[i-1][j-1].first!=-1){
          tmp=d[i-1][j-1];
          tmp.second+=t[j-1];
          d[i][j]=min(d[i][j], tmp);
        }
        if(t[j-1]==(r[i-1]-'A'+'a') && d[i][j-1].first!=-1){
          tmp=d[i][j-1];
          tmp.second+=t[j-1];
          d[i][j]=min(d[i][j], tmp);
        }
        if(r[i-1]<'a' && d[i][j-1].first!=-1){
          tmp=d[i][j-1];
          ++tmp.first;
          tmp.second+=r[i-1]-'A'+'a';
          d[i][j]=min(d[i][j], tmp);
        }
        if(r[i-1]>='a' && d[i-1][j-1].first!=-1){
          tmp=d[i-1][j-1];
          ++tmp.first;
          tmp.second+=r[i-1];
          d[i][j]=min(d[i][j], tmp);
        }
        
        if(d[i][j].first==987) d[i][j].first=-1;
//        if(d[i][j].first==-1) cout << '_'; else cout << d[i][j].first;
      }
//      cout << endl;
    }
    if(d[r.size()][t.size()].first==-1) return "";
    return d[r.size()][t.size()].second;
  }
};

********************************************************************************
*******************************************************************************/