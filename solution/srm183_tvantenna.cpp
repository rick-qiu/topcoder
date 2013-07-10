/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2357
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

class TVAntenna {
public:
    double minRadius(vector<int> x, vector<int> y);
};

double TVAntenna::minRadius(vector<int> x, vector<int> y) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {2, 0, 0, 1};
    vector<int> y = {0, 1, -1, 1};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {3};
    vector<int> y = {99};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200};
    vector<int> y = {200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {200, -200, 4, 8, 23, -129};
    vector<int> y = {-200, 200, 138, -123, 2, 4};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 282.842712474619;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {-199, -199, -199, -199};
    vector<int> y = {-50, -100, -70, -69};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 34.655446902326915;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {-89, -89, -89};
    vector<int> y = {-89, -90, -91};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {0, 1};
    vector<int> y = {0, 1};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {5, 9, 2, -4};
    vector<int> y = {3, 33, 21, -5};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20.248456731316587;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {12, 13, 14, 15, 16, 17, 18};
    vector<int> y = {200, -200, 200, -200, 200, -200, 200};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 200.02249873451737;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {23, 65, 91, 12, 14, 39};
    vector<int> y = {43, 44, 29, 35, 36, 33};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {23, 65, 91, 12, 14, 39};
    vector<int> y = {23, 65, 91, 12, 14, 39};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 55.86591089385369;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {23, 65, 91, 12, 14, 39};
    vector<int> y = {39, 23, 65, 91, 12, 14};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 49.8196748283246;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {5, 9, 2, -4};
    vector<int> y = {-4, 5, 9, 2};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {0, 33};
    vector<int> y = {0, 44};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 27.65863337187866;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-200};
    vector<int> y = {-200};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-200, 200};
    vector<int> y = {-200, 200};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 282.842712474619;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {2, 0, 0, 1, 50};
    vector<int> y = {0, 1, -1, 1, 50};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 36.069377593742864;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {200};
    vector<int> y = {200};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {0, 1, 2, 13};
    vector<int> y = {0, 0, 0, 0};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {0, 7, 7};
    vector<int> y = {6, 0, 11};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.082762530298219;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {24, -33, -5, -47, 20, -35, -17, -19, -19, 18, -28, -29, 28, 16, 29, 6, 19, -34, -44, 10, 14, -31, -21, -17, -33, -3, 18, -25, 5, 4, 4, -49, 21, -31, -45, -36, 17, 20, 27, -32, -39, 1, 22, -41, 20, -27, 15, -39, -11, -27};
    vector<int> y = {-15, -17, 27, -31, -36, -35, -12, 22, -13, 3, 18, -24, -33, -50, -50, 23, -6, -28, 2, -19, -6, -41, -31, 9, 15, -27, 10, -49, -13, -12, -29, -26, 21, 1, 26, -45, 16, -16, -20, 5, -11, -32, -17, -42, -32, -17, -17, 12, -43, -45};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 53.03772242470448;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {0, 100, 101};
    vector<int> y = {0, 0, 0};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 51.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-100, 0, 100};
    vector<int> y = {0, 100, 0};
    TVAntenna* pObj = new TVAntenna();
    clock_t start = clock();
    double result = pObj->minRadius(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7392939&rd=4735&pm=2357
********************************************************************************
#line 2 "TVAntenna.cpp" 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <cstdio> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <map> 
#include <set> 
#include <cmath> 
using namespace std;  
 
#ifdef __GNUC__ 
typedef long long LL;  
typedef signed long long i64;  typedef unsigned long long u64;  
//#define int64 long long 
#else /* MSVC, say */ 
typedef __int64 i64; 
#endif 
 
 
#define abs(a) ((a)>0?(a):(-a)) 
#define max(a,b) ((a)>(b)?(a):(b)) 
#define min(a,b) ((a)<(b)?(a):(b)) 
 
#define REP(i,c) for(  i=0;i<(int) (c).size();++i)  
#define REP2(i,j,c) for(  i=0;i<(int)(c).size();++i)  for(j=0;j<(c)[i].size();++j) 
#define FOR(i,a,b) for(  i=(a);i<=(b);++i)  
#define FORD(i,a,b) for(  i=(a);i>=(b);--i)  
#define FOREACH(i,c,type) for(type::iterator i=(c).begin();i!=(c).end();++i)  
 
//#define FOREACH(i,c) for(typeof((c).begin()) i=(c).begin();i!=(c).end();++i)  
string toupper ( string s) {for (int i1=0; i1<=(int) s.length(); ++i1) s[i1]=toupper(s[i1]); return s; } 
int gcd(int a, int b) {return b==0?a:gcd(b,a % b);} 
const int INF = 1000000000;  
template<class T> inline int size(const T&c) { return c.size(); }  
template<class T>  
string str( T x) {ostringstream oss;oss << x;return oss.str();} 
template<typename T1>  
void prn(T1 const& coll) {typename T1::const_iterator pos;typename T1::const_iterator end(coll.end());cout<<"{"; 
  for(pos=coll.begin();pos!=end;++pos) cout<<*pos<<","; cout<<"}"<<endl;} 
template<typename T1>  
void prnd(T1 const& coll) {typename T1::const_iterator pos;typename T1::const_iterator end(coll.end()); 
  for(pos=coll.begin();pos!=end;++pos) print(*pos);} 
char buf[1000];  
string i2s(int x) { sprintf(buf,"%d",x);  return buf; }  
int str2int(string &i){ int s;sscanf(i.c_str(),"%d", &s); return s;}  
vector<string> tokenize(string s, string ch) { vector<string> ret;  
   for(int p=0,p2;p<s.size(); p=p2+1) {p2=s.find_first_of(ch, p); if(p2==-1) p2=s.size();if(p2-p > 0 ) ret.push_back(s.substr(p,p2-p));}    return ret;}  
 
typedef vector<int> VI;  typedef vector<vector<int> > VVI;  
typedef vector<string> VS;  typedef vector<vector<string> > VVS;  
typedef set<int> SI;  typedef set<string> SS;  
typedef map<string,int> MSI;  typedef map<string,string> MSS;  
typedef pair<int,int> PII; typedef pair<string,int> PSI; typedef pair<string,string> PSS;  typedef pair<int,string> PIS; 
typedef istringstream ISS; 
 
#define BE(a) (a).begin(),(a).end() 
#define UNION(a,b,c,type)  set_union(BE(a),BE(b),insert_iterator<type >((c),(c).begin())) 
#define INTERSECT(a,b,c,type) set_intersection(BE(a),BE(b),insert_iterator<type  >((c),(c).begin())) 
#define DIFFER(a,b,c,type) set_difference(BE(a),BE(b),insert_iterator<type  >((c),(c).begin())) 
#define LESS(type,function) bool function(const type &a,const type &b) 
 
int doit(int x1,int x2,int y1,int y2){ 
  return (x1-x2)*(x1-x2)+(y1-y2)* (y1-y2); 
} 
class TVAntenna { 
  public: 
  double minRadius(vector <int> x, vector <int> y) { 
  int i,j,k; 
  int cur=INF,cur1=0; 
  FOR(i,-200,200) FOR(j,-200,200) 
    { 
      cur1=0; 
      REP(k,x){        cur1=max(cur1,doit(i,x[k],j,y[k])); 
        } 
      cur=min(cur1,cur); 
    } 
  double ret=sqrt((double) cur); 
  return ret; 
 
  } 
   
  
}; 
 
 
     
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/