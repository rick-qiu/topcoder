/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2919
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

class Untypeset {
public:
    int evaluate(vector<string> expression);
};

int Untypeset::evaluate(vector<string> expression) {
    int ret;
    return ret;
}


int test0() {
    vector<string> expression = {"2801"};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 2801;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> expression = {" 625 ", "------------", " 5 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> expression = {" ", "500 ", " ", " + ", " ", " ", " 1", " ", " "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> expression = {" 120 ", " ----- ", " 10 ", "---------", " 6 ", " --- ", " 2 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> expression = {" 24 ", " 31 + ---- ", " 12 + 16", "----------- ", " 5 + 6 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> expression = {"3 + 4 + 6"};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> expression = {" 1 4 9 ", "--- + --- + ---", " 1 2 3 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> expression = {"1"};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> expression = {"1 + 1"};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> expression = {" 1 ", "---", " 1 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> expression = {" 3 + 5 ", "-------", " 2 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> expression = {" 720 ", " ----- ", " 2 ", " ------- ", " 3 ", " --------- ", " 4 ", "-----------", " 5 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> expression = {" 120 ", "-----------", " 24 ", " -------- ", " 12 ", " ------ ", " 6 ", " --- ", " 2 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> expression = {" 100 750 + 750 + 750 + 750 ", " ----- + ----------------------- ", " 1 1 + 3 + 2 ", "--------------------------------------------------", " 500 + 499 + 1 ", " --------------- 140 ", " 49 + 48 + ------- 9 ", " ---- + 493 5 + 5 --- ", " 7 3 ", " ---------------------------------- + ----- + 21 ", " 1 + 2 + 3 + 4 + 5 + 6 + 7 6 ", " --------------------------- --- ", " 4999 + 1 + 4 2 ", " 1 + ---------- + 1 ", " 1000 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> expression = {"34 ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " + ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " 924"};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 958;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> expression = {" 1200 ", "--------------------------------------------------", " 6 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> expression = {" 52 ", " ---- ", " 2 ", " -------------- ", " 84 ", " -------- ", " 28 ", " ------ ", " 35 ", " ---- ", " 5 ", " ---------- ", " 18 ", " -------- ", " 60 ", " ------ ", " 80 ", " ---- ", " 8 ", " ------------ ", " 7 ", "----------------", " 40 ", " -------- ", " 36 ", " ---- ", " 3 ", " ------ ", " 3 ", " -------------- ", " 15 ", " ------------ ", " 54 ", " ----- ", " 6 ", " --- ", " 3 ", " ------- ", " 3 ", " ---------- ", " 102 ", " ------ ", " 12 ", " ---- ", " 6 ", " -------- ", " 34 ", " ---- ", " 2 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> expression = {" 20 ", " ---- ", " 2 ", "------", " 10 ", " ---- ", " 2 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> expression = {" 24 ", " 31 + ---- ", " 12 + 16", "----------- ", " 5 + 6 "};
    Untypeset* pObj = new Untypeset();
    clock_t start = clock();
    int result = pObj->evaluate(expression);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=9978873&rd=5852&pm=2919
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) istringstream(s)>>d
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    {int t;s2d(*i,t);ret.push_back(t);}
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
};
 
 
class Untypeset{
public:
  int val(vector<string> s) {    
    int co = -1;
    for (int i = 0; i < s[0].size(); ++i) {
      bool fi = false;      
      for (int j = 0; j < s.size(); ++j) {
        if (s[j][i] == '+' && !fi) {
          fi = true;
        }else if (s[j][i] != ' ') {
          fi = false;
          break;
        }        
      }
      if (fi){
        co = i;
        break;
      }      
    }
      if (co != -1) {
        vector<string> s1(s.size(), "");
        vector<string> s2(s.size(), "");
        for(int i = 0; i < s.size(); ++i)
          for(int j = 0; j < co; ++j)
            s1[i] += s[i][j];
        for(int i = 0; i < s.size(); ++i)
          for(int j = co+1; j < s[0].length(); ++j)
            s2[i] += s[i][j];
          return val(s1) + val(s2);
      }else {
        int maxl = -1;
        int ro;
        for (int i = 0; i < s.size(); ++i){
          int j = 0;
          while (s[i][j] != '-' && j < s[0].size())
            j++;          
          int cnt = 0;
          for (; j < s[0].size() && s[i][j] == '-'; ++j)
            ++cnt;
          if (cnt > maxl) {
            maxl = cnt;
            ro = i;
          }
        }
 
        if (maxl > 0) {
          vector<string> s1;
          vector<string> s2;
          for (int i = 0; i < ro; ++i)
            s1.push_back(s[i]);
          for (int i = ro+1; i < s.size(); ++i)
            s2.push_back(s[i]);
          return val(s1) / val(s2);
        }else{
          for (int i = 0; i < s.size(); ++i){
            int ret = 0;  
            for (int j = 0; j < s[0].size(); ++j)
              if (s[i][j] >= '0' && s[i][j] <= '9'){
                ret *= 10;
                ret += (int)(s[i][j] - 48);
              }
            if (ret != 0)
              return ret;
          }
            
        }
      }    
  }
  int evaluate(vector<string> expression){
    return val(expression);
  }
};
 
 
 
 
#ifdef WIN32
void test0(){
  string _expression[]={ "2801" };
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 2801;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 0--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test1(){
  string _expression[]={ "  625       ",  "------------",  "        5   " };
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 125;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 1--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test2(){
  string _expression[]={ "       ",  "500    ",  "       ",  "    +  ",  "       ",  "       ",  "      1",  "       ",  "       " };
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 501;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 2--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test3(){
  string _expression[]={ "   120   ",  "  -----  ",  "    10   ",  "---------",  "    6    ",  "   ---   ",  "    2    " };
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 4;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 3--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test4(){
  string _expression[]={ "       24       ",  " 31 + ----      ",  "       12   + 16",  "-----------     ",  "   5 + 6        " };
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 19;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 4--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test5(){
  string _expression[]={"3 + 4 + 6"};
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 13;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 5--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test6(){
  string _expression[]={ " 1     4     9 ",  "--- + --- + ---",  " 1     2     3 " };
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 6;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 6--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test7(){
  string _expression[]={ "34      ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "   +    ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "        ",  "     924" };
  vector<string> expression(_expression+0,_expression+sizeof(_expression)/sizeof(string));
  int evaluate= 958;
  Untypeset _Untypeset;
  int ret=_Untypeset.evaluate(expression);
  cout<<"--------------------test 7--------------------"<<endl;
  cout<<"expression = "<<expression<<endl;
  cout<<"expected to return "<<evaluate<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==evaluate)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
int main(){
  test0();
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  return 0;
}
#endif

********************************************************************************
*******************************************************************************/