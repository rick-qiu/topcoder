/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6802
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

class MoneyGame {
public:
    int play(vector<int> lennysCoins, vector<int> fredsCoins, vector<int> values);
};

int MoneyGame::play(vector<int> lennysCoins, vector<int> fredsCoins, vector<int> values) {
    int ret;
    return ret;
}


int test0() {
    vector<int> lennysCoins = {0, 1, 1};
    vector<int> fredsCoins = {0, 1, 1};
    vector<int> values = {20, 10, 2};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> lennysCoins = {0, 1, 2};
    vector<int> fredsCoins = {0, 1, 1};
    vector<int> values = {20, 10, 2};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
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
    vector<int> lennysCoins = {1, 1, 0};
    vector<int> fredsCoins = {0, 0, 1};
    vector<int> values = {1, 5, 10};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
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
    vector<int> lennysCoins = {4, 4, 3};
    vector<int> fredsCoins = {4, 3, 4};
    vector<int> values = {100, 753, 100};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 1, 1};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
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
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 5, 10};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 10, 100};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -19;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> lennysCoins = {0, 0, 0};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1000, 1000, 1000};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -15000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> lennysCoins = {3, 2, 1};
    vector<int> fredsCoins = {0, 0, 0};
    vector<int> values = {6, 8, 14};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 4};
    vector<int> values = {25, 5, 1};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> lennysCoins = {4, 3, 2};
    vector<int> fredsCoins = {0, 3, 5};
    vector<int> values = {9, 24, 351};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -729;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> lennysCoins = {0, 0, 1};
    vector<int> fredsCoins = {0, 1, 1};
    vector<int> values = {10, 5, 1};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> lennysCoins = {0, 1, 1};
    vector<int> fredsCoins = {0, 0, 1};
    vector<int> values = {100, 10, 1};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> lennysCoins = {5, 5, 1};
    vector<int> fredsCoins = {3, 3, 3};
    vector<int> values = {11, 420, 213};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 431;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> lennysCoins = {4, 2, 5};
    vector<int> fredsCoins = {4, 4, 1};
    vector<int> values = {544, 90, 184};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 818;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> lennysCoins = {1, 4, 4};
    vector<int> fredsCoins = {2, 5, 5};
    vector<int> values = {368, 55, 32};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -586;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> lennysCoins = {1, 2, 0};
    vector<int> fredsCoins = {4, 1, 2};
    vector<int> values = {103, 852, 68};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -548;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> lennysCoins = {2, 5, 1};
    vector<int> fredsCoins = {0, 4, 4};
    vector<int> values = {86, 144, 968};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -2598;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> lennysCoins = {5, 5, 3};
    vector<int> fredsCoins = {2, 2, 1};
    vector<int> values = {921, 445, 804};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 6331;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> lennysCoins = {2, 4, 4};
    vector<int> fredsCoins = {5, 1, 1};
    vector<int> values = {480, 984, 752};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 4864;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> lennysCoins = {5, 5, 3};
    vector<int> fredsCoins = {0, 5, 5};
    vector<int> values = {307, 607, 991};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -1228;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> lennysCoins = {2, 4, 5};
    vector<int> fredsCoins = {5, 4, 1};
    vector<int> values = {182, 135, 344};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 1127;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> lennysCoins = {4, 1, 0};
    vector<int> fredsCoins = {0, 3, 5};
    vector<int> values = {202, 337, 62};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -714;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> lennysCoins = {0, 5, 1};
    vector<int> fredsCoins = {4, 3, 5};
    vector<int> values = {515, 140, 89};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -2315;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> lennysCoins = {1, 2, 3};
    vector<int> fredsCoins = {2, 5, 5};
    vector<int> values = {816, 587, 654};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -5484;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> lennysCoins = {2, 5, 3};
    vector<int> fredsCoins = {0, 1, 2};
    vector<int> values = {194, 111, 749};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 2247;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> lennysCoins = {2, 0, 1};
    vector<int> fredsCoins = {4, 2, 5};
    vector<int> values = {998, 794, 311};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -5654;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> lennysCoins = {5, 5, 4};
    vector<int> fredsCoins = {1, 3, 4};
    vector<int> values = {611, 1, 53};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 2501;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> lennysCoins = {5, 0, 4};
    vector<int> fredsCoins = {5, 4, 1};
    vector<int> values = {476, 726, 266};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -3444;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> lennysCoins = {4, 5, 0};
    vector<int> fredsCoins = {1, 5, 1};
    vector<int> values = {620, 88, 124};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 1624;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> lennysCoins = {5, 1, 0};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {158, 900, 268};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -5462;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> lennysCoins = {3, 4, 4};
    vector<int> fredsCoins = {5, 4, 4};
    vector<int> values = {537, 989, 879};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -1611;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> lennysCoins = {2, 1, 3};
    vector<int> fredsCoins = {3, 1, 0};
    vector<int> values = {389, 192, 484};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 1551;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> lennysCoins = {2, 0, 0};
    vector<int> fredsCoins = {1, 3, 5};
    vector<int> values = {642, 177, 576};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -3522;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> lennysCoins = {2, 3, 5};
    vector<int> fredsCoins = {0, 1, 1};
    vector<int> values = {512, 462, 627};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 4521;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> lennysCoins = {5, 0, 5};
    vector<int> fredsCoins = {5, 5, 1};
    vector<int> values = {500, 501, 608};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> lennysCoins = {0, 5, 1};
    vector<int> fredsCoins = {5, 2, 3};
    vector<int> values = {223, 953, 25};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -992;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> lennysCoins = {4, 5, 5};
    vector<int> fredsCoins = {4, 5, 5};
    vector<int> values = {747, 977, 93};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -465;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1000, 980, 957};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -957;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> lennysCoins = {4, 4, 4};
    vector<int> fredsCoins = {4, 4, 4};
    vector<int> values = {800, 297, 400};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -297;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> lennysCoins = {0, 0, 0};
    vector<int> fredsCoins = {0, 0, 0};
    vector<int> values = {10, 3, 5};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
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
    vector<int> lennysCoins = {1, 3, 5};
    vector<int> fredsCoins = {4, 2, 2};
    vector<int> values = {575, 575, 229};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -458;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> lennysCoins = {4, 2, 0};
    vector<int> fredsCoins = {5, 0, 0};
    vector<int> values = {1, 77, 77};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> lennysCoins = {3, 5, 1};
    vector<int> fredsCoins = {1, 1, 5};
    vector<int> values = {404, 303, 404};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
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
    vector<int> lennysCoins = {0, 1, 1};
    vector<int> fredsCoins = {0, 1, 1};
    vector<int> values = {10, 5, 1};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> lennysCoins = {0, 0, 0};
    vector<int> fredsCoins = {0, 0, 0};
    vector<int> values = {1000, 352, 283};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {3, 2, 1};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 100, 10};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -19;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 100, 11};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -20;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 1, 1000};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> lennysCoins = {4, 5, 4};
    vector<int> fredsCoins = {5, 4, 4};
    vector<int> values = {454, 140, 846};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -560;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> lennysCoins = {5, 4, 5};
    vector<int> fredsCoins = {5, 5, 4};
    vector<int> values = {454, 140, 846};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 560;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1000, 100, 10};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -190;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 2, 3};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {121, 1, 11};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -20;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 100, 1000};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -109;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> lennysCoins = {4, 5, 5};
    vector<int> fredsCoins = {5, 4, 5};
    vector<int> values = {100, 753, 100};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> lennysCoins = {4, 4, 3};
    vector<int> fredsCoins = {4, 3, 4};
    vector<int> values = {100, 753, 100};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 4, 5};
    vector<int> values = {1, 15, 1000};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {100, 100, 100};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
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
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 980, 37};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -46;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> lennysCoins = {4, 5, 3};
    vector<int> fredsCoins = {2, 5, 5};
    vector<int> values = {16, 545, 128};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -416;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> lennysCoins = {5, 5, 5};
    vector<int> fredsCoins = {5, 5, 5};
    vector<int> values = {1, 30, 1000};
    MoneyGame* pObj = new MoneyGame();
    clock_t start = clock();
    int result = pObj->play(lennysCoins, fredsCoins, values);
    clock_t end = clock();
    delete pObj;
    int expected = -39;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10667&pm=6802
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
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
//typedef long long __int64;
 
