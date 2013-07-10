/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12143
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

class YamanoteLine {
public:
    long howMany(int n, vector<int> s1, vector<int> t1, vector<int> l1, vector<int> s2, vector<int> t2, vector<int> l2);
};

long YamanoteLine::howMany(int n, vector<int> s1, vector<int> t1, vector<int> l1, vector<int> s2, vector<int> t2, vector<int> l2) {
    long ret;
    return ret;
}


int test0() {
    int n = 3;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2};
    vector<int> t2 = {1, 2, 0};
    vector<int> l2 = {1, 1, 1};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 3;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2};
    vector<int> t2 = {1, 2, 0};
    vector<int> l2 = {2, 2, 2};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2};
    vector<int> t2 = {2, 0, 1};
    vector<int> l2 = {3, 3, 3};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    vector<int> s1 = {0, 1, 2, 3};
    vector<int> t1 = {2, 3, 0, 1};
    vector<int> l1 = {3, 4, 4, 3};
    vector<int> s2 = {1, 3};
    vector<int> t2 = {3, 1};
    vector<int> l2 = {5, 5};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 4;
    vector<int> s1 = {0, 2};
    vector<int> t1 = {2, 0};
    vector<int> l1 = {5, 5};
    vector<int> s2 = {1, 3};
    vector<int> t2 = {3, 1};
    vector<int> l2 = {4, 4};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 5;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 2};
    vector<int> t2 = {2, 4};
    vector<int> l2 = {2, 2};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 10;
    vector<int> s1 = {5, 7, 2, 3, 9, 4, 6, 0, 4, 2};
    vector<int> t1 = {0, 8, 3, 9, 8, 0, 8, 7, 1, 7};
    vector<int> l1 = {61, 54, 20, 64, 25, 73, 83, 79, 86, 56};
    vector<int> s2 = {4, 5, 4, 0, 8, 3, 8, 5, 5, 9};
    vector<int> t2 = {5, 2, 0, 1, 1, 4, 7, 6, 8, 3};
    vector<int> l2 = {1951, 6102, 3625, 5737, 1590, 1228, 9234, 1342, 9060, 1008};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 5726;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 50;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> t2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0};
    vector<int> l2 = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 49999999951;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 4;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3};
    vector<int> t2 = {2, 3, 0, 1};
    vector<int> l2 = {3, 3, 3, 3};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 5;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4};
    vector<int> t2 = {2, 3, 4, 0, 1};
    vector<int> l2 = {3, 3, 3, 3, 3};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 49;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    vector<int> t2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 0, 1};
    vector<int> l2 = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 50;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> t2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0, 1};
    vector<int> l2 = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 49;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    vector<int> t2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 0, 1};
    vector<int> l2 = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 24499999927;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 50;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> t2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0, 1};
    vector<int> l2 = {999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 24999999926;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 50;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> t2 = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 0, 1};
    vector<int> l2 = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 24999999951;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 4;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3};
    vector<int> t2 = {3, 0, 1, 2};
    vector<int> l2 = {4, 4, 4, 4};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 50;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> t2 = {49, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    vector<int> l2 = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 4;
    vector<int> s1 = {0, 2};
    vector<int> t1 = {1, 0};
    vector<int> l1 = {395, 460};
    vector<int> s2 = {1, 0, 2};
    vector<int> t2 = {0, 2, 1};
    vector<int> l2 = {738, 677, 863};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 284;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 5;
    vector<int> s1 = {0, 4, 1};
    vector<int> t1 = {1, 2, 3};
    vector<int> l1 = {1, 709, 1};
    vector<int> s2 = {2, 2, 1, 2, 3, 4, 2, 3, 4, 1, 1, 2, 0, 1};
    vector<int> t2 = {3, 1, 3, 3, 4, 1, 1, 0, 1, 0, 0, 4, 3, 0};
    vector<int> l2 = {524, 3663, 2536, 898, 1188, 2659, 2982, 3767, 2908, 3443, 4977, 775, 2070, 4594};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 3537;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 10;
    vector<int> s1 = {3, 3, 3, 6, 5, 9, 5, 5, 1, 0, 9, 2, 3, 1, 3, 6, 9, 4, 4, 1};
    vector<int> t1 = {0, 0, 6, 1, 8, 7, 8, 1, 0, 7, 7, 0, 0, 2, 5, 4, 1, 3, 2, 2};
    vector<int> l1 = {80055537, 80055536, 35342973, 51818574, 30742036, 84203964, 30742033, 52843376, 99080440, 74463706, 84203964, 83235497, 80055534, 15844929, 34318172, 76618813, 16846278, 100411123, 97231159, 15844928};
    vector<int> s2 = {7, 2, 0, 9, 7, 1, 1, 6, 8, 2, 5, 4, 0, 9, 7, 8, 0, 8, 4, 1, 1, 5, 9, 2, 5, 5};
    vector<int> t2 = {4, 3, 6, 7, 4, 9, 7, 9, 4, 9, 3, 6, 6, 2, 3, 2, 8, 2, 0, 7, 0, 1, 7, 3, 3, 1};
    vector<int> l2 = {63629010, 3179975, 61473902, 84203976, 63629005, 89340179, 67357696, 34972300, 46901587, 73495244, 71868289, 29567650, 61473903, 32691224, 57853679, 37946288, 91191133, 37946287, 74280207, 67357692, 99080444, 52843391, 84203976, 3179969, 71868286, 52843386};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 3;
    vector<int> s1 = {1, 1, 2, 1, 2, 2, 0, 0, 1, 1, 1, 1, 0, 1, 2, 0, 0, 1, 2, 1, 2, 2, 2, 0, 2, 1, 2};
    vector<int> t1 = {2, 0, 0, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 0, 1, 0, 1, 0, 1, 2, 1, 2, 0};
    vector<int> l1 = {1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 3, 1, 1, 3, 6, 1, 4, 1, 1, 1, 2, 2, 2, 1};
    vector<int> s2 = {0, 0, 0, 0, 1, 0, 1, 1, 2, 1, 0, 2, 1, 2, 2, 2, 0, 2, 0, 2, 0, 1, 2, 1, 1, 2, 0, 2, 0, 2};
    vector<int> t2 = {2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 2, 1, 0, 1, 0, 1, 2, 1, 2, 0, 1, 2, 1, 0, 0, 0, 2, 1, 1, 1};
    vector<int> l2 = {14, 9, 9, 7, 11, 10, 5, 9, 4, 7, 6, 3, 12, 6, 7, 8, 7, 6, 10, 3, 2, 9, 5, 14, 9, 2, 13, 7, 9, 4};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 10;
    vector<int> s1 = {4, 5, 3, 8, 2, 2, 9, 4, 5, 7, 2, 1, 7, 8, 9, 6, 4, 3, 5, 6, 5, 7, 8, 1, 1, 0, 3, 8, 5, 0};
    vector<int> t1 = {1, 9, 9, 0, 8, 5, 4, 8, 6, 8, 9, 2, 0, 5, 5, 5, 2, 1, 1, 5, 1, 2, 9, 8, 3, 3, 8, 6, 4, 8};
    vector<int> l1 = {17266257, 1452156, 4058390, 1425424, 12177496, 83702, 18184975, 4132014, 1, 1, 11469094, 1, 3090962, 17347383, 12834224, 17735804, 22504212, 22320144, 15760112, 18245118, 18418812, 12437931, 1, 6870047, 1343011, 5404797, 1533919, 20088273, 23188128, 17321159};
    vector<int> s2 = {1, 2, 9, 0, 5, 1, 3, 1, 3, 9, 2, 1, 5, 9, 5, 8, 8, 0, 8, 8, 3, 2, 3, 1, 8, 9, 0, 2};
    vector<int> t2 = {8, 5, 5, 4, 8, 0, 4, 3, 0, 4, 3, 5, 0, 3, 8, 9, 5, 7, 1, 3, 7, 8, 0, 0, 3, 1, 9, 0};
    vector<int> l2 = {15341363, 12744515, 25853346, 20035549, 7428011, 21192588, 3046825, 8206420, 21656730, 22607703, 8617428, 13301594, 17053459, 21033543, 9112220, 1717018, 21740714, 23359969, 15845452, 22191273, 13706391, 16436502, 19282061, 26045086, 21948258, 15700643, 24511591, 21776996};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 2735384;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 8;
    vector<int> s1 = {4, 4, 7, 6, 2, 7, 5, 4, 1, 4, 3, 7, 7, 0, 7, 2, 2, 5, 7};
    vector<int> t1 = {7, 7, 3, 0, 4, 4, 7, 0, 2, 0, 5, 2, 1, 5, 0, 7, 7, 7, 3};
    vector<int> l1 = {632087051, 632085008, 721073621, 466227758, 216132876, 833297954, 438352846, 850879212, 257405360, 850913738, 305952255, 617129892, 359641804, 808180238, 218727512, 848221971, 848209821, 438359177, 721007780};
    vector<int> s2 = {7, 4, 0, 5, 7, 7, 7, 0, 5, 4, 0, 5, 6};
    vector<int> t2 = {0, 1, 4, 7, 3, 0, 0, 6, 7, 7, 6, 0, 2};
    vector<int> l2 = {218843729, 991899831, 614652381, 438490918, 721156591, 218918896, 218889249, 999313204, 438559655, 632257884, 999241283, 657372125, 864792222};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 362290;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 4;
    vector<int> s1 = {2, 2, 1, 0, 0, 3, 2, 1, 1, 0, 0, 3, 0, 3, 2, 3, 0, 2, 2, 1, 0, 1, 3, 1, 1, 3, 0};
    vector<int> t1 = {1, 0, 0, 2, 1, 2, 0, 3, 3, 2, 3, 0, 2, 2, 1, 2, 1, 3, 3, 3, 1, 3, 2, 2, 0, 0, 3};
    vector<int> l1 = {548339430, 246798098, 396390584, 450974983, 301170374, 602070670, 246908152, 245207425, 245291864, 450825863, 546631453, 151243163, 450911435, 602081388, 548296588, 602172280, 301259296, 95662222, 95635212, 245073072, 301154278, 245106033, 602122863, 149463306, 396503753, 151070770, 546615391};
    vector<int> s2 = {3, 1, 1, 1, 1, 0};
    vector<int> t2 = {1, 2, 3, 2, 0, 2};
    vector<int> l2 = {452694255, 149715291, 245425962, 149821332, 396785374, 451221513};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 195498;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 10;
    vector<int> s1 = {0, 0, 0, 4, 3};
    vector<int> t1 = {7, 5, 3, 0, 2};
    vector<int> l1 = {227520, 150174, 80944, 259806, 286361};
    vector<int> s2 = {3, 1};
    vector<int> t2 = {7, 6};
    vector<int> l2 = {146662, 161208};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 10;
    vector<int> s1 = {6, 9, 8, 4, 4, 2, 6, 6, 8, 4, 9, 9, 7, 0, 6, 2, 8, 9, 4, 7, 2, 0, 9, 2, 8, 7, 2, 2, 5, 4};
    vector<int> t1 = {3, 0, 2, 3, 2, 1, 9, 1, 0, 6, 3, 0, 8, 3, 5, 6, 7, 7, 0, 0, 5, 8, 3, 5, 3, 2, 3, 4, 6, 7};
    vector<int> l1 = {67220467, 15436292, 38445784, 86225147, 76158900, 98298733, 24979724, 53488507, 21707615, 19004635, 42240703, 15436249, 2637769, 26804384, 89888652, 44810134, 99326629, 93055254, 59420760, 24345401, 32734396, 80256702, 42240658, 32734425, 48512048, 41083556, 10066218, 25805483, 12075695, 35075298};
    vector<int> s2 = {8, 4, 0, 8, 6, 4, 6, 7, 6, 5, 2, 4, 7};
    vector<int> t2 = {5, 5, 7, 5, 8, 5, 3, 8, 3, 2, 8, 3, 1};
    vector<int> l2 = {71180323, 6928996, 77618995, 71180320, 18708400, 6928977, 67220541, 2637806, 67220499, 69229974, 63518612, 86225242, 37417949};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 10;
    vector<int> s1 = {7, 6, 1, 0, 2, 7};
    vector<int> t1 = {0, 0, 4, 9, 8, 1};
    vector<int> l1 = {647347, 865301, 725904, 2163515, 1204281, 1097725};
    vector<int> s2 = {5, 8, 3, 4, 0, 1, 5, 5, 6, 1, 1, 2, 6, 6, 4, 3, 4, 7, 6};
    vector<int> t2 = {6, 1, 6, 7, 7, 0, 8, 8, 9, 8, 0, 9, 1, 4, 2, 8, 0, 5, 4};
    vector<int> l2 = {215664, 1050351, 566863, 756065, 1934717, 2132582, 483194, 483384, 451150, 1533562, 2131794, 1389589, 1317901, 2044117, 2182007, 834778, 1406125, 2150979, 2045069};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 5747;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 6;
    vector<int> s1 = {1, 2, 4, 5, 4, 1, 4, 1, 2, 0, 4, 4, 0, 1, 3, 2, 2};
    vector<int> t1 = {5, 1, 3, 4, 5, 3, 2, 0, 0, 2, 0, 5, 3, 3, 4, 0, 4};
    vector<int> l1 = {1138590, 1603880, 1435613, 1360351, 331392, 550388, 973522, 1251580, 1162774, 528985, 444095, 331699, 991261, 549635, 256225, 1162508, 718303};
    vector<int> s2 = {1, 1, 0, 0, 5, 4, 4, 5, 4, 4, 0, 3};
    vector<int> t2 = {3, 0, 3, 3, 0, 0, 1, 0, 0, 1, 3, 0};
    vector<int> l2 = {551139, 1252468, 992079, 991664, 113711, 445140, 885870, 113553, 445610, 885861, 991871, 701356};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 798;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 7;
    vector<int> s1 = {5, 5, 3, 3, 2};
    vector<int> t1 = {2, 0, 5, 5, 6};
    vector<int> l1 = {871001306, 473592057, 372342177, 372342914, 676294790};
    vector<int> s2 = {1, 4, 1, 3, 2, 2, 0, 6, 2, 2, 5, 1, 3, 4, 1, 2, 0, 1, 4, 4, 4, 1, 6};
    vector<int> t2 = {2, 0, 5, 5, 5, 5, 4, 1, 6, 3, 1, 3, 4, 0, 4, 6, 4, 5, 0, 5, 5, 3, 1};
    vector<int> l2 = {129480307, 566756057, 799606513, 372343885, 670126773, 670126466, 974373849, 735354325, 676295284, 297784223, 741522832, 427263512, 279180234, 566756131, 706443768, 676295949, 974372932, 799606212, 566755165, 93162909, 93163048, 427263147, 735353910};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 297783877;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 6;
    vector<int> s1 = {0, 3, 1, 4, 0, 2, 2, 1, 0, 2, 5, 1, 5, 1, 4, 1, 4, 0, 5, 2, 1, 2, 3, 5, 2};
    vector<int> t1 = {3, 2, 4, 2, 2, 0, 5, 2, 2, 0, 4, 0, 2, 4, 1, 3, 0, 2, 1, 4, 5, 3, 1, 3, 5};
    vector<int> l1 = {4219, 3651, 2890, 3208, 803, 2717, 1585, 1, 1074, 2681, 6236, 3367, 3117, 1125, 3046, 2211, 1317, 1040, 2345, 1082, 2595, 1860, 2478, 4451, 1570};
    vector<int> s2 = {5, 0};
    vector<int> t2 = {4, 5};
    vector<int> l2 = {7035, 6728};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 3307;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 7;
    vector<int> s1 = {0, 6, 1, 2, 3, 2, 6, 6, 1, 6, 3, 1, 5, 0, 5, 2, 4, 3, 5, 3, 6, 3, 5, 4, 0, 5, 0, 0, 4};
    vector<int> t1 = {4, 3, 6, 6, 1, 3, 3, 0, 3, 4, 6, 0, 3, 2, 3, 6, 1, 5, 4, 4, 1, 6, 6, 6, 4, 0, 3, 6, 3};
    vector<int> l1 = {10025672, 12306264, 16864055, 11014975, 16821021, 1, 16383635, 5943359, 1, 17362933, 10597219, 29298113, 19660000, 716982, 24765659, 14261850, 16488048, 2118528, 28182975, 247997, 4665041, 13753303, 1, 4338428, 15901146, 10244903, 9567969, 17693547, 20069204};
    vector<int> s2 = {5, 5, 5, 5, 0, 0};
    vector<int> t2 = {4, 2, 6, 6, 5, 1};
    vector<int> l2 = {34224566, 31044601, 13489923, 15355375, 24347523, 5194110};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 11827290;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 6;
    vector<int> s1 = {3, 0, 3, 5, 0, 3, 5, 4, 2, 2, 5, 4, 0, 3, 4, 2, 5, 0, 0, 3, 1, 1, 0, 3, 2, 2, 0, 1, 2};
    vector<int> t1 = {2, 5, 2, 0, 5, 5, 2, 3, 3, 4, 1, 2, 4, 0, 2, 3, 2, 4, 3, 2, 3, 5, 5, 0, 0, 3, 1, 2, 0};
    vector<int> l1 = {12239688, 12368461, 18017116, 3879078, 9750072, 4020464, 2809352, 15309721, 1347552, 2686256, 4426047, 10272545, 5846599, 9639493, 6516087, 1, 2706836, 8590470, 1, 15846705, 1, 9727427, 8221740, 9189698, 13921106, 1, 1, 1, 13051249};
    vector<int> s2 = {0, 3, 1, 3, 4, 1, 3, 3};
    vector<int> t2 = {1, 1, 4, 1, 1, 3, 1, 1};
    vector<int> l2 = {8761150, 24789157, 11425244, 26134455, 17405545, 4245173, 26181682, 21009847};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 5890353;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 10;
    vector<int> s1 = {5, 8, 6, 6, 8, 7, 3, 6, 5, 1, 9, 5, 4, 4, 9, 2, 7, 6, 1, 4, 3};
    vector<int> t1 = {7, 0, 9, 9, 6, 1, 4, 4, 6, 6, 2, 7, 0, 0, 1, 7, 4, 7, 0, 5, 7};
    vector<int> l1 = {5300861, 10203540, 15277094, 16927643, 40869485, 17345188, 2299901, 43400757, 1, 25423858, 14085293, 7424023, 28159756, 27069359, 6876201, 24432751, 35420083, 5841678, 48916042, 2128473, 15995110};
    vector<int> s2 = {};
    vector<int> t2 = {};
    vector<int> l2 = {};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 7;
    vector<int> s1 = {4, 6, 6, 2, 1, 5, 2, 0, 2, 4, 3, 5, 3, 6, 3};
    vector<int> t1 = {1, 5, 3, 0, 6, 4, 1, 6, 3, 6, 5, 0, 1, 3, 5};
    vector<int> l1 = {142, 246, 197, 148, 169, 272, 223, 243, 41, 42, 42, 64, 174, 203, 42};
    vector<int> s2 = {3, 6, 5, 0, 4, 2, 3, 6, 3, 2, 4, 6, 3, 2, 1, 0, 2, 0, 2};
    vector<int> t2 = {4, 0, 0, 1, 3, 1, 2, 5, 5, 6, 0, 0, 1, 3, 3, 1, 1, 4, 5};
    vector<int> l2 = {47, 54, 79, 71, 259, 235, 258, 278, 54, 135, 93, 44, 182, 57, 113, 65, 230, 219, 106};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 5;
    vector<int> s1 = {2, 3, 2, 3, 2, 2, 2, 4, 1, 2, 1, 1};
    vector<int> t1 = {4, 1, 1, 1, 4, 4, 0, 3, 2, 1, 0, 4};
    vector<int> l1 = {435, 5941, 7215, 4117, 1, 1, 3499, 9970, 753, 5670, 6463, 1148};
    vector<int> s2 = {2, 4};
    vector<int> t2 = {1, 0};
    vector<int> l2 = {11487, 3624};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 3;
    vector<int> s1 = {2, 1, 1, 0, 1, 0, 2, 2, 0, 1, 2, 1, 2, 1, 0, 1, 1};
    vector<int> t1 = {1, 0, 2, 1, 0, 2, 0, 1, 2, 0, 1, 2, 1, 2, 2, 2, 0};
    vector<int> l1 = {1, 729694, 132563, 88226, 238729, 1, 1, 1, 443322, 994252, 1, 746726, 1, 1, 676121, 447510, 1};
    vector<int> s2 = {0, 1, 1, 2, 1, 2, 0, 0, 1, 2};
    vector<int> t2 = {1, 2, 2, 0, 0, 1, 1, 2, 0, 0};
    vector<int> l2 = {389515, 1547481, 1293566, 154356, 2241877, 957944, 364309, 2215921, 1323396, 844777};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 605228;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 4;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {2, 2, 1, 1, 2, 3, 3, 0, 1, 0, 3, 2, 0, 3, 0};
    vector<int> t2 = {1, 0, 2, 0, 3, 1, 1, 3, 0, 2, 2, 1, 2, 2, 1};
    vector<int> l2 = {2010833, 2152019, 699391, 2058714, 947905, 1124973, 1319145, 1756557, 2262880, 1281158, 1471588, 1804189, 596207, 1547569, 635473};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 2229552;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 7;
    vector<int> s1 = {1, 3, 6, 4, 2, 4, 5, 1, 5, 2, 5, 5, 0, 0, 5, 1, 6, 1, 2, 4, 5, 6, 3};
    vector<int> t1 = {4, 2, 1, 2, 0, 5, 4, 5, 6, 5, 2, 1, 2, 3, 6, 2, 3, 0, 6, 5, 4, 3, 5};
    vector<int> l1 = {536477, 947899, 178928, 724586, 963817, 239114, 939275, 789295, 211532, 713004, 471517, 393454, 223264, 455674, 217586, 81481, 476463, 1045502, 926258, 244861, 941222, 491485, 475836};
    vector<int> s2 = {5, 1, 4, 3, 2, 0, 2, 1, 3, 4, 6, 1, 4, 6, 2, 0, 1};
    vector<int> t2 = {4, 2, 6, 0, 4, 4, 3, 0, 1, 3, 1, 0, 3, 2, 0, 6, 0};
    vector<int> l2 = {937903, 78534, 455914, 732223, 466737, 678325, 223494, 1045758, 875109, 948016, 171545, 1048632, 941740, 256309, 956402, 1146000, 1046372};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 6;
    vector<int> s1 = {3, 0, 5, 3, 2, 0, 4, 2, 3, 2, 5, 5, 4, 3, 3, 4, 3};
    vector<int> t1 = {4, 3, 1, 4, 3, 1, 0, 5, 4, 4, 1, 2, 1, 4, 0, 1, 5};
    vector<int> l1 = {270734264, 994878789, 712959801, 270734274, 525025905, 211973630, 699211843, 993985824, 270734265, 795760169, 712959809, 970839048, 911185461, 270734280, 969946119, 911185476, 468959928};
    vector<int> s2 = {3, 5, 4, 3, 5, 0, 4, 4, 0, 3, 4, 1, 3, 5, 2, 1, 5, 5};
    vector<int> t2 = {4, 2, 5, 5, 1, 3, 5, 1, 2, 0, 1, 2, 0, 0, 5, 3, 0, 2};
    vector<int> l2 = {270734268, 970839071, 198225672, 468959934, 712959802, 994878792, 198225666, 911185480, 469852889, 969946098, 911185472, 257879267, 969946109, 500986194, 993985843, 782905165, 500986173, 970839076};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 6;
    vector<int> s1 = {3, 4, 2, 5, 5, 2, 3, 1, 4, 0, 2, 0, 1, 4, 0, 3, 2};
    vector<int> t1 = {1, 1, 4, 1, 3, 0, 1, 5, 3, 5, 5, 4, 0, 1, 1, 5, 0};
    vector<int> l1 = {8530994, 4587123, 6083110, 3839980, 7162189, 8843968, 8530973, 8013111, 7909353, 9839410, 6830312, 9092310, 10026864, 4587159, 1826302, 4691014, 8843930};
    vector<int> s2 = {2, 5, 2, 2, 2, 5, 0, 3, 3, 3, 1, 1, 2, 3, 2, 2, 4, 2, 3, 4, 4};
    vector<int> t2 = {3, 1, 3, 1, 1, 2, 5, 0, 4, 2, 2, 5, 1, 1, 3, 5, 5, 5, 5, 1, 2};
    vector<int> l2 = {2139308, 3840071, 2139277, 10670316, 10670333, 5022867, 9839475, 6704635, 3943820, 9713845, 1182894, 8013104, 10670249, 8530943, 2139306, 6830304, 747223, 6830223, 4691032, 4587130, 5770075};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 6;
    vector<int> s1 = {1, 4, 3, 2, 2, 2, 3, 2, 2, 2, 4, 1};
    vector<int> t1 = {5, 1, 1, 5, 3, 4, 4, 1, 1, 4, 1, 0};
    vector<int> l1 = {2958, 1175, 1415, 1501, 1145, 1494, 353, 2559, 2571, 1443, 1162, 3261};
    vector<int> s2 = {5, 5, 4, 5, 5, 3, 3, 4, 4, 2, 3, 1};
    vector<int> t2 = {2, 0, 0, 3, 1, 5, 0, 3, 5, 5, 5, 5};
    vector<int> l2 = {2683, 327, 361, 3771, 1117, 391, 621, 3772, 71, 1444, 295, 2962};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 7;
    vector<int> s1 = {2, 4, 1, 4};
    vector<int> t1 = {6, 1, 6, 3};
    vector<int> l1 = {22668395, 24987447, 30328812, 37740023};
    vector<int> s2 = {2, 6, 1, 2, 0, 3, 1, 2, 6, 3, 4, 6, 4, 4, 6, 5, 3, 1, 4, 4, 3, 1, 4, 2, 4, 6, 6, 1};
    vector<int> t2 = {4, 4, 3, 4, 6, 2, 3, 6, 2, 1, 2, 5, 6, 5, 0, 1, 4, 0, 5, 6, 0, 0, 5, 5, 3, 2, 3, 2};
    vector<int> l2 = {11099542, 31896179, 12838562, 10990839, 36548278, 38330392, 12840542, 22721043, 20921009, 30785125, 32622041, 36242404, 11719736, 4099587, 6913413, 20622175, 5797525, 37220872, 4149580, 11603683, 24492697, 37341601, 4119151, 15069962, 37785430, 20943962, 26212645, 7829594};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 6;
    vector<int> s1 = {1, 0, 5};
    vector<int> t1 = {3, 2, 0};
    vector<int> l1 = {458095655, 502462096, 309264597};
    vector<int> s2 = {3, 1, 4, 5, 1, 2, 5};
    vector<int> t2 = {5, 2, 0, 1, 3, 4, 1};
    vector<int> l2 = {905909168, 186859458, 810548331, 624916508, 458200177, 676029009, 624968855};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 906062962;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 10;
    vector<int> s1 = {8, 5, 2, 7, 1, 5, 1, 6, 5, 7};
    vector<int> t1 = {4, 0, 9, 6, 5, 8, 6, 1, 3, 8};
    vector<int> l1 = {853663, 782544, 836040, 1303065, 400334, 543176, 574080, 866095, 1238345, 232201};
    vector<int> s2 = {8, 7, 8, 3, 2, 0, 0};
    vector<int> t2 = {0, 3, 3, 7, 9, 5, 9};
    vector<int> l2 = {240280, 929706, 696576, 514224, 838930, 659079, 1238925};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 3756;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 13;
    vector<int> s1 = {9, 9, 2, 7, 0, 0, 7, 2};
    vector<int> t1 = {12, 1, 11, 4, 11, 5, 6, 6};
    vector<int> l1 = {68532734, 76346030, 303480787, 235531134, 305244612, 112022173, 334873059, 160292022};
    vector<int> s2 = {3, 12, 8, 11, 2};
    vector<int> t2 = {12, 2, 1, 0, 1};
    vector<int> l2 = {366744757, 13085701, 137815285, 70826222, 374053504};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 52266144;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 9;
    vector<int> s1 = {3, 6, 6, 8, 3};
    vector<int> t1 = {2, 0, 3, 7, 5};
    vector<int> l1 = {2014, 821, 1491, 2023, 623};
    vector<int> s2 = {8, 2, 5, 0, 8, 0, 2, 5, 2, 8};
    vector<int> t2 = {0, 3, 3, 7, 0, 5, 6, 3, 7, 2};
    vector<int> l2 = {296, 125, 1518, 1729, 297, 1295, 776, 1519, 1186, 843};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 157;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 4;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {2, 0, 3, 3, 2, 0, 3};
    vector<int> t2 = {3, 2, 0, 2, 3, 1, 1};
    vector<int> l2 = {1041, 4399, 3427, 7824, 1043, 4037, 7463};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 8862;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 16;
    vector<int> s1 = {9, 9, 13, 15, 11, 0, 14};
    vector<int> t1 = {12, 7, 7, 1, 7, 11, 11};
    vector<int> l1 = {27, 425, 269, 81, 390, 302, 342};
    vector<int> s2 = {15, 11, 0, 9, 8};
    vector<int> t2 = {5, 15, 15, 3, 10};
    vector<int> l2 = {233, 154, 427, 363, 114};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 229;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 11;
    vector<int> s1 = {1, 7, 0};
    vector<int> t1 = {7, 3, 4};
    vector<int> l1 = {1728419, 2177003, 1585678};
    vector<int> s2 = {4, 0};
    vector<int> t2 = {9, 10};
    vector<int> l2 = {1049804, 2813162};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 11;
    vector<int> s1 = {2, 6, 3};
    vector<int> t1 = {7, 9, 2};
    vector<int> l1 = {286816, 194830, 596814};
    vector<int> s2 = {1, 7, 3, 3, 5, 0};
    vector<int> t2 = {4, 0, 8, 1, 2, 9};
    vector<int> l2 = {324509, 205107, 385394, 617666, 545613, 724373};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 332664;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 21;
    vector<int> s1 = {10, 17, 6, 4};
    vector<int> t1 = {0, 2, 4, 11};
    vector<int> l1 = {829, 410, 1375, 586};
    vector<int> s2 = {};
    vector<int> t2 = {};
    vector<int> l2 = {};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 8;
    vector<int> s1 = {0, 3, 7, 3, 2, 7, 5, 3, 3};
    vector<int> t1 = {5, 5, 3, 2, 0, 3, 2, 0, 1};
    vector<int> l1 = {3323145, 1449361, 2217166, 5409605, 3557303, 2216164, 3956790, 3545702, 5298492};
    vector<int> s2 = {7, 3, 0, 1, 1, 4, 2, 5, 3};
    vector<int> t2 = {1, 4, 4, 0, 6, 5, 6, 7, 2};
    vector<int> l2 = {2097302, 1287168, 3160833, 3671069, 1761261, 169919, 1650270, 1749625, 5412696};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 5756;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 4;
    vector<int> s1 = {2, 0};
    vector<int> t1 = {3, 2};
    vector<int> l1 = {1163, 15903};
    vector<int> s2 = {};
    vector<int> t2 = {};
    vector<int> l2 = {};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 24;
    vector<int> s1 = {4, 13, 15};
    vector<int> t1 = {14, 8, 19};
    vector<int> l1 = {155970, 246506, 45933};
    vector<int> s2 = {5, 2, 6, 2, 3, 4, 22, 4, 11};
    vector<int> t2 = {10, 23, 23, 23, 1, 21, 20, 7, 6};
    vector<int> l2 = {64023, 295353, 225968, 295461, 320960, 245107, 304001, 52919, 288899};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 134471;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 16;
    vector<int> s1 = {2, 12, 15, 11, 2, 3, 8};
    vector<int> t1 = {11, 10, 13, 15, 5, 15, 5};
    vector<int> l1 = {2079, 3900, 3618, 1571, 917, 3628, 3519};
    vector<int> s2 = {10, 9, 6, 11, 13, 1, 14, 12, 3, 7};
    vector<int> t2 = {1, 13, 13, 6, 0, 12, 0, 2, 11, 1};
    vector<int> l2 = {1936, 1071, 1771, 3459, 1048, 2933, 647, 1875, 2072, 2703};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 587;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 17;
    vector<int> s1 = {16, 8, 10, 14, 12, 9};
    vector<int> t1 = {12, 16, 5, 10, 6, 8};
    vector<int> l1 = {4157824, 1866516, 3141645, 4108032, 3218021, 4496873};
    vector<int> s2 = {16, 12, 16, 11, 14, 10, 0, 0, 12};
    vector<int> t2 = {12, 4, 1, 0, 5, 1, 15, 5, 8};
    vector<int> l2 = {4179746, 2296715, 582368, 1387286, 2294034, 1761395, 4509527, 1681982, 3959361};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 467667;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 9;
    vector<int> s1 = {5, 0, 2};
    vector<int> t1 = {1, 2, 8};
    vector<int> l1 = {43006, 28707, 47557};
    vector<int> s2 = {2};
    vector<int> t2 = {3};
    vector<int> l2 = {6459};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 23;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {12, 11, 17, 3};
    vector<int> t2 = {1, 13, 22, 8};
    vector<int> l2 = {1679324, 206383, 811730, 806304};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 18;
    vector<int> s1 = {15, 6, 16, 1, 12, 3};
    vector<int> t1 = {16, 16, 11, 17, 8, 4};
    vector<int> l1 = {1595, 23035, 24923, 35410, 30286, 872};
    vector<int> s2 = {7, 5, 4, 15};
    vector<int> t2 = {4, 13, 5, 5};
    vector<int> l2 = {32883, 19028, 2552, 14640};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 19046;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 28;
    vector<int> s1 = {9, 19, 19, 0, 18, 24, 8, 13, 15, 14};
    vector<int> t1 = {19, 1, 24, 17, 9, 4, 6, 22, 19, 6};
    vector<int> l1 = {24285919, 17229933, 9952515, 37432112, 36550013, 17135864, 54390915, 20684721, 10081866, 42028701};
    vector<int> s2 = {6, 27, 1, 13, 6};
    vector<int> t2 = {26, 0, 3, 9, 0};
    vector<int> l2 = {45079508, 468319, 6335502, 50338364, 46767950};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 20342228;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 28;
    vector<int> s1 = {24, 25, 11, 21, 7};
    vector<int> t1 = {14, 0, 24, 1, 15};
    vector<int> l1 = {42957, 9089, 27975, 20980, 15276};
    vector<int> s2 = {13, 0, 19, 18, 2, 20, 10, 18};
    vector<int> t2 = {24, 3, 4, 26, 21, 9, 2, 12};
    vector<int> l2 = {21664, 7678, 32287, 19151, 38560, 40070, 47072, 53117};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 23408;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 16;
    vector<int> s1 = {};
    vector<int> t1 = {};
    vector<int> l1 = {};
    vector<int> s2 = {12, 8, 4, 14, 6};
    vector<int> t2 = {10, 6, 5, 8, 9};
    vector<int> l2 = {128143894, 119326325, 13128654, 88679160, 32807435};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 152133744;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 21;
    vector<int> s1 = {13, 18, 20, 7, 6, 10, 8, 3, 16};
    vector<int> t1 = {11, 12, 11, 19, 16, 9, 20, 13, 14};
    vector<int> l1 = {82, 63, 48, 62, 58, 101, 63, 47, 86};
    vector<int> s2 = {11, 4, 18, 7, 14, 6, 16, 8, 15};
    vector<int> t2 = {12, 2, 11, 2, 20, 20, 8, 15, 2};
    vector<int> l2 = {4, 90, 60, 75, 32, 75, 52, 33, 36};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 14;
    vector<int> s1 = {13, 4, 2, 9, 1, 8, 10};
    vector<int> t1 = {5, 7, 5, 12, 6, 11, 1};
    vector<int> l1 = {668254157, 457005200, 404172495, 454342083, 778258287, 454214592, 492568836};
    vector<int> s2 = {};
    vector<int> t2 = {};
    vector<int> l2 = {};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 13;
    vector<int> s1 = {9, 7, 2, 7};
    vector<int> t1 = {12, 12, 3, 9};
    vector<int> l1 = {798515130, 935750010, 60169236, 107028592};
    vector<int> s2 = {5, 5};
    vector<int> t2 = {8, 6};
    vector<int> l2 = {717960251, 346293528};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 17;
    vector<int> s1 = {13, 10, 14, 0, 10, 10, 16};
    vector<int> t1 = {5, 3, 8, 12, 4, 1, 3};
    vector<int> l1 = {79264089, 70209003, 97382879, 124789041, 104676390, 77607594, 5051986};
    vector<int> s2 = {10, 15, 10, 6, 15};
    vector<int> t2 = {16, 10, 4, 10, 0};
    vector<int> l2 = {66949554, 124445655, 93809616, 57352618, 21192304};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 26;
    vector<int> s1 = {16, 22, 11, 25, 11, 20, 18, 14, 25};
    vector<int> t1 = {20, 20, 16, 17, 21, 13, 22, 5, 11};
    vector<int> l1 = {218821245, 971621701, 195312709, 719923178, 435120060, 696465576, 127721499, 627429052, 473198858};
    vector<int> s2 = {18, 16, 23};
    vector<int> t2 = {13, 11, 20};
    vector<int> l2 = {790581075, 825222490, 949056325};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 77031010;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 28;
    vector<int> s1 = {0, 6, 24, 0, 22, 11, 15, 20, 10, 21, 17, 6, 10, 12, 19, 10, 4, 12, 26, 26, 23, 24, 20, 8, 3, 3, 10};
    vector<int> t1 = {26, 20, 7, 1, 19, 0, 9, 17, 14, 27, 26, 17, 21, 20, 21, 23, 24, 10, 20, 1, 1, 5, 3, 21, 8, 13, 0};
    vector<int> l1 = {111733, 54625, 40447, 1, 102370, 62761, 85978, 107853, 14963, 24419, 31547, 53388, 43406, 25477, 7947, 52397, 85947, 110578, 89534, 113, 10739, 31203, 38518, 49282, 30193, 55570, 68560};
    vector<int> s2 = {0, 2, 5, 5, 1, 21, 21, 14, 26, 20, 6, 17, 21, 10, 24, 25, 11, 25, 0, 9, 2, 4, 21, 20, 3, 4, 24, 13, 11, 13, 19, 19, 23};
    vector<int> t2 = {14, 25, 26, 4, 21, 18, 2, 7, 6, 12, 21, 3, 27, 11, 13, 7, 24, 17, 19, 2, 4, 10, 14, 3, 7, 8, 15, 17, 27, 20, 16, 20, 8};
    vector<int> l2 = {70462, 109274, 93555, 118558, 97017, 110991, 34351, 88362, 41261, 95175, 70215, 51526, 26570, 11863, 79211, 49892, 58997, 101154, 86981, 87952, 11063, 38003, 97926, 40960, 28693, 26735, 88525, 20824, 69758, 30146, 114834, 12299, 56928};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 13258;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 49;
    vector<int> s1 = {35, 31, 19, 28, 30, 33, 7, 8, 21, 33, 8, 20, 5, 47, 8, 14, 46, 46, 18, 28, 16, 4, 24, 46, 45, 30, 12, 36, 21, 47, 20, 15};
    vector<int> t1 = {4, 10, 40, 10, 15, 11, 44, 44, 1, 22, 27, 0, 33, 24, 34, 6, 34, 3, 33, 43, 40, 11, 1, 23, 46, 20, 20, 29, 47, 10, 30, 12};
    vector<int> l1 = {298, 533, 336, 570, 614, 504, 597, 590, 486, 631, 283, 473, 441, 432, 413, 698, 628, 94, 248, 267, 396, 148, 444, 410, 1, 673, 85, 701, 433, 246, 149, 795};
    vector<int> s2 = {6, 20, 9, 5, 24, 7, 6, 40, 38, 38, 8, 6, 10, 28, 47, 12, 34};
    vector<int> t2 = {39, 33, 4, 39, 30, 0, 39, 27, 19, 39, 10, 5, 30, 12, 45, 48, 20};
    vector<int> l2 = {539, 226, 747, 566, 117, 675, 526, 618, 533, 28, 54, 818, 295, 630, 841, 563, 603};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 61;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 50;
    vector<int> s1 = {17, 12, 38};
    vector<int> t1 = {18, 37, 28};
    vector<int> l1 = {27034, 521200, 710002};
    vector<int> s2 = {20, 13, 4, 46, 38, 13, 6, 29, 27, 27, 36, 41, 39, 33, 38, 24, 16, 43};
    vector<int> t2 = {19, 7, 19, 49, 45, 23, 20, 16, 18, 40, 10, 31, 21, 41, 48, 47, 44, 2};
    vector<int> l2 = {888561, 771981, 312279, 27756, 94690, 222872, 312403, 636759, 715229, 250228, 344976, 751016, 568048, 140860, 149262, 420453, 545323, 113735};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 256535;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 39;
    vector<int> s1 = {33, 6, 34, 19, 33, 12, 29, 31, 22, 17, 0, 15, 3, 31, 21};
    vector<int> t1 = {11, 14, 13, 20, 26, 2, 17, 33, 27, 6, 15, 4, 29, 38, 7};
    vector<int> l1 = {650574, 342023, 651700, 38344, 1205784, 1043052, 1003005, 87941, 163307, 956255, 567473, 932470, 948885, 322304, 806920};
    vector<int> s2 = {26, 2, 33, 21, 28, 37, 15, 31, 21, 8, 6, 5, 29, 15, 23, 5, 35, 11, 13, 12, 18, 27, 17, 10, 32, 31, 19, 3, 20, 25, 12};
    vector<int> t2 = {16, 4, 11, 3, 19, 29, 13, 5, 24, 11, 9, 31, 24, 19, 14, 7, 32, 38, 36, 18, 38, 29, 33, 5, 0, 11, 2, 6, 8, 17, 34};
    vector<int> l2 = {1060589, 42480, 661807, 701348, 1139177, 1089475, 1311220, 442195, 128943, 172502, 143753, 982836, 1319424, 152405, 1050389, 92621, 1295155, 1009448, 859540, 260377, 732460, 43098, 554040, 1177420, 289035, 749637, 761638, 89098, 902478, 1112495, 797574};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 15508;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 30;
    vector<int> s1 = {14, 10, 24, 27, 0, 2, 20, 19, 26, 15, 26, 6, 22, 17, 14};
    vector<int> t1 = {22, 8, 5, 4, 2, 9, 1, 5, 23, 8, 3, 24, 16, 14, 27};
    vector<int> l1 = {430423, 1756036, 703395, 446928, 128257, 474455, 748805, 982513, 1595968, 1572302, 433559, 1055287, 1565603, 1591511, 841522};
    vector<int> s2 = {29, 19, 8, 24, 0, 15, 26, 8, 0, 18, 18, 29, 0, 18, 18, 17, 23, 23, 26, 16, 4, 7, 18, 28, 8, 14, 16, 27, 17};
    vector<int> t2 = {5, 17, 25, 12, 16, 20, 20, 20, 13, 13, 20, 3, 25, 17, 5, 14, 11, 9, 25, 4, 18, 1, 6, 7, 25, 17, 4, 11, 18};
    vector<int> l2 = {401847, 1785953, 993591, 1119464, 970811, 347983, 1469505, 615294, 745127, 1520842, 110702, 259349, 1548679, 1867579, 1091376, 1604679, 1218837, 1177401, 1837107, 1167573, 802204, 1449726, 1153148, 631398, 985078, 262255, 1177755, 873417, 6871};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 73166;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 41;
    vector<int> s1 = {26, 32, 2, 40, 30, 31, 32, 30, 10, 24, 35, 25, 2, 7, 15, 31, 29, 5, 6, 37, 34, 27, 14, 27, 40, 20, 13, 38, 6, 38, 13, 10, 34, 10, 20, 6, 27, 22, 40, 23};
    vector<int> t1 = {32, 23, 7, 28, 3, 20, 0, 2, 6, 6, 7, 14, 37, 8, 40, 20, 5, 2, 32, 36, 36, 18, 12, 40, 11, 26, 37, 32, 33, 17, 19, 14, 37, 39, 10, 5, 10, 10, 15, 27};
    vector<int> l1 = {1673508, 8172540, 1555291, 8354930, 3641184, 7614552, 2023472, 3124394, 10425705, 6550720, 3498956, 7789224, 9803018, 197011, 7452117, 7615122, 4481254, 10123840, 7252802, 10790451, 298220, 7768707, 10398364, 3220137, 2809348, 2316185, 7163394, 9624368, 7391379, 4809664, 1644479, 1006582, 690392, 8322143, 8671928, 11005488, 5925940, 8085678, 3728513, 1760987};
    vector<int> s2 = {19, 0, 32, 29, 38, 23, 14, 31, 12, 24, 24, 16, 18, 26, 14, 17, 31, 9, 36, 5, 0, 24, 5, 27, 33, 27, 5, 7, 21, 27, 39, 4, 20};
    vector<int> t2 = {24, 2, 26, 4, 25, 17, 28, 27, 32, 36, 36, 33, 39, 20, 18, 32, 10, 16, 22, 26, 25, 3, 21, 39, 29, 16, 38, 40, 9, 33, 33, 32, 36};
    vector<int> l2 = {1576473, 671279, 9508663, 4066329, 7527385, 9374779, 4645028, 10364416, 6274992, 3551443, 3551605, 5146885, 6482132, 8864476, 834828, 4817342, 5109635, 1614562, 6850475, 5755501, 7056775, 5835926, 3826157, 3068928, 10313816, 7421434, 8986685, 8907528, 8166257, 1384195, 9497363, 7846757, 4920822};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 2496;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 30;
    vector<int> s1 = {17, 13, 2, 16, 10, 0, 5, 13, 21, 22, 26, 21, 11, 25, 17, 13, 2, 14, 4, 7, 20, 15, 6, 7, 5};
    vector<int> t1 = {27, 24, 1, 3, 21, 15, 9, 0, 0, 14, 8, 0, 1, 12, 16, 27, 15, 7, 22, 19, 12, 24, 12, 26, 15};
    vector<int> l1 = {321, 261, 696, 401, 236, 360, 75, 398, 264, 576, 241, 254, 479, 428, 723, 394, 286, 563, 377, 247, 568, 227, 119, 484, 226};
    vector<int> s2 = {14, 29, 27, 20, 17, 10, 9, 10, 20, 11, 17, 5, 6, 23, 20, 14, 23, 10, 16, 11, 21, 14, 9, 24, 17, 4, 0, 21, 21, 27, 18, 1, 8, 26, 3, 24, 27, 13, 29, 17, 0, 26, 25, 4, 24, 26, 18, 0, 25, 12};
    vector<int> t2 = {13, 6, 3, 25, 16, 24, 17, 6, 26, 10, 14, 7, 18, 13, 5, 12, 18, 26, 1, 19, 10, 18, 11, 18, 16, 28, 25, 24, 14, 0, 4, 28, 9, 6, 23, 21, 26, 20, 13, 0, 16, 23, 26, 8, 0, 29, 23, 26, 1, 19};
    vector<int> l2 = {759, 181, 101, 166, 742, 373, 215, 674, 222, 720, 686, 66, 268, 552, 426, 744, 642, 450, 407, 167, 517, 94, 77, 562, 733, 639, 636, 137, 598, 53, 441, 726, 26, 245, 484, 644, 719, 150, 356, 383, 382, 628, 82, 125, 157, 92, 129, 675, 194, 144};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 44;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 33;
    vector<int> s1 = {12, 30, 2, 7, 21, 1, 19, 30, 32, 2, 10, 25, 18, 32, 32, 5, 15, 2, 18, 26, 8, 1, 27, 17, 2, 14, 21, 17, 2, 14, 26, 1, 5, 28, 17, 31, 2, 7, 19, 9, 24, 5, 2, 6, 19};
    vector<int> t1 = {19, 3, 10, 24, 11, 13, 30, 10, 12, 8, 29, 3, 0, 6, 11, 6, 31, 18, 32, 30, 29, 26, 1, 28, 28, 27, 12, 6, 11, 0, 31, 25, 23, 18, 24, 0, 25, 12, 27, 15, 31, 18, 27, 13, 12};
    vector<int> l1 = {344342337, 203025006, 262582592, 722197062, 747783030, 414803724, 336974107, 461687461, 439474239, 170463376, 763846532, 379274937, 544022826, 166225497, 412984479, 31911883, 600608482, 638747309, 497341587, 146673529, 855965784, 894238677, 299047179, 388388564, 982609340, 492188303, 774272795, 708093628, 321081186, 758038222, 206829674, 864662288, 779093843, 884130209, 234550706, 93726614, 852637464, 240996492, 225006960, 278360827, 260272046, 596337057, 916920256, 328456728, 883649895};
    vector<int> s2 = {28, 32, 12, 10, 26};
    vector<int> t2 = {18, 7, 5, 14, 14};
    vector<int> l2 = {884130252, 198477747, 922831627, 162149358, 770510364};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 115651221;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 36;
    vector<int> s1 = {23, 25, 28, 28, 6, 29, 6, 17, 34, 18, 33, 15, 28, 20, 27, 19, 16, 8, 31, 9, 7, 13, 32, 17, 30, 9, 12, 31, 14, 1, 28, 19, 21, 23, 24, 12, 9, 22, 1, 29, 18, 1};
    vector<int> t1 = {35, 33, 6, 3, 16, 16, 0, 13, 4, 30, 8, 14, 5, 34, 21, 6, 30, 32, 25, 27, 6, 15, 11, 29, 22, 35, 23, 0, 21, 6, 6, 15, 7, 13, 20, 16, 27, 10, 12, 2, 7, 22};
    vector<int> l1 = {43, 29, 37, 26, 33, 66, 105, 109, 11, 50, 25, 117, 35, 56, 90, 80, 57, 91, 97, 65, 120, 2, 44, 45, 80, 90, 29, 9, 11, 10, 33, 115, 75, 91, 95, 6, 62, 83, 37, 23, 85, 64};
    vector<int> s2 = {11, 12, 8, 20, 13, 7, 3, 25, 27, 4, 5, 31, 18, 16, 18, 2, 19, 17, 30, 19, 19, 34, 5, 22, 8, 16, 21};
    vector<int> t2 = {14, 28, 10, 11, 3, 1, 31, 9, 10, 16, 33, 23, 10, 20, 3, 16, 0, 5, 2, 28, 15, 13, 1, 23, 16, 15, 14};
    vector<int> l2 = {12, 58, 12, 100, 85, 110, 103, 63, 64, 41, 101, 91, 101, 8, 76, 50, 68, 86, 22, 46, 117, 51, 114, 8, 33, 120, 110};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 28;
    vector<int> s1 = {19, 12, 7, 7, 10, 26, 19, 26, 15, 15, 21, 24, 20, 19, 27, 25, 19, 6, 10, 11, 7, 17, 6, 10, 19, 12, 3, 7, 20, 12, 20};
    vector<int> t1 = {18, 14, 12, 15, 18, 20, 21, 19, 5, 0, 4, 25, 24, 7, 21, 1, 13, 0, 25, 25, 9, 11, 0, 21, 16, 9, 27, 11, 17, 16, 13};
    vector<int> l1 = {106619159, 3506710, 14041172, 15491497, 15738846, 81685859, 1, 78728290, 78373319, 49778349, 54035057, 1, 16112833, 71995022, 74465373, 18893606, 90764421, 77652833, 32841977, 33241241, 11998238, 94683112, 71201917, 16340874, 102038201, 103575145, 87563511, 13504183, 102927276, 9337334, 90430131};
    vector<int> s2 = {27, 2, 15, 18, 1, 10, 3, 25, 3, 17, 13, 10, 4, 4, 20, 21, 6, 0, 6, 2, 14, 18, 15, 11, 17, 21, 18, 16, 24, 27, 1, 19, 19};
    vector<int> t2 = {22, 13, 3, 22, 9, 26, 21, 15, 27, 8, 17, 27, 17, 8, 23, 24, 9, 2, 26, 9, 20, 21, 3, 10, 10, 24, 24, 10, 20, 10, 4, 1, 0};
    vector<int> l2 = {90514214, 47599348, 67149809, 10688155, 52489312, 46488677, 58317141, 82136722, 93735480, 89632886, 13453417, 58252732, 47905908, 26600742, 15233204, 24351555, 22577289, 15875452, 68710164, 44939856, 21179949, 5162485, 69048624, 114141245, 100209438, 23327713, 24622574, 101658868, 90766085, 58475062, 21620466, 49536279, 45120915};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 8769498;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 46;
    vector<int> s1 = {16};
    vector<int> t1 = {27};
    vector<int> l1 = {6809346};
    vector<int> s2 = {3, 37, 42, 40, 19, 2, 34, 1, 13, 13, 12, 24, 34, 12, 24, 8, 39, 18, 33, 8, 13, 10, 43, 45, 5, 43, 38, 20, 28, 45, 38, 29, 14, 19};
    vector<int> t2 = {33, 27, 16, 12, 27, 21, 19, 23, 30, 17, 30, 13, 4, 11, 15, 9, 21, 33, 12, 19, 45, 35, 3, 39, 23, 9, 25, 42, 13, 34, 22, 20, 26, 11};
    vector<int> l2 = {16222711, 19662709, 10281879, 9103485, 5373616, 10919490, 15977062, 11844913, 9645719, 1763159, 10291276, 17518031, 7713284, 23350307, 19159235, 951761, 14782844, 8497915, 12676368, 6279857, 16993983, 13419321, 2952809, 21584743, 10037661, 6009051, 17671639, 11730133, 14834959, 18586309, 15682683, 18498023, 7069861, 19625828};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 17520341;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 21;
    vector<int> s1 = {0, 20, 0, 7, 17};
    vector<int> t1 = {13, 15, 7, 17, 7};
    vector<int> l1 = {706702, 872830, 393331, 504634, 438045};
    vector<int> s2 = {1, 2, 14, 7, 9, 13, 6, 0, 13, 4, 1, 1, 12, 0, 11, 4, 3, 3, 11, 4, 12, 9, 6, 11, 20, 0, 12, 1, 13, 19, 2, 14, 4, 18, 5, 2, 6, 1, 18, 6, 4, 10, 3, 19};
    vector<int> t2 = {2, 9, 11, 10, 1, 9, 3, 3, 20, 13, 3, 14, 14, 18, 13, 2, 9, 15, 10, 10, 17, 14, 13, 14, 5, 4, 0, 11, 20, 5, 17, 18, 16, 1, 9, 1, 10, 19, 8, 16, 16, 13, 14, 5};
    vector<int> l2 = {94837, 364647, 783256, 198905, 536702, 715983, 777985, 119100, 269402, 499161, 96092, 777604, 173458, 938658, 134610, 851627, 352513, 789579, 965222, 373215, 303526, 324115, 398755, 199969, 256107, 224607, 363430, 572216, 268359, 280487, 823414, 152703, 693122, 56830, 230914, 886174, 284090, 941324, 501620, 606289, 704295, 138298, 685345, 276840};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 32444;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 47;
    vector<int> s1 = {10, 14, 39, 37, 12, 32, 26, 26, 29, 13, 16, 15, 0, 33, 46, 8, 0, 5, 23, 14, 20, 44, 3, 40, 31, 19, 15, 13, 32, 10, 4, 31, 30, 13, 4, 44, 42, 45, 2, 6, 2};
    vector<int> t1 = {1, 42, 12, 36, 14, 43, 0, 31, 36, 6, 7, 41, 44, 28, 1, 0, 1, 9, 46, 41, 36, 24, 6, 35, 45, 31, 12, 3, 19, 7, 41, 19, 6, 1, 32, 13, 32, 18, 17, 32, 25};
    vector<int> l1 = {2436733, 1606885, 1395429, 2925922, 125820, 675294, 1364907, 271728, 470293, 2568201, 2409206, 1406890, 2651739, 2649333, 97554, 2466774, 16129, 148373, 1509308, 1520640, 1119632, 1746943, 269452, 2767121, 897641, 768014, 2707023, 2298729, 2168084, 2850173, 2117213, 2178579, 1503727, 2185770, 1615227, 1071810, 2358352, 1279403, 910957, 1465347, 1391218};
    vector<int> s2 = {40, 22, 2};
    vector<int> t2 = {41, 8, 29};
    vector<int> l2 = {56886, 2187242, 1648534};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 619722;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 21;
    vector<int> s1 = {17, 20, 10, 19, 6, 20, 7, 20, 18, 3, 13, 0, 20, 12, 16, 11, 11, 7, 20, 5, 7, 12, 9, 9, 9};
    vector<int> t1 = {8, 16, 15, 16, 13, 0, 6, 4, 17, 10, 19, 17, 13, 0, 1, 0, 2, 0, 15, 1, 15, 15, 1, 8, 0};
    vector<int> l1 = {339893, 489861, 143334, 521277, 233977, 52859, 586946, 121972, 596243, 190227, 211256, 496795, 400615, 354415, 212744, 383959, 404493, 473162, 436961, 549447, 213972, 95225, 434906, 621850, 428448};
    vector<int> s2 = {13, 11};
    vector<int> t2 = {11, 10};
    vector<int> l2 = {554867, 624729};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 92682;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 34;
    vector<int> s1 = {4, 23, 30, 25, 9, 3, 1, 8, 10, 18, 3, 33, 22, 2, 9};
    vector<int> t1 = {6, 24, 31, 26, 10, 6, 6, 10, 12, 21, 4, 1, 25, 6, 10};
    vector<int> l1 = {295384683, 300595834, 181312912, 365695848, 2046538, 427898575, 938321007, 92387482, 260952628, 399286233, 132513817, 465103521, 824067874, 659148216, 2046543};
    vector<int> s2 = {19, 30, 24, 9, 32, 14, 13, 17, 30, 9, 33, 28, 31, 21, 31, 19, 28, 24, 9, 26, 21, 28, 30, 19, 6, 19, 10, 15, 0, 24, 12, 32, 13, 18, 14, 7, 7, 12, 1, 9, 1, 20, 20, 2, 18, 25, 27};
    vector<int> t2 = {23, 33, 27, 13, 0, 15, 16, 21, 33, 11, 1, 31, 0, 22, 32, 23, 31, 26, 11, 27, 22, 31, 32, 21, 11, 23, 12, 17, 2, 27, 13, 33, 15, 22, 15, 12, 9, 13, 2, 10, 3, 23, 21, 4, 19, 27, 29};
    vector<int> l2 = {760433333, 851290038, 798480772, 596350123, 565993503, 60155775, 823546526, 863340896, 851290066, 25619267, 465103610, 726590961, 953638704, 122440764, 387645218, 760433342, 726590960, 400260423, 25619273, 398220419, 122440791, 726590973, 568958157, 149085098, 995766653, 760433360, 260952663, 706228150, 460614712, 798480805, 333350849, 282331878, 596845192, 521727039, 60155805, 700744760, 437745538, 333350850, 279172813, 2046649, 510422467, 708384271, 97035982, 363763567, 250201242, 763916320, 536857261};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 43;
    vector<int> s1 = {4, 25, 23, 30, 31, 30, 36, 30, 32, 24, 23, 42, 42, 38, 36, 36, 8, 35, 0, 13, 31, 1, 40, 17, 17, 42, 7, 13, 37, 0, 28, 21, 27, 32, 0, 23, 3, 28};
    vector<int> t1 = {21, 28, 26, 37, 33, 27, 2, 34, 16, 8, 17, 23, 4, 24, 13, 10, 29, 0, 29, 24, 15, 21, 33, 30, 15, 21, 23, 22, 42, 42, 1, 34, 12, 12, 36, 1, 26, 18};
    vector<int> l1 = {127922, 34924, 30317, 53749, 10094, 362638, 103556, 25758, 246761, 263934, 339556, 205552, 61081, 262744, 196490, 175219, 181211, 82410, 260791, 86688, 248518, 157358, 319698, 128501, 388421, 194634, 122099, 64042, 52199, 383400, 159203, 120271, 259832, 224478, 313893, 221749, 191140, 299157};
    vector<int> s2 = {41, 27, 5, 42, 24, 10, 9, 37, 4, 9, 17, 32, 20, 22, 13, 17, 37, 10, 40, 20, 35, 4, 40, 26, 0, 24, 40, 42, 11, 18, 41, 27, 13, 38, 18, 32, 1, 21, 16};
    vector<int> t2 = {34, 14, 23, 24, 21, 36, 40, 9, 9, 35, 42, 34, 40, 21, 21, 1, 40, 26, 31, 14, 21, 27, 39, 4, 33, 18, 39, 10, 22, 36, 29, 9, 3, 32, 20, 36, 34, 8, 4};
    vector<int> l2 = {330265, 293308, 148326, 227306, 374226, 227155, 285923, 166029, 41780, 236767, 247707, 21751, 191916, 401757, 63016, 280485, 37789, 139037, 311827, 356541, 266990, 196269, 393422, 223701, 290293, 351055, 388739, 120515, 92642, 171651, 287144, 250111, 330857, 339284, 25159, 46664, 290474, 302901, 320269};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 13445;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 49;
    vector<int> s1 = {39, 41, 5, 17, 3, 26, 22, 48, 1, 24, 9, 10, 8, 8, 48, 6, 23, 12, 7, 6, 45, 23, 43, 18, 44, 10, 40, 26, 44, 45, 38, 38, 4, 27, 34, 19, 14, 3, 25, 15};
    vector<int> t1 = {23, 9, 29, 4, 25, 29, 13, 39, 32, 47, 33, 36, 4, 31, 21, 28, 26, 37, 4, 35, 7, 20, 26, 5, 19, 44, 47, 5, 3, 23, 26, 23, 44, 47, 3, 42, 38, 26, 13, 37};
    vector<int> l1 = {2222, 1072, 1691, 2366, 1540, 253, 2774, 2703, 2168, 1676, 1726, 1822, 3071, 1645, 1456, 1523, 185, 1736, 3136, 2072, 674, 3242, 2164, 2344, 1701, 2389, 461, 1907, 507, 1758, 2503, 2287, 2806, 1444, 1213, 1520, 1643, 1560, 2523, 1559};
    vector<int> s2 = {24, 46, 13, 15, 36, 29, 45, 1, 23, 13, 24, 17, 16, 48, 41, 23, 25, 47, 39, 30, 24, 11, 37, 16, 15, 2, 45, 31, 32, 10, 26, 47, 34, 36, 26, 10, 20, 41, 24, 21};
    vector<int> t2 = {38, 45, 7, 31, 45, 16, 17, 31, 20, 24, 23, 23, 13, 38, 8, 46, 42, 40, 6, 19, 17, 46, 35, 32, 37, 40, 28, 19, 13, 14, 29, 23, 42, 2, 19, 11, 13, 42, 0, 15};
    vector<int> l2 = {1021, 3287, 2965, 1205, 713, 2516, 1464, 2078, 3264, 751, 3339, 328, 3146, 2628, 1019, 1758, 1212, 2906, 1060, 2698, 3005, 2598, 3267, 1215, 1576, 2692, 2140, 2582, 1972, 355, 279, 1624, 612, 1070, 3022, 79, 2872, 73, 1868, 2934};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 23;
    vector<int> s1 = {19, 12, 5, 5, 2, 10, 7, 15, 20, 22, 11, 12, 20, 8, 4, 7, 15, 2, 14, 18, 11, 10, 3, 14, 18, 1, 7, 15, 18, 6, 7, 15, 4, 8, 17, 17, 18, 20};
    vector<int> t1 = {21, 5, 10, 22, 14, 20, 12, 10, 13, 18, 17, 7, 1, 22, 9, 8, 1, 1, 11, 22, 15, 16, 9, 16, 8, 0, 11, 1, 11, 7, 12, 12, 20, 22, 1, 18, 10, 13};
    vector<int> l1 = {2, 39, 15, 45, 33, 27, 12, 48, 40, 51, 12, 47, 4, 35, 12, 1, 20, 58, 53, 11, 9, 18, 14, 7, 37, 57, 8, 18, 43, 1, 11, 53, 43, 34, 14, 1, 40, 38};
    vector<int> s2 = {13, 0, 4, 2, 4, 18, 14, 11, 15, 0, 14, 10, 5, 13, 20, 21, 2, 0, 21, 14, 18, 2, 6, 21, 2, 22, 12, 11, 5, 2, 9, 4, 0, 1, 0, 18, 0};
    vector<int> t2 = {17, 14, 9, 1, 9, 20, 19, 5, 4, 22, 22, 12, 11, 11, 6, 18, 19, 16, 15, 12, 14, 4, 14, 11, 16, 19, 10, 6, 14, 14, 1, 20, 6, 16, 20, 16, 11};
    vector<int> l2 = {16, 44, 17, 63, 16, 8, 19, 46, 36, 65, 25, 8, 20, 61, 24, 59, 50, 47, 51, 58, 55, 8, 26, 37, 43, 60, 58, 51, 28, 38, 40, 48, 18, 45, 58, 60, 33};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 24;
    vector<int> s1 = {16, 14, 16, 14, 6, 20, 15, 8, 0, 13, 15, 15, 1, 21, 0, 11, 20, 18, 13, 10, 1, 4, 10, 0, 4, 13, 6, 0, 17, 17, 17, 23, 21, 0, 22, 5};
    vector<int> t1 = {22, 10, 3, 1, 1, 8, 1, 21, 21, 4, 4, 20, 23, 17, 9, 8, 4, 7, 14, 15, 8, 10, 2, 2, 10, 4, 17, 10, 15, 15, 1, 16, 18, 3, 20, 0};
    vector<int> l1 = {827, 2573, 1199, 1340, 2544, 1309, 1137, 1877, 2949, 1482, 1254, 710, 2858, 2305, 1178, 2494, 546, 1592, 20, 683, 883, 1110, 1909, 276, 1113, 1485, 1505, 1421, 2958, 2955, 1038, 2154, 2516, 293, 2886, 2603};
    vector<int> s2 = {16, 4, 21, 18, 12, 20, 1, 20, 22, 22, 17, 13, 15, 3, 21, 17, 23, 3, 7, 22, 21, 1, 3, 5, 15, 9, 22, 10, 14, 5, 0, 21, 0, 17, 14, 0, 17, 0};
    vector<int> t2 = {2, 23, 16, 1, 8, 23, 4, 5, 23, 18, 5, 19, 21, 5, 7, 7, 14, 17, 6, 3, 16, 21, 12, 21, 9, 0, 4, 14, 6, 12, 8, 6, 6, 10, 5, 11, 13, 13};
    vector<int> l2 = {1181, 2742, 2261, 837, 2395, 235, 121, 689, 71, 2485, 1306, 785, 842, 157, 1059, 1804, 1911, 1906, 2804, 373, 2260, 2760, 1439, 2501, 2134, 1873, 382, 482, 1851, 1282, 1073, 802, 699, 2274, 1603, 1634, 2733, 1882};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 47;
    vector<int> s1 = {2, 45, 6, 25, 22, 17, 3, 26, 36, 13, 39, 15, 22, 25, 1, 38, 13, 43, 28, 44, 27, 40, 34, 20, 42, 5, 2, 33, 5, 16, 38, 44, 34, 26, 10, 24, 33, 7};
    vector<int> t1 = {28, 46, 17, 11, 46, 9, 44, 8, 10, 7, 5, 36, 5, 9, 18, 36, 22, 30, 9, 1, 3, 46, 23, 17, 19, 45, 25, 37, 21, 6, 7, 13, 31, 42, 5, 10, 3, 39};
    vector<int> l1 = {96155891, 3362482, 37280151, 123537677, 89259415, 146076170, 153291589, 106858295, 83151028, 147561162, 47365771, 76013286, 111275280, 116886295, 64554843, 162391655, 31741509, 114088798, 107378457, 9464706, 84334132, 23031353, 135425804, 158740127, 83164850, 146793539, 86648129, 12731623, 53995685, 142081464, 58653913, 57233318, 163189140, 57785938, 152917228, 122759986, 63526968, 120264331};
    vector<int> s2 = {24, 0, 45, 12, 5, 46, 11, 1, 23, 36, 30, 11, 43, 13, 3, 9, 30, 43, 44, 31, 4, 23, 40, 8, 29, 13, 46, 0, 1};
    vector<int> t2 = {29, 18, 15, 26, 38, 35, 3, 28, 13, 18, 15, 36, 11, 18, 35, 7, 10, 4, 7, 38, 46, 39, 6, 18, 19, 28, 18, 43, 42};
    vector<int> l2 = {15943853, 66409215, 57648806, 52682886, 118067086, 130072397, 142283962, 97457038, 137517559, 109839869, 119435413, 87582003, 49782331, 16787702, 117247943, 162670361, 106427930, 21129579, 32620880, 26486002, 158114176, 60989731, 47917923, 33672371, 133924130, 49687924, 67962200, 163558471, 153983523};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 930316;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 43;
    vector<int> s1 = {41, 41, 16, 4, 2, 30, 23, 20, 5, 37, 8, 23, 10, 32, 21, 23, 35, 33, 11, 36, 38, 1, 30, 36, 4, 13, 11, 21, 10, 6, 20, 29, 21, 42, 0, 28, 36, 4, 16};
    vector<int> t1 = {9, 39, 30, 18, 34, 42, 1, 31, 16, 19, 10, 7, 17, 24, 37, 25, 13, 2, 13, 38, 37, 27, 4, 32, 0, 8, 37, 22, 41, 29, 36, 37, 3, 27, 24, 8, 23, 20, 11};
    vector<int> l1 = {1715233, 5728686, 2018428, 2019515, 4790499, 1407908, 2604136, 1273376, 1217063, 3835299, 81521, 3825603, 1159643, 4948266, 1798983, 108222, 3140000, 1829779, 515562, 185737, 5656921, 4199642, 2193692, 5679904, 5292432, 5169260, 3231217, 1, 3978956, 3343588, 1742021, 436096, 3447236, 4218659, 3399505, 3025498, 4233171, 2176925, 5778310};
    vector<int> s2 = {41, 13, 36, 17, 25, 10, 16, 18, 36, 12, 10, 5, 33};
    vector<int> t2 = {37, 24, 6, 28, 30, 20, 35, 41, 1, 31, 38, 27, 25};
    vector<int> l2 = {5341389, 1610183, 2352715, 1697003, 926738, 1510196, 2511692, 2712166, 938310, 2640087, 3642390, 3176027, 5142378};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 45;
    vector<int> s1 = {26, 16, 29, 30, 43, 42, 21, 22, 36, 32, 6, 30, 41, 2, 5, 30, 36, 15, 6, 11};
    vector<int> t1 = {20, 10, 44, 18, 15, 3, 38, 35, 39, 2, 10, 35, 31, 44, 14, 39, 6, 31, 21, 23};
    vector<int> l1 = {9279, 9274, 3284, 7383, 3735, 431, 3974, 2920, 655, 2678, 1164, 1328, 8148, 10481, 2317, 1929, 2619, 4593, 4450, 3762};
    vector<int> s2 = {41, 34, 1, 2, 19, 40, 16, 13, 5, 6, 39, 34, 22, 2, 4, 13, 27, 22, 28};
    vector<int> t2 = {32, 15, 44, 1, 7, 20, 9, 42, 30, 24, 26, 21, 24, 43, 25, 8, 32, 43, 18};
    vector<int> l2 = {8836, 5439, 10847, 10821, 7747, 5495, 8424, 7437, 6793, 5707, 7629, 7676, 546, 10562, 6177, 9628, 1137, 4492, 7998};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 704;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 42;
    vector<int> s1 = {25, 25, 34, 30, 41, 31, 27, 6, 38, 24, 40, 39, 12, 25, 7, 27, 15, 19, 30, 0, 31, 24, 37, 22, 20, 26, 15, 18, 13, 20, 6, 35, 16, 23, 7, 37, 1, 26, 30, 22, 16, 37, 34, 33, 17, 28, 15, 18, 1};
    vector<int> t1 = {39, 40, 15, 9, 8, 1, 39, 23, 41, 2, 5, 8, 35, 1, 0, 8, 12, 16, 29, 5, 13, 10, 15, 30, 26, 38, 1, 3, 32, 32, 13, 8, 35, 4, 36, 6, 2, 7, 8, 3, 31, 36, 17, 19, 7, 33, 17, 33, 8};
    vector<int> l1 = {196720095, 209975421, 305312878, 284910706, 106719783, 190192334, 161427496, 222204939, 51179046, 332038448, 115585816, 153174461, 331364031, 286127711, 504970330, 314583377, 542574505, 504303370, 563900027, 56439141, 302453284, 381980862, 275555734, 105502899, 70639276, 167385212, 433584904, 405516326, 295245674, 157740741, 61866629, 206249571, 281361485, 344565884, 388422552, 177032142, 30718418, 322896503, 270222461, 344274447, 234335854, 575718071, 347700202, 394617395, 452261909, 74848357, 42210664, 215992377, 63377094};
    vector<int> s2 = {13, 38, 13, 19, 11, 31, 15, 26, 24, 10, 6};
    vector<int> t2 = {15, 37, 15, 35, 36, 38, 27, 15, 7, 6, 20};
    vector<int> l2 = {36732478, 550910579, 36333409, 203326871, 343030281, 95219860, 182695127, 411103733, 361954560, 552714669, 199616110};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 11460876;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 8;
    vector<int> s1 = {6, 4, 7, 6, 2, 2, 0, 1, 2, 6, 3, 3, 1, 4, 6, 5, 1, 4, 5, 7, 5, 5, 0, 6, 1, 1, 5, 1, 3, 7, 0, 7, 7, 2, 3, 1, 2, 0, 6, 3, 3, 2};
    vector<int> t1 = {0, 1, 6, 2, 6, 4, 2, 5, 3, 5, 0, 0, 5, 7, 5, 1, 3, 1, 1, 6, 1, 2, 6, 7, 5, 5, 6, 4, 4, 0, 2, 5, 3, 1, 5, 0, 1, 2, 3, 7, 5, 1};
    vector<int> l1 = {5107, 6587, 10805, 5661, 6984, 5567, 560, 6617, 1843, 11796, 10262, 10272, 6633, 3258, 11791, 6030, 2321, 6577, 6042, 10810, 6036, 6514, 7565, 1842, 6620, 6615, 858, 6059, 3726, 3259, 546, 9944, 5652, 12161, 4284, 12592, 12167, 557, 7497, 6999, 4287, 12155};
    vector<int> s2 = {0, 2, 2, 2, 0, 5, 3, 5, 3, 0, 7, 6};
    vector<int> t2 = {4, 6, 6, 0, 5, 3, 4, 7, 7, 6, 0, 3};
    vector<int> l2 = {6136, 6998, 6996, 12102, 6704, 8364, 3730, 2692, 6996, 7548, 3281, 7496};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 35;
    vector<int> s1 = {9, 32, 12, 16, 13, 30, 28, 13, 8, 3, 3, 1, 25, 2, 5, 22, 9, 15, 12, 22, 10, 3, 19, 32, 28, 5, 13, 14, 19, 1, 16, 13, 22, 20, 28, 9, 9, 5, 30, 13};
    vector<int> t1 = {4, 12, 6, 33, 24, 5, 31, 17, 33, 5, 2, 28, 8, 19, 14, 1, 12, 30, 20, 17, 22, 27, 9, 6, 15, 32, 5, 4, 17, 26, 13, 32, 5, 3, 20, 5, 30, 8, 31, 31};
    vector<int> l1 = {65066806, 38385748, 63794560, 29679609, 26279440, 22178528, 4191506, 10476972, 54039823, 3062840, 77575830, 65035845, 38828547, 44794574, 27508574, 28249979, 7279066, 27814551, 20967250, 70926820, 30776244, 57922316, 53499787, 22163990, 53130651, 61656906, 55952460, 50271357, 75315611, 62683985, 70092552, 37630839, 36353022, 35995989, 63992911, 67284785, 45060975, 9675251, 3321098, 37041388};
    vector<int> s2 = {8, 24, 14, 6, 24, 26, 17, 10, 33, 27, 30, 0, 1, 21, 6, 21, 20, 7, 9, 24, 10, 1, 30, 16, 28, 28, 15, 32, 26, 10, 19, 10, 21, 16};
    vector<int> t2 = {21, 2, 3, 21, 27, 7, 2, 5, 13, 2, 14, 5, 17, 34, 10, 10, 19, 34, 33, 14, 28, 2, 2, 22, 21, 12, 2, 30, 2, 33, 28, 19, 27, 11};
    vector<int> l2 = {31481761, 24158591, 49404982, 37366559, 4500818, 31166746, 39914255, 67092621, 40441732, 19660564, 49709244, 10609343, 42662406, 25796536, 9083574, 51726150, 78366134, 61291578, 50924914, 57203824, 44065123, 2515128, 16649575, 9673092, 64270955, 43109900, 44435573, 76188406, 19893892, 50793074, 17684061, 26348850, 13661508, 62821883};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 26;
    vector<int> s1 = {11, 21, 21, 21, 12, 3, 17, 14, 3, 0, 10, 12, 12, 23, 19, 11, 12, 24, 5, 17, 3, 21, 17, 15, 23, 16, 12, 12, 2, 7, 7, 17, 22, 24, 2, 6};
    vector<int> t1 = {12, 2, 25, 14, 14, 22, 6, 19, 24, 25, 13, 17, 19, 19, 15, 16, 7, 7, 15, 25, 6, 8, 10, 16, 0, 23, 7, 11, 8, 9, 13, 12, 18, 21, 25, 22};
    vector<int> l1 = {43607964, 286243404, 152578174, 668238193, 80717819, 650226914, 559545239, 163885474, 728753336, 840091029, 83931045, 183485102, 243666792, 752178403, 765756810, 195588873, 793874627, 344025253, 319010545, 275431320, 130801425, 502862513, 650755056, 33081011, 124742638, 231584859, 794369370, 848624498, 216494297, 34924496, 125187667, 707560399, 728210148, 747176470, 758680372, 519845498};
    vector<int> s2 = {6, 10, 14, 7, 25, 17, 16, 13, 23, 6, 18, 10, 23, 8, 7, 12, 24, 5, 17, 16, 25, 6, 2, 22, 23, 0, 9, 8, 5, 21, 0, 12, 2, 16, 7, 15, 25, 20, 11, 10, 4};
    vector<int> t2 = {8, 5, 6, 24, 11, 3, 12, 16, 2, 8, 20, 7, 13, 0, 6, 17, 22, 6, 21, 21, 19, 24, 12, 0, 14, 25, 16, 20, 18, 7, 9, 21, 24, 13, 11, 3, 9, 23, 18, 15, 11};
    vector<int> l2 = {66076615, 748861558, 662830634, 548332936, 389982356, 428468002, 738280290, 125990183, 207917853, 65896507, 67292480, 850238828, 535705743, 592371519, 841088601, 182246724, 811476767, 51465223, 120755375, 151511632, 678422748, 597576330, 300963998, 138425288, 588044684, 839931875, 216247716, 357361151, 408168191, 489300331, 318224322, 303848543, 749298320, 765926218, 56229656, 491833241, 370051640, 109472858, 250163504, 175428509, 214185382};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 39;
    vector<int> s1 = {15, 18, 32, 10, 3, 1, 7, 22, 2, 7, 16, 28};
    vector<int> t1 = {28, 36, 21, 2, 18, 0, 32, 17, 30, 31, 15, 12};
    vector<int> l1 = {13226, 17516, 30846, 32785, 16178, 41245, 25307, 37405, 28501, 24269, 41720, 26035};
    vector<int> s2 = {12, 3, 21, 21, 22, 29};
    vector<int> t2 = {11, 20, 3, 22, 38, 37};
    vector<int> l2 = {42176, 17680, 24127, 1451, 16854, 8763};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 18120;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 4;
    vector<int> s1 = {3, 3, 0, 2, 0, 0, 2, 0, 1, 2, 3, 0, 2, 1, 1, 2, 2, 1, 2, 0, 3, 2, 0, 1, 1, 3, 3};
    vector<int> t1 = {0, 0, 3, 3, 3, 3, 1, 1, 2, 3, 0, 3, 1, 3, 3, 3, 0, 2, 1, 2, 0, 3, 2, 0, 3, 0, 1};
    vector<int> l1 = {4928, 5682, 5089, 5687, 4268, 8836, 7888, 3144, 1, 197, 6773, 8354, 5568, 8006, 1140, 5474, 3953, 2671, 10010, 1, 1, 240, 6555, 7709, 5548, 721, 3710};
    vector<int> s2 = {3, 0, 2, 3, 0, 3, 0, 0, 1, 3, 1, 0, 3, 1, 3, 0, 1, 1, 2, 0, 1, 1, 0, 3, 3, 0, 1, 2, 1, 2, 1, 1, 0, 1, 3, 0, 0, 0, 2, 3, 2};
    vector<int> t2 = {1, 2, 3, 0, 1, 0, 1, 3, 2, 1, 0, 1, 2, 0, 1, 2, 0, 2, 3, 2, 2, 2, 3, 1, 0, 3, 0, 3, 3, 1, 3, 0, 3, 3, 2, 3, 3, 1, 1, 2, 0};
    vector<int> l2 = {2416, 1, 1, 1538, 3825, 1, 1, 7477, 1, 5007, 7480, 2061, 7202, 7568, 2482, 2044, 8434, 4634, 1, 7121, 1224, 4743, 4543, 2960, 5033, 6118, 5918, 1, 1484, 6520, 164, 9780, 4307, 1332, 4799, 2464, 9396, 416, 7826, 5266, 1112};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 25;
    vector<int> s1 = {15, 9, 10, 17, 21, 19, 3, 4, 17, 2, 3, 13, 10, 2, 13, 0, 19, 3, 14, 17, 10, 11, 16, 13, 0, 16, 14, 1, 19, 16, 8, 1, 17, 0, 24, 4, 13, 11, 19, 13, 22, 22, 8, 2};
    vector<int> t1 = {20, 24, 19, 9, 6, 14, 19, 13, 14, 21, 0, 21, 7, 17, 4, 8, 20, 23, 13, 8, 13, 8, 22, 5, 5, 21, 22, 3, 11, 20, 6, 12, 9, 6, 11, 5, 2, 14, 16, 10, 21, 2, 20, 21};
    vector<int> l1 = {19341294, 66101395, 41899506, 81072456, 45542631, 95666301, 78998364, 46721922, 104775146, 90950394, 101498702, 37127713, 99412568, 73335254, 72830021, 42033490, 3459871, 95415969, 113482173, 72426254, 13386497, 102826134, 26904403, 78460895, 26197727, 24747191, 33609699, 10215486, 81234368, 19841857, 108668359, 57846450, 80774999, 31548497, 62661232, 5307031, 66276802, 15285905, 103105311, 106612933, 117255443, 27029669, 58775374, 90364233};
    vector<int> s2 = {10, 4, 1, 6, 15, 1, 0, 6, 24, 6, 6, 1, 18, 17, 13, 1, 3, 7, 12, 18, 7, 18, 3, 0, 1, 6, 21, 14};
    vector<int> t2 = {19, 24, 22, 0, 8, 23, 22, 13, 8, 5, 9, 13, 0, 21, 21, 22, 6, 23, 11, 20, 12, 15, 15, 2, 8, 15, 12, 9};
    vector<int> l2 = {41933834, 95086878, 99013903, 88320176, 81054437, 106217860, 106745776, 36279273, 45797915, 114644029, 18033173, 60314272, 23796793, 16541207, 37207283, 99765831, 12810060, 80243795, 112696035, 3999065, 30696145, 103534541, 61987690, 15005227, 34193447, 49293704, 79514041, 95749288};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 43;
    vector<int> s1 = {40, 7, 30, 16, 39, 40, 6, 42, 12, 1, 21, 0, 11, 32, 23, 37, 26, 36, 22, 10, 16, 14, 3, 1, 20, 12, 2, 21, 40, 2, 15, 35, 42, 26, 17, 4, 30, 8, 25, 18, 42, 6, 37, 31, 0, 42, 30, 14, 4, 21};
    vector<int> t1 = {4, 23, 41, 30, 7, 9, 18, 17, 17, 15, 30, 5, 23, 34, 36, 1, 33, 42, 25, 19, 17, 15, 10, 16, 34, 19, 18, 30, 7, 4, 16, 39, 3, 36, 20, 14, 31, 15, 34, 20, 10, 15, 12, 41, 5, 17, 40, 22, 8, 24};
    vector<int> l1 = {569668260, 887121848, 626403316, 845377695, 742699687, 790231110, 510779603, 998744956, 300529560, 700399082, 581921371, 329855310, 738871240, 193000710, 802475089, 391801116, 358350086, 323100769, 191992296, 527669756, 35060424, 2733632, 290559542, 819268872, 903068350, 440216835, 759597109, 581921371, 735928199, 125997267, 118869790, 243292260, 320202933, 656340906, 147900918, 466983252, 2165020, 294949877, 511711056, 137948174, 610762475, 346896645, 945600852, 624238296, 329855310, 998744956, 550422874, 503929762, 174767007, 248508127};
    vector<int> s2 = {18, 12, 14, 28, 13, 14, 22, 27, 4, 27, 18, 10, 14, 23, 21, 13, 10, 35, 25, 21, 4, 18, 3, 4, 35, 3, 9, 29, 12, 42, 42, 4, 42, 13, 20, 14, 16, 31, 16, 25, 14, 2, 1, 24, 11, 27, 18, 18, 38, 26};
    vector<int> t2 = {23, 27, 31, 40, 25, 21, 37, 38, 12, 39, 32, 23, 30, 39, 24, 16, 22, 38, 32, 33, 8, 21, 10, 14, 0, 14, 18, 42, 22, 15, 17, 13, 10, 21, 21, 31, 29, 39, 28, 29, 28, 20, 18, 30, 24, 0, 23, 26, 1, 38};
    vector<int> l2 = {419781945, 971642771, 969146137, 630375660, 721366746, 385059746, 960659175, 677635727, 323117538, 682855446, 848015814, 817717170, 966981117, 924233968, 248508127, 147048110, 735248397, 238072541, 318710346, 705823058, 174767007, 218443156, 290559542, 466983252, 555707147, 521878177, 413036992, 814805086, 647795476, 844814742, 998744956, 441538564, 610762475, 410504434, 80494982, 969146137, 775565885, 541486366, 765424909, 201247249, 887028331, 897545283, 864282040, 333413244, 786040578, 995270333, 419781945, 565916128, 350977269, 772880066};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 31;
    vector<int> s1 = {13, 5, 10, 25, 10, 25, 17, 29, 1, 24, 6, 4, 3, 14, 17, 3, 12, 10, 23, 11, 25, 0, 30, 3, 18, 24, 18, 23, 2, 6, 25, 23, 27, 0, 20, 26, 9, 6, 25, 23, 8, 20, 28, 2, 18, 19, 1, 22, 11, 4};
    vector<int> t1 = {14, 9, 11, 4, 12, 28, 19, 4, 2, 1, 9, 6, 8, 19, 20, 6, 14, 18, 27, 15, 1, 3, 0, 4, 22, 29, 19, 1, 6, 9, 29, 1, 4, 6, 25, 2, 12, 10, 2, 0, 15, 26, 3, 5, 20, 22, 4, 27, 13, 7};
    vector<int> l1 = {50661694, 672015793, 119560914, 888232493, 135173993, 224921210, 426801664, 580937574, 194770919, 629797768, 428677458, 431384906, 822490058, 950781375, 614000583, 627384719, 95765897, 950193595, 549866662, 316462673, 386664309, 347030410, 19182207, 195999813, 503651025, 550428378, 231527670, 842403050, 738182171, 428677458, 307294919, 842403050, 794104572, 974415129, 795452490, 568007692, 387915822, 681419287, 581435228, 800941011, 922337535, 808880026, 467311470, 494843836, 418726589, 272123355, 501568184, 804655975, 60717282, 493639782};
    vector<int> s2 = {11, 21, 25, 21, 4, 1, 24, 29, 0, 23, 29, 21, 21, 7, 19, 28, 24, 4, 4, 29, 27, 25, 25, 16, 23, 22, 27, 20, 27, 5, 5, 24, 15, 17, 5, 21, 6, 27, 2, 17, 2, 8, 23, 16, 17, 20, 0, 13, 27, 7};
    vector<int> t2 = {14, 22, 0, 25, 8, 3, 1, 3, 1, 26, 5, 22, 26, 11, 20, 29, 27, 9, 5, 0, 0, 29, 3, 22, 0, 24, 1, 27, 2, 7, 7, 29, 16, 22, 9, 28, 9, 0, 6, 21, 5, 12, 1, 18, 19, 27, 4, 14, 4, 12};
    vector<int> l2 = {111378976, 33340120, 345202270, 743868174, 626490245, 305568371, 629797768, 384937761, 41462039, 469166277, 768984145, 33340120, 757295710, 738725325, 187198919, 82373709, 337261380, 860062364, 188046571, 37907351, 251074349, 307294919, 692232680, 882275116, 800941011, 467394595, 292536388, 889580411, 487307307, 305593211, 305593211, 550428378, 135545917, 698925019, 672015793, 968789384, 428677458, 251074349, 738182171, 665584899, 494843836, 621487941, 842403050, 378624091, 426801664, 889580411, 543030223, 50661694, 794104572, 754338404};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 43;
    vector<int> s1 = {30, 27, 20, 23, 36, 18, 40, 14, 27, 26, 5, 42, 40, 29, 22, 42, 20, 17, 5, 24, 19, 30, 4, 28, 27, 5, 9, 36, 12, 41, 10, 4, 38, 14, 26, 39, 12, 23, 11, 3, 33, 28, 29, 5, 20, 5, 8, 42, 2, 19};
    vector<int> t1 = {37, 29, 22, 29, 4, 34, 41, 22, 37, 35, 6, 6, 5, 2, 27, 11, 33, 32, 6, 31, 32, 42, 9, 30, 38, 13, 12, 10, 19, 10, 14, 11, 11, 26, 40, 5, 23, 36, 21, 11, 0, 31, 30, 22, 30, 16, 17, 5, 19, 23};
    vector<int> l1 = {492115757, 166507922, 135609353, 420622348, 701027670, 959586807, 63638981, 513553893, 696388285, 593581201, 20082709, 333749178, 484444838, 965132822, 320327380, 605768003, 841980555, 891182553, 20082709, 462234686, 808806901, 832609009, 170755374, 75000786, 730677422, 419561975, 248719329, 936708619, 385500142, 622053708, 252266010, 326534632, 911972118, 755034150, 944950291, 512216399, 648239103, 869201664, 621860723, 401217190, 666799763, 146155596, 37764606, 967067754, 660209261, 604951152, 561972952, 313666469, 989449009, 262738961};
    vector<int> s2 = {6, 39, 20, 20, 42, 1, 9, 22, 42, 35, 9, 8, 39, 38, 11, 13, 37, 16, 24, 30, 11, 8, 15, 41, 35, 16, 14, 23, 13, 29, 25, 36, 33, 4, 3, 15, 13, 30, 40, 9, 20, 4, 18, 39, 1, 5, 23, 42, 37, 13};
    vector<int> t2 = {17, 7, 26, 26, 14, 2, 10, 23, 16, 8, 19, 10, 0, 8, 24, 25, 2, 18, 33, 1, 18, 13, 21, 7, 41, 19, 15, 31, 22, 37, 29, 8, 39, 20, 8, 25, 15, 32, 6, 25, 22, 12, 26, 42, 15, 9, 26, 3, 6, 27};
    vector<int> l2 = {668083386, 577421548, 377089610, 377089610, 767180330, 61547201, 64925575, 66212954, 918617621, 962007071, 634219471, 75054708, 214511978, 746063727, 808486252, 690726176, 435252459, 140220776, 572851170, 865821015, 453070394, 293368832, 340587429, 486011006, 415008071, 165590595, 119860967, 529541764, 547505779, 529880363, 343614905, 861653911, 452287785, 865891499, 235308799, 536913323, 153812853, 87680986, 504527547, 973965875, 135609353, 419474703, 463376083, 198549930, 853829291, 136322276, 175267303, 204550813, 674242430, 867833159};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 37;
    vector<int> s1 = {4, 5, 20, 9, 14, 16, 14, 8, 23, 18, 1, 35, 4, 35, 14, 9, 20, 1, 29, 22, 5, 9, 8, 3, 3, 16, 26, 31, 35, 26, 10, 36, 9, 11, 4, 20, 0, 4, 9, 17, 8, 27, 22, 3, 17, 1, 3, 18, 34, 4};
    vector<int> t1 = {9, 10, 24, 10, 20, 17, 19, 13, 28, 25, 4, 4, 12, 1, 20, 11, 25, 7, 35, 24, 8, 12, 9, 7, 8, 20, 31, 35, 2, 29, 11, 4, 17, 16, 8, 21, 7, 5, 12, 23, 12, 30, 25, 12, 22, 5, 7, 22, 1, 13};
    vector<int> l1 = {677244475, 595740163, 364196541, 3201291, 756275303, 144177652, 745242634, 291048819, 914169972, 663747104, 571166820, 738838621, 791904641, 167671801, 756275303, 49718116, 591128488, 919251050, 962400836, 258264442, 459242570, 114660166, 133296302, 530819164, 726683107, 420034824, 849550280, 591630058, 401327106, 478779502, 46516825, 658869742, 831792034, 637896266, 543948173, 105574114, 949058985, 84705603, 114660166, 419341185, 247956468, 596962598, 485196389, 974639575, 381789271, 655872423, 530819164, 178550715, 315832177, 834996992};
    vector<int> s2 = {35, 23, 0, 13, 3, 32, 32, 26, 1, 25, 3, 22, 6, 34, 8, 9, 14, 36, 30, 31, 9, 17, 8, 7, 7, 33, 19, 15, 35, 23, 14, 22, 5, 8, 32, 15, 24, 35, 30, 11, 18, 22, 3, 16, 14, 16, 18, 1, 23, 16};
    vector<int> t2 = {1, 24, 2, 20, 12, 2, 35, 31, 7, 30, 6, 24, 7, 3, 11, 11, 20, 4, 1, 1, 17, 22, 15, 12, 13, 4, 24, 24, 2, 28, 23, 23, 7, 16, 1, 17, 25, 3, 36, 13, 24, 27, 10, 20, 21, 17, 22, 7, 26, 24};
    vector<int> l2 = {167671801, 220712528, 263463240, 949896689, 974639575, 784379632, 383052526, 849550280, 919251050, 882260941, 334423974, 258264442, 196395190, 704264063, 183014418, 49718116, 756275303, 658869742, 957348480, 759301859, 831792034, 381789271, 741790705, 443820411, 486912762, 952419322, 375229210, 863351344, 401327106, 914169972, 899759316, 37551914, 263378627, 820910684, 550724327, 223297631, 226931947, 556103687, 869645558, 108034401, 436815157, 770494732, 863180700, 420034824, 861849417, 144177652, 178550715, 919251050, 678401757, 784231365};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 230757282;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 49;
    vector<int> s1 = {26, 28, 29, 4, 5, 23, 23, 36, 4, 32, 28, 47, 41, 35, 17, 31, 1, 5, 12, 10, 28, 27, 46, 37, 41, 8, 20, 6, 23, 34, 29, 45, 16, 45, 38, 34, 5, 31, 32, 9, 9, 4, 15, 14, 37, 7, 36, 30, 9, 33};
    vector<int> t1 = {42, 45, 30, 18, 21, 27, 25, 44, 13, 0, 29, 6, 8, 44, 20, 46, 8, 8, 17, 15, 34, 28, 0, 41, 48, 13, 21, 9, 27, 45, 39, 11, 23, 3, 5, 48, 14, 37, 33, 13, 10, 14, 17, 17, 46, 10, 48, 38, 16, 36};
    vector<int> l1 = {931658171, 958256489, 59368397, 856758016, 937111679, 351362124, 131891739, 403254220, 522436694, 896879097, 5325003, 472916618, 948122356, 428566495, 228008022, 845328521, 514409504, 240808725, 291744400, 261694607, 318046022, 96601743, 127956986, 210447659, 328235296, 207337967, 26315656, 176407752, 351362124, 640210467, 573672897, 870031914, 490477900, 366482181, 913398557, 743334132, 550954737, 409458412, 79686707, 196663608, 66541480, 625244739, 103068830, 131833264, 435870109, 209574882, 588415766, 462366532, 421891554, 203632484};
    vector<int> s2 = {15, 22, 16, 37, 31, 39, 41, 48, 21, 47, 30, 33, 42, 32, 31, 23, 29, 10, 3, 20, 1, 45, 28, 9, 40, 26, 41, 41, 11, 44, 17, 6, 14, 35, 22, 34, 45, 32, 3, 13, 12, 16, 17, 7, 1, 6, 9, 32, 21, 32};
    vector<int> t2 = {21, 31, 29, 42, 42, 6, 44, 15, 33, 9, 47, 43, 45, 42, 48, 26, 44, 25, 19, 31, 11, 4, 38, 12, 45, 35, 48, 9, 17, 0, 21, 11, 17, 4, 30, 37, 13, 1, 6, 25, 23, 26, 20, 20, 12, 13, 22, 44, 24, 48};
    vector<int> l2 = {357392508, 661876976, 943766770, 225055727, 634514139, 936535921, 143073750, 958797506, 944036630, 649324370, 977923803, 487639123, 210503563, 558107729, 948141367, 264058622, 870893605, 977719713, 901001864, 814259169, 661430693, 407911998, 527059932, 139560517, 322936709, 631557358, 328235296, 958796715, 294958087, 210305686, 254323678, 312754582, 131833264, 918516374, 613331589, 204651177, 930348692, 977212513, 190795151, 847597585, 772808937, 754536522, 228008022, 802346341, 664644380, 373071360, 811695132, 686573411, 353649112, 871734957};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 45;
    vector<int> s1 = {13, 25, 4, 27, 24, 42, 25, 26, 5, 22, 5, 37, 10, 9, 29, 39, 23, 37, 41, 19, 37, 2, 10, 25, 40, 21, 12, 22, 2, 13, 28, 29, 36, 3, 38, 14, 1, 34, 30, 17, 10, 11, 18, 29, 29, 10, 27, 38, 28, 7};
    vector<int> t1 = {14, 26, 5, 29, 30, 2, 30, 33, 13, 26, 8, 42, 17, 16, 35, 44, 30, 42, 2, 23, 41, 5, 18, 31, 41, 24, 18, 29, 8, 19, 33, 36, 41, 6, 40, 23, 2, 39, 34, 23, 11, 14, 20, 32, 36, 17, 32, 42, 30, 12};
    vector<int> l1 = {250632588, 181410638, 220197870, 260156135, 679662596, 613202089, 537215673, 763007464, 751415331, 603630796, 283541700, 566870199, 821878324, 837093923, 829585676, 404304536, 881709508, 566870199, 640365161, 376513926, 539707127, 609784555, 861918234, 654577231, 57210785, 510999944, 829459794, 944163673, 893326255, 817829668, 644569337, 899519464, 776098723, 542533823, 231588303, 943711006, 238991872, 837144158, 575585273, 422732219, 11912387, 288987150, 7925070, 289618267, 899519464, 821878324, 549774402, 315962160, 237366908, 551791616};
    vector<int> s2 = {25, 38, 16, 15, 28, 19, 13, 9, 26, 39, 33, 5, 11, 19, 25, 13, 2, 37, 4, 12, 6, 23, 41, 18, 0, 29, 26, 30, 19, 17, 17, 27, 25, 36, 21, 12, 24, 3, 20, 41, 15, 2, 26, 23, 15, 31, 5, 14, 23, 28};
    vector<int> t2 = {29, 0, 18, 17, 34, 24, 16, 16, 28, 44, 35, 6, 21, 22, 29, 17, 7, 43, 12, 14, 10, 25, 42, 21, 1, 32, 32, 31, 25, 23, 18, 34, 32, 37, 25, 16, 26, 4, 23, 43, 18, 3, 29, 24, 23, 33, 9, 22, 26, 29};
    vector<int> l2 = {521943515, 502492318, 245600774, 376732496, 812952181, 578560838, 566050511, 837093923, 118438127, 404304536, 407111089, 134294859, 923745124, 298787603, 521943515, 771611375, 791599761, 662717827, 953804692, 268441097, 566853523, 344493835, 27163072, 73739277, 187680059, 289618267, 630151144, 117361558, 721007761, 422732219, 40039910, 851013566, 811561782, 236391596, 653446867, 583859020, 323857561, 188041094, 374767239, 123010700, 416772406, 201545591, 340532877, 202046912, 799464715, 289840871, 480371919, 865984683, 525904473, 222094750};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 44;
    vector<int> s1 = {42, 32, 1, 30, 38, 1, 4, 38, 33, 20, 34, 35, 22, 10, 30, 36, 8, 29, 36, 11, 9, 2, 31, 35, 18, 3, 8, 29, 8, 11, 6, 22, 31, 13, 5, 4, 43, 37, 36, 21, 16, 8, 2, 28, 19, 27, 14, 13, 26, 8};
    vector<int> t1 = {5, 42, 4, 40, 41, 12, 19, 43, 40, 36, 43, 39, 29, 17, 41, 39, 16, 35, 3, 27, 19, 11, 32, 40, 26, 6, 13, 39, 20, 25, 21, 31, 1, 26, 16, 9, 12, 8, 3, 30, 32, 15, 9, 36, 30, 33, 26, 26, 33, 17};
    vector<int> l1 = {555127947, 553176973, 328348330, 511192895, 111031772, 829913173, 839741564, 248993711, 344104372, 982788345, 472428713, 300639029, 523359560, 293235015, 536927242, 277249990, 469340692, 301836796, 803932799, 893316098, 542913263, 657137268, 29260516, 301660203, 556669746, 228953222, 339504806, 602475825, 628796069, 821646013, 700082734, 631354433, 772462304, 764540512, 650601596, 296828301, 943177065, 998270926, 803932799, 747289306, 954273276, 452211834, 495131301, 392390396, 756936825, 411616546, 703839340, 764540512, 441705888, 484985343};
    vector<int> s2 = {10, 28, 13, 30, 15, 10, 22, 20, 13, 41, 26, 30, 27, 12, 22, 43, 9, 5, 5, 33, 23, 24, 18, 23, 7, 34, 3, 14, 43, 3, 20, 26, 16, 19, 4, 6, 27, 2, 6, 20, 34, 4, 34, 2, 15, 0, 10, 13, 4, 38};
    vector<int> t2 = {16, 38, 23, 35, 32, 23, 25, 21, 25, 10, 33, 38, 38, 27, 32, 5, 24, 21, 7, 38, 37, 33, 22, 26, 10, 42, 19, 21, 13, 12, 33, 40, 32, 24, 16, 8, 0, 12, 15, 26, 0, 18, 1, 18, 31, 1, 27, 19, 9, 41};
    vector<int> l2 = {277590364, 585364135, 534738318, 209532692, 971402134, 682492796, 299465556, 2577308, 722959769, 989340195, 441705888, 425895470, 670423493, 850585523, 660614949, 478367024, 914938760, 812634281, 141333975, 258806947, 840665742, 551999851, 215623447, 229802194, 231677257, 395667790, 919388437, 231167399, 999132734, 581211716, 916955137, 785810260, 954273276, 372025497, 687356398, 68709357, 993829988, 699867843, 520921191, 475249249, 546841497, 765391278, 585692605, 963694278, 942141618, 38851108, 942384332, 282221052, 296828301, 111031772};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 45;
    vector<int> s1 = {16, 18, 9, 2, 15, 13, 38, 36, 34, 38, 12, 24, 43, 18, 40, 38, 3, 38, 19, 31, 28, 37, 4, 21, 36, 17, 17, 7, 13, 41, 38, 31, 34, 4, 28, 17, 24, 17, 22, 20, 18, 12, 12, 23, 4, 35, 4, 30, 34, 34};
    vector<int> t1 = {27, 21, 14, 3, 17, 16, 6, 39, 5, 39, 21, 25, 5, 22, 1, 4, 4, 44, 25, 44, 31, 43, 13, 31, 42, 20, 23, 15, 27, 9, 43, 41, 41, 5, 37, 24, 32, 23, 36, 30, 30, 21, 13, 25, 14, 2, 9, 39, 36, 43};
    vector<int> l1 = {728176773, 323479086, 422382832, 12406114, 153717793, 205513935, 717075281, 292356634, 970268143, 94943624, 826642699, 16817639, 287862866, 386398181, 453155981, 679112351, 4963921, 468053663, 370765373, 984747142, 290171826, 479620519, 649702044, 640577493, 518005660, 289255712, 539782419, 657121225, 933690708, 796246406, 399023535, 710772543, 477460806, 7774050, 726268321, 561454446, 576130728, 539782419, 896938867, 681534671, 876211517, 826642699, 109993553, 38489666, 733595951, 937460416, 311213119, 699482165, 85968732, 682405277};
    vector<int> s2 = {38, 39, 13, 11, 10, 1, 27, 14, 2, 11, 21, 29, 3, 21, 27, 21, 38, 0, 30, 6, 38, 42, 42, 16, 10, 15, 20, 0, 36, 29, 22, 12, 20, 36, 20, 44, 33, 35, 42, 33, 2, 11, 29, 14, 19, 40, 41, 0, 40, 39};
    vector<int> t2 = {0, 4, 15, 16, 20, 2, 30, 15, 12, 18, 27, 36, 17, 26, 29, 32, 43, 1, 34, 13, 40, 1, 44, 19, 21, 24, 24, 4, 0, 35, 28, 22, 27, 42, 30, 6, 37, 40, 2, 39, 7, 13, 36, 20, 23, 41, 4, 6, 9, 3};
    vector<int> l2 = {469609004, 584168727, 144873401, 390870454, 830404812, 66654445, 335690869, 60979494, 557078526, 578526579, 217041562, 526291624, 953257159, 185327630, 216524776, 719527222, 399023535, 125478867, 321156799, 611739114, 141931890, 274495221, 147461013, 300583971, 959207052, 715172239, 272198734, 209503347, 667022014, 447986534, 287486572, 889561794, 345843802, 518005660, 681534671, 249021618, 287556541, 417649990, 341149666, 463097149, 154824255, 185356519, 526291624, 503952999, 332275707, 52147174, 485033287, 247466277, 848393580, 579204806};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 60979494;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 39;
    vector<int> s1 = {7, 10, 26, 31, 38, 11, 13, 27, 17, 38, 34, 18, 18, 27, 10, 17, 13, 37, 29, 31, 11, 13, 27, 6, 35, 7, 34, 10, 28, 23, 16, 19, 22, 6, 5, 15, 33, 15, 37, 30, 38, 8, 7, 5, 25, 19, 35, 37, 36, 35};
    vector<int> t1 = {8, 26, 27, 7, 2, 18, 30, 32, 23, 9, 4, 19, 21, 2, 11, 28, 27, 14, 4, 37, 26, 28, 32, 8, 11, 14, 13, 24, 4, 34, 24, 32, 24, 14, 14, 19, 1, 16, 10, 38, 7, 27, 13, 20, 35, 26, 3, 0, 10, 0};
    vector<int> l1 = {29888166, 845124422, 79314916, 979342572, 280449191, 347702616, 952171407, 403731559, 322419297, 664843880, 487098342, 71970659, 213165610, 946119649, 23538141, 598700854, 775510469, 895983847, 847227750, 359524758, 821586281, 812837886, 403731559, 127436767, 833045875, 276166033, 981452429, 695811712, 977431984, 766615199, 409783495, 884959481, 29661063, 373714634, 483461580, 231444334, 304749834, 74261135, 702213780, 489009520, 612118195, 976947138, 231324835, 785195389, 660277673, 401913006, 410521517, 96440360, 739747074, 203734314};
    vector<int> s2 = {8, 20, 7, 31, 1, 4, 24, 34, 16, 18, 18, 1, 25, 28, 28, 18, 9, 37, 15, 13, 31, 13, 30, 35, 25, 6, 36, 7, 3, 19, 26, 6, 28, 4, 15, 33, 28, 18, 9, 31, 21, 5, 20, 5, 31, 15, 4, 17, 19, 35};
    vector<int> t2 = {13, 27, 13, 35, 12, 17, 31, 5, 23, 27, 31, 14, 0, 35, 36, 23, 16, 0, 22, 26, 1, 17, 36, 37, 1, 15, 37, 15, 9, 25, 0, 25, 2, 15, 23, 34, 36, 21, 11, 36, 32, 22, 29, 7, 6, 23, 9, 25, 29, 11};
    vector<int> l2 = {201436669, 428935462, 231324835, 252230804, 575329224, 708491119, 527073707, 542832047, 399456981, 553198581, 851644662, 733412307, 864011987, 513349468, 583110128, 314244441, 315698498, 96440360, 454383567, 696195553, 522096298, 214137032, 443776607, 107293954, 930143167, 391711649, 37533294, 294163048, 369315936, 371627134, 833726115, 994783117, 908792232, 557192300, 473718116, 11868514, 583110128, 213165610, 53208422, 321991464, 743764530, 955842162, 596467113, 207295547, 881793971, 473718116, 315754937, 451772649, 648759573, 833045875};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 49;
    vector<int> s1 = {44, 34, 1, 8, 26, 43, 8, 48, 34, 19, 30, 15, 19, 48, 4, 34, 11, 29, 19, 41, 37, 44, 14, 7, 23, 24, 37, 5, 14, 44, 30, 24, 42, 47, 0, 13, 32, 7, 29, 46, 33, 28, 21, 30, 22, 36, 7, 20, 24, 34};
    vector<int> t1 = {4, 0, 12, 18, 34, 8, 10, 3, 47, 23, 47, 23, 22, 11, 17, 42, 24, 35, 28, 45, 45, 1, 20, 12, 33, 39, 40, 6, 27, 45, 40, 37, 7, 6, 5, 14, 37, 12, 34, 2, 40, 43, 27, 37, 31, 0, 14, 23, 27, 44};
    vector<int> l1 = {621122549, 870697757, 761030991, 574437564, 497983746, 998263603, 158346468, 325364213, 788912859, 244460780, 922083862, 487684645, 164683408, 916169757, 889957205, 517877032, 820723746, 323498800, 562065280, 181107951, 420462630, 413043107, 485346334, 348875658, 654655672, 972340786, 214355316, 50909554, 919345228, 97113273, 604688715, 812180623, 887833161, 595549100, 462854648, 34031607, 275710262, 348875658, 224792626, 259571724, 483806684, 874118779, 415546665, 390333399, 671659842, 722603280, 393808168, 136039168, 186033309, 580511753};
    vector<int> s2 = {32, 30, 5, 41, 18, 19, 12, 10, 5, 17, 38, 34, 1, 17, 45, 3, 40, 33, 14, 18, 12, 26, 21, 5, 41, 15, 29, 37, 3, 22, 7, 33, 41, 29, 35, 37, 47, 29, 24, 17, 40, 41, 39, 7, 21, 40, 16, 40, 31, 41};
    vector<int> t2 = {43, 44, 6, 2, 33, 25, 13, 23, 16, 31, 42, 38, 6, 19, 1, 18, 3, 46, 15, 20, 25, 28, 36, 8, 7, 16, 34, 45, 6, 25, 20, 44, 43, 33, 47, 4, 1, 36, 38, 33, 48, 43, 7, 12, 31, 42, 25, 45, 48, 6};
    vector<int> l2 = {543326501, 713682756, 50909554, 503578575, 978079733, 404924777, 10900903, 739515157, 649614415, 921194826, 142564857, 375312175, 390907099, 84851576, 315929834, 976178812, 649783278, 752812898, 133700857, 187384893, 826782009, 148643602, 932626060, 189489833, 909193118, 49947602, 224792626, 420462630, 263160969, 240241369, 879154502, 592800725, 28261560, 212503654, 690206685, 944471906, 204642001, 372887103, 930330402, 983968028, 324419065, 28261560, 988387634, 348875658, 709469409, 46359320, 598201040, 206107314, 870998951, 887944884};
    YamanoteLine* pObj = new YamanoteLine();
    clock_t start = clock();
    long result = pObj->howMany(n, s1, t1, l1, s2, t2, l2);
    clock_t end = clock();
    delete pObj;
    long expected = 46359319;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=15175&pm=12143
********************************************************************************
#include <algorithm>   
#include <string>   
#include <set>   
#include <map>   
#include <vector>   
#include <queue>    
#include <iostream>   
#include <iterator>   
#include <math.h>   
#include <cstdio>   
#include <cstdlib>   
#include <sstream>   
 
#pragma comment(linker, "/STACK:60777216")   
 
using namespace std;   
 
typedef pair<int,int> pii;   
typedef long long ll;   
typedef vector<int> vi;   
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())   
#define SORT(c) sort((c).begin(),(c).end())   
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)    
#define REP(i,n) FOR(i,0,n)    
#define CL(a,b) memset(a,b,sizeof(a))   
#define pb push_back   
 
