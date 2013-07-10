/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6540
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

class PlacingPieces {
public:
    int optimalPlacement(int L, vector<int> pieces);
};

int PlacingPieces::optimalPlacement(int L, vector<int> pieces) {
    int ret;
    return ret;
}


int test0() {
    int L = 9;
    vector<int> pieces = {1, 8};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int L = 36;
    vector<int> pieces = {1, 1, 5, 5, 5};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int L = 37;
    vector<int> pieces = {1, 1, 5, 5, 5};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int L = 18;
    vector<int> pieces = {2, 2, 2, 9, 9, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 1;
    vector<int> pieces = {2, 3, 4};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int L = 52;
    vector<int> pieces = {11, 15, 18, 1};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 109;
    vector<int> pieces = {4, 16, 20, 37};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 290;
    vector<int> pieces = {57, 25, 21, 18, 45};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int L = 122;
    vector<int> pieces = {39, 53};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 227;
    vector<int> pieces = {63, 7, 52, 43, 67};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int L = 35;
    vector<int> pieces = {12, 17, 5};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 64;
    vector<int> pieces = {43, 13};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int L = 272;
    vector<int> pieces = {76, 1, 3, 88, 71, 14};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int L = 132;
    vector<int> pieces = {15, 13, 1, 4, 16, 2, 10, 2, 13, 7};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int L = 176;
    vector<int> pieces = {9, 3, 36, 22, 33, 18, 24, 25};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int L = 216;
    vector<int> pieces = {52, 6, 26, 22, 16, 51, 39, 25};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int L = 974;
    vector<int> pieces = {24, 49, 26, 26, 22, 2, 77, 35, 58};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 219;
    vector<int> pieces = {1, 60, 53, 2, 10, 76, 29, 14, 65};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int L = 197;
    vector<int> pieces = {5, 15, 4, 10, 18, 11, 10, 1, 13};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int L = 19;
    vector<int> pieces = {5, 32, 23, 16, 17, 7, 21, 38, 7};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int L = 1000;
    vector<int> pieces = {15, 47, 21, 1, 9, 75, 13, 78, 6, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int L = 57;
    vector<int> pieces = {12, 1, 23, 51, 32, 74, 90, 66, 46, 1};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int L = 140;
    vector<int> pieces = {79, 13, 21, 66, 73, 3, 58, 18, 29, 86};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 34;
    vector<int> pieces = {1, 16, 2, 18, 6, 5, 4, 3, 19, 3};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int L = 44;
    vector<int> pieces = {2, 10, 16, 13, 3, 4, 2, 15, 1, 19};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int L = 151;
    vector<int> pieces = {39, 26, 5, 48, 52, 55, 41, 37};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int L = 939;
    vector<int> pieces = {15, 47, 21, 1, 9, 75, 13, 78, 6, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 461;
    vector<int> pieces = {16, 89, 75, 79, 90, 25, 65, 13, 10, 11, 52, 78, 55, 4, 25};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 201;
    vector<int> pieces = {5, 8, 4, 16, 4, 2, 7, 7, 1, 8, 1, 8};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int L = 661;
    vector<int> pieces = {37, 14, 8, 1, 12, 20, 38, 18, 19, 37, 37, 15, 31};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int L = 527;
    vector<int> pieces = {6, 44, 54, 22, 13, 55, 40, 41, 58, 50, 36, 23, 45, 53, 41};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int L = 390;
    vector<int> pieces = {31, 42, 75, 14, 7, 71, 11, 16, 74, 47, 47};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int L = 386;
    vector<int> pieces = {9, 38, 36, 22, 47, 84, 4, 8, 21, 31, 31, 56, 97, 75};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int L = 306;
    vector<int> pieces = {9, 9, 7, 13, 4, 10, 14, 1, 6, 6, 2, 13, 4, 2, 6};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int L = 632;
    vector<int> pieces = {28, 27, 11, 9, 14, 11, 14, 6, 33, 33, 7, 25};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int L = 401;
    vector<int> pieces = {52, 40, 46, 34, 9, 12, 5, 25, 39, 55, 24, 45};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int L = 819;
    vector<int> pieces = {54, 29, 11, 50, 72, 54, 31, 72, 54, 48, 64, 71, 8};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int L = 703;
    vector<int> pieces = {73, 76, 90, 42, 84, 13, 57, 88, 80, 45, 80, 1, 78, 41, 73, 40, 97, 42};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int L = 308;
    vector<int> pieces = {3, 12, 18, 18, 19, 7, 2, 6, 12, 8, 8, 6, 5, 3, 16, 14, 12, 6, 1, 14};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int L = 635;
    vector<int> pieces = {39, 37, 10, 37, 16, 24, 26, 39, 5, 1, 14, 20, 28, 13, 26, 1, 22, 6, 5, 18};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int L = 577;
    vector<int> pieces = {20, 44, 24, 4, 39, 5, 1, 20, 1, 31, 14, 49, 45, 43, 36, 11, 3, 8, 36, 11};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int L = 869;
    vector<int> pieces = {26, 57, 74, 10, 35, 23, 65, 55, 1, 33, 79, 71, 33, 77, 64, 14, 22};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int L = 626;
    vector<int> pieces = {4, 91, 94, 41, 14, 68, 41, 8, 8, 72, 21, 3, 79, 37, 75, 43, 89, 68, 57};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int L = 508;
    vector<int> pieces = {12, 7, 12, 12, 3, 4, 6, 6, 10, 16, 14, 15, 6, 16, 13, 7, 9, 13, 11};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int L = 815;
    vector<int> pieces = {2, 14, 14, 23, 3, 12, 33, 36, 24, 21, 25, 11, 8, 6, 29, 27, 21, 22, 23};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int L = 800;
    vector<int> pieces = {24, 58, 33, 21, 47, 15, 51, 8, 46, 23, 40, 34, 28, 6, 19, 57, 15};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 678;
    vector<int> pieces = {13, 59, 74, 66, 6, 42, 37, 67, 15, 44, 17, 65, 64, 22, 20, 42, 57, 33};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int L = 261;
    vector<int> pieces = {44, 87, 93, 36, 1, 70, 82, 90, 62, 31, 99, 40, 19, 8, 73, 19, 77, 76, 5, 73};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int L = 285;
    vector<int> pieces = {25, 55, 12, 82, 70, 88, 1, 72, 51, 35, 81, 4, 32, 83, 87, 21, 80, 90, 49, 2};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int L = 185;
    vector<int> pieces = {99, 82, 20, 44, 35, 10, 72, 89, 72, 15, 87, 21, 65, 60, 52, 94, 16, 46, 1, 58};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int L = 376;
    vector<int> pieces = {3, 2, 18, 13, 18, 14, 3, 20, 19, 19, 8, 19, 10, 11, 20, 7, 7, 17, 13, 6};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int L = 922;
    vector<int> pieces = {52, 46, 8, 52, 77, 30, 56, 75, 8, 7, 93, 29, 42, 83, 39, 96, 30, 40, 36, 57, 61, 81, 71, 62, 12};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int L = 262;
    vector<int> pieces = {17, 4, 15, 16, 5, 1, 11, 10, 18, 4, 19, 16, 2, 11, 8, 15, 1, 16, 12, 15, 11, 4};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int L = 57;
    vector<int> pieces = {34, 12, 23, 22, 14, 29, 1, 24, 14, 38, 31, 32, 24, 24, 1, 9, 30, 34, 3, 1, 17, 21, 19, 27, 20};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int L = 683;
    vector<int> pieces = {25, 13, 17, 3, 5, 13, 57, 19, 28, 49, 3, 34, 32, 37, 15, 33, 21, 58, 47, 16, 3, 36, 6, 19, 34};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int L = 233;
    vector<int> pieces = {9, 65, 64, 50, 3, 42, 13, 4, 7, 22, 71, 6, 38, 29, 25, 30, 20, 50, 65, 45, 56};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int L = 425;
    vector<int> pieces = {24, 62, 25, 94, 92, 2, 58, 16, 77, 78, 5, 8, 85, 52, 8, 63, 30, 87, 24, 96, 59, 86, 33, 49, 53};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int L = 464;
    vector<int> pieces = {2, 10, 15, 6, 4, 4, 6, 5, 8, 12, 15, 19, 18, 11, 11, 10, 19, 13, 1, 9, 15, 5, 10, 14};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int L = 444;
    vector<int> pieces = {2, 7, 22, 9, 16, 21, 32, 14, 31, 26, 39, 36, 9, 11, 20, 21, 34, 18, 37, 25, 31, 34, 15, 1, 16};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int L = 130;
    vector<int> pieces = {33, 16, 56, 37, 53, 56, 6, 56, 16, 33, 4, 7, 16, 25, 53, 40, 1, 24, 12, 27, 42, 8, 25, 39};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int L = 321;
    vector<int> pieces = {50, 12, 48, 41, 62, 30, 46, 52, 56, 61, 59, 78, 38, 46, 45, 59, 58, 18, 7, 69, 41, 59, 44};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int L = 453;
    vector<int> pieces = {28, 16, 95, 50, 5, 33, 90, 7, 83, 23, 84, 43, 51, 99, 20, 64, 47, 10, 80, 83, 89, 72, 25, 5, 63, 4, 67, 90, 51};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int L = 501;
    vector<int> pieces = {6, 16, 10, 6, 1, 7, 14, 5, 16, 16, 11, 10, 18, 17, 10, 9, 7, 12, 9, 8, 13, 7, 17, 19, 3, 4, 15, 19, 3, 19};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int L = 407;
    vector<int> pieces = {5, 11, 3, 22, 38, 12, 11, 20, 11, 21, 12, 25, 26, 11, 21, 27, 14, 36, 20, 36, 36, 2, 10, 30, 9, 37, 33, 2, 29};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int L = 805;
    vector<int> pieces = {7, 35, 6, 48, 43, 40, 5, 28, 51, 46, 49, 29, 23, 26, 50, 5, 56, 31, 31, 12, 12, 6, 19, 10, 50, 3, 3};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int L = 933;
    vector<int> pieces = {52, 9, 58, 17, 13, 32, 73, 21, 62, 47, 17, 27, 37, 56, 30, 35, 28, 43, 2, 18, 61, 33, 15, 38, 48, 54, 24, 5, 1};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int L = 724;
    vector<int> pieces = {65, 31, 14, 87, 93, 47, 40, 40, 53, 72, 99, 43, 53, 94, 17, 92, 32, 74, 24, 99, 93, 32, 45, 9, 8, 13, 15, 29};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int L = 644;
    vector<int> pieces = {9, 6, 19, 17, 14, 6, 1, 17, 5, 15, 6, 15, 14, 9, 17, 2, 4, 15, 14, 17, 19, 7, 5, 1, 10, 17};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int L = 931;
    vector<int> pieces = {13, 18, 32, 2, 4, 21, 16, 15, 3, 27, 39, 10, 11, 16, 32, 39, 6, 16, 22, 9, 10, 6, 2, 17, 14, 22, 28};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int L = 213;
    vector<int> pieces = {44, 50, 59, 26, 51, 50, 1, 14, 40, 6, 22, 3, 24, 45, 32, 6, 18, 7, 50, 32, 1, 11, 40, 58, 38, 45, 25, 18, 43, 24};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int L = 13;
    vector<int> pieces = {76, 43, 4, 78, 45, 65, 62, 23, 17, 68, 47, 12, 17, 47, 21, 69, 77, 27, 52, 70, 24, 26, 44, 66, 44, 9};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 699;
    vector<int> pieces = {5, 18, 9, 10, 12, 19, 6, 15, 6, 14, 17, 9, 18, 15, 19, 18, 6, 11, 7, 10, 14};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int L = 390;
    vector<int> pieces = {35, 38, 6, 21, 5, 10, 19, 37, 3, 42, 6, 45, 7, 37, 39, 30, 41, 45, 8, 3, 49, 11, 12, 9, 5, 11, 42, 22, 20, 39};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 609;
    vector<int> pieces = {49, 49, 10, 34, 9, 35, 29, 43, 13, 8, 33, 12, 1, 21, 5, 16, 25, 10, 22, 45, 43, 8, 24, 29, 41, 19, 5, 49, 35, 45};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int L = 826;
    vector<int> pieces = {47, 5, 31, 48, 48, 15, 2, 13, 7, 35, 21, 49, 29, 42, 44, 46, 25, 17, 16, 25, 7, 44, 19, 48, 1, 35, 6, 14, 48, 9};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int L = 536;
    vector<int> pieces = {34, 49, 17, 27, 27, 15, 18, 21, 47, 44, 9, 7, 48, 39, 49, 38, 29, 15, 12, 45, 47, 5, 31, 47, 4, 42, 1, 32, 5, 33};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int L = 627;
    vector<int> pieces = {32, 34, 30, 6, 16, 44, 4, 10, 48, 46, 9, 37, 42, 14, 15, 7, 9, 24, 1, 19, 12, 42, 46, 33, 16, 34, 41, 15, 23, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int L = 609;
    vector<int> pieces = {73, 20, 27, 30, 97, 69, 75, 2, 93, 35, 13, 52, 47, 88, 17, 25, 36, 20, 92, 36, 73, 54, 3, 13, 72, 1, 23, 68, 20, 69};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int L = 877;
    vector<int> pieces = {29, 92, 49, 84, 68, 5, 18, 4, 13, 9, 58, 13, 50, 60, 21, 57, 77, 43, 70, 35, 63, 75, 18, 88, 50, 11, 47, 75, 44, 16};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 3;
    vector<int> pieces = {29, 92, 49, 84, 68, 5, 18, 4, 13, 9, 58, 13, 50, 60, 21, 57, 77, 43, 70, 35, 63, 75, 18, 88, 50, 11, 47, 75, 44, 16};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 221;
    vector<int> pieces = {15, 2, 80, 90, 43, 14, 84, 31, 14, 89, 56, 50, 61, 30, 99, 90, 94, 49, 1, 90, 74, 67, 52, 80, 2, 1, 88, 47, 80, 34};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int L = 139;
    vector<int> pieces = {75, 74, 31, 28, 49, 28, 1, 21, 30, 93, 71, 25, 68, 55, 82, 78, 86, 86, 92, 94, 69, 25, 16, 2, 5, 55, 31, 80, 66, 36};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int L = 413;
    vector<int> pieces = {65, 49, 15, 15, 1, 44, 1, 71, 90, 93, 54, 46, 95, 63, 79, 23, 41, 91, 96, 38, 98, 10, 68, 9, 70, 37, 1, 85, 69, 50};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int L = 410;
    vector<int> pieces = {14, 78, 35, 20, 62, 94, 97, 5, 84, 26, 2, 85, 2, 77, 43, 81, 20, 30, 53, 61, 41, 24, 22, 9, 12, 1, 72, 21, 61, 32};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int L = 523;
    vector<int> pieces = {24, 91, 33, 34, 60, 71, 17, 6, 56, 91, 1, 20, 50, 58, 90, 11, 8, 32, 82, 85, 73, 72, 20, 12, 9, 99, 15, 38, 59, 56};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int L = 632;
    vector<int> pieces = {93, 6, 37, 100, 36, 46, 78, 49, 70, 88, 80, 81, 58, 3, 30, 33, 1, 82, 81, 13, 95, 27, 70, 82, 97, 90, 24, 21, 86, 23};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int L = 594;
    vector<int> pieces = {77, 7, 39, 84, 64, 30, 36, 1, 8, 53, 63, 2, 32, 21, 15, 57, 9, 5, 22, 13, 95, 1, 17, 4, 73, 67, 1, 82, 26, 18};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int L = 764;
    vector<int> pieces = {30, 90, 17, 19, 80, 86, 3, 49, 17, 77, 14, 79, 60, 15, 32, 77, 52, 55, 53, 47, 35, 91, 1, 27, 94, 100, 56, 98, 5, 13};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int L = 957;
    vector<int> pieces = {23, 100, 100, 94, 100, 61, 98, 27, 51, 76, 86, 88, 1, 1, 62, 30, 30, 21, 19, 6, 18, 96, 12, 35, 52, 1, 2, 69, 28, 52};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int L = 673;
    vector<int> pieces = {24, 18, 74, 32, 75, 18, 58, 38, 6, 98, 1, 1, 75, 63, 24, 83, 8, 23, 7, 57, 2, 32, 15, 87, 53, 69, 25, 39, 31, 62};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int L = 612;
    vector<int> pieces = {1, 32, 94, 59, 29, 29, 23, 66, 84, 79, 31, 40, 89, 4, 66, 77, 38, 61, 19, 2, 99, 58, 1, 59, 61, 74, 48, 20, 37, 2};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int L = 1000;
    vector<int> pieces = {5, 14, 14, 15, 19, 6, 15, 8, 19, 11, 17, 3, 15, 19, 11, 19, 1, 7, 10, 6, 14, 19, 15, 15, 17, 12, 15, 7, 2, 6};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int L = 589;
    vector<int> pieces = {1, 18, 7, 15, 12, 12, 19, 4, 6, 19, 18, 10, 15, 5, 5, 4, 4, 4, 7, 4, 5, 5, 11, 16, 10, 18, 13, 16, 6, 1};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int L = 637;
    vector<int> pieces = {14, 7, 13, 4, 6, 16, 4, 12, 4, 15, 5, 17, 13, 9, 8, 16, 17, 1, 8, 8, 3, 5, 6, 7, 2, 2, 12, 3, 19, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int L = 69;
    vector<int> pieces = {15, 9, 5, 17, 9, 15, 16, 10, 16, 9, 18, 15, 17, 17, 16, 13, 8, 10, 2, 17, 12, 9, 15, 19, 5, 12, 17, 3, 11, 15};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int L = 724;
    vector<int> pieces = {16, 14, 11, 8, 10, 9, 13, 12, 10, 6, 2, 19, 7, 10, 3, 5, 5, 6, 4, 13, 9, 14, 4, 15, 2, 4, 14, 15, 10, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int L = 975;
    vector<int> pieces = {7, 14, 5, 19, 8, 15, 17, 10, 13, 11, 11, 7, 7, 3, 12, 1, 12, 15, 19, 15, 2, 17, 18, 12, 9, 2, 19, 17, 15, 14};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int L = 865;
    vector<int> pieces = {13, 6, 15, 8, 19, 19, 9, 2, 14, 1, 5, 19, 5, 9, 6, 18, 17, 5, 9, 10, 11, 17, 17, 12, 18, 2, 12, 4, 4, 2};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int L = 1000;
    vector<int> pieces = {8, 3, 2, 24, 18, 4, 27, 4, 10, 18, 7, 29, 12, 5, 23, 20, 28, 3, 29, 13, 27, 4, 17, 25, 24, 9, 14, 13, 29, 14};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int L = 996;
    vector<int> pieces = {22, 6, 21, 8, 6, 22, 22, 7, 4, 21, 7, 7, 19, 9, 22, 3, 11, 11, 11, 3, 4, 2, 11, 8, 3, 3, 13, 9, 11, 23};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int L = 971;
    vector<int> pieces = {6, 10, 4, 11, 22, 11, 2, 15, 13, 6, 4, 7, 16, 7, 13, 22, 2, 20, 4, 8, 16, 7, 9, 12, 13, 21, 9, 16, 14, 13};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int L = 992;
    vector<int> pieces = {63, 100, 100, 16, 31, 15, 100, 53, 69, 87, 87, 32, 11, 25, 43, 80, 33, 100, 58, 19, 100, 100, 4, 41, 85, 64, 4, 63, 41, 32};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int L = 368;
    vector<int> pieces = {100, 28, 3, 78, 100, 100, 60, 15, 100, 28, 41, 71, 92, 1, 92, 38, 19, 76, 100, 15, 26, 11, 94, 79, 58, 91, 100, 97, 20, 53};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int L = 53;
    vector<int> pieces = {1, 1, 1, 23, 25, 26, 28, 33, 54, 100};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int L = 50;
    vector<int> pieces = {60, 2, 1, 2, 1, 2, 1, 2, 25, 1, 2, 1, 2, 26, 1, 2, 1, 40, 41, 1, 1, 1, 40, 16, 1, 1, 16, 1, 17, 2};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int L = 1;
    vector<int> pieces = {1, 1, 1};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int L = 75;
    vector<int> pieces = {7, 7, 16, 7, 7, 16, 7, 7, 16, 7, 38, 38};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int L = 10;
    vector<int> pieces = {1, 1, 100};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int L = 1000;
    vector<int> pieces = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 14, 15, 16, 17, 18, 19, 20, 22, 23, 34, 5, 6, 7, 4, 4, 3, 2};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int L = 10;
    vector<int> pieces = {1, 1, 1, 1, 1, 20};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int L = 460;
    vector<int> pieces = {2, 3, 1, 5, 1, 6, 1, 24, 3, 2, 58, 69, 67, 35, 64, 27, 32, 9, 45, 62, 54, 87, 32, 17, 23, 14, 15, 16, 68, 2};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int L = 10;
    vector<int> pieces = {1, 1, 11};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int L = 1000;
    vector<int> pieces = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int L = 1000;
    vector<int> pieces = {100, 97, 94, 91, 88, 85, 82, 79, 76, 73, 70, 67, 64, 61, 58, 55, 52, 49, 46, 43, 40, 37, 34, 31, 28, 25, 22, 19, 16, 13};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int L = 278;
    vector<int> pieces = {1, 2, 3, 3, 12, 17, 19, 26, 27, 28, 29, 30, 37, 49, 54, 75, 76, 85};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int L = 74;
    vector<int> pieces = {5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 10, 10, 10, 10, 30, 30, 30, 30, 40, 41};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 703;
    vector<int> pieces = {69, 71, 89, 40, 84, 13, 57, 88, 80, 45, 75, 3, 75, 41, 73, 40, 95, 42, 55, 54, 4};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int L = 180;
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 59, 60, 60, 100, 100};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int L = 20;
    vector<int> pieces = {1, 1, 1, 3, 7, 7, 80};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int L = 1000;
    vector<int> pieces = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int L = 1000;
    vector<int> pieces = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 32, 44, 55, 66, 77, 88};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int L = 9;
    vector<int> pieces = {4, 2, 1, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int L = 100;
    vector<int> pieces = {2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int L = 10;
    vector<int> pieces = {1, 1, 1, 100};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 10;
    vector<int> pieces = {20, 5};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int L = 18;
    vector<int> pieces = {9, 2, 2, 2, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int L = 1000;
    vector<int> pieces = {73, 76, 90, 42, 84, 13, 57, 88, 80, 45, 80, 78, 41, 73, 40, 97, 42, 1, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int L = 1000;
    vector<int> pieces = {1, 10, 15, 16, 17, 20, 30, 25, 40, 44, 40, 44, 13, 13, 13, 100, 99, 98, 99, 45, 44, 12, 11, 10, 2, 3, 4, 55, 60, 77};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int L = 19;
    vector<int> pieces = {2, 2, 2, 10, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int L = 1000;
    vector<int> pieces = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int L = 50;
    vector<int> pieces = {1, 2, 3, 4, 5, 6, 100};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int L = 999;
    vector<int> pieces = {97, 58, 46, 87, 1, 32, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 54, 87, 52, 21, 23, 24, 85, 87, 45, 88, 89, 19, 99, 87};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int L = 18;
    vector<int> pieces = {2, 2, 10, 10, 2};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    int L = 17;
    vector<int> pieces = {1, 1, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int L = 18;
    vector<int> pieces = {2, 2, 2, 9, 9, 10};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int L = 20;
    vector<int> pieces = {30, 1};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int L = 168;
    vector<int> pieces = {1, 8, 80, 100, 90, 1, 1, 1, 1, 1, 1, 60};
    PlacingPieces* pObj = new PlacingPieces();
    clock_t start = clock();
    int result = pObj->optimalPlacement(L, pieces);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21468741&rd=9996&pm=6540
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
 
#define MAX(A, B) (((A) >= (B)) ? (A) : (B))
#define MIN(A, B) (((A) <= (B)) ? (A) : (B))
#define ABS(X) (((X) >= 0) ? (X) : -(X))
#define SWAP(A, B, C) ((C) = (A), (A) = (B), (B) = (C))
 
using namespace std;
 
char D[31][31][1001][31];
 
class PlacingPieces
{
  public: int optimalPlacement( int L, vector <int> P )
  {
    int N = P.size();
    P.push_back(L + 1);
    memset(D, 0, sizeof(D));
    D[0][0][L][N] = 1;
    for (int i = 0; i < N; i++)
      for (int j = 0; j <= i; j++)
        for (int k = 0; k <= L; k++)
          for (int t = 0; t <= N; t++)
            if (D[i][j][k][t])
            {
              int f = t;
              if (P[i] < P[t])
                f = i;
              D[i + 1][j][k][f] = 1;
              if (k >= P[i])
                D[i + 1][j + 1][k - P[i]][t] = 1;
            }
    int Ans = N;
    int i = N;
    for (int j = 0; j <= i; j++)
      for (int k = 0; k <= L; k++)
        for (int t = 0; t <= N; t++)
          if (D[i][j][k][t] && P[t] * (j + 1) > k)
          {
            Ans = MIN(Ans, j);
/*
            if (!Ans)
            {
              printf("i = %d, j = %d, k = %d, t = %d\n", i, j, k, t);
            }
*/
          }
    return Ans;
  }
};
 
// Code by Burunduk3
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/