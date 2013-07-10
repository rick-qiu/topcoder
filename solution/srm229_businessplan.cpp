/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3078
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

class BusinessPlan {
public:
    int howLong(vector<int> expense, vector<int> revenue, vector<int> ptime, int C, int D);
};

int BusinessPlan::howLong(vector<int> expense, vector<int> revenue, vector<int> ptime, int C, int D) {
    int ret;
    return ret;
}


int test0() {
    vector<int> expense = {1, 4};
    vector<int> revenue = {2, 10};
    vector<int> ptime = {1, 2};
    int C = 1;
    int D = 10;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
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
    vector<int> expense = {11};
    vector<int> revenue = {20};
    vector<int> ptime = {10};
    int C = 10;
    int D = 10;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> expense = {11};
    vector<int> revenue = {20};
    vector<int> ptime = {10};
    int C = 10;
    int D = 11;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
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
    vector<int> expense = {1, 1, 1};
    vector<int> revenue = {3, 4, 8};
    vector<int> ptime = {1, 2, 3};
    int C = 1;
    int D = 11;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> expense = {1, 1, 1};
    vector<int> revenue = {8, 11, 10};
    vector<int> ptime = {5, 7, 6};
    int C = 1;
    int D = 22;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> expense = {99999, 1, 99998, 2, 99997, 3, 99996, 4, 99995, 5};
    vector<int> revenue = {100000, 100000, 100000, 100, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> ptime = {1, 9, 1, 10, 1, 9, 1, 9, 1, 9};
    int C = 2;
    int D = 100;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> expense = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> revenue = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> ptime = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 100044;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> expense = {1};
    vector<int> revenue = {2};
    vector<int> ptime = {10};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 999990;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> expense = {1, 1, 1, 22, 880};
    vector<int> revenue = {8, 11, 10, 100, 1080};
    vector<int> ptime = {5, 7, 6, 1, 2};
    int C = 1;
    int D = 99958;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1017;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> expense = {17749, 9129, 26802, 56920};
    vector<int> revenue = {36773, 28950, 27092, 84511};
    vector<int> ptime = {3, 6, 8, 8};
    int C = 52693;
    int D = 54657;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> expense = {26715, 2520, 12458, 23773, 687};
    vector<int> revenue = {49776, 44080, 32683, 55363, 96907};
    vector<int> ptime = {6, 3, 1, 4, 4};
    int C = 19100;
    int D = 41718;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> expense = {51153, 8819, 33029, 8522, 21627};
    vector<int> revenue = {67899, 49728, 48907, 87155, 65782};
    vector<int> ptime = {3, 1, 10, 10, 7};
    int C = 73574;
    int D = 99898;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> expense = {51252, 42574, 67170, 4380, 38006, 23498};
    vector<int> revenue = {60168, 59567, 78099, 6602, 91577, 26606};
    vector<int> ptime = {10, 9, 10, 4, 5, 9};
    int C = 1109;
    int D = 1614;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> expense = {20293, 20550, 51306, 61203, 9748, 23763};
    vector<int> revenue = {58419, 51755, 96007, 89475, 29524, 81562};
    vector<int> ptime = {3, 5, 10, 9, 8, 3};
    int C = 35697;
    int D = 82820;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> expense = {44367, 7336, 2025, 8744, 76860, 20387};
    vector<int> revenue = {55298, 25429, 3969, 16062, 81013, 21668};
    vector<int> ptime = {7, 4, 2, 5, 6, 7};
    int C = 13084;
    int D = 60056;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> expense = {66319, 53419, 162, 42597, 38836, 8041, 24060};
    vector<int> revenue = {72250, 92963, 4462, 65711, 39348, 59427, 65627};
    vector<int> ptime = {7, 9, 8, 9, 10, 6, 9};
    int C = 22748;
    int D = 93855;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> expense = {31248, 64621, 35895, 84144, 25752, 75397, 19421};
    vector<int> revenue = {48551, 92235, 50656, 95835, 55108, 85194, 36214};
    vector<int> ptime = {4, 1, 2, 1, 4, 7, 1};
    int C = 2206;
    int D = 5590;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
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
    vector<int> expense = {21137, 45038, 39395, 63495, 4849, 4162, 45317};
    vector<int> revenue = {74186, 63330, 41308, 68442, 76328, 92393, 61621};
    vector<int> ptime = {7, 3, 3, 1, 10, 3, 1};
    int C = 36457;
    int D = 64887;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> expense = {25364, 11043, 227, 23, 3807, 37438, 1196};
    vector<int> revenue = {65971, 61068, 54302, 222, 17872, 70204, 10325};
    vector<int> ptime = {6, 1, 8, 7, 7, 7, 1};
    int C = 3112;
    int D = 26092;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
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
    vector<int> expense = {10180, 6364, 1470, 6274, 3247, 51625, 39584, 12151};
    vector<int> revenue = {37701, 56222, 40002, 38024, 4007, 51933, 64201, 37083};
    vector<int> ptime = {10, 10, 9, 8, 5, 1, 8, 5};
    int C = 14611;
    int D = 19736;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> expense = {32813, 24765, 128, 798, 29390, 15074, 437, 47968};
    vector<int> revenue = {38802, 41556, 55893, 92541, 66210, 27344, 9427, 52419};
    vector<int> ptime = {3, 6, 10, 9, 9, 2, 7, 9};
    int C = 75000;
    int D = 92392;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> expense = {21875, 88915, 8207, 71907, 18268, 35, 169, 47390};
    vector<int> revenue = {69046, 94139, 75445, 75878, 25742, 2599, 7933, 67436};
    vector<int> ptime = {4, 3, 10, 5, 7, 3, 6, 1};
    int C = 19137;
    int D = 22818;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> expense = {59925, 11365, 8115, 4962, 11654, 445, 9314, 64238};
    vector<int> revenue = {85138, 49353, 60976, 66442, 32936, 3537, 75427, 66263};
    vector<int> ptime = {5, 5, 8, 5, 4, 8, 2, 6};
    int C = 46268;
    int D = 90322;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> expense = {44575, 195, 23328, 43474, 664, 17285, 35372, 34449};
    vector<int> revenue = {93384, 946, 48761, 73952, 17706, 26223, 46935, 99102};
    vector<int> ptime = {10, 2, 1, 5, 2, 9, 3, 3};
    int C = 55468;
    int D = 72523;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> expense = {10143, 7070, 10598, 2803, 39910, 25238, 18367, 19262, 3529};
    vector<int> revenue = {53899, 7574, 25979, 12790, 73515, 36424, 65269, 93298, 10924};
    vector<int> ptime = {1, 6, 6, 1, 9, 9, 2, 8, 6};
    int C = 77451;
    int D = 96376;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> expense = {34061, 3071, 14291, 73401, 14887, 3351, 49152, 1854, 41728};
    vector<int> revenue = {41314, 11141, 99581, 83881, 42441, 49614, 65717, 7587, 77305};
    vector<int> ptime = {2, 5, 8, 8, 6, 7, 3, 4, 8};
    int C = 5188;
    int D = 16915;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
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
    vector<int> expense = {66686, 51116, 30142, 5392, 24105, 82206, 20419, 8687, 55573};
    vector<int> revenue = {78967, 67141, 58161, 14423, 79133, 89728, 32938, 12030, 72834};
    vector<int> ptime = {5, 4, 5, 8, 5, 4, 1, 10, 2};
    int C = 22477;
    int D = 46976;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> expense = {64074, 47918, 20362, 49440, 42086, 12609, 5583, 9788, 2019};
    vector<int> revenue = {80577, 57945, 29370, 98450, 52198, 46438, 23150, 50276, 15225};
    vector<int> ptime = {2, 9, 9, 1, 10, 6, 8, 8, 10};
    int C = 24960;
    int D = 71237;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> expense = {6956, 371, 18045, 44687, 30447, 79698, 622, 28501, 9541};
    vector<int> revenue = {49575, 12311, 23122, 76864, 52972, 84748, 1679, 38823, 13796};
    vector<int> ptime = {10, 3, 7, 1, 8, 2, 2, 8, 10};
    int C = 11152;
    int D = 18871;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> expense = {11089, 267, 51504, 34784, 55612, 50864, 33260, 54156, 32120};
    vector<int> revenue = {97527, 10900, 52532, 58666, 91448, 61408, 71467, 70757, 34495};
    vector<int> ptime = {4, 2, 4, 6, 2, 10, 7, 10, 3};
    int C = 31607;
    int D = 80142;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> expense = {75140, 372, 70327, 2008, 65004, 5415, 31487, 51537, 12385, 699};
    vector<int> revenue = {94429, 1071, 79997, 4551, 99435, 81408, 83441, 74180, 18774, 80650};
    vector<int> ptime = {5, 9, 4, 2, 8, 9, 4, 7, 1, 7};
    int C = 7450;
    int D = 84563;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> expense = {8347, 92755, 62477, 20406, 6306, 12483, 48988, 9100, 1372, 77644};
    vector<int> revenue = {18124, 99666, 67811, 28508, 78620, 13465, 62979, 13017, 6477, 94619};
    vector<int> ptime = {10, 6, 4, 2, 1, 4, 7, 10, 3, 8};
    int C = 10009;
    int D = 24690;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> expense = {16968, 2494, 38234, 4, 19317, 6580, 16037, 43409, 49994, 4550};
    vector<int> revenue = {24412, 20843, 50595, 5763, 21222, 7042, 83639, 61804, 61880, 26758};
    vector<int> ptime = {6, 4, 1, 7, 8, 3, 1, 9, 4, 1};
    int C = 67532;
    int D = 77901;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> expense = {62683, 52670, 46434, 10600, 10307, 53845, 23846, 4787, 2070, 11675};
    vector<int> revenue = {67218, 94278, 71325, 14376, 31955, 63740, 49489, 59486, 17859, 62719};
    vector<int> ptime = {7, 8, 1, 1, 3, 4, 8, 3, 10, 1};
    int C = 5721;
    int D = 8246;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> expense = {6412, 2063, 14790, 11300, 971, 4995, 59960, 31392, 16907, 13707};
    vector<int> revenue = {27891, 48494, 16303, 12026, 2283, 28805, 70291, 32338, 19995, 21945};
    vector<int> ptime = {9, 5, 9, 10, 3, 10, 1, 4, 9, 2};
    int C = 3364;
    int D = 22946;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> expense = {9842, 54527, 59509, 36389, 62669, 14626, 18890, 1146, 5862, 31850};
    vector<int> revenue = {15426, 84913, 73591, 70470, 77655, 68190, 46881, 41833, 33453, 70889};
    vector<int> ptime = {5, 2, 5, 9, 8, 9, 2, 1, 1, 1};
    int C = 43264;
    int D = 69011;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> expense = {11518, 31890, 11085, 23744, 80595, 57502, 71257, 3356, 63490, 14269};
    vector<int> revenue = {82598, 72888, 45301, 74234, 82591, 59879, 74300, 34693, 75174, 14722};
    vector<int> ptime = {1, 9, 4, 10, 4, 6, 2, 6, 4, 2};
    int C = 3044;
    int D = 65758;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> expense = {49456, 33732, 98471, 3483, 29222, 44583, 32231, 84623, 4881, 99342};
    vector<int> revenue = {54332, 36653, 99999, 9000, 34823, 49999, 34223, 89223, 9912, 99999};
    vector<int> ptime = {5, 3, 4, 2, 6, 5, 8, 4, 4, 2};
    int C = 13000;
    int D = 99283;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> expense = {1, 90000};
    vector<int> revenue = {2, 90001};
    vector<int> ptime = {10, 5};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 949990;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> expense = {1, 4};
    vector<int> revenue = {2, 10};
    vector<int> ptime = {1, 2};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 33335;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> expense = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> revenue = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> ptime = {5, 4, 3, 2, 8, 6, 7, 1, 9, 10};
    int C = 5;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 99998;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> expense = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> revenue = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> ptime = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int C = 9;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 999910;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> expense = {99999, 99999, 99998, 99999, 99997, 99999, 99996, 99999, 99995, 1};
    vector<int> revenue = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 2};
    vector<int> ptime = {1, 9, 1, 10, 1, 9, 1, 9, 1, 9};
    int C = 2;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 899938;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> expense = {1};
    vector<int> revenue = {2};
    vector<int> ptime = {10};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 999990;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> expense = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> revenue = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> ptime = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 999990;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> expense = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> revenue = {10, 20, 30, 35, 60, 80, 85, 90, 110, 115};
    vector<int> ptime = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int C = 2;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 954;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> expense = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> revenue = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> ptime = {1, 2, 3, 1, 2, 3, 1, 2, 3, 4};
    int C = 1;
    int D = 99999;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 99998;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> expense = {1};
    vector<int> revenue = {100000};
    vector<int> ptime = {5};
    int C = 90000;
    int D = 95000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> expense = {1, 4};
    vector<int> revenue = {2, 10};
    vector<int> ptime = {1, 2};
    int C = 11;
    int D = 10;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> expense = {1, 1, 1};
    vector<int> revenue = {3, 4, 8};
    vector<int> ptime = {1, 2, 3};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 42857;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> expense = {100, 100};
    vector<int> revenue = {150, 15000};
    vector<int> ptime = {1, 2};
    int C = 100;
    int D = 101;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> expense = {1, 2};
    vector<int> revenue = {2, 3};
    vector<int> ptime = {9, 10};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 899991;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> expense = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> revenue = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> ptime = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int C = 1;
    int D = 10000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 19998;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> expense = {1, 1, 2};
    vector<int> revenue = {2, 5, 100};
    vector<int> ptime = {1, 2, 1};
    int C = 1;
    int D = 100;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> expense = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> revenue = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> ptime = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> expense = {1};
    vector<int> revenue = {100000};
    vector<int> ptime = {10};
    int C = 2147483647;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> expense = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> revenue = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    vector<int> ptime = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int C = 1;
    int D = 10000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 99990;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> expense = {1, 1};
    vector<int> revenue = {8, 6};
    vector<int> ptime = {6, 5};
    int C = 1;
    int D = 11;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> expense = {1, 1, 1};
    vector<int> revenue = {2306, 122, 2561};
    vector<int> ptime = {9, 1, 10};
    int C = 1;
    int D = 100000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 391;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> expense = {1, 1, 2};
    vector<int> revenue = {10, 2, 20};
    vector<int> ptime = {3, 1, 1};
    int C = 1;
    int D = 20;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> expense = {1, 100};
    vector<int> revenue = {2, 1000};
    vector<int> ptime = {1, 10};
    int C = 1;
    int D = 1901;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> expense = {1, 2, 3};
    vector<int> revenue = {4, 1000, 100};
    vector<int> ptime = {1, 10, 8};
    int C = 5;
    int D = 1050;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> expense = {15, 10};
    vector<int> revenue = {30, 30};
    vector<int> ptime = {2, 3};
    int C = 15;
    int D = 35;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> expense = {1, 1};
    vector<int> revenue = {100, 20};
    vector<int> ptime = {4, 1};
    int C = 1;
    int D = 115;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> expense = {100, 10, 1};
    vector<int> revenue = {10000, 100, 50};
    vector<int> ptime = {1, 10, 1};
    int C = 10;
    int D = 10000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> expense = {100, 1};
    vector<int> revenue = {102, 2};
    vector<int> ptime = {1, 1};
    int C = 1;
    int D = 1000;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 549;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> expense = {1, 1};
    vector<int> revenue = {100, 51};
    vector<int> ptime = {10, 8};
    int C = 100;
    int D = 200;
    BusinessPlan* pObj = new BusinessPlan();
    clock_t start = clock();
    int result = pObj->howLong(expense, revenue, ptime, C, D);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=309453&rd=6518&pm=3078
********************************************************************************
using namespace std;
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
 
#define PB push_back
#define SZ size()
#define REP(var, hi) for (int var=0; var<(hi); var++)
#define REPD(var, hi) for (int var=((hi)-1); var>=0; var--)
#define FOR(var, lo, hi) for (int var=(lo); var<(hi); var++)
#define FORD(var, lo, hi) for (int var=((hi)-1); var>=(lo); var--)
 
typedef vector <int> VI;
typedef vector <VI> VVI;
typedef vector <string> VS;
 
/* ############################ THE REAL CODE ############################ */
 
class BusinessPlan {
  public:
  int howLong(vector <int> exp, vector <int> rev, vector <int> tim, int C, int D) {
    int TIME=2000000;
    VI best(TIME,0);
    best[0]=C;
    REP(t,TIME) {
      if (best[t]>=D) return t;
      REP(i,exp.SZ) if (best[t]>=exp[i] && t+tim[i]<TIME) 
        best[t+tim[i]] >?= best[t]-exp[i] + rev[i];
    }
    return -1;      
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/