const double eps = 1e-3; 
const double SM_INF = 1e6; 
typedef vector<double> vd; 
 
struct SimplexM{ 
  int startN, N; 
  vd old_c,c,b,res; 
  vector<vd> system; 
  double value; 
  SimplexM(vd c):N(c.size()),c(c){ }  
  void add(vd r,double v,int sgn=0){  
    for(;c.size()<r.size();c.pb(0)); 
    for(;r.size()<c.size();r.pb(0)); 
    if(sgn)r.pb(-sgn),c.pb(0); 
    system.pb(r),b.pb(v); 
  } 
  void refresh_c_func(int pos,int row){ 
    double begin=c[pos]; 
    REP(i,N) c[i]-=begin*system[row][i]; 
  } 
  void gauss(int row,int col){ 
    double v=system[row][col]; 
    REP(i,N) system[row][i]/=v; 
    b[row]/=v; 
    REP(i,system.size()) if(i!=row){ 
      v=system[i][col]; 
      REP(j,N) system[i][j]-=v*system[row][j]; 
      b[i]-=v*b[row]; 
    } 
  } 
  int solve(){ 
    N=c.size(),old_c=c; 
    int m=system.size(); 
    REP(i,m)system[i].resize(N); 
    startN=N; 
    vi base(m,-1); 
    REP(i,N){ 
      int nm=0,pos=-1; 
      REP(j,m) if(fabs(system[j][i])>eps) nm++,pos=j; 
      if(nm==1 && fabs(system[pos][i]-1)<eps && base[pos]==-1) 
      base[pos]=i; 
    } 
    REP(i,m) if(base[i]==-1){ 
      N++; 
      c.pb(SM_INF); 
      REP(j,m) system[j].pb(j==i?1:0); 
      base[i]=N-1; 
    } 
    REP(i,m) refresh_c_func(base[i],i); 
    while(1){ 
      int pos=-1,row=-1; 
      REP(i,N) if(c[i]<-eps && (pos==-1 || c[i]<c[pos])) pos=i; 
      if(pos==-1) break; 
      double min_teta=0; 
      REP(i,m) 
      if(system[i][pos]>eps && (row==-1 || min_teta>b[i]/system[i][pos])) 
        row=i,min_teta=b[i]/system[i][pos]; 
      if(row==-1) return -1; 
      base[row]=pos; 
      gauss(row,pos); 
      refresh_c_func(pos,row); 
    } 
    REP(i,m) if(base[i]>=startN && fabs(b[i])>eps) return -2; 
    res.resize(startN,0); 
    REP(i,m) if(base[i]<startN) res[base[i]]=b[i]; 
    value=0; 
    REP(i,startN) value+=res[i]*old_c[i]; 
    return 1; 
  } 
}; 
 
