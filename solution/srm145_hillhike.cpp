/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1158
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

class HillHike {
public:
    long long numPaths(int distance, int maxHeight, vector<int> landmarks);
};

long long HillHike::numPaths(int distance, int maxHeight, vector<int> landmarks) {
    long long ret;
    return ret;
}


int test0() {
    int distance = 5;
    int maxHeight = 2;
    vector<int> landmarks = {};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int distance = 2;
    int maxHeight = 45;
    vector<int> landmarks = {};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int distance = 5;
    int maxHeight = 2;
    vector<int> landmarks = {2, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int distance = 8;
    int maxHeight = 3;
    vector<int> landmarks = {2, 2, 3, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int distance = 11;
    int maxHeight = 3;
    vector<int> landmarks = {3, 1, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int distance = 50;
    int maxHeight = 13;
    vector<int> landmarks = {11, 11, 2, 5, 7, 8, 4, 9, 4};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 1173;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int distance = 73;
    int maxHeight = 15;
    vector<int> landmarks = {15, 5, 10, 8, 8, 13, 2, 10};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 225454034;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int distance = 51;
    int maxHeight = 12;
    vector<int> landmarks = {2, 11, 9, 8};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 3854869265851196600;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int distance = 96;
    int maxHeight = 9;
    vector<int> landmarks = {4, 4, 4, 4, 8, 9, 2, 9, 5, 9, 2, 2, 1, 8, 6, 8, 5, 9, 5, 5, 2, 9, 8, 8, 7, 5, 5, 6, 9, 7, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 101;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int distance = 78;
    int maxHeight = 13;
    vector<int> landmarks = {5, 9, 13, 6, 7, 3, 10, 11, 4, 1, 13};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 2659553011489;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int distance = 59;
    int maxHeight = 20;
    vector<int> landmarks = {1, 9, 20, 18, 11, 13, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 469509251919309;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int distance = 83;
    int maxHeight = 22;
    vector<int> landmarks = {14, 18, 13, 7, 20};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 2274413350842237951;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int distance = 41;
    int maxHeight = 3;
    vector<int> landmarks = {1, 1, 2, 3, 3, 1, 2, 1, 2, 2, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 115742120360885;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int distance = 97;
    int maxHeight = 7;
    vector<int> landmarks = {5, 3, 1, 2, 2, 5, 6, 5, 2, 2, 1, 6, 6, 6, 6, 5, 5, 1, 3, 4, 2, 3, 6, 2, 6, 5, 7, 3, 6, 2, 1, 7, 4, 3, 2, 2, 3, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 200589656215059748;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int distance = 64;
    int maxHeight = 3;
    vector<int> landmarks = {2, 1, 3, 1, 2, 1, 3, 3, 2, 1, 2, 3, 1, 3, 2, 1, 3, 2, 1, 3, 1, 1, 1, 1, 1, 1, 2, 2, 3, 2, 3, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 601464655614205520;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int distance = 61;
    int maxHeight = 3;
    vector<int> landmarks = {3, 1, 1, 2, 3, 3, 1, 3, 2, 3, 2, 1, 1, 2, 3, 3, 2, 3, 3, 1, 3, 3, 1, 3, 3, 1, 3, 2, 2, 2, 3, 2, 3, 2, 1, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 4191247687822;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int distance = 81;
    int maxHeight = 10;
    vector<int> landmarks = {2, 2, 9, 8, 6, 7, 9, 8, 5, 6, 7, 8, 5, 1, 2, 7, 10, 2, 2, 9, 1, 1, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 10608177313701633;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int distance = 37;
    int maxHeight = 4;
    vector<int> landmarks = {2, 1, 3, 3, 2, 3, 1, 3, 3, 4, 1, 1, 4, 4, 4, 3, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 1241333847;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int distance = 49;
    int maxHeight = 2;
    vector<int> landmarks = {1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 64441700;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int distance = 69;
    int maxHeight = 3;
    vector<int> landmarks = {2, 3, 2, 3, 2, 1, 1, 1, 3, 3, 2, 2, 1, 3, 2, 2, 3, 2, 1, 3, 3, 2, 3, 2, 2, 2, 3, 2, 1, 1, 3, 2, 2, 2, 1, 1, 3, 2, 1, 2, 3, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 215760289078054021;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int distance = 57;
    int maxHeight = 3;
    vector<int> landmarks = {1, 1, 3, 3, 2, 1, 1, 2, 3, 3, 2, 2, 3, 3, 2, 2, 3, 3, 3, 1, 3, 3, 1, 2, 3, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 982621157115627913;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int distance = 81;
    int maxHeight = 19;
    vector<int> landmarks = {7, 4, 5, 3, 5, 11, 18, 18, 18, 16, 10, 9, 4, 5, 11, 1, 7, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 779008771;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int distance = 62;
    int maxHeight = 7;
    vector<int> landmarks = {2, 6, 1, 1, 2, 6, 2, 4, 4, 2, 4, 7, 5, 1, 5, 1, 6, 7, 5, 3, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 611207;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int distance = 69;
    int maxHeight = 3;
    vector<int> landmarks = {2, 2, 1, 3, 2, 3, 1, 2, 2, 1, 1, 3, 3, 3, 3, 3, 3, 2, 2, 2, 3, 2, 2, 1, 2, 2, 2, 2, 3, 3, 2, 1, 3, 1, 1, 3, 2, 1, 3, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 1001195673637831708;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int distance = 79;
    int maxHeight = 6;
    vector<int> landmarks = {6, 4, 1, 5, 5, 3, 1, 1, 6, 6, 4, 5, 6, 2, 4, 4, 5, 1, 6, 3, 1, 6, 3, 5, 3, 4, 6};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 27122582;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int distance = 44;
    int maxHeight = 6;
    vector<int> landmarks = {3, 6, 4};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 155042220629586212;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int distance = 61;
    int maxHeight = 25;
    vector<int> landmarks = {};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 1383704396097;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int distance = 70;
    int maxHeight = 3;
    vector<int> landmarks = {1, 1, 1, 1, 3, 2, 1, 3, 2, 3, 1, 3, 2, 1, 3, 3, 3, 2, 3, 1, 3, 1, 3, 1, 3, 3, 1, 1, 3, 2, 3, 2, 1, 2, 1, 3, 3, 2, 2, 3, 2, 3, 3, 2, 2, 2, 2, 2, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 17409730;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int distance = 50;
    int maxHeight = 17;
    vector<int> landmarks = {13, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 127654173868581;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int distance = 49;
    int maxHeight = 10;
    vector<int> landmarks = {1, 10, 8, 4, 3, 2, 8, 8, 4, 5, 5, 2, 6};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 2633787;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int distance = 78;
    int maxHeight = 21;
    vector<int> landmarks = {11, 15, 16, 5, 9, 20, 13, 18, 8};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 1487951;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int distance = 35;
    int maxHeight = 7;
    vector<int> landmarks = {6, 2, 3, 6, 5, 2, 7};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 397815;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int distance = 18;
    int maxHeight = 6;
    vector<int> landmarks = {2, 4, 6, 5, 3, 5};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 133;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int distance = 22;
    int maxHeight = 7;
    vector<int> landmarks = {3, 4, 1, 4};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 412;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int distance = 44;
    int maxHeight = 9;
    vector<int> landmarks = {4, 9, 2, 5, 2, 2, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 290771380578796;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int distance = 18;
    int maxHeight = 6;
    vector<int> landmarks = {3, 4, 3, 6, 5, 5, 4, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 853;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int distance = 36;
    int maxHeight = 2;
    vector<int> landmarks = {2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 34;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int distance = 17;
    int maxHeight = 4;
    vector<int> landmarks = {};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 119704;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int distance = 63;
    int maxHeight = 6;
    vector<int> landmarks = {3, 1, 4, 3, 3, 1, 6, 4, 4, 4, 5, 1, 3, 2, 2, 1, 6, 3, 3, 1, 2, 2, 2, 2, 6, 4, 4, 4, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 14737279;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int distance = 47;
    int maxHeight = 18;
    vector<int> landmarks = {7, 6, 16, 14, 10, 11};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 101531088;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int distance = 65;
    int maxHeight = 10;
    vector<int> landmarks = {10, 6, 2, 1, 2, 6, 8, 4, 5, 10, 10, 9, 1, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 29833085548522176;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int distance = 38;
    int maxHeight = 11;
    vector<int> landmarks = {4, 5, 8, 5, 6};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 201667830444;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int distance = 60;
    int maxHeight = 2;
    vector<int> landmarks = {1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 144115188075855871;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int distance = 48;
    int maxHeight = 4;
    vector<int> landmarks = {1, 2, 1, 1, 3, 2, 4, 1, 3, 2, 2, 1, 4, 1, 2, 1, 2, 1, 1, 1, 1, 4, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 64935362155;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int distance = 88;
    int maxHeight = 10;
    vector<int> landmarks = {8, 8, 5, 1, 8, 9, 1, 1, 1, 6, 7, 6, 6, 6, 6, 8, 6, 10, 1, 5, 5, 6, 3, 7, 7};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 898023426;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int distance = 78;
    int maxHeight = 21;
    vector<int> landmarks = {3, 9, 2, 2, 9, 6, 9, 7, 8, 18, 16, 8, 12, 9};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 78543;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int distance = 51;
    int maxHeight = 12;
    vector<int> landmarks = {8, 5, 5, 9, 4};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 17701480714805588;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int distance = 50;
    int maxHeight = 4;
    vector<int> landmarks = {3, 4, 1, 3, 2, 2, 2, 3, 2, 1, 1, 1, 4, 2, 4, 1, 2, 4, 1, 4, 3, 2, 3, 1, 2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 22480360;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int distance = 38;
    int maxHeight = 9;
    vector<int> landmarks = {9, 6, 4};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 24198365652196;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int distance = 56;
    int maxHeight = 16;
    vector<int> landmarks = {2};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 4771328739784274850;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int distance = 41;
    int maxHeight = 17;
    vector<int> landmarks = {10, 7, 1, 16, 1, 2, 15, 8, 6, 9, 7, 17, 8, 10, 5, 12, 12, 1, 16, 10, 3, 8, 3, 5, 3, 7, 8, 11, 2, 8, 3, 9, 9, 15, 5};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int distance = 95;
    int maxHeight = 25;
    vector<int> landmarks = {12, 14, 15, 22, 5, 9, 23, 23, 1, 6, 18, 12, 14, 7, 7, 16, 1, 20, 5};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int distance = 30;
    int maxHeight = 6;
    vector<int> landmarks = {1, 1, 1, 4, 2, 1, 3, 4, 4, 6, 4, 3, 5, 3, 6, 6, 1, 3, 1, 4, 1, 2, 5, 6, 3, 3, 6, 5, 6, 4, 1, 6, 3, 3, 6, 3, 2, 1, 3, 1, 2, 6, 3, 2, 4, 5, 3, 4};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int distance = 30;
    int maxHeight = 26;
    vector<int> landmarks = {21, 4, 19, 18, 18, 13, 14, 17, 25, 26, 12, 6, 14, 1, 11, 24, 18, 14, 25, 18, 10, 25, 4, 19, 7, 16, 7, 2, 19, 21, 7, 19, 14, 6, 10, 3, 4, 15, 25};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int distance = 12;
    int maxHeight = 27;
    vector<int> landmarks = {13, 10, 1, 12, 17, 23, 13, 4, 2, 1, 24, 12, 5, 19, 20, 2, 1, 10, 9, 20, 23, 9, 1, 4, 15, 21, 6, 18, 15, 12};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int distance = 66;
    int maxHeight = 28;
    vector<int> landmarks = {11, 25, 9, 19, 3, 10, 9, 21, 19, 28, 23, 25, 20, 5, 27, 22, 3, 11, 18, 1, 13};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int distance = 53;
    int maxHeight = 34;
    vector<int> landmarks = {31, 34, 18, 3, 33, 26, 4, 28, 18, 1, 11};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int distance = 26;
    int maxHeight = 23;
    vector<int> landmarks = {20, 3, 21, 7, 20, 11, 3};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int distance = 27;
    int maxHeight = 12;
    vector<int> landmarks = {6, 10, 1, 4, 3, 5};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int distance = 9;
    int maxHeight = 22;
    vector<int> landmarks = {17, 1, 6, 1, 10};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int distance = 97;
    int maxHeight = 31;
    vector<int> landmarks = {18, 18, 30, 26, 23, 19, 11, 15, 21};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 122691900197874159;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int distance = 100;
    int maxHeight = 42;
    vector<int> landmarks = {};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 8126535387972713166;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int distance = 72;
    int maxHeight = 4;
    vector<int> landmarks = {4, 2, 4, 4, 3, 1, 4, 4, 1, 2, 3, 1, 1, 2, 2, 2, 3, 4, 1, 4, 3, 1, 1, 2, 4, 4, 3, 3, 3, 2, 4, 1, 1, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 149605094496915649;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int distance = 10;
    int maxHeight = 5;
    vector<int> landmarks = {4, 2, 1, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int distance = 100;
    int maxHeight = 20;
    vector<int> landmarks = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 3344141088478506456;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int distance = 66;
    int maxHeight = 2;
    vector<int> landmarks = {};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 9223372036854775807;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int distance = 38;
    int maxHeight = 11;
    vector<int> landmarks = {4, 5, 8, 5, 6};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 201667830444;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int distance = 100;
    int maxHeight = 50;
    vector<int> landmarks = {};
    HillHike* pObj = new HillHike();
    clock_t start = clock();
    long long result = pObj->numPaths(distance, maxHeight, landmarks);
    clock_t end = clock();
    delete pObj;
    long long expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4530&pm=1158
********************************************************************************
#line 2 "HillHike.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
long long dp[105][55][55][2]; 
 
class HillHike { 
  public: 
     
  vector<int> lm; 
  int maxheight,start; 
     
  long long solve(int distleft, int nextlm, int curh, int maxr) 
  { 
    if (!distleft) { 
      if (curh || !maxr || (nextlm<lm.size())) return 0; 
      return 1; 
     } 
     if (!curh && distleft<start) return 0; 
     long long &sum=dp[distleft][nextlm][curh][maxr]; 
     if (sum>=0) return sum; 
     sum=0; 
     if (nextlm<lm.size() && curh==lm[nextlm]) nextlm++; 
     if (curh==maxheight) maxr=1; 
     if (curh>0) sum+=solve(distleft-1,nextlm,curh-1,maxr); 
     sum+=solve(distleft-1,nextlm,curh,maxr); 
     if (curh<maxheight) sum+=solve(distleft-1,nextlm,curh+1,maxr); 
     return sum; 
  }     
   
  long long numPaths(int a, int b, vector <int> c) { 
    memset(dp,-1,sizeof(dp)); 
    lm=c; 
    maxheight=b; 
    start=a; 
    return solve(a,0,0,0); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
