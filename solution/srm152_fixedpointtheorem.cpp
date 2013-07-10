/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1765
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

class FixedPointTheorem {
public:
    double cycleRange(double R);
};

double FixedPointTheorem::cycleRange(double R) {
    double ret;
    return ret;
}


int test0() {
    double R = 0.1;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    double R = 3.05;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14754098360655865;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    double R = 3.4499;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4175631735867292;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    double R = 3.55;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5325704489850351;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    double R = 3.565;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5454276003030636;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    double R = 3.5689;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5489996297493569;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    double R = 2.34;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    double R = 3.49;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.48387181850304856;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    double R = 2.98;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9960036108132044E-15;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    double R = 2.99;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 8.881784197001252E-15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    double R = 3.04;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13223520554106594;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    double R = 3.01;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06652818735715116;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    double R = 3.541;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.519046049516487;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    double R = 3.41876;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.39789106661899026;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    double R = 3.18763;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2780784826383129;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    double R = 2.989999;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 9.43689570931383E-15;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    double R = 2.999;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5021317523178368E-13;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    double R = 3.11;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2162005848747809;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    double R = 3.345;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3660229490599461;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    double R = 3.35;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3683272441568087;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    double R = 2.0;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    double R = 1.5;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 5.551115123125783E-17;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    double R = 1.13;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    double R = 3.14159265;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24375535949657212;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    double R = 2.987654;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 7.216449660063518E-15;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    double R = 3.1333333;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23692611504852346;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    double R = 3.01;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06652818735715116;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    double R = 3.005;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047091419960362035;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    double R = 3.0005;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014905567254818064;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    double R = 3.00005;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004713996108955176;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    double R = 3.0005;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014905567254818064;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    double R = 3.27;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3283583517096015;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    double R = 3.5689;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5489996297493569;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    double R = 3.4499;
    FixedPointTheorem* pObj = new FixedPointTheorem();
    clock_t start = clock();
    double result = pObj->cycleRange(R);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4175631735867292;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test31() == 0 ? ++passed : ++failed;
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=297766&rd=4565&pm=1765
********************************************************************************
// common includes 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <map> 
#include <stdlib.h> 
#include <stdio.h> 
#include <ctype.h> 
using namespace std; 
 
// common typedefs 
typedef vector<string> VS; 
typedef vector<int> VI; 
 
typedef string::iterator SI; 
typedef VS::iterator VSI; 
typedef VI::iterator VII; 
 
// Statements I wish existed 
#define foreach(it, collection) for(typeof(collection.begin()) it = collection.begin(); it != collection.end(); it++) 
#define rforeach(it, collection) for(typeof(collection.rbegin()) it = collection.rbegin(); it != collection.rend(); it++) 
#define sortc(collection) sort(collection.begin(), collection.end()); 
#define rsortc(collection) sort(collection.rbegin(), collection.rend()); 
 
class FixedPointTheorem 
{ 
public: 
  double cycleRange(double R) 
  { 
    double cur=0.25; 
 
    for(int i=0; i<200000; i++) 
      cur = R*cur*(1-cur); 
 
    double min=9999999999.9; 
    double max=-9999999999.9; 
 
    for(int i=0; i<1000; i++) 
    { 
      cur = R*cur*(1-cur); 
      if (cur>max) max=cur; 
      if (cur<min) min=cur; 
    } 
    return max-min; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/