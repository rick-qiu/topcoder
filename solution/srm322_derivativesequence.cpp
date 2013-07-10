/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6665
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

class DerivativeSequence {
public:
    vector<int> derSeq(vector<int> a, int n);
};

vector<int> DerivativeSequence::derSeq(vector<int> a, int n) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> a = {5, 6, 3, 9, -1};
    int n = 1;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -3, 6, -10};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {5, 6, 3, 9, -1};
    int n = 2;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-4, 9, -16};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {5, 6, 3, 9, -1};
    int n = 4;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-38};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {4, 4, 4, 4, 4, 4, 4, 4};
    int n = 3;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {0, 3, 9, 18};
    int n = 3;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {-100, 100};
    int n = 0;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100, 100};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {-100, 100};
    int n = 1;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {200};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {100, -100};
    int n = 1;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-200};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {-100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52428800};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {-100};
    int n = 0;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {-100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100};
    int n = 15;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3276800, -3276800, 3276800, -3276800, 3276800};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100};
    int n = 18;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26214400, -26214400};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {-94, 83, -100, -90, -99, 3, -97, 7, -15, -30, 74};
    int n = 10;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-37681};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {51, -86, -15, -24, 69, -72, -22, 16, 55, -55, -88, 46, 15, -53, -60, -40, -82, 7, -36, 31};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1074506};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {-21, 75, 67, 80, 66, 50, 70, -13, -47, -44, 7, 71, 6, 45, 16, 70, -23, -68, -84, -17};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3062329};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {87, 54, 15, 70, -20, -26, -58, -83, 97, -23, 9, 16, 92, -40};
    int n = 13;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-186443};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {71, 96, -32, -12, -11, 51, -62, 92, -95, -89, -57, 44, 45, 5, -83, -6, 70, -45, 73, 78};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13232177};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {6, 79, 96, 50, 94, -56, -13, 65, -54, -72, 72, -100, 28, -33, 21, 32, -57, 46, -7, -11};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-16496406};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {-8, -19, 35, -16, 8, 10, 71, -9, -38, -70, 60, 79, -74, -5, -95, 65, -84, -75, 1, 0};
    int n = 13;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-148860, 143067, -113928, 38763, 86614, -230187, 346834};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {-84, 49, -13, 44, 99, 25, 97, -66, -53, 82, 75, -34, -4, -24};
    int n = 13;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-201232};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {-54, 14, -51, 77, -95, -73, -72, -27, -87, -3, -62, -72, -52, -81, -25, 37, 15, -43, 74, 48};
    int n = 12;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100566, 99399, -100788, 84901, -48983, 8048, 18673, -23704};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {-34, 37, -92, -3, -65, 0, 59, 23, -62, 53, -31, 32, 59};
    int n = 12;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-46486};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {-4, 68, -27, 88, 37, 2, 69, 8, -69, -77, -63, 46, 73, -24, 8, -76, -96, -42, -12, 77};
    int n = 18;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-817623, 452095};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {-79, -85, 51, -16, -12, -50};
    int n = 5;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1006};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {-55, -60, -31, -12, -3, -8, -55, -92, 61, -87, 45, -35, 32, -97, -46, -49};
    int n = 15;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1374708};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {-45, -81, -27, 23, 65, -48, -47, 81};
    int n = 7;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2023};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {-75, 20, -29, -82, 76, 79, -11, -43, -40, 51, -7, 47, -15, -18, 0, -2, -26, 69, 65, -3};
    int n = 17;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2536680, -2841097, 2691891};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {-33, -69, -94, -60, 51, -25, -42, 59, 13, 39, -41, -98, 13, -18, -25, -98, -93};
    int n = 2;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 59, 77, -187, 59, 118, -147, 72, -106, 23, 168, -142, 24, -66, 78};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {-68, 87, 65, 63, 75, 64, 13};
    int n = 6;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-121};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {-41, 58, -28, -100, 10, 10, -38, 14, -74, 80, -24, -8, -20, -18};
    int n = 13;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {228251};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {-56, -9, -63, -11, 46, -22, 61, -20, 86, -13, 58, -26, 57, 46, -78, -6, 57, 7, 85, 97};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-18916817};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {-4, 73, 22, -39, 18, -21, 60, -83, -81, 61, 23, 92, -63, -98, -22, -12, 53};
    int n = 11;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-61031, 41675, -3640, -36921, 62637, -65772};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {11, 92, 12};
    int n = 1;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, -80};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {37, 60};
    int n = 1;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {92, -90, 17, 7, -84, -56, 78, -41, -44, -42, -1, -59, 83, 59, 48, -88, -49, 89, -57, 39};
    int n = 18;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6169523, -6674245};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {11, 26, 20, 81, -85, 78, 89};
    int n = 6;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3119};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {-45, -41, -90, 92, -23, 75, 51, 79, 16, 16, 29, 19};
    int n = 10;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-36636, 25776};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {10, 25, -31, -20, -88, -42, -89, -7, -26, 86, -5, -61, 18, -63, -43, -39, -46, -51};
    int n = 9;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12991, -14025, 15087, -15967, 14437, -7861, -2302, 10260, -11779};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {4, 71, 10, 9, 62, -42, -95, -82, -60, 6, -23, 8, 64, -35, -80, -18, 82, 89, 11, -60};
    int n = 0;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 71, 10, 9, 62, -42, -95, -82, -60, 6, -23, 8, 64, -35, -80, -18, 82, 89, 11, -60};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {-8, 13};
    int n = 0;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-8, 13};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {14, -17, 94, -34, -14, 36, 47, -50, 61, 48, -82, 89, -93, 96, -15};
    int n = 0;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, -17, 94, -34, -14, 36, 47, -50, 61, 48, -82, 89, -93, 96, -15};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {92, 78, 51, 24, -99, -2, -11, -94, 30, -46, -1, 31, 11, 35, -87, 36, 63, 43, 51, -47};
    int n = 0;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 78, 51, 24, -99, -2, -11, -94, 30, -46, -1, 31, 11, 35, -87, 36, 63, 43, 51, -47};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100, 100, -100};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-52428800};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {5, 6, 3, 9, -1};
    int n = 2;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-4, 9, -16};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {4, 4, 4, 4, 4, 4, 4, 4};
    int n = 3;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {5, 6, 3, 9, -1};
    int n = 4;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-38};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {39, 29, 1, -23, 12, 4, -29, 39, 10, -19, 99, 12, -39, -16, 2};
    int n = 10;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-5965, 10849, -6951, -5769, 18632};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {4, 4, 4, 4, 4, 4, 4, 4};
    int n = 6;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = 19;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {-100, 100};
    int n = 0;
    DerivativeSequence* pObj = new DerivativeSequence();
    clock_t start = clock();
    vector<int> result = pObj->derSeq(a, n);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-100, 100};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20729715&rd=10002&pm=6665
********************************************************************************
#include<vector> 
using namespace std; 
class DerivativeSequence 
{ 
public: 
vector <int> derSeq(vector <int> a, int n) 
{ 
for (int p=0;p<n;p++) 
{ 
vector<int> vinit; 
for (int m=0;m<a.size()-1;m++) 
{ 
int l=a[m+1]-a[m]; 
vinit.push_back(l); 
} 
a=vinit; 
} 
return a; 
} 
};

********************************************************************************
*******************************************************************************/