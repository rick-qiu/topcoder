/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11028
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

class TheCoffeeTimeDivOne {
public:
    long find(int n, vector<int> tea);
};

long TheCoffeeTimeDivOne::find(int n, vector<int> tea) {
    long ret;
    return ret;
}


int test0() {
    int n = 2;
    vector<int> tea = {1};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 108;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 59;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 261;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 891;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 154;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 142;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 130;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 953;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 863;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 726;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 386;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 845;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 424;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 1183;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 338;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 2193;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 696;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 2057;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 2515;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 2001;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 585;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 440;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 515;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 77;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 809;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 128570;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 5365;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 128198;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 67018;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 143976;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 9881;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 37128;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 64987;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 45055;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 46240;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 127952;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 17852;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 3560;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 114995;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 27352;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 154894;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 155600;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 155542;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 155580;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 155524;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 155500;
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
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 155468;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 757149;
    vector<int> tea = {278760, 577189, 189145, 226279, 180288, 558401, 457213, 211461, 597007, 577887, 170056, 231379, 173249, 586949, 225124, 539671, 689593, 47895, 39820, 303355, 57598, 115228, 121590, 69274, 625381, 297823, 217391, 396675, 51638, 654781, 496507, 477367, 498736, 68055, 86429, 226384, 165802, 341890, 347958, 151306, 745084, 286065};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 81905859139;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 16177770;
    vector<int> tea = {3953997, 14034575, 13458310, 6713667, 6127747, 14786801, 1740977, 6698337, 9815509, 9859739, 942916, 10073431, 12894853, 8618765, 4276273, 3550381, 14816731, 10650403, 3300373, 9574006, 9630391, 12197525, 250903, 1267942, 12088302, 2288971, 7919301, 5819382, 3579661, 11171725, 5731487, 14555683, 9782928, 13883317, 15797443, 7591809, 12635781, 11927892, 2114611, 5353692};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 37388809134855;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 38997202;
    vector<int> tea = {37195805, 18368780, 14085414, 33216865, 33763105, 5508788, 16901636, 18112478, 28314351, 32326247, 13149048, 23377805, 28945455, 27048712, 31154866, 8741597, 1872873, 3513251, 15366199, 11813127, 23261623, 28359157, 4476636, 14190784, 16663369, 6526001, 13948969, 14728659, 31781591, 36526815, 3214894, 37455075, 26576809, 1397574, 16549654, 8980027, 29709250, 17832065, 31956517, 8539355, 17305555, 16965905, 31143011, 23294729};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 217255026532410;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 41111998;
    vector<int> tea = {33999096, 21993828, 36624855, 21208253, 34528983, 27965183, 10370956, 32181292, 21456311, 15780013, 22924689, 30879001, 4050376, 13921159, 30314885, 1757001, 1794180, 4756259, 2269473, 4660065, 28533564, 15362003, 28435257, 28241307, 38712323, 7176857, 36905331, 39310675, 2445525, 4600101, 6854951, 1054253, 32981458};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 241457137700137;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 5705578;
    vector<int> tea = {4879531, 1840327, 5103329, 5583897, 5490629, 936312, 4071360, 4808817, 2056065, 626005, 3283230, 884435, 4400521, 1142059, 3967602, 2003053, 1172555};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 4650590071692;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 38830986;
    vector<int> tea = {18936967, 636588, 2310703, 3695107, 10363442, 21158251, 29160583, 22438231, 21960823, 37749217, 2262014, 8821247, 29152429, 7724542, 14689331, 25936759, 29941836, 4688554, 28761175, 36193701, 11821696, 4992943, 2156752, 3544450, 13114421, 12101347, 2115811};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 215406986109378;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 4323902;
    vector<int> tea = {342159, 1944021, 2099570, 832437, 3666059, 1341549, 3824974, 1843763, 2351761, 620371, 1041131, 3125431, 2429581, 3399752, 349891, 2994889, 2172679};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 2670929565445;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 39036502;
    vector<int> tea = {2109799, 8285370, 17889915, 21290631, 35814051, 18952813, 5737050, 2604576, 4391864, 3040029, 18125363, 15466045, 32276978, 13909087, 30183252, 35342729, 12205573, 1511707, 23911090, 6924001, 26688851, 10075077, 38458491, 6762345, 38040521, 10674164, 35669743, 34021879, 840383, 466318};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 217693135713898;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 603206;
    vector<int> tea = {518583, 154531, 118081, 542311, 492029, 578914, 293927, 568698, 189889, 235399, 518123, 104569, 510953, 382430, 456988, 109336, 428966, 113397, 49279, 156385, 5635, 481242, 585064, 171553, 225701, 232119, 358393, 114661, 71880, 40891, 308533, 242932, 340319, 57870, 119141, 147194, 354880, 395126, 109445, 346389, 87403, 87519, 417431, 27167, 16195, 590381};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 51987209459;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 31526973;
    vector<int> tea = {14920927, 17141059, 11911610, 24035479, 26708845, 2632073, 12503173, 28727691, 18893877, 2764319, 19835650, 18460788, 23909297, 1674403, 9836896, 8049313, 27206171, 30059041, 3405637, 31120567, 7908627, 18709213, 18444283, 28760323, 16211863, 31430091, 17081714, 7203652};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 141993254549256;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 30692554;
    vector<int> tea = {27883037, 13013029, 7619241, 5108985, 29465463, 157513, 15184710, 24233293, 8831795};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 134576515554422;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 7421662;
    vector<int> tea = {4735923, 3372872, 6227031, 4993305, 6108939, 74619, 1929523, 5772235, 4534801, 1503853, 6490509, 6233909, 1068969, 6436563, 2414209, 4653309, 5902188, 4628467, 6081695, 3445302, 3647585, 1932801, 2941883, 1531277, 6640254, 2445601, 4178597, 7142761, 5151899, 1082706, 1704339, 2723983, 787633, 1043347, 3002941, 4067087, 6916307, 1497787, 7358741, 4448645, 1459811, 2722411, 150683, 2634635, 6234987, 7019413, 2187773};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 7868816849182;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 11416698;
    vector<int> tea = {4328845, 2510773, 2114041, 905925, 4287127, 4137603, 5716690, 4213536, 5170251, 680295, 9396295, 5011039, 10028089, 2586561, 10079041, 5873068, 9738271, 6027530, 1192137, 2455039, 11082964, 8224210, 1024003, 1184944, 3434881, 4320823, 10944597, 297073, 151777, 10995955, 10886149, 7947457, 5028071, 7658489, 8954029, 5130856, 8740347, 7918778, 10054883, 1166365, 7580893};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 18620286365663;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 44777777;
    vector<int> tea = {44444444, 44444455, 44444483, 44444448, 44444449, 44444487, 44444490, 44444479, 44444466, 44444489, 44444469, 44444473, 44444462, 44444481, 44444478, 44444480, 44444488, 44444451, 44444447, 44444458, 44444486, 44444482, 44444454, 44444470, 44444457, 44444456, 44444464, 44444453, 44444445, 44444459, 44444465, 44444477, 44444475, 44444485, 44444484, 44444446, 44444471, 44444476, 44444467, 44444463, 44444452, 44444460, 44444450, 44444472, 44444468, 44444461, 44444474};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436166088264;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 44777777;
    vector<int> tea = {34067395, 37379061, 10173537, 25260395, 32746695, 18923837, 40192967, 33291080, 23526686, 33766899, 34554614, 21417563, 8670529, 12313093, 26463153, 29700353, 26239573, 9756910, 3349779, 35766291, 41768588, 15857285, 11780479, 597007, 27196698, 28785969, 34210960, 32794367, 8274533, 40020264, 17368257, 36629217, 3615545, 12606998, 37649096, 14930497, 36094468, 23887983, 37215529, 26233895, 40873981, 36057904, 4890852, 33557677, 32709491, 42959933, 33527172};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436185911204;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 44777777;
    vector<int> tea = {37931775, 29331901, 20671799, 2239354, 29980765, 42930924, 180965, 39202255, 44362900, 42392509, 11659472, 105948, 30956615, 16827661, 25869882, 18573847, 2442179, 28718018, 19181140, 21621653, 23736016, 44287268, 5362354, 5133717, 7557375, 16990247, 13745927, 9904281, 4412030, 43110748, 10743328, 44195982, 21955842, 26137201, 3980212, 3888838, 31051111, 8578493, 20844963, 19421791, 33773543, 8465310, 21154637, 35811815, 3662225, 11455889, 4401688};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436183210786;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 44777777;
    vector<int> tea = {43172025, 8980027, 34773495, 7085377, 36982251, 10582332, 23635197, 27381065, 20059665, 20188892, 35456763, 6974128, 40491401, 35814875, 2251991, 36972112, 20444159, 22533776, 30391025, 36729878, 32029634, 29960316, 9856897, 8187415, 34964698, 23467534, 12051490, 43717004, 23164880, 33355950, 15487562, 30156075, 7768261, 26175942, 8423952, 38371241, 1993265, 26001016, 7072532, 15405770, 39118277, 21291743, 16568795, 43241705, 21383690, 32840807, 4476636};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436179541726;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 44777777;
    vector<int> tea = {13448387, 5557656, 8619529, 19799286, 9998377, 13498904, 33454132, 13537602, 41919719, 19248002, 25097506, 41585968, 15043784, 5865824, 26644673, 7434791, 22493099, 43409856, 39206421, 13712171, 32034671, 16134501, 7245756, 611605, 1917161, 18147937, 42860571, 4778581, 13839616, 15199814, 338522, 12684227, 3025309, 13772401, 5407933, 34187914, 14762599, 30092567, 13255908, 20787091, 36600877, 29448487, 1871197, 25707784, 41169319, 28976353, 10440641};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436174257794;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 44777777;
    vector<int> tea = {38263974, 15957849, 11942308, 28657400, 39074123, 35482746, 25331879, 32312137, 6473182, 17563001, 1767085, 11021906, 6121932, 24284460, 17011103, 15185845, 20932332, 23376135, 16300274, 386001, 7146908, 5699957, 21984540, 12120078, 4443890, 20328964, 940479, 40337384, 7818981, 37685196, 15707374, 2934266, 40526595, 13200033, 24282468, 10263327, 15561627, 4764301, 372993, 10599486, 11073109, 6172194, 12781494, 43436159, 35396335, 3946967, 39648972};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436180862458;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 44777777;
    vector<int> tea = {20246117, 18011097, 28633653, 1882660, 36488940, 603205, 23634370, 6112288, 25077115, 6283325, 44173739, 8339324, 33215699, 9495570, 24586758, 43862587, 26998479, 22143581, 3262462, 14279750, 18841257, 37306519, 10822360, 29159744, 17316477, 3460867, 29582662, 28000452, 43568052, 4716135, 19492481, 37654654, 12533454, 10898267, 29872591, 18903751, 37190692, 3262047, 44328925, 42422222, 6092145, 9760741, 8146760, 11703277, 13400322, 8296168, 7656526};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436178234532;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 44777777;
    vector<int> tea = {19421371, 30415086, 1646353, 12786218, 7113745, 17016767, 852601, 39076918, 21233271, 10094452, 35036635, 34071294, 21355420, 26941960, 33424900, 12170543, 32471617, 35532938, 33786626, 31703229, 23219676, 23318504, 16753353, 14993130, 25705788, 43594427, 8288246, 10927094, 36441279, 24455516, 2757482, 17503147, 37435123, 37398047, 30765460, 25960816, 8712129, 30916535, 19675912, 2517441, 35412161, 1156629, 3461822, 29424863, 24486175, 38282536, 43755429};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436176588124;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 44777777;
    vector<int> tea = {39985572, 7915400, 23665630, 44299190, 21678156, 7421660, 6965692, 6392449, 3647585, 24663208, 17039481, 14341241, 23762773, 24276707, 39048278, 19624339, 34124905, 194888, 13161039, 34690327, 43012846, 6647151, 14182232, 25518357, 19583349, 7496281, 21077233, 22862803, 17897857, 26713631, 7358741, 37802086, 44490368, 15290161, 41266009, 25439126, 17041792, 11830146, 24491787, 16232135, 36548859, 21291405, 20181604, 7619241, 42230900, 9875744, 10157820};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436179500590;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 44777777;
    vector<int> tea = {3155399, 26055722, 28464559, 9429128, 16629609, 10885604, 2073959, 4213536, 7884905, 2510773, 28860926, 17726622, 32106146, 4913347, 2114041, 17113419, 1929807, 11416692, 13472078, 30752174, 40261193, 18056018, 11857071, 43867795, 2871421, 44535404, 6322708, 39380950, 1498285, 40489444, 40449857, 17437654, 3319982, 34608560, 14251334, 2272555, 42851952, 11920767, 35903405, 21563136, 11547889, 22765173, 18205767, 11692183, 33816366, 1192137, 12322623};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436180497834;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 44777777;
    vector<int> tea = {32746695};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436196828621;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 44777771;
    vector<int> tea = {26233913};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436108901878;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 44777772;
    vector<int> tea = {35766291};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436138036752;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 44777773;
    vector<int> tea = {597007};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436090540204;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 44777777;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1212, 131, 1412, 15, 16, 17, 18542323, 19, 20, 21123, 22, 23412, 24, 2512312, 26, 27, 28, 29, 30, 31, 32123, 331, 3411, 3523, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436171738476;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 44777666;
    vector<int> tea = {44777666, 22388833, 14925888, 11194416, 8955533, 7462944, 6396809, 5597208, 4975296, 4477766, 4070696, 3731472, 3444435, 3198404, 2985177, 2798604, 2633980, 2487648, 2356719, 2238883, 2132269, 2035348, 1946855, 1865736, 1791106, 1722217, 1658432, 1599202, 1544057, 1492588, 1444440, 1399302, 1356898, 1316990, 1279361, 1243824, 1210207, 1178359, 1148145, 1119441, 1092138, 1066134, 1041341, 1017674, 995059, 973427, 364046};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286434782436444;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 44777777;
    vector<int> tea = {44777775, 44777773, 44777771, 1, 2, 3, 4, 5, 6, 8, 9, 2222, 2223, 4444, 4445};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436191862233;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 44000000;
    vector<int> tea = {1};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 276571944000084;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 2;
    vector<int> tea = {2};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 108;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 44777777;
    vector<int> tea = {1};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691433;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 44777777;
    vector<int> tea = {37, 119, 381231, 4444, 4445, 4446, 99919, 111111, 111113, 111115, 3334244, 3334245, 3334246, 44777774, 44777775, 44777776, 44777777};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436176749192;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 44777777;
    vector<int> tea = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436159386315;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 44777777;
    vector<int> tea = {44777777};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436217453333;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 44777777;
    vector<int> tea = {4452545};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436148324365;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 44777777;
    vector<int> tea = {1, 1405124, 38555837, 9071126, 12220808, 30075192, 14270287, 7244842, 16668007, 19060726, 3672323, 21260223, 3159938, 37651593, 2674319, 13133169, 41073971, 16474035, 34687773, 14683777, 31240335, 37800100, 32149677, 13730716, 7282025, 14754119, 20867361, 11044603, 36971955, 12494320, 21572425, 6680170, 39150779, 12864396, 34602174, 43723704, 22054309, 39759801, 37043609, 908850, 6316185, 6425801, 22425059, 970597, 26550290, 44777775, 44777777};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436181441802;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 44777777;
    vector<int> tea = {1, 10, 20};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691414;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 44777777;
    vector<int> tea = {6, 8, 9, 10, 11, 10738196, 13493816, 23902015, 40369799, 44777765, 44777768, 44777770, 44777773};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436175261908;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 44777777;
    vector<int> tea = {44777000};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436217452001;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 44777777;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691426;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 10000;
    vector<int> tea = {1, 4, 6, 8, 10, 12, 15, 18, 20};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 14402946;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 44777777;
    vector<int> tea = {14831350, 687683, 28414123, 22386745, 42327744, 44144190, 35937062, 23321481, 22495752, 39501407, 15724380, 7594501, 12012099, 13165813, 22868948, 2912165, 21967204, 9454244, 29215943, 5754410, 3627457, 42348376, 20275434, 16558883, 1105408, 32321070, 34923120, 34062306, 21067556, 35062369, 3853105, 31727224, 2920941, 5592068, 27338727, 33024564, 38451583, 15026988, 18687483, 38438801, 10135522, 2549612, 12244869, 6810047, 11912278, 29941521, 13405731};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436182132354;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 44777777;
    vector<int> tea = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 4657, 4658, 4659, 4660, 4661, 4662, 4663, 4665, 4664};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140720746;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 44777777;
    vector<int> tea = {2326791, 36653481, 29864085, 24192551, 43064262, 33037128, 42837780, 26795520, 18462237, 3857331, 13136570, 14554035, 9762576, 29246825, 3345598, 25639033, 19085628, 30806852, 42146409, 16123319, 2147614, 37275922, 29844879, 28734661, 4593797, 31204751, 12998651, 20531297, 25148553, 38606878, 42713234, 43742876, 28997714, 1279453, 23166925, 23683984, 6182704, 41415288, 31471414, 7536201, 14722775, 26503344, 27657952, 10420738, 10791478, 39089513, 3979796};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436177200226;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 44777777;
    vector<int> tea = {1, 2122, 343, 4, 5, 6, 7, 8, 9, 34510, 345411, 15642, 164643, 14, 1345, 16, 17, 18, 19, 20, 23451, 2452, 2343, 25444, 2325, 256, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436141209682;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 44777777;
    vector<int> tea = {13513578, 7295701, 1167567, 42368665, 15270581, 17467166, 16662689, 43842474, 37185727, 5575551, 30045344, 34880701, 18819390, 35888970, 36520300, 9726722, 31799861, 41085960, 33056952, 31154765, 39063354, 15605212, 42877544, 33783790, 21633227, 5183063, 36346116, 13898156, 2167393, 3659481, 21187691, 8326920, 14135043, 22816201, 3439218, 8756968, 20249045, 28065422, 18954516, 23749500, 24802287, 10239457, 4823403, 29572508, 5347836, 1512492, 5079448};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436181304614;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 44777777;
    vector<int> tea = {5};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691439;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 44777777;
    vector<int> tea = {3481038, 14389286, 37562599, 36585715, 30994775, 12639286, 28987820, 24758717, 35857522, 22338079, 20542230, 5003728, 27985329, 9815332, 2597345, 3109289, 38308118, 44569206, 6282723, 33794740, 37500541, 34109734, 32086463, 32174776, 28240429, 23005484, 4989943, 40295902, 26867028, 9833567, 36046615, 4726105, 31592511, 29826768, 17147755, 22441931, 23155326, 22636669, 44566343, 11046896, 23340296, 5500665, 1402830, 32210239, 31021891, 42340004, 25209948};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436181987136;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 8;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 144;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 44777777;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691394;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 44777777;
    vector<int> tea = {44777777, 44777776, 44777775, 44777774, 44777773, 44777772, 44777771, 44777770, 44777769, 44777768, 44777767, 44777766, 44777765, 44777764, 44777763, 44777762, 44777761, 44777760, 44777759, 44777758, 44777757, 44777756, 44777755, 44777754, 44777753, 44777752, 44777751, 44777750, 44777749, 44777748, 44777747, 44777746, 44777745, 44777744, 44777743, 44777742, 44777741, 44777740, 44777739, 44777738, 44777737, 44777736, 44777735, 44777734, 44777733, 44777732, 44777731};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436166278660;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 16;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 320;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 40000000;
    vector<int> tea = {1, 2, 3};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 228571897142925;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 44777777;
    vector<int> tea = {1, 2, 3};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691386;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 44000000;
    vector<int> tea = {10000, 100000, 1000000, 1, 11, 10000000, 43000000};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 276572014540033;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 44000000;
    vector<int> tea = {2, 44, 677, 888888, 6654, 4333, 3356666};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 276571949497007;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 9;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 152;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 44777777;
    vector<int> tea = {1, 4455, 457575, 5755455, 7555, 44777777};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436215674706;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 40000000;
    vector<int> tea = {1, 2, 3, 4, 6, 5, 7, 8};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 228571897142927;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 44777777;
    vector<int> tea = {1733688, 11046817, 4830907, 305653, 10414599, 365276, 5931613, 6605456, 10727943, 4401880, 7608856, 2747447, 12312194, 6118998, 4232650, 4633124, 582832, 9542721, 6264245, 8664406, 1081023, 9361994, 9658383, 8933565, 4894148, 1629456, 5685564, 4671967, 9595700, 8590996, 1168543, 5442352, 5347860, 4428424, 8620849, 11509294, 10948693, 2356396, 3210873, 2682237, 2385671, 7768765, 4084039, 12009117, 3948396, 12099262, 1};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436151834544;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 1000000;
    vector<int> tea = {1, 2, 3, 4, 7, 9, 10, 12};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 142868857192;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 25;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 21, 22};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 481;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 44777777;
    vector<int> tea = {1, 10, 6, 2, 4};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691398;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 44777777;
    vector<int> tea = {5548193, 34959605, 22397569, 24905152, 23162815, 18162047, 17426074, 34275126, 11655084, 27482441, 34927359, 34062817, 36054778, 21646974, 43523846, 23541036, 19923821, 13075699, 37768851, 34153233, 18624996, 4470404, 44527335, 15125460, 6815091, 38156958, 26838448, 10687704, 36635, 32954288, 29916723, 30834030, 24774035, 32464857, 23334568, 6553881, 16703115, 21203533, 30408164, 24258006, 13764397, 43791958, 1715468, 10924066, 34018936, 32099528, 7064219};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436181900286;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 12;
    vector<int> tea = {5};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 231;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 7000000;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 7000082000051;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 44777777;
    vector<int> tea = {44777776};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436217453333;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 44777777;
    vector<int> tea = {4};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691437;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 44447777;
    vector<int> tea = {1, 10, 6, 2, 4};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 282229789279961;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 44777777;
    vector<int> tea = {1, 2, 3, 44777777, 44777776, 44777775, 44777774, 44777773, 44777772, 44777771};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436140691386;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 34637969;
    vector<int> tea = {3111043, 13358563, 23688536};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 171398855440268;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 47;
    vector<int> tea = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 940;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 44777777;
    vector<int> tea = {2222222, 2500000, 1111111};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436144024716;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 44777777;
    vector<int> tea = {2, 3, 12, 435, 34, 26435, 243, 1234, 235, 3634, 345, 124, 34569, 823, 8145, 7252, 71239, 41234524, 123, 1992, 5919832, 713, 312348, 1123341, 8676555, 44044044, 44777777, 7777777, 777777, 77777, 7777, 777, 77, 7, 44444444, 4444444, 444444, 4444, 4445, 4446, 4447, 4448, 4449, 4443, 4442};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436180859222;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 15;
    vector<int> tea = {15, 14, 13, 12, 11, 10, 9, 8, 7};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 259;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 44777777;
    vector<int> tea = {1733688, 11046817, 4830907, 305653, 10414599, 365276, 5931613, 6605456, 10727943, 4401880, 7608856, 2747447, 12312194, 6118998, 4232650, 4633124, 582832, 9542721, 6264245, 8664406, 1081023, 9361994, 9658383, 8933565, 4894148, 1629456, 5685564, 4671967, 9595700, 8590996, 1168543, 5442352, 5347860, 4428424, 8620849, 11509294, 10948693, 2356396, 3210873, 2682237, 2385671, 7768765, 4084039, 12009117, 3948396, 12099262, 11460497};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436150828262;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 44777777;
    vector<int> tea = {44777777, 1, 10, 1000, 45631, 1231210, 12340, 44777776};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436204291057;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 8;
    vector<int> tea = {8};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 156;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 44777777;
    vector<int> tea = {1, 44777776};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436217453284;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 4321;
    vector<int> tea = {1, 9, 10, 2, 3, 5};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 2717956;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 27858674;
    vector<int> tea = {84205, 526333, 1992708, 2079274, 2170750, 2393614, 2450696, 2598928, 3096064, 4973489, 5910226, 7044276, 7051470, 7235435, 7697485, 7904683, 9366172, 10163214, 10418607, 10663276, 10676242, 10713827, 11377736, 14733222, 14840086, 14963205, 14964482, 15083791, 16078562, 17388995, 17608039, 18355627, 19132423, 21461963, 23481337, 24322048, 24530791, 26103144, 26206119, 26727714, 27141020, 27330213};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 110872592996387;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 7000000;
    vector<int> tea = {8, 1, 2, 3, 4, 5, 6, 9, 20, 200, 1000, 102, 123, 234, 456, 678, 15154, 13425, 56161, 23416};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 7000082081135;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 44777776;
    vector<int> tea = {1, 2, 3, 4, 5, 7, 8, 9};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 286436127897730;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 15;
    vector<int> tea = {12};
    TheCoffeeTimeDivOne* pObj = new TheCoffeeTimeDivOne();
    clock_t start = clock();
    long result = pObj->find(n, tea);
    clock_t end = clock();
    delete pObj;
    long expected = 269;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22733480&rd=14158&pm=11028
