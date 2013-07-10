/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6194
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

class AllWoundUp {
public:
    int maxWind(vector<int> x, vector<int> y);
};

int AllWoundUp::maxWind(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 4};
    vector<int> y = {-2, 9};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {1, 1, 3, 3};
    vector<int> y = {-1, 0, 0, 1};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 1, 1, 0, 2};
    vector<int> y = {1, -1, 1, -1, 1};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 1000, 500, 0, 1000, 500, 500, 1000, 0, 500, 1000, 0};
    vector<int> y = {-100, -100, 100, -100, -100, 100, 100, -100, -100, 100, -100, -100};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 1000, 500, 0, 1000, 500, 500, 1000, 0, 500};
    vector<int> y = {-100, -100, 100, -100, -100, 100, 100, -100, -100, 100};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {0, 0, 1, 1};
    vector<int> y = {0, 1, 1, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 1, 1, 0};
    vector<int> y = {0, 0, 1, 1};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-1, 1, 0};
    vector<int> y = {-1, -1, 1};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {1, -1, 0};
    vector<int> y = {-1, -1, 1};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-1, 1};
    vector<int> y = {7, 7};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-1, 1};
    vector<int> y = {0, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-7, -7};
    vector<int> y = {5, -2};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {3};
    vector<int> y = {0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-2};
    vector<int> y = {-2};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-73, 57, 24, 57, -45, -11, 20, -83, -15, 48, 27, 15, 59, -15, 0, 41};
    vector<int> y = {50, -15, 90, -23, -13, 98, -23, 65, -7, -67, -78, 77, 34, 25, -58, 20};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {96, 24, -95, -14, 59, 41, 28, -85, 91, 94, -27, 44, -21, 83, 6, -18, -23, -54, -77, 85, 19, 26, -55, -9, 34};
    vector<int> y = {8, -46, 87, -64, -35, 34, -78, 30, 35, 99, -1, -8, 64, 27, 24, 24, 86, 7, -50, -80, 58, -71, -76, -31, -51};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {82, 53, 67, -55, -23, -58, -48, 64, -79, -26, 16, -8, 53, 11, -83, -22, -45, -7, 55, 98, 50, -41, 10, -43, 78, -28, -27, 33, -40};
    vector<int> y = {-52, -100, 74, -59, 74, 73, -50, 48, 84, 34, 30, -76, -8, 19, 81, -17, -47, -38, -92, 88, 88, 94, 89, -69, 0, 0, -41, -60, 54};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-95, -87, -75, -8, -29, 99, -68, 81, 56, -24, -29, -100, -51, -64, 24, 14, -56, 88, -48, 38, -15, 37, -43, 59, 58, 100, 67, 96, 16, 12, -92, 22, 46, 70, -76, 83, 87, -65, -74, 32, -96, -39, -73, 36, 30, -89};
    vector<int> y = {-8, 87, 96, -72, -86, -33, -26, 47, -69, -67, 0, 0, 79, -36, 78, 97, 3, 13, -85, 97, 59, -49, 25, -31, 91, 77, -31, 69, 71, -81, -69, 46, 75, 65, 65, 12, 18, -35, -84, -14, 63, -96, -78, 35, 48, -87};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {51, 7, -53, -27, -79, 55, -60, 45, -45, -48, 45, 73};
    vector<int> y = {32, 0, 0, -2, -60, 68, -55, -45, 72, -37, -49, 63};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {28, -86, -16, -70, -45, 53, 86, 53, -62, -50, -87, 67, 35, 77};
    vector<int> y = {-39, 17, 55, 9, -33, 70, 61, -36, 20, 73, 0, 0, -47, 81};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-63, -99, 30, -89, -21, 17, 32, -47, 75, 31, -58, -58, -25};
    vector<int> y = {-97, -48, -69, 85, -30, 44, -15, 6, -57, 0, 0, 61, -94};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-5, 3, 4, 7, 4, 0, -9, 12, 4, 0};
    vector<int> y = {2, -11, 11, 13, -15, 11, 0, 0, -4, 13};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-1, 7, 1, 8, -5, 11, 10, -3, 12, -13, -8, -7};
    vector<int> y = {-6, 0, 0, -9, -4, 5, 13, -6, -4, 6, -5, 11};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {8, 4, -6, 3, 12, -8, 13, -3, 2, -9, 8, 4};
    vector<int> y = {6, 15, -15, -11, 14, 0, 0, -4, -7, -14, -4, 10};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-15, 13, 6, -1, 2, 11, -3, -14, -15, 5, -5, 14};
    vector<int> y = {-10, 5, 6, -1, 10, -2, 7, -9, 0, 0, 14, 13};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {7, 8, 0, -15, -15, -4, 5, -10, -6};
    vector<int> y = {-8, -7, -11, 2, 2, -7, 2, -2, 3};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {2, 0, 1, -3, 14, -7, -7, 0, 3, 7, -10, -10};
    vector<int> y = {-2, 12, -3, -15, -11, 1, 4, -9, 14, 12, 1, 1};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {-8, 2, 10, 12, -7, 8, 0, -14, -11, -7, -6};
    vector<int> y = {3, -13, 12, 3, 13, 5, 0, 0, 5, -14, -2};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {14, 13, -15, -3, 11, 5, 8, 11, 7, 14, -14};
    vector<int> y = {8, 2, -14, -12, -1, 5, -12, 1, 0, 0, 15};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-9, -12, -2, 12, 7, -7, 14, -10, -8, 10};
    vector<int> y = {0, 6, 15, 15, -6, -10, -1, 8, 2, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {12, -11, 10, 15, -9, -9, 14, -4, 3};
    vector<int> y = {-9, 0, 0, 10, 9, -13, -4, 11, -13};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-3, 4, 6, -12, -1, -1, -14, 14, -15, -5, -14, 12};
    vector<int> y = {8, -8, -10, 13, -10, 14, 5, 15, 8, -10, 0, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-14, -6, 11, -13, -13, -11, 13, -7, -4, 0, -1, -3};
    vector<int> y = {-5, -13, 6, -3, -3, -5, 11, 7, -10, -8, -14, 4};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-8, -15, 2, -13, 8, 0, -8, -13, -8, -14, 9};
    vector<int> y = {-3, -11, 15, 3, 9, 0, 0, -9, -2, -7, 4};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {12, -9, 12, -7, -1, 13, 15, 2, 5, -4, 1};
    vector<int> y = {-10, -10, 13, -11, 2, -5, 0, 5, 0, 0, 3};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-6, 4, -6, -3, 1, -3, -2, -3};
    vector<int> y = {0, 8, 3, -3, 7, 0, 6, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {-6, 4, -6, -3, 1, -3};
    vector<int> y = {0, 8, 3, -3, 7, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-6, -3, 1, -3};
    vector<int> y = {0, -3, 7, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {2, 3, 3, -6, 6, 6, 3, -8, -5, 7};
    vector<int> y = {1, -6, 1, 3, 3, 3, 6, -7, 6, -5};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {4, -6, -6, 7, 0, 9, 7};
    vector<int> y = {0, 5, 5, -7, 6, 3, 3};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {4, -6, 7, 0, 9, 7};
    vector<int> y = {0, 5, -7, 6, 3, 3};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-15, 7, -10, -7, -12, -15, -6};
    vector<int> y = {-10, 6, 0, 0, 0, 7, 14};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-15, 7, -10, -12, -15, -6};
    vector<int> y = {-10, 6, 0, 0, 7, 14};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-11, 7, -10, -7, -12, -15, -6};
    vector<int> y = {-10, 6, 0, 0, 0, 7, 14};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {0, -9, 10, 10, 13, -14, -9, 2, -4};
    vector<int> y = {-1, 0, -6, -12, 2, 11, 0, 0, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-11, 7, -10, -7, -12};
    vector<int> y = {-10, 6, 0, 0, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {3, 1, 6, 2, 0};
    vector<int> y = {0, 0, 0, 49, -49};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
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
    vector<int> x = {0, 2, 1};
    vector<int> y = {-1, 1000, 1000};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {0, -1, -1, 0, 0, 0, -1, -1, -1, 0, 1, 1, 0, 0, 1, 2, 2, 2, 1, 0, 0, 1, 1, 0, 0};
    vector<int> y = {1, 1, -1, -1, 0, 1, 1, 0, -1, -1, -1, 0, 0, -1, -1, -1, 0, 1, 1, 1, 0, 0, 1, 1, 0};
    AllWoundUp* pObj = new AllWoundUp();
    clock_t start = clock();
    int result = pObj->maxWind(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=263396&rd=9821&pm=6194
********************************************************************************
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define foreach(i,c)for(__typeof((c).end())i=(c).begin();i!=(c).end();++i)
using namespace std;
 
int x[64], y[64], n;
 
double _( int i, int j )
{
  if( !y[i] ) return x[i];
  if( !y[j] ) return x[j];
  return x[i] + y[i] * ( double )( x[j] - x[i] ) / ( y[i] - y[j] );
}
 
struct P
{
  double x, y;
  P() {}
  P( double a, double b ) { x = a; y = b; }
};
 
#define EPS 1e-9
double polarAngle( P p )
{
    if( fabs( p.x ) <= EPS && fabs( p.y ) <= EPS ) return -1.0;
    if( fabs( p.x ) <= EPS ) return ( p.y > EPS ? 1.0 : 3.0 ) * acos( 0 );
    double theta = atan( 1.0 * p.y / p.x );
    if( p.x > EPS ) return( p.y >= -EPS ? theta : ( 4 * acos( 0 ) + theta ) );
    return( 2 * acos( 0 ) + theta );
}
 
int wind( double px, double py )
{
    double ang = 0.0;
    for( int i = n - 1, j = 0; j < n; i = j++ )
    {
        P v( x[i] - px, y[i] - py );
        P w( x[j] - px, y[j] - py );
        double va = polarAngle( v );
        double wa = polarAngle( w );
        double xx = wa - va;
        if( va < -0.5 || wa < -0.5 || fabs( fabs( xx ) - 2 * acos( 0 ) ) < EPS )
        {
      // POINT IS ON THE EDGE
      return 0;
        }
        if( xx < -2 * acos( 0 ) ) ang += xx + 4 * acos( 0 );
        else if( xx > 2 * acos( 0 ) ) ang += xx - 4 * acos( 0 );
        else ang += xx;
    }
    return ( int )( ang / acos( -1.0 ) / 2 + 0.5 );
}
 
class AllWoundUp {
  public:
  int maxWind(vector <int> xx, vector <int> yy) {
    n = xx.size();
    for( int i = 0; i < n; i++ ) { x[i] = xx[i] * 2; y[i] = yy[i] * 2; }
    
    vector< double > xits;
    for( int i = n - 1, j = 0; j < n; i = j++ ) if( y[i] * y[j] <= 0 ) xits.push_back( _( i, j ) );
    sort( xits.begin(), xits.end() );
    
    int best = 0;
    for( int i = 1; i < ( int )xits.size(); i++ ) if( xits[i] - xits[i - 1] > 1e-9 )
    {
      double mid = ( xits[i - 1] + xits[i] ) * 0.5;
      best >?= wind( mid, 0 );
    }
    return best;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/