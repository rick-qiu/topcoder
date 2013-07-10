/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7504
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

class ProblemsToSolve {
public:
    int minNumber(vector<int> pleasantness, int variety);
};

int ProblemsToSolve::minNumber(vector<int> pleasantness, int variety) {
    int ret;
    return ret;
}


int test0() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
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
    vector<int> pleasantness = {1, 2, 3, 4, 5};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> pleasantness = {10, 1, 12, 101};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> pleasantness = {10, 1};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> pleasantness = {1};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
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
    vector<int> pleasantness = {1, 1};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pleasantness = {2, 2, 2};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> pleasantness = {1, 4, 1, 2};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pleasantness = {5, 5, 4, 1, 4};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pleasantness = {5, 2, 5, 1, 5, 5};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pleasantness = {6, 1, 4, 7, 4, 6, 7};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pleasantness = {6, 4, 1, 4, 8, 5, 5, 2};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
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
    vector<int> pleasantness = {6, 2, 6, 2, 6, 3, 3, 3, 7};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> pleasantness = {8, 3, 10, 10, 5, 1, 6, 5, 4, 7};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pleasantness = {1, 8, 11, 3, 9, 7, 8, 9, 10, 5, 10};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pleasantness = {9, 2, 12, 10, 5, 4, 8, 2, 2, 4, 1, 1};
    int variety = 8;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> pleasantness = {7, 7, 8, 10, 9, 4, 12, 2, 4, 8, 12, 3, 6};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pleasantness = {13, 14, 12, 14, 3, 5, 2, 12, 9, 3, 13, 11, 1, 13};
    int variety = 13;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pleasantness = {12, 13, 6, 1, 5, 12, 11, 5, 13, 3, 1, 14, 11, 9, 1};
    int variety = 13;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pleasantness = {7, 4, 14, 13, 3, 5, 14, 3, 14, 13, 10, 10, 3, 3, 4, 4};
    int variety = 11;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pleasantness = {16, 8, 8, 11, 5, 8, 2, 6, 9, 12, 8, 2, 6, 4, 5, 6, 8};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> pleasantness = {9, 5, 8, 15, 18, 15, 2, 7, 13, 17, 13, 2, 6, 7, 1, 14, 17, 13};
    int variety = 13;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pleasantness = {19, 8, 11, 17, 4, 15, 19, 17, 8, 13, 17, 11, 1, 18, 6, 19, 4, 14, 11};
    int variety = 8;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> pleasantness = {9, 11, 2, 7, 3, 1, 15, 2, 15, 14, 15, 4, 13, 7, 3, 12, 17, 7, 4, 3};
    int variety = 11;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pleasantness = {18, 3, 14, 17, 14, 1, 2, 8, 8, 16, 10, 10, 12, 11, 11, 14, 14, 14, 6, 20, 4};
    int variety = 7;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pleasantness = {2, 8, 20, 9, 10, 13, 9, 1, 10, 17, 17, 6, 12, 9, 2, 8, 16, 22, 22, 19, 11, 21};
    int variety = 17;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pleasantness = {17, 21, 16, 18, 6, 18, 22, 19, 8, 8, 21, 9, 22, 23, 5, 15, 4, 23, 5, 14, 19, 21, 11};
    int variety = 18;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pleasantness = {6, 16, 18, 20, 6, 10, 9, 9, 3, 4, 22, 5, 3, 12, 11, 22, 1, 18, 23, 23, 24, 4, 4, 21};
    int variety = 19;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pleasantness = {13, 13, 18, 6, 1, 1, 9, 8, 17, 22, 11, 16, 11, 21, 12, 6, 3, 8, 18, 6, 14, 15, 14, 15, 22};
    int variety = 11;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pleasantness = {23, 10, 24, 13, 9, 25, 25, 10, 17, 9, 19, 3, 5, 17, 13, 23, 1, 13, 14, 21, 14, 16, 26, 6, 12, 19};
    int variety = 18;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pleasantness = {1, 4, 2, 10, 26, 11, 21, 19, 12, 27, 13, 26, 5, 24, 15, 14, 10, 15, 20, 22, 16, 26, 13, 26, 17, 24, 13};
    int variety = 8;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> pleasantness = {23, 22, 2, 24, 19, 4, 7, 23, 22, 16, 22, 25, 3, 7, 26, 23, 14, 14, 21, 18, 18, 4, 18, 1, 1, 12, 17, 11};
    int variety = 18;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pleasantness = {17, 25, 22, 26, 21, 10, 22, 27, 17, 12, 11, 11, 4, 12, 7, 2, 27, 6, 3, 15, 11, 1, 12, 5, 29, 21, 28, 24, 1};
    int variety = 18;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> pleasantness = {26, 15, 16, 6, 16, 2, 30, 21, 30, 5, 28, 9, 2, 11, 29, 19, 6, 18, 20, 29, 8, 2, 24, 13, 6, 17, 2, 6, 7, 3};
    int variety = 22;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pleasantness = {23, 21, 1, 21, 2, 22, 27, 30, 10, 31, 5, 4, 6, 22, 31, 25, 5, 24, 12, 5, 19, 1, 10, 9, 11, 11, 5, 3, 26, 10, 24};
    int variety = 27;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pleasantness = {9, 14, 12, 13, 30, 30, 1, 8, 13, 20, 24, 27, 9, 25, 31, 12, 29, 28, 11, 2, 19, 5, 15, 32, 22, 24, 5, 15, 22, 32, 30, 10};
    int variety = 22;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> pleasantness = {4, 8, 33, 9, 18, 24, 31, 29, 8, 27, 33, 1, 8, 29, 31, 17, 16, 1, 14, 24, 7, 30, 16, 16, 13, 29, 9, 25, 21, 18, 5, 4, 32};
    int variety = 24;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pleasantness = {22, 1, 28, 6, 6, 25, 3, 28, 3, 19, 27, 18, 7, 28, 23, 26, 14, 15, 33, 32, 34, 21, 5, 11, 20, 17, 3, 28, 21, 25, 6, 23, 34, 1};
    int variety = 32;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pleasantness = {8, 33, 31, 33, 26, 3, 7, 18, 20, 35, 25, 28, 11, 31, 17, 20, 19, 16, 12, 26, 23, 2, 9, 23, 7, 35, 7, 20, 30, 29, 22, 2, 8, 26, 11};
    int variety = 30;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> pleasantness = {25, 35, 34, 6, 27, 32, 28, 32, 25, 11, 19, 3, 27, 14, 24, 2, 24, 32, 25, 15, 10, 25, 9, 25, 14, 7, 24, 30, 14, 18, 20, 24, 20, 17, 25, 8};
    int variety = 32;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> pleasantness = {14, 28, 14, 18, 8, 31, 36, 34, 35, 27, 34, 19, 13, 16, 1, 7, 32, 30, 2, 12, 22, 27, 13, 4, 30, 10, 35, 8, 32, 19, 26, 34, 11, 29, 26, 16, 7};
    int variety = 28;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> pleasantness = {36, 38, 11, 24, 12, 37, 1, 29, 9, 2, 19, 12, 4, 22, 8, 29, 14, 23, 25, 22, 9, 32, 2, 4, 25, 26, 25, 17, 35, 22, 21, 13, 30, 35, 23, 32, 18, 24};
    int variety = 32;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> pleasantness = {9, 37, 25, 30, 32, 16, 27, 7, 30, 5, 8, 38, 18, 32, 26, 5, 19, 1, 20, 19, 28, 38, 30, 20, 27, 26, 34, 7, 2, 12, 27, 23, 7, 29, 13, 31, 6, 8, 24};
    int variety = 37;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> pleasantness = {29, 11, 12, 26, 40, 16, 32, 14, 23, 35, 3, 17, 32, 36, 30, 32, 26, 31, 38, 6, 4, 21, 8, 33, 24, 35, 19, 24, 19, 16, 14, 8, 25, 21, 15, 14, 17, 20, 21, 14};
    int variety = 30;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
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
    vector<int> pleasantness = {36, 30, 20, 20, 3, 18, 11, 12, 24, 35, 5, 27, 18, 12, 39, 26, 14, 17, 6, 28, 21, 4, 2, 13, 13, 11, 39, 39, 1, 36, 6, 26, 32, 29, 19, 14, 11, 29, 1, 41, 32};
    int variety = 33;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> pleasantness = {32, 40, 33, 11, 21, 9, 12, 20, 4, 42, 36, 7, 38, 12, 18, 37, 33, 35, 7, 26, 1, 15, 21, 30, 15, 15, 14, 25, 40, 39, 8, 38, 4, 12, 1, 31, 30, 11, 16, 23, 18, 19};
    int variety = 41;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> pleasantness = {17, 30, 33, 2, 42, 39, 5, 24, 40, 6, 38, 17, 30, 23, 30, 24, 18, 23, 14, 12, 20, 25, 16, 29, 42, 20, 14, 16, 24, 19, 31, 11, 2, 41, 39, 4, 35, 8, 9, 30, 37, 38, 27};
    int variety = 40;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> pleasantness = {43, 28, 33, 9, 14, 36, 27, 43, 38, 39, 37, 23, 24, 2, 25, 1, 24, 4, 33, 22, 43, 12, 31, 12, 9, 2, 29, 42, 12, 1, 21, 24, 42, 40, 27, 15, 30, 14, 28, 24, 10, 17, 26, 44};
    int variety = 43;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> pleasantness = {17, 30, 33, 9, 25, 41, 20, 24, 2, 1, 5, 37, 10, 42, 33, 36, 28, 10, 35, 28, 27, 43, 15, 6, 45, 35, 12, 41, 22, 28, 5, 6, 34, 21, 45, 33, 41, 20, 34, 38, 29, 2, 44, 44, 30};
    int variety = 44;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> pleasantness = {9, 41, 4, 14, 19, 4, 30, 26, 10, 19, 8, 43, 37, 25, 42, 26, 39, 34, 39, 33, 45, 28, 32, 3, 19, 6, 41, 1, 13, 46, 46, 28, 1, 24, 22, 22, 8, 35, 31, 35, 41, 9, 11, 7, 14, 19};
    int variety = 42;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> pleasantness = {13, 16, 17, 13, 12, 41, 27, 31, 3, 20, 22, 27, 1, 3, 29, 45, 37, 2, 33, 47, 37, 44, 39, 29, 43, 38, 10, 22, 20, 30, 13, 31, 14, 44, 33, 31, 28, 36, 37, 3, 25, 14, 10, 10, 23, 46, 5};
    int variety = 35;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> pleasantness = {34, 13, 31, 4, 33, 28, 39, 16, 15, 8, 45, 30, 14, 43, 31, 11, 6, 7, 43, 34, 6, 18, 42, 15, 28, 47, 22, 27, 47, 5, 29, 25, 41, 14, 14, 11, 3, 14, 16, 18, 8, 46, 33, 48, 27, 20, 28, 11};
    int variety = 42;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> pleasantness = {14, 49, 32, 10, 12, 39, 5, 34, 35, 4, 39, 26, 24, 25, 20, 27, 5, 22, 39, 46, 5, 16, 15, 15, 48, 21, 23, 12, 26, 18, 44, 47, 20, 21, 13, 49, 9, 3, 35, 18, 46, 9, 25, 26, 15, 45, 36, 24, 3};
    int variety = 30;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> pleasantness = {1, 2, 39, 3, 1, 3, 34, 18, 23, 48, 28, 24, 45, 21, 35, 28, 23, 24, 21, 36, 8, 28, 25, 10, 38, 11, 29, 42, 27, 21, 41, 18, 36, 28, 29, 13, 34, 15, 30, 33, 23, 39, 41, 23, 43, 50, 29, 45, 27, 9};
    int variety = 39;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> pleasantness = {5};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> pleasantness = {3, 20, 21};
    int variety = 29;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> pleasantness = {49, 33, 7, 4, 32};
    int variety = 30;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> pleasantness = {37, 8, 63, 35, 2, 13, 2};
    int variety = 13;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> pleasantness = {28, 74, 84, 49, 24, 35, 21, 42, 56};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> pleasantness = {87, 75, 63, 108, 82, 95, 27, 67, 98, 16, 32};
    int variety = 95;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> pleasantness = {51, 117, 80, 41, 90, 29, 23, 129, 32, 105, 19, 117, 2};
    int variety = 59;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> pleasantness = {73, 49, 3, 22, 18, 114, 143, 29, 81, 68, 4, 39, 28, 79, 86};
    int variety = 133;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> pleasantness = {42, 162, 28, 130, 57, 109, 145, 10, 133, 86, 127, 38, 129, 59, 134, 45, 128};
    int variety = 165;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> pleasantness = {171, 63, 90, 61, 73, 76, 116, 176, 108, 119, 38, 52, 85, 170, 163, 71, 70, 90, 48};
    int variety = 189;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> pleasantness = {107, 163, 119, 46, 104, 62, 186, 165, 47, 125, 18, 155, 110, 119, 191, 31, 6, 115, 117, 201, 2};
    int variety = 201;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> pleasantness = {209, 226, 161, 127, 61, 169, 172, 59, 46, 42, 58, 137, 84, 73, 193, 104, 24, 34, 192, 123, 72, 69, 27};
    int variety = 121;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> pleasantness = {191, 240, 34, 78, 40, 207, 62, 53, 100, 77, 191, 6, 191, 66, 235, 73, 86, 194, 242, 199, 242, 100, 20, 27, 31};
    int variety = 125;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
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
    vector<int> pleasantness = {217, 182, 210, 102, 41, 215, 1, 20, 190, 249, 59, 70, 12, 224, 139, 46, 117, 216, 160, 230, 8, 91, 252, 190, 241, 217, 89};
    int variety = 200;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> pleasantness = {96, 246, 257, 128, 170, 52, 212, 270, 79, 152, 249, 110, 88, 142, 263, 70, 6, 99, 1, 175, 11, 113, 197, 203, 269, 207, 166, 175, 255};
    int variety = 251;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> pleasantness = {223, 283, 294, 192, 26, 207, 160, 25, 212, 31, 131, 148, 1, 249, 138, 286, 42, 219, 273, 306, 183, 112, 210, 175, 36, 101, 131, 62, 43, 253, 87};
    int variety = 211;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> pleasantness = {82, 225, 161, 304, 46, 154, 48, 140, 134, 306, 66, 5, 203, 122, 167, 304, 14, 226, 169, 184, 161, 265, 219, 264, 308, 327, 86, 11, 49, 15, 116, 208, 73};
    int variety = 262;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> pleasantness = {87, 112, 16, 154, 114, 151, 253, 340, 255, 253, 61, 283, 110, 209, 15, 152, 11, 142, 105, 155, 199, 326, 169, 321, 124, 249, 247, 198, 319, 221, 58, 269, 29, 213, 283};
    int variety = 293;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> pleasantness = {57, 159, 365, 111, 234, 46, 190, 322, 204, 215, 149, 200, 32, 119, 141, 16, 266, 361, 30, 170, 251, 189, 328, 50, 344, 217, 196, 38, 271, 20, 254, 42, 218, 71, 321, 163, 347};
    int variety = 336;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> pleasantness = {221, 11, 153, 318, 78, 157, 113, 264, 361, 143, 11, 192, 89, 134, 146, 281, 107, 127, 225, 88, 236, 4, 133, 144, 266, 363, 127, 22, 336, 286, 240, 180, 302, 321, 247, 314, 112, 180, 239};
    int variety = 270;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> pleasantness = {94, 41, 231, 245, 229, 169, 84, 336, 109, 342, 99, 94, 90, 174, 162, 322, 214, 251, 126, 145, 86, 89, 80, 219, 179, 95, 162, 221, 11, 353, 172, 384, 53, 193, 408, 389, 106, 108, 30, 61, 249};
    int variety = 305;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> pleasantness = {376, 288, 375, 87, 395, 90, 408, 31, 401, 358, 270, 272, 59, 219, 158, 166, 392, 130, 377, 388, 309, 39, 141, 279, 37, 166, 398, 409, 300, 192, 428, 229, 101, 331, 326, 202, 14, 34, 324, 172, 57, 424, 95};
    int variety = 387;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> pleasantness = {22, 427, 115, 209, 288, 26, 45, 338, 39, 21, 404, 51, 108, 207, 245, 56, 272, 251, 388, 395, 164, 63, 356, 384, 20, 50, 259, 388, 406, 270, 326, 118, 420, 151, 338, 258, 243, 196, 160, 348, 301, 247, 104, 194, 135};
    int variety = 441;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> pleasantness = {267, 206, 129, 210, 225, 281, 382, 296, 368, 96, 278, 169, 94, 454, 232, 335, 104, 455, 68, 114, 420, 58, 304, 20, 232, 177, 9, 267, 341, 228, 202, 369, 259, 307, 329, 418, 76, 166, 24, 122, 158, 217, 405, 465, 308, 231, 255};
    int variety = 444;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> pleasantness = {270, 479, 223, 160, 455, 458, 278, 403, 269, 169, 350, 246, 180, 317, 316, 488, 274, 207, 144, 278, 284, 39, 319, 234, 120, 388, 200, 5, 165, 121, 120, 154, 470, 238, 487, 337, 101, 70, 130, 203, 441, 465, 413, 451, 87, 169, 48, 51, 123};
    int variety = 386;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> pleasantness = {5, 10, 11, 5, 2, 1};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> pleasantness = {3, 5, 5, 5, 5, 5, 5, 1};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> pleasantness = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> pleasantness = {5, 1, 1, 5, 10};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> pleasantness = {1, 2};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> pleasantness = {3, 3, 3, 1, 3, 3, 5};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 50;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
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
    vector<int> pleasantness = {1};
    int variety = 20;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> pleasantness = {1, 1, 1, 2, 2, 2, 3, 3, 3};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> pleasantness = {10, 10, 6, 5, 10, 10, 14, 16, 18};
    int variety = 8;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> pleasantness = {6, 2, 6, 2, 6, 2, 6, 2};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> pleasantness = {3, 6, 2, 2, 6};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> pleasantness = {5, 8, 8, 5, 5, 5, 2};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> pleasantness = {1};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> pleasantness = {3, 3, 3, 4, 4, 4, 5, 5, 5};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> pleasantness = {3, 4, 2, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> pleasantness = {100, 800, 500};
    int variety = 701;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> pleasantness = {55, 98, 65, 58, 87, 81, 191, 3, 2, 48, 116, 49, 255, 150, 84, 217, 302, 353, 83, 325, 87, 498, 318, 356, 290, 330, 338, 126, 455, 185, 592, 16, 593, 156, 639, 367, 638, 540, 308, 635, 429, 227, 227, 192, 900, 509, 872, 401, 490, 910};
    int variety = 765;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> pleasantness = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> pleasantness = {10};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> pleasantness = {6, 2, 6, 2, 6, 3, 3, 3, 7};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> pleasantness = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> pleasantness = {950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 0, 999};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> pleasantness = {1};
    int variety = 49;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int variety = 49;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> pleasantness = {6, 2, 6, 2, 6, 3, 3, 3, 7};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> pleasantness = {10, 1, 20};
    int variety = 15;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6};
    int variety = 900;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> pleasantness = {1};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> pleasantness = {1, 2, 3, 4, 5};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 10};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> pleasantness = {50, 49, 51, 48, 52, 47};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> pleasantness = {2, 1, 6};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> pleasantness = {2, 2, 2, 2, 1, 6};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> pleasantness = {1, 0, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> pleasantness = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> pleasantness = {160, 528, 415, 493, 570, 362, 289, 431, 886, 781, 452, 719, 584, 335, 375, 20, 286, 548, 155, 700, 692, 702, 59, 841};
    int variety = 528;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> pleasantness = {10, 10, 1, 10, 10, 10, 10, 20, 10, 10, 10, 10};
    int variety = 15;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> pleasantness = {2, 1, 1, 2, 4};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> pleasantness = {10, 10, 10, 10, 20};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> pleasantness = {10, 10, 10, 10};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 43, 43, 43, 43, 43, 43, 50};
    int variety = 49;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int variety = 51;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> pleasantness = {5, 5, 5, 1, 5, 5, 5, 10};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1000};
    int variety = 999;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 999};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> pleasantness = {2, 2, 2, 2, 2, 2};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> pleasantness = {2, 2, 2, 2, 2, 2, 6, 2, 6, 2, 6, 3, 3, 3, 7};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> pleasantness = {2, 3, 4, 1, 7};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 999;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 30, 31, 34, 45, 6, 7, 45, 34, 23, 45, 34, 23, 67, 45, 34, 45, 2, 4, 6, 78, 3, 4, 5, 6, 7, 8, 9, 2};
    int variety = 999;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> pleasantness = {14, 10, 12, 1, 101};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> pleasantness = {10, 101, 12, 1};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> pleasantness = {6, 5, 4, 3, 7, 3, 8, 2, 9, 10, 1, 11};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> pleasantness = {10, 10, 10, 10, 10};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> pleasantness = {10, 1, 12, 101};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> pleasantness = {1};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 500;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> pleasantness = {1, 3, 5, 3, 3, 3, 3, 3};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> pleasantness = {1, 4, 51, 34, 13, 134, 134, 51, 43, 53, 74, 74, 32, 90, 64, 74, 78, 35, 122, 124, 213, 313, 142, 423, 231, 314, 123, 123, 141, 431, 234, 413, 12, 3, 41, 32, 41, 412, 312, 231, 312, 312, 312, 341, 231, 312, 312, 342, 312, 1000};
    int variety = 900;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int variety = 40;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> pleasantness = {2, 1, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> pleasantness = {19, 52, 3, 36, 54, 34, 60};
    int variety = 34;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int variety = 200;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> pleasantness = {3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> pleasantness = {12, 9, 8, 10, 1};
    int variety = 11;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> pleasantness = {1};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> pleasantness = {1, 2, 3, 4};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> pleasantness = {18, 1, 2, 3, 100};
    int variety = 50;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> pleasantness = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 58, 5, 5, 5, 5, 5, 5, 1, 7};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> pleasantness = {10, 10, 10, 10, 10, 10, 10, 2, 12};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> pleasantness = {1, 2, 3, 4, 5};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> pleasantness = {100, 100, 100, 100, 100, 100, 100, 100, 1, 100};
    int variety = 50;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> pleasantness = {2, 1, 1, 2, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> pleasantness = {2, 1, 2, 2, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> pleasantness = {2, 2, 1, 2, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> pleasantness = {3, 1, 2, 3, 5};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> pleasantness = {5, 3, 6, 4, 2};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> pleasantness = {10, 9, 12};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> pleasantness = {0, 1, 2, 3, 4};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> pleasantness = {1};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> pleasantness = {1, 2, 3, 4, 5};
    int variety = 50;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> pleasantness = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> pleasantness = {3};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> pleasantness = {1, 2, 3, 4};
    int variety = 11;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> pleasantness = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> pleasantness = {6, 6, 6, 6, 6, 6, 6, 5, 12};
    int variety = 7;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> pleasantness = {2, 1, 1, 1, 2, 2, 6};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> pleasantness = {10, 1, 2, 11, 101};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> pleasantness = {5, 5, 5, 1, 10};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 4, 4, 4, 4, 7, 7, 7, 8, 8, 8, 5, 5, 12, 1, 12, 12, 45, 7, 5, 6, 1, 4, 2, 5, 7, 3, 13, 2, 14, 15, 17};
    int variety = 12;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100, 0};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> pleasantness = {1, 2, 3, 11};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> pleasantness = {2, 1, 3, 4, 12};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 10};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> pleasantness = {0};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> pleasantness = {2, 1, 4};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> pleasantness = {2, 2, 1, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> pleasantness = {1, 1, 1, 1, 0, 10, 1, 1};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> pleasantness = {6, 1, 2, 5, 7};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> pleasantness = {6, 2, 6, 2, 6, 3, 3, 3, 7};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> pleasantness = {1, 2, 4, 5, 3};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> pleasantness = {1, 5, 5, 1, 0};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> pleasantness = {3, 2, 6, 2, 6, 3, 3, 3, 7};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> pleasantness = {0, 0, 0, 0, 4};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 50;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> pleasantness = {6, 2, 100};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> pleasantness = {9, 100, 8, 400};
    int variety = 72;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12, 13, 14, 15, 16, 17, 18, 19, 130, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 27, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46};
    int variety = 500;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> pleasantness = {1, 0, 1, 1, 3};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> pleasantness = {4, 3, 3, 3, 5};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> pleasantness = {1, 2, 4, 1};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> pleasantness = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> pleasantness = {1, 5, 9};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> pleasantness = {1, 2, 2, 0, 4, 2, 2, 5};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> pleasantness = {10, 1, 12, 156};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> pleasantness = {1, 2, 3, 5, 6, 8};
    int variety = 15;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> pleasantness = {24, 2, 3, 4, 5, 6, 7, 26, 28, 39, 40};
    int variety = 24;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> pleasantness = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> pleasantness = {1, 9, 8, 4, 3, 2, 6, 14, 100, 43, 2, 23, 43, 1, 3, 4, 5, 8, 1, 2, 3, 19, 34, 44, 24, 90, 91, 109, 156, 43, 65, 34, 87, 543, 23, 42, 77, 87, 88, 12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> pleasantness = {10, 9, 9, 10, 11};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> pleasantness = {10, 1, 2, 10, 15};
    int variety = 13;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> pleasantness = {3, 4, 1};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> pleasantness = {3, 4, 0};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> pleasantness = {0, 0, 2};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> pleasantness = {2, 0, 2, 2, 4};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> pleasantness = {6, 7, 1};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> pleasantness = {1, 1, 1, 1, 1};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> pleasantness = {2, 4, 3, 2, 5, 2, 3, 5, 2, 3, 5, 2, 3, 5, 2, 3, 5, 7, 6, 7, 8, 4, 4, 6, 3, 4, 2, 4, 5, 6, 3, 4, 4, 2, 5, 6, 3, 4, 5, 3, 50, 24, 21, 42, 43, 55, 23, 4, 43};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> pleasantness = {1, 0, 3, 5, 1000};
    int variety = 500;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> pleasantness = {1, 5};
    int variety = 20;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> pleasantness = {1, 1, 1};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> pleasantness = {6, 4, 9};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> pleasantness = {1, 3, 6, 2, 0, 3, 5, 3, 4, 9, 10, 4, 8, 2, 1, 3, 1, 8, 8, 1, 8, 9, 3, 9, 7, 4, 0, 6, 3, 6, 2, 4, 9, 3, 7, 4, 5, 9, 0, 10, 2, 1, 6, 7, 6, 0, 4, 9, 8};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> pleasantness = {5, 2, 7, 3, 5, 3, 10, 2, 2};
    int variety = 9;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> pleasantness = {1000, 1000, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> pleasantness = {10, 11, 2, 10, 20};
    int variety = 15;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> pleasantness = {1};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> pleasantness = {100, 99, 101, 98, 102, 97, 103, 96, 1, 100, 100, 100, 100, 800, 100, 99, 101, 98, 102, 97, 103, 96, 1, 100, 100, 100, 100, 800, 100, 99, 101, 98, 102, 97, 103, 96, 1, 100, 100, 100, 100, 800};
    int variety = 900;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> pleasantness = {6, 4, 4, 7, 8};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> pleasantness = {6, 7, 4, 4, 8};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6};
    int variety = 40;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> pleasantness = {1, 0, 0, 0, 5};
    int variety = 3;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> pleasantness = {2, 110, 15, 4, 45, 39};
    int variety = 250;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> pleasantness = {5, 1, 15, 4};
    int variety = 50;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> pleasantness = {1, 2, 3, 4, 5};
    int variety = 70;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> pleasantness = {10, 10, 10, 1, 10, 10, 100};
    int variety = 95;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int variety = 20;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> pleasantness = {10, 1, 100};
    int variety = 99;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> pleasantness = {25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 2, 27, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 4, 3, 27, 26, 28, 49};
    int variety = 47;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> pleasantness = {5, 4, 9, 5, 5, 5, 10};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 111;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> pleasantness = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> pleasantness = {2, 2, 99};
    int variety = 98;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 999, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> pleasantness = {5, 6, 5, 5, 6, 5, 2};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> pleasantness = {4, 7, 1, 2, 3, 4, 5};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> pleasantness = {1, 3, 3};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> pleasantness = {5, 6, 6, 2, 1};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> pleasantness = {11, 231, 21, 324, 2, 5, 6, 7, 454, 2};
    int variety = 399;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> pleasantness = {1, 2, 3, 4};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> pleasantness = {3, 1, 7};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> pleasantness = {2, 1, 1, 1, 3};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> pleasantness = {4, 3, 4, 4, 10, 1, 1, 1};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> pleasantness = {1, 3, 5, 4};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> pleasantness = {1, 2, 3, 4, 5};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> pleasantness = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999};
    int variety = 1;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> pleasantness = {4, 3, 2, 1, 6};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> pleasantness = {6, 3, 10, 5, 9, 7};
    int variety = 7;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> pleasantness = {6, 6, 5, 2, 6, 3, 3, 3, 7, 5, 45, 3, 4, 34, 34, 34, 43, 5, 54, 4, 45, 4, 7, 5, 68, 7, 6, 8, 34, 2, 78, 5, 7, 87, 4, 12, 34, 54, 67, 78, 89, 90, 67, 34, 23, 78, 23, 43, 56, 56};
    int variety = 1000;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<int> pleasantness = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<int> pleasantness = {0, 1, 2, 3, 4};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<int> pleasantness = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<int> pleasantness = {1, 2, 3};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<int> pleasantness = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    vector<int> pleasantness = {6, 2, 6, 2, 6, 3, 3, 3, 7};
    int variety = 50;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    vector<int> pleasantness = {5, 7, 2, 3, 3, 1};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    vector<int> pleasantness = {5, 7, 4, 6, 1};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    vector<int> pleasantness = {1, 1, 3, 1};
    int variety = 2;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    vector<int> pleasantness = {3, 1, 3, 3, 5};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    vector<int> pleasantness = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 44, 45, 46, 47, 48, 49, 50};
    int variety = 500;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    vector<int> pleasantness = {2, 1, 7};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    vector<int> pleasantness = {2, 1, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 55, 2, 5, 5, 5, 5, 3, 5, 5, 5, 5, 5, 1, 5, 5, 5, 4, 5, 5, 5, 5, 6, 5, 55, 5, 5, 5, 5, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3};
    int variety = 100;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    vector<int> pleasantness = {2, 1, 3, 4, 5};
    int variety = 4;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    vector<int> pleasantness = {1, 1, 1};
    int variety = 6;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    vector<int> pleasantness = {1, 2, 3, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 240, 300, 2, 5, 7, 9, 0, 12};
    int variety = 600;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    vector<int> pleasantness = {1, 1, 9, 1, 1, 1, 1, 1, 1, 1, 9};
    int variety = 10;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    vector<int> pleasantness = {6, 5, 4, 1, 9};
    int variety = 8;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    vector<int> pleasantness = {4, 0, 5};
    int variety = 5;
    ProblemsToSolve* pObj = new ProblemsToSolve();
    clock_t start = clock();
    int result = pObj->minNumber(pleasantness, variety);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20763521&rd=10664&pm=7504
********************************************************************************
#pragma warning (disable:4786) 
 
#include <sstream> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
#define Abs(x) ((x)>0?(x):-(x)) 
 
class ProblemsToSolve  
{ 
public: 
  int minNumber(vector <int> a, int var)  
  { 
    int n = a.size(); 
    int i, j; 
 
    int ans = n; 
 
    for (i=0;i<n;i++) 
      for (j=i+1;j<n;j++) 
        if ( Abs(a[j]-a[i])>=var ) 
      { 
        int tec = 2; 
        if ( i>0 ) tec += (i+1)/2; 
        tec += (j-i-1)/2; 
 
        if ( tec<ans ) ans = tec; 
      } 
     
 
    return ans; 
  } 
 
   
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/