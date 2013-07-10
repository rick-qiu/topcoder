/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4561
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

class Straights {
public:
    int howMany(vector<int> hand, int k);
};

int Straights::howMany(vector<int> hand, int k) {
    int ret;
    return ret;
}


int test0() {
    vector<int> hand = {0, 3, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int k = 2;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> hand = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k = 5;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> hand = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int k = 13;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 67108864;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> hand = {4, 0, 4, 0, 4, 0, 4, 0, 4, 0, 4, 0, 4};
    int k = 2;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> hand = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1};
    int k = 1;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> hand = {3, 1, 3, 2, 2, 0, 4, 1, 4, 2, 2, 2, 1};
    int k = 3;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> hand = {2, 2, 3, 0, 1, 1, 4, 2, 2, 3, 2, 1, 3};
    int k = 10;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
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
    vector<int> hand = {4, 2, 3, 4, 4, 3, 2, 4, 3, 4, 2, 3, 1};
    int k = 8;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 47808;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> hand = {0, 2, 3, 4, 4, 2, 0, 0, 1, 0, 3, 2, 4};
    int k = 13;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> hand = {2, 4, 2, 0, 3, 4, 4, 1, 1, 1, 1, 0, 1};
    int k = 5;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> hand = {1, 4, 1, 4, 1, 3, 3, 1, 4, 3, 4, 0, 2};
    int k = 6;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 912;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> hand = {4, 0, 2, 3, 0, 1, 1, 1, 0, 0, 4, 2, 3};
    int k = 12;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> hand = {0, 0, 3, 2, 0, 4, 4, 3, 2, 0, 3, 2, 2};
    int k = 11;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> hand = {4, 1, 1, 4, 4, 3, 4, 3, 2, 1, 2, 3, 0};
    int k = 4;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 536;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> hand = {0, 3, 4, 2, 1, 2, 2, 4, 0, 4, 2, 2, 3};
    int k = 10;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> hand = {1, 1, 0, 0, 0, 4, 1, 4, 2, 2, 1, 4, 3};
    int k = 6;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> hand = {1, 1, 2, 2, 0, 2, 0, 0, 3, 3, 0, 2, 1};
    int k = 8;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> hand = {1, 1, 2, 3, 1, 1, 4, 3, 3, 2, 3, 3, 4};
    int k = 2;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> hand = {2, 0, 0, 3, 4, 1, 1, 0, 3, 4, 4, 4, 1};
    int k = 6;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
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
    vector<int> hand = {1, 4, 0, 3, 4, 1, 2, 1, 4, 4, 1, 4, 3};
    int k = 12;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> hand = {0, 1, 1, 1, 0, 3, 1, 1, 0, 3, 2, 4, 3};
    int k = 11;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> hand = {4, 4, 4, 3, 4, 0, 0, 3, 1, 2, 4, 4, 4};
    int k = 11;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
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
    vector<int> hand = {3, 3, 1, 3, 0, 3, 2, 3, 1, 1, 2, 0, 2};
    int k = 4;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> hand = {1, 3, 3, 3, 3, 3, 0, 4, 3, 1, 3, 3, 2};
    int k = 10;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
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
    vector<int> hand = {1, 2, 4, 0, 1, 1, 2, 3, 1, 2, 3, 0, 0};
    int k = 7;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> hand = {0, 4, 3, 3, 2, 2, 2, 2, 1, 1, 1, 4, 0};
    int k = 13;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
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
    vector<int> hand = {3, 0, 1, 3, 4, 1, 4, 0, 2, 0, 4, 3, 4};
    int k = 5;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> hand = {3, 3, 0, 0, 2, 1, 0, 3, 0, 3, 3, 2, 2};
    int k = 13;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
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
    vector<int> hand = {0, 4, 1, 2, 4, 2, 3, 3, 1, 4, 3, 2, 0};
    int k = 7;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 2592;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> hand = {3, 0, 4, 0, 4, 2, 3, 0, 2, 1, 4, 0, 1};
    int k = 4;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
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
    vector<int> hand = {0, 3, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int k = 2;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> hand = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1};
    int k = 1;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> hand = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int k = 13;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 67108864;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> hand = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int k = 5;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> hand = {0, 3, 1, 2, 3, 2, 2, 0, 0, 0, 0, 0, 0};
    int k = 4;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> hand = {1, 2, 3, 4, 4, 3, 2, 1, 4, 2, 4, 2, 3};
    int k = 5;
    Straights* pObj = new Straights();
    clock_t start = clock();
    int result = pObj->howMany(hand, k);
    clock_t end = clock();
    delete pObj;
    int expected = 1232;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15094447&rd=7220&pm=4561
********************************************************************************
#include <string> 
#include <vector> 
#include <set> 
#include <map> 
#include <queue> 
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 
#include <math.h> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
using namespace std; 
class Straights { 
  public: 
  int howMany(vector <int> hand, int k) { 
    int i,j,l; 
    int res; 
    res=0; 
    for (i=0;i<=hand.size()-k;i++) 
    { 
      l=1; 
      for (j=0;j<k;j++) 
        l*=hand[i+j]; 
      res+=l; 
    } 
    return res; 
  } 
   
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/