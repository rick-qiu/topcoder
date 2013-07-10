/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8763
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

class StrongPrimePower {
public:
    vector<int> baseAndExponent(string n);
};

vector<int> StrongPrimePower::baseAndExponent(string n) {
    vector<int> ret;
    return ret;
}


int test0() {
    string n = "27";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string n = "10";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string n = "7";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string n = "1296";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string n = "576460752303423488";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 59};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string n = "999999874000003969";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999937, 2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string n = "828100056420000961";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {910000031, 2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string n = "846400038640000441";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {920000021, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string n = "864900031620000289";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {930000017, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string n = "883600005640000009";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {940000003, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string n = "640000017600000121";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {800000011, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string n = "490000001400000001";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {700000001, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string n = "4808584372417849";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 10};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string n = "100";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string n = "10000000000000000";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string n = "576460752303423488";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 59};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string n = "285311670611";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string n = "3656158440062976";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string n = "128";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string n = "2000";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string n = "81";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string n = "1000000000000000000";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string n = "94931877133";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 7};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string n = "625";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string n = "1000000000000";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string n = "25937424601";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 10};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string n = "64004320097200729";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {400009, 3};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string n = "6226558992207611";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {183971, 3};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string n = "450283905890997363";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 37};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string n = "59604644775390625";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 24};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string n = "79792266297612001";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 20};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string n = "45949729863572161";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 16};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string n = "51185893014090757";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 15};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string n = "9904578032905937";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 13};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string n = "2213314919066161";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 12};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string n = "952809757913927";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 11};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string n = "420707233300201";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 10};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string n = "2141202151369";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12889, 3};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string n = "5228251023757481";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {173561, 3};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string n = "149459220327509";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {53069, 3};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string n = "26293188972239280";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string n = "1737651513529567";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {120223, 3};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string n = "5272294069201823";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {174047, 3};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string n = "10885107702466060";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string n = "473820471009858816";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string n = "34744587261921628";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string n = "59354142037386528";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string n = "127303403660161";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3359, 4};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string n = "165214544934378240";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string n = "450194580074537280";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string n = "98795453716788480";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string n = "7648371893761";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1663, 4};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string n = "18113272128961";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2063, 4};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string n = "1302058592234401";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6007, 4};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string n = "38011495109306160";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string n = "178096532776492800";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string n = "141202341361";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {613, 4};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string n = "719112708318707456";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string n = "982451233759284608";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string n = "132421277116505056";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string n = "1164912556234151";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1031, 5};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string n = "1258284197543";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {263, 5};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string n = "116771555364833952";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string n = "3973195810651";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {331, 5};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string n = "162198112382958592";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string n = "44567945135334456";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string n = "69693216111707";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {587, 5};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string n = "70675003317157848";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string n = "179407098289692000";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string n = "10942526586601";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {149, 6};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string n = "69366243661827840";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string n = "1745729089577929";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {347, 6};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string n = "136821750708889";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {227, 6};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string n = "108859988535875648";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string n = "1315127813325481";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {331, 6};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string n = "280343912229566656";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string n = "487014306255994624";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string n = "18619893262512572";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string n = "17249876309";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 7};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string n = "9095120158391";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71, 7};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string n = "435307306210734208";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string n = "605767994083541376";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string n = "321673167473963584";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string n = "80798284478113";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 7};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string n = "27136050989627";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {83, 7};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string n = "12667700813876160";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string n = "124097929967680320";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string n = "67675234241018880";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string n = "7984925229121";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 8};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string n = "139353667211683680";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string n = "406067677556641";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67, 8};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string n = "16983563041";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 8};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string n = "7837433594376961";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 8};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string n = "806460091894081";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {73, 8};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string n = "118587876497";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 9};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string n = "1119130473102767";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 9};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string n = "760231058654565248";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string n = "3299763591802133";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {53, 9};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string n = "350356403707485184";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string n = "1024";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string n = "13422659310152400";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string n = "9765625";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string n = "25937424601";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 10};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string n = "41426511213649";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 10};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string n = "420707233300201";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 10};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string n = "174887470365513056";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string n = "4808584372417849";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 10};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string n = "978016874631664000";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string n = "929822258883628544";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string n = "964395528636563072";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string n = "394078969157856448";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string n = "908866107619817600";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string n = "991472143481970688";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string n = "4019123992303641";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string n = "344863682824507648";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string n = "997401841249600128";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string n = "111141909747036";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string n = "2";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string n = "3";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string n = "4";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string n = "5";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string n = "6";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string n = "8";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string n = "9";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string n = "558545864083284007";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 21};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string n = "505447028499293771";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 17};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string n = "665416609183179841";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 16};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string n = "168377826559400929";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 14};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string n = "799006685782884121";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 14};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string n = "576460752303423489";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string n = "576460752303423487";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string n = "450283905890997362";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string n = "450283905890997364";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string n = "298023223876953124";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string n = "298023223876953126";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string n = "558545864083284006";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string n = "558545864083284008";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string n = "505447028499293770";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string n = "505447028499293772";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string n = "665416609183179840";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string n = "665416609183179842";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string n = "168377826559400928";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string n = "168377826559400930";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string n = "799006685782884120";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string n = "799006685782884122";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string n = "999998384000652863";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string n = "999949000866995087";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999983, 3};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string n = "982134461213542729";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {997, 6};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string n = "760231058654565217";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 9};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string n = "5559060566555523";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 33};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string n = "999999874000003968";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string n = "99999999999999997";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string n = "45848500718449031";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71, 9};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string n = "417598221465052993";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {747457, 3};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string n = "999649041065398387";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999883, 3};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string n = "999999874000003971";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string n = "99865325568854214";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string n = "16";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string n = "639558602475808609";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string n = "61325611948023739";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string n = "999999874000003970";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string n = "999998274000744769";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999137, 2};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string n = "999999858000005041";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999929, 2};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string n = "998653255688542146";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string n = "6033563927688361";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {77676019, 2};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string n = "107213535210701";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 7};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string n = "99999999";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string n = "362970615283037";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71333, 3};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string n = "318632417065625869";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string n = "999999874000004021";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string n = "999999874000003999";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string n = "129961739795077";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 9};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string n = "225";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string n = "26970310888669";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29989, 3};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string n = "9999999999999999";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string n = "32212254719";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string n = "6975757441";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 8};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string n = "40353607";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 9};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string n = "18013367736991621";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string n = "999999999999999999";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string n = "256256096016001";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4001, 4};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string n = "10828567056280801";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 8};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string n = "999997000002999999";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string n = "45537538411";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3571, 3};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string n = "64";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string n = "999999999999999989";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string n = "8587340257";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 5};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string n = "909090909090909091";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string n = "3534693810730681";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59453291, 2};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string n = "999999786000011449";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999893, 2};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string n = "36028797018963967";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string n = "44373090883969";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6661313, 2};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string n = "832972004929";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 6};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string n = "125452795632756227";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {500603, 3};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    string n = "288230376151711744";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 58};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    string n = "205891132094649";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 30};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    string n = "11398895185373143";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 19};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    string n = "94143178863";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    string n = "1000002000001";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    string n = "999999998000000001";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    string n = "708362564245445649";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    string n = "999999999999999967";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    string n = "5014347704646281";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {171161, 3};
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    string n = "100000000000000";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    string n = "809240558043136001";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    string n = "1000030000300001";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    string n = "36";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    string n = "489061743789403";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {78787, 3};
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    string n = "2401";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 4};
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    string n = "4220974735142131";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {161611, 3};
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    string n = "99420792564848581";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {463261, 3};
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    string n = "999999878000003721";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    string n = "1002702430729";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10009, 3};
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    string n = "1004536843742951";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100151, 3};
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    string n = "63807265201";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    string n = "513331712930412557";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {800693, 3};
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    string n = "991026973";
    StrongPrimePower* pObj = new StrongPrimePower();
    clock_t start = clock();
    vector<int> result = pObj->baseAndExponent(n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {997, 3};
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21468741&rd=12172&pm=8763
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
 
using namespace std;
 
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
 
#define fi first
#define mp make_pair
#define pb push_back
#define se second
 
class StrongPrimePower
{
  public:
    vector <int> baseAndExponent( string n )
    {
      ll a;
      sscanf(n.c_str(), "%lld", &a);
      for (ll p = 2; p < 10000000; p++)
        if (a % p == 0)
        {
          int q = 0;
          while (a % p == 0)
            q++, a /= p;
          if (a != 1 || q < 2)
            return vector <int>();
          vector <int> r;
          r.pb(p);
          r.pb(q);
          return r;
        }
      double c = sqrt(1.0 * a);
      for (ll p = (ll)max(2.0, c - 5); p <= (ll)c + 5; p++)
        if (a % p == 0)
        {
          int q = 0;
          while (a % p == 0)
            q++, a /= p;
          if (a != 1 || q < 2)
            return vector <int>();
          vector <int> r;
          r.pb(p);
          r.pb(q);
          return r;
        }
      return vector <int>();
    }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/