/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6149
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

class Manhattan {
public:
    vector<int> furthestPair(int n, int a, int b, int m);
};

vector<int> Manhattan::furthestPair(int n, int a, int b, int m) {
    vector<int> ret;
    return ret;
}


int test0() {
    int n = 10;
    int a = 7;
    int b = 13;
    int m = 23;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 10;
    int a = 17;
    int b = 17;
    int m = 17;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 100;
    int a = 912;
    int b = 1023;
    int m = 103871;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 54};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 250000;
    int a = 1;
    int b = 1;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 249999};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 250000;
    int a = 63;
    int b = 17;
    int m = 1;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 245453;
    int a = 1;
    int b = 123456789;
    int m = 213574341;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26588, 114131};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 249252;
    int a = 33;
    int b = 124512;
    int m = 234522;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 197};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 234123;
    int a = 124512;
    int b = 21435463;
    int m = 45125111;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {196780, 226826};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 241234;
    int a = 3;
    int b = 6786721;
    int m = 104395301;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 234592};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 200000;
    int a = 7;
    int b = 50000000;
    int m = 104402897;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3986, 19510};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 212345;
    int a = 51;
    int b = 5421;
    int m = 912453927;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 41193};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 234512;
    int a = 5123451;
    int b = 654321245;
    int m = 995325212;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8890, 40468};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 223454;
    int a = 23451;
    int b = 3465215;
    int m = 54353621;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15517, 91423};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 54321;
    int a = 23451;
    int b = 3465215;
    int m = 543536;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3607, 3623};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 249999;
    int a = 5342324;
    int b = 425234431;
    int m = 645234512;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2004, 6744};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 250000;
    int a = 43532532;
    int b = 65326255;
    int m = 21235432;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {118368, 217282};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 222222;
    int a = 45907832;
    int b = 23094682;
    int m = 2304598;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76540, 86936};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 2000;
    int a = 566562;
    int b = 2345256;
    int m = 21451;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {121, 152};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 10000;
    int a = 1000000000;
    int b = 1000000000;
    int m = 12345;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 231};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 2;
    int a = 123;
    int b = 456;
    int m = 789;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 2;
    int a = 175;
    int b = 175;
    int m = 175;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 250000;
    int a = 84728345;
    int b = 84728345;
    int m = 84728345;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 92007;
    int a = 396661373;
    int b = 378703534;
    int m = 64;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 124410;
    int a = 532609101;
    int b = 627802741;
    int m = 72;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 105832;
    int a = 239508656;
    int b = 410620146;
    int m = 33;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 75586;
    int a = 284763544;
    int b = 899436620;
    int m = 72;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 5;
    int a = 655748329;
    int b = 179812622;
    int m = 32;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 3;
    int a = 648253259;
    int b = 934483318;
    int m = 42;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 250000;
    int a = 1;
    int b = 49999999;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 250000;
    int a = 912;
    int b = 1023;
    int m = 103871;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3321};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 250000;
    int a = 34345354;
    int b = 54353;
    int m = 235354544;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 45145};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 250000;
    int a = 423243;
    int b = 42342;
    int m = 100000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 240003};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 25000;
    int a = 912;
    int b = 1023;
    int m = 103871;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3321};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 250000;
    int a = 799999999;
    int b = 899999999;
    int m = 999999998;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 229067};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 250000;
    int a = 999997;
    int b = 987651;
    int m = 1000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 32212};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 250000;
    int a = 964811441;
    int b = 746601218;
    int m = 521772220;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {183516, 247257};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 249995;
    int a = 531357995;
    int b = 699233448;
    int m = 999999997;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {91735, 164240};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 250000;
    int a = 11251234;
    int b = 312341412;
    int m = 812341211;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {148861, 151664};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 250000;
    int a = 997654321;
    int b = 542312743;
    int m = 542312743;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 250000;
    int a = 999999991;
    int b = 999999993;
    int m = 999999997;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 31170};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 250000;
    int a = 999999998;
    int b = 123456789;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1623, 142775};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 250000;
    int a = 91234;
    int b = 1023234;
    int m = 103871234;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {720, 5229};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 250000;
    int a = 324244543;
    int b = 2342;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 66491};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 249999;
    int a = 989989989;
    int b = 999999999;
    int m = 777777777;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 250000;
    int a = 113578923;
    int b = 25298742;
    int m = 999999997;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51779, 97860};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 10000;
    int a = 100000701;
    int b = 100000003;
    int m = 100000005;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1552};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 250000;
    int a = 13;
    int b = 17;
    int m = 999999997;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 167068};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 250000;
    int a = 999999999;
    int b = 999937;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 250000;
    int a = 999999998;
    int b = 999999997;
    int m = 999999999;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 250000;
    int a = 999999998;
    int b = 999999995;
    int m = 999999997;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 250000;
    int a = 926478857;
    int b = 957846251;
    int m = 999823477;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8818, 150881};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 250000;
    int a = 1;
    int b = 2;
    int m = 3;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 250000;
    int a = 51277316;
    int b = 52516122;
    int m = 512751255;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {139950, 247717};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 25000;
    int a = 999999999;
    int b = 999999999;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 100000;
    int a = 1;
    int b = 1;
    int m = 1000100;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 99999};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 25000;
    int a = 798765311;
    int b = 139876531;
    int m = 239876531;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10902, 21301};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 250000;
    int a = 943720;
    int b = 994852;
    int m = 839208;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {185, 773};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 250000;
    int a = 912;
    int b = 1023;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 157848};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 250000;
    int a = 1;
    int b = 1;
    int m = 1000000000;
    Manhattan* pObj = new Manhattan();
    clock_t start = clock();
    vector<int> result = pObj->furthestPair(n, a, b, m);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 249999};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=260835&rd=9999&pm=6149
********************************************************************************
#line 2 "Manhattan.cc"
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
 
long long min1s, min1i, max1s, max1i;
long long min2s, min2i, max2s, max2i;
 
vector<int> answer(int a, int b)
{
    vector<int> result;
    if (a == 0 && b == 0) {
  result.push_back(0);
  result.push_back(1);
  return result;
    }
    result.push_back(a <? b);
    result.push_back(a >? b);
    return result;
}
 
class Manhattan {
public:
    vector <int> furthestPair(int n, int a, int b, int m) {
  long long x = 0;
  long long y;
  for (int i = 0; i < n; i++) {
      y = ((long long)a * x + (long long)b) % (long long)m;
      if (i == 0) {
    min1s = max1s = x + y; min1i = max1i = 0;
    min2s = max2s = x - y; min2i = max2i = 0;
      } else {
    long long s1 = x + y;
    if (min1s > s1) {
        min1s = s1;
        min1i = i;
    }
    if (max1s < s1) {
        max1s = s1;
        max1i = i;
    }
    long long s2 = x - y;
    if (min2s > s2) {
        min2s = s2;
        min2i = i;
    }
    if (max2s < s2) {
        max2s = s2;
        max2i = i;
    }
      }
      x = ((long long)a * y + (long long)b) % (long long)m;
  }
  if (max1s - min1s > max2s - min2s)
      return answer(min1i, max1i);
  else if (max2s - min2s > max1s - min1s)
      return answer(min2i, max2i);
  else if ((min1i <? max1i) < (min2i <? max2i))
      return answer(min1i, max1i);
  else if ((min1i <? max1i) > (min2i <? max2i))
      return answer(min2i, max2i);
  else if ((min1i >? max1i) < (min2i >? max2i))
      return answer(min1i, max1i);
  else
      return answer(min2i, max2i);
    }
};
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/