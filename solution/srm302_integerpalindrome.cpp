/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6184
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

class IntegerPalindrome {
public:
    long findByIndex(int K);
};

long IntegerPalindrome::findByIndex(int K) {
    long ret;
    return ret;
}


int test0() {
    int K = 8;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int K = 9;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 19;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 111;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 235;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 13731;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 23746;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 137484731;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 1000000000;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000200000009;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 999999999;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000100000009;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int K = 999999998;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000000000009;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 999999997;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 89999999999999998;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 999999996;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 89999999899999998;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 199999998;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000000001;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 199999997;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999999999;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 109999998;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000001;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 109999997;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 5353;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 4355534;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 3127;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 2129212;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 7229;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6231326;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 6074;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 5076705;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 6492;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 5494945;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 7344;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6346436;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 8658;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 7660667;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 7344;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6346436;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 6748;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 5750575;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 908;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 81018;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 1234;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 236632;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 4092;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 3094903;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 5467;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 4469644;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 9499;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 8501058;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 4805;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 3807083;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 7989;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6991996;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 7114;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6116116;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 592;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 49494;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 3923;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 2925292;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 1418;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 420024;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 2330;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 1332331;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 7926;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6928296;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 8421;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 7423247;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 6201;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 5203025;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 6059;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 5061605;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 3796;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 2798972;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 7449;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6451546;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 2343;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 1345431;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 603;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 50505;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 486;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 38883;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 368554632;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 26855463436455862;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 159103739;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 5910374114730195;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 852666177;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 75266617971666257;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 415525347;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 31552534943525513;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 132865727;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 3286572992756823;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 47702296;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 377022989220773;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 446024346;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 34602434843420643;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 968289110;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 86828911211982868;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 575073474;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 47507347674370574;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 922396981;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 82239698389693228;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 120486784;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 2048678668768402;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 10938548;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 9938550558399;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 830585945;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 73058594749585037;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 161807000;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6180700220070816;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 616639354;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 51663935653936615;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 1146931;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 146933339641;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int K = 675977558;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 57597756065779575;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int K = 710103473;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 61010347574301016;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int K = 301465541;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 20146554345564102;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int K = 4109002;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 3109004009013;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int K = 330393957;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 23039395959393032;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int K = 790926106;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 69092610801629096;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int K = 767627103;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 66762710501726766;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int K = 376190063;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 27619006560091672;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int K = 340082201;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 24008220302280042;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int K = 836113158;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 73611316061311637;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int K = 160087914;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6008791661978006;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int K = 398891036;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 29889103830198892;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int K = 85763294;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 757632969236757;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int K = 672408598;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 57240860006804275;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int K = 1;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int K = 2;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int K = 3;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int K = 4;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int K = 5;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int K = 7;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int K = 10;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int K = 0;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int K = 999999999;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000100000009;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int K = 23746;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 137484731;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int K = 1;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int K = 1000000000;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000200000009;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int K = 18;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 101;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int K = 1000000;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 90000200009;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int K = 123456789;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 2345679119765432;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int K = 803014914;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 70301491619410307;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int K = 190;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 9229;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int K = 108;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 1001;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int K = 15999999;
    IntegerPalindrome* pObj = new IntegerPalindrome();
    clock_t start = clock();
    long result = pObj->findByIndex(K);
    clock_t end = clock();
    delete pObj;
    long expected = 60000011000006;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16063200&rd=9823&pm=6184
********************************************************************************
#include<stdio.h>
 
long long i,n,p,t,ans[10000],num,flag;
 
struct IntegerPalindrome
{
  long long findByIndex(int n)
  {
    n++;
    long long ret=0;
    p=18;t=1;
    while(n>p){n-=p;p*=10;t*=10;}
    p/=2;
    if(n>p) {n-=p;flag=1;}
    else flag=0;
    num=t-1+n;
    p=0;
    while(num>0)
    {
      p++;
      ans[p]=num%10;
      num/=10;
    }
    for(i=1;i<=p;i++)
      ret=ret*10+ans[p-i+1];
    if(flag==0)
      for(i=2;i<=p;i++)
        ret=ret*10+ans[i];
    else
      for(i=1;i<=p;i++)
        ret=ret*10+ans[i];
    return ret;
  }
};

********************************************************************************
*******************************************************************************/