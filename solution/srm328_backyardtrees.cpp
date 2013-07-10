/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6620
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

class BackyardTrees {
public:
    int countWays(int treeCount, int width, int height, int distance);
};

int BackyardTrees::countWays(int treeCount, int width, int height, int distance) {
    int ret;
    return ret;
}


int test0() {
    int treeCount = 2;
    int width = 4;
    int height = 4;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int treeCount = 13;
    int width = 36;
    int height = 48;
    int distance = 5;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int treeCount = 5;
    int width = 5;
    int height = 5;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int treeCount = 50;
    int width = 49;
    int height = 49;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int treeCount = 6;
    int width = 5;
    int height = 5;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
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
    int treeCount = 10;
    int width = 55;
    int height = 75;
    int distance = 5;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 490260662;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int treeCount = 1;
    int width = 7;
    int height = 8;
    int distance = 50;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int treeCount = 2;
    int width = 2;
    int height = 36;
    int distance = 14;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 2484;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int treeCount = 3;
    int width = 417;
    int height = 232;
    int distance = 43;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 246502024;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int treeCount = 4;
    int width = 39;
    int height = 28;
    int distance = 3;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 2640350;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int treeCount = 5;
    int width = 40;
    int height = 28;
    int distance = 10;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 597;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int treeCount = 6;
    int width = 40;
    int height = 48;
    int distance = 6;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 7956408;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int treeCount = 7;
    int width = 300;
    int height = 326;
    int distance = 5;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 231751905;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int treeCount = 2;
    int width = 1;
    int height = 1;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int treeCount = 8;
    int width = 496;
    int height = 438;
    int distance = 39;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 446208395;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int treeCount = 9;
    int width = 2;
    int height = 36;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 2145;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int treeCount = 10;
    int width = 317;
    int height = 82;
    int distance = 15;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 234329616;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int treeCount = 11;
    int width = 39;
    int height = 28;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
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
    int treeCount = 12;
    int width = 40;
    int height = 28;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int treeCount = 13;
    int width = 40;
    int height = 48;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 227955713;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int treeCount = 14;
    int width = 250;
    int height = 326;
    int distance = 24;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 457474184;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int treeCount = 15;
    int width = 388;
    int height = 163;
    int distance = 15;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 994478308;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int treeCount = 16;
    int width = 500;
    int height = 48;
    int distance = 11;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 206739693;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int treeCount = 17;
    int width = 494;
    int height = 14;
    int distance = 23;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 611184520;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int treeCount = 18;
    int width = 60;
    int height = 58;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 172610472;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int treeCount = 19;
    int width = 2;
    int height = 58;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int treeCount = 20;
    int width = 222;
    int height = 105;
    int distance = 10;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 585030272;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int treeCount = 21;
    int width = 458;
    int height = 14;
    int distance = 21;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 822102050;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int treeCount = 22;
    int width = 16;
    int height = 42;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 841191620;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int treeCount = 23;
    int width = 228;
    int height = 500;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 805903416;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int treeCount = 24;
    int width = 91;
    int height = 500;
    int distance = 7;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 872481282;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int treeCount = 25;
    int width = 421;
    int height = 312;
    int distance = 11;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 424493976;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int treeCount = 26;
    int width = 289;
    int height = 464;
    int distance = 14;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 175093450;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int treeCount = 27;
    int width = 467;
    int height = 470;
    int distance = 15;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 909537996;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int treeCount = 28;
    int width = 273;
    int height = 23;
    int distance = 3;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 451361080;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int treeCount = 29;
    int width = 427;
    int height = 3;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 959744000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int treeCount = 30;
    int width = 306;
    int height = 328;
    int distance = 3;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 385393404;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int treeCount = 31;
    int width = 111;
    int height = 252;
    int distance = 5;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 378222252;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int treeCount = 32;
    int width = 193;
    int height = 365;
    int distance = 3;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 943182664;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int treeCount = 33;
    int width = 139;
    int height = 447;
    int distance = 6;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 835091520;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int treeCount = 34;
    int width = 223;
    int height = 207;
    int distance = 6;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 337796324;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int treeCount = 35;
    int width = 225;
    int height = 500;
    int distance = 8;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 490522768;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int treeCount = 36;
    int width = 31;
    int height = 165;
    int distance = 3;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 53515776;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int treeCount = 37;
    int width = 343;
    int height = 403;
    int distance = 9;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 517677600;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int treeCount = 38;
    int width = 478;
    int height = 451;
    int distance = 15;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 483173738;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int treeCount = 39;
    int width = 409;
    int height = 154;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 238660604;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int treeCount = 40;
    int width = 268;
    int height = 477;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 371559939;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int treeCount = 41;
    int width = 268;
    int height = 83;
    int distance = 5;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 644090076;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int treeCount = 42;
    int width = 453;
    int height = 500;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 272105444;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int treeCount = 43;
    int width = 241;
    int height = 461;
    int distance = 11;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 284114760;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int treeCount = 44;
    int width = 450;
    int height = 488;
    int distance = 6;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 325459699;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int treeCount = 45;
    int width = 494;
    int height = 59;
    int distance = 9;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 531469792;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int treeCount = 46;
    int width = 209;
    int height = 500;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 73027340;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int treeCount = 47;
    int width = 390;
    int height = 500;
    int distance = 10;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 844183312;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int treeCount = 48;
    int width = 500;
    int height = 500;
    int distance = 13;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 776440460;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int treeCount = 49;
    int width = 107;
    int height = 5;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 200751800;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int treeCount = 50;
    int width = 370;
    int height = 455;
    int distance = 9;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 918208088;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int treeCount = 50;
    int width = 439;
    int height = 500;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 892203494;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int treeCount = 50;
    int width = 126;
    int height = 494;
    int distance = 7;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 176144876;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int treeCount = 50;
    int width = 76;
    int height = 181;
    int distance = 3;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 935538828;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int treeCount = 50;
    int width = 455;
    int height = 447;
    int distance = 12;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 599741912;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int treeCount = 50;
    int width = 312;
    int height = 37;
    int distance = 4;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 370205520;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int treeCount = 50;
    int width = 430;
    int height = 154;
    int distance = 6;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 788385595;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int treeCount = 50;
    int width = 500;
    int height = 240;
    int distance = 5;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 105571448;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int treeCount = 50;
    int width = 13;
    int height = 499;
    int distance = 9;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 230426224;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int treeCount = 50;
    int width = 455;
    int height = 143;
    int distance = 5;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 52964602;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int treeCount = 50;
    int width = 99;
    int height = 84;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 4479;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int treeCount = 50;
    int width = 500;
    int height = 500;
    int distance = 12;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 17751284;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int treeCount = 50;
    int width = 500;
    int height = 500;
    int distance = 13;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 920638408;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int treeCount = 50;
    int width = 500;
    int height = 500;
    int distance = 14;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 920625772;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int treeCount = 50;
    int width = 500;
    int height = 500;
    int distance = 15;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int treeCount = 50;
    int width = 500;
    int height = 500;
    int distance = 16;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int treeCount = 30;
    int width = 500;
    int height = 500;
    int distance = 23;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 29891264;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int treeCount = 30;
    int width = 500;
    int height = 500;
    int distance = 24;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 29890080;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int treeCount = 30;
    int width = 500;
    int height = 500;
    int distance = 25;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int treeCount = 15;
    int width = 500;
    int height = 500;
    int distance = 47;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 126734328;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int treeCount = 15;
    int width = 500;
    int height = 500;
    int distance = 49;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 14709420;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int treeCount = 15;
    int width = 500;
    int height = 500;
    int distance = 50;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int treeCount = 2;
    int width = 2;
    int height = 2;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int treeCount = 2;
    int width = 500;
    int height = 500;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 499624500;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int treeCount = 1;
    int width = 5;
    int height = 5;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int treeCount = 1;
    int width = 251;
    int height = 497;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 125496;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int treeCount = 1;
    int width = 500;
    int height = 500;
    int distance = 50;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 251001;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int treeCount = 50;
    int width = 500;
    int height = 500;
    int distance = 2;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 911709884;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int treeCount = 1;
    int width = 2;
    int height = 2;
    int distance = 1;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int treeCount = 30;
    int width = 500;
    int height = 500;
    int distance = 27;
    BackyardTrees* pObj = new BackyardTrees();
    clock_t start = clock();
    int result = pObj->countWays(treeCount, width, height, distance);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10544397&rd=10008&pm=6620
********************************************************************************
using namespace std; 
 
#include <sstream> 
#include <iostream> 
#include <string> 
#include <cstring> 
#include <vector> 
#include <algorithm> 
#include <cstdio> 
#include <cmath> 
#include <map> 
#include <queue> 
#include <functional> 
#include <set> 
#include <stack> 
#include <stdarg.h> 
 
// LIBRARY START 
#define fo(ii,ss,ff) for( int ii = ss; ii <= ff; ii++ ) 
#define re(ii,ff) fo(ii,0,ff-1) 
#define LL long long 
#define CLR(xx) memset( (xx), 0, sizeof( (xx) ) ) 
template<class T> T gcd( T a, T b ) { return a ? gcd(b % a, a) : b; }   
// LIBRARY END 
 
// HERE IT GOES! 
 
#define magic 1000000000LL 
 
LL mine[512][512], T[2][512][512], L[55][512]; 
 
class BackyardTrees 
{ 
public: 
 
int countWays(int TC, int W, int H, int D) 
{ 
  LL how(0); 
   
  if( TC == 1 ) 
      return ( W + 1 ) * ( H + 1 ); 
   
  fo( i, 1, 501 )  
  fo( j, 1, 501 ) 
  mine[i][j] = gcd(i,j); 
   
  CLR( T ); CLR( L ); 
   
  T[1][0][0] = 1; 
   
  L[1][0] = 1; 
   
  fo( k, 2, TC ) 
      fo( i, 1, W + 1 ) 
          fo( j, 0, i )     
              if( i - j >= D ) 
              { 
                    L[k][i] += L[k-1][j];  
                  if( L[k][i] >= magic ) 
                      L[k][i] -= magic; 
                } 
                 
    re( i, W + 1 ) 
        re( j, H + 1 ) 
        { 
            how += ( ( long long)(L[TC][i]) * ( W - i + 1 ) ) % magic;  
            if( how >= magic ) 
                how -= magic; 
        }     
     
    CLR( L ); 
     
    L[1][0] = 1; 
     
    fo( k, 2, TC ) 
      fo( i, 1, H + 1 ) 
          fo( j, 0, i )     
              if( i - j >= D ) 
              { 
                    L[k][i] += L[k-1][j];  
                  if( L[k][i] >= magic ) 
                        L[k][i] -= magic; 
                } 
    re( i, H + 1 ) 
        re( j, W + 1 ) 
        { 
            how += ( ( long long)(L[TC][i]) * ( H - i + 1 ) ) % magic;   
            if( how >= magic ) 
                how -= magic; 
        } 
     
//    cout << " how = " << how << endl; 
     
    int a, b;     
   
            
  fo( k, 2, TC ) 
  { 
        CLR( T[k%2] ); 
         
      fo( i, 1, W + 1 )  
        fo( j, 1, H + 1 )  
        {    
            a = i / mine[i][j], 
            b = j / mine[i][j]; 
             
            re(h, mine[i][j] ) 
            if( ( i - h * a ) * ( i - h * a ) + ( j - h * b ) * ( j - h * b ) >= D * D ) 
            { 
                T[ k % 2 ][ i ][ j ] += T[ (k-1) % 2 ][ h * a ][ h * b ]; 
                 
                if( T[ k % 2 ][ i ][ j ] >= magic ) 
                    T[ k % 2 ][ i ][ j ] -= magic;       
            } 
             
        } 
      
    } 
     
    LL ciot; 
     
    fo( i , 1, W + 1 ) 
    fo( j , 1, H + 1 ) 
    { 
        ciot = (LL)(W+1-i); 
        ciot *= (H+1-j); 
         
        how += ( T[ TC % 2 ][ i ][ j ] * ciot ) % magic, 
        how += ( T[ TC % 2 ][ i ][ j ] * ciot ) % magic; 
     
        how %= magic; 
    } 
     
    how %= magic; 
     
  return how; 
} 
 
// HERE IT ENDS! 
 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/