********************************************************************************
#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <ctime>
#include <cstring>
#include <cassert>
#include <sstream>
#include <iomanip>
#include <complex>
#include <queue>
#include <functional>
 
using namespace std;
 
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define last(a) int(a.size() - 1)
#define all(a) a.begin(), a.end()
#define seta(a,x) memset (a, x, sizeof (a))
#define I (int)
 
typedef long long int64;
typedef pair <int, int> pii;
typedef long double ldb;
 
const int inf = (1 << 30) - 1;
const ldb eps = 1e-9;
 
template <class T> T sqr (T x) {return x * x;}
 
class TheCoffeeTimeDivOne {
public:
  long long find(int, vector <int>);
};
 
bool u[50000000];
 
long long TheCoffeeTimeDivOne::find(int n, vector <int> tea) {
  seta (u, 0);
  forn (i, tea.size())
    u[tea[i]] = 1;
  int64 res = 0;
  int count = 0;
  for (int i = n; i >= 1; i --)
    if (u[i])
    {
      if (count == 0)
      {
        res += 47;
        res += i * 2;
        count = 7;
      }
      count --;
      res += 4;
    }
  count = 0;
  for (int i = n; i >= 1; i --)
    if (!u[i])
    {
      if (count == 0)
      {
        res += 47;
        res += i * 2;
        count = 7;
      }
      count --;
      res += 4;
    }
  return res;
}

********************************************************************************
*******************************************************************************/