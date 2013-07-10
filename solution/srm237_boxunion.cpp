/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4463
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

class BoxUnion {
public:
    int area(vector<string> rectangles);
};

int BoxUnion::area(vector<string> rectangles) {
    int ret;
    return ret;
}


int test0() {
    vector<string> rectangles = {"200 300 203 304"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rectangles = {"0 0 10 10", "20 20 30 30"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rectangles = {"0 500 20000 501", "500 0 501 20000"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 39999;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rectangles = {"4 6 18 24", "7 2 12 19", "0 0 100 100"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rectangles = {"1 3 5 6", "3 1 7 5", "4 4 9 7"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rectangles = {"0 0 1 1", "0 0 1 1", "0 0 10000 10000"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rectangles = {"0 0 1 1", "0 0 1 1", "0 0 20000 20000"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rectangles = {"0 0 20000 20000", "0 0 20000 20000", "0 0 20000 20000"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rectangles = {"234 634 2498 934", "943 2340 2348 8373", "2345 234 5487 3387"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 19013250;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rectangles = {"2897 12378 7298 18473", "14873 234 19483 2534", "5098 2347 8592 12834"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 73065473;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rectangles = {"10982 10438 18473 12437", "10433 19574 14985 19824", "12343 15344 17234 16847"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 23463682;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rectangles = {"245 3409 6049 4543", "598 1584 3409 5934"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 15621912;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rectangles = {"0 500 20000 501", "500 0 501 20000"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 39999;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rectangles = {"0 0 20000 20000", "0 0 20000 20000", "0 0 20000 20000"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rectangles = {"1 3 5 6", "3 1 7 5", "4 4 9 7"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rectangles = {"0 0 10 10", "20 20 30 30"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
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
    vector<string> rectangles = {"0 0 20000 20000", "1 1 20000 20000", "2 2 20000 20000"};
    BoxUnion* pObj = new BoxUnion();
    clock_t start = clock();
    int result = pObj->area(rectangles);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6536&pm=4463
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
typedef vector<int> VI;
typedef vector<string> VS;
template<class T> inline int size(const T&c) { return c.size(); }
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
int s2i(string s) { istringstream i(s); int x; i>>x; return x; }
VS split(string s,string del=" ") {
  s+=del[0];
  string w;
  VS res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
VI s2vi(string s,string del=" ") {
  VS v=split(s,del);
  VI res; FOREACH(it,v) res.push_back(s2i(*it));
  return res;
}
 
int ar(VI a) {
  return (a[2]-a[0])*(a[3]-a[1]);
}
 
VI cr(VI a,VI b) {
  int x1 = max(a[0],b[0]);
  int y1 = max(a[1],b[1]);
  int x2 = min(a[2],b[2]);
  int y2 = min(a[3],b[3]);
  if(x2<x1) x2=x1;
  if(y2<y1) y2=y1;
  VI res;
  res.push_back(x1); res.push_back(y1);
  res.push_back(x2); res.push_back(y2);
  return res;
}
 
struct BoxUnion {
 
  // MAIN
  int area(vector <string> rectangles) {
    vector<VI> v;
    FOREACH(it,rectangles) v.push_back(s2vi(*it));
    if(size(v)==1) {
      return ar(v[0]);
    }
    else if(size(v)==2) {
      return ar(v[0]) + ar(v[1]) - ar(cr(v[0],v[1]));
    }
    else {
      return ar(v[0]) + ar(v[1]) + ar(v[2]) -
        ar(cr(v[0],v[1])) - ar(cr(v[1],v[2])) - ar(cr(v[2],v[0]))
        + ar(cr(cr(v[0],v[1]),v[2]));
    }
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/