/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8673
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

class KPlanetaryAlignment {
public:
    int number(vector<int> periods, int k, int T1, int T2);
};

int KPlanetaryAlignment::number(vector<int> periods, int k, int T1, int T2) {
    int ret;
    return ret;
}


int test0() {
    vector<int> periods = {8, 40};
    int k = 2;
    int T1 = 0;
    int T2 = 20;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
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
    vector<int> periods = {8, 24, 40};
    int k = 2;
    int T1 = 0;
    int T2 = 20;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> periods = {8, 24, 40};
    int k = 3;
    int T1 = 0;
    int T2 = 100;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> periods = {-10, 10};
    int k = 2;
    int T1 = 2;
    int T2 = 26;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> periods = {-20, 10, -40, 40};
    int k = 2;
    int T1 = 9;
    int T2 = 11;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> periods = {-1, 2, 3, 4, 5};
    int k = 3;
    int T1 = 10000;
    int T2 = 50000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 53333;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> periods = {-1, 1};
    int k = 2;
    int T1 = 0;
    int T2 = 50000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 200001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> periods = {-2, 91, 87, 77, 71};
    int k = 4;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1471;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> periods = {100, 97, 93, 91, 89};
    int k = 5;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> periods = {81, 53, 32, 71, -15};
    int k = 4;
    int T1 = 20653;
    int T2 = 43090;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> periods = {34, 82, 95, 41, -66};
    int k = 5;
    int T1 = 2447;
    int T2 = 34805;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> periods = {-75, -44, -91, 80, 66};
    int k = 4;
    int T1 = 13173;
    int T2 = 24970;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> periods = {-92, 47, -37, 38, -62};
    int k = 5;
    int T1 = 10073;
    int T2 = 40784;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> periods = {-20, 61, -21, -22, 99};
    int k = 4;
    int T1 = 28208;
    int T2 = 51341;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> periods = {48, -8, -37, -71, -65};
    int k = 3;
    int T1 = 2101;
    int T2 = 8954;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> periods = {22, -89, -54, 17, 28};
    int k = 2;
    int T1 = 20344;
    int T2 = 40362;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 16873;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> periods = {-58, -75, 90, 67, 82};
    int k = 2;
    int T1 = 16807;
    int T2 = 28015;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 4017;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> periods = {5, -67, 14, -63, 10};
    int k = 4;
    int T1 = 15643;
    int T2 = 17093;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> periods = {-72, 50, 3, -14, -70};
    int k = 4;
    int T1 = 32037;
    int T2 = 33085;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> periods = {-14, 62, 75, 36, 52};
    int k = 2;
    int T1 = 24986;
    int T2 = 57437;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 26346;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> periods = {-47, -62, -68, 23, 80};
    int k = 3;
    int T1 = 19868;
    int T2 = 24079;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> periods = {25, 63, -98, -29, -27};
    int k = 4;
    int T1 = 10666;
    int T2 = 27270;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> periods = {84, 29, -2, 31, 61};
    int k = 3;
    int T1 = 21738;
    int T2 = 46502;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> periods = {4, -28, 16, 56, -31};
    int k = 3;
    int T1 = 29751;
    int T2 = 50137;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 872;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> periods = {-72, 85, -5, -38, -58};
    int k = 2;
    int T1 = 2384;
    int T2 = 24119;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 37743;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> periods = {-76, 93, 84, -37, 73};
    int k = 5;
    int T1 = 28991;
    int T2 = 41733;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> periods = {-47, 19, 79, -70, 11};
    int k = 3;
    int T1 = 7316;
    int T2 = 27520;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> periods = {25, -7, -38, 4, -17};
    int k = 4;
    int T1 = 16533;
    int T2 = 38083;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> periods = {-91, 15, 8, 7, 56};
    int k = 5;
    int T1 = 29796;
    int T2 = 53939;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> periods = {-38, -69, -27, 75, 45};
    int k = 2;
    int T1 = 3647;
    int T2 = 23520;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 12216;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> periods = {91, 71, 69, -28, -35};
    int k = 4;
    int T1 = 12856;
    int T2 = 28376;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> periods = {20, 67, 95, -74, -46};
    int k = 5;
    int T1 = 10834;
    int T2 = 21315;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> periods = {1, 64, 68, 80, -9};
    int k = 4;
    int T1 = 22125;
    int T2 = 43535;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> periods = {-66, 65, -70, 75, -87};
    int k = 4;
    int T1 = 11635;
    int T2 = 39707;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> periods = {76, 64, 52, 57, 35};
    int k = 4;
    int T1 = 15299;
    int T2 = 34904;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> periods = {76, 82, 3, 58, -96};
    int k = 4;
    int T1 = 19165;
    int T2 = 28277;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> periods = {56, 64, 41, 44, -69};
    int k = 2;
    int T1 = 7758;
    int T2 = 39688;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 10771;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> periods = {67, 90, -20, 24, -11};
    int k = 5;
    int T1 = 29150;
    int T2 = 57397;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> periods = {14, -80, -83, 89, -33};
    int k = 2;
    int T1 = 9464;
    int T2 = 28114;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 16752;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> periods = {-48, 4, 69, 48, -23};
    int k = 2;
    int T1 = 16217;
    int T2 = 30741;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 34153;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> periods = {64, -74, 19, 57, -92};
    int k = 4;
    int T1 = 15100;
    int T2 = 21434;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> periods = {25, 85, -50, 100, -13};
    int k = 4;
    int T1 = 16196;
    int T2 = 44969;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> periods = {16, -34, 67, 87, -65};
    int k = 2;
    int T1 = 14699;
    int T2 = 37921;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 19869;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> periods = {-96, 91, 9, 33, -8};
    int k = 5;
    int T1 = 5040;
    int T2 = 28059;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> periods = {-36, -16};
    int k = 2;
    int T1 = 22356;
    int T2 = 46186;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1655;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> periods = {-41, -24};
    int k = 2;
    int T1 = 6069;
    int T2 = 19484;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 464;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> periods = {78, -48};
    int k = 2;
    int T1 = 16130;
    int T2 = 38670;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1517;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> periods = {78, 49};
    int k = 2;
    int T1 = 29280;
    int T2 = 60038;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 467;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> periods = {14, -74};
    int k = 2;
    int T1 = 16734;
    int T2 = 27023;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1748;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> periods = {-91, 100};
    int k = 2;
    int T1 = 9174;
    int T2 = 21162;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 503;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> periods = {-34, 94};
    int k = 2;
    int T1 = 24131;
    int T2 = 33958;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 788;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> periods = {74, -39};
    int k = 2;
    int T1 = 20873;
    int T2 = 40982;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1575;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> periods = {-62, 86};
    int k = 2;
    int T1 = 32119;
    int T2 = 55231;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1283;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> periods = {-81, 2};
    int k = 2;
    int T1 = 3605;
    int T2 = 5537;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1979;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> periods = {-18, -73};
    int k = 2;
    int T1 = 1071;
    int T2 = 5324;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 356;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> periods = {-26, -47};
    int k = 2;
    int T1 = 8258;
    int T2 = 22779;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> periods = {65, 67};
    int k = 2;
    int T1 = 23484;
    int T2 = 43415;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> periods = {-70, 55};
    int k = 2;
    int T1 = 1474;
    int T2 = 10672;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 597;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> periods = {-26, 95};
    int k = 2;
    int T1 = 2326;
    int T2 = 24997;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 2222;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> periods = {16, -20};
    int k = 2;
    int T1 = 2295;
    int T2 = 16107;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 3108;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> periods = {99, -64};
    int k = 2;
    int T1 = 8472;
    int T2 = 20905;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 640;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> periods = {5, 49};
    int k = 2;
    int T1 = 14577;
    int T2 = 18304;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1339;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> periods = {-15, 4, 41, -68, -89};
    int k = 2;
    int T1 = 21197240;
    int T2 = 24512033;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 8881260;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> periods = {-79, 98, 97, -61, 72};
    int k = 2;
    int T1 = 27725288;
    int T2 = 31314259;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1198720;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> periods = {-74, 34, -17, 64, 14};
    int k = 3;
    int T1 = 21426840;
    int T2 = 45236960;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 463035;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> periods = {41, -78, -99, 91, -93};
    int k = 2;
    int T1 = 26707385;
    int T2 = 46649025;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 7644243;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> periods = {9, -55, -48, -62, 94};
    int k = 2;
    int T1 = 8269810;
    int T2 = 11996255;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 4350340;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> periods = {1, 2, 4, 8, 97};
    int k = 2;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 355927839;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> periods = {1, 2, 4, 8, 97};
    int k = 3;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 25773197;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> periods = {1, 3, 9, 27, -97};
    int k = 2;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 372508589;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> periods = {1, 4, 16, 64, -99};
    int k = 2;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 379513892;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> periods = {1, 4, 16, 64, -16};
    int k = 3;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 25000001;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> periods = {-1, -2, 1, 2, 3};
    int k = 2;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 433333335;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> periods = {8, 40};
    int k = 2;
    int T1 = 10;
    int T2 = 10;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> periods = {-2, 91, 87, 77, 71};
    int k = 4;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1471;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> periods = {97, 93, 89, 83, 79};
    int k = 2;
    int T1 = 575757;
    int T2 = 47474747;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1118323;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> periods = {-2, 91, 87, 77, 71};
    int k = 5;
    int T1 = 0;
    int T2 = 50000000;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> periods = {2, 5, 30, 47, 94};
    int k = 3;
    int T1 = 10121;
    int T2 = 12211312;
    KPlanetaryAlignment* pObj = new KPlanetaryAlignment();
    clock_t start = clock();
    int result = pObj->number(periods, k, T1, T2);
    clock_t end = clock();
    delete pObj;
    int expected = 1176853;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22686851&rd=13505&pm=8673
********************************************************************************
#include<string> 
#include<vector> 
#include<cmath> 
#include<sstream> 
#include<iostream> 
#include<set> 
using namespace std; 
 
long long gcd(const long long &a,const long long &b){return b?gcd(b,a%b):a;} 
 
class fs{ 
    public: 
        long long fm,fz; 
        void set(long long a,long long b){ 
            if (a<0) a=-a; 
            if (b<0) b=-b; 
            long long temp=gcd(a,b); 
            a/=temp;b/=temp; 
            fz=a;fm=b; 
        } 
        void g(const fs &b){ 
            if (b.fz==0) return; 
            if (fz==0) { 
                fz=b.fz; 
                fm=b.fm; 
                return; 
            } 
            fm=gcd(fm,b.fm); 
            fz=fz/gcd(fz,b.fz)*b.fz; 
        } 
        long long calc(int a,int b){ 
            return b*fm/fz-a*fm/fz+((a*fm)%fz==0); 
        } 
}; 
 
long long ans; 
int n,len; 
vector<int> xl; 
fs ok[100]; 
int i,j,tot; 
fs zq,tem; 
 
class KPlanetaryAlignment{ 
public: 
int number(vector <int> periods, int k, int T1, int T2){ 
    n=periods.size(); 
    len=0; 
    for (i=0;i<(1<<n);++i){ 
        tot=0; 
        xl.clear(); 
        for (j=0;j<n;++j) 
            if (i&(1<<j)) {++tot; 
            xl.push_back(j);} 
        if (tot!=k) continue; 
        zq.set(0,1); 
        for (j=1;j<tot;++j){ 
            tem.set(periods[xl[j]]*periods[xl[0]],2*(periods[xl[j]]-periods[xl[0]])); 
            if (tem.fm==0) continue; 
            zq.g(tem); 
        } 
        ok[len++]=zq; 
    } 
    ans=0; 
    for (i=1;i<(1<<len);++i){ 
        tot=0; 
        tem.set(0,1); 
        for (j=0;j<len;++j) 
            if (i&(1<<j)) {++tot; 
            tem.g(ok[j]);} 
        if (tot%2==0) ans-=tem.calc(T1,T2); 
        else ans+=tem.calc(T1,T2); 
    } 
    return (int)ans; 
} 
 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/