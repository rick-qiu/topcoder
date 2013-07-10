/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6465
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

class CrazyRunning {
public:
    double expectedTime(vector<int> corridors);
};

double CrazyRunning::expectedTime(vector<int> corridors) {
    double ret;
    return ret;
}


int test0() {
    vector<int> corridors = {10, 20};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> corridors = {150, 150, 150};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 900.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> corridors = {100, 150, 200};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 875.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> corridors = {1000, 1000, 900, 1000, 555, 1000, 2562};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 33550.32857142857;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> corridors = {1, 1};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> corridors = {1000000, 999998, 999999};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 5999994.5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> corridors = {1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 1000000, 999998, 999999, 50, 50};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4.214432774053318E8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> corridors = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 438.9621231562802;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> corridors = {1, 1, 1, 1, 1, 1, 1};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 29.39999999999996;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> corridors = {10, 10, 10, 10, 10, 10, 10};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 293.9999999999998;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> corridors = {1, 1000000};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1000001.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> corridors = {1000000, 1};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1000001.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> corridors = {1, 1000000, 1000000};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 3666669.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> corridors = {1000000, 1, 1};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2333337.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> corridors = {999996, 999990, 1000000, 999992, 999993, 999998, 999999, 999998, 999993, 999990, 999991, 999997, 999999, 999996, 999991, 999994, 999998, 1000000, 999997, 999996, 999992, 999993, 999997, 999995, 999992, 999996, 999995, 1000000, 999997, 999999, 999997, 999995, 999999, 999999, 999997, 999995, 999993, 999993, 999999, 999993, 999992, 999990, 999994, 999991, 999992, 999999, 999998, 999996, 999999, 999997};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4.3896012203757125E8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> corridors = {999992, 999996, 999992, 999991, 999991, 999999, 999990, 999998, 999992, 999995, 999996, 999993, 1000000, 999999, 999995, 999999, 999994, 999995, 1000000, 999997, 999999, 999999, 999995, 999996, 1000000, 1000000, 999996, 999990, 999991, 999994};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2977487526208362E8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> corridors = {999992, 999990, 999998, 999993, 999994, 999990, 999996, 999997, 999998, 999996, 999992, 999999, 999996, 999991, 999996, 999992, 1000000, 999994, 999992, 999994, 999991, 999990, 999993, 999991, 999995, 1000000, 999992, 999992, 999997, 999996, 999996, 999997, 999990, 999992, 999997, 999991, 999994};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 3.005665053983368E8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> corridors = {999998, 999999, 999997, 999997, 999993, 999990, 999992, 999991, 999994, 999995, 999993};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 5.857904342106786E7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> corridors = {999998, 999990, 999999, 999994, 999996, 999994, 999995, 999996, 999992, 999993, 999993, 999993, 999994, 999995, 999995, 999991, 999995, 999991, 1000000, 999995, 999999, 999999, 1000000, 1000000, 1000000, 999994, 999994, 999990};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1013765422398093E8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> corridors = {999996, 999996, 999997, 999996, 999994, 999992, 999990, 999992, 999992, 999995, 999996, 999996, 999993, 999998, 999990, 999991, 1000000, 999996, 1000000, 1000000, 999996, 999995, 999990, 999997, 999991, 999999, 999995, 999991, 999998, 999997, 999995, 999997, 999995, 999990, 999998, 999995, 999992, 999996, 999998, 999996};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 3.317747073996591E8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> corridors = {999999, 999998, 999995, 999993, 999992};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6666592699999992E7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> corridors = {999997, 999995, 999993, 999998, 999992, 999996, 999999, 999991, 999997, 999990, 999990, 999990, 999996, 999999, 999994, 999994, 999997, 999998, 999992, 999993, 999990, 999998, 999997, 999997, 999997, 999996, 999990, 999993, 999997, 999997, 999997, 999993, 999990, 999995, 1000000, 999990};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.90273153466115E8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> corridors = {999998, 999994, 1000000, 999995, 999999, 999991, 1000000, 999992, 999998, 999990, 999992, 999993, 999993, 999994, 999996, 999990, 1000000, 999999, 999991, 1000000, 999993, 999999, 999992, 999998, 999999, 999996, 999994, 999995};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1013769904734597E8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> corridors = {999999, 999992, 999997, 999991, 999999, 999990, 999992, 999994, 999991, 999994, 999990, 999998, 999993, 999994, 999998, 999992, 999993, 999994, 999994, 999990, 999997, 1000000, 999990};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6239481340758893E8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> corridors = {5, 6, 6, 10, 4, 4, 7, 9, 2, 5, 8, 1, 1, 7, 7, 5, 9, 10, 7, 8, 7, 2, 10, 4, 2, 4, 5, 6, 2, 5, 9, 9, 2, 9, 2, 6, 9, 9, 10, 3, 9, 2, 4, 4, 2, 9, 6, 10, 1, 7};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2545.196640837042;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> corridors = {2, 2, 6, 7, 3, 1, 6, 3, 10, 2, 5, 6, 7, 4, 2, 5, 10, 10, 8, 7, 5, 6, 9, 6, 3, 4, 4, 7, 8, 1, 7, 6, 5, 9, 1, 4, 8, 8, 4, 5, 6, 4, 10, 9, 7, 6, 8};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2296.1044556214083;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> corridors = {5, 7, 7, 1, 8, 3, 1, 2, 10, 8, 8};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 319.1147186147183;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> corridors = {8, 1, 6, 4, 3, 4};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 101.87777777777784;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> corridors = {4, 8, 1, 1, 5, 8, 2, 10, 1, 5, 4, 4, 5, 8};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 389.13419675562477;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> corridors = {10, 3, 1, 6, 4, 8, 4, 7, 1, 2, 5, 5, 3, 3, 2, 5, 4, 3};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 499.2047817469384;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> corridors = {6, 9, 1, 1, 10, 6, 10, 1, 9, 4, 8, 7, 9, 8, 6, 2, 6, 4, 10, 7, 5, 4, 2, 1, 6};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1029.7839042493788;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> corridors = {9, 10, 9, 5, 7, 10, 4, 6, 9, 6, 5, 10, 5, 2, 4, 3, 6};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 702.3810915391787;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> corridors = {1, 1, 5, 1, 1, 8, 3, 5, 6, 2, 1, 2, 1, 3, 4, 5, 7, 2, 4, 7, 8, 1, 10, 7, 4, 9, 7, 5, 1, 2, 5, 7};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1050.261402076522;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> corridors = {5, 3, 9, 7, 10, 2, 8, 7, 3, 7, 5, 4, 6, 9, 2, 9, 5, 10, 5, 10, 5, 5, 7, 1, 3, 7};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1129.224537257766;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> corridors = {26411, 24946, 6420, 63874, 31373, 450054, 26, 12796, 9573, 21351, 8607, 152533, 73436, 112643, 79266, 51392, 31966, 98, 94945, 20140, 94520, 138250, 14749, 10116, 7908, 60491, 19454, 110331, 22004, 73414, 119605, 2513, 17356, 26349, 169967, 160862, 46415, 353902, 146177, 66142, 18619, 235887, 78012, 33380, 9106, 127859, 4334, 59604, 3256, 24890};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0923980366782606E7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> corridors = {163810, 8277, 19426, 36743, 42535, 64627, 219, 52215, 35245, 42, 128974, 38585, 17628, 1921, 12709, 32940, 10004, 26896, 50881, 1730, 80100, 483, 937, 12509, 107061, 5406, 5416, 28030, 47732};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 7957980.975959159;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> corridors = {14646, 47636, 40498, 429, 54000, 1027, 6879, 5005, 77663, 1972, 142553, 21448, 934, 220, 639, 92124, 1763, 109396, 6978, 436, 34055};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4508978.356384057;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> corridors = {24876, 364, 6094, 42090, 2856, 3038, 863, 10479, 11136, 182483, 173401, 40474, 16157, 1399, 446771, 7836, 74917, 8246, 55192, 75940, 45749, 22299, 129986, 14, 1645, 17138, 223348, 45528, 15764, 811, 3485, 18467, 108229, 53349, 241853, 25571, 247073, 135818, 25011};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0935068579892736E7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> corridors = {1823, 40264, 48172, 22914, 2597, 6135, 30937, 12601, 5437, 45029, 257, 61291, 1455, 126676, 86953, 228440, 109902, 89981, 228033, 19136, 7225, 39561, 40382, 9506, 2356, 2538, 49356, 44438, 175212, 2441, 792, 41025, 192776, 100393, 99690};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5754933238366645E7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> corridors = {10271, 22497, 2358, 37648, 569, 69117, 50072, 448002, 126, 24136, 325, 1649, 10924, 10844, 7591, 3693, 30585, 27637, 256, 28290, 5549, 61566, 63669};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 6449021.260745976;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> corridors = {384699, 18892, 2220, 10302, 89965, 146307, 1156, 22071, 27708, 31819, 2353, 332160, 25696, 202, 1350, 5513, 8261, 105676, 53056, 4774, 144, 26678, 8219, 51126, 660, 135864, 23397, 133408, 34723, 74453, 10523, 56284, 1894, 571, 33947};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.52522450500051E7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> corridors = {81615, 19195, 51628, 149808, 95, 115859, 8473, 177867, 26070, 887, 60043, 119680, 462, 17604, 4285, 48, 1791, 28461, 175596, 5191, 40093, 364, 934, 5787, 3298, 47270, 737, 85, 176016, 110669};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0984751096016115E7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> corridors = {4967, 109490, 202389, 136134, 8393, 26130, 7223, 28290, 148381, 61358, 46588, 28771, 14329, 17946, 10264, 1301, 17356, 225187, 9312, 50623, 18709, 2151, 80401, 4806, 40866, 27518, 21008, 6918, 20072, 1677, 12824, 36937, 5, 31850, 63246, 3944, 106456, 4741, 39436, 53924};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4327912823193379E7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> corridors = {27358, 1902, 2755, 11975, 383, 4274, 111205, 189197, 55143, 29922, 58864, 82968, 6750, 296, 90700, 876, 3719, 136992, 301754, 12502, 15523, 19170, 49392, 19859, 12579, 6475, 16679, 11828, 36724, 39762, 20714, 75870, 4364, 70498, 39087, 7862, 1446, 4765, 67803, 38648, 8867, 2467, 103365};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5227543752113206E7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> corridors = {659604, 226390, 26005, 878051, 641037, 750026, 875110, 959125, 282258, 141811, 213013, 666458, 934084, 591664, 32588, 493164, 770293, 606456, 878504, 777626, 131888, 127380, 493629, 921801, 770414, 455776, 216080, 319662, 874785, 159311, 922906, 618324, 488557, 745764, 691596, 558236, 120874, 218937, 139077, 466232, 846372, 705019, 478877, 7407, 901339, 846764, 321054, 491612, 785795, 858336};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3791942114612326E8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> corridors = {250479, 960453, 577025, 484167, 527915, 450300, 782347, 148295, 318118, 961977, 381264, 79712, 815500, 46592, 450421, 615584, 353244, 998024, 718515, 758154, 379690, 476735, 127191};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 8.209472849863875E7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> corridors = {726875, 155908, 233155, 870310, 48044, 937579, 254955, 518817, 383275, 313980, 34456, 845334, 279420, 782452, 249704, 495563, 693654, 610178, 648652, 306362, 246788, 604044, 780745, 196625, 227364, 885416, 495096, 702963, 51627, 252067, 690054, 897846, 245151, 701117, 485877};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.350682414847534E8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> corridors = {905051, 407787, 83033, 182521, 855567, 553428, 526811, 197546, 407549, 437653, 247929, 155484, 196413, 152701, 477252, 31786, 599290, 222097, 738721, 886496, 771955, 506697, 167881, 760066, 141499, 304272, 400585, 395142, 60346};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 8.976605128079183E7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> corridors = {98178, 175317, 210729, 202309, 289194, 184655, 432729, 314317, 134281, 984964, 967277, 746655, 499389, 783739, 301980, 197352, 854135, 123310, 383920, 302159, 731964, 247692, 82377, 958443, 983205, 834614, 681691, 359559, 507743, 757827, 690988, 525477, 255915, 469053, 871511, 888568, 29087, 966753, 277963, 88680, 982307};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.697343943218605E8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> corridors = {804492, 314770, 713973, 179559, 760497, 44677, 393445, 624521, 738661, 741575, 729754, 404309, 815591, 382414, 109452, 360592, 135050, 484231, 567688, 729838, 799093, 151378, 34223, 492826, 420835, 505220, 380406, 212273, 25508, 864612, 536487, 941447, 392219, 87406, 261471, 482336, 80318, 818900, 852751, 500984, 756313, 105591, 205179, 599100, 837516, 940658, 727422, 759503, 115848, 789776};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1726258671492317E8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> corridors = {780422, 608277, 819089, 684558, 280044, 732303, 201641, 916913, 879166, 551589, 748801, 856663, 691440, 543641, 669876, 400893, 73191};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 6.65837823330624E7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> corridors = {369683, 493684, 148861, 607693, 709602, 225824, 988928, 968952, 906008, 456316, 367090, 250773, 858979, 430803, 751755, 395213, 904865, 118216, 433651, 888538, 500072, 199888, 552585, 875788, 827647, 55859, 841950, 280902, 360163, 952910, 542330, 259262};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.365699876849211E8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> corridors = {73876, 50134, 352768, 471429, 101000, 234593, 43115, 825855};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 9600862.232142858;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> corridors = {990204, 826418, 483518, 6326, 563965, 514588, 764546, 135774, 601711, 246789, 768, 901393, 288784, 292379, 945695, 226745, 660818, 933538, 861819, 561874, 205339, 860464, 375718, 273007, 797573, 64050, 517793, 963763};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.120060976361864E8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> corridors = {815205, 841959, 703448, 259370, 666142, 147811, 595692, 895389, 530114, 676021, 197711, 805217, 987983, 94833, 549942, 574613, 886481, 385952, 285675, 944715, 556525, 22013, 663114, 750729, 323610, 386809, 979781, 61834, 867107, 569847, 508769, 6715, 216743, 665553, 152760, 850430, 122009, 996177, 62517, 797226};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7781092556805465E8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> corridors = {93497, 137307, 110344, 887416, 644732, 719294, 15447, 501487, 443842, 423688, 346890, 864680, 995176, 384565, 461381, 529851, 958397, 193623, 566755, 383572, 303494, 147, 932787, 2992, 20283, 411362, 844791, 820771, 160457, 831890, 46116, 270549, 294862, 382338, 87268, 126016, 910495, 519913, 647319, 771763, 787653};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5688667666871637E8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> corridors = {344205, 945746, 177596, 63251, 25742, 922004, 829363, 450724, 564946, 222596, 857935, 681672, 317257, 72640, 871655, 274712, 401877, 696445, 366857, 316609, 78603, 495745, 217908, 151365, 965942, 446311, 721756, 689336, 75603, 925919, 360298, 458883, 975190, 645611, 625401, 507428, 792228};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5043516665474933E8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> corridors = {300250, 816044, 198294, 973043, 941904, 137280, 95549, 82648, 623573, 329305, 668632, 23206, 616147, 908996, 89376, 781508, 525868, 970467, 87164, 29230, 953330, 10409, 819917, 114738, 862768, 914274, 167588, 920948, 316767, 504873, 318279, 572074, 978866, 563632, 268592, 211361, 342027, 774588, 666317, 546422, 757827, 952485, 320897, 604062, 601766, 989018, 96865, 867871};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.189413382640105E8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> corridors = {123804, 230136, 748372, 270946, 318974};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 5479791.533333332;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> corridors = {534124, 656087, 761772, 25463, 101228, 307887, 216417, 599671, 637609, 231291, 922286, 368542, 108302, 86783, 661114, 899387, 670044, 481779, 566909, 956431, 131173, 390083, 949060, 943248, 515088, 617102, 522672, 350250};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0668447219931597E8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> corridors = {131307, 496119, 748473, 433038};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4760625.249999999;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> corridors = {335777, 992912, 175955, 478632, 593676, 95605, 471582, 599798, 747944, 783586, 723899, 577516, 589820, 808134};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4.688321849712348E7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> corridors = {924708, 648288, 701890, 538684, 190888, 685441, 483117, 528729, 583354, 416, 95632, 69437, 298509, 410514, 90474, 7447, 513801, 827329, 755950, 540137, 950667, 699178, 736320, 242251, 450466, 72862, 622779, 712551, 777171, 628225, 262446, 315582, 359446, 586446, 769755, 420450, 619671, 238032, 976758, 603578, 365878, 951979, 487276, 627585, 130952, 910417, 514905, 309767, 156628};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.135209448030224E8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> corridors = {627601, 634030, 603862, 582844, 595672, 39855, 391103, 916750, 786218, 3219, 54323, 667594, 242868, 40634, 816970, 758791, 770328, 841623, 722383, 241012, 926189, 61489, 902468, 759825, 722429, 267172, 843548, 733491, 881478};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2469937563949206E8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> corridors = {730688, 634180, 293817, 819939, 141899, 692480, 120318, 647306, 238605, 213562, 702829, 996029, 404684, 357333, 70103, 118781, 53758, 268172, 850555, 879771, 696465, 381674, 140817, 113664};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 7.591298575800401E7;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> corridors = {302546, 756547, 70886, 925770, 826296, 906351, 459101, 871565, 540454, 649639, 185607, 346281, 561721, 769392, 23836, 150029, 499489, 887366, 5287, 811486, 424868, 757527, 612615, 100788, 910043, 620675, 403375, 686171, 843380, 991651, 631142, 74963, 347887, 270463, 264840, 912337, 893665, 998358};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7398066547970307E8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> corridors = {5692, 578996, 766297, 831194, 371504, 933156, 87856, 952294, 458558, 904963, 768692, 365584, 590250, 519670, 240500, 695448, 780075, 689014, 227697, 686610, 306991, 698705, 738913, 210403, 861013, 389094};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0703877158888566E8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> corridors = {95496, 940145, 431341, 390073, 333072, 834188, 797228, 637137, 8221, 162977, 980034, 633214, 908327, 190176, 605793, 697784, 423992, 338927, 983820, 852206, 331569, 122596, 400477, 896515, 48836, 121292, 131009, 982989};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0676733864716314E8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> corridors = {767016, 743162, 350549, 370920, 543914, 693340};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3352188138888886E7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> corridors = {474564, 234365, 255056, 915279, 882383, 293242, 510548, 688216, 740319, 292852, 412665, 332880, 162528, 889389, 401188, 77126, 79633, 335646, 696462, 192187, 698693, 326451, 311172, 754726, 993316, 685516, 837736, 585777, 624615, 311421, 593454, 335097, 31264, 325391, 934431, 881041, 574192, 609405, 345305, 908672};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.702812802179231E8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> corridors = {308856, 599629, 992126, 280839, 159332, 48384, 445051, 34936, 32153, 274187, 274137, 537430, 34018, 906203, 236397, 631719, 390529, 924274, 122625, 861254, 260969, 287395, 78933, 912099, 115651, 993498, 253209, 798464, 265898, 194194, 675701, 78133, 87854, 297181, 653633, 179053, 242773, 574879, 629197};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2903739905409782E8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> corridors = {34069, 269203, 740187, 290102, 375835, 537861, 589984};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1607036247619035E7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> corridors = {709064, 946838, 432903, 581508, 463982, 336444, 175918, 235021, 142359, 348735, 926694, 642943, 109887, 427005, 95863, 358803, 172181, 459559, 832090, 786130, 893630, 355458, 323133, 567900, 241362, 993382, 880771, 341541, 463453, 323906, 317505, 163379};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1765792723709422E8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> corridors = {804311, 263042, 593505, 651725, 929016, 198724, 163166, 897614, 256592, 489208, 887982, 844990, 753628, 550342, 548840, 26158, 20717, 956423, 305591, 722273, 326631, 232906, 766745, 90705, 451269, 646288, 318499, 912297, 951635, 580943, 589691, 278024, 858802, 19314, 594525, 567940, 11735, 347095, 396439, 16869, 117068, 934032, 588556, 285478, 994734, 47395, 91060, 642935, 549550, 893962};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.194898221297287E8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> corridors = {966206, 994320, 19316, 898910, 514769, 471151};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4964899199999984E7;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> corridors = {220529, 899453, 604470, 980618, 64411, 711363, 878184, 415384, 876216, 74965, 805850, 898856, 712630};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4.627884618408259E7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> corridors = {572020, 783277, 557785, 618615, 311028, 550093, 284728};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5484573438095218E7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> corridors = {111018, 204642, 850686};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2193810.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> corridors = {426044, 290043};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 716087.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> corridors = {786386, 90276, 37721, 576078, 523995, 354925, 678515, 184083, 124110, 839290, 955826, 135987, 531264, 741504, 119350, 196926, 811639, 54215, 30223, 785110, 175154, 203372, 746948, 56307, 2015, 495585};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 7.54985253697301E7;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> corridors = {557984, 965282, 865580, 771488, 512828, 2133, 202468, 904470, 933818, 413826, 968312, 242185, 917985, 35947, 91815, 706818, 632653, 184451, 621897, 417345};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 7.381587004149742E7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> corridors = {50, 336516, 778934, 534530};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4262610.833333334;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> corridors = {152280, 789705, 836133, 587132, 899284, 656530, 639297, 535530, 511582, 202401, 746838, 434776, 263088, 8888, 469685, 668083, 484437, 768076, 797127, 528217, 30704, 787656, 998086, 392992, 328053, 443529, 252354, 160143, 269806, 957155, 442845, 752482, 724151, 465178, 452367, 948363, 694402, 257770, 507234, 380716, 91412, 79744, 189303, 148125, 616774, 608703, 953792, 980140, 635846, 372924};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2704022370627373E8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> corridors = {702488, 390995, 780930, 138590, 437334, 597572, 672271, 653758, 718412, 45058, 668949, 257767, 258457, 530569, 56249, 269807, 804299, 913195, 504791, 12738, 496550, 770893, 306173, 595487, 283940, 817257};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 9.328994465634882E7;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> corridors = {725914, 932783, 429578, 218650, 946392};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0900827949999994E7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> corridors = {215058, 289522, 620438, 224997, 926263, 270610, 982050, 925099, 676930, 325644, 550560, 990968, 875791, 185830, 247687, 762812, 575440, 297690, 535650, 218842, 892170, 894998, 864079, 553451, 659926, 181757, 556227, 670203, 794721, 872869, 167684, 704779, 270700, 314071, 251693, 905421, 404173, 130962, 178926, 75627, 708973, 514952, 552457, 137217, 502472, 267871, 718038, 255454};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1437270655944887E8;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> corridors = {745585, 795904, 125191, 6345, 585037, 266758, 614772, 764110, 395828, 686139, 775185, 574539, 948381, 698631, 101054, 534754, 490289, 180515, 783, 174599, 936783, 714848, 354637, 672259, 648201};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 9.29578127721341E7;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> corridors = {995187, 780404, 277862, 123677, 340914, 568139, 166622, 337118, 35053, 939148, 971553, 218564, 146366, 376082, 718032, 16899, 457519, 632585, 78274, 795617, 94338, 676786, 982593, 313273, 78570, 844003, 162442, 884090, 705039, 757764, 960528, 694376, 752078, 386707, 793594, 731162};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5199075910378683E8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> corridors = {532513, 702688, 395643, 944141, 823635, 408018, 892874, 224457, 115041, 615122, 789914, 299927, 459546, 391765, 186130, 831512, 771870, 164549, 85165, 693854, 424547, 843842, 771771, 213235, 299953, 281372, 669727, 836947, 723942, 241371, 81551, 799725, 716658, 24504, 900439, 770150, 1884, 842273, 803095, 43926, 194619, 861176, 324544, 413896, 402622, 940052, 224922, 315902, 620581};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.17693655652499E8;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> corridors = {49985, 512300, 555526, 586487};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4436093.166666667;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> corridors = {371192, 555337, 231150, 541253, 691264, 338156, 2377, 925051, 630548, 964031, 855844, 571379, 90744, 959529, 660493, 57003, 844771, 750369, 472068, 796661, 931331, 436086, 885058, 541178, 276214, 68744, 923183, 774004, 474322, 765452, 8233, 416115, 847263, 473036, 286788};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5517289284693825E8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> corridors = {358743, 762981, 765125, 737183, 969197, 999559, 482150, 403022, 594243, 202488, 326934, 168006, 625266, 545042, 803829, 689466, 545670, 808832, 794396, 489585, 35584, 466053, 103379, 966983, 696466, 824694, 936025, 35818, 453222, 178554, 486816, 950750, 961048, 610001, 877966, 366457, 83447, 953738};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.80269475735377E8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> corridors = {697192, 440200, 765516, 227836, 276712, 240131, 132302, 290444, 80462, 806803, 77086, 379171, 732160, 68506, 240222, 344173, 875385, 733803, 548802, 151494, 231048, 955663, 621012, 275329, 258513, 247041, 830897, 414692, 706507, 679410, 297161, 183082, 350081, 931654, 376034, 794623, 962002, 171284, 889557, 156872};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5318616517200324E8;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> corridors = {859049, 71632, 657816, 139941, 148934, 708178, 908348, 307274, 252062, 257266, 547184, 230542, 166425, 56921};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 3.181270081641692E7;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> corridors = {820563, 859078, 996499, 853499, 862389, 897724, 987366, 975104, 975309, 994484, 985367, 945939, 999923, 999229, 994807, 818013, 827496, 871074, 994479, 725697, 999692, 981019, 997417, 998136, 900295, 999110, 993681, 828085, 992069, 907827, 999335, 980000, 999440, 874927, 919140, 921128, 996710, 867858, 869919, 950884, 973085, 995637, 996258, 986091, 851820, 840381, 883461, 961237, 996901, 875342};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1006278799848866E8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> corridors = {994888, 984884, 817812, 989333, 995718, 999707, 791638};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7657172666666623E7;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> corridors = {962299, 999139, 980448, 975352, 737254, 999496, 992544, 864318, 988151, 959397, 943069, 831049, 990459, 985308, 917328, 991706, 978233};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.024421896288493E8;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> corridors = {974392, 990225, 998761, 973953, 720377, 975965, 977307, 999116, 999904, 987743, 942000, 943002, 963609, 957706, 889622, 971200, 999281, 996250, 981350, 808352, 999415, 949376, 897171, 973773, 975451, 959221, 994352, 867995, 996067, 992200, 870719, 903142, 994478, 968332};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.571173626242708E8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> corridors = {974684, 998084, 881158, 988902, 988506, 861294, 988408};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8077226438095216E7;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> corridors = {941067, 969780, 1000000, 997465, 896792, 823897, 991384, 999138, 882271, 859614, 991765, 992318, 997341, 979123, 843253, 932653, 997265, 917906, 619417, 992557, 938542};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.340748102386358E8;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> corridors = {975293, 872864, 950846, 973989, 994835, 999266, 862430, 994562, 981381, 976405, 998626, 975381, 949501, 995777, 853471, 856339, 979725, 980664, 929979, 929226, 990510, 947559, 950161, 869936, 975084, 818435, 979145, 975619};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9918550957024744E8;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> corridors = {999897, 651158, 999947, 988902, 956320, 717230, 842854, 996982, 858298, 990566, 973592, 898876, 995966, 923780, 998087, 993194, 942947, 977763, 991238, 990087, 909543, 953567, 967917, 986018, 954724, 996807, 997744, 944423, 992134, 947667, 885543, 826056, 896351, 942886, 961928, 950611, 973877, 982469, 890687};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 3.020062964438213E8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> corridors = {999062, 902709, 987385, 995256, 919487, 910899, 613951, 946454, 857175, 834072};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 4.57494816547619E7;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> corridors = {100000, 98, 123, 98, 345, 456, 997, 35, 35000, 1000, 100, 10, 1, 15, 99999, 99876, 7645, 223, 4545, 7000, 1000, 1111, 100000, 98, 123, 98, 345, 456, 997, 35, 35000, 1000, 100, 10, 1, 15, 99999, 99876, 7645, 223, 4545, 7000, 1000, 1111, 35, 35000, 1000, 100, 87654, 2};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 7483614.811061859;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> corridors = {1000, 1000, 900, 1000, 555, 1000, 2562};
    CrazyRunning* pObj = new CrazyRunning();
    clock_t start = clock();
    double result = pObj->expectedTime(corridors);
    clock_t end = clock();
    delete pObj;
    double expected = 33550.32857142857;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7546003&rd=9993&pm=6465
********************************************************************************
#include <vector> 
#include <cstring> 
 
using namespace std; 
 
typedef long long ll; 
 
#define repr(i,a,b) for(int i=(a),_b=(b);i<=_b;i++) 
#define repd(i,a,b) for(int i=(a),_b=(b);i>=_b;i--) 
#define rep(i,n) repr(i,0,n-1) 
#define haskey(c,x) (c.find(x)!=c.end()) 
#define pb push_back 
 
#define maxst 10000 
 
double ans[2][50][maxst]; 
char solved[2][50][maxst]; 
 
struct CrazyRunning { 
 
  double v0,v1; 
  int n; 
 
  double f(int last, int vis, int st) { 
    if (st>=maxst) 
      return 0; 
    if (vis==n) 
      return 0; 
       
    if (solved[last][vis][st]) 
      return ans[last][vis][st]; 
       
    solved[last][vis][st] = 1; 
    double& ret = ans[last][vis][st]; 
       
    if (last==0) { 
      if (vis+1==n) 
        return ret = (vis-1)/(n-1.0)*(2*v1+f(1,vis,st+1)) + (n-vis)/(n-1.0)*(v1+f(1,vis+1,st+1)); 
      else 
        return ret = (vis-1)/(n-1.0)*(2*v1+f(1,vis,st+1)) + (n-vis)/(n-1.0)*(2*v1+f(1,vis+1,st+1)); 
    } else { 
      if (vis+1==n) 
        return ret = 1/(n-1.0)*(2*v0+f(0,vis,st+1)) + (vis-2)/(n-1.0)*(2*v1+f(1,vis,st+1))  
          + (n-vis)/(n-1.0)*(v1+f(1,vis+1,st+1)); 
      else 
        return ret = 1/(n-1.0)*(2*v0+f(0,vis,st+1)) + (vis-2)/(n-1.0)*(2*v1+f(1,vis,st+1))  
          + (n-vis)/(n-1.0)*(2*v1+f(1,vis+1,st+1)); 
    } 
  } 
 
  double expectedTime(vector<int> v) { 
   
    n = v.size(); 
   
    v0 = v[0]; 
    v1 = 0; 
    repr(i,1,v.size()-1) 
      v1 += v[i]; 
    v1 /= v.size()-1; 
   
    memset(solved,0,sizeof(solved)); 
     
    return v0+f(0,1,0); 
  } 
};

********************************************************************************
*******************************************************************************/