/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6832
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

class QuadraticEquations {
public:
    long howMany(int x, int y, int d, int z, int k);
};

long QuadraticEquations::howMany(int x, int y, int d, int z, int k) {
    long ret;
    return ret;
}


int test0() {
    int x = 5;
    int y = 1;
    int d = 3;
    int z = 4;
    int k = 30;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int x = 5;
    int y = 1;
    int d = 3;
    int z = 4;
    int k = 10;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int x = 2;
    int y = 0;
    int d = 1;
    int z = 1;
    int k = 2;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x = 0;
    int y = -1;
    int d = 4;
    int z = -1;
    int k = 2;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int x = -1;
    int y = 3;
    int d = 3;
    int z = 2;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 153847;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int x = 2;
    int y = 0;
    int d = 1;
    int z = 3;
    int k = 5;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x = 0;
    int y = 1;
    int d = 2;
    int z = 1000;
    int k = 574891;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x = 1;
    int y = 1;
    int d = 2;
    int z = 1000;
    int k = 454739;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x = 1;
    int y = 1;
    int d = 2;
    int z = 1000;
    int k = 0;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x = 1;
    int y = -1;
    int d = 2;
    int z = 1000;
    int k = 480019;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x = 0;
    int y = 1;
    int d = 2;
    int z = 100;
    int k = 574891;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 229;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x = 1;
    int y = 1;
    int d = 2;
    int z = 100;
    int k = 454739;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 91;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x = 1;
    int y = 1;
    int d = 2;
    int z = 100;
    int k = 0;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x = 1;
    int y = -1;
    int d = 2;
    int z = 100;
    int k = 480019;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 97;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x = 0;
    int y = 0;
    int d = 1;
    int z = 57;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4000004000001;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x = 0;
    int y = 0;
    int d = 1;
    int z = 1;
    int k = 0;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x = 5;
    int y = -1;
    int d = 25;
    int z = 999;
    int k = 968900;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3755072715601;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x = -1000;
    int y = -1000;
    int d = 1000;
    int z = 1;
    int k = 459595;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x = 1;
    int y = 0;
    int d = 1;
    int z = 1000;
    int k = 224116;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 201385;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x = 0;
    int y = -5;
    int d = 4;
    int z = 3;
    int k = 43665;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 76266163;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int x = 12;
    int y = -5;
    int d = 49;
    int z = 9;
    int k = 75185;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 42738053;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x = 64;
    int y = -437;
    int d = 208;
    int z = 850;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x = 108;
    int y = -467;
    int d = 96;
    int z = 569;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int x = -966;
    int y = -286;
    int d = 686;
    int z = 661;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x = 0;
    int y = -5;
    int d = 9;
    int z = 2;
    int k = 1;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x = -35;
    int y = 46;
    int d = 16;
    int z = 96;
    int k = 149;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x = -49;
    int y = -48;
    int d = 8;
    int z = -88;
    int k = 16031;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x = -733;
    int y = 672;
    int d = 169;
    int z = 790;
    int k = 27;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x = 4;
    int y = -39;
    int d = 76;
    int z = -10;
    int k = 741758;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 257;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x = -996;
    int y = -746;
    int d = 211;
    int z = 775;
    int k = 6238;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x = -6;
    int y = 0;
    int d = 1;
    int z = -8;
    int k = 670279;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 105818531049;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x = -603;
    int y = 734;
    int d = 841;
    int z = -341;
    int k = 267855;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 643;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x = -10;
    int y = 0;
    int d = 9;
    int z = 7;
    int k = 411005;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6579236979;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x = 53;
    int y = 19;
    int d = 99;
    int z = -44;
    int k = 197580;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int x = 9;
    int y = 0;
    int d = 6;
    int z = 10;
    int k = 252;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2145;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x = 98;
    int y = -8;
    int d = 17;
    int z = -14;
    int k = 826052;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 777;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x = 531;
    int y = -114;
    int d = 784;
    int z = 969;
    int k = 694057;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2449157;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x = -842;
    int y = -906;
    int d = 409;
    int z = 533;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x = 6;
    int y = -1;
    int d = 7;
    int z = -9;
    int k = 6804;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 127;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x = -2;
    int y = 2;
    int d = 5;
    int z = -4;
    int k = 247791;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 495583;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int x = 9;
    int y = 2;
    int d = 6;
    int z = 8;
    int k = 961;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x = 731;
    int y = -767;
    int d = 256;
    int z = 327;
    int k = 788390;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 167641;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x = -469;
    int y = 497;
    int d = 961;
    int z = 855;
    int k = 14937;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int x = 530;
    int y = 195;
    int d = 484;
    int z = 245;
    int k = 355484;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 543555;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int x = 1;
    int y = -5;
    int d = 3;
    int z = 1;
    int k = 73;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int x = 95;
    int y = -16;
    int d = 53;
    int z = -34;
    int k = 19379;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int x = -12;
    int y = 37;
    int d = 12;
    int z = -51;
    int k = 569940;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 211;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int x = 26;
    int y = 35;
    int d = 100;
    int z = -53;
    int k = 928232;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 24375979;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int x = -8;
    int y = -4;
    int d = 9;
    int z = 5;
    int k = 1787;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 798119;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int x = -6;
    int y = 0;
    int d = 9;
    int z = -3;
    int k = 1;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int x = 499;
    int y = -841;
    int d = 875;
    int z = -170;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int x = 97;
    int y = 35;
    int d = 6;
    int z = 71;
    int k = 440186;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4539;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int x = 47;
    int y = -42;
    int d = 64;
    int z = 87;
    int k = 203064;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1974433;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int x = 769;
    int y = -962;
    int d = 361;
    int z = -218;
    int k = 536239;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3723;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int x = 9;
    int y = 2;
    int d = 1;
    int z = 4;
    int k = 799483;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 21129767463;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int x = 84;
    int y = 37;
    int d = 81;
    int z = -64;
    int k = 416;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int x = 19;
    int y = -15;
    int d = 76;
    int z = -45;
    int k = 870427;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 103;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int x = -898;
    int y = 229;
    int d = 841;
    int z = -754;
    int k = 580495;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 41039;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int x = -4;
    int y = 4;
    int d = 7;
    int z = -9;
    int k = 3;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int x = -444;
    int y = 232;
    int d = 256;
    int z = -356;
    int k = 670631;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2694017;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int x = 276;
    int y = 946;
    int d = 255;
    int z = -883;
    int k = 94;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int x = 60;
    int y = -5;
    int d = 267;
    int z = -928;
    int k = 861184;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int x = -449;
    int y = 756;
    int d = 576;
    int z = 250;
    int k = 7027;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int x = 76;
    int y = 17;
    int d = 31;
    int z = 100;
    int k = 3215;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int x = -9;
    int y = 0;
    int d = 3;
    int z = -9;
    int k = 546383;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 895604787217;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int x = -148;
    int y = -531;
    int d = 163;
    int z = -685;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int x = -3;
    int y = -2;
    int d = 3;
    int z = 2;
    int k = 767084;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 127847;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int x = -7;
    int y = -3;
    int d = 4;
    int z = 6;
    int k = 386059;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3527574135;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int x = -343;
    int y = -96;
    int d = 625;
    int z = -780;
    int k = 103762;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 966809;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int x = 0;
    int y = 1;
    int d = 2;
    int z = 1;
    int k = 575757;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 575757;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int x = 0;
    int y = 1;
    int d = 3;
    int z = -1;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 666667;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int x = 0;
    int y = 0;
    int d = 2;
    int z = 1;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4000004000001;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int x = 1;
    int y = 4;
    int d = 9;
    int z = 49;
    int k = 100000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16657225;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int x = 0;
    int y = 0;
    int d = 2;
    int z = 1;
    int k = 1000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4004001;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int x = 4;
    int y = -4;
    int d = 1;
    int z = 10;
    int k = 100;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 40401;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int x = 1;
    int y = 5;
    int d = 25;
    int z = 39;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 439815296297;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int x = -1;
    int y = 3;
    int d = 3;
    int z = 2;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 153847;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int x = 1;
    int y = 1;
    int d = 1;
    int z = 3;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 439815296297;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int x = 0;
    int y = 0;
    int d = 1;
    int z = 1;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4000004000001;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int x = -100;
    int y = -233;
    int d = 121;
    int z = -99;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 564025;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int x = 1;
    int y = -1;
    int d = 1;
    int z = 1;
    int k = 1000000;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4000004000001;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int x = 5;
    int y = 0;
    int d = 3;
    int z = 2;
    int k = 77;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 961;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int x = 17;
    int y = 3;
    int d = 19;
    int z = 14;
    int k = 89528;
    QuadraticEquations* pObj = new QuadraticEquations();
    clock_t start = clock();
    long result = pObj->howMany(x, y, d, z, k);
    clock_t end = clock();
    delete pObj;
    long expected = 753;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=10157606&rd=10007&pm=6832
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
 
using namespace std;
 
class QuadraticEquations {
  public:
  
  int gcd(int x,int y){
    if (y==0) return x;
    return gcd(y,x%y);
  }
  
  int inv[1000100];
  int kk;
  
  bool verify(long long p,long long q,long long r,long long t)
  {
    long long b=p*t+r*q,c=p*r;
    if (b<-kk || b>kk || c<-kk || c>kk) return 0;
    return 1;
  }
  
  long long min,max;
  
  void doit(long long p,long long q,long long r,long long t)
  {
    if (verify(p,q,r,t)){
      if (r<min) min=r;
      if (r>max) max=r;
    }
  }
  
  long long howMany(int x, int y, int d, int z, int k) {
    int i;
    long long ct=0;
    for(i=0;i<100;i++) if (i*i==d) break;
    kk=k;
    if (i<100 || y==0){
      double w=y*sqrt(d*1.0);
      long long p,q,r,t;
      long long a;
      p=x+(int)w;
      q=z;
      int d=gcd(abs(p),abs(q));
      p/=d;
      q/=d;
      if (p==0){
        long long ret=2*k+1;
        return ret*ret;
      }
      for(t=-k;t<=k;t++) if (t!=0){
        a=q*t;
        if (a<-k || a>k) continue;
        min=100000000;
        max=-100000000;
        r=k/p;
        doit(p,q,r,t);
        doit(p,q,r-1,t);
        doit(p,q,r+1,t);
        r=-k/p;
        doit(p,q,r,t);
        doit(p,q,r-1,t);
        doit(p,q,r+1,t);
        r=(k-p*t)/q;
        doit(p,q,r,t);
        doit(p,q,r-1,t);
        doit(p,q,r+1,t);
        r=(-k-p*t)/q;
        doit(p,q,r,t);
        doit(p,q,r-1,t);
        doit(p,q,r+1,t);
        if (min<=max){
          ct+=max-min+1;
        }
      }
      long long b,c;
      for(b=-k;b<=k;b++){
        c=b*p;
        if (c%q!=0) continue;
        c/=q;
        if (c>=-k && c<=k) ct++;
      }
    }else{
      long long t2,a,b,c;
      t2=x*x-(long long)y*y*d;
//      cout << t2 << endl;
      for(a=-k;a<=k;a++){
        b=-2*a*x;
        if (b%z!=0) continue;
        b/=z;
        if (b<-k || b>k) continue;
        c=t2*a;
        if (c%(z*z)!=0) continue;
        c/=(z*z);
        if (c<-k || c>k) continue;
        ct++;
//        cout << a << ' ' << b << ' ' <<  c << ' '  << endl;
      }
    }
    return ct;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/