/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6597
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

class BerryPacker {
public:
    double bestPacking(vector<int> first, vector<int> period, int berries);
};

double BerryPacker::bestPacking(vector<int> first, vector<int> period, int berries) {
    double ret;
    return ret;
}


int test0() {
    vector<int> first = {2};
    vector<int> period = {500};
    int berries = 6;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> first = {0, 1};
    vector<int> period = {2, 2};
    int berries = 7;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> first = {500};
    vector<int> period = {1};
    int berries = 499;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
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
    vector<int> first = {0, 1, 2, 3, 4};
    vector<int> period = {2, 2, 2, 2, 2};
    int berries = 5;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> first = {1, 2, 3, 4, 549};
    vector<int> period = {3, 5, 9, 11, 1};
    int berries = 550;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 969.6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> period = {1, 1, 1, 1, 1};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 100023.99604073784;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> first = {0, 0, 0, 0, 0};
    vector<int> period = {1, 3, 5, 7, 11};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 197695.29425500863;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> first = {1};
    vector<int> period = {1};
    int berries = 1000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 1007.9999999999999;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> first = {2, 5, 9, 25};
    vector<int> period = {1, 3, 11, 7};
    int berries = 100;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 251.50649350649354;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> first = {3892, 4897, 2872, 8711, 7191};
    vector<int> period = {1, 298, 47872, 2992, 19871};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 720091.816755946;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> first = {0, 0, 0, 0, 0};
    vector<int> period = {1, 1, 1, 1, 1};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> first = {5, 3, 6782, 2, 80000};
    vector<int> period = {5001, 5002, 5003, 5004, 1};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 739511.9999999999;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> first = {78, 292, 29922, 4774, 27171};
    vector<int> period = {928, 2817, 88, 1, 992};
    int berries = 500;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 1742.4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> first = {27, 68, 51, 44, 41};
    vector<int> period = {18, 94, 73, 70, 76};
    int berries = 92171;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 488756.91014572454;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> first = {9293, 18855, 7046, 9972, 9138};
    vector<int> period = {25028, 12090, 13554, 22805, 25799};
    int berries = 91791;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 824247.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> first = {39618, 7642, 30532, 82562, 15014};
    vector<int> period = {3, 3, 2, 2, 2};
    int berries = 91737;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 235544.93287874284;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> first = {1200, 901, 4447, 3051, 2951};
    vector<int> period = {1, 1, 1, 1, 1};
    int berries = 90799;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 108747.10794387218;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> first = {6, 1, 3, 1, 6};
    vector<int> period = {1001, 1000, 1003, 1002, 9003};
    int berries = 18001;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 156897.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> first = {0, 0, 1, 1, 1000};
    vector<int> period = {1, 2, 1, 2, 500};
    int berries = 15000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 38596.8030321489;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> first = {0, 1, 2, 3, 4};
    vector<int> period = {1, 2, 3, 5, 7};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 171703.9315824347;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> first = {1000};
    vector<int> period = {1};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 108000.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> period = {2, 3, 5, 7, 11};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 197899.17731785311;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> period = {1, 2, 3, 4, 5};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 166288.75076498027;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> first = {1, 2, 3, 4, 55};
    vector<int> period = {101, 72, 202, 1024, 303};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 712512.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> first = {0, 3, 3, 3, 3};
    vector<int> period = {100, 100, 100, 100, 100};
    int berries = 4;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> first = {2, 5, 9, 25, 29};
    vector<int> period = {1, 3, 11, 7, 13};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 217813.74814447263;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> first = {0, 0, 0, 0, 0};
    vector<int> period = {1, 1, 1, 1, 1};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> first = {0, 10, 20, 30, 40};
    vector<int> period = {99999, 99989, 99799, 99999, 99999};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 899568.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> first = {1, 2, 3, 3, 4};
    vector<int> period = {2, 3, 4, 5, 6};
    int berries = 100000;
    BerryPacker* pObj = new BerryPacker();
    clock_t start = clock();
    double result = pObj->bestPacking(first, period, berries);
    clock_t end = clock();
    delete pObj;
    double expected = 161719.2685123893;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=10006&pm=6597
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
using namespace std; 
 
// LIB CODE 
#define SZ(v) ((int)(v).size()) 
#define FORE(i,a,b) for(int i=(a);i<=int(b);++i) 
typedef vector<int> VI; 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define REP(i,n) FOR(i,0,n) 
typedef vector<double> VD; 
#define ALL(v) (v).begin(),(v).end() 
#define SORT(v) sort(ALL(v)) 
// REAL CODE 
 
int cnt[100001]; 
 
class BerryPacker { 
public: 
  double bestPacking(vector <int> next, vector <int> period, int berries) { 
    double ret=0; int n=SZ(next); 
    memset(cnt,0,sizeof(cnt)); VI seen(n,0); VI num(1<<n,0); 
    FORE(boxes,1,berries) { 
      num[0]++; 
      REP(i,n) while(next[i]<boxes) { 
        --num[cnt[next[i]]]; 
        cnt[next[i]]|=1<<i; 
        ++num[cnt[next[i]]]; 
        ++seen[i]; 
        next[i]+=period[i]; 
      } 
      VD w(1<<n,0); REP(i,1<<n) REP(j,n) if(i&(1<<j)) if(seen[j]>0) w[i]+=1.0/seen[j]*boxes; 
      vector<pair<double,int> > x(1<<n); REP(i,1<<n) x[i].first=w[i],x[i].second=num[i]; SORT(x); reverse(ALL(x)); 
       
      double cur=0; int left=berries-boxes; 
      REP(i,1<<n) { 
        int add=min(left,x[i].second*8); left-=add; 
        cur+=x[i].first*(x[i].second+add); 
      } 
       
      ret>?=cur; 
//      if(boxes<=10) printf("%d: %lf\n",boxes,cur); 
    } 
    return ret/n; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/