/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10701
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

class SkewedPerspective {
public:
    int countThem(vector<int> cubes, int B, int w);
};

int SkewedPerspective::countThem(vector<int> cubes, int B, int w) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cubes = {1, 1};
    int B = 1;
    int w = 2;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cubes = {1};
    int B = 1;
    int w = 2;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cubes = {1};
    int B = 3;
    int w = 2;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cubes = {};
    int B = 5;
    int w = 5;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cubes = {1};
    int B = 5;
    int w = 5;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cubes = {7, 7, 7};
    int B = 0;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 301226488;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cubes = {50};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 665146241;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cubes = {};
    int B = 0;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
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
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 199658209;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cubes = {9};
    int B = 2;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 466;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cubes = {5, 14, 13};
    int B = 7;
    int w = 3;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 781975497;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int B = 2;
    int w = 5;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 463846336;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cubes = {1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    int B = 0;
    int w = 1;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 54745760;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1};
    int B = 8;
    int w = 3;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 714102776;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cubes = {6, 8, 6, 6, 11, 10};
    int B = 7;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 596093234;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cubes = {4, 3, 4, 2, 3, 2, 6};
    int B = 6;
    int w = 3;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 961213759;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cubes = {};
    int B = 9;
    int w = 2;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cubes = {1, 1, 5, 2, 1, 1};
    int B = 8;
    int w = 2;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 749928331;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cubes = {1, 1, 1, 2, 1, 2, 2, 1, 2};
    int B = 0;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 85424462;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cubes = {1, 4, 4, 2, 2, 5, 3, 2, 4, 5, 9};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 980637931;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cubes = {1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int B = 6;
    int w = 3;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 708257516;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cubes = {1, 2, 3, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2};
    int B = 1;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 104938810;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cubes = {11, 9};
    int B = 7;
    int w = 1;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 623714550;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cubes = {4, 4, 3, 3, 4, 2, 1, 1, 5, 2, 2};
    int B = 9;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 146505796;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cubes = {3, 6, 3, 5, 3, 3, 8, 5, 3, 3};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 641146404;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cubes = {1, 1, 1, 2, 1, 1, 1};
    int B = 9;
    int w = 2;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 711012050;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cubes = {30};
    int B = 1;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 766;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cubes = {1, 1, 2, 1, 2, 1};
    int B = 0;
    int w = 4;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 28394;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cubes = {14, 19};
    int B = 7;
    int w = 5;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 343636261;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cubes = {9, 6};
    int B = 0;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 19446;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cubes = {7, 5};
    int B = 0;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 3001;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cubes = {15};
    int B = 3;
    int w = 1;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 4843;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cubes = {3, 5, 3, 4, 3, 2, 2, 4, 7, 1, 2, 2};
    int B = 8;
    int w = 4;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 533545918;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cubes = {1};
    int B = 5;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cubes = {1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1};
    int B = 1;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 213715583;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cubes = {3, 1, 1, 1, 1};
    int B = 4;
    int w = 5;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 1329373;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cubes = {4, 5, 3, 7, 4, 1, 4, 6, 3};
    int B = 5;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 321440342;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int B = 4;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 693702988;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cubes = {1, 2, 1, 1, 1, 1, 1, 2, 3, 2, 1, 1, 2, 1, 1, 1, 1};
    int B = 0;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 884124802;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 2, 1, 4, 3, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 3, 1, 2, 2, 4, 1, 2, 2, 2, 1, 1};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 381101131;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cubes = {12, 7, 9, 4, 5, 4, 6};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 815292690;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1};
    int B = 9;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 255805890;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cubes = {5, 4, 6, 4, 3, 6, 3, 8, 5, 5};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 86736258;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cubes = {1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 48780676;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cubes = {2, 3, 2, 2, 2, 2, 2, 2, 1, 3, 2, 1, 2, 1, 1, 1, 4, 3, 2, 2, 2, 3, 1, 3};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 613817336;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cubes = {2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 3, 2, 1, 1, 3, 5, 3, 1, 2, 3, 2, 4};
    int B = 9;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 391085551;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cubes = {48};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 74306940;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cubes = {5, 5, 4, 6, 5, 3, 2, 2, 3, 2, 2, 3, 3, 3};
    int B = 9;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 873288870;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cubes = {5, 5, 3, 4, 6, 5, 4, 5, 3, 7};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 893462985;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cubes = {1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 2};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 116041219;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cubes = {9, 2, 5, 7, 3, 7, 5, 4, 5};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 294257410;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cubes = {4, 4, 5, 5, 3, 1, 7, 4, 4, 2, 5, 3};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 536269216;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 635889977;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cubes = {1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 666012396;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cubes = {1, 2, 2, 2, 1, 2, 3, 2, 1, 4, 1, 2, 3, 2, 3, 2, 4, 1, 2, 3, 2, 1, 2, 2};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 944297422;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cubes = {2, 2, 4, 6, 4, 6, 6, 4, 4, 3, 7};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 90058018;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cubes = {4, 6, 1, 6, 3, 6, 6, 3, 3, 3, 2, 6};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 730997197;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cubes = {1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 3, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 3, 1, 2, 2, 1, 2, 1, 2, 2};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 515614360;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cubes = {4, 3, 3, 5, 3, 2, 2, 3, 2, 5, 7, 4, 2, 3};
    int B = 10;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 285724132;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cubes = {19, 15, 13};
    int B = 9;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 837858978;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cubes = {3, 1, 3, 1, 1, 2, 3, 1, 2, 3, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 3, 2, 2, 1, 2, 1, 3};
    int B = 10;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 91107239;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cubes = {2, 1, 2, 2, 1, 3, 3, 2, 2, 1, 2, 2, 2, 3, 1, 1, 3, 3, 2, 2, 1, 3, 2, 1, 2};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 153001281;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cubes = {3, 5, 3, 4, 5, 8, 3, 2, 4, 5, 7};
    int B = 9;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 543039460;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cubes = {2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 3, 1, 1, 2, 3, 1, 2, 2, 1, 1};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 660743297;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cubes = {5, 3, 3, 4, 2, 3, 2, 1, 2, 1, 6, 5, 1, 3, 6, 3};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 697332112;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 3, 2, 1, 2, 1, 1, 2, 1, 2, 3, 2, 2, 2, 2, 3, 2, 1};
    int B = 10;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 928264524;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cubes = {1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 71101185;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cubes = {1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 2, 1, 1, 1};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 544298185;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 612335076;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cubes = {13, 15, 20};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 928928653;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cubes = {9, 12, 16, 12};
    int B = 10;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 434969858;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cubes = {49};
    int B = 9;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 866142378;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cubes = {11, 12, 8, 11, 8};
    int B = 9;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 723160955;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cubes = {23, 24};
    int B = 10;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 998444265;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cubes = {48};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 54212496;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cubes = {47};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 295134152;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cubes = {14, 8, 15, 13};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 947862298;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cubes = {17, 30};
    int B = 9;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 266773690;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cubes = {24, 23};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 402659957;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cubes = {22, 27};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 340209833;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cubes = {19, 22, 7};
    int B = 9;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 889690034;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cubes = {12, 17, 13, 6};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 887875834;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cubes = {48};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 74306940;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cubes = {25, 23};
    int B = 9;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 223700040;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cubes = {21, 28};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 323740073;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cubes = {9, 12, 11, 17};
    int B = 10;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 258095153;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cubes = {47};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 295134152;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cubes = {47};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 600710387;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cubes = {20, 29};
    int B = 9;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 629629601;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cubes = {10, 11, 8, 13, 8};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 8860112;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cubes = {18, 15, 14};
    int B = 8;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 740007065;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cubes = {5, 16, 11, 9, 6};
    int B = 10;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 950427230;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cubes = {23, 25};
    int B = 9;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 223696456;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cubes = {8, 7, 8, 14, 12};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 418822026;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cubes = {13, 10, 10, 8, 7};
    int B = 9;
    int w = 6;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 263851329;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cubes = {49};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 949155103;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cubes = {47};
    int B = 9;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 651924767;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cubes = {23, 24};
    int B = 8;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 402660085;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cubes = {15, 14, 18};
    int B = 8;
    int w = 7;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 266834995;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cubes = {1};
    int B = 2;
    int w = 2;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cubes = {1};
    int B = 1;
    int w = 1;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cubes = {10, 8, 10, 5, 3, 3, 1, 2, 3, 4};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 627459486;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> cubes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 199658209;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> cubes = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 839270363;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> cubes = {1, 2, 3, 1, 1, 2, 1, 2, 3, 1, 1, 2, 1, 2, 3, 1, 1, 2, 1, 2, 3, 1, 1, 2, 1, 2, 3, 1, 1, 2};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 7792819;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> cubes = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int B = 10;
    int w = 8;
    SkewedPerspective* pObj = new SkewedPerspective();
    clock_t start = clock();
    int result = pObj->countThem(cubes, B, w);
    clock_t end = clock();
    delete pObj;
    int expected = 901388560;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=14729&pm=10701
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <queue>
#include <climits>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
typedef unsigned long long ull;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class SkewedPerspective
{
public:
    int countThem(vector <int> cubes, int B, int w);
};
 
#define MOD 1000000007
 
static vi cubes;
static int w;
static int C;
static int B;
static int choose[2501][2501];
static int pccache[51][2501];
static int rcache[51][11][11][81][9][2];
 
static int pick_cols(int b, int col)
{
    int &ans = pccache[b][col];
    if (ans >= 0)
        return ans;
 
    if (b == SZ(cubes))
        return ans = (col == 0);
    else
    {
        ans = 0;
        for (int i = 0; i <= min(col, cubes[b]); i++)
        {
            ans = (ans + (ll) choose[col][i] * (ll) pick_cols(b + 1, col - i)) % MOD;
        }
        return ans;
    }
}
 
static ll recurse(int col, int half, int full, int gaps, int oddgaps, bool endhalf)
{
    int h = col + half + 2 * full;
    if (col + oddgaps > C)
        return 0;
    if (half + full > B)
        return 0;
    if (col + 2 * (half + full) + gaps > 2 * B + C)
        return 0;
 
    int &cached = rcache[col][half][full][gaps][oddgaps][endhalf];
    if (cached >= 0)
        return cached;
 
    ll ans = pick_cols(0, col);
    // cout << col << ' ' << half << ' ' << full << ' ' << gaps << ' ' << oddgaps << ' ' << endhalf << ' ' << ans << endl;
    if (half < w - 1 && half + full < B && !endhalf)
    {
        ans += recurse(col, half + 1, full, gaps + h - 1, oddgaps + ((h - 1) & 1), true);
    }
    if (half + full < B)
    {
        ans += recurse(col, half, full + 1, gaps, oddgaps, h != 0);
    }
    if (col < C)
    {
        ans += recurse(col + 1, half, full, gaps, oddgaps, false);
    }
    ans %= MOD;
    cached = ans;
    return ans;
}
 
int SkewedPerspective::countThem(vector <int> cubes, int B, int w)
{
    for (int i = 0; i <= 2500; i++)
    {
        choose[i][0] = choose[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            choose[i][j] = choose[i - 1][j - 1] + choose[i - 1][j];
            if (choose[i][j] >= MOD)
                choose[i][j] -= MOD;
        }
    }
    memset(pccache, -1, sizeof(pccache));
    memset(rcache, -1, sizeof(rcache));
 
    ::cubes = cubes;
    ::B = B;
    ::w = w;
    C = accumulate(RA(cubes), 0);
    ll ans = (recurse(0, 0, 0, 0, 0, true) - 1) % MOD;
    if (ans < 0) ans += MOD;
    return ans;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/