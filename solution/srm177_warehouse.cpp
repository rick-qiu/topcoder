/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1140
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

class Warehouse {
public:
    int feetWide(vector<int> x, vector<int> y);
};

int Warehouse::feetWide(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0};
    vector<int> y = {200};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {100, 100, 120};
    vector<int> y = {60, 140, 180};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {100, 120};
    vector<int> y = {60, 140};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {40, 80, 120};
    vector<int> y = {80, 40, 160};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 0, 100};
    vector<int> y = {50, 100, 150};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {100, 0};
    vector<int> y = {100, 2};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 200, 200, 199, 100};
    vector<int> y = {195, 100, 50, 195, 173};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {170, 170, 171};
    vector<int> y = {150, 100, 50};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {170, 170, 140};
    vector<int> y = {150, 100, 50};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {170, 170, 200};
    vector<int> y = {150, 100, 50};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> y = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> y = {70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70, 70};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {0, 21, 0, 0, 0, 0, 0};
    vector<int> y = {49, 21, 170, 140, 110, 80, 60};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {0, 22, 0, 0, 0, 0, 0};
    vector<int> y = {49, 21, 170, 140, 110, 80, 60};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {0, 21, 0, 0, 0, 0, 0};
    vector<int> y = {59, 31, 170, 140, 110, 80, 60};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {0, 21, 0, 0, 0, 0, 0, 200, 200, 200};
    vector<int> y = {49, 21, 170, 140, 110, 80, 60, 170, 140, 110};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {175, 60, 27, 50, 65, 87, 194, 5, 173, 93, 152, 103, 60, 132, 27, 60, 140, 171, 177, 161, 99, 97, 73, 177, 200, 6, 58, 173, 190, 111, 119, 104, 31, 164, 107, 43, 62, 3, 170, 183, 104, 45, 12, 70, 150, 67, 43, 68, 69, 39};
    vector<int> y = {176, 156, 114, 47, 96, 85, 184, 52, 196, 4, 41, 150, 108, 186, 184, 90, 172, 43, 79, 160, 187, 31, 1, 31, 114, 89, 195, 56, 192, 150, 110, 18, 168, 8, 129, 167, 115, 169, 112, 78, 103, 120, 97, 18, 86, 102, 146, 174, 107, 118};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {0, 200};
    vector<int> y = {5, 195};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {0, 50, 50};
    vector<int> y = {190, 191, 5};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 185;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {100, 100, 160};
    vector<int> y = {40, 160, 140};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {10, 20, 30, 40, 50, 60, 70, 130, 140, 150, 160, 170, 180, 190};
    vector<int> y = {10, 20, 30, 40, 50, 60, 70, 130, 140, 150, 160, 170, 180, 190};
    Warehouse* pObj = new Warehouse();
    clock_t start = clock();
    int result = pObj->feetWide(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=286907&rd=4690&pm=1140
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
#define s2d(s,d) {istringstream(s)>>d;}
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
 
//remove routine
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
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
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
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
  int get(const string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
  vector<int> get(const vector<string>& strs){
    vector<int> ret;
    ret.reserve(strs.size()+2);
    for(int i=0;i<strs.size();i++)
      ret.push_back(get(strs[i]));
    return ret;
  }
  vector<string> get(const vector<int>& is){
    vector<string> ret;
    ret.reserve(is.size()+2);
    for(int i=0;i<is.size();i++)
      ret.push_back(get(is[i]));
    return ret;
  }
};
 
struct point {
  double x, y;
  point() {}
  point(double x, double y) : x(x), y(y) {}
  point operator-(point p) {
    return point(x - p.x, y - p.y);
  }
  double operator*(point p) {
    return x * p.y - y * p.x;
  }
  double dist(point p) {
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
  }
};
 
class Warehouse{
public:
  int n;
  vector<int> xx, yy;
  double len(point a, point b, point c) {
    return ((c - a) * (c - b)) / a.dist(b);
  }
  int calc(point a, point b) {
    vector<double> ret;
    for (int i = 0; i < n; ++i) {
      ret.push_back(len(a, b, point(xx[i], yy[i])));
    }
    sort(ret.begin(), ret.end());
    double m1 = len(a, b, point(0, 0));
    double m2 = len(a, b, point(200, 0));
    double m3 = len(a, b, point(0, 200));
    double m4 = len(a, b, point(200, 200));
    double lower, upper;
    if (max(m1, m2) > max(m3, m4)) {
      upper = min(m1, m2);
      lower = max(m3, m4);
    } else {
      upper = min(m3, m4);
      lower = max(m1, m2);
    }
    int tt = 0;
    for (int i = 0; i < n - 1; ++i) {
      double from = ret[i], to = ret[i + 1];
      if (from < lower - 1e-8) continue;
      if (to > upper + 1e-8) continue;
      int t = (int) floor(to - from - 1e-8);
      if (t > tt) tt = t;
    }
    return tt;
  }
  int feetWide(vector<int> x,vector<int> y){
    x.push_back(0), y.push_back(0);
    x.push_back(0), y.push_back(200);
    x.push_back(200), y.push_back(0);
    x.push_back(200), y.push_back(200);
    n = x.size();
    xx = x, yy = y;
    int ret = 0;
    for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) if (x[i] != x[j]) {
      int t = calc(point(x[i], y[i]), point(x[j], y[j]));
      if (t > ret) ret = t;
    }
    for (int i = 0; i < n; ++i) for (int j = i + 1; j < n; ++j) if (y[i] != y[j]) {
      point a(x[i], y[i]);
      point b(x[j], y[j]);
      point c = a;
      c.x += b.y - a.y;
      c.y += a.x - b.x;
      int t = calc(a, c);
      if (t > ret) ret = t;
    }
    return ret;
  }
};

********************************************************************************
*******************************************************************************/