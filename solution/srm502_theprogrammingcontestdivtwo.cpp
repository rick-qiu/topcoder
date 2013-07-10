/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11358
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

class TheProgrammingContestDivTwo {
public:
    vector<int> find(int T, vector<int> requiredTime);
};

vector<int> TheProgrammingContestDivTwo::find(int T, vector<int> requiredTime) {
    vector<int> ret;
    return ret;
}


int test0() {
    int T = 74;
    vector<int> requiredTime = {47};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 47};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int T = 74;
    vector<int> requiredTime = {4747};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int T = 47;
    vector<int> requiredTime = {8, 5};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 18};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int T = 47;
    vector<int> requiredTime = {12, 3, 21, 6, 4, 13};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 86};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int T = 58;
    vector<int> requiredTime = {4, 5, 82, 3, 4, 65, 7, 6, 8, 7, 6, 4, 8, 7, 6, 37, 8};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 249};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int T = 100000;
    vector<int> requiredTime = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100000};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int T = 100000;
    vector<int> requiredTime = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 1275};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int T = 100000;
    vector<int> requiredTime = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 2550000};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int T = 100000;
    vector<int> requiredTime = {100000};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100000};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int T = 100000;
    vector<int> requiredTime = {1};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int T = 100000;
    vector<int> requiredTime = {78655, 900, 3792, 2727, 11762, 23903, 81013, 93484, 16756, 16062, 71435, 33494, 22157, 97528, 46337, 29409, 80715, 15638, 3676, 27084, 42368, 38735, 50028, 24417, 99019, 94304, 60398, 19417, 71492, 66583, 47839, 32092, 30891, 98437, 17476, 96981, 36972, 57098, 85362, 72872, 64730, 56324, 99946, 6957, 96796, 70832, 52534, 89819, 66109, 41056};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 351773};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int T = 100000;
    vector<int> requiredTime = {48947, 77445, 50005, 43774, 586, 78981, 15189, 99986, 13930, 14423, 21793, 54045, 77485, 96278, 38065, 40565, 72969, 15042, 70353, 53350, 73374, 98641, 4159, 80543, 95381, 47609, 2424, 1852, 20363, 22586, 45390, 30027, 5256, 25386, 14034, 22086, 73100, 63838, 85831, 84334, 42011, 99294, 77576, 90059, 31982, 33729, 63920, 15280, 46580, 81266};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 316897};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int T = 100000;
    vector<int> requiredTime = {83474, 2314, 99075, 62766, 52487, 38912, 91761, 756, 4509, 22128, 32218, 28672, 30306, 13772, 45782, 84754, 24876, 73180, 68451, 19794, 32958, 91216, 46838, 31019, 87370, 6962, 39688, 34811, 61174, 31140, 68501, 13123, 50113, 31071, 75866, 38998, 59200, 6523, 7780, 68872, 29309, 30589, 20941, 79655, 48947, 60806, 53586, 5120, 69355, 75766};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 292073};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int T = 100000;
    vector<int> requiredTime = {12955, 72088, 72714, 71219, 1778, 81052, 82080, 95854, 2368, 92667, 94284, 82948, 42838, 56248, 91578, 86683, 81807, 91634, 51022, 65473, 56629, 63376, 3718, 73519, 84828, 93352, 66175, 53722, 62471, 33262, 86908, 42494, 75010, 89089, 9338, 21068, 37892, 19158, 26107, 42367, 50969, 1119, 40902, 23167, 31220, 30941, 34868, 82420, 59510, 65546};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 284466};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int T = 100000;
    vector<int> requiredTime = {26334, 30997, 30633, 63237, 81620, 32064, 14474, 58786, 62804, 49442, 5497, 85618, 52892, 66187, 351, 78395, 96650, 95225, 46816, 34731, 91856, 72061, 42222, 79175, 77907, 56628, 41701, 67914, 44751, 7126, 79248, 52453, 2285, 58944, 4705, 95070, 29632, 82445, 59045, 87294, 22305, 44290, 53245, 86370, 11496, 34645, 74035, 41912, 29871, 46555};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 283336};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int T = 100000;
    vector<int> requiredTime = {4557, 3041, 598, 96, 2183, 2607, 2317, 1158, 2729, 3126, 3856, 665, 1904, 3546, 4895, 336, 4801, 4655, 2621, 2757, 3444, 4566, 4906, 4811, 4747, 2191, 3833, 106, 3912, 2774, 3921, 532, 722, 992, 773, 4268, 2009, 3145, 2965, 2080, 1943, 866, 320, 538, 4908, 1056, 3515, 4393, 2301, 3539};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 1456214};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int T = 100000;
    vector<int> requiredTime = {4476, 4040, 3882, 2915, 3535, 4096, 1539, 2667, 4772, 2065, 58, 4363, 143, 867, 3081, 4667, 1910, 386, 4751, 414, 972, 4526, 3678, 4616, 4397, 1925, 4649, 1653, 4921, 3556, 3159, 2469, 1254, 4395, 369, 2995, 3056, 583, 1291, 409, 2529, 3352, 717, 2827, 197, 94, 4924, 16, 2258, 2370};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 1322710};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int T = 100000;
    vector<int> requiredTime = {2422, 3411, 2839, 3540, 2683, 3392, 2025, 1883, 1166, 2579, 100, 2189, 2638, 2961, 4773, 2984, 3290, 4990, 2509, 4973, 1197, 3025, 4804, 4243, 1380, 4783, 648, 730, 4933, 772, 3802, 2549, 2628, 1726, 2621, 2444, 2139, 1167, 1520, 787, 2035, 1859, 202, 2707, 1739, 3994, 1838, 1378, 4472, 3768};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 1662919};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int T = 100000;
    vector<int> requiredTime = {270, 419, 2347, 2453, 832, 3459, 4538, 3872, 1481, 1230, 3221, 3223, 4900, 1349, 281, 4670, 2525, 4632, 1551, 885, 512, 856, 990, 3932, 3288, 3682, 2512, 3942, 4656, 4029, 3508, 616, 74, 1393, 2002, 3213, 4180, 3782, 3801, 3220, 3493, 4696, 1566, 1454, 767, 4685, 1326, 503, 2744, 1869};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 1452537};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int T = 100000;
    vector<int> requiredTime = {3269, 2906, 3234, 548, 2155, 4055, 2665, 782, 2237, 676, 4588, 3899, 2962, 4964, 877, 2325, 2457, 3827, 4751, 4321, 1596, 2587, 3241, 2921, 548, 1079, 3405, 1957, 1370, 3114, 4982, 1162, 729, 932, 4151, 1511, 2438, 4336, 1203, 787, 182, 662, 800, 3754, 4266, 1749, 3513, 4021, 1791, 4692};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 1529976};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int T = 23166;
    vector<int> requiredTime = {1210, 308, 3154, 2036, 2755, 4064, 1660};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 44497};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int T = 80964;
    vector<int> requiredTime = {3713, 1342, 1333, 4344, 2497, 3447, 3510, 4238};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 90274};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int T = 93081;
    vector<int> requiredTime = {3299, 2697, 899, 2142, 4185, 2242, 4540, 3799, 254, 2786, 2148, 2448, 1081, 1657, 2871, 3064, 3005, 1244, 3753, 4777, 2784, 314, 3150, 3269, 3396, 1865};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 689142};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int T = 40725;
    vector<int> requiredTime = {305, 3840, 4980, 1739, 1592, 3757, 781, 2732, 4792, 944, 153, 1953};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 112896};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int T = 66505;
    vector<int> requiredTime = {614, 4953, 2085, 4251, 1606, 601, 4096, 3299, 897, 731, 3473, 3136, 3713, 4961, 3631};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 239676};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int T = 43906;
    vector<int> requiredTime = {4064, 152, 2556, 867, 4673, 3290, 313, 4890, 801, 941, 4708, 4987, 1844, 1556, 4304, 3478, 4474, 3093, 1241};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 251084};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int T = 3889;
    vector<int> requiredTime = {849, 3399, 4110, 3234, 1945};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3643};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int T = 29151;
    vector<int> requiredTime = {777, 4407, 3521, 2803, 1956, 2651, 4912, 1059, 4437, 4477, 1764, 975, 4526, 1442, 2035, 872, 3316, 1626, 1352, 3717, 4243, 3352, 3609, 1234, 2989, 891, 219, 638, 2164, 3838, 4654, 4693, 3001, 1207, 4655, 3732, 1775, 3445, 3807, 4184, 2701, 723, 3012, 4656};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 220436};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int T = 80251;
    vector<int> requiredTime = {518, 4731, 2524, 2729, 1163, 4257, 1832, 4636, 2157, 1992, 999, 1910, 100};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 139099};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int T = 83325;
    vector<int> requiredTime = {1615, 3668, 25, 2963, 2621, 3349};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 37964};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int T = 47;
    vector<int> requiredTime = {8, 5};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 18};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int T = 100;
    vector<int> requiredTime = {20, 15, 19, 18};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 172};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int T = 58;
    vector<int> requiredTime = {4, 5, 82, 3, 4, 65, 7, 6, 8, 7, 6, 4, 8, 7, 6, 37, 8};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 249};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int T = 100;
    vector<int> requiredTime = {100, 100, 100, 100, 100};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int T = 58;
    vector<int> requiredTime = {4, 5, 82, 3, 4, 65, 7, 6, 8, 7, 6, 4, 8, 7, 6, 37, 8, 111, 123, 3, 11, 123, 333, 11112, 1231, 123, 1, 66, 55, 77, 6, 123, 6, 66};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 291};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int T = 47;
    vector<int> requiredTime = {12, 3, 21, 6, 4, 13};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 86};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int T = 10;
    vector<int> requiredTime = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 55};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int T = 6;
    vector<int> requiredTime = {1, 2, 3};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 10};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int T = 47;
    vector<int> requiredTime = {12, 3, 21, 4, 13, 5};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 83};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int T = 74;
    vector<int> requiredTime = {4747};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int T = 25;
    vector<int> requiredTime = {5, 8, 5, 5, 5, 8, 8};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 50};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int T = 10;
    vector<int> requiredTime = {5, 5};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 15};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int T = 10000;
    vector<int> requiredTime = {2, 1, 3, 4, 5};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 35};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int T = 10;
    vector<int> requiredTime = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 20};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int T = 1;
    vector<int> requiredTime = {1, 1};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int T = 47;
    vector<int> requiredTime = {12, 3, 21, 6, 3, 13};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 82};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int T = 1;
    vector<int> requiredTime = {2};
    TheProgrammingContestDivTwo* pObj = new TheProgrammingContestDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(T, requiredTime);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22874492&rd=14431&pm=11358
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
 
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
 
class TheProgrammingContestDivTwo {
public:
  vector <int> find(int, vector <int>);
};
 
vector <int> TheProgrammingContestDivTwo::find(int T, vector <int> rT) {
   vector<int> ans(2,0);int tim=0, cont=0;
   vector<int> sum;   int k=1;
   sort(rT.begin(),rT.end());
 
   if(rT[0]>T) return ans;
   REP(i,rT.size()){
      int t=0;
      for(int j=0;j<k;j++){  
        t+=rT[j];
        cout<<rT[j]<<" ";
        tim+=rT[j];
        }cout<<"="<<tim<<"->";
        
        if(t<=T)cont++;
        else {tim-=t;break;}
        k++;
        cout<<cont<<endl;
      }
        
   
   ans[0]=cont;
   ans[1]=tim;
   return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/