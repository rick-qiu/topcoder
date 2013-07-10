/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8707
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

class AverageCandyLifetime {
public:
    double getAverage(vector<int> eatenCandies);
};

double AverageCandyLifetime::getAverage(vector<int> eatenCandies) {
    double ret;
    return ret;
}


int test0() {
    vector<int> eatenCandies = {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 60.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> eatenCandies = {0, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 59.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 1, 0, 0, 0, 50, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 301.5882352941176;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 365.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> eatenCandies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 252.80769230769232;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> eatenCandies = {902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 31.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> eatenCandies = {0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 59.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> eatenCandies = {0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> eatenCandies = {0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 120.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> eatenCandies = {0, 0, 0, 0, 996, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 151.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 181.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 212.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 243.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 273.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 304.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 334.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 365.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> eatenCandies = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 196.91666666666666;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> eatenCandies = {1000, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 31.027972027972027;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> eatenCandies = {0, 8, 33, 74, 132, 207, 298, 405, 529, 669, 826, 1000};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 291.79359005022724;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 2, 11, 41, 134, 386, 1000};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 348.76111817026685;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> eatenCandies = {0, 91, 181, 269, 356, 439, 519, 594, 665, 730, 789, 841};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 258.5823894775301;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> eatenCandies = {1000, 245, 880, 676, 549, 945, 86, 987, 397, 793, 785, 408};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 190.7308734356857;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> eatenCandies = {492, 547, 598, 647, 693, 0, 87, 167, 241, 310, 375, 435};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 171.3220818815331;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> eatenCandies = {928, 967, 920, 937, 966, 938, 957, 999, 937, 951, 942, 924};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 197.00325532289284;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> eatenCandies = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 31.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> eatenCandies = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 59.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 334.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> eatenCandies = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 365.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> eatenCandies = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 59.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> eatenCandies = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 196.91666666666666;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> eatenCandies = {1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 54.333333333333336;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> eatenCandies = {2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 54.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> eatenCandies = {0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> eatenCandies = {1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 60.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> eatenCandies = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 196.91666666666666;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> eatenCandies = {1, 2, 3, 4, 5, 6, 3, 3, 4, 2, 3, 4};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 206.675;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> eatenCandies = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 252.80769230769232;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> eatenCandies = {555, 354, 485, 669, 118, 211, 669, 336, 999, 1000, 561, 972};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 225.19656516091788;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> eatenCandies = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100};
    AverageCandyLifetime* pObj = new AverageCandyLifetime();
    clock_t start = clock();
    double result = pObj->getAverage(eatenCandies);
    clock_t end = clock();
    delete pObj;
    double expected = 361.6930693069307;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22688157&rd=11126&pm=8707
********************************************************************************
#include <iostream> 
#include <vector> 
using namespace std; 
 
class AverageCandyLifetime 
{ 
  public: 
  double getAverage(vector<int> SP) 
  { 
    int a [] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 , 31}; 
    int a1[12]; 
    a1[0]=a[0]; 
    for(int i=1;i<12;i++) 
    { 
      a1[i]=a[i]+a1[i-1]; 
    } 
    int tot=0; 
    int sum=0; 
    for(int i=0;i<12;i++){ 
      tot+=SP[i]*a1[i]; 
      sum+=SP[i]; 
    } 
    return (tot*1.0)/sum; 
  } 
 
};

********************************************************************************
*******************************************************************************/