/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7657
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

class SchoolTrip {
public:
    double duration(vector<int> probability);
};

double SchoolTrip::duration(vector<int> probability) {
    double ret;
    return ret;
}


int test0() {
    vector<int> probability = {100, 23};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> probability = {50, 50};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> probability = {25, 50, 75};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 3.892383478590375;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> probability = {100, 100, 100, 42, 11};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> probability = {10, 10, 10, 12, 13, 13};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 41.70202803691314;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> probability = {10, 10, 10, 10, 10, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 50.000000000000036;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> probability = {100, 100, 100, 100, 100, 100};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> probability = {22, 14, 19, 28, 16};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 18.130185839277964;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> probability = {84, 17};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 1.337638376383764;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> probability = {52, 18, 61, 44, 29, 14};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 10.32032270125513;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> probability = {10, 20, 30, 40, 50, 60};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 12.197377738513183;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> probability = {99, 99, 99, 99, 99, 99};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.05050505050505;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> probability = {99, 99};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0101010101010102;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> probability = {91, 100};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0899999999999999;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> probability = {83, 76, 42, 99, 15};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 4.647464861935303;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> probability = {12, 14, 99, 98};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 4.694575608442531;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> probability = {24, 71, 13};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 4.509909595320895;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> probability = {100, 52, 24, 99};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 3.484848;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> probability = {10, 11, 12, 13, 16, 15};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 36.08683903099092;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> probability = {50, 50, 50, 50, 50};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> probability = {10, 19, 14, 16, 17};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 24.231064884049143;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> probability = {33, 34, 10, 82, 15, 17};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 11.182615665519343;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> probability = {88, 75, 92, 94, 91, 90};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.468656006585871;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> probability = {14, 82, 35, 40, 50};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 7.495801603243919;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> probability = {10, 11};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 9.547738693467338;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> probability = {98, 99};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0202040408081616;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> probability = {24, 15, 19, 28};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 12.864491178244636;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> probability = {13, 12, 11, 17, 21, 19};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 28.91545287387445;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> probability = {93, 23, 64, 12, 59, 36};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 7.1643961268639496;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> probability = {97, 61, 98, 38, 96, 13};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.201286746331806;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> probability = {11, 12, 13, 14, 15, 16};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 34.8972217863488;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> probability = {10, 10, 12, 10, 11, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 46.09411684548137;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> probability = {20, 60, 50, 40, 12, 15};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 11.307301708586111;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> probability = {10, 10, 12, 10, 10, 11};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 46.105940601207884;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> probability = {100, 100, 100, 42, 11};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> probability = {10, 10, 10, 10, 10, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 50.000000000000036;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> probability = {100, 11, 100, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> probability = {12, 18, 12, 18, 100, 57};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 10.746387459545588;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> probability = {89, 88, 86, 87, 89, 85};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.640343694485206;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> probability = {13, 17, 11, 13, 19, 13};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 31.84831350197316;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> probability = {100, 95, 100, 70, 99, 100};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.01;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> probability = {100, 90, 100, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> probability = {10, 10, 10, 11, 10, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 48.57385173629134;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> probability = {17, 29, 31, 74, 27, 11};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 12.32726527062102;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> probability = {10, 10, 10, 10, 10, 11};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 48.606639586907626;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> probability = {23, 45, 43, 77, 99, 22};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 7.794116626561098;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> probability = {10, 20, 30, 40, 50, 60};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 12.197377738513183;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> probability = {11, 22, 33, 44, 55, 66};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 11.155585740231338;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> probability = {10, 60, 50, 100, 100};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.552;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> probability = {19, 32, 77, 11, 11, 11};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 13.09094716355756;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> probability = {10, 15, 25, 50, 65, 75};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 10.436360428839327;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> probability = {100, 90, 100, 100, 20, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> probability = {100, 20, 100, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> probability = {94, 95, 96, 97, 98, 99};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 5.154819017098075;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> probability = {90, 20, 90, 10};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5070217783824535;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> probability = {50, 100, 50, 100};
    SchoolTrip* pObj = new SchoolTrip();
    clock_t start = clock();
    double result = pObj->duration(probability);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10808&pm=7657
********************************************************************************
// greetings to you, for reading this 
 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
typedef long double ld; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Bit Count 
int bitc(ll r) {return r == 0 ? 0 : (bitc(r>>1) + (r&1));} 
 
#line 3 "SchoolTrip.cc" 
 
ld tim[1<<6][6]; 
 
class SchoolTrip { 
  public: 
  double duration(vector <int> probability) { 
    // !FDI 
    int N = Size(probability); 
     
    FOR(k,0,1<<N) if(bitc(k) > 1) { 
      FOR(it,0,10000) { 
        FOR(u,0,N) { 
          int u2 = (u+1)%N; 
          if(k & (1<<u)) { 
            ld best = 2000; 
            FOR(d,0,6) if((k & (1<<d)) && (d != u)) 
              best <?= tim[k^(1<<d)][u2]; 
            int pu = probability[u]; 
            tim[k][u] = 1 + (best * pu + tim[k][u2] * (100-pu)) /100; 
            } 
          else tim[k][u] = tim[k][u2]; 
          } 
        } 
      } 
    return tim[(1<<N)-1][0]; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/