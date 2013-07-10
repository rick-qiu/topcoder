/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10546
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

class MountainRoad {
public:
    double findDistance(vector<int> start, vector<int> finish);
};

double MountainRoad::findDistance(vector<int> start, vector<int> finish) {
    double ret;
    return ret;
}


int test0() {
    vector<int> start = {1};
    vector<int> finish = {7};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 8.485281374238571;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> start = {0, 3, 4};
    vector<int> finish = {5, 9, 6};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> start = {1, 4, 5, 6, -10};
    vector<int> finish = {101, 102, 101, 100, 99};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 158.39191898578665;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> start = {-5, -3};
    vector<int> finish = {-2, -2};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119286;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> start = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> finish = {12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 16.970562748477143;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> start = {0, 4, 8, 0};
    vector<int> finish = {4, 8, 12, 12};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 16.970562748477143;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> start = {0, 1, 2, 3, 4};
    vector<int> finish = {10, 9, 8, 7, 6};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> start = {0, 0, 0};
    vector<int> finish = {4, 8, 12};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 16.970562748477143;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> start = {0, 2, 2};
    vector<int> finish = {4, 4, 6};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 8.485281374238571;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> start = {0, 0, 6, 7, 8, 15};
    vector<int> finish = {4, 10, 22, 23, 24, 24};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 33.941125496954285;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> start = {0, 0, 8, 0, 4, 8, 12, 0, 2, 4, 6, 8, 10, 12, 14};
    vector<int> finish = {16, 8, 16, 4, 8, 12, 16, 2, 4, 6, 8, 10, 12, 14, 16};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 22.627416997969522;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> start = {-7, 1, -5, -4, -1, -3};
    vector<int> finish = {2, 3, 0, -3, 6, 2};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 18.38477631085024;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> start = {5, 6, -16, -7, -7, -13, -18, -13, -18, -12};
    vector<int> finish = {15, 15, 0, 20, 2, 12, 11, 11, -11, -5};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 53.74011537017761;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> start = {2, -18, -13, -10, -12, 5, -12, 7, 3, -18};
    vector<int> finish = {3, 2, 6, 5, -7, 11, 7, 11, 15, 9};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 46.66904755831214;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> start = {0, 1, -10, -9, -6, 8, 9, -7, 15, -10};
    vector<int> finish = {6, 10, 11, 15, 13, 10, 14, 16, 16, -8};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 36.76955262170048;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> start = {-9, -8, -19, -19, -4, -18, -13, -13, -18, -10};
    vector<int> finish = {-4, 14, -8, -8, 16, 17, 16, -4, 9, -4};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 50.91168824543143;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> start = {-17, -8, 7, -11, -4, -14, 16, -20, -20, -8};
    vector<int> finish = {10, 3, 10, -1, 18, 15, 19, 10, -17, 10};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 55.15432893255071;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> start = {107, 100, 104, 100, 107, 100, 104, 104, 101, 104, 102, 105, 100, 108, 105, 103, 106, 100, 104, 105};
    vector<int> finish = {110, 105, 106, 103, 110, 107, 110, 107, 106, 106, 105, 109, 101, 109, 109, 107, 110, 105, 105, 107};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> start = {104, 100, 108, 104, 102, 100, 103, 100, 103, 101, 102, 101, 105, 101, 102, 100, 105, 102, 104, 102};
    vector<int> finish = {108, 108, 110, 107, 105, 107, 109, 102, 107, 106, 104, 110, 109, 103, 109, 107, 109, 103, 109, 110};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> start = {105, 102, 102, 105, 101, 101, 105, 103, 101, 100, 104, 101, 103, 103, 106, 101, 102, 102, 106, 105};
    vector<int> finish = {106, 109, 110, 108, 102, 107, 108, 104, 107, 106, 110, 105, 110, 106, 107, 103, 103, 104, 108, 107};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> start = {103, 102, 106, 105, 101, 104, 105, 103, 109, 101, 101, 101, 101, 102, 105, 101, 104, 105, 101, 101};
    vector<int> finish = {106, 104, 110, 110, 104, 107, 109, 109, 110, 110, 109, 103, 108, 103, 106, 103, 105, 108, 110, 106};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> start = {101, 100, 105, 106, 101, 101, 100, 103, 102, 106, 104, 102, 104, 104, 102, 104, 105, 105, 100, 102};
    vector<int> finish = {107, 107, 107, 107, 106, 106, 107, 110, 103, 109, 108, 108, 107, 106, 104, 107, 108, 106, 109, 110};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 14.142135623730951;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> start = {-960, -965, -929, -979, -976, -964, -959, -942, -963, -938, -925, -988, -971, -967, -971, -991, -931, -965, -949, -995, -932, -972, -984, -978, -917, -947, -949, -995, -995, -979};
    vector<int> finish = {-934, -955, -903, -937, -934, -926, -904, -904, -931, -935, -920, -980, -960, -945, -954, -936, -903, -948, -937, -945, -927, -936, -931, -938, -900, -929, -926, -967, -976, -962};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 134.35028842544403;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> start = {-989, -993, -959, -969, -998, -949, -994, -995, -996, -980, -966, -998, -931, -928, -990, -936, -947, -970, -964, -991, -998, -960, -995, -923, -989, -963, -990, -991, -968, -978};
    vector<int> finish = {-967, -945, -954, -910, -948, -947, -922, -919, -954, -974, -939, -982, -912, -921, -940, -914, -933, -927, -940, -945, -910, -945, -985, -911, -939, -924, -982, -986, -922, -977};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 124.45079348883237;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> start = {-953, -956, -969, -956, -959, -967, -926, -961, -997, -993, -975, -965, -976, -956, -996, -971, -997, -961, -986, -941, -932, -990, -966, -946, -935, -992, -975, -978, -970, -941};
    vector<int> finish = {-923, -929, -950, -911, -911, -933, -918, -932, -962, -950, -932, -950, -940, -921, -965, -968, -971, -947, -967, -939, -922, -983, -924, -938, -934, -961, -974, -964, -914, -925};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 121.62236636408618;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> start = {-991, -947, -969, -987, -964, -996, -991, -910, -944, -975, -981, -947, -947, -921, -981, -973, -946, -960, -967, -990, -988, -982, -934, -976, -986, -994, -974, -974, -974, -976};
    vector<int> finish = {-963, -936, -916, -924, -951, -932, -908, -902, -907, -947, -917, -925, -917, -912, -915, -922, -934, -940, -923, -987, -984, -933, -922, -918, -942, -968, -951, -920, -921, -916};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 132.93607486307096;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> start = {-956, -992, -956, -983, -958, -981, -989, -964, -989, -990, -995, -954, -986, -994, -953, -949, -972, -997, -992, -975, -977, -992, -981, -975, -965, -999, -996, -993, -967, -962};
    vector<int> finish = {-912, -916, -922, -915, -939, -952, -979, -929, -959, -947, -915, -933, -970, -989, -949, -915, -931, -948, -969, -911, -933, -927, -919, -946, -947, -992, -970, -944, -931, -960};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 124.45079348883237;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> start = {901, 901, 902, 903, 900, 904, 900, 905, 904, 900, 905, 900, 901, 905, 902, 903, 906, 901, 907, 901, 906, 900, 901, 907, 901, 907, 901, 905, 901, 905, 906, 903, 901, 903, 907, 901, 900, 900, 903, 904, 900, 901, 900, 905, 905, 904, 906, 901, 903, 901};
    vector<int> finish = {909, 907, 909, 907, 907, 909, 908, 906, 906, 906, 907, 904, 909, 909, 909, 905, 909, 903, 908, 903, 908, 902, 908, 908, 906, 909, 903, 907, 902, 908, 909, 907, 905, 909, 909, 904, 908, 904, 906, 907, 906, 908, 902, 908, 908, 908, 908, 906, 906, 903};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> start = {900, 902, 900, 903, 903, 901, 906, 900, 902, 903, 902, 903, 902, 901, 900, 902, 900, 905, 904, 905, 904, 903, 900, 908, 908, 904, 901, 901, 901, 901, 904, 901, 907, 904, 902, 904, 901, 907, 904, 902, 904, 905, 903, 900, 901, 903, 902, 906, 903, 906};
    vector<int> finish = {908, 907, 902, 905, 905, 905, 907, 907, 905, 909, 903, 904, 903, 905, 906, 909, 902, 908, 909, 909, 907, 908, 902, 909, 909, 909, 904, 903, 907, 907, 907, 903, 909, 907, 908, 906, 906, 908, 906, 906, 905, 906, 907, 906, 903, 905, 908, 909, 907, 909};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> start = {903, 903, 906, 904, 902, 901, 902, 904, 901, 904, 900, 906, 902, 903, 901, 905, 903, 904, 901, 905, 907, 907, 901, 907, 903, 904, 906, 903, 902, 902, 900, 905, 902, 902, 901, 905, 904, 904, 902, 902, 901, 906, 900, 902, 902, 902, 904, 904, 904, 901};
    vector<int> finish = {905, 909, 908, 908, 904, 905, 904, 909, 903, 906, 907, 908, 909, 904, 904, 908, 908, 907, 904, 906, 909, 909, 906, 909, 907, 909, 908, 905, 909, 905, 902, 908, 908, 905, 909, 909, 909, 907, 903, 905, 906, 909, 908, 909, 909, 903, 907, 906, 909, 904};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> start = {902, 900, 906, 903, 908, 905, 900, 901, 907, 905, 903, 904, 904, 904, 901, 901, 904, 907, 904, 902, 902, 902, 902, 904, 907, 901, 902, 902, 900, 900, 905, 900, 908, 906, 900, 904, 900, 904, 906, 904, 904, 902, 904, 904, 903, 904, 901, 902, 900, 900};
    vector<int> finish = {909, 909, 909, 906, 909, 906, 902, 907, 909, 907, 905, 905, 909, 906, 907, 905, 905, 908, 905, 909, 906, 909, 909, 907, 908, 905, 906, 903, 908, 905, 906, 904, 909, 908, 903, 907, 902, 909, 907, 907, 905, 903, 907, 907, 907, 909, 907, 908, 906, 904};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> start = {902, 908, 901, 901, 904, 903, 900, 900, 906, 904, 900, 902, 902, 900, 902, 906, 902, 901, 904, 901, 900, 905, 903, 905, 905, 901, 902, 900, 901, 901, 904, 900, 905, 902, 901, 900, 903, 902, 902, 900, 900, 906, 901, 904, 900, 901, 907, 902, 900, 903};
    vector<int> finish = {906, 909, 909, 906, 906, 906, 906, 904, 907, 906, 903, 905, 906, 909, 907, 909, 909, 902, 909, 907, 905, 909, 905, 909, 909, 906, 906, 901, 908, 909, 905, 907, 906, 905, 908, 905, 907, 903, 909, 901, 904, 907, 909, 909, 908, 903, 908, 909, 909, 909};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> start = {-304};
    vector<int> finish = {751};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1491.9953083036153;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> start = {-938};
    vector<int> finish = {-859};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 111.72287142747452;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> start = {-413, -386, -825};
    vector<int> finish = {521, 28, 951};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2511.643286774617;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> start = {-658, 161, -433};
    vector<int> finish = {781, 667, 348};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2035.0533162548838;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> start = {-306, 46, 559};
    vector<int> finish = {749, 898, 796};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1702.7131290972065;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> start = {-206, 867, 80};
    vector<int> finish = {304, 990, 950};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1691.3994205982217;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> start = {-668, -225, -279};
    vector<int> finish = {366, 156, 609};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1805.9507191504424;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> start = {329, -921, -491, -73, 381, -943, -666, -269, -944, -764, -428, -208, 671, -743, 155, 9, -662, -495, -508, -623, -591, -352, 487, 243, -692, 338, -537, 50, -945, 289, -930, -573, -900, 33, -617, -824, 705, -377, -657, -351, -718, -552, -815, 361, -276, -887, -218, -179, -493, 492};
    vector<int> finish = {431, -570, 827, 906, 815, -500, -593, 80, -326, 861, 517, 11, 862, 34, 808, 478, 936, 818, -443, 305, -454, -223, 851, 339, 326, 786, 472, 755, -695, 628, 440, 296, -403, 644, -488, 772, 811, 150, -21, -64, -382, -26, -96, 620, -196, -722, -11, 343, 597, 591};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2660.135710823792;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> start = {355, -425, -704, -698, 615, -534, 837, -215, 104, -211, 135, -976, -376, 215, -447, -223, -874, -871, -603, 103, -850, -631, 14, -63, 499, -931, -623, -896, -318, 231, -927, -941, 195, -240, -948, -102, -590, -813, -45, -538, -780, -924, -151, 329, -346, -674, -82, 239, 218, -822};
    vector<int> finish = {950, -388, 624, 381, 965, 984, 894, 527, 876, 86, 892, 779, 531, 647, 814, 247, -394, -788, -205, 139, 775, 129, 987, 213, 837, 437, -226, 860, -48, 263, -671, 919, 303, 696, 120, 173, -12, -258, 478, 548, 273, 192, 470, 683, 323, 591, 153, 750, 556, 44};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2776.101222938386;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> start = {-362, -834, -564, -591, -940, -501, -380, -565, -321, -757, -823, -660, -847, -818, -227, -941, -787, -817, -801, -879, -733, 517, 81, -599, -647, 78, 241, -796, 61, -679, -523, -947, -630, -892, -923, -962, -943, 303, -135, -574, -377, -188, -966, -703, -469, -151, -700, 141, -499, 585};
    vector<int> finish = {-238, -626, 899, 719, -505, 309, 19, 597, 772, -177, -358, 252, -581, -719, -58, -251, 617, 681, 60, -443, 483, 771, 840, -20, 66, 637, 348, -631, 845, -12, -311, -8, 164, -303, -642, 349, 413, 883, 177, 694, 28, 806, -522, 856, 539, 388, -646, 491, 411, 812};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2637.5082938258224;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> start = {26, 102, -380, -371, -469, 93, -977, -398, -636, -157, -616, -351, -26, -329, -948, -929, -632, -551, -248, -773, -884, 251, 344, -537, 217, -838, -676, -803, -971, -533, -899, 352, 833, -506, -257, 461, -776, -290, -724, -139, -817, 563, -888, -315, 750, -965, -941, 226, -693, -847};
    vector<int> finish = {491, 732, -100, 165, -404, 208, -685, 276, 837, 841, 704, 753, 447, 138, 9, 672, 732, 476, 581, -533, 862, 759, 825, 923, 774, 650, 417, -529, -394, 768, 448, 854, 938, 151, -112, 533, 602, 188, 124, 272, -673, 736, 397, 326, 814, 537, -42, 598, 730, -379};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2708.2189719444773;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> start = {-717, -737, 252, -449, -949, -693, 601, 129, -262, -979, -827, -466, 735, 318, -275, -882, -121, -857, -151, -850, 546, -739, -927, -812, -541, 838, 371, -631, 152, -665, -364, 188, -309, -732, -276, 269, -817, -978, -102, -964, 399, 147, -644, -545, -713, -161, -600, 159, -896, -454};
    vector<int> finish = {840, 286, 287, 268, 504, 395, 787, 305, 235, -157, -144, -463, 924, 817, 289, -862, 228, 968, 891, -210, 660, 425, -296, 921, -340, 854, 423, 62, 377, 51, 400, 647, -294, 801, 589, 594, 598, 744, 191, 490, 764, 758, -55, 91, -680, 331, 613, 345, -258, 322};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2753.4738059404162;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> start = {-862, -570, -528, -960, -352, 736, 411, -877, 257, -232, 187, -970, -810, -747, -940, -326, 525, -261, -763, -54, -380, 15, -495, -234, -452, 264, 57, -227, -832, -804, -361, -951, -105, -431, 141, -816, -168, 503, -135, -387, 4, 263, -372, -835, -188, -789, -93, 206, -774, 5};
    vector<int> finish = {-372, -462, -470, 499, 676, 928, 977, -79, 904, -1, 429, -151, 968, 178, -35, 292, 538, 67, -15, 972, 661, 483, 774, -125, 332, 990, 763, 733, 97, -720, 25, 282, 77, 636, 430, -707, 474, 953, 225, 571, 352, 983, 774, 389, 537, 998, 553, 890, -609, 766};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2783.1722907502512;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> start = {-756, -622, -413, -645, -249, -778, -622, 780, -117, 85, 160, -961, -330, -733, -315, 352, -471, -248, -538, 360, 822, -550, -702, -962, -762, 18, -304, -982, -322, -553, -561, -512, -62, -814, -778, -439, -609, 426, -392, -691, 478, -472, -78, 212, -266, -927, -906, -461, -990, -940};
    vector<int> finish = {-180, -309, -26, 342, 141, 271, 126, 831, 818, 115, 479, -432, -259, 427, 648, 533, 651, 244, -282, 409, 844, -342, 808, 415, 517, 718, 12, -403, 448, 392, -336, 614, 753, -621, 14, -383, -263, 611, 453, -162, 742, 380, 617, 467, 37, 161, -573, 566, -962, 534};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2593.6676733922563;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> start = {-981, -164, -477, 61, -854, -542, -400, -825, -952, -202, -982, 718, -133, -320, -781, 114, -180, -404, -945, -476, -26, -548, -472, 41, -12, -971, 405, 883, -354, -869, -628, -489, 160, -930, -996, -956, -667, -423, -876, -792, -868, -243, -383, -915, 228, -23, -430, -222, -120, -865};
    vector<int> finish = {-956, 972, -156, 73, 805, 39, 705, 19, 569, 879, 684, 731, 619, 895, 891, 344, 940, -292, -730, 68, 348, 120, 196, 179, 563, -177, 654, 962, 123, 313, 914, 499, 233, 588, 20, -911, 851, -213, -413, 63, 740, -23, 927, -250, 684, 868, -136, 73, 745, 552};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2783.1722907502512;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> start = {-387, -26, -199, -155, -319, -373, -421, 355, -957, 560, -959, 854, -466, 573, -594, -681, -810, -941, -420, -690, -835, 651, -467, -737, -703, -24, -197, 230, -891, -637, -52, -828, -125, -709, -831, 112, -422, 180, -860, -34, -885, -450, -419, -512, -115, -594, 558, -225, -688, -835};
    vector<int> finish = {243, 297, 905, 376, 320, 319, 52, 490, -377, 819, -748, 863, 238, 637, -342, -68, 201, -7, 642, 219, 826, 880, 215, -383, 625, 953, 109, 395, -578, 720, -2, -632, 249, 169, -819, 877, 490, 553, -602, 538, 145, 372, 188, 883, 467, -396, 654, 829, -468, 571};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2703.9763312573577;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> start = {337, -608, -574, -801, 150, -362, -666, -866, -410, -887, -861, 181, 626, -505, -791, -481, -147, -237, -907, -701, 118, -72, 332, -863, -692, -251, -570, -888, -909, -579, -509, -561, -562, 94, -719, -439, -599, -471, -736, -309, -723, -624, -446, -290, -59, -912, -644, -293, -892, -858};
    vector<int> finish = {576, -274, 435, 932, 752, 126, 763, 617, -140, -881, 279, 213, 999, 290, -605, 398, 168, -31, 600, 120, 897, 30, 830, 982, 613, -5, -65, -749, -632, -267, 766, 237, 725, 219, -195, 578, -270, 93, 963, 213, 90, 892, 685, 703, 867, 108, 461, -35, -236, -648};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2702.562117694985;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> start = {-1000};
    vector<int> finish = {1000};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2828.42712474619;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> start = {-900};
    vector<int> finish = {-899};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> start = {900};
    vector<int> finish = {901};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> start = {-5, -3};
    vector<int> finish = {-2, -2};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119286;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> start = {1, 4, 5, 6, -10};
    vector<int> finish = {101, 102, 101, 100, 99};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 158.39191898578665;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> start = {0, 3, 4};
    vector<int> finish = {5, 9, 6};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> start = {1};
    vector<int> finish = {7};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 8.485281374238571;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> start = {1, 4, 5, 6, -10, -100};
    vector<int> finish = {101, 102, 101, 100, 99, 2};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 285.67113959936523;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> start = {1, 2, 3, 4};
    vector<int> finish = {8, 7, 6, 5};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 9.899494936611665;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> start = {1, 5, -1};
    vector<int> finish = {6, 6, 2};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 9.899494936611665;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> start = {1, 4, 5, -6, -10};
    vector<int> finish = {101, 102, 101, 97, 99};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 158.39191898578665;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> start = {-1};
    vector<int> finish = {1};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> start = {1, 2, 4};
    vector<int> finish = {6, 3, 5};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> start = {1, 2};
    vector<int> finish = {4, 3};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119286;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> start = {-1000, -1000};
    vector<int> finish = {1000, 1000};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2828.42712474619;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> start = {1, 2, 3};
    vector<int> finish = {998, 999, 1000};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1412.799348810722;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> start = {0, 1, -2, 5};
    vector<int> finish = {6, 15, 3, 1000};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1417.0419894978413;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> start = {-1, 3, 1, 5, 2, 3, -2};
    vector<int> finish = {4, 11, 9, 11, 10, 7, 0};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 18.38477631085024;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> start = {-10};
    vector<int> finish = {-1};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> start = {1, 4, 5, 6, -10, -1, 5, 8, 3, 6, 8, 9, 4, 3, 2, 43, 3, 2, 1, 6};
    vector<int> finish = {234, 132, 41, 241, 234, 123, 42, 44, 23, 23, 42, 34, 123, 41, 234, 534, 1000, 234, 234, 333};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 1428.3556979968262;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> start = {1, 2, 3, 5};
    vector<int> finish = {6, 4, 7, 8};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 9.899494936611665;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> start = {0, 3, 4, 7};
    vector<int> finish = {5, 9, 6, 8};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 12.727922061357857;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> start = {0, 3, 1};
    vector<int> finish = {2, 5, 4};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> start = {0, 0, -1000, -1000, -1000, 0, -1, -2, -1000};
    vector<int> finish = {1, 1, 0, 0, -1, 777, 5, 3, 1};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 2513.05750033699;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> start = {0, 1, 3};
    vector<int> finish = {5, 2, 4};
    MountainRoad* pObj = new MountainRoad();
    clock_t start = clock();
    double result = pObj->findDistance(start, finish);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0710678118654755;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22831315&rd=13903&pm=10546
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
 
class MountainRoad {
public:
  double findDistance(vector <int>, vector <int>);
};
 
double MountainRoad::findDistance(vector <int> start, vector <int> finish) {
    double ret=0;
    int min=2000,max=-2000;
    for(int i=0;i<start.size();i++){
      if(start[i]<min)
        min=start[i];
      if(finish[i]>max)
        max=finish[i];
    }
    ret+=2*sqrt((max-min)*(max-min)/(double)2);
    return ret;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/