class MoneyGame
{
public:
  vector<int> A,C;
  int f[11][11][11][11][11][11];
  int solve(vector<int> C1,vector<int> C2,vector<int> C)
  {
    int &ret=f[C1[0]][C1[1]][C1[2]][C2[0]][C2[1]][C2[2]];
//    printf("%d %d %d %d %d %d %d %d %d\n",C1[0],C1[1],C1[2],C2[0],C2[1],C2[2],C[0],C[1],C[2]);
    if (ret!=-1)
      return ret;
    ret=-C2[0]*A[0]-C2[1]*A[1]-C2[2]*A[2];
    for (int i=0;i<3;i++) if (C1[i]>0)
    {
      C1[i]--;
      C[i]++;
      for (int x=0;x<=C[0];x++) if (x*A[0]<A[i])
        for (int y=0;y<=C[1];y++) if (x*A[0]+y*A[1]<A[i])
          for (int z=0;z<=C[2];z++) if (x*A[0]+y*A[1]+z*A[2]<A[i])
          {
            C[0]-=x;
            C[1]-=y;
            C[2]-=z;
            C1[0]+=x;
            C1[1]+=y;
            C1[2]+=z;
            int t=-solve(C2,C1,C);
            if (t>ret)
              ret=t;
            C1[0]-=x;
            C1[1]-=y;
            C1[2]-=z;
            C[0]+=x;
            C[1]+=y;
            C[2]+=z;
          }
      C1[i]++;
      C[i]--;
    }
    return ret;
  }
  int play(vector<int> C1, vector <int> C2, vector <int> _A)
  {
    C.clear();
    for (int i=0;i<3;i++)
      C.push_back(0);
    A=_A;
    memset(f,255,sizeof(f));
    int ret=solve(C1,C2,C);
    return ret;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/