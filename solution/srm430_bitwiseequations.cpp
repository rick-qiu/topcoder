/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9921
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

class BitwiseEquations {
public:
    long kthPlusOrSolution(int x, int k);
};

long BitwiseEquations::kthPlusOrSolution(int x, int k) {
    long ret;
    return ret;
}


int test0() {
    int x = 5;
    int k = 1;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
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
    int k = 5;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int x = 11;
    int k = 2;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x = 10;
    int k = 3;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int x = 845;
    int k = 15734;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1006640;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int x = 1;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x = 256;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x = 1000000000;
    int k = 165446;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1077941318;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x = 4;
    int k = 500000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x = 4;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x = 4;
    int k = 1000000001;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x = 4;
    int k = 999999999;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999995;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x = 1024;
    int k = 1000000511;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999999;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x = 1024;
    int k = 1000000512;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000001024;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x = 1073741824;
    int k = 1073741823;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741823;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x = 1073741824;
    int k = 1073741824;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x = 2000000000;
    int k = 262144;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x = 2000000000;
    int k = 262143;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 147483647;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x = 1073741823;
    int k = 1;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x = 1073741823;
    int k = 2;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int x = 1;
    int k = 1000000001;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000002;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x = 1;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x = 2000000000;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16383165351936;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int x = 1804289384;
    int k = 9159;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4241415;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x = 1681692778;
    int k = 84084;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 306186000;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int x = 1957747794;
    int k = 23808;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 38600704;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int x = 719885387;
    int k = 22765;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 68430500;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int x = 596516650;
    int k = 31950;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 476102740;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int x = 1025202363;
    int k = 1964;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14951168;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int x = 783368691;
    int k = 7932;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 21806592;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int x = 44897764;
    int k = 327;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 40971;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int x = 1365180541;
    int k = 25283;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 201371778;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int x = 304089173;
    int k = 1124345;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 138737538;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int x = 35005212;
    int k = 59881;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 29908033;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int x = 294702568;
    int k = 17294;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 67567638;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int x = 336465783;
    int k = 9563;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 144793736;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int x = 278722863;
    int k = 4708;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 151191680;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int x = 145174068;
    int k = 22432;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 85508352;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int x = 1101513930;
    int k = 1947;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1585445;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int x = 1315634023;
    int k = 1331;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 553975832;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int x = 1369133070;
    int k = 251832;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 773893568;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int x = 1059961394;
    int k = 1113;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4195521;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int x = 628175012;
    int k = 252251;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 444992083;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int x = 1804289384;
    int k = 846930887;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 27751935424519;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int x = 1681692778;
    int k = 714636916;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11708143961872;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int x = 1957747794;
    int k = 424238336;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13900700254208;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int x = 719885387;
    int k = 649760493;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10645345348260;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int x = 596516650;
    int k = 189641422;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6213946359892;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int x = 1025202363;
    int k = 350490028;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 91877984707328;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int x = 783368691;
    int k = 102520060;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6718419942912;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int x = 44897764;
    int k = 967513927;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7925843271691;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int x = 1365180541;
    int k = 540383427;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 17706581504130;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int x = 304089173;
    int k = 303455737;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 77469562754;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int x = 127;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 128000000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int x = 2000000000;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16383165351936;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int x = 1073741823;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648000000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int x = 1073741824;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3073741824;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int x = 1804289383;
    int k = 1846930886;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 242079664218256;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int x = 1681692777;
    int k = 1714636915;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 28091539785478;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int x = 1957747793;
    int k = 1424238335;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 46669131817902;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int x = 1719885386;
    int k = 1649760492;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 54058746421552;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int x = 1596516649;
    int k = 1189641421;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 77962797126738;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int x = 1025202362;
    int k = 1350490027;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 177010674795781;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int x = 1783368690;
    int k = 1102520059;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 36127129138181;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int x = 1044897763;
    int k = 1967513926;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4126175100141592;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int x = 1365180540;
    int k = 1540383426;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 25237328517122;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int x = 1304089172;
    int k = 1303455736;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 85422873324960;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int x = 1979711487;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824000000000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int x = 1073741823;
    int k = 1073741823;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921503533105152;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int x = 1999999999;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8388608000000000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int x = 10000000;
    int k = 10000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2554487040;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int x = 1999999999;
    int k = 1999999999;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8388606000000000;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int x = 1073741823;
    int k = 1073741824;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846976;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int x = 253434343;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 131071937085440;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int x = 156;
    int k = 10737;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 171777;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int x = 5;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int x = 200000000;
    int k = 200000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 819064734720;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int x = 42145;
    int k = 103230491;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6606749782;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int x = 199999999;
    int k = 199999999;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 209715000000000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int x = 13;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16000000000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int x = 1999999997;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4194304000000000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int x = 12345;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 64000000000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int x = 2000000000;
    int k = 190000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1554920907648;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int x = 1923023416;
    int k = 1234984312;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 20233609860544;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int x = 24333;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1024000000000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int x = 1200000;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 511999279104;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int x = 1111111111;
    int k = 1111111111;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 36408647843896;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int x = 536870911;
    int k = 536870911;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 288230375614840832;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int x = 1900000001;
    int k = 1900000001;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 124517645043714;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int x = 1073741824;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int x = 1237;
    int k = 10001;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 639490;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int x = 1987654321;
    int k = 1234567890;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 161817187993860;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int x = 1000000000;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8191582675968;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int x = 1998789724;
    int k = 1998775234;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 130990203002882;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int x = 1048575;
    int k = 1048575;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1099510579200;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int x = 1073741823;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824000000000;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int x = 1879048191;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648000000000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int x = 1228033170;
    int k = 1999999999;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8191140737901;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int x = 1923453245;
    int k = 213421343;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13986566375106;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int x = 1000000;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 255999381504;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int x = 200000987;
    int k = 30;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6688;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int x = 2000000000;
    int k = 1999999999;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16383165350911;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int x = 183631871;
    int k = 183631871;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1540415606882304;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int x = 1900000001;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 131071702204416;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int x = 1073741823;
    int k = 111;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 119185342464;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int x = 12703918;
    int k = 1000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4095992135680;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int x = 1023;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2048000000000;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int x = 4879451;
    int k = 7891542;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 32322388640;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int x = 1073741535;
    int k = 1073741773;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 288230362193068064;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int x = 1073741823;
    int k = 1999999999;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483646926258176;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int x = 2048;
    int k = 5;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int x = 1073741824;
    int k = 1999999999;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3073741823;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int x = 45345;
    int k = 200300;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12796568;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int x = 1073741802;
    int k = 1073741823;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 144115187002114069;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int x = 1073741824;
    int k = 1;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int x = 750139004;
    int k = 575013601;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 75368090419201;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int x = 1073741823;
    int k = 1971764517;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2117166028982059008;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int x = 3;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int x = 111111111;
    int k = 2000000000;
    BitwiseEquations* pObj = new BitwiseEquations();
    clock_t start = clock();
    long result = pObj->kthPlusOrSolution(x, k);
    clock_t end = clock();
    delete pObj;
    long expected = 524288000000000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20036294&rd=13521&pm=9921
********************************************************************************
#line 79 "BitwiseEquations.cpp"
#include <sstream> 
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h> 
#include <stdio.h> 
#include <numeric>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
 
#define forn(i,n)     for(int i=0; i<n; ++i)
#define forv(i,v)     forn(i,int(v.size()))
#define ALL(a)        (a).begin(),(a).end()
#define pb            push_back
#define sz             size()
#define SORT(a)       sort(ALL(a))
#define iss           istringstream
 
typedef vector< int > vi; typedef vector< string > vs;  
 
long long solve ( int x, int k ) {
  long long ans = x;
  long long res = 0;
  int i;
  
  for (i = 0; i < 64; i++)
    if ( !(ans & (1LL << i)) ) {
      if ( k & 1 ) 
        res |= (1LL << i);
      k >>= 1;
      
      if ( !k ) break;
    }
    
  return res;
}
 
class BitwiseEquations {
  public:
  long long kthPlusOrSolution(int x, int k) {
    return solve ( x , k );
  }
};
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/