class YamanoteLine { 
public: 
 long long howMany(int n, vector <int> s1, vector <int> t1, vector <int> l1, vector <int> s2, vector <int> t2, vector <int> l2) { 
   while(s1.size() && s1.back()==-1) s1.pop_back(),t1.pop_back(),l1.pop_back(); 
   ll v1 = 0; 
   ll v2 = 0; 
   const ll inf = 1e17; 
   REP(tc,2){ 
     SimplexM x(vd(n,(tc?-1:1))); 
     REP(i,n){ 
       vd t(n); 
       t[i] = 1; 
       x.add(t, 1, 1); 
     } 
     REP(i,s1.size()){ 
       vd t(n); 
       int curr = s1[i]; 
       while(curr!=t1[i]){ 
        t[curr]=1; 
        curr=(curr+1)%n; 
       } 
       x.add(t, l1[i], 1); 
     } 
     REP(i,s2.size()){ 
       vd t(n); 
       int curr = s2[i]; 
       while(curr!=t2[i]){ 
        t[curr]=1; 
        curr=(curr+1)%n; 
       } 
       x.add(t, l2[i], -1); 
     } 
     int tt = x.solve(); 
     if(tt==-2) return 0; 
     //cout<<tt<<' '<<x.value<<endl; 
     //if(tt==1) REP(i,n) cout<<x.res[i]<<' ';puts(""); 
     if(tc==0){ 
       if(tt==-1) v1 = -inf; 
       else v1 = ceil(x.value)+1e-5; 
     }else{ 
       if(tt==-1) v2 = inf; 
       else v2 = (-x.value)+1e-5; 
     } 
   } 
   if(v2==inf || v1==-inf) return -1; 
   return v2-v1+1; 
 } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/