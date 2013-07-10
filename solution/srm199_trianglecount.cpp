/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2889
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

class TriangleCount {
public:
    int count(int N);
};

int TriangleCount::count(int N) {
    int ret;
    return ret;
}


int test0() {
    int N = 2;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 4;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 5;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 100;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 256275;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 500;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 31406375;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 6;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 7;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 8;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 9;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 10;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 315;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 15;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 988;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 20;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2255;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 25;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 4303;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 50;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 32825;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 200;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 2025050;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 300;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 6806325;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 400;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 16100100;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 450;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 22907925;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 499;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 31218625;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 500;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 31406375;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 100;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 256275;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 1;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 97;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 234073;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 499;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 31218625;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 3;
    TriangleCount* pObj = new TriangleCount();
    clock_t start = clock();
    int result = pObj->count(N);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=274023&rd=5074&pm=2889
********************************************************************************
#include <map> // find insert erase make_pair 
#include <set> 
#include <cassert> // assert 
//#include <list> 
//#include <deque> 
//#include <iomanip> 
//#include <cstring> 
//#include <cmath> 
//#include <cstdio> 
//#include <cctype> // isalpha isdigit isalnum isupper islower tolower toupper 
#include <string> // size 
#include <vector> // push_back pop_back front back 
#include <iostream> 
#include <sstream> // istringstream ostringstream 
#include <algorithm> // next_permutation reverse count 
#include <numeric> // accumulate 
#include <functional> 
 
using namespace std; 
 
#ifdef HOME_RUN // this is debug output code 
int NTR = 1000;struct UU{~UU(){cerr<<endl;} 
template<class X>UU&operator|(const X&x){cerr<<' '<<x;return*this;}}; 
UU uu(const char*f,int l,const char*v){ 
for(cerr<<f<<':'<<l<<' ';*v;++v)cerr<<(*v-'|'?*v:' ');return UU();} 
#define TR(v) if(--NTR<0);else uu(__FILE__,__LINE__,#v)|'='|v 
#else 
#define TR(v) do{}while(0) 
#endif // end of debug output code 
#define ALL(C) (C).begin(), (C).end() 
#define forIter(I, C) for(typeof((C).begin()) I=(C).begin(); I!=(C).end(); ++I) 
#define forN(I, C) for ( int I = 0; I < (C); ++(I) ) 
#define forEach(I, C) forN(I,int((C).size())) 
#define forEach2(I, J, C) forEach(I, C)forEach(J, (C)[I]) 
typedef long long i64; typedef unsigned long long u64; 
typedef vector<int> VI; typedef vector<VI> VVI; typedef vector<string> VS; 
 
#define METHOD TriangleCount::count 
class TriangleCount 
{ 
public: 
    int np(int N) 
    { 
        int ret = 0; 
        for ( int i = 0; i <= N; ++i ) 
            ret += i+1; 
        return ret; 
    } 
    int count(int N)  
    { 
        int ret = 0; 
        for ( int l = 1; l <= N; ++l ) { 
            ret += np(N-l); 
            ret += np(N-2*l); 
        } 
        return ret; 
    } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/