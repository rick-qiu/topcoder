/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11115
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

class PermutationSignature {
public:
    vector<int> reconstruct(string signature);
};

vector<int> PermutationSignature::reconstruct(string signature) {
    vector<int> ret;
    return ret;
}


int test0() {
    string signature = "IIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string signature = "DI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string signature = "IIIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 6, 5};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string signature = "DIIDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 5, 4, 7, 6};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string signature = "D";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string signature = "I";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string signature = "DD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string signature = "DI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string signature = "ID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string signature = "II";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string signature = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string signature = "DIDIIIDIDIDIDIDIDIIDIDIDIDIDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3, 5, 6, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 19, 21, 20, 23, 22, 25, 24, 27, 26, 33, 32, 31, 30, 29, 28};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string signature = "IIIDIDIDIDIIDDIDDDIDDIDIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 4, 7, 6, 9, 8, 11, 10, 12, 15, 14, 13, 19, 18, 17, 16, 22, 21, 20, 24, 23, 25, 26, 27, 28, 29, 30, 31};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string signature = "IDIIDIDIDIDIDIDDDDDDDDDDDIIIIIIIIDIDDDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 27, 28, 29, 30, 31, 32, 33, 35, 34, 41, 40, 39, 38, 37, 36, 42};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string signature = "IDIIDIDIDIDIDIDDDDDDDDDDDIIIIIIIIDIDDDDDIDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 27, 28, 29, 30, 31, 32, 33, 35, 34, 41, 40, 39, 38, 37, 36, 47, 46, 45, 44, 43, 42};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string signature = "IDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 21, 20, 23, 22, 25, 24, 27, 26, 29, 28, 31, 30, 33, 32, 35, 34, 37, 36, 39, 38, 41, 40, 43, 42, 45, 44, 47, 46, 49, 48, 51, 50};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string signature = "DIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19, 22, 21, 24, 23, 26, 25, 28, 27, 30, 29, 32, 31, 34, 33, 36, 35, 38, 37, 40, 39, 42, 41, 44, 43, 46, 45, 48, 47, 50, 49, 51};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string signature = "IDIDIDIDIDIDIDIDIDIDIIIDIDIDIDIDIDIDIDIDIDIDIDIDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 21, 20, 22, 23, 25, 24, 27, 26, 29, 28, 31, 30, 33, 32, 35, 34, 37, 36, 39, 38, 41, 40, 43, 42, 45, 44, 47, 46, 49, 48, 51, 50};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string signature = "IDIDIDIDIDIDIDIDIDIDIIIDIDIDIDIDIDIDDDIDIDIDIDIDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 21, 20, 22, 23, 25, 24, 27, 26, 29, 28, 31, 30, 33, 32, 35, 34, 39, 38, 37, 36, 41, 40, 43, 42, 45, 44, 47, 46, 49, 48, 51, 50};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string signature = "IIIIIIIIIIIIIIDIDIDIIIIIIIIIIDIIIIIIIIIIIIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 15, 18, 17, 20, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 30, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string signature = "IIIIIIIIIIIIIIDIDIDIIIIIIIIIIDIIIIIIIIIIIIIIIIIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 15, 18, 17, 20, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 30, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 50, 49};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string signature = "DIIIIIIIIIIIIIIDIDIDIIIIIIIIIIDIIIIIIIIIIIIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17, 16, 19, 18, 21, 20, 22, 23, 24, 25, 26, 27, 28, 29, 30, 32, 31, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string signature = "DDDDDDDDDDDDDDDIIDDDDDDIDDDDDDDDDDDDDDDDDDDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 17, 24, 23, 22, 21, 20, 19, 18, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 46, 45};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string signature = "DIIDIDIDIIDIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 5, 4, 7, 6, 9, 8, 10, 12, 11, 13, 15, 14};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string signature = "IIIIDIDIDIIDIDIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 6, 5, 8, 7, 10, 9, 11, 13, 12, 15, 14, 16, 18, 17};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string signature = "DIIDIDIIDIDDIDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 5, 4, 7, 6, 8, 10, 9, 13, 12, 11, 15, 14, 17, 16};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string signature = "IIIIIIIIDIDIDIDIDII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 19, 20};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string signature = "IDDDIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 4, 3, 2, 7, 6, 8};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string signature = "IIIIIIIIIDIDIDIIIIDIDIDIDDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 10, 13, 12, 15, 14, 16, 17, 18, 20, 19, 22, 21, 24, 23, 27, 26, 25, 29, 28};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string signature = "DIIIIIIIDIIIIIIIDIDIDIIIIIIIIDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 4, 5, 6, 7, 8, 10, 9, 11, 12, 13, 14, 15, 16, 18, 17, 20, 19, 22, 21, 23, 24, 25, 26, 27, 28, 29, 37, 36, 35, 34, 33, 32, 31, 30};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string signature = "DIIDDIIIDIDIDDDDIIIIIIIIIIIDDDIDDDIIIIIIIDIDIDIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 6, 5, 4, 7, 8, 10, 9, 12, 11, 17, 16, 15, 14, 13, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 31, 30, 29, 28, 35, 34, 33, 32, 36, 37, 38, 39, 40, 41, 43, 42, 45, 44, 47, 46, 49, 48, 50};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string signature = "IDDDIIDDDIDDDIDDDIDDDDIIDIDIDDDDDDIIDDDDDIDIDDIDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 4, 3, 2, 6, 10, 9, 8, 7, 14, 13, 12, 11, 18, 17, 16, 15, 23, 22, 21, 20, 19, 24, 26, 25, 28, 27, 35, 34, 33, 32, 31, 30, 29, 36, 42, 41, 40, 39, 38, 37, 44, 43, 47, 46, 45, 50, 49, 48, 51};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string signature = "DDDDDDDDDDDIIDDDDDDDDDDIIIDDDDDDDDDIDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 13, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 25, 26, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string signature = "DDDDDDDDDIDDDDDDDDIDDDDDDDDDDDDDIIIIIIIDDDDDDDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 19, 18, 17, 16, 15, 14, 13, 12, 11, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 34, 35, 36, 37, 38, 39, 47, 46, 45, 44, 43, 42, 41, 40, 49, 48};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string signature = "DDDDDIDIDDDDDDDDDDDDIDDDDDDDIIIIDDDDDDIIDDDDDDDDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 4, 3, 2, 1, 8, 7, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 29, 28, 27, 26, 25, 24, 23, 22, 30, 31, 32, 39, 38, 37, 36, 35, 34, 33, 40, 49, 48, 47, 46, 45, 44, 43, 42, 41, 51, 50};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string signature = "DDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string signature = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string signature = "IDDDDDDDDDDDDDDDDII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 19, 20};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string signature = "DDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 4};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string signature = "DDDIIIIDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 5, 6, 7, 11, 10, 9, 8};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string signature = "DDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1, 6};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string signature = "DDIIIIDIIDDIIDDDDIDIDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 4, 5, 6, 8, 7, 9, 12, 11, 10, 13, 18, 17, 16, 15, 14, 20, 19, 24, 23, 22, 21};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDIIIIIIIIIIDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 31, 32, 33, 34, 35, 36, 37, 38, 39, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string signature = "DIDDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 5, 4, 3, 7, 6};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string signature = "DDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string signature = "DDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string signature = "DDDIDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 8, 7, 6, 5};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string signature = "DDDDDIIIIIDDDDDIIIIIDDDDDIIIIIDDDDDIIIIIDDDDDIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 4, 3, 2, 1, 7, 8, 9, 10, 16, 15, 14, 13, 12, 11, 17, 18, 19, 20, 26, 25, 24, 23, 22, 21, 27, 28, 29, 30, 36, 35, 34, 33, 32, 31, 37, 38, 39, 40, 46, 45, 44, 43, 42, 41, 47, 48, 49, 50, 51};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string signature = "DDDIIIIDDDIIIIIDDDDDDDIIIIIIIIIIIIIDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 5, 6, 7, 11, 10, 9, 8, 12, 13, 14, 15, 23, 22, 21, 20, 19, 18, 17, 16, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string signature = "IDDDDDDDDDDDDDDDDIIDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 19, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string signature = "IDDDDDIIDDDDIIDDDDIIDDDIIDDDDDDIIDDDDDDDIIDDDDIIDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 6, 5, 4, 3, 2, 8, 13, 12, 11, 10, 9, 14, 19, 18, 17, 16, 15, 20, 24, 23, 22, 21, 25, 32, 31, 30, 29, 28, 27, 26, 33, 41, 40, 39, 38, 37, 36, 35, 34, 42, 47, 46, 45, 44, 43, 48, 51, 50, 49};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string signature = "DDIDIIDIIDDDDDDIIIIIIDDDDIIIDDIDIIDIDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 5, 4, 6, 8, 7, 9, 16, 15, 14, 13, 12, 11, 10, 17, 18, 19, 20, 21, 26, 25, 24, 23, 22, 27, 28, 31, 30, 29, 33, 32, 34, 36, 35, 39, 38, 37};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string signature = "DDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string signature = "DDDDDDIIIIIIIDDDDDDIIIIIIIIIDDDDDDDIIIIIIDIDIDIDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6, 5, 4, 3, 2, 1, 8, 9, 10, 11, 12, 13, 20, 19, 18, 17, 16, 15, 14, 21, 22, 23, 24, 25, 26, 27, 28, 36, 35, 34, 33, 32, 31, 30, 29, 37, 38, 39, 40, 41, 43, 42, 45, 44, 47, 46, 51, 50, 49, 48};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string signature = "DDDDDDDDDDDDDDIIIIIIIIIIIIIIIIIIIIIIDDDDDIIIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 42, 41, 40, 39, 38, 37, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string signature = "IDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string signature = "DDIDIDIDIDDDIDIDIDDDIDDIDIIIDIIDIDIDIDIDIIDIIIDIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 5, 4, 7, 6, 9, 8, 13, 12, 11, 10, 15, 14, 17, 16, 21, 20, 19, 18, 24, 23, 22, 26, 25, 27, 28, 30, 29, 31, 33, 32, 35, 34, 37, 36, 39, 38, 41, 40, 42, 44, 43, 45, 46, 48, 47, 49, 51, 50};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string signature = "DDDDIIIIDDIIDDDDIDIDIDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1, 6, 7, 8, 11, 10, 9, 12, 17, 16, 15, 14, 13, 19, 18, 21, 20, 27, 26, 25, 24, 23, 22};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string signature = "DIDDDIIDIIDDDDDIIIDDDDDDIIDDIDDDIDIDDDIDIIDIDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 6, 5, 4, 3, 7, 9, 8, 10, 16, 15, 14, 13, 12, 11, 17, 18, 25, 24, 23, 22, 21, 20, 19, 26, 29, 28, 27, 33, 32, 31, 30, 35, 34, 39, 38, 37, 36, 41, 40, 42, 44, 43, 48, 47, 46, 45};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string signature = "DDDDDDDDDDIIIIIIIIIIDDDDDDDDDDIIIIIIIIIIDDDDDIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 12, 13, 14, 15, 16, 17, 18, 19, 20, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 32, 33, 34, 35, 36, 37, 38, 39, 40, 46, 45, 44, 43, 42, 41, 47, 48, 49, 50, 51};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string signature = "DDDDDDDDDIDDDDDDDDIDDDDDDDDDIDDDIIDDIIIDIDIIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 19, 18, 17, 16, 15, 14, 13, 12, 11, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 33, 32, 31, 30, 34, 37, 36, 35, 38, 39, 41, 40, 43, 42, 44, 46, 45, 47};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string signature = "DDDDIIIIDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1, 6, 7, 8, 13, 12, 11, 10, 9};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string signature = "DDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string signature = "DIIIDDDDDDDIDIDIDDDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 4, 12, 11, 10, 9, 8, 7, 6, 5, 14, 13, 16, 15, 20, 19, 18, 17, 22, 21};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDIDDDDDDDDDDDDDDDDIDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 51, 50, 49, 48, 47, 46, 45, 44, 43};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string signature = "IIDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 6, 5, 4, 3, 7};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string signature = "DIDIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3, 6, 5, 7};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string signature = "DDDIIIIDDDIDIDIDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 5, 6, 7, 11, 10, 9, 8, 13, 12, 15, 14, 20, 19, 18, 17, 16};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 51};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string signature = "IIDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5, 4, 3, 6};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string signature = "DIIDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 7, 6, 5, 4};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string signature = "DIIDIDDIIDIDDIIDIDDIIDIDDIIDIDDIIDIDDIIDIDDIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 5, 4, 8, 7, 6, 9, 11, 10, 14, 13, 12, 15, 17, 16, 20, 19, 18, 21, 23, 22, 26, 25, 24, 27, 29, 28, 32, 31, 30, 33, 35, 34, 38, 37, 36, 39, 41, 40, 44, 43, 42, 45, 47, 46};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string signature = "DDDDDDDDIIIIIIIIIIIIIIIIIIIDDDDDDDIIIIIIIIIIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 35, 34, 33, 32, 31, 30, 29, 28, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string signature = "IDDIIDDDIIIDDDDIIIIDDDDDIIIIIDDDDDDDDDDDDDDDDDDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 2, 5, 9, 8, 7, 6, 10, 11, 16, 15, 14, 13, 12, 17, 18, 19, 25, 24, 23, 22, 21, 20, 26, 27, 28, 29, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 51};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string signature = "DDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string signature = "IDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string signature = "DDDIIDDDDIIDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 5, 10, 9, 8, 7, 6, 11, 15, 14, 13, 12, 16};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string signature = "DDDDDDDIIDDDIDDIDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 6, 5, 4, 3, 2, 1, 9, 13, 12, 11, 10, 16, 15, 14, 21, 20, 19, 18, 17};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string signature = "DDDIIIDDDIIIDDDIIIDDDIIIDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 5, 6, 10, 9, 8, 7, 11, 12, 16, 15, 14, 13, 17, 18, 22, 21, 20, 19, 23, 24, 28, 27, 26, 25};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string signature = "IDDDDDDDDDDDDIIIIIIIIIIIIIDIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 27, 29, 31, 30};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string signature = "DDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string signature = "IDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string signature = "IIDIDIDDDIDIDIDDDIDIDIDIDIDDDIDIIIDDDIIIIDDDIDIDID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3, 6, 5, 10, 9, 8, 7, 12, 11, 14, 13, 18, 17, 16, 15, 20, 19, 22, 21, 24, 23, 26, 25, 30, 29, 28, 27, 32, 31, 33, 34, 38, 37, 36, 35, 39, 40, 41, 45, 44, 43, 42, 47, 46, 49, 48, 51, 50};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string signature = "IDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 2, 5};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string signature = "DIIDIDDIIDIDDIIDIDDIIDIDDDIIIDDDDDDDDDDIIIIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 5, 4, 8, 7, 6, 9, 11, 10, 14, 13, 12, 15, 17, 16, 20, 19, 18, 21, 23, 22, 27, 26, 25, 24, 28, 29, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 41, 42, 43, 44, 45, 46, 47};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string signature = "IIIDIDIDDIDIDIDIIIDIDIDIIDDDDDIDIDIDDDDDDDIIIIIIID";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 4, 7, 6, 10, 9, 8, 12, 11, 14, 13, 16, 15, 17, 18, 20, 19, 22, 21, 24, 23, 25, 31, 30, 29, 28, 27, 26, 33, 32, 35, 34, 43, 42, 41, 40, 39, 38, 37, 36, 44, 45, 46, 47, 48, 49, 51, 50};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string signature = "IDDIDDIDDDIIDIIDIIDIDIDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3, 2, 7, 6, 5, 11, 10, 9, 8, 12, 14, 13, 15, 17, 16, 18, 20, 19, 22, 21, 25, 24, 23};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string signature = "DDDDDDDDDDDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 15};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string signature = "DDIIDDIIDDII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 4, 7, 6, 5, 8, 11, 10, 9, 12, 13};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string signature = "IDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 32, 33, 34};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string signature = "DIDIDIDIDIDIDDIIDIDIDIDIDIDIDIDIDIDIIDDIDIDIDIDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3, 6, 5, 8, 7, 10, 9, 12, 11, 15, 14, 13, 16, 18, 17, 20, 19, 22, 21, 24, 23, 26, 25, 28, 27, 30, 29, 32, 31, 34, 33, 36, 35, 37, 40, 39, 38, 42, 41, 44, 43, 46, 45, 49, 48, 47, 50};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string signature = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string signature = "DDIDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1, 6, 5, 4, 7};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string signature = "DDDIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 6, 5, 7};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string signature = "DIDIDIIDIIDIDDIDIIIIIDDIIIIDDIDIDDIIIDIIDDDDIDIIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3, 6, 5, 7, 9, 8, 10, 12, 11, 15, 14, 13, 17, 16, 18, 19, 20, 21, 24, 23, 22, 25, 26, 27, 30, 29, 28, 32, 31, 35, 34, 33, 36, 37, 39, 38, 40, 45, 44, 43, 42, 41, 47, 46, 48, 50, 49, 51};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string signature = "DDDDDDDDDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string signature = "DIIDIDD";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 3, 5, 4, 8, 7, 6};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string signature = "IIDDDIIDDDIIDDIDDDDDDDDDIIIIDIIDDDIDDIDDDDIIII";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 6, 5, 4, 3, 7, 11, 10, 9, 8, 12, 15, 14, 13, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 26, 27, 28, 30, 29, 31, 35, 34, 33, 32, 38, 37, 36, 43, 42, 41, 40, 39, 44, 45, 46, 47};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string signature = "DDDDDDDDDDDDDDDDDDDIDDDDIIDIIIDIIDDDIDIIDDIDIIDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 25, 24, 23, 22, 21, 26, 28, 27, 29, 30, 32, 31, 33, 37, 36, 35, 34, 39, 38, 40, 43, 42, 41, 45, 44, 46, 50, 49, 48, 47, 51};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string signature = "DDDIDDDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1, 8, 7, 6, 5, 9};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string signature = "DIDIIDIDDIIDDIIIDIDDDIIIIDDDDIDIDIDIDIDIDIDIDIDIDI";
    PermutationSignature* pObj = new PermutationSignature();
    clock_t start = clock();
    vector<int> result = pObj->reconstruct(signature);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 4, 3, 5, 7, 6, 10, 9, 8, 11, 14, 13, 12, 15, 16, 18, 17, 22, 21, 20, 19, 23, 24, 25, 30, 29, 28, 27, 26, 32, 31, 34, 33, 36, 35, 38, 37, 40, 39, 42, 41, 44, 43, 46, 45, 48, 47, 50, 49, 51};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22696552&rd=14426&pm=11115
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
 
using namespace std;
 
class PermutationSignature {
public:
  vector <int> reconstruct(string);
};
 
vector <int> PermutationSignature::reconstruct(string a) {
  vector< int > ret;
  int add = 1, last = 0, i, j;
  for ( i = 0; i < a.length(); i ++ )
    if ( a[i] == 'I' ){
      for ( j = last; j <= i; j ++ )
        ret.push_back( add - ( j - last ) );
      last = i+1;
      add ++;
    }
    else
      add ++;
      for ( j = last; j <= i; j ++ )
        ret.push_back( add - ( j - last ) );
      last = i+1;
      add ++;
  return ret;
}
 
//
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/