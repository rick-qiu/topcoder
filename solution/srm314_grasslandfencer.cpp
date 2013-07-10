/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6467
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

class GrasslandFencer {
public:
    double maximalFencedArea(vector<int> fences);
};

double GrasslandFencer::maximalFencedArea(vector<int> fences) {
    double ret;
    return ret;
}


int test0() {
    vector<int> fences = {3, 4, 5, 6, 7, 8, 9};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 36.754383146489694;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> fences = {1, 2, 4, 8};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> fences = {7, 4, 4, 4};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 6.928203230275509;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> fences = {46, 40, 84, 27};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 537.3680652029855;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> fences = {31, 44, 83, 44};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 638.2820203483724;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> fences = {34, 46, 79, 18};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 261.4478915577634;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> fences = {36, 26, 19, 63, 28};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 361.68356335338217;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> fences = {78, 30, 41, 38, 18};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 545.3686253351947;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> fences = {95, 59, 37, 33, 11};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 554.3484351019672;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> fences = {51, 10, 97, 14, 47, 39};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 871.9559550229587;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> fences = {29, 19, 62, 21, 36, 2};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 304.47988439304163;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> fences = {49, 5, 23, 39, 88, 42};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 788.6190461813612;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> fences = {83, 10, 10, 22, 18, 80, 10};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 923.3003824046832;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> fences = {21, 16, 46, 66, 63, 17, 37};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 1516.5175802961414;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> fences = {35, 75, 30, 95, 79, 62, 26};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 3256.099913851602;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> fences = {31, 80, 23, 71, 77, 26, 53, 6};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 2775.998799405252;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> fences = {36, 79, 19, 9, 56, 18, 98, 19};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 2361.8707096987278;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> fences = {59, 59, 24, 3, 29, 50, 79, 23};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 1999.133833435806;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> fences = {35, 96, 1, 40, 93, 92, 48, 47, 89};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4656.6253411395655;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> fences = {12, 18, 86, 1, 31, 14, 15, 61, 36};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 1025.1328565808249;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> fences = {89, 26, 100, 29, 28, 55, 69, 2, 8};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 3325.864736348445;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> fences = {25, 11, 7, 7, 66, 63, 59, 66, 28, 34};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 2194.9852819506395;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> fences = {69, 31, 39, 10, 13, 93, 97, 93, 26, 21};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4299.274537154505;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> fences = {32, 63, 84, 70, 60, 76, 31, 21, 91, 74};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5329.139041375465;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> fences = {33, 85, 79, 81, 86, 32, 82, 66, 27, 67, 34};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5979.244334419546;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> fences = {26, 30, 52, 17, 83, 27, 92, 70, 92, 60, 89};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5971.743274521125;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> fences = {99, 12, 60, 27, 2, 28, 42, 55, 95, 15, 14};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 3415.878271852212;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> fences = {13, 20, 75, 15, 100, 33, 55, 18, 21, 1, 82, 23};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 3387.8236744757405;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> fences = {18, 57, 22, 100, 42, 38, 44, 42, 40, 36, 19, 36};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 1983.5036288151425;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> fences = {52, 90, 29, 58, 5, 12, 11, 85, 91, 96, 18, 71};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5784.539696567363;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> fences = {35, 41, 64, 71, 47, 19, 37, 15, 76, 17, 45, 90, 87};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5340.800167856549;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> fences = {70, 98, 53, 28, 69, 12, 4, 74, 99, 27, 1, 25, 70};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5784.5545450188965;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> fences = {78, 49, 6, 85, 60, 72, 100, 38, 7, 14, 54, 77, 8};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 6170.687321219386;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> fences = {90, 69, 84, 1, 97, 14, 79, 92, 13, 94, 18, 3, 24, 41};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 7026.020050110176;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> fences = {8, 29, 73, 97, 74, 7, 27, 8, 70, 51, 46, 15, 94, 51};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5641.464086930983;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> fences = {34, 41, 91, 47, 4, 5, 14, 18, 18, 7, 84, 5, 74, 60};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4010.0029482647806;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> fences = {72, 49, 63, 12, 66, 6, 58, 19, 18, 73, 61, 52, 53, 81, 31};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 5591.935769507378;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> fences = {19, 95, 13, 83, 100, 75, 40, 14, 89, 69, 10, 23, 81, 30, 13};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 7021.362282513253;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> fences = {52, 17, 37, 19, 58, 96, 45, 49, 2, 35, 19, 9, 80, 58, 65};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4863.0840473486005;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> fences = {21, 72, 15, 55, 16, 44, 54, 63, 69, 35, 75, 69, 76, 70, 50, 81};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 7512.322360676162;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> fences = {32, 17, 99, 92, 84, 42, 1, 68, 17, 91, 4, 35, 10, 69, 43, 18};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 6888.94807319841;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> fences = {60, 69, 84, 9, 42, 51, 61, 10, 18, 64, 37, 88, 7, 58, 89, 44};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 7171.136238054464;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> fences = {98, 99, 100, 97, 46, 47};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4450.281542411054;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> fences = {1, 2, 3, 5, 8, 13, 14, 14, 14};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 86.1617850785388;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> fences = {21, 72, 15, 55, 16, 44, 54, 63, 69, 35, 75, 69, 76, 70, 50, 81};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 7512.322360676162;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> fences = {1, 11, 11, 11, 11, 10};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 54.48411009962254;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> fences = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1650635094610964;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> fences = {27, 50, 78, 82, 82, 82};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 3005.1672676600683;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> fences = {7, 19, 26, 26, 27, 29};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 339.00335608860416;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> fences = {10, 10, 20, 20, 21, 21};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 198.80497392704112;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> fences = {4, 90, 97, 5, 97, 98, 95};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4111.888641079868;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> fences = {21, 72, 11, 55, 16, 44, 54, 99, 69, 35, 71, 69, 76, 70, 50, 81};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 8070.4353454215725;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> fences = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 18760.274805567216;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> fences = {3, 9, 6, 18, 13, 24, 1, 30, 25, 94, 7, 34, 56, 12, 24, 15};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 815.9852508137787;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> fences = {100, 100, 90, 90, 45, 45};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4153.005036881826;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> fences = {7, 4, 4, 4};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 6.928203230275509;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> fences = {1, 2, 3, 3, 3, 3};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4.3074470705210945;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> fences = {21, 72, 15, 55, 16, 44, 54, 63, 69, 35, 75, 69, 76, 70, 80, 81};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 8106.584104885184;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> fences = {99, 99, 89, 89, 44, 44};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 4020.778320035727;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> fences = {23, 78, 32, 41, 75, 89, 78, 63, 74, 66, 4, 56, 7, 8, 9, 4};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 6209.683602402974;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> fences = {11, 11, 10, 10, 7, 3};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 51.32943377553876;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> fences = {21, 72, 100, 55, 16, 44, 54, 55, 55, 35, 75, 69, 76, 100, 1, 81};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 8770.257887112295;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> fences = {10, 1, 1, 1};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4330127018922193;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> fences = {99, 100, 98, 98, 98, 100, 97, 90, 90, 70, 71, 72, 68, 1, 2, 3};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 14318.600013502903;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> fences = {3, 4, 5, 6, 7, 8, 9, 6, 6, 6, 6, 6, 6, 6, 6, 5};
    GrasslandFencer* pObj = new GrasslandFencer();
    clock_t start = clock();
    double result = pObj->maximalFencedArea(fences);
    clock_t end = clock();
    delete pObj;
    double expected = 82.76333892426885;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21111148&rd=9994&pm=6467
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cstdio>
 
using namespace std;
 
typedef long long llong;
typedef long double ldbl;
 
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define abs(a) ((a) < 0 ? -(a) : (a))
 
#define m (1 << 16)
 
double r[m];
 
class GrasslandFencer
{
public:
  double maximalFencedArea( vector <int> f )
  {
    int i, j, k, l, n;
    double t, p;
    memset(r, 0, sizeof(r));
    n = f.size();
    for (i = 0; i < (1 << n); i++)
      for (j = 0; j < n; j++)
        if (!((i >> j) & 1))
          for (k = j + 1; k < n; k++)
            if (!((i >> k) & 1))
              for (l = k + 1; l < n; l++)
                if (!((i >> l) & 1))
                  if (f[j] + f[k] > f[l] && f[j] + f[l] > f[k] && f[k] + f[l] > f[j])
                  {
                    p = 0.5 * (f[j] + f[k] + f[l]);
                    t = sqrt(p * (p - f[j]) * (p - f[k]) * (p - f[l]));
                    r[i | (1 << j) | (1 << k) | (1 << l)] = max(r[i] + t, r[i | (1 << j) | (1 << k) | (1 << l)]);
                  }
    return r[(1 << n) - 1];
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/