/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1348
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

class BenfordsLaw {
public:
    int questionableDigit(vector<int> transactions, int threshold);
};

int BenfordsLaw::questionableDigit(vector<int> transactions, int threshold) {
    int ret;
    return ret;
}


int test0() {
    vector<int> transactions = {5236, 7290, 200, 1907, 3336, 9182, 17, 4209, 8746, 7932, 6375, 909, 2189, 3977, 2389, 2500, 1239, 3448, 6380, 4812};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> transactions = {1, 10, 100, 2, 20, 200, 2000, 3, 30, 300};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
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
    vector<int> transactions = {9, 87, 765, 6543, 54321, 43219, 321987, 21987, 1987, 345, 234, 123};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3, 2, 1};
    int threshold = 8;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> transactions = {987, 234, 1234, 234873487, 876, 234562, 17, 7575734, 5555, 4210, 678234, 3999, 8123};
    int threshold = 3;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> transactions = {168249, 128764, 274843, 480487, 6470, 321163, 914970, 651946, 860681, 651156, 533305, 97811, 948843, 357358, 312413, 255070, 74193, 28869, 793437, 592639, 25154, 554199, 458379, 585723, 957071, 620787, 618315, 999088, 992120, 660875};
    int threshold = 5;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> transactions = {929238, 225022, 368132, 419489, 406037, 476829, 454825, 792981, 873000, 566777, 925392, 448354, 270943, 717454, 441466, 943277, 981218, 825975, 529528, 884725, 366158, 409775, 286906, 97902, 136183, 644910, 660556, 268189, 344640, 310889};
    int threshold = 9;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> transactions = {87686, 300702, 161999, 917426, 475725, 725295, 312782, 410472, 237840, 75515, 674516, 391965, 562072, 154635, 359049, 934178, 555142, 159623, 623961, 864710, 617694, 108332, 828539, 602937, 170762, 543943, 461252, 582121, 176235, 789195};
    int threshold = 3;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> transactions = {935189, 872499, 767283, 621491, 284705, 445848, 187047, 410621, 215923, 116325, 926201, 764755, 175689, 982944, 906067, 427226, 227093, 691445, 937981, 182991, 11663, 916071, 852174, 503223, 601235, 543188, 21146, 36881, 37372, 384399, 10735, 386812, 527127, 99382, 108651, 851071, 396242, 892414, 778132, 784572};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> transactions = {2, 8, 2, 2, 138836868, 4, 12, 157, 19, 3, 102, 879, 5, 5, 35, 4, 4, 19, 666, 24, 123, 7, 937, 209, 6, 7, 2, 3, 100, 3, 4, 3, 4, 111, 4, 2, 4};
    int threshold = 4;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> transactions = {46126, 6669, 10, 9, 3, 8, 401, 4, 20947581, 3, 81, 10, 101023, 1770, 14, 8, 383, 127, 5, 41, 654, 7, 9, 94, 2, 32, 240, 1949969, 3, 3, 4, 4, 256, 4, 2268, 2, 3};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> transactions = {234, 5, 38, 3, 5, 4, 8, 9, 18, 3, 20, 3, 2, 4, 1968049, 27, 30, 3, 2, 2, 2, 4, 3, 534914, 4, 10, 37, 70, 3, 3, 2152, 27, 8, 1533, 1217, 3, 3, 2, 23, 3, 567, 4, 10, 130004, 3, 5, 5371, 10253521, 3};
    int threshold = 10;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> transactions = {22, 26, 47822, 10, 68597, 1201, 22983, 9, 22, 263, 11, 80, 1108, 36151, 20, 43, 22, 15, 13958, 5285, 9, 23, 4886, 10157537, 2471, 90, 8, 26, 32, 2180, 68, 70, 2498, 16, 31, 8, 21, 8258, 26, 15, 9, 30306576, 52, 10, 82, 10, 81, 720};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> transactions = {465, 10, 73, 64, 17, 1618, 29, 671869, 458, 17, 12, 17, 12, 9, 7, 18, 10, 9, 137087639, 22820083, 10, 14, 11, 60, 19, 1615, 911, 46, 28, 534546, 232, 54, 3138972, 10, 27, 11, 740226530, 22, 9242, 16, 9, 12, 36, 8, 15};
    int threshold = 3;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> transactions = {12, 35847144, 289578, 23, 8, 49, 16, 27, 73, 9, 11, 604, 12, 7, 38, 25, 10, 6428, 22965, 9, 12, 11, 39, 30, 18, 14, 11, 16, 503, 92, 21474, 8, 20, 25, 45122636, 157, 8, 8, 14, 458, 292, 545003208, 13};
    int threshold = 6;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> transactions = {34, 3934, 35, 228, 730, 8, 5321491, 30, 6324, 15, 2274, 11, 76, 11, 11, 106382, 613, 37};
    int threshold = 3;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
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
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 1, 2};
    int threshold = 9;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 4, 4, 1, 2, 3, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    int threshold = 6;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> transactions = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 2, 3, 4, 5, 7, 8, 9, 1, 2, 3, 4, 5};
    int threshold = 8;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 7, 7, 7, 7, 7, 1, 2, 3, 7, 7};
    int threshold = 6;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 8, 8, 8, 8, 8, 1, 2, 8, 8};
    int threshold = 8;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 7, 7, 1, 2, 3, 4, 5};
    int threshold = 3;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 8, 1, 2, 3, 4, 5, 6, 8, 8, 8, 1, 2, 3, 4, 5, 6, 8, 8, 8, 1, 2, 3, 4, 5, 8, 8};
    int threshold = 5;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 3, 3, 4, 5, 6, 7, 1, 1, 1, 1, 1, 4, 5, 6, 7, 1, 1};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> transactions = {1};
    int threshold = 4;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> transactions = {1};
    int threshold = 3;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
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
    vector<int> transactions = {987, 234, 1234, 234873487, 876, 234562, 17, 7575734, 5555, 4210, 678234, 3999, 8123};
    int threshold = 3;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> transactions = {1, 10, 100, 2, 20, 200, 2000, 3, 30, 300};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3, 2, 1};
    int threshold = 8;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> transactions = {1};
    int threshold = 2;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
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
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3, 2, 1, 9876, 6543};
    int threshold = 8;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> transactions = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 1};
    int threshold = 10;
    BenfordsLaw* pObj = new BenfordsLaw();
    clock_t start = clock();
    int result = pObj->questionableDigit(transactions, threshold);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7327102&rd=4580&pm=1348
********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <deque>
#include <math.h>
using namespace std;
 
typedef int I;
typedef vector<int> VI;
typedef string S;
typedef vector<string> VS;
typedef bool B;
typedef vector<bool> VB;
typedef double D;
typedef vector<double> VD;
 
struct BenfordsLaw
{
I questionableDigit(VI tr, I th)
{
  VI x;
  for(I i=0; i<10;i++) x.push_back(0);
  
  for (I i =0; i<tr.size();i++)
  {
    I y=tr[i];
    while (y>=10) y/=10;
    x[y-1]++;
    cout << "added: " << y << endl;
  }
  for (I i=0; i<9; i++)
  {
    D j = i+1;
    cout << j << ": ";
    D j2 = 1+1/j;
    D k = log10(j2)*tr.size();
    cout << k << " " << x[i] << endl;
    if (x[i] >= th * k)
      return i+1;
    if (x[i] <= (double)k / (double)th)
      return i+1;
  }
  return -1;
}
};

********************************************************************************
*******************************************************************************/