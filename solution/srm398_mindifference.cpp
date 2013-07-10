/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8161
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

class MinDifference {
public:
    int closestElements(int A0, int X, int Y, int M, int n);
};

int MinDifference::closestElements(int A0, int X, int Y, int M, int n) {
    int ret;
    return ret;
}


int test0() {
    int A0 = 3;
    int X = 7;
    int Y = 1;
    int M = 101;
    int n = 5;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A0 = 3;
    int X = 9;
    int Y = 8;
    int M = 32;
    int n = 8;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 67;
    int X = 13;
    int Y = 17;
    int M = 4003;
    int n = 23;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A0 = 1;
    int X = 1221;
    int Y = 3553;
    int M = 9889;
    int n = 11;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 275;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 2;
    int n = 10000;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 123;
    int X = 7655;
    int Y = 651;
    int M = 6565;
    int n = 10000;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 1;
    int X = 2;
    int Y = 3;
    int M = 4;
    int n = 5;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 872;
    int X = 765;
    int Y = 876;
    int M = 876;
    int n = 786;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 5432;
    int X = 4321;
    int Y = 321;
    int M = 21;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5412;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A0 = 10;
    int X = 1;
    int Y = 10;
    int M = 10000;
    int n = 20;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A0 = 6661;
    int X = 4289;
    int Y = 2621;
    int M = 337;
    int n = 3;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A0 = 6571;
    int X = 5407;
    int Y = 19;
    int M = 4903;
    int n = 8;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A0 = 5791;
    int X = 1367;
    int Y = 3613;
    int M = 2531;
    int n = 6;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A0 = 4547;
    int X = 9767;
    int Y = 8971;
    int M = 7057;
    int n = 5;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A0 = 3391;
    int X = 6679;
    int Y = 6379;
    int M = 7043;
    int n = 6;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A0 = 6983;
    int X = 7541;
    int Y = 7351;
    int M = 6793;
    int n = 30;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A0 = 6761;
    int X = 2609;
    int Y = 577;
    int M = 7547;
    int n = 75;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 1319;
    int X = 5683;
    int Y = 2287;
    int M = 8737;
    int n = 90;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A0 = 1151;
    int X = 1619;
    int Y = 1321;
    int M = 9437;
    int n = 61;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 1567;
    int X = 5003;
    int Y = 9661;
    int M = 8929;
    int n = 43;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 7247;
    int X = 4547;
    int Y = 2237;
    int M = 2411;
    int n = 903;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A0 = 7757;
    int X = 3889;
    int Y = 2657;
    int M = 251;
    int n = 765;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 613;
    int X = 9227;
    int Y = 3767;
    int M = 3559;
    int n = 611;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A0 = 4231;
    int X = 9533;
    int Y = 7681;
    int M = 3067;
    int n = 821;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A0 = 7877;
    int X = 5623;
    int Y = 2273;
    int M = 9413;
    int n = 344;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A0 = 7547;
    int X = 8747;
    int Y = 7547;
    int M = 8599;
    int n = 6410;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 8821;
    int X = 1861;
    int Y = 4943;
    int M = 6091;
    int n = 1177;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A0 = 29;
    int X = 2063;
    int Y = 5351;
    int M = 2143;
    int n = 7719;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A0 = 919;
    int X = 6803;
    int Y = 3593;
    int M = 683;
    int n = 5936;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A0 = 7297;
    int X = 2693;
    int Y = 5407;
    int M = 9859;
    int n = 8673;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A0 = 8396;
    int X = 7408;
    int Y = 1583;
    int M = 1483;
    int n = 6094;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 7616;
    int X = 5264;
    int Y = 1789;
    int M = 6911;
    int n = 9288;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 6716;
    int X = 4543;
    int Y = 5393;
    int M = 8941;
    int n = 2810;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A0 = 9822;
    int X = 5989;
    int Y = 9613;
    int M = 1861;
    int n = 7678;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A0 = 2322;
    int X = 1076;
    int Y = 2477;
    int M = 4451;
    int n = 5820;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A0 = 8422;
    int X = 5091;
    int Y = 8221;
    int M = 8377;
    int n = 315;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 6262;
    int X = 7395;
    int Y = 8167;
    int M = 5099;
    int n = 664;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 5533;
    int X = 4896;
    int Y = 3299;
    int M = 9547;
    int n = 523;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 7455;
    int X = 3925;
    int Y = 5483;
    int M = 1091;
    int n = 285;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 8110;
    int X = 3852;
    int Y = 281;
    int M = 8093;
    int n = 581;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 8455;
    int X = 4271;
    int Y = 1733;
    int M = 53;
    int n = 99;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A0 = 2762;
    int X = 5752;
    int Y = 67;
    int M = 5507;
    int n = 94;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 4054;
    int X = 5336;
    int Y = 8663;
    int M = 2341;
    int n = 44;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 6996;
    int X = 9961;
    int Y = 1549;
    int M = 3329;
    int n = 89;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 1193;
    int X = 4821;
    int Y = 8971;
    int M = 5399;
    int n = 95;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 8481;
    int X = 1955;
    int Y = 8389;
    int M = 6373;
    int n = 6;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A0 = 1407;
    int X = 7883;
    int Y = 5839;
    int M = 3727;
    int n = 3;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 534;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A0 = 2871;
    int X = 5689;
    int Y = 6367;
    int M = 2879;
    int n = 7;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A0 = 1860;
    int X = 5129;
    int Y = 8053;
    int M = 2477;
    int n = 4;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A0 = 4213;
    int X = 7596;
    int Y = 6217;
    int M = 9043;
    int n = 4;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A0 = 8573;
    int X = 7998;
    int Y = 8163;
    int M = 9929;
    int n = 85;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A0 = 284;
    int X = 9496;
    int Y = 5709;
    int M = 2789;
    int n = 22;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 8729;
    int X = 6922;
    int Y = 249;
    int M = 199;
    int n = 55;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A0 = 8575;
    int X = 2369;
    int Y = 3691;
    int M = 6469;
    int n = 59;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A0 = 8935;
    int X = 5079;
    int Y = 5965;
    int M = 7237;
    int n = 29;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A0 = 8595;
    int X = 7701;
    int Y = 2140;
    int M = 7109;
    int n = 721;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 5003;
    int X = 8515;
    int Y = 5218;
    int M = 3373;
    int n = 499;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A0 = 7694;
    int X = 7230;
    int Y = 1381;
    int M = 5881;
    int n = 57;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A0 = 8870;
    int X = 3487;
    int Y = 1596;
    int M = 761;
    int n = 909;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A0 = 8615;
    int X = 6655;
    int Y = 1021;
    int M = 5279;
    int n = 9043;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A0 = 6806;
    int X = 7494;
    int Y = 3142;
    int M = 3727;
    int n = 5126;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A0 = 4594;
    int X = 555;
    int Y = 3843;
    int M = 3359;
    int n = 968;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A0 = 3497;
    int X = 9723;
    int Y = 4549;
    int M = 9601;
    int n = 1180;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 2;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 2;
    int n = 3;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A0 = 10000;
    int X = 2724;
    int Y = 6398;
    int M = 1;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A0 = 9986;
    int X = 43;
    int Y = 2778;
    int M = 8376;
    int n = 3;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4986;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A0 = 9905;
    int X = 2695;
    int Y = 6990;
    int M = 9837;
    int n = 4;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3279;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A0 = 9795;
    int X = 1;
    int Y = 2750;
    int M = 9657;
    int n = 8;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1343;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A0 = 8088;
    int X = 1569;
    int Y = 9611;
    int M = 9605;
    int n = 16;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 565;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A0 = 3827;
    int X = 7591;
    int Y = 7802;
    int M = 9471;
    int n = 32;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A0 = 9013;
    int X = 6513;
    int Y = 6660;
    int M = 9472;
    int n = 64;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A0 = 707;
    int X = 7181;
    int Y = 531;
    int M = 9715;
    int n = 138;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A0 = 6583;
    int X = 7421;
    int Y = 3500;
    int M = 9695;
    int n = 268;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A0 = 9263;
    int X = 3760;
    int Y = 1579;
    int M = 9104;
    int n = 529;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A0 = 965;
    int X = 3913;
    int Y = 5928;
    int M = 9496;
    int n = 1154;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A0 = 7083;
    int X = 4889;
    int Y = 4508;
    int M = 9484;
    int n = 2102;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A0 = 5777;
    int X = 6648;
    int Y = 4577;
    int M = 8986;
    int n = 4458;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A0 = 6945;
    int X = 1904;
    int Y = 8230;
    int M = 8753;
    int n = 8595;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 4765;
    int X = 5081;
    int Y = 7951;
    int M = 10000;
    int n = 10000;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
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
    int A0 = 10000;
    int X = 10000;
    int Y = 508;
    int M = 9999;
    int n = 10000;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A0 = 1000;
    int X = 2;
    int Y = 999;
    int M = 1000;
    int n = 3;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A0 = 7;
    int X = 9;
    int Y = 67;
    int M = 5;
    int n = 10000;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 9999;
    int n = 8888;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A0 = 555;
    int X = 10000;
    int Y = 999;
    int M = 9999;
    int n = 10000;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A0 = 99;
    int X = 2;
    int Y = 3;
    int M = 100;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A0 = 57;
    int X = 35;
    int Y = 35;
    int M = 1;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A0 = 10;
    int X = 10;
    int Y = 10;
    int M = 100;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A0 = 100;
    int X = 100;
    int Y = 100;
    int M = 100;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A0 = 1;
    int X = 9000;
    int Y = 1;
    int M = 10000;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A0 = 1;
    int X = 1234;
    int Y = 2;
    int M = 5555;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1235;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A0 = 1;
    int X = 1;
    int Y = 1;
    int M = 100;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A0 = 5;
    int X = 6;
    int Y = 7;
    int M = 10;
    int n = 10;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A0 = 3;
    int X = 7;
    int Y = 1;
    int M = 101;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A0 = 2;
    int X = 1;
    int Y = 3;
    int M = 2;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A0 = 575;
    int X = 5245;
    int Y = 445;
    int M = 5646;
    int n = 10;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A0 = 2;
    int X = 1;
    int Y = 4;
    int M = 5;
    int n = 2;
    MinDifference* pObj = new MinDifference();
    clock_t start = clock();
    int result = pObj->closestElements(A0, X, Y, M, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22678883&rd=12170&pm=8161
********************************************************************************
#include <vector> 
#include <map> 
#include <algorithm> 
#include <sstream> 
#include <set> 
#include <iostream> 
using namespace std; 
typedef vector<int> vi;typedef vector<vi> vvi;typedef long long ll; 
#define SZ(a) ((int)(a).size()) 
#define PB push_back 
#define REP(i, a) for(int i = 0; i<a; i++) 
#define FOR(i,a,b) for(int i = a; i<b; i++) 
#define REPSZ(i,a) REP(i,SZ(a)) 
 
class MinDifference 
{  
        public:  
        int closestElements (int A0, int X, int Y, int M, int n)  
        {  
      vi v(n,0); 
      v[0]=A0; 
      FOR(i,1,n) v[i]=(v[i-1]*X+Y)%M; 
      int ans=100000; 
      REP(i,n) FOR(j,i+1,n) ans=min(ans,abs(v[i]-v[j])); 
      return ans; 
        }  
 
         
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/