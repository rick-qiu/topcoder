/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7408
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

class CommonMultiples {
public:
    int countCommMult(vector<int> a, int lower, int upper);
};

int CommonMultiples::countCommMult(vector<int> a, int lower, int upper) {
    int ret;
    return ret;
}


int test0() {
    vector<int> a = {1, 2, 3};
    int lower = 5;
    int upper = 15;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> a = {1, 2, 4, 8, 16, 32, 64};
    int lower = 128;
    int upper = 128;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 49};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> a = {1, 1, 1};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> a = {4};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> a = {6, 26, 56, 56, 4, 24, 25, 32, 13, 41, 4, 26};
    int lower = 3462456;
    int upper = 234523542;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> a = {4, 6, 9, 9, 6, 4, 1, 9, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 9, 9, 9, 9, 9};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 55555555;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> a = {20, 18, 73, 55, 42, 80, 51, 80, 24, 84, 80, 86, 19, 59, 3, 27, 48, 66, 70, 26, 87, 81, 62, 20, 39, 49, 38, 63, 87, 91, 9, 94, 52, 96, 85, 48, 41, 95, 82, 33, 32, 99, 80, 86, 67, 66, 2};
    int lower = 114603444;
    int upper = 697053758;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> a = {3, 1, 1, 3, 3, 1, 3, 1, 1, 3, 1, 3, 3, 1, 1, 1, 3, 3, 1, 3};
    int lower = 1851;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 333131316;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> a = {4, 2, 8, 4, 1, 8, 4, 8, 8, 8};
    int lower = 6824;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 124923622;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> a = {2, 2, 4, 2, 2, 4, 2, 1, 4, 2, 1, 4, 1, 1, 1, 2};
    int lower = 2452;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 249848337;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> a = {77, 1, 77, 77, 11, 7, 11, 7, 11, 7, 1, 11, 77, 11, 1, 7, 11, 7, 11, 11, 77, 1, 11, 77, 77, 7};
    int lower = 77;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 12979166;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> a = {8, 32, 8, 1, 1, 16, 16, 16, 16, 16, 4, 32, 32, 16, 32, 16, 2, 32, 4, 1};
    int lower = 3490;
    int upper = 999395794;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 31231009;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> a = {1, 1, 23, 23, 1, 49, 1, 49, 49, 49, 23, 1, 7, 49, 23, 1, 1, 23, 49, 7, 7, 49, 23, 7, 49, 49, 49};
    int lower = 1129;
    int upper = 999395795;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 886774;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> a = {2, 82, 2, 82, 41, 62, 31, 41, 82, 3, 41, 6, 41, 31, 93, 6, 93, 31, 41, 6, 31, 93, 3, 1, 2, 62, 82, 2, 31, 62, 62, 3, 62, 1, 62, 6, 82, 2, 31, 62, 2, 93, 3, 82, 93, 62, 3};
    int lower = 7627;
    int upper = 999395794;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 131050;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 9932;
    int upper = 999395795;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 999385864;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> a = {3, 47, 1, 6, 4, 1, 6, 12, 3, 3, 3, 4, 2, 3, 1, 6};
    int lower = 564;
    int upper = 999395795;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1771978;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> a = {7, 21, 3, 21, 3, 21, 3, 7, 3, 21, 21, 21, 21, 3, 3, 1, 7, 3, 21, 3, 21, 21, 21, 21, 3, 3, 1, 7, 7, 3, 21, 3, 7, 3, 1, 21, 1, 21, 1, 3, 1, 21, 21, 7, 7, 3, 7};
    int lower = 3128;
    int upper = 999395798;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 47590128;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> a = {20, 28, 8, 35, 14, 10, 80, 49, 20, 10, 10, 14, 49, 14, 1, 56, 16, 40, 2, 5, 40, 49, 20, 8, 35, 80, 16, 10, 49, 7, 10, 56, 16, 32, 80, 10, 14, 20, 28, 20, 8, 1, 20, 20, 1, 5, 70, 56};
    int lower = 7838;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 127473;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> a = {1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2};
    int lower = 4665;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 499695566;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> a = {67, 85, 67, 1, 85, 67, 5, 17, 17, 5, 85, 67, 1, 5, 17, 67, 1, 5, 85, 67, 67, 67, 17};
    int lower = 5696;
    int upper = 999395798;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 175485;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> a = {3, 3, 9, 1, 1, 9, 3, 3, 9, 1, 1, 1, 1, 9, 1, 3, 1, 9, 3, 1, 9, 1, 9, 9, 1, 9, 1, 9, 9, 3, 3, 9};
    int lower = 4420;
    int upper = 999395798;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 111043486;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> a = {2, 4, 1, 4, 1, 2, 2, 4, 2, 2, 1, 2, 1, 4, 2, 2, 2, 1, 2, 1, 2, 2, 4, 2, 2, 4, 2, 2, 1, 4, 2, 2, 4, 4, 1, 4, 2, 4, 2, 1};
    int lower = 892;
    int upper = 999395797;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 249848727;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> a = {31, 31, 1, 31, 17, 31, 1, 17};
    int lower = 528;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1896385;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 6027;
    int upper = 999395795;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 999389769;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> a = {1, 3, 9, 1, 1, 9, 1, 3, 3, 9, 9, 9, 9, 3, 9, 1, 3, 3, 1, 1, 9, 3, 1, 1, 9, 3, 3, 1, 1, 3, 9, 3, 1, 3, 1, 1, 3, 3, 1, 9, 3, 1, 9};
    int lower = 2547;
    int upper = 999395794;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 111043695;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 4001;
    int upper = 999395798;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 999391798;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> a = {3, 3, 9, 9, 9, 79, 9, 9, 79, 9, 1, 1, 79, 3, 1, 3, 9, 1, 9, 79, 79, 79, 79};
    int lower = 711;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1405619;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> a = {1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2};
    int lower = 7263;
    int upper = 999395798;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 499694268;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> a = {6, 6, 1, 1, 2, 6, 3, 3, 2, 3, 6, 3, 1, 6, 3, 3, 2, 6, 1, 6, 2, 1, 1, 1, 3, 1, 6, 2, 2, 2, 2, 3, 2, 2, 6, 6, 2, 2, 6, 6, 3, 6, 3, 1, 3, 3, 2};
    int lower = 4973;
    int upper = 999395795;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 166565137;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> a = {1, 14, 6, 1, 14, 3, 6, 14, 14, 14, 3, 42, 6, 3, 21, 7, 7, 21, 3, 6, 3, 6, 14, 42, 21, 3, 3, 6, 7, 7, 14, 3, 7, 2, 2, 3, 42, 1};
    int lower = 5502;
    int upper = 999395794;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 23795007;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> a = {47, 31, 1, 31, 31, 31, 31, 47, 31, 1, 47, 31, 31, 47, 47, 31, 1, 47, 1, 31, 1, 1, 1, 47, 1, 47, 1, 47, 31, 31, 31, 47, 1, 47, 47, 1, 47, 47, 31, 47};
    int lower = 1455;
    int upper = 999395794;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 685927;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> a = {5, 5, 5, 1, 1, 5, 1, 5, 5, 5, 1, 1, 1, 1, 5, 1, 1, 5, 1, 1, 5, 1, 1, 1, 5, 1, 1};
    int lower = 813;
    int upper = 999395795;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 199878997;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> a = {2, 1, 3, 3, 2, 1, 3, 1, 6, 1, 3, 6, 6, 2, 1, 6, 6, 6, 1, 6, 1, 6};
    int lower = 5033;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 166565128;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> a = {4, 52, 1, 78, 13, 24, 3, 39, 13, 12, 24, 44, 44, 11, 12, 13, 44, 33, 22, 2, 24};
    int lower = 3433;
    int upper = 999395797;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 291198;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 2449;
    int upper = 999395797;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 999393349;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> a = {10, 2, 10, 30, 10, 6, 2, 10, 1, 6, 3, 6, 5, 1, 2, 1, 3, 1, 2, 6, 1, 15, 6, 10, 15, 10, 5, 15, 30, 2, 5, 3, 10, 30, 2, 3, 15, 30};
    int lower = 4468;
    int upper = 999395796;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 33313045;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 8537;
    int upper = 999395794;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 999387258;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> a = {3, 3, 3, 29, 29, 29, 87, 87, 87, 29, 29, 1, 1, 29, 3, 1, 1, 3};
    int lower = 8962;
    int upper = 999395794;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 11487204;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> a = {3, 17, 39, 51, 21, 34, 6, 1, 78, 6, 39, 26, 2, 6, 1, 14, 1, 42, 17, 51, 7, 21, 7, 91, 78, 78, 13, 34, 42, 26, 21, 17, 2, 1, 91, 3, 7, 13, 39, 6, 17, 26, 34, 3, 39, 6, 6};
    int lower = 9281;
    int upper = 999395797;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 107670;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> a = {13, 13, 1, 1, 13, 13, 1, 1, 1, 13, 13, 1, 13, 1, 13, 13, 13, 13, 13, 1, 1, 13, 1, 1, 1, 1, 1, 13, 13, 13, 1, 1, 13, 1, 13, 1, 1, 13, 1, 13, 1};
    int lower = 9606;
    int upper = 999395795;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 76875861;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> a = {7, 1, 7, 1, 7, 1, 7, 1, 7, 7, 7, 7, 7};
    int lower = 7;
    int upper = 999395798;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 142770828;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> a = {73, 43, 89, 83, 47};
    int lower = 621;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> a = {53, 2, 73, 23, 13, 67};
    int lower = 595;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> a = {2, 23, 73, 17, 67, 89, 83};
    int lower = 721;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> a = {13, 17, 11, 7};
    int lower = 680;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 58764;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> a = {37, 47, 3, 83, 43, 71, 41};
    int lower = 265;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> a = {5, 7, 47, 29, 43, 59, 53};
    int lower = 798;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> a = {61, 19, 17, 5, 13, 2, 59, 71};
    int lower = 701;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> a = {47, 29, 7, 61, 89, 73, 2};
    int lower = 192;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> a = {83, 23, 53, 47, 13, 2, 11};
    int lower = 457;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> a = {73, 67, 89, 29, 5, 17, 53};
    int lower = 177;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> a = {37, 97, 13, 23, 5, 17};
    int lower = 916;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> a = {43, 2, 1, 4, 1, 43, 1, 47, 2, 47, 5, 4, 25, 50, 4, 4, 47, 43, 25};
    int lower = 275664398;
    int upper = 304766799;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> a = {13, 1, 59, 1, 67, 37, 59, 13, 13, 13, 37, 1, 1, 37, 13, 37, 59, 1, 59};
    int lower = 22816715;
    int upper = 804289240;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 412;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> a = {13, 19, 23, 23, 1, 13, 1, 26, 23, 23, 1, 23, 1, 1, 4, 52, 23, 19, 13, 4, 19, 19, 1, 23, 1, 4, 1, 23};
    int lower = 468091675;
    int upper = 734280610;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 11714;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> a = {3, 71, 71, 71, 57, 19, 3, 3, 1, 1, 57, 1, 1, 57, 19, 19, 1, 1, 57, 71, 59, 57, 57, 1, 59, 19, 59, 71, 57, 1, 3, 19, 59, 71, 3};
    int lower = 362218639;
    int upper = 889906969;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2210;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> a = {3, 29, 58, 9, 29, 2, 29, 1, 67, 3, 1, 1, 2, 3, 2, 67, 3, 1, 1, 1, 87, 29, 87, 3, 58, 1, 3, 2, 2, 67, 29, 9, 67, 1, 3, 4, 2, 1, 18, 87, 12, 3, 1, 2, 1, 1, 3};
    int lower = 374851331;
    int upper = 826785360;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 6462;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> a = {7, 1, 1, 83, 83, 7, 67, 67};
    int lower = 710339898;
    int upper = 949779873;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 6151;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> a = {19, 1, 19, 7, 1, 7, 7, 1, 5, 1, 1, 71, 7, 5, 1, 35, 95, 1, 7, 5, 71, 7, 49, 95, 7, 1, 7, 71, 95, 49, 19, 5, 7, 19};
    int lower = 70397563;
    int upper = 145422200;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> a = {23, 19, 1, 23, 13, 1, 23, 13, 1, 23, 23, 23, 23, 23, 1, 23, 13, 23, 89, 89, 89, 89, 89, 89, 19, 13, 1, 89, 13, 1, 23, 1};
    int lower = 118818115;
    int upper = 872175524;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1490;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> a = {31, 31, 17, 31, 17, 1, 79, 97, 1, 1, 1, 97, 1, 79, 79, 1, 1, 17, 1, 97, 31, 31, 79, 1, 79, 97, 97, 1, 1, 97, 1};
    int lower = 201920052;
    int upper = 448262510;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> a = {82, 17, 17, 6, 17, 82, 82, 51, 12, 41, 3, 1, 1, 3, 41, 41, 2};
    int lower = 105001654;
    int upper = 725543545;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 74193;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> a = {9, 19, 1, 1, 19, 57, 47, 3, 1, 1, 1, 97, 19, 19, 9, 19, 97, 19, 97, 57, 19, 1, 1, 47, 1, 47, 1, 1, 57, 1, 97, 97, 3, 1, 3, 47, 1};
    int lower = 19489727;
    int upper = 530900111;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 656;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> a = {2, 1, 86, 2, 73, 1, 2, 73, 73, 86, 1, 1, 61, 1, 61, 1, 43, 43, 2, 73, 1, 1, 73, 1, 73, 1, 1, 1, 1, 1, 1, 61, 4, 4, 1, 61, 61, 2, 73, 1, 1, 61, 1, 4, 1, 73};
    int lower = 2297747;
    int upper = 744470352;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> a = {1, 1, 47, 71, 1, 1};
    int lower = 223058428;
    int upper = 267967776;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 13459;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> a = {71, 53, 1, 7, 7, 61, 1, 7, 71, 71, 49, 71, 61, 49, 71, 71, 1, 49, 49, 71, 61, 7, 1};
    int lower = 742342062;
    int upper = 753589671;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> a = {97, 29, 23, 29, 1, 1, 23, 1, 23, 73, 29, 1, 1, 1, 29, 97, 29, 73, 23};
    int lower = 566763240;
    int upper = 576209293;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> a = {37, 43, 37, 79, 79, 43, 43};
    int lower = 193938125;
    int upper = 193938126;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> a = {1, 1, 67, 89, 1, 1, 67, 1, 1, 73, 1, 89, 67, 1, 89, 67, 1, 1, 73, 1, 73, 73};
    int lower = 538029563;
    int upper = 538029564;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> a = {89, 1, 19, 3, 19, 19, 83, 3, 57, 3, 1, 89, 83, 1, 19, 89, 19, 89, 83, 89, 3, 1, 83, 1};
    int lower = 535587050;
    int upper = 536008109;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> a = {1, 67, 1, 67};
    int lower = 118926945;
    int upper = 118927011;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> a = {47, 47, 89, 1, 89, 1, 43, 89, 43, 23, 43, 47, 47, 89, 1, 1};
    int lower = 943233037;
    int upper = 951507011;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> a = {59, 53, 1, 53, 53, 2, 43, 1, 59, 59, 59, 1, 4, 4, 1, 1, 1, 53, 43, 2, 43, 2, 1, 1, 53, 2, 1};
    int lower = 400693778;
    int upper = 400693779;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> a = {53, 1, 89, 53, 4, 53, 2, 2, 1, 4, 97, 97, 2, 2, 53, 2, 53, 1, 53, 1, 4, 2, 2, 89, 1, 89, 97, 2};
    int lower = 139094896;
    int upper = 139094898;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> a = {47, 41, 1, 1, 41, 89, 47, 47, 7, 41, 7, 89, 1, 41, 1, 41, 1, 7, 41, 89, 89, 89, 1, 89, 47, 89, 41, 89, 7};
    int lower = 22809900;
    int upper = 24010419;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> a = {37, 4, 37, 74, 1, 89, 37, 71, 37, 37, 37, 89, 1, 2, 37, 71, 37, 1, 71, 2, 1, 1, 71, 37, 1, 71, 4, 1, 1, 2, 1, 71, 1, 89, 2, 1};
    int lower = 454513033;
    int upper = 455448243;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> a = {1, 3, 1, 3, 1, 47, 1, 3, 3, 3, 3, 1, 47, 1, 47, 3, 3, 3, 61, 1, 1, 3, 1, 29, 3, 3, 61, 1, 47};
    int lower = 393848392;
    int upper = 394097819;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> a = {97, 37, 1, 59, 97, 79, 1, 37, 97, 37, 59, 1, 79, 79, 59, 37, 97, 1, 97, 1, 37, 1, 59, 79, 1, 59, 79, 37, 1, 37, 37, 1, 1, 59, 1, 37, 1};
    int lower = 16728330;
    int upper = 33456657;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> a = {1, 1, 1, 79, 79, 1, 3, 1, 1, 51, 1, 1, 89, 89, 1, 1, 79, 17, 79, 1, 3, 1, 89, 1, 79, 79, 51, 1, 17, 79, 1, 9, 1, 9, 3, 9};
    int lower = 259254064;
    int upper = 260329805;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> a = {1, 67, 1, 2, 2, 4, 67, 82, 67, 4, 17, 67, 67, 67, 1, 82, 1, 1, 1, 41, 67, 34, 17, 2, 67, 1, 34, 34, 1, 1, 41, 2, 17, 1, 1, 1, 34, 67, 2, 1, 41, 1, 17, 67, 4};
    int lower = 150370781;
    int upper = 150557575;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 49};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> a = {2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> a = {1, 2, 3};
    int lower = 5;
    int upper = 15;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> a = {1, 1, 1};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int lower = 1;
    int upper = 2;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> a = {5};
    int lower = 5;
    int upper = 15;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> a = {2};
    int lower = 2000000;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 499000001;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> a = {1, 5, 6, 7, 9};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 3174603;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int lower = 12;
    int upper = 200000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> a = {1};
    int lower = 1;
    int upper = 2000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> a = {12, 30};
    int lower = 200;
    int upper = 600;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> a = {1};
    int lower = 1999999999;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> a = {3};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 666666666;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 49, 61, 67, 71, 79, 83};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> a = {1, 1, 1, 2, 3};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 333333333;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> a = {1, 2, 4, 8, 16, 32, 64};
    int lower = 1;
    int upper = 1;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> a = {97, 91, 89, 87, 83, 79, 73, 71, 67, 61, 59, 57, 53, 49, 43, 41, 37, 31, 29, 23, 17, 13, 11, 7, 5, 3, 2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> a = {30, 60, 75, 80};
    int lower = 6;
    int upper = 3000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> a = {3, 4};
    int lower = 15;
    int upper = 15;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> a = {64, 81, 25, 49, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> a = {4, 6};
    int lower = 6;
    int upper = 18;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> a = {6, 10, 15};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 66666666;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> a = {1, 1, 1};
    int lower = 1;
    int upper = 1999999999;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> a = {39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int lower = 1;
    int upper = 100000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 97};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> a = {64, 81, 25, 49, 11, 13, 17, 19, 23, 27, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
    int lower = 1;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> a = {100, 100, 100, 100, 100, 100};
    int lower = 100;
    int upper = 200;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> a = {4, 8};
    int lower = 15;
    int upper = 17;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> a = {5};
    int lower = 7;
    int upper = 7;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> a = {2, 4, 6, 7};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 23809523;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> a = {3};
    int lower = 3;
    int upper = 8;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> a = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> a = {2, 6, 9, 15, 56, 80, 90, 100};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 79365;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> a = {5};
    int lower = 14;
    int upper = 24;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> a = {1, 1, 1, 2, 2, 2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> a = {1, 2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> a = {64, 81, 25, 49, 11, 13, 17, 19, 23, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> a = {12, 18};
    int lower = 1;
    int upper = 50;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> a = {2, 4};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> a = {1, 2, 3};
    int lower = 6;
    int upper = 15;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 793650;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> a = {2};
    int lower = 50000;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 499975001;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> a = {1, 1, 2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> a = {100, 99, 97, 89, 100};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> a = {1};
    int lower = 10;
    int upper = 100;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> a = {23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 2, 3, 5, 7, 11, 13};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> a = {2};
    int lower = 3;
    int upper = 5;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 49, 51, 53, 59};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> a = {12, 16, 20};
    int lower = 240;
    int upper = 960;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> a = {1, 2, 3};
    int lower = 6;
    int upper = 6;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> a = {1};
    int lower = 5;
    int upper = 10;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> a = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> a = {6};
    int lower = 5;
    int upper = 12;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 32, 33, 31};
    int lower = 1;
    int upper = 10000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> a = {1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 4, 5, 6, 4, 5, 6, 4, 5, 6, 21, 22, 23, 24, 7, 8, 9, 7, 8, 9, 25, 26, 27, 28, 29, 30, 33, 10, 8};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> a = {1};
    int lower = 100;
    int upper = 20000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 19901;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> a = {2};
    int lower = 3;
    int upper = 4;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> a = {67};
    int lower = 67;
    int upper = 134;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> a = {1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 83};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> a = {2, 3, 4, 5, 6, 7, 8, 9, 11, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> a = {100, 99, 98, 97, 96, 95};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> a = {4, 8};
    int lower = 50000;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 124993751;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> a = {4, 6, 14, 21};
    int lower = 1111;
    int upper = 1999999999;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 23809510;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> a = {1, 2, 3};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 333333333;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 67};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> a = {5};
    int lower = 4;
    int upper = 10;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> a = {4, 6};
    int lower = 1;
    int upper = 200000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 16666;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> a = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 57, 59, 61, 67, 71, 73, 79, 81, 83, 85, 87, 89, 91, 97};
    int lower = 2;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> a = {99, 66, 13};
    int lower = 84942;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 776968;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 32, 33, 31};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> a = {3};
    int lower = 9;
    int upper = 9;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> a = {8, 9, 5, 7, 11, 13, 17, 19, 37};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> a = {11, 14, 10, 22, 11, 15, 28, 22, 30, 24, 28, 12, 6, 19, 10, 28, 4, 13, 22, 18, 15, 10, 16, 15, 12, 23, 28, 3, 20, 26, 12, 13, 22, 27};
    int lower = 1614923534;
    int upper = 1984829105;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> a = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> a = {2, 3};
    int lower = 6;
    int upper = 12;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> a = {87, 89, 91, 93, 73};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> a = {8, 12};
    int lower = 23;
    int upper = 96;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int lower = 2;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> a = {23, 34, 45, 45, 56, 67, 67, 78, 45, 100};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> a = {6, 4};
    int lower = 1;
    int upper = 2000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 166666;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> a = {1, 1, 1};
    int lower = 1999999999;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 27, 8};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> a = {78, 60, 60, 46, 57, 75, 8, 49, 42};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> a = {97, 89, 83, 79, 73, 71, 67, 61, 59, 53, 47, 43, 41, 37, 31, 29, 23, 19, 17, 13, 11, 7, 5, 3, 64, 81, 99, 25, 49, 81, 100};
    int lower = 12312;
    int upper = 999999999;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> a = {4, 6};
    int lower = 2;
    int upper = 1000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> a = {2};
    int lower = 8;
    int upper = 10;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> a = {64, 81, 25, 49, 11, 23};
    int lower = 2000000000;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> a = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 24, 26, 90, 100, 50, 60, 25, 55};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 555;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> a = {90, 91, 92, 93, 94, 95, 96, 97, 98, 3};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> a = {99};
    int lower = 1999999241;
    int upper = 1999999946;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> a = {91, 97, 89, 83, 79};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> a = {9, 91};
    int lower = 1;
    int upper = 20000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 24420;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> a = {2};
    int lower = 127;
    int upper = 129;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> a = {3};
    int lower = 4;
    int upper = 8;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> a = {1};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> a = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70};
    int lower = 1;
    int upper = 1000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> a = {4, 6};
    int lower = 1;
    int upper = 1000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 83333333;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> a = {8};
    int lower = 7;
    int upper = 9;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> a = {6, 9};
    int lower = 1;
    int upper = 111;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> a = {97, 91, 89, 83, 79, 73, 71, 67, 61, 59, 53, 47, 43, 41, 37, 31, 29, 23};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> a = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 51, 57, 59, 61, 67, 69, 71, 73, 79, 89, 83, 91, 97};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> a = {16, 20};
    int lower = 10;
    int upper = 100;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> a = {2, 3, 4};
    int lower = 5;
    int upper = 15;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> a = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 23, 25, 25};
    int lower = 1;
    int upper = 2000000000;
    CommonMultiples* pObj = new CommonMultiples();
    clock_t start = clock();
    int result = pObj->countCommMult(a, lower, upper);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7459080&rd=10670&pm=7408
********************************************************************************
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
#include <queue>
 
using namespace std;
 
typedef long long LL;
typedef vector <int> vi;
typedef vector <LL> vll;
typedef vector <string> vs;
typedef vector <double> vd;
 
class CommonMultiples {
public:
  int countCommMult(vector <int>, int, int);
};
 
LL gcd(LL a, LL b)
{
  if (b == 0) return a;
  return gcd(b,a%b);
}
 
int CommonMultiples::countCommMult(vector <int> a, int lower, int upper) {
  LL lcm;
  int i;
  for (i=0; i<a.size(); i++) 
  {
    if (i == 0) lcm = a[i];
    else
    {
      lcm = (lcm * a[i])/gcd(lcm,a[i]);
    }
    if (lcm > upper) return 0;
  }
  
  return upper/lcm - (lower-1)/lcm;
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/