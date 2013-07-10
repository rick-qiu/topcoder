/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2348
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

class BagOfHolding {
public:
    double oddsReachable(vector<int> sizes, int item);
};

double BagOfHolding::oddsReachable(vector<int> sizes, int item) {
    double ret;
    return ret;
}


int test0() {
    vector<int> sizes = {1, 2, 3};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sizes = {1, 2, 3};
    int item = 2;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sizes = {1, 1, 2, 3};
    int item = 2;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int item = 4;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int item = 5;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int item = 9;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sizes = {1, 10, 100, 1000, 10000, 1, 10, 100, 1000, 10000};
    int item = 3;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sizes = {10000, 9000, 8000, 7000, 6000, 5000, 4000, 3000, 2000, 1000};
    int item = 3;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sizes = {1};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sizes = {10000};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sizes = {1576, 4085, 2782, 5475, 900, 9953, 6186, 7887};
    int item = 7;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sizes = {7867, 5852, 5289, 8322, 9367, 520, 8053};
    int item = 3;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sizes = {1073, 522, 4399, 1616};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sizes = {3707, 8316, 153, 1282, 7623};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sizes = {6686, 3123, 9780, 5105, 1866};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sizes = {6525, 214, 3835, 8652, 9593, 2066, 55, 6248, 2213, 5758};
    int item = 6;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sizes = {7729, 2266, 3263, 7984, 3181};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sizes = {156, 1817, 2754, 3863, 9160, 6677};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sizes = {8404, 8097, 6762, 7519, 2480, 8045, 8294};
    int item = 6;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sizes = {1689, 1570, 2119, 1944, 9797, 7822, 6563};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sizes = {656, 6925, 9654, 3099, 5036};
    int item = 2;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sizes = {2839, 7640, 4117, 3806, 6259, 7796};
    int item = 4;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sizes = {3792, 8397, 6070, 1691};
    int item = 3;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sizes = {4466, 8999, 2376, 1781, 3278, 7923, 2020, 8401, 7850, 47};
    int item = 5;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sizes = {8518, 7499, 8268, 4937, 7554, 8551, 2616};
    int item = 6;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14285714285714285;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sizes = {1651, 1028, 8993, 7498, 7119, 2352, 3021, 7510};
    int item = 2;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sizes = {5874, 6199, 7944, 9349, 6142, 9123, 4644, 7105};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sizes = {1901, 4934, 5899, 8972, 3481, 1122, 711, 3720};
    int item = 4;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sizes = {8083, 3220, 8209, 58, 9951, 96, 4861, 2246, 3307};
    int item = 3;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1111111111111111;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sizes = {343, 3864, 1189, 7038, 3299, 1364, 5825, 7994};
    int item = 6;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sizes = {2669, 5014, 1243, 2908, 2089, 7250, 151, 4456, 7301};
    int item = 8;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sizes = {7892, 3297, 9866, 1071, 3776, 4365, 166};
    int item = 4;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sizes = {3305, 8626, 6471, 1928, 9845, 2254, 179, 372};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sizes = {9037, 1478, 4011, 6940, 8505, 5250, 8823, 4904};
    int item = 4;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sizes = {2739, 612, 5937, 3594, 4991, 6720, 9485, 6822, 603, 8124};
    int item = 4;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int item = 4;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16666666666666666;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sizes = {1, 1, 2, 3};
    int item = 2;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 6, 6, 7, 8};
    int item = 6;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sizes = {1, 2, 3};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sizes = {1, 1, 2, 3};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sizes = {1, 2, 2};
    int item = 2;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sizes = {2, 5, 3, 4, 9, 9, 9, 9, 9, 9};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sizes = {1, 1, 1, 1, 1};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sizes = {1, 2, 3, 2};
    int item = 1;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sizes = {2, 2, 2, 2};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sizes = {5, 5, 5, 5};
    int item = 3;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sizes = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int item = 6;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sizes = {1, 1, 2, 3};
    int item = 0;
    BagOfHolding* pObj = new BagOfHolding();
    clock_t start = clock();
    double result = pObj->oddsReachable(sizes, item);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7584238&rd=4740&pm=2348
********************************************************************************
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
class BagOfHolding{
  public:
  double oddsReachable(vector<int> sizes,int item){
    int cnt=0;
    int good=0;
    vector<int> pe;
    for (int i=0; i<sizes.size(); i++) pe.push_back(i);
    do{
      cnt++;
      bool ok=true;
      for (int j=sizes.size()-1; j>=0; j--) {
        if (pe[j]==item) break;
        if (sizes[pe[j]]>=sizes[item]) {ok=false; break;}
      }
      if (ok) good++;
      
    }while(next_permutation(pe.begin(), pe.end()));
 
    return (double)good/cnt;
  }
};

********************************************************************************
*******************************************************************************/