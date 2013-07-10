/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2336
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

class BridgeSort {
public:
    string sortedHand(string hand);
};

string BridgeSort::sortedHand(string hand) {
    string ret;
    return ret;
}


int test0() {
    string hand = "HAH2H3C4D5ST";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C4D5H2H3HAST";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string hand = "H3SAHA";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "H3HASA";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string hand = "C2";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C2";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string hand = "C2C3C4C5C6C7C8C9CTCJCQCKCA";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C2C3C4C5C6C7C8C9CTCJCQCKCA";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string hand = "HASADACA";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "CADAHASA";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string hand = "SAS2S3S4S5S6S7S8S9STSJSQSK";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "S2S3S4S5S6S7S8S9STSJSQSKSA";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string hand = "DAS2S3S4S5S6S7S8S9STSJSQSK";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "DAS2S3S4S5S6S7S8S9STSJSQSK";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string hand = "SAS2S3S4S5S6S7S8S9SKSJSQST";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "S2S3S4S5S6S7S8S9STSJSQSKSA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string hand = "SAD2S3S4C5S6S7S8H9STSJHQCK";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C5CKD2H9HQS3S4S6S7S8STSJSA";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string hand = "C2";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C2";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string hand = "HJCJSJDJD8";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "CJD8DJHJSJ";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string hand = "HJCJSJDJD8CTC8CQ";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C8CTCJCQD8DJHJSJ";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string hand = "HJCJSJDJD8C8S8H8";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C8CJD8DJH8HJS8SJ";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string hand = "HJCJSJDJD8C4C3C2";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C2C3C4CJD8DJHJSJ";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string hand = "SASKSQSJSTS9S8S7S6S5S4C3S2";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C3S2S4S5S6S7S8S9STSJSQSKSA";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string hand = "HAH2H3C4D5ST";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C4D5H2H3HAST";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string hand = "HAH9HTHJC4D5ST";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C4D5H9HTHJHAST";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string hand = "HAH3HTC3CTD2D6DTS3STS7";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C3CTD2D6DTH3HTHAS3S7ST";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string hand = "HQHK";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "HQHK";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string hand = "HKHQC2DKC7CQDQ";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C2C7CQDQDKHQHK";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string hand = "C9CTCJ";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C9CTCJ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string hand = "DTD9";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "D9DT";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string hand = "DTDA";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "DTDA";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string hand = "HTH9H8H7C3S6S9DASAHACA";
    BridgeSort* pObj = new BridgeSort();
    clock_t start = clock();
    string result = pObj->sortedHand(hand);
    clock_t end = clock();
    delete pObj;
    string expected = "C3CADAH7H8H9HTHAS6S9SA";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7392939&rd=4735&pm=2336
********************************************************************************
#line 2 "BridgeSort.cpp" 
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
 
LESS(string,lh){ 
  string s1="CDHS"; 
  string s2="23456789TJQKA"; 
  int x1,x2,y1,y2; 
  x1=s1.find_first_of(a[0]); 
  x2=s1.find_first_of(b[0]); 
  if (x1!=x2) return x1<x2; 
 
  y1=s2.find_first_of(a[1]); 
  y2=s2.find_first_of(b[1]); 
  return y1<y2; 
} 
class BridgeSort { 
  public: 
  string sortedHand(string a) { 
  int i,j,k; 
  int n=a.length()/2; 
  VS vs; 
  FOR(i,1,n){ 
    vs.push_back(a.substr(0,2)); 
    a=a.substr(2); 
  } 
  sort(BE(vs),lh); 
  string ret=""; 
  REP(i,vs)ret+=vs[i]; 
  return ret; 
 
  } 
   
  
}; 
 
 
     
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/