/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11872
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

class RandomColoringDiv2 {
public:
    int getCount(int maxR, int maxG, int maxB, int startR, int startG, int startB, int d1, int d2);
};

int RandomColoringDiv2::getCount(int maxR, int maxG, int maxB, int startR, int startG, int startB, int d1, int d2) {
    int ret;
    return ret;
}


int test0() {
    int maxR = 5;
    int maxG = 1;
    int maxB = 1;
    int startR = 2;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int maxR = 4;
    int maxG = 2;
    int maxB = 2;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 3;
    int d2 = 3;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxR = 4;
    int maxG = 2;
    int maxB = 2;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 5;
    int d2 = 5;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxR = 6;
    int maxG = 9;
    int maxB = 10;
    int startR = 1;
    int startG = 2;
    int startB = 3;
    int d1 = 0;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 540;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxR = 6;
    int maxG = 9;
    int maxB = 10;
    int startR = 1;
    int startG = 2;
    int startB = 3;
    int d1 = 4;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 99;
    int startG = 0;
    int startB = 0;
    int d1 = 1;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 0;
    int startG = 99;
    int startB = 0;
    int d1 = 2;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 999992;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 0;
    int startG = 0;
    int startB = 99;
    int d1 = 3;
    int d2 = 40;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 68894;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 99;
    int startG = 0;
    int startB = 99;
    int d1 = 9;
    int d2 = 30;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 29062;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 99;
    int startG = 99;
    int startB = 99;
    int d1 = 10;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 331;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 99;
    int startG = 99;
    int startB = 99;
    int d1 = 20;
    int d2 = 21;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 2648;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 3;
    int startG = 4;
    int startB = 5;
    int d1 = 0;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 2;
    int startG = 6;
    int startB = 4;
    int d1 = 1;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 89;
    int startG = 3;
    int startB = 99;
    int d1 = 2;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 999982;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 95;
    int startG = 90;
    int startB = 7;
    int d1 = 3;
    int d2 = 40;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 107875;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 3;
    int startG = 1;
    int startB = 84;
    int d1 = 10;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 811;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 3;
    int startG = 1;
    int startB = 84;
    int d1 = 20;
    int d2 = 20;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 2103;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 91;
    int startG = 5;
    int startB = 94;
    int d1 = 9;
    int d2 = 30;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 47212;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 50;
    int startG = 50;
    int startB = 50;
    int d1 = 0;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 49;
    int startG = 50;
    int startB = 50;
    int d1 = 1;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 50;
    int startG = 49;
    int startB = 50;
    int d1 = 2;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 999973;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 50;
    int startG = 50;
    int startB = 49;
    int d1 = 3;
    int d2 = 40;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 531316;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 49;
    int startG = 49;
    int startB = 49;
    int d1 = 10;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 2402;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 49;
    int startG = 49;
    int startB = 49;
    int d1 = 20;
    int d2 = 20;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 9602;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 49;
    int startG = 50;
    int startB = 49;
    int d1 = 9;
    int d2 = 30;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 222068;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 88;
    int startG = 36;
    int startB = 70;
    int d1 = 0;
    int d2 = 0;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 34;
    int startG = 7;
    int startB = 49;
    int d1 = 1;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 75;
    int startG = 91;
    int startB = 43;
    int d1 = 0;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int maxR = 1;
    int maxG = 1;
    int maxB = 1;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 0;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
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
    int maxR = 1;
    int maxG = 1;
    int maxB = 1;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int maxR = 19;
    int maxG = 20;
    int maxB = 20;
    int startR = 16;
    int startG = 5;
    int startB = 11;
    int d1 = 10;
    int d2 = 11;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1520;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int maxR = 18;
    int maxG = 15;
    int maxB = 10;
    int startR = 2;
    int startG = 8;
    int startB = 1;
    int d1 = 8;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 690;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int maxR = 10;
    int maxG = 12;
    int maxB = 19;
    int startR = 8;
    int startG = 5;
    int startB = 6;
    int d1 = 5;
    int d2 = 17;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1794;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int maxR = 11;
    int maxG = 15;
    int maxB = 16;
    int startR = 7;
    int startG = 8;
    int startB = 5;
    int d1 = 9;
    int d2 = 12;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int maxR = 13;
    int maxG = 15;
    int maxB = 13;
    int startR = 2;
    int startG = 14;
    int startB = 6;
    int d1 = 9;
    int d2 = 15;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1248;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int maxR = 11;
    int maxG = 20;
    int maxB = 10;
    int startR = 6;
    int startG = 4;
    int startB = 8;
    int d1 = 8;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int maxR = 49;
    int maxG = 52;
    int maxB = 40;
    int startR = 12;
    int startG = 11;
    int startB = 2;
    int d1 = 22;
    int d2 = 49;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 74992;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int maxR = 54;
    int maxG = 60;
    int maxB = 56;
    int startR = 40;
    int startG = 42;
    int startB = 35;
    int d1 = 24;
    int d2 = 26;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 15972;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int maxR = 49;
    int maxG = 59;
    int maxB = 53;
    int startR = 12;
    int startG = 23;
    int startB = 13;
    int d1 = 11;
    int d2 = 22;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 47439;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int maxR = 59;
    int maxG = 59;
    int maxB = 58;
    int startR = 32;
    int startG = 43;
    int startB = 17;
    int d1 = 30;
    int d2 = 32;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 23160;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int maxR = 49;
    int maxG = 55;
    int maxB = 51;
    int startR = 38;
    int startG = 45;
    int startB = 19;
    int d1 = 39;
    int d2 = 57;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 17493;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int maxR = 57;
    int maxG = 42;
    int maxB = 51;
    int startR = 37;
    int startG = 23;
    int startB = 31;
    int d1 = 27;
    int d2 = 39;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 33222;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int maxR = 99;
    int maxG = 96;
    int maxB = 88;
    int startR = 43;
    int startG = 12;
    int startB = 74;
    int d1 = 69;
    int d2 = 76;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 117810;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int maxR = 83;
    int maxG = 93;
    int maxB = 81;
    int startR = 48;
    int startG = 78;
    int startB = 61;
    int d1 = 38;
    int d2 = 51;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 175530;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int maxR = 81;
    int maxG = 100;
    int maxB = 91;
    int startR = 51;
    int startG = 26;
    int startB = 26;
    int d1 = 27;
    int d2 = 70;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 566110;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int maxR = 87;
    int maxG = 87;
    int maxB = 96;
    int startR = 39;
    int startG = 57;
    int startB = 87;
    int d1 = 40;
    int d2 = 81;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 419562;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int maxR = 90;
    int maxG = 80;
    int maxB = 85;
    int startR = 43;
    int startG = 5;
    int startB = 78;
    int d1 = 42;
    int d2 = 95;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 424752;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int maxR = 89;
    int maxG = 93;
    int maxB = 87;
    int startR = 22;
    int startG = 33;
    int startB = 0;
    int d1 = 35;
    int d2 = 70;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 452007;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int maxR = 13;
    int maxG = 95;
    int maxB = 64;
    int startR = 9;
    int startG = 0;
    int startB = 36;
    int d1 = 3;
    int d2 = 97;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 78965;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int maxR = 59;
    int maxG = 40;
    int maxB = 49;
    int startR = 49;
    int startG = 8;
    int startB = 37;
    int d1 = 36;
    int d2 = 91;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 31040;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int maxR = 80;
    int maxG = 82;
    int maxB = 80;
    int startR = 41;
    int startG = 53;
    int startB = 50;
    int d1 = 19;
    int d2 = 45;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 393347;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int maxR = 75;
    int maxG = 51;
    int maxB = 70;
    int startR = 69;
    int startG = 32;
    int startB = 21;
    int d1 = 23;
    int d2 = 59;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 181538;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int maxR = 93;
    int maxG = 44;
    int maxB = 16;
    int startR = 26;
    int startG = 23;
    int startB = 14;
    int d1 = 20;
    int d2 = 67;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 41136;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int maxR = 89;
    int maxG = 60;
    int maxB = 26;
    int startR = 7;
    int startG = 25;
    int startB = 2;
    int d1 = 5;
    int d2 = 82;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 138273;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int maxR = 17;
    int maxG = 22;
    int maxB = 98;
    int startR = 5;
    int startG = 11;
    int startB = 5;
    int d1 = 9;
    int d2 = 45;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 15742;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int maxR = 35;
    int maxG = 55;
    int maxB = 37;
    int startR = 34;
    int startG = 14;
    int startB = 31;
    int d1 = 0;
    int d2 = 74;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 71225;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int maxR = 80;
    int maxG = 93;
    int maxB = 78;
    int startR = 78;
    int startG = 79;
    int startB = 9;
    int d1 = 7;
    int d2 = 94;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 578968;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int maxR = 34;
    int maxG = 58;
    int maxB = 1;
    int startR = 2;
    int startG = 55;
    int startB = 0;
    int d1 = 55;
    int d2 = 67;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int maxR = 96;
    int maxG = 5;
    int maxB = 3;
    int startR = 26;
    int startG = 2;
    int startB = 0;
    int d1 = 5;
    int d2 = 8;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int maxR = 91;
    int maxG = 5;
    int maxB = 3;
    int startR = 13;
    int startG = 1;
    int startB = 0;
    int d1 = 5;
    int d2 = 5;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int maxR = 93;
    int maxG = 5;
    int maxB = 2;
    int startR = 76;
    int startG = 4;
    int startB = 0;
    int d1 = 9;
    int d2 = 27;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int maxR = 93;
    int maxG = 4;
    int maxB = 2;
    int startR = 5;
    int startG = 3;
    int startB = 1;
    int d1 = 3;
    int d2 = 24;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int maxR = 5;
    int maxG = 88;
    int maxB = 4;
    int startR = 3;
    int startG = 61;
    int startB = 2;
    int d1 = 3;
    int d2 = 6;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int maxR = 4;
    int maxG = 91;
    int maxB = 4;
    int startR = 2;
    int startG = 4;
    int startB = 3;
    int d1 = 4;
    int d2 = 9;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int maxR = 5;
    int maxG = 4;
    int maxB = 93;
    int startR = 0;
    int startG = 2;
    int startB = 43;
    int d1 = 4;
    int d2 = 5;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int maxR = 3;
    int maxG = 5;
    int maxB = 97;
    int startR = 0;
    int startG = 1;
    int startB = 69;
    int d1 = 0;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int maxR = 96;
    int maxG = 89;
    int maxB = 2;
    int startR = 46;
    int startG = 39;
    int startB = 1;
    int d1 = 3;
    int d2 = 4;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int maxR = 84;
    int maxG = 91;
    int maxB = 4;
    int startR = 8;
    int startG = 17;
    int startB = 2;
    int d1 = 3;
    int d2 = 9;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1268;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int maxR = 92;
    int maxG = 4;
    int maxB = 80;
    int startR = 42;
    int startG = 3;
    int startB = 65;
    int d1 = 5;
    int d2 = 18;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 4560;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int maxR = 83;
    int maxG = 4;
    int maxB = 98;
    int startR = 74;
    int startG = 2;
    int startB = 34;
    int d1 = 3;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1496;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int maxR = 3;
    int maxG = 96;
    int maxB = 86;
    int startR = 1;
    int startG = 74;
    int startB = 34;
    int d1 = 0;
    int d2 = 8;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 867;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int maxR = 4;
    int maxG = 90;
    int maxB = 95;
    int startR = 3;
    int startG = 11;
    int startB = 8;
    int d1 = 1;
    int d2 = 9;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1367;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int maxR = 100;
    int maxG = 1;
    int maxB = 1;
    int startR = 99;
    int startG = 0;
    int startB = 0;
    int d1 = 3;
    int d2 = 7;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int maxR = 100;
    int maxG = 1;
    int maxB = 1;
    int startR = 99;
    int startG = 0;
    int startB = 0;
    int d1 = 34;
    int d2 = 69;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int maxR = 1;
    int maxG = 100;
    int maxB = 1;
    int startR = 0;
    int startG = 66;
    int startB = 0;
    int d1 = 2;
    int d2 = 22;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int maxR = 1;
    int maxG = 100;
    int maxB = 1;
    int startR = 0;
    int startG = 66;
    int startB = 0;
    int d1 = 4;
    int d2 = 44;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int maxR = 1;
    int maxG = 100;
    int maxB = 1;
    int startR = 0;
    int startG = 5;
    int startB = 0;
    int d1 = 4;
    int d2 = 6;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int maxR = 1;
    int maxG = 100;
    int maxB = 1;
    int startR = 0;
    int startG = 5;
    int startB = 0;
    int d1 = 5;
    int d2 = 6;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int maxR = 1;
    int maxG = 100;
    int maxB = 1;
    int startR = 0;
    int startG = 5;
    int startB = 0;
    int d1 = 6;
    int d2 = 6;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
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
    int maxR = 1;
    int maxG = 100;
    int maxB = 1;
    int startR = 0;
    int startG = 5;
    int startB = 0;
    int d1 = 7;
    int d2 = 7;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
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
    int maxR = 1;
    int maxG = 1;
    int maxB = 100;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 18;
    int d2 = 23;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int maxR = 1;
    int maxG = 1;
    int maxB = 100;
    int startR = 0;
    int startG = 0;
    int startB = 26;
    int d1 = 20;
    int d2 = 24;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int maxR = 99;
    int maxG = 100;
    int maxB = 1;
    int startR = 13;
    int startG = 31;
    int startB = 0;
    int d1 = 20;
    int d2 = 60;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 5521;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int maxR = 99;
    int maxG = 100;
    int maxB = 1;
    int startR = 13;
    int startG = 31;
    int startB = 0;
    int d1 = 1;
    int d2 = 6;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int maxR = 100;
    int maxG = 99;
    int maxB = 1;
    int startR = 1;
    int startG = 94;
    int startB = 0;
    int d1 = 3;
    int d2 = 90;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 8720;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int maxR = 99;
    int maxG = 1;
    int maxB = 98;
    int startR = 25;
    int startG = 0;
    int startB = 96;
    int d1 = 0;
    int d2 = 3;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int maxR = 99;
    int maxG = 1;
    int maxB = 98;
    int startR = 25;
    int startG = 0;
    int startB = 96;
    int d1 = 0;
    int d2 = 4;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int maxR = 99;
    int maxG = 1;
    int maxB = 98;
    int startR = 25;
    int startG = 0;
    int startB = 96;
    int d1 = 0;
    int d2 = 5;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int maxR = 97;
    int maxG = 1;
    int maxB = 100;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 8;
    int d2 = 13;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int maxR = 1;
    int maxG = 100;
    int maxB = 99;
    int startR = 0;
    int startG = 26;
    int startB = 23;
    int d1 = 1;
    int d2 = 3;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int maxR = 1;
    int maxG = 100;
    int maxB = 99;
    int startR = 0;
    int startG = 26;
    int startB = 23;
    int d1 = 31;
    int d2 = 33;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 342;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int maxR = 1;
    int maxG = 97;
    int maxB = 98;
    int startR = 0;
    int startG = 96;
    int startB = 96;
    int d1 = 95;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 386;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 8;
    int startG = 38;
    int startB = 37;
    int d1 = 6;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 7048;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 8;
    int startG = 37;
    int startB = 38;
    int d1 = 6;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 7048;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 8;
    int startG = 38;
    int startB = 38;
    int d1 = 6;
    int d2 = 10;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 7048;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 8;
    int startG = 37;
    int startB = 37;
    int d1 = 6;
    int d2 = 12;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 11794;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 0;
    int startG = 1;
    int startB = 1;
    int d1 = 1;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 0;
    int startB = 1;
    int d1 = 1;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 1;
    int startB = 0;
    int d1 = 1;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 0;
    int startG = 1;
    int startB = 1;
    int d1 = 0;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 0;
    int startB = 1;
    int d1 = 0;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int maxR = 2;
    int maxG = 2;
    int maxB = 2;
    int startR = 1;
    int startG = 1;
    int startB = 0;
    int d1 = 0;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int maxR = 6;
    int maxG = 6;
    int maxB = 6;
    int startR = 3;
    int startG = 3;
    int startB = 3;
    int d1 = 1;
    int d2 = 2;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 50;
    int startG = 50;
    int startB = 50;
    int d1 = 3;
    int d2 = 50;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 999875;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 10;
    int startG = 10;
    int startB = 10;
    int d1 = 0;
    int d2 = 0;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int maxR = 1;
    int maxG = 1;
    int maxB = 1;
    int startR = 0;
    int startG = 0;
    int startB = 0;
    int d1 = 0;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int maxR = 5;
    int maxG = 1;
    int maxB = 1;
    int startR = 2;
    int startG = 0;
    int startB = 0;
    int d1 = 1;
    int d2 = 1;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 95;
    int startG = 95;
    int startB = 95;
    int d1 = 10;
    int d2 = 100;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 997256;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int maxR = 50;
    int maxG = 43;
    int maxB = 25;
    int startR = 3;
    int startG = 7;
    int startB = 5;
    int d1 = 2;
    int d2 = 7;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 2118;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int maxR = 100;
    int maxG = 99;
    int maxB = 98;
    int startR = 1;
    int startG = 97;
    int startB = 55;
    int d1 = 0;
    int d2 = 33;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 82075;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int maxR = 10;
    int maxG = 10;
    int maxB = 10;
    int startR = 5;
    int startG = 5;
    int startB = 5;
    int d1 = 1;
    int d2 = 3;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 342;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int maxR = 100;
    int maxG = 100;
    int maxB = 100;
    int startR = 5;
    int startG = 5;
    int startB = 5;
    int d1 = 1;
    int d2 = 2;
    RandomColoringDiv2* pObj = new RandomColoringDiv2();
    clock_t start = clock();
    int result = pObj->getCount(maxR, maxG, maxB, startR, startG, startB, d1, d2);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707084&rd=14732&pm=11872
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
 
using namespace std;
 
 
class RandomColoringDiv2 {
public:
  int getCount(int, int, int, int, int, int, int, int);
};
bool good(int r, int g, int b, int R, int G, int B, int d1,int d2)
{
  if((abs(r-R)>d2) || (abs(g-G) > d2) || (abs(b-B) > d2)) return false;
  if((abs(r-R)<d1) && (abs(g-G) < d1) && (abs(b-B) < d1)) return false;
  return true;
}
int RandomColoringDiv2::getCount(int maxR, int maxG, int maxB, int sR, int sG, int sB, int d1, int d2) {
  int cnt = 0;
  for(int r = 0; r < maxR; ++r)
  {
    for(int g = 0; g< maxG; ++g)
    {
      for(int b = 0; b< maxB; ++b)
      {
        if(good(r,g,b,sR,sG,sB,d1,d2)) cnt ++;
      }
    }
  }
  return cnt;
}
 
 
//Powered by [BrainDeveloper] 1.0!
 
 
 
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/