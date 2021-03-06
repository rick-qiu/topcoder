/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12148
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

class FoxAndFlowerShopDivTwo {
public:
    int theMaxFlowers(vector<string> flowers, int r, int c);
};

int FoxAndFlowerShopDivTwo::theMaxFlowers(vector<string> flowers, int r, int c) {
    int ret;
    return ret;
}


int test0() {
    vector<string> flowers = {"F.F", ".F.", ".F."};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> flowers = {"F..", "...", "..."};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {".FF.F.F", "FF...F.", "..FF.FF"};
    int r = 1;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> flowers = {"F", ".", "F", "F", "F", ".", "F", "F"};
    int r = 4;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> flowers = {".FFF..F...", "FFF...FF.F", "..F.F.F.FF", "FF..F.FFF.", "..FFFFF...", "F....FF...", ".FF.FF..FF", "..F.F.FFF.", ".FF..F.F.F", "F.FFF.FF.F"};
    int r = 4;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> flowers = {"F", "F"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> flowers = {".", "."};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {"F", "."};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> flowers = {".", "F"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> flowers = {"F", "."};
    int r = 1;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> flowers = {"F.", ".F"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> flowers = {"F.F..", "F...F", "F....", "F..F.", "F.F.."};
    int r = 2;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> flowers = {"FFF", "FFF", "FFF"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> flowers = {"FFF", "FFF", "FFF"};
    int r = 1;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {"FFF", "FFF", "FFF"};
    int r = 2;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> flowers = {"FFF", "FFF", "FFF"};
    int r = 0;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> flowers = {"FFF", "FFF", "FFF"};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> flowers = {"..", "..", "..", "..", "..", ".F", ".."};
    int r = 6;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> flowers = {"..F....", "FFFFF..", "F..F.FF", "...F.FF", "F.FFF..", "F.FFF.F", "FFF.F..", "..FF.F.", "FF.FFFF"};
    int r = 0;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> flowers = {"F.F.", ".FF.", "F...", "F.F.", "FF.F", "F..F", "F.F.", "F..F", "F.FF"};
    int r = 7;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> flowers = {"FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF"};
    int r = 4;
    int c = 5;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> flowers = {".F...", "FFF.F", "F...F", "..FFF", "..F.F", "F.F.F", "...F.", "..F..", ".FF.F"};
    int r = 3;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> flowers = {"..F..F.F", "F.F..F.."};
    int r = 0;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> flowers = {"..", "..", ".."};
    int r = 1;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {"FF.....", "F......", ".......", ".......", ".......", "...F..F", ".......", "....F.."};
    int r = 7;
    int c = 5;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> flowers = {"..", "..", "..", "..", "..", "..", "..", ".."};
    int r = 7;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {"......", "......", "......", "F.....", "F.....", "......", "......"};
    int r = 5;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {"...", "...", "...", "..F", ".F.", "..F"};
    int r = 4;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> flowers = {"..F.F.F.", "...FF...", "...F....", "........", "..FF....", "........"};
    int r = 1;
    int c = 7;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> flowers = {"...", "..F"};
    int r = 0;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {"...F", ".F..", "....", "....", "....", "....", "....", "....", ".F.F", "...."};
    int r = 0;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> flowers = {".......", "...F...", ".......", ".......", ".F.....", ".......", "...F..F"};
    int r = 2;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> flowers = {"..FFF", "F.FF.", "FF...", "..F.F", ".F...", "F....", ".F..."};
    int r = 6;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> flowers = {"..F.FF...", "..FFFF..."};
    int r = 1;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> flowers = {"...F..", "......", "......", ".....F", "......", "......", "......", "......", "......", "......"};
    int r = 9;
    int c = 4;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> flowers = {".....FF..F", "..........", "..........", "..........", ".....F....", "........F."};
    int r = 0;
    int c = 4;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> flowers = {"FF..FF..", "F..FF.F.", ".....FFF", ".F..F.F.", "F.F.FF..", "F.F..FF.", ".F.....F", "FF...FF.", ".....F..", ".F.F..F."};
    int r = 7;
    int c = 4;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> flowers = {"....F..", "F....F.", "FF.F..."};
    int r = 2;
    int c = 5;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> flowers = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "........."};
    int r = 2;
    int c = 8;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> flowers = {".", ".", "F", ".", ".", ".", ".", "."};
    int r = 5;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
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
    vector<string> flowers = {"FFFFFFFFF", "F.F.FFFFF", "F.F.FFFFF", ".FFFFFFF."};
    int r = 0;
    int c = 4;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> flowers = {"FFFF.F", "F..FFF", "FF.FFF", "FFFFFF", "FFFFF.", "F.FFF."};
    int r = 2;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> flowers = {"F", "F", ".", ".", "F"};
    int r = 3;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> flowers = {"..", "..", "..", "..", ".."};
    int r = 0;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> flowers = {"......F..", "F........", "...F...F.", "..F.FF.FF", "..F......", "..F....FF", ".F..FF..F", ".F..FF..F", "F.F...F.F", "FF......."};
    int r = 8;
    int c = 7;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> flowers = {"F..", "...", "F..", ".FF"};
    int r = 3;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> flowers = {".F.F.....", "..F...FF.", "...F...F.", "....F.F..", ".......F.", ".....F..F", "..FF.....", "FF.F....."};
    int r = 6;
    int c = 6;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> flowers = {"FFFFFFF", "FFFFFF.", "FFFFFFF", "FFFFFFF", "FFFFFFF", "FF.FFFF"};
    int r = 3;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> flowers = {".FF.F...F", ".FFFF.F..", "FFF.F..F.", "...FF....", "FF.F.F.FF", "FFFF..FFF"};
    int r = 0;
    int c = 6;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> flowers = {".....F...", "..F...F.."};
    int r = 0;
    int c = 7;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> flowers = {"F.F", "FFF", "FF."};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> flowers = {".", ".", "F", "F"};
    int r = 1;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> flowers = {"F.", "FF", "F.", "FF", "F.", "FF", ".F", ".."};
    int r = 7;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> flowers = {"..", "..", "F.", "..", ".."};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> flowers = {"FFF.FFFFF.", ".FF.FFFFFF", "FF..FFFFFF", "FFFFFFF.FF", "F..FF.FFFF", "FF.FFF.FF.", "FFFFFFFFFF", "FFFFFFFFFF"};
    int r = 1;
    int c = 6;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> flowers = {"..", "..", "..", "..", "..", "..", ".F"};
    int r = 2;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> flowers = {".F..F.F...", ".F..F.....", "..........", "F.........", "...F......", ".F........", "........FF", "..........", "....F.....", ".......F.."};
    int r = 1;
    int c = 6;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> flowers = {"........FF", "..F.......", "...F.F....", "..F.......", "....F...F.", "....F.....", ".F.......F", "..F...F...", "..........", "....F...F."};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> flowers = {".FF......F", "...F......", "FF...F....", ".....F....", ".F.F.....F", "...F.F....", "F.F.FFF..F", "....F...F.", ".FF.......", "..F......F"};
    int r = 8;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> flowers = {"....FF...F", ".F.FF...F.", "......FF.F", "..F..F.F.F", ".FFF.FF.FF", "FF.F.F..FF", "F..F..F.FF", "F.F.F.F.FF", "FF.......F", "....F..F.."};
    int r = 9;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> flowers = {"F..F......", "F.FF.F.FFF", "FF....FF..", ".F..F...F.", "..F...FF..", "F.F..F.FF.", "...F.FF...", ".F..F.FF.F", "...FF..FFF", ".F..F..FFF"};
    int r = 4;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> flowers = {"..F.F....F", "FF....F..F", ".FFFFFFF.F", "..FFFFFF.F", "F.F.F.F.FF", "FFFF..F..F", "..FFF.FFFF", "...FF...FF", ".FFFF..FF.", ".F...F..F."};
    int r = 4;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> flowers = {"FF.FF.FF..", "FFF..FFFF.", "FFFFFFF.FF", "FFFFF.FFFF", "...F.F..FF", "...FF.FF.F", "FF.FFFF.FF", "...FF..FFF", "F.FFF.FFF.", "F..FF.FFFF"};
    int r = 9;
    int c = 4;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> flowers = {".FFFF..F.F", "FFFFFFFFFF", "FFF.FFF.FF", "FFF.F..F.F", "..F.F.FFFF", "..F.FF.F..", "FFF.FFFFFF", "FF..FFFFFF", ".FFFFF.FFF", "FFFF.FFFFF"};
    int r = 2;
    int c = 7;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> flowers = {"F.FFFFFFFF", "FFFFF.FFF.", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFF..FFFF", "FFFFF.FF.F", "FFFFFFFFFF", "FF.F.FFFF.", "F.F.FFFFFF"};
    int r = 9;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> flowers = {"FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF", "FFFFFFFFFF"};
    int r = 0;
    int c = 4;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> flowers = {"F", "F"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> flowers = {"FF...", "FF...", "FF..."};
    int r = 1;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> flowers = {"F..", "F..", "F.."};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> flowers = {"..FF", "..FF", "..FF", "..FF"};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> flowers = {".FFF..F...", "FFF...FF.F", "..F.F.F.FF", "FF..F.FFF.", "..FFFFF...", "F....FF...", ".FF.FF..FF", "..F.F.FFF.", ".FF..F.F.F", "F.FFF.FF.F"};
    int r = 4;
    int c = 3;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> flowers = {"..F", "..F", "..F"};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> flowers = {".FF", "FFF", "FFF"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> flowers = {"F.F", "...", "F.."};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> flowers = {".FF.F.F", "FF...F.", "..FF.FF"};
    int r = 1;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> flowers = {".", "F"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> flowers = {".FFF..F...", "FFF...FF.F", "..F.F.F.FF", "FF..F.FFF.", "..FFFFF...", "F....FF...", ".FF.FF..FF", "..F.F.FFF.", ".FF..F.F.F", "F.FFF.FF.F"};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> flowers = {"FF.", "FF.", "FF."};
    int r = 0;
    int c = 2;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> flowers = {"...", "FF.", "..."};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> flowers = {"F..", "...", "...", "..F"};
    int r = 0;
    int c = 0;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> flowers = {"FFF", "FFF", "FFF"};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> flowers = {"FF", "F."};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> flowers = {"...", "F..", "..."};
    int r = 1;
    int c = 1;
    FoxAndFlowerShopDivTwo* pObj = new FoxAndFlowerShopDivTwo();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, r, c);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23088935&rd=15174&pm=12148
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <iostream> 
#include <list> 
#include <ctime> 
#include <map> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
#define inf (1<<27) 
#define eps 1e-9 
#define pb push_back 
#define ins insert 
#define mp make_pair 
#define sz(x) ((int)x.size()) 
#define clr clear() 
#define all(x) x.begin(),x.end() 
#define xx first 
#define yy second 
#define sqr(x) ((x)*(x)) 
#define chk(a,k) ((bool)(a&(1<<(k)))) 
#define off(a,k) (a&(~(1<<(k)))) 
#define on(a,k) (a|(1<<(k))) 
 
typedef long long i64; 
typedef unsigned long long ui64; 
typedef string st; 
typedef pair<int,int> pii; 
 
#define MAX 0 
 
int calc(vector<st> &fl,int r1,int r2,int c1,int c2){ 
    int ret=0; 
    for(int i=r1; i<=r2; i++){ 
        for(int j=c1; j<=c2; j++) ret+=fl[i][j]=='F'; 
    } 
    return ret; 
} 
 
class FoxAndFlowerShopDivTwo { 
  public: 
  int theMaxFlowers(vector <string> flowers, int r, int c) { 
      int ret=0; 
      int R=sz(flowers); 
      int C=sz(flowers[0]); 
      for(int i=0; i<R; i++){ 
          for(int j=0; j<C; j++){ 
              int lx=0; 
              while(lx+i<R){ 
                  int ly=0; 
                  while(ly+j<C){ 
                      if(r>=i && r<=lx+i && c>=j && c<=ly+j) break; 
                      ret=max(ret,calc(flowers,i,i+lx,j,j+ly)); 
                      ly++; 
                  } 
                  lx++; 
              } 
          } 
      } 
      return ret; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by TesterDream 1.2.3 by fushar (Dec 27 2011)
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/