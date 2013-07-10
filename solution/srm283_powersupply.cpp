/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5969
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

class PowerSupply {
public:
    int maxProfit(vector<int> x, vector<int> y, int D);
};

int PowerSupply::maxProfit(vector<int> x, vector<int> y, int D) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 3, 0, 0, 0};
    vector<int> y = {1, 2, 6, -4, 1};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {-1000000, 13, 1000000};
    vector<int> y = {0, 0, 0};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {-5, -2, 2, 8, -1};
    vector<int> y = {1, 2, 1, 2, 8};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {-5, -5, -2, -2, 3};
    vector<int> y = {-2, -3, 4, 6, 9};
    int D = 2;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {-12245, -12345, 123, 123, -17, -17, -17};
    vector<int> y = {-12345, -12345, 735, 735, 999999, 999999, 999999};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 0, 0, 0, 0, 282, 283, 283, -1000000, -1000000, 1000000, 1000000};
    vector<int> y = {0, 0, 0, 0, 0, 282, 283, 283, 1000000, 1000000, -1000000, -1000000};
    int D = 200;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 0, 0, 0, 0, 282, 283, 283, -1000000, -1000000, 1000000, 1000000};
    vector<int> y = {0, 0, 0, 0, 0, 282, 283, 283, 1000000, 1000000, -1000000, -1000000};
    int D = 199;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {2, 2, 6};
    vector<int> y = {-3, 2, 3};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {35, 12456, -1000000};
    vector<int> y = {0, 0, 0};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {0, 1000000, 0};
    vector<int> y = {0, 0, -1000000};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {177, 177, 177, 224356};
    vector<int> y = {177, 177, 177, 134567};
    int D = 385298;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {177, 177, 177, 224356};
    vector<int> y = {177, 177, 177, 134567};
    int D = 385299;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {0, 7, 0, 100, 107, 100};
    vector<int> y = {7, 0, 0, 607, 600, 600};
    int D = 5;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {};
    vector<int> y = {};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {0, 7, 0, 100, 107, 100};
    vector<int> y = {7, 0, 0, 607, 600, 600};
    int D = 49;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {0, 7, 0, 100, 107, 100};
    vector<int> y = {7, 0, 0, 607, 600, 600};
    int D = 50;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {0, 7, 0, 100, 107, 100};
    vector<int> y = {7, 0, 0, 607, 600, 600};
    int D = 53;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {0, 7, 0, 100, 107, 100};
    vector<int> y = {7, 0, 0, 607, 600, 600};
    int D = 54;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {40, 24};
    vector<int> y = {24, 48};
    int D = 3;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {40, 24};
    vector<int> y = {24, 48};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {40, 24};
    vector<int> y = {24, 48};
    int D = 2;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {};
    vector<int> y = {};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {2, 2, 2, 3, -7, 732784};
    vector<int> y = {2, 2, 2, 3, -7, 732784};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {346732, 346732, 346732, 877123, 877123, 877123, 877123};
    vector<int> y = {877123, 877123, 877123, 0, 0, 0, 0};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {0, 12, 0, 100, 112, 100, 101};
    vector<int> y = {12, 0, 0, 612, 600, 600, 601};
    int D = 5;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {0, 12, 0, 100, 112, 100, 101};
    vector<int> y = {12, 0, 0, 612, 600, 600, 601};
    int D = 56;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {0, 12, 0, 100, 112, 100, 101};
    vector<int> y = {12, 0, 0, 612, 600, 600, 601};
    int D = 55;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {565436};
    vector<int> y = {-565743};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-549336, -548882, 903031, -615918, 293014, -361878, -667754, 179873, -714192, 814169, -506630, 895387, -612564, -878892, 937644, -616282, -193049, 799086, -961144, 313294, -581415, 417360, -698296, 194354, -426631, -310439, 143024, -294737, 969218, 100493, 338617, 385080, -562076, -497365, 931731, -221124, 665890, -21586, 788538, -544304, 315903, -518672, 564372, 485068, 906151, -11329, 239064, -741348, 565877, -265770};
    vector<int> y = {-460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091, -460091};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708, -698708};
    vector<int> y = {-666183, 928102, 563443, 283370, 982622, -408891, -405759, 597007, 8158, 891074, 977074, -392918, 878545, -884396, 698749, -76986, -50254, 609040, -97454, -433755, -896054, 893145, 271336, 656323, 782885, -723002, -605157, 428170, 664094, -515903, 342712, -6668, -816826, -409361, 4396, 555554, 711530, -355997, -98544, -943795, 92282, 846091, -329521, 939461, 470328, 995779, -726397, -842220, -838990, 465590};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-727030, 274129, -214242, 872547, -526875, 414474, -400361, -288821, -135692, -468154, -370711, -79572, 684351, 898804, -868212, 889896, -410555, -516068, -78878, -540501, -542676, 948693, 546927, -865838, 196977, 943565, -335954, -826817, -628829, 974480, 345232, -715917, -311645, -634014, -586603, 186431, -788219, -487983, -606299, -105374, 421044, 651962, 872306, -442535, -594450, 963798, -133362, -317423, 891982, 821407};
    vector<int> y = {727030, -274129, 214242, -872547, 526875, -414474, 400361, 288821, 135692, 468154, 370711, 79572, -684351, -898804, 868212, -889896, 410555, 516068, 78878, 540501, 542676, -948693, -546927, 865838, -196977, -943565, 335954, 826817, 628829, -974480, -345232, 715917, 311645, 634014, 586603, -186431, 788219, 487983, 606299, 105374, -421044, -651962, -872306, 442535, 594450, -963798, 133362, 317423, -891982, -821407};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {978046, 113249, 97006, -255241, -629587, 220581, -913435, 241648, 360687, 556348, 883919, 378844, -19909, 290349, -330880, 930574, -481659, -77607, 353142, 238702, -936504, -778572, 620691, 268816, 633084, 558944, 940686, 432228, 844778, -752465, -905255, 761080, -871210, -160214, 94332, -601310, -784476, 191374, 469520, -421705, 648003, -390400, 927401, 741451, 434574, -450634, -857727, -438965, 762221, -877279};
    vector<int> y = {978046, 113249, 97006, -255241, -629587, 220581, -913435, 241648, 360687, 556348, 883919, 378844, -19909, 290349, -330880, 930574, -481659, -77607, 353142, 238702, -936504, -778572, 620691, 268816, 633084, 558944, 940686, 432228, 844778, -752465, -905255, 761080, -871210, -160214, 94332, -601310, -784476, 191374, 469520, -421705, 648003, -390400, 927401, 741451, 434574, -450634, -857727, -438965, 762221, -877279};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {300001, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> y = {-251613, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 195025;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {300002, 300001, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> y = {-251613, -251613, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 195024;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {300002, 300001, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> y = {-251613, -251613, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 195025;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {300002, 300001, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> y = {-251613, -251613, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 195026;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {332803, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000};
    vector<int> y = {333053, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 235416;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {332803, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000};
    vector<int> y = {333053, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 235415;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {332803, 332804, 332803, 332804, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000};
    vector<int> y = {333053, 333053, 333054, 333054, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 235416;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {332803, 332804, 332803, 332804, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000};
    vector<int> y = {333053, 333053, 333054, 333054, 0, 0, 0, 0, 0, 0, 0, 0, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, -1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int D = 235417;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-873653, -899569, 999999, 1000000, -736123, -999999, 999129, 913456};
    vector<int> y = {-999999, 725999, -1000000, 819415, 991356, 891456, -693567, -993567};
    int D = 169399;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-873653, -899569, 999999, 1000000, -736123, -999999, 999129, 913456};
    vector<int> y = {-999999, 725999, -1000000, 819415, 991356, 891456, -693567, -993567};
    int D = 169398;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-999875, -999845, 998997, 999153, -990246, -724673, 987654, 879257};
    vector<int> y = {-999567, 999964, -999863, 997572, -999536, -999861, 996123, 756845};
    int D = 100287;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-999875, -999845, 998997, 999153, -990246, -724673, 987654, 879257};
    vector<int> y = {-999567, 999964, -999863, 997572, -999536, -999861, 996123, 756845};
    int D = 100288;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {-999716, -999716, 999716, 999716};
    vector<int> y = {-999943, 999943, -999943, 999943};
    int D = 999716;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-999716, -999716, 999716, 999716};
    vector<int> y = {-999943, 999943, -999943, 999943};
    int D = 999715;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {-999716, -999716, 999716, 999716};
    vector<int> y = {-999943, 999943, -999943, 999943};
    int D = 707066;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-999716, -999716, 999716, 999716};
    vector<int> y = {-999943, 999943, -999943, 999943};
    int D = 707067;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-999883, -999883, 999883, 999883};
    vector<int> y = {-999419, 999419, -999419, 999419};
    int D = 999419;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {-999883, -999883, 999883, 999883};
    vector<int> y = {-999419, 999419, -999419, 999419};
    int D = 999418;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-999883, -999883, 999883, 999883};
    vector<int> y = {-999419, 999419, -999419, 999419};
    int D = 707025;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {-999883, -999883, 999883, 999883};
    vector<int> y = {-999419, 999419, -999419, 999419};
    int D = 707024;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {-1000000, -1000000, 1000000, 1000000};
    vector<int> y = {-1000000, 1000000, -1000000, 1000000};
    int D = 1000000;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-1000000, -1000000, 1000000, 1000000};
    vector<int> y = {-1000000, 1000000, -1000000, 1000000};
    int D = 999999;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {-1000000, -1000000, 1000000, 1000000};
    vector<int> y = {-1000000, 1000000, -1000000, 1000000};
    int D = 707107;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-1000000, -1000000, 1000000, 1000000};
    vector<int> y = {-1000000, 1000000, -1000000, 1000000};
    int D = 707106;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-1000000, -1000000, 1000000, 1000000};
    vector<int> y = {-1000000, 1000000, -1000000, 1000000};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {-906296, -923656, 968477, 910988, -962103, -947183, -977147, -973001, 938225, 913030, 909736, 918896, -934491, 966848, -980485, 932600, 932661, -925964, -967752, -904175, 905444, -925593, 902068, -944576, -929233, -949907, -932221, 979852, 926395, 918131, 969093, 964941, 946572, -919219, -943219, -994818, -977474, -906542, -948881, 951154, -976591, -993206, 997077, -958434, 932195, -918612, 944310, 965334, 988597, -934748};
    vector<int> y = {936155, -974329, -978898, 914947, 934381, 950182, -990613, 944323, -930438, -988913, 911649, 986796, 997934, 947967, -914134, -969469, -993210, -950231, 929394, -982295, -903387, -957386, -957846, -951729, -915898, -958714, -917747, 927160, 944354, -986073, 975050, -996914, 999912, 922609, -904849, -977326, -974639, 959133, 973319, 978889, 994324, -977650, -931254, -919033, -981252, 970471, -990736, 926969, -989155, -919127};
    int D = 971499;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-967471, -911844, 936461, 967942, 982282, 958535, -941762, 970652, -980362, -948798, -937623, 973378, 908744, 948368, -920656, 989725, 931465, 963464, 920911, -954893, -931650, 989387, 917175, 901817, 900434, -960425, -905318, 961041, 944143, -964708, -948329, -948157, 992518, 901931, -996078, -985206, 902645, -959055, 983315, -954719, -918995, -906345, 962803, -949534, 953914, -977029, 971103, 936532, -987227, -903568};
    vector<int> y = {996699, 945875, -949898, -952613, -942875, -915075, 965614, 970782, -923779, 952673, -943659, -915645, 915881, -988023, -925945, 992087, 973832, -936419, 993043, 927447, 985438, 926911, 962489, 954323, 923690, -957231, -966979, 908205, 971092, -936051, -936406, 916989, 924946, 959527, -946252, -962506, 973144, 960980, -943671, 940384, 955407, -916241, 962338, -997486, 911703, 959413, 986359, 972727, -985197, -911086};
    int D = 978524;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {974602, 961597, -987766, 980818, 998689, -970274, 961606, -930856, 990459, -901970, -911423, -963752, -927840, -985017, 962429, 943492, 933738, 909577, -934426, -935474, -912556, -956482, 949640, 998256, 910729, -901530, -962111, 983053, 922391, -984551, 912411, 953118, 918669, -948073, -910628, -933226, 998690, -968572, 908754, 916603, 996062, 946331, -904516, -955980, 901303, 912106, 957121, -980020, -982473, -978359};
    vector<int> y = {-950956, -993727, 994262, -932207, 914643, 917048, -953410, -917660, -908555, -913519, 954974, -957719, -991939, -977248, -905158, 907540, -997860, 925915, -924277, -982741, -904378, 979012, -959643, 981224, 981738, -916392, 948344, 973214, 952009, -972775, 978757, -921266, 951583, -925495, -950482, 944267, 980515, -918394, 955107, -908113, 925129, -973950, -928026, -929065, 928603, 947395, 973562, -946937, -937186, -936512};
    int D = 934990;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {970393, 997948, 958891, -927063, 961842, -915819, -953498, 918520, 913123, -984690, 998200, 926360, 911687, 932449, -996413, 993301, -953466, 935726, 985083, 903886, -920880, 967147, -954147, 981109, 995639, -995160, -948335, -933023, -991609, 945958, 966524, 982283, -912794, -915899, -949973, -979745, -933113, -990590, -947332, 983789, 948627, 969504, -972467, 972845, 915386, 993781, 903210, 987525, 921208, 965039};
    vector<int> y = {950557, -929363, 925797, 946728, 932754, -960590, -910177, -993117, -948626, 970702, 924318, -925812, -913737, 917472, -986694, 928823, 971526, 911269, 902050, -951966, 902032, -902318, 947594, 962423, -932787, -913310, 948133, 943117, -999251, 934510, -964287, 993104, 957816, 900023, -947533, 994905, -981071, -969920, -915777, -944706, 943246, -978461, 983987, -951252, -955313, 932917, -940679, 923574, -905197, 954268};
    int D = 994439;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-975700, 918023, -982712, -998256, 964070, 928291, 900334, -997534, 958773, -949380, -909868, 913839, -957781, -916652, -941572, 905216, -905277, -924287, -911655, -997554, 976277, 965282, -934313, -928082, 906898, 909688, 929977, -902717, -948592, 990081, -910579, -985601, -995973, -963793, -919072, 961063, 940059, 940413, -917809, 964493, 969951, 957512, -965647, 981379, 970332, 934690, 907674, -959323, -917941, 998729};
    vector<int> y = {963284, 996871, -991166, -994719, 976501, 981373, 937803, 915145, -944025, 939796, -995394, -959734, 914951, -980955, 916185, 996795, -914667, 903644, 939057, -957468, -902424, 942704, 943680, 905148, 954985, 901618, -997911, 924315, 944076, 917699, -906723, 990717, -998584, 928189, -951606, 914889, -916548, -942348, -994725, -939145, -972506, 910990, 968176, -900057, -911165, 939317, -999989, -920936, -921676, 999128};
    int D = 923966;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-994387, 912845, 916710, 911331, -985723, 955428, 902882, -932557, 941217, 911183, 950606, 960506, 934463, -940310, -966320, 945855, -975189, 980885, -904450, 943933, 950866, -987476, -997977, 946382, 931125, -928775, 972380, -908645, -915813, -959862, 958770, 999255, -954347, 906307, -905013, 939440, 931262, -901814, -988973, 961294, -947902, 993680, 935669, 951568, -970260, -930002, 905399, -979534, 904079, 997891};
    vector<int> y = {914042, -936348, -975015, -903681, 929851, -989202, -913569, 913751, 979837, 981440, -952426, -974455, -956842, -961847, -909372, -913525, -941573, 962572, 968012, -983889, 994188, -997405, 954856, 947929, 993137, 940334, -917863, 958742, 951255, -961335, -991279, -965548, 968951, -966033, 913307, -998798, 987169, -933775, 929001, -996722, 994751, 944336, 924343, 924842, -945433, -987013, 933993, 970102, 972910, -977627};
    int D = 179292;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {-906389, 951730, -969728, -977487, 967568, -941404, 980819, -938715, -960738, -927380, 901723, 934101, -998736, 958903, 997544, 920920, -930223, 908836, 902676, -968335, -914245, -994437, -987516, -945170, -956894, -928212, 963917, -970664, -934100, 946905, -989898, 974430, -962237, 940000, -902713, 986583, -929883, 903516, 949019, -919020, 967447, -997258, -954417, 943747, -964438, -916019, -945464, 994007, -999614, -938975};
    vector<int> y = {986862, -959441, 905041, 970461, -960183, 999414, -919598, 934745, -988817, 970098, -938924, 979454, 919183, -908099, -962250, 960473, 927642, -905101, 954683, 943666, -986142, -918950, -947030, 958766, 915425, -936604, 916304, -954799, -978536, -922163, 952530, -996776, -910840, -916262, -907761, 966480, 917014, 967339, 928007, 953254, -915679, -924266, -964593, 916813, 907763, 983441, -913525, -934120, 910557, 939007};
    int D = 151819;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {-906389, 951730, -969728, -977487, 967568, -941404, 980819, -938715, -960738, -927380, 901723, 934101, -998736, 958903, 997544, 920920, -930223, 908836, 902676, -968335, -914245, -994437, -987516, -945170, -956894, -928212, 963917, -970664, -934100, 946905, -989898, 974430, -962237, 940000, -902713, 986583, -929883, 903516, 949019, -919020, 967447, -997258, -954417, 943747, -964438, -916019, -945464, 994007, -999614, -938975};
    vector<int> y = {986862, -959441, 905041, 970461, -960183, 999414, -919598, 934745, -988817, 970098, -938924, 979454, 919183, -908099, -962250, 960473, 927642, -905101, 954683, 943666, -986142, -918950, -947030, 958766, 915425, -936604, 916304, -954799, -978536, -922163, 952530, -996776, -910840, -916262, -907761, 966480, 917014, 967339, 928007, 953254, -915679, -924266, -964593, 916813, 907763, 983441, -913525, -934120, 910557, 939007};
    int D = 1000000;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-975700, 918023, -982712, -998256, 964070, 928291, 900334, -997534, 958773, -949380, -909868, 913839, -957781, -916652, -941572, 905216, -905277, -924287, -911655, -997554, 976277, 965282, -934313, -928082, 906898, 909688, 929977, -902717, -948592, 990081, -910579, -985601, -995973, -963793, -919072, 961063, 940059, 940413, -917809, 964493, 969951, 957512, -965647, 981379, 970332, 934690, 907674, -959323, -917941, 998729};
    vector<int> y = {963284, 996871, -991166, -994719, 976501, 981373, 937803, 915145, -944025, 939796, -995394, -959734, 914951, -980955, 916185, 996795, -914667, 903644, 939057, -957468, -902424, 942704, 943680, 905148, 954985, 901618, -997911, 924315, 944076, 917699, -906723, 990717, -998584, 928189, -951606, 914889, -916548, -942348, -994725, -939145, -972506, 910990, 968176, -900057, -911165, 939317, -999989, -920936, -921676, 999128};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-999875, -999845, 998997, 999153, -990246, -724673, 987654, 879257};
    vector<int> y = {-999567, 999964, -999863, 997572, 999536, 999861, -996123, -756845};
    int D = 100288;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {-724673, 987654};
    vector<int> y = {999861, -996123};
    int D = 100288;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {-599458, -540917, -168259, 962508, 838114, 51667, 821351, 137626, -677178, 624494, 37818, 988703, -726164, 205458, 317963, 54476, -57510, -916804, 348346, 712641};
    vector<int> y = {-285312, -112344, -716768, -619638, 370492, -836865, 588772, -7272, 757488, 469659, 774708, -162669, -218848, 293033, 282441, 902767, -694522, 290387, -967079, 771444};
    int D = 91;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {-263153, -444276, -834531, 94853, 779941, -682992, -504958, -375097, 592207, -882051};
    vector<int> y = {-270371, -169328, 362629, -382528, -346471, 818360, -596077, -624832, -609580, 637926};
    int D = 6585;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {511590, -60297, 337900, -322958, -806739, 358447, 685932, 663609, 276080, -213586};
    vector<int> y = {-500859, -840607, -792296, -379621, -890856, 362559, -98535, 617148, -128203, 802475};
    int D = 31194;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {468431, 786996, 703361, 334429, 717401};
    vector<int> y = {-625108, 364603, 282455, -527052, 956784};
    int D = 526;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {612035, -402577, 752852, 979071};
    vector<int> y = {260310, 584217, 118238, -606870};
    int D = 444;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {612035, 752852};
    vector<int> y = {260310, 118238};
    int D = 444;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {-5, -2, 2, 8, -1};
    vector<int> y = {1, 2, 1, 2, 8};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
    vector<int> y = {10, 0, 30, 20, 50, 40, 70, 60, 90, 80};
    int D = 8;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {511590, -60297, 337900, -322958, -806739, 358447, 685932, 663609, 276080, -213586};
    vector<int> y = {-500859, -840607, -792296, -379621, -890856, 362559, -98535, 617148, -128203, 802475};
    int D = 31194;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {999, 999, 999, 999};
    vector<int> y = {333, 334, 335, 336};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {};
    vector<int> y = {};
    int D = 111;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {1};
    vector<int> y = {1};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> y = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int D = 1000000;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {0, 1, 2, 3};
    vector<int> y = {3, 2, 1, 0};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {-1000000, 1000000, 2000, -2200};
    vector<int> y = {1000000, -1000000, 2000, -2299};
    int D = 3005;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {511590, -60297, 337900, -322958, -806739, 358447, 685932, 663609, 276080, -213586, -806739, 358447, 685932, 663609, 276080, -213586, 511590, -60297, 337900, -322958, -806739, 358447, 685932, 663609, 276080, -213586, -806739, 358447, 685932, 663609, 276080, -213586};
    vector<int> y = {-500859, -840607, -792296, -379621, -890856, 362559, -98535, 617148, -128203, 802475, -806739, 358447, 685932, 663609, 276080, -213586, -500859, -840607, -792296, -379621, -890856, 362559, -98535, 617148, -128203, 802475, -806739, 358447, 685932, 663609, 276080, -213586};
    int D = 100;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {5, 0};
    vector<int> y = {0, 5};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {};
    vector<int> y = {};
    int D = 512;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {-3006, 0, -6012, -3006, -9018, -6012};
    vector<int> y = {0, 3007, 3006, 6012, 6012, 9018};
    int D = 2125;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {511590, -60297, 337900, -322958, -806739, 358447, 685932, 663609, 276080, -213586, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 22, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> y = {-500859, -840607, -792296, -379621, -890856, 362559, -98535, 617148, -128203, 802475, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int D = 31194;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {1000000, -1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1000000, -1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int D = 999999;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {};
    vector<int> y = {};
    int D = 4;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {1231, 43434, 4545, 6565, 76767, 98989, 89089, 89089, 890890, 5656, 989, 9080, 98089, 8908, 66, 66, 77, 888, 899, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    vector<int> y = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    int D = 12344;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {511590, -60297, 337900, -322958, -806739, 358447, 685932, 663609, 276080, -213586};
    vector<int> y = {-500859, -840607, -792296, -379621, -890856, 362559, -98535, 617148, -128203, 802475};
    int D = 38917;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> y = {-10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000, -10000};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {100, 101, 105};
    vector<int> y = {7, 12, 8};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 15, 161, 17, 18, 19, 20, 21, 22, 23, 24};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 22, 22, 22, 2, 2, 2, 2, 2, 2, 2, 2, 2, 22, 2, 2};
    int D = 10000;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {0, 1, 2, 43, 5, 65, 658, 87, 56, 243, 653, 7, 76, 45, 23, 25, 568, 856, 423, 342, 65, 5, 6, 7, 67, 65, 2, 234, 523, 54, 54, 365, 56, 234, 312, 321, 54, 2, 3, 45, 2, 5, 65};
    vector<int> y = {5, 54, 0, 0, 9, 45, 87, 4, 321, 653, 87, 65, 54, 32, 234, 523, 7, 875, 345, 253, 56, 76, 857, 25, 234, 321, 354, 76, 56, 3, 324, 21, 65, 56, 234, 423, 47, 67, 423, 43, 4, 234, 234};
    int D = 30;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {};
    vector<int> y = {};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {111, 222, 333, 444, 555, 666, 777, 888, 999};
    vector<int> y = {111, 222, 333, 444, 555, 666, 777, 888, 999};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {10, 1, 30};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> y = {100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 100000, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1, 2, 3};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {10000, -10000};
    vector<int> y = {-10000, 10000};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {-589295, 674464, 803660, 551051, -409085};
    vector<int> y = {396429, 503609, -627080, -465065, 405660};
    int D = 456934;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> y = {1, 100, 200, 300, 400};
    int D = 6;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {};
    vector<int> y = {};
    int D = 2;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {-1, 0, 1};
    vector<int> y = {-1, 20000, -1};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {-5, -3, -1, 2, 2, 3, 5, 6, 7, 8};
    vector<int> y = {7, 5, 6, 5, 2, 1, 7, -1, 4, -5};
    int D = 2;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {0};
    vector<int> y = {0};
    int D = 0;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
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
    vector<int> x = {0, 0, 1, 1, 2, 2, 3, 3};
    vector<int> y = {-1, 1, -1, 1, -1, 1, -1, 1};
    int D = 1;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {-1000000, 1000000, 0};
    vector<int> y = {-1000000, 1000000, 19601};
    int D = 6930;
    PowerSupply* pObj = new PowerSupply();
    clock_t start = clock();
    int result = pObj->maxProfit(x, y, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14886245&rd=8080&pm=5969
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
 
class PowerSupply 
{
  public:
  int maxProfit(vector <int> x, vector <int> y, int d) 
  {
    int n=x.size(),i,w=0,t[50],j;
    for(i=0;i<n;i++) t[i]=x[i];
    sort(t,t+n);
    for(i=0;i<n;i++)
    {
      for(j=i;j<n && t[j]-t[i]<=2*d;j++);
      w>?=j-i;
    }
    for(i=0;i<n;i++) t[i]=y[i];
    sort(t,t+n);
    for(i=0;i<n;i++)
    {
      for(j=i;j<n && t[j]-t[i]<=2*d;j++);
      w>?=j-i;
    }
    for(i=0;i<n;i++) t[i]=x[i]+y[i];
    sort(t,t+n);
    for(i=0;i<n;i++)
    {
      for(j=i;j<n && t[j]-t[i]<=4.0*d/sqrt(2);j++);
      w>?=j-i;
    }
    for(i=0;i<n;i++) t[i]=x[i]-y[i];
    sort(t,t+n);
    for(i=0;i<n;i++)
    {
      for(j=i;j<n && t[j]-t[i]<=4.0*d/sqrt(2);j++);
      w>?=j-i;
    }
    return w;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/