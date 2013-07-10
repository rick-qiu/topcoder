/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1937
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

class StairClimb {
public:
    int stridesTaken(vector<int> flights, int stairsPerStride);
};

int StairClimb::stridesTaken(vector<int> flights, int stairsPerStride) {
    int ret;
    return ret;
}


int test0() {
    vector<int> flights = {15};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> flights = {15, 15};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> flights = {5, 11, 9, 13, 8, 30, 14};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> flights = {5, 5, 5};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> flights = {5};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
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
    vector<int> flights = {12, 6, 28, 11, 15, 6, 7, 23, 25, 6, 22, 30, 11, 16};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> flights = {25, 18, 24, 5, 24, 24, 17, 23, 10, 9, 22, 25, 27, 22, 16, 17, 12};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> flights = {7, 22, 8, 15, 14, 11, 6, 15, 29, 18, 12, 14, 5, 14, 27, 8, 18, 10, 10, 19, 13, 12, 29, 10, 14, 9, 29, 29, 13, 13, 28, 28, 25, 29, 13, 21, 29, 14, 11, 22, 14, 14, 17, 16, 10, 13, 12, 10};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 372;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> flights = {7, 18, 13, 29, 22, 15, 8, 29, 13, 26, 13, 9, 23, 19, 19, 27, 23, 7, 5, 7, 22, 25, 27, 17, 23, 12, 20, 21, 16, 21, 28, 19, 10, 6, 14, 23, 8, 15, 22};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> flights = {8, 14, 30, 22, 25, 16, 19, 22, 20, 12, 22, 10, 10, 5, 14, 21, 5, 25, 17, 5, 9, 24, 26, 18, 20, 28};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> flights = {30, 24, 17, 5, 18, 14, 14, 10, 21, 13, 19, 25, 13, 5, 29, 20, 22, 17, 19, 15, 26, 23, 30, 22, 24, 5, 10, 20, 9, 24, 16, 30};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 269;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> flights = {19, 15, 8, 9, 6, 9, 20, 20, 11, 8, 17};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> flights = {9, 30, 15, 27, 12, 7, 14, 6, 26, 19, 7, 23, 27, 16, 15, 10, 10, 10, 5, 19, 29, 14, 18, 26, 20, 30, 15, 9, 6, 27, 18, 28, 9, 19, 11, 10, 23, 13, 15, 23, 18};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 435;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> flights = {27, 5, 8, 23, 7, 15, 17, 26, 26, 19, 23, 24, 8, 29, 30, 6, 9, 6, 27, 26, 29, 9, 27, 25, 12, 30, 13, 22, 14, 5, 16, 10};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> flights = {15, 16, 27, 28, 6, 14, 25, 28, 30, 27, 7, 22, 17, 19};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> flights = {19, 11, 8, 11, 11, 7, 24, 22, 7, 22, 27, 9, 25, 11, 22, 12, 11, 10, 6, 7, 10, 11, 28, 19, 20, 24, 8, 24, 23, 10, 7, 14, 10, 7, 23};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> flights = {27, 20, 17, 30, 9, 18, 17, 24, 13, 21, 30, 26, 15, 12, 12, 10, 24, 25, 13, 27, 19, 13, 6, 21, 7, 20, 23, 7, 16, 15, 30, 30, 9, 24, 18, 10, 14, 12, 18, 14, 5, 22, 30, 23, 12, 16, 18, 8};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> flights = {23, 29, 6, 10, 22, 6, 7, 15, 11, 24, 24, 6, 16, 5, 24, 17, 25, 6, 27, 30, 23, 30, 19, 18, 22, 17, 15, 29, 17};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> flights = {8, 15, 26, 9, 29, 20, 22, 30, 14, 24, 26, 16, 13, 17, 6, 12, 10, 19, 29, 12, 28};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> flights = {25, 17, 26, 17, 29, 29, 24, 20, 29, 16, 10, 18, 18, 22, 5, 23};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> flights = {15, 30, 8, 26, 9, 28, 23, 12, 9, 15, 20, 18, 13, 17, 15, 15, 13, 29, 14, 16, 17, 17, 17, 28};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> flights = {11, 25, 7};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> flights = {26, 16, 12, 26, 29, 5, 19, 19, 16, 20, 7, 27, 14, 12, 8, 9, 9, 27, 7, 15, 24, 22, 17, 7, 28, 8, 27, 9, 20, 15, 16};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> flights = {14, 5, 8, 11, 23, 16, 14, 17, 5, 13, 12, 28, 29, 17, 25, 13, 13, 26, 12, 24, 22, 22, 13, 27, 18, 6, 24, 18, 11, 26, 12, 24};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> flights = {30, 22, 20, 8, 22, 24, 8, 12, 13, 9, 21, 25, 13, 11, 27, 19, 28, 16, 6, 7, 25, 15, 27, 30, 13, 28, 13, 21, 18, 14, 6, 15, 28, 28, 16, 13};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> flights = {14, 27, 29, 26, 8, 29, 8, 9, 22, 11, 27, 28, 12, 15, 30, 18, 26, 22};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> flights = {19, 7, 28, 15, 13, 9, 12};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> flights = {8, 24, 22, 17, 5, 12, 15, 19, 13, 23, 28, 25};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> flights = {15, 22, 20, 16, 15, 13, 7, 30};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> flights = {24, 30, 22, 13, 6, 23, 8, 15, 24, 17, 24, 19, 16, 22, 10, 30, 30, 8, 27, 13, 8, 5, 10, 7, 25, 15, 12, 26, 18, 30, 25, 14, 7, 13, 14, 9, 5, 25, 18};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> flights = {7, 18, 17, 28, 9, 6, 15, 30, 28, 28, 21, 7, 7, 15, 19};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> flights = {11, 28, 11, 17, 29, 5, 29, 10, 9, 7, 19, 9, 5, 8, 6, 11, 16, 24, 13, 21, 17, 7, 16, 15, 23, 12, 25, 6, 14, 15, 26, 15};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> flights = {10, 23, 11, 27, 14, 15, 27, 20, 22, 28, 30, 27, 8, 11, 11, 27, 11, 27, 27, 17, 23, 25, 16};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> flights = {15, 14, 16, 21, 27, 16, 26, 20};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> flights = {26, 17, 20, 6, 15, 9, 22, 5, 26, 23, 19, 26, 23, 16, 29, 11, 19, 5, 20, 6, 12, 9, 29, 21, 27, 14, 19, 24, 22, 28};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 207;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> flights = {15, 15, 5, 14, 15, 26, 27, 18, 9, 18, 18, 19, 20, 15, 22, 13, 25, 19, 28, 26, 10, 13, 13, 27, 29, 10, 17, 22, 10, 13};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> flights = {25, 6, 6};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> flights = {28, 27, 11, 23, 19, 7, 30, 30, 15, 18, 23, 30, 18, 14, 21, 16, 25, 16, 10, 9, 24, 28, 12, 7, 29, 29, 11, 13, 28, 18, 30};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> flights = {24, 30, 6, 5, 22, 23, 30, 7, 28, 18, 16, 26, 18, 28, 29, 13, 18, 7, 30, 30, 10, 27, 16, 24, 17, 15, 6, 16, 15, 14, 18, 5, 23, 18, 21, 29, 18, 19, 24, 13, 14, 21, 10, 25, 11, 12};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> flights = {6, 17, 6, 17, 20, 27, 8, 24, 23, 20, 12, 28, 8, 14, 12, 5, 20, 16, 19, 23};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> flights = {13, 24, 28, 22};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> flights = {28, 12, 24, 16, 14, 21, 16, 7, 12, 24, 28, 5, 27, 16, 22, 20, 7, 11, 22, 6, 17, 16, 14, 22, 21, 8};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> flights = {19, 7, 8, 10, 23, 5, 16, 8, 24, 12, 15, 9};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> flights = {12, 25, 19, 19, 16, 10, 11, 16, 16, 15, 22, 22, 5, 12, 20, 16, 20, 19, 13, 18, 26, 6, 12, 28, 9, 25, 24, 7, 16, 12, 20, 20, 11, 28, 25, 5, 30, 7, 29, 11, 19, 5, 9, 17, 12, 30, 18, 24, 12};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 388;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> flights = {27, 22, 5, 7, 27, 11, 13, 26, 25, 20, 15};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> flights = {12, 6, 11, 13, 5, 27};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> flights = {24, 27, 30, 13, 30, 19, 29, 21, 24, 21, 19, 25, 29, 25, 10, 20, 29, 29, 10, 27, 6, 16};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> flights = {16, 9, 20, 18, 17, 13, 28, 7, 11, 21, 19, 14, 17, 29, 21, 17, 5};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> flights = {17, 5, 30, 26, 14, 23, 13, 22, 28, 21, 23, 24, 19, 20, 26, 26, 12, 6, 10, 8, 29, 28, 22, 20, 15, 14, 27, 26, 22, 8, 15, 26, 29, 15};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> flights = {29, 29, 26, 26, 18, 15, 14, 5, 29, 7};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> flights = {25, 20, 21, 11, 18, 16, 5, 23, 21, 10, 20};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> flights = {22, 14, 17, 11, 22, 15, 14, 17, 24, 19, 22, 5, 13, 21, 13, 29, 14, 28, 13, 11, 26, 10, 10, 28, 13, 14, 29, 9, 6, 28, 6, 14, 7, 7, 15};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> flights = {24, 19, 27, 23, 18, 23, 28, 27, 14, 6, 7, 27, 22, 18, 29, 20, 9, 25, 22};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> flights = {8, 19, 25, 8, 9, 30, 21, 14, 24, 24, 27, 11, 25, 5, 30, 22, 7, 19, 25, 20, 8, 12, 11, 20, 27, 23, 19, 10, 30, 25, 30};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> flights = {7, 21, 21, 14, 29, 8, 28, 9, 5, 13, 15, 20, 28, 22, 12, 30, 24, 6, 18, 25, 12, 12, 15, 5, 25, 7, 5, 11, 27, 16, 17, 19, 7, 25, 15, 27, 21, 24, 10, 5, 16};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 430;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> flights = {9, 9, 9};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> flights = {5, 11, 9, 13, 8, 30, 14};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> flights = {10, 10, 10, 10, 10, 10, 10};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> flights = {5, 6, 5, 12};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
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
    vector<int> flights = {5, 5};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> flights = {9, 9, 9, 9};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> flights = {15, 15, 16, 17};
    int stairsPerStride = 2;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> flights = {5, 12, 19, 13, 8, 30, 14, 22, 20};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> flights = {19, 24, 27, 17};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> flights = {17, 17};
    int stairsPerStride = 3;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> flights = {15};
    int stairsPerStride = 4;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> flights = {14};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> flights = {5, 5};
    int stairsPerStride = 5;
    StairClimb* pObj = new StairClimb();
    clock_t start = clock();
    int result = pObj->stridesTaken(flights, stairsPerStride);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307078&rd=4645&pm=1937
********************************************************************************
#include <cmath> 
#include <algorithm> 
#include <set> 
#include <map> 
#include <queue> 
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 
class StairClimb { 
public: 
  int stridesTaken(vector <int> flights, int stairsPerStride) { 
    int count = 0; 
    for (int i = 0; i < flights.size(); i++) { 
      count += flights[i]/stairsPerStride; 
      if (flights[i]%stairsPerStride != 0) 
  count++; 
    } 
    return count + (flights.size()-1)*2; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/