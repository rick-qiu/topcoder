/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11029
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

class TheCoffeeTimeDivTwo {
public:
    int find(int n, vector<int> tea);
};

int TheCoffeeTimeDivTwo::find(int n, vector<int> tea) {
    int ret;
    return ret;
}


int test0() {
    int n = 2;
    vector<int> tea = {1};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    vector<int> tea = {2, 1};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 15;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 47;
    vector<int> tea = {1, 10, 6, 2, 4};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 891;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 9;
    vector<int> tea = {3, 1};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 7;
    vector<int> tea = {3, 2};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 5;
    vector<int> tea = {4, 2, 1, 5};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 49;
    vector<int> tea = {10, 16, 40, 41, 27, 47, 26, 43, 21, 34, 22, 13, 31, 17, 4, 23, 7, 9, 36, 28, 20, 18, 8, 49, 11, 45, 15, 38, 25, 35, 48, 6, 32, 1, 3, 39, 24, 42, 2, 37, 29, 5};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 953;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 44;
    vector<int> tea = {19, 29, 7, 41, 26, 39};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 863;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 39;
    vector<int> tea = {27, 29, 16, 18, 28, 4, 7, 39, 1, 25, 37, 33, 26, 9, 19, 14, 38, 10, 35, 24, 3, 22, 12, 15, 17, 2, 20, 34, 36, 30, 5, 6, 13, 21};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 726;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 22;
    vector<int> tea = {4, 5, 10, 11, 9, 12, 15, 19, 13, 3, 6, 1, 22, 17, 14};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 386;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 43;
    vector<int> tea = {19, 28, 34, 11, 4, 35, 10, 13, 12, 31, 30, 18, 5, 39, 33, 2, 32, 27, 43, 1, 36, 42, 8, 15, 26, 16, 14, 41, 17, 29, 37, 25, 38, 23, 22, 3, 24, 9, 40, 20, 7, 6};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 845;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 24;
    vector<int> tea = {9, 21, 7, 19, 13, 10, 18, 15, 22, 1, 20, 12, 23, 4, 5, 16, 11, 17};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 424;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 54;
    vector<int> tea = {21, 10, 48};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 1183;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 18;
    vector<int> tea = {7, 1};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 338;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 86;
    vector<int> tea = {53, 42, 17, 71, 35, 39, 59, 52, 5, 41};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 2193;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 37;
    vector<int> tea = {4, 1, 25, 31, 3, 36, 34, 32, 6, 29, 24, 23, 7, 27, 33, 19};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 696;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 82;
    vector<int> tea = {81, 69, 15, 27, 63, 38, 79, 49};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 2057;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 94;
    vector<int> tea = {7, 33, 31, 58, 45, 65, 38, 6, 3, 53, 63, 39, 43, 91, 89, 73, 24, 47, 67, 55, 1, 71, 57, 56, 37, 80, 51, 10, 77, 21, 59, 44, 82, 87, 70, 28, 19, 52, 85, 49, 11, 81, 83};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 2515;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 80;
    vector<int> tea = {43};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 2001;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 35;
    vector<int> tea = {31, 4, 12, 19, 9, 25, 18, 16, 33, 10, 30, 2, 17, 6, 13, 23, 8, 35, 34, 20, 7, 27, 29, 21, 11, 5, 32, 28, 1, 22, 15, 24, 26, 14, 3};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 28;
    vector<int> tea = {23, 15, 28, 6, 25, 7, 24, 1, 18, 21, 27, 20, 17, 22, 26, 11, 4, 14, 5, 12, 13, 19, 2, 16, 10, 9, 8, 3};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 30;
    vector<int> tea = {9, 29, 30, 16, 4, 26, 21, 5, 10, 2, 19, 1, 20, 6, 25, 8, 3, 14, 18, 11, 23, 13, 15, 12, 27, 28, 22, 17, 7, 24};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 515;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 5;
    vector<int> tea = {1, 4, 3, 2, 5};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 43;
    vector<int> tea = {9, 16, 12, 15, 5, 4, 29, 21, 38, 28, 31, 1, 8, 20, 11, 27, 37, 2, 10, 42, 43, 33, 22, 25, 6, 40, 18, 39, 35, 26, 34, 7, 14, 23, 24, 3, 17, 30, 32, 36, 13, 19, 41};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 809;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 906;
    vector<int> tea = {219, 163, 364, 709, 129, 611, 205, 867, 859, 549, 628, 715, 431, 605, 256, 745, 97, 255, 733, 424, 145, 673, 471, 139, 643, 169, 629, 228, 470, 805, 1, 157, 598, 747, 671, 475, 409, 109, 264, 562, 697, 543};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 128570;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 154;
    vector<int> tea = {127, 71, 85, 103, 39, 14, 111, 72, 19, 40, 113, 151, 147, 7, 137, 83, 65, 78, 148, 93, 58, 121, 75, 135, 55, 128, 25, 144, 99, 131, 50, 57, 37, 53, 36, 115, 26, 51, 97, 88};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 5365;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 902;
    vector<int> tea = {861, 452};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 128198;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 641;
    vector<int> tea = {392, 96, 631, 125, 409};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 67018;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 960;
    vector<int> tea = {629, 681, 265, 661, 950, 475, 193, 111, 425};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 143976;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 222;
    vector<int> tea = {104};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 9881;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 467;
    vector<int> tea = {240, 332, 16, 208, 382, 130, 394, 354, 162, 403, 219, 89, 50, 356, 134, 363, 214, 237, 229, 138, 352, 440, 30, 20, 85, 119, 203, 206, 183, 150, 284, 76, 391, 390, 235, 11, 451, 236, 288, 380, 326, 370, 438, 287, 142};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 37128;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 632;
    vector<int> tea = {599, 99, 225, 402, 289, 48, 425, 89, 307, 333, 115, 352, 497, 9, 93, 241, 1, 412, 21, 103, 73, 493, 300, 137, 627, 610, 521, 45, 227, 384, 575, 184, 205};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 64987;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 519;
    vector<int> tea = {57, 69, 340, 264, 248, 83, 265, 437, 147, 325, 406, 271, 104, 112, 470, 438, 349, 212, 241, 448, 425, 66, 443, 139, 343, 436, 312, 344, 58, 238, 49, 490, 166, 214, 65};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 45055;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 526;
    vector<int> tea = {409, 213, 137, 321};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 46240;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 906;
    vector<int> tea = {1, 12, 40, 5, 6, 29, 31, 36, 23, 18, 26, 30, 19, 38, 35, 37, 25, 8, 4, 15, 7, 39, 11, 27, 14, 13, 21, 10, 2, 16, 22, 34, 32, 42, 41, 3, 28, 33, 24, 20, 9, 17};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 127952;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 314;
    vector<int> tea = {4, 10, 16, 8, 3, 15, 6, 11, 5, 1, 18, 14, 2, 7, 13, 19, 17, 12, 9};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 17852;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 121;
    vector<int> tea = {5, 4, 6, 9, 1, 11, 3, 7, 13, 2, 8, 12, 10};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 3560;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 857;
    vector<int> tea = {7, 1, 9, 15, 5, 2, 12, 14, 10, 3, 13, 16, 18, 6, 11, 17, 4, 8};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 114995;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 398;
    vector<int> tea = {5, 4, 6, 2, 7, 1, 8, 3};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 27352;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 1000;
    vector<int> tea = {444, 455, 483, 448, 449, 487, 490, 479, 466, 489, 469, 473, 462, 481, 478, 480, 488, 451, 447, 458, 486, 482, 454, 470, 457, 456, 464, 453, 445, 459, 465, 477, 475, 485, 484, 446, 471, 476, 467, 463, 452, 460, 450, 472, 468, 461, 474};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 154894;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 1000;
    vector<int> tea = {607, 227, 545, 365, 226, 369, 269, 125, 437, 590, 811, 135, 523, 31, 573, 799, 611, 217, 252, 852, 199, 744, 563, 291, 165, 529, 501, 41, 749, 796, 134, 7, 357, 417, 388, 73, 868, 873, 61, 981, 784, 137, 681, 434, 677, 605, 907};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155600;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 1000;
    vector<int> tea = {681, 105, 576, 313, 414, 943, 89, 585, 279, 181, 310, 253, 201, 883, 85, 239, 481, 997, 401, 191, 701, 686, 901, 23, 2, 803, 97, 748, 396, 385, 979, 255, 685, 271, 345, 793, 601, 900, 795, 985, 831, 565, 111, 517, 45, 948, 277};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155542;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 1000;
    vector<int> tea = {897, 737, 25, 579, 37, 116, 719, 73, 553, 189, 876, 479, 885, 997, 513, 373, 655, 657, 541, 119, 914, 971, 219, 806, 793, 506, 701, 770, 798, 619, 835, 236, 241, 31, 915, 251, 629, 617, 267, 27, 270, 105, 636, 429, 751, 265, 424};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155580;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 1000;
    vector<int> tea = {595, 887, 885, 961, 601, 641, 482, 232, 876, 361, 517, 561, 753, 401, 281, 799, 433, 877, 681, 717, 556, 851, 713, 376, 745, 853, 633, 161, 701, 463, 353, 551, 751, 156, 881, 781, 445, 89, 358, 499, 309, 725, 818, 571, 941, 669, 55};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155524;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 1000;
    vector<int> tea = {109, 848, 271, 580, 846, 741, 26, 843, 785, 605, 521, 301, 841, 463, 748, 845, 667, 209, 201, 551, 516, 1, 440, 125, 648, 663, 177, 278, 353, 651, 161, 981, 961, 685, 295, 988, 137, 159, 817, 81, 676, 486, 245, 151, 734, 266, 473};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155500;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 1000;
    vector<int> tea = {922, 761, 257, 31, 869, 356, 601, 461, 117, 661, 218, 521, 689, 911, 519, 553, 479, 804, 8, 225, 124, 863, 821, 101, 276, 476, 368, 481, 313, 833, 741, 189, 401, 153, 216, 305, 692, 537, 876, 538, 358, 370, 157, 817, 341, 205, 97};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155468;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 47;
    vector<int> tea = {1, 10, 6, 2, 4};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 891;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 15;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 2;
    vector<int> tea = {1};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 47;
    vector<int> tea = {1, 10, 6, 2, 4, 8};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 891;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 995;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 153133;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 100;
    vector<int> tea = {1, 2, 3, 4, 88, 99, 33};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 2771;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1000;
    vector<int> tea = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 87, 88, 90, 96, 105};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 154724;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 47;
    vector<int> tea = {1, 5, 32, 23, 2, 34, 35, 21};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 956;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 1000;
    vector<int> tea = {1, 10, 6, 2, 4, 800, 325, 453, 564};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155612;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 20;
    vector<int> tea = {1, 3, 6, 8, 10, 12, 13, 14, 15, 17};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 364;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 1000;
    vector<int> tea = {500, 90, 1000, 1};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 156172;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 15;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 9, 14, 11};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 15;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 15};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 1000;
    vector<int> tea = {21, 42, 63, 84, 105, 126, 147, 168, 189, 210, 231, 252, 273, 294, 315, 336, 357, 378, 399, 420, 441, 462, 483, 504, 525, 546, 567, 588, 609, 630, 651, 672, 693, 714, 735, 756, 777, 798, 819, 840, 861, 882, 903, 924, 945, 966, 987};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155502;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 50;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 996;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 15;
    vector<int> tea = {8, 9, 10, 11, 14, 12, 15, 13};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 1000;
    vector<int> tea = {50, 90, 1000, 1};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 156300;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 50;
    vector<int> tea = {1, 2, 9, 7, 5, 6, 8, 12, 15, 18, 43, 50};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 1052;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 207;
    vector<int> tea = {1, 2, 3, 4, 200, 201, 202, 203, 204, 205, 206};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 8580;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 9;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 15;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 13};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 259;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 15;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 14, 9, 12, 11};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 17;
    vector<int> tea = {2, 3, 7, 9, 13, 1, 5};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 19;
    vector<int> tea = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 356;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 990;
    vector<int> tea = {1, 2, 3, 4, 10, 13, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 100, 101, 105, 112, 550, 551, 900, 901, 120, 121, 122, 129, 130, 888};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 152324;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 20;
    vector<int> tea = {20, 19, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 47;
    vector<int> tea = {29, 46, 39, 5, 33, 35, 41, 22, 20, 31, 34, 6, 4, 24, 30, 28, 36, 11, 9, 8, 2, 43, 19, 27};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 972;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 12;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 1000;
    vector<int> tea = {11, 12, 13, 7, 8, 9, 23, 53, 64, 65, 66, 67, 68, 32, 33, 37, 35, 343, 234, 235, 236, 238, 240, 242, 244, 873, 897, 674, 888, 889, 893, 833, 787, 973, 999, 1000};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 155544;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 16;
    vector<int> tea = {5};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 10;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    TheCoffeeTimeDivTwo* pObj = new TheCoffeeTimeDivTwo();
    clock_t start = clock();
    int result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22760848&rd=14158&pm=11029
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <utility> 
#include <cstdlib> 
#include <cstdio> 
#include <cctype> 
#include <cmath> 
#include <functional> 
#include <algorithm> 
#include <numeric> 
#include <string> 
#include <vector> 
#include <queue> 
#include <stack> 
#include <list> 
#include <map> 
#include <set> 
using namespace std; 
 
#define FOR(i,a,b)  for(int i=(a);i<(b);++i) 
#define F(i,a)      FOR(i,0,a) 
#define ALL(x)      x.begin(),x.end() 
#define PB          push_back 
#define S           size() 
 
int busca(vector<int> v,int n) 
{ 
    int pos=-1; 
        for(int k=0;k<n;k++) 
        if(v[k]==0)pos=k; 
 
       return pos; 
} 
 
class TheCoffeeTimeDivTwo 
        { 
        public:  
        int find(int n, vector <int> tea)  
            { 
    int ban,sum=0,z=0; 
         
        vector<int>v(n,0); 
         
        sort(ALL(tea)); 
         
        int pos=busca(v,n); 
         
        if (binary_search (tea.begin(), tea.end(), pos+1))ban=0; 
        else ban=1; 
         
        if(tea[tea.size()-1]==n)ban=0; 
 
        while(1) 
        { 
 
        sum+=47; 
         
        sum+=n; 
         
        int cup=7; 
 
        for(int c=n-1;c>=0;c--) 
        { 
 
        if(ban==0) 
        { 
        if (binary_search (tea.begin(), tea.end(), c+1)){v[c]=1;cup--;sum+=4;} 
        } 
 
        if(ban==1) 
        { 
        if (binary_search (tea.begin(), tea.end(), c+1))z++; 
        else {v[c]=1;cup--;sum+=4;} 
        } 
 
        if(cup==0){sum+=(c+1);break;} 
        sum++; 
        } 
         
    pos=busca(v,n); 
         
        if (binary_search (tea.begin(), tea.end(), pos+1))ban=0; 
        else ban=1; 
 
        n=pos+1; 
         
        if(pos==-1)break; 
 
        } 
 
        return sum; 
             
            } 
         
 
        }; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/