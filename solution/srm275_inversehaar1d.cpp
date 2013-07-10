/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5896
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

class InverseHaar1D {
public:
    vector<int> transform(vector<int> transformedData, int L);
};

vector<int> InverseHaar1D::transform(vector<int> transformedData, int L) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> transformedData = {101, -53};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 77};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> transformedData = {3, 8, -1, -2};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> transformedData = {11, -5, -1, -2};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> transformedData = {369, 477, 451, 262, 47, 135, -125, -2, 18, -23, 30, 101, -5, -18, 54, -20, 11, 45, -5, 70, -24, 2, -50, 15, 55, -62, -23, -17, 44, -8, -44, -52};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 51, 70, 25, 32, 37, 81, 11, 72, 96, 70, 68, 43, 93, 25, 10, 67, 12, 11, 73, 56, 79, 68, 85, 68, 24, 15, 23, 6, 50, 12, 64};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> transformedData = {20, 0, -4, 4, -1, -1, 1, 1};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> transformedData = {3, -1};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
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
    vector<int> transformedData = {58, -4};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 31};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> transformedData = {115, 160, 25, -16};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 45, 72, 88};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> transformedData = {190, -104, -1, -35};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 22, 56, 91};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> transformedData = {154, 83, 145, 98, -26, -79, 47, 84};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64, 90, 2, 81, 96, 49, 91, 7};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> transformedData = {125, 208, -39, -110, 17, 70, 17, 33};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 13, 76, 6, 33, 16, 96, 63};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> transformedData = {412, 34, 9, 95, 64, -55, -8, 17};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {90, 26, 26, 81, 67, 75, 32, 15};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> transformedData = {77, 173, 37, 27, 22, 97, 127, 68, 47, -25, -29, 5, -20, 67, 53, 18};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 15, 74, 99, 4, 33, 16, 11, 1, 21, 82, 15, 90, 37, 43, 25};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> transformedData = {215, 207, 248, 194, 67, 49, -68, -16, 47, 18, -50, 71, -34, -20, -21, 57};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94, 47, 46, 28, 39, 89, 75, 4, 28, 62, 69, 89, 34, 55, 81, 24};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> transformedData = {429, 449, -145, 89, -56, 63, -45, -114, -21, 75, -23, -6, 14, -39, -15, 5};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 32, 87, 12, 76, 99, 53, 59, 63, 49, 59, 98, 9, 24, 76, 71};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> transformedData = {930, -44, 67, -61, 47, -130, 41, 44, -19, -64, -29, -39, 25, -80, 5, -25};
    int L = 4;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {66, 85, 20, 84, 0, 29, 60, 99, 76, 51, 3, 83, 82, 77, 45, 70};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> transformedData = {171, 69, 129, 69, 99, 150, 129, 27, 117, 163, 160, 75, 88, 133, 51, 181, 25, -51, -9, 31, -51, -44, 37, -19, -43, -29, -12, -17, 46, -1, -3, -13};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 73, 9, 60, 60, 69, 50, 19, 24, 75, 53, 97, 83, 46, 4, 23, 37, 80, 67, 96, 74, 86, 29, 46, 67, 21, 66, 67, 24, 27, 84, 97};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> transformedData = {219, 221, 207, 171, 208, 215, 165, 262, -41, 65, 49, -73, -108, -19, 39, 14, -45, 22, -45, 74, 22, -31, -35, -50, -24, 30, 74, -21, -6, 17, -60, -24};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 67, 76, 54, 49, 94, 76, 2, 75, 53, 24, 55, 7, 42, 36, 86, 13, 37, 94, 64, 86, 12, 48, 69, 48, 54, 40, 23, 39, 99, 50, 74};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> transformedData = {619, 542, 332, 465, 75, 20, -38, -17, 41, -16, -53, -65, -87, -9, 110, 67, 2, -15, 70, 46, -72, -17, -14, -29, 0, -17, -40, 49, -1, 37, -16, 85};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 96, 69, 84, 99, 29, 95, 49, 21, 93, 75, 92, 42, 56, 67, 96, 15, 15, 50, 67, 24, 64, 73, 24, 83, 84, 47, 10, 69, 85, 86, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> transformedData = {659, 785, -19, -15, 28, 47, 9, 132, 128, -20, 83, -52, 21, -100, 34, 82, -39, -13, 1, 31, 30, 37, -19, 71, 57, -36, 44, -40, -48, -22, -60, 22};
    int L = 4;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56, 95, 5, 18, 32, 31, 57, 26, 84, 54, 46, 9, 14, 33, 85, 14, 83, 26, 26, 62, 44, 0, 52, 92, 51, 99, 47, 69, 24, 84, 24, 2};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> transformedData = {1504, -368, -18, 50, 5, 17, -19, -151, 48, 61, -53, -62, -29, 42, 26, 53, -12, 44, -24, -23, -51, -62, -8, 36, 34, -33, -17, -59, 8, 30, -17, 54};
    int L = 5;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 53, 45, 1, 37, 61, 7, 30, 0, 51, 21, 83, 15, 23, 68, 32, 69, 35, 50, 83, 66, 83, 24, 83, 47, 39, 45, 15, 79, 96, 88, 34};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> transformedData = {25, 3};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 11};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> transformedData = {146, 150, 32, -14};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 57, 68, 82};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> transformedData = {296, -4, 32, -14};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 57, 68, 82};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> transformedData = {163, 73, 91, 78, -9, -29, -47, -74};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {77, 86, 22, 51, 22, 69, 2, 76};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> transformedData = {236, 169, 90, 13, -9, -29, -47, -74};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {77, 86, 22, 51, 22, 69, 2, 76};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> transformedData = {405, 67, 90, 13, -9, -29, -47, -74};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {77, 86, 22, 51, 22, 69, 2, 76};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> transformedData = {152, 102, 135, 158, 53, 180, 128, 98, 18, -18, 51, 0, -17, -18, 40, 50};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 67, 42, 60, 93, 42, 79, 79, 18, 35, 81, 99, 84, 44, 74, 24};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> transformedData = {254, 293, 233, 226, 50, -23, -127, 30, 18, -18, 51, 0, -17, -18, 40, 50};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 67, 42, 60, 93, 42, 79, 79, 18, 35, 81, 99, 84, 44, 74, 24};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> transformedData = {547, 459, -39, 7, 50, -23, -127, 30, 18, -18, 51, 0, -17, -18, 40, 50};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 67, 42, 60, 93, 42, 79, 79, 18, 35, 81, 99, 84, 44, 74, 24};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> transformedData = {1006, 88, -39, 7, 50, -23, -127, 30, 18, -18, 51, 0, -17, -18, 40, 50};
    int L = 4;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 67, 42, 60, 93, 42, 79, 79, 18, 35, 81, 99, 84, 44, 74, 24};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> transformedData = {171, 116, 166, 106, 137, 94, 15, 49, 162, 159, 100, 87, 67, 104, 76, 90, 13, -12, -8, -18, 47, -58, 9, -49, 28, 15, 36, -21, 37, 54, 18, -60};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 79, 52, 64, 79, 87, 44, 62, 92, 45, 18, 76, 12, 3, 0, 49, 95, 67, 87, 72, 68, 32, 33, 54, 52, 15, 79, 25, 47, 29, 15, 75};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> transformedData = {287, 272, 231, 64, 321, 187, 171, 166, 55, 60, 43, -34, 3, 13, -37, -14, 13, -12, -8, -18, 47, -58, 9, -49, 28, 15, 36, -21, 37, 54, 18, -60};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 79, 52, 64, 79, 87, 44, 62, 92, 45, 18, 76, 12, 3, 0, 49, 95, 67, 87, 72, 68, 32, 33, 54, 52, 15, 79, 25, 47, 29, 15, 75};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> transformedData = {559, 295, 508, 337, 15, 167, 134, 5, 55, 60, 43, -34, 3, 13, -37, -14, 13, -12, -8, -18, 47, -58, 9, -49, 28, 15, 36, -21, 37, 54, 18, -60};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 79, 52, 64, 79, 87, 44, 62, 92, 45, 18, 76, 12, 3, 0, 49, 95, 67, 87, 72, 68, 32, 33, 54, 52, 15, 79, 25, 47, 29, 15, 75};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> transformedData = {854, 845, 264, 171, 15, 167, 134, 5, 55, 60, 43, -34, 3, 13, -37, -14, 13, -12, -8, -18, 47, -58, 9, -49, 28, 15, 36, -21, 37, 54, 18, -60};
    int L = 4;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 79, 52, 64, 79, 87, 44, 62, 92, 45, 18, 76, 12, 3, 0, 49, 95, 67, 87, 72, 68, 32, 33, 54, 52, 15, 79, 25, 47, 29, 15, 75};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> transformedData = {1699, 9, 264, 171, 15, 167, 134, 5, 55, 60, 43, -34, 3, 13, -37, -14, 13, -12, -8, -18, 47, -58, 9, -49, 28, 15, 36, -21, 37, 54, 18, -60};
    int L = 5;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 79, 52, 64, 79, 87, 44, 62, 92, 45, 18, 76, 12, 3, 0, 49, 95, 67, 87, 72, 68, 32, 33, 54, 52, 15, 79, 25, 47, 29, 15, 75};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> transformedData = {80, 0};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 40};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> transformedData = {94, 94, 0, 0};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 47, 47, 47};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> transformedData = {192, 0, 0, 0};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 48, 48, 48};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> transformedData = {120, 120, 120, 120, 0, 0, 0, 0};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 60, 60, 60, 60, 60, 60, 60};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> transformedData = {384, 384, 0, 0, 0, 0, 0, 0};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {96, 96, 96, 96, 96, 96, 96, 96};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> transformedData = {576, 0, 0, 0, 0, 0, 0, 0};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72, 72, 72, 72, 72, 72, 72, 72};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> transformedData = {100, 100, 100, 100, 100, 100, 100, 100, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> transformedData = {284, 284, 284, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> transformedData = {544, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68, 68};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> transformedData = {1408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 4;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 88};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> transformedData = {144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72, 72};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> transformedData = {388, 388, 388, 388, 388, 388, 388, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 2;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> transformedData = {776, 776, 776, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> transformedData = {1520, 1520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 4;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> transformedData = {3200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 5;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> transformedData = {-171, -69, -129, -69, -99, -150, -129, -27, -117, -163, -160, -75, -88, -133, -51, -181, -25, 51, 9, -31, 51, 44, -37, 19, 43, 29, 12, 17, -46, 1, 3, 13};
    int L = 1;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-98, -73, -9, -60, -60, -69, -50, -19, -24, -75, -53, -97, -83, -46, -4, -23, -37, -80, -67, -96, -74, -86, -29, -46, -67, -21, -66, -67, -24, -27, -84, -97};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> transformedData = {-1408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 4;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-88, -88, -88, -88, -88, -88, -88, -88, -88, -88, -88, -88, -88, -88, -88, -88};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> transformedData = {-1504, 368, 18, -50, -5, -17, 19, 151, -48, -61, 53, 62, 29, -42, -26, -53, 12, -44, 24, 23, 51, 62, 8, -36, -34, 33, 17, 59, -8, -30, 17, -54};
    int L = 5;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-41, -53, -45, -1, -37, -61, -7, -30, 0, -51, -21, -83, -15, -23, -68, -32, -69, -35, -50, -83, -66, -83, -24, -83, -47, -39, -45, -15, -79, -96, -88, -34};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> transformedData = {-284, -284, -284, -284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int L = 3;
    InverseHaar1D* pObj = new InverseHaar1D();
    clock_t start = clock();
    vector<int> result = pObj->transform(transformedData, L);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-71, -71, -71, -71, 0, 0, 0, 0, -71, -71, -71, -71, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16211408&rd=8072&pm=5896
********************************************************************************
#include <iostream>
#include <vector>
 
using namespace std;
 
class InverseHaar1D {
    public:
        vector <int> transform(vector <int> data, int L) {
            if (L > 1) {
                vector <int> data2, data3;
                data2.resize(data.size()/2);
                int i;
                for (i = 0; i < data.size()/2; i++)
                    data2[i] = data[i];
                data3 = transform(data2, L-1);
                for (i = 0; i < data.size()/2; i++)
                    data[i] = data3[i];
            }
            vector <int> res;
            int i, len = data.size();
            res.resize(len);
            for (i = 0; i < len/2; i++) {
                res[i*2] = (data[i] + data[len/2+i]) / 2;
                res[i*2+1] = (data[i] - data[len/2+i]) / 2;
            }
            return res;
        }
};

********************************************************************************
*******************************************************************************/