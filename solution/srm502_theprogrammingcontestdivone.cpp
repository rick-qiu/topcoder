/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11357
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

class TheProgrammingContestDivOne {
public:
    int find(int T, vector<int> maxPoints, vector<int> pointsPerMinute, vector<int> requiredTime);
};

int TheProgrammingContestDivOne::find(int T, vector<int> maxPoints, vector<int> pointsPerMinute, vector<int> requiredTime) {
    int ret;
    return ret;
}


int test0() {
    int T = 100000;
    vector<int> maxPoints = {652, 743, 587, 4926};
    vector<int> pointsPerMinute = {6, 5, 3, 4};
    vector<int> requiredTime = {4, 5, 3, 6};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6731;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int T = 90;
    vector<int> maxPoints = {742, 207};
    vector<int> pointsPerMinute = {20, 13};
    vector<int> requiredTime = {82, 20};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
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
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4998725;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int T = 80;
    vector<int> maxPoints = {290, 787, 919};
    vector<int> pointsPerMinute = {1, 12, 7};
    vector<int> requiredTime = {5, 57, 65};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 714;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int T = 1;
    vector<int> maxPoints = {1};
    vector<int> pointsPerMinute = {1};
    vector<int> requiredTime = {1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
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
    int T = 74;
    vector<int> maxPoints = {502};
    vector<int> pointsPerMinute = {2};
    vector<int> requiredTime = {47};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 408;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int T = 40000;
    vector<int> maxPoints = {100000, 100000};
    vector<int> pointsPerMinute = {1, 100000};
    vector<int> requiredTime = {50000, 30000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
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
    int T = 75;
    vector<int> maxPoints = {250, 500, 1000};
    vector<int> pointsPerMinute = {2, 4, 8};
    vector<int> requiredTime = {25, 25, 25};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int T = 30;
    vector<int> maxPoints = {100, 100, 100000};
    vector<int> pointsPerMinute = {1, 1, 100};
    vector<int> requiredTime = {15, 15, 30};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 97000;
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
    vector<int> maxPoints = {43870, 35630, 64332, 29314, 91810, 30713, 92083, 34545, 43527, 8873, 21291, 94124, 29550, 3194, 13615, 95718, 99109, 37404, 55083, 46488, 54658, 52121, 24121, 75630, 92015, 31444, 26858, 83371, 16195, 32506, 28091, 82145, 8476, 19109, 65026, 11354, 90026, 27670, 60557, 59395, 51931, 80999, 15095, 49606, 86010, 50608, 89208, 64485, 15134, 6368};
    vector<int> pointsPerMinute = {3, 1, 8, 2, 2, 6, 7, 8, 1, 3, 8, 4, 1, 6, 10, 5, 7, 8, 6, 3, 10, 10, 2, 5, 4, 9, 4, 4, 5, 7, 8, 6, 8, 5, 10, 9, 2, 9, 4, 3, 10, 7, 3, 4, 9, 6, 10, 6, 2, 3};
    vector<int> requiredTime = {6309, 173, 7391, 6248, 4064, 7879, 1158, 290, 2884, 7320, 6407, 3283, 2389, 433, 290, 8899, 2240, 8127, 8931, 4111, 1159, 2279, 2104, 3755, 4672, 2414, 3974, 8038, 1926, 7489, 469, 4875, 2741, 7641, 6296, 1737, 2513, 6449, 6312, 2901, 6967, 4875, 4594, 9131, 4658, 8092, 3541, 2247, 6900, 5777};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 485868;
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
    vector<int> maxPoints = {66109, 41056, 48947, 77445, 50005, 43774, 586, 78981, 15189, 99986, 13930, 14423, 21793, 54045, 77485, 96278, 38065, 40565, 72969, 15042, 70353, 53350, 73374, 98641, 4159, 80543, 95381, 47609, 2424, 1852, 20363, 22586, 45390, 30027, 5256, 25386, 14034, 22086, 73100, 63838, 85831, 84334, 42011, 99294, 77576, 90059, 31982, 33729, 63920, 15280};
    vector<int> pointsPerMinute = {10, 6, 4, 4, 5, 6, 7, 2, 1, 6, 9, 8, 8, 2, 6, 2, 2, 4, 6, 10, 1, 4, 8, 6, 8, 9, 10, 2, 8, 1, 4, 10, 1, 3, 3, 1, 6, 8, 10, 3, 10, 2, 9, 9, 1, 5, 7, 6, 6, 10};
    vector<int> requiredTime = {6527, 3788, 8655, 900, 3792, 2727, 1762, 3903, 1013, 3484, 6756, 6062, 1435, 3494, 2157, 7528, 6337, 9409, 715, 5638, 3676, 7084, 2368, 8735, 28, 4417, 9019, 4304, 398, 9417, 1492, 6583, 7839, 2092, 891, 8437, 7476, 6981, 6972, 7098, 5362, 2872, 4730, 6324, 9946, 6957, 6796, 832, 2534, 9819};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 518459;
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
    vector<int> maxPoints = {59510, 65546, 26334, 30997, 30633, 63237, 81620, 32064, 14474, 58786, 62804, 49442, 5497, 85618, 52892, 66187, 351, 78395, 96650, 95225, 46816, 34731, 91856, 72061, 42222, 79175, 77907, 56628, 41701, 67914, 44751, 7126, 79248, 52453, 2285, 58944, 4705, 95070, 29632, 82445, 59045, 87294, 22305, 44290, 53245, 86370, 11496, 34645, 74035, 41912};
    vector<int> pointsPerMinute = {1, 5, 7, 1, 8, 6, 3, 7, 7, 8, 9, 6, 6, 5, 4, 6, 5, 6, 1, 5, 1, 7, 4, 6, 6, 1, 7, 1, 3, 6, 2, 4, 1, 2, 2, 2, 3, 8, 9, 5, 5, 10, 3, 6, 10, 8, 8, 6, 5, 3};
    vector<int> requiredTime = {9355, 5766, 2955, 2088, 2714, 1219, 1778, 1052, 2080, 5854, 2368, 2667, 4284, 2948, 2838, 6248, 1578, 6683, 1807, 1634, 1022, 5473, 6629, 3376, 3718, 3519, 4828, 3352, 6175, 3722, 2471, 3262, 6908, 2494, 5010, 9089, 9338, 1068, 7892, 9158, 6107, 2367, 969, 1119, 902, 3167, 1220, 941, 4868, 2420};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 656452;
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
    vector<int> maxPoints = {67258, 22370, 82422, 13411, 72839, 13540, 52683, 68392, 97025, 96883, 81166, 2579, 25100, 52189, 67638, 97961, 4773, 97984, 48290, 89990, 57509, 34973, 96197, 13025, 59804, 89243, 71380, 69783, 55648, 35730, 54933, 40772, 88802, 72549, 57628, 11726, 2621, 92444, 42139, 96167, 96520, 60787, 87035, 6859, 35202, 77707, 81739, 63994, 6838, 41378};
    vector<int> pointsPerMinute = {2, 8, 10, 9, 7, 3, 2, 9, 8, 2, 1, 10, 1, 3, 10, 9, 1, 10, 5, 2, 1, 5, 2, 6, 10, 2, 8, 2, 2, 2, 6, 9, 8, 6, 4, 3, 2, 3, 10, 2, 1, 10, 3, 6, 6, 4, 7, 5, 6, 3};
    vector<int> requiredTime = {7301, 8539, 9476, 4040, 8882, 7915, 3535, 9096, 6539, 7667, 4772, 7065, 58, 9363, 143, 867, 8081, 4667, 1910, 386, 4751, 5414, 972, 9526, 8678, 9616, 4397, 6925, 9649, 6653, 4921, 3556, 8159, 2469, 1254, 4395, 369, 7995, 8056, 5583, 6291, 5409, 7529, 8352, 717, 7827, 5197, 94, 4924, 16};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 832598;
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
    vector<int> maxPoints = {96791, 84692, 22407, 23166, 1210, 50308, 83154, 57036, 97755, 64064, 71660, 23908, 80964, 98713, 66342, 41333, 74344, 17497, 98447, 88510, 4238, 88626, 93081, 93299, 92697, 10899, 52142, 9185, 77242, 29540, 13799, 25254, 72786, 57148, 87448, 66081, 1657, 92871, 13064, 53005, 71244, 28753, 84777, 47784, 314, 43150, 33269, 53396, 26865, 60862};
    vector<int> pointsPerMinute = {5, 5, 10, 10, 9, 2, 7, 1, 2, 2, 4, 3, 3, 5, 5, 4, 3, 5, 1, 6, 1, 6, 9, 7, 1, 3, 6, 3, 1, 1, 9, 6, 4, 2, 6, 7, 3, 10, 3, 10, 1, 1, 8, 7, 4, 6, 4, 8, 4, 3};
    vector<int> requiredTime = {7744, 1869, 3269, 7906, 3234, 5548, 2155, 4055, 7665, 5782, 7237, 676, 9588, 3899, 2962, 4964, 5877, 7325, 2457, 3827, 9751, 4321, 6596, 7587, 8241, 7921, 5548, 6079, 8405, 6957, 1370, 8114, 4982, 6162, 5729, 5932, 9151, 6511, 7438, 4336, 1203, 787, 182, 5662, 800, 3754, 4266, 1749, 3513, 9021};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 629898;
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
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> requiredTime = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
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
    int T = 100000;
    vector<int> maxPoints = {66109, 41056, 48947, 77445, 50005, 43774, 586, 78981, 15189, 99986, 13930, 14423, 21793, 54045, 77485, 96278, 38065, 40565, 72969, 15042, 70353, 53350, 73374, 98641, 4159, 80543, 95381, 47609, 2424, 1852, 20363, 22586, 45390, 30027, 5256, 25386, 14034, 22086, 73100, 63838, 85831, 84334, 42011, 99294, 77576, 90059, 31982, 33729, 63920, 15280};
    vector<int> pointsPerMinute = {46580, 81266, 83474, 2314, 99075, 62766, 52487, 38912, 91761, 756, 4509, 22128, 32218, 28672, 30306, 13772, 45782, 84754, 24876, 73180, 68451, 19794, 32958, 91216, 46838, 31019, 87370, 6962, 39688, 34811, 61174, 31140, 68501, 13123, 50113, 31071, 75866, 38998, 59200, 6523, 7780, 68872, 29309, 30589, 20941, 79655, 48947, 60806, 53586, 5120};
    vector<int> requiredTime = {6527, 83788, 78655, 900, 3792, 2727, 11762, 23903, 81013, 93484, 16756, 16062, 71435, 33494, 22157, 97528, 46337, 29409, 80715, 15638, 3676, 27084, 42368, 38735, 50028, 24417, 99019, 94304, 60398, 19417, 71492, 66583, 47839, 32092, 30891, 98437, 17476, 96981, 36972, 57098, 85362, 72872, 64730, 56324, 99946, 6957, 96796, 70832, 52534, 89819};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int T = 75766;
    vector<int> maxPoints = {81052, 82080, 95854, 2368, 92667};
    vector<int> pointsPerMinute = {94284, 82948, 42838, 56248, 91578};
    vector<int> requiredTime = {12955, 72088, 72714, 71219, 1778};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
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
    int T = 100000;
    vector<int> maxPoints = {78395, 96650, 95225, 46816, 34731, 91856, 72061, 42222, 79175, 77907, 56628, 41701, 67914, 44751, 7126, 79248, 52453, 2285, 58944, 4705, 95070, 29632, 82445, 59045, 87294, 22305, 44290, 53245, 86370, 11496, 34645, 74035, 41912, 29871, 46555, 69557, 3041, 10598, 90096, 12183, 77607, 97317, 66158, 27729, 38126, 13856, 60665, 76904, 38546, 4895};
    vector<int> pointsPerMinute = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {6683, 1807, 1634, 1022, 5473, 6629, 3376, 3718, 3519, 4828, 3352, 6175, 3722, 2471, 3262, 6908, 2494, 5010, 9089, 9338, 1068, 7892, 9158, 6107, 2367, 969, 1119, 902, 3167, 1220, 941, 4868, 2420, 9510, 5546, 6334, 997, 633, 3237, 1620, 2064, 4474, 8786, 2804, 9442, 5497, 5618, 2892, 6187, 351};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1107332;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int T = 1;
    vector<int> maxPoints = {1};
    vector<int> pointsPerMinute = {1};
    vector<int> requiredTime = {1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
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
    int T = 100000;
    vector<int> maxPoints = {15414};
    vector<int> pointsPerMinute = {2};
    vector<int> requiredTime = {4751};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5912;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int T = 100000;
    vector<int> maxPoints = {13025, 59804, 89243, 71380, 69783, 55648, 35730, 54933, 40772, 88802, 72549, 57628, 11726, 2621, 92444, 42139, 96167, 96520, 60787, 87035, 6859, 35202, 77707, 81739, 63994, 6838, 41378, 34472, 3768, 55270, 90419, 92347, 97453, 5832, 33459, 69538, 23872, 41481, 76230, 83221, 23223, 14900, 1349, 20281, 69670, 27525, 44632, 11551, 95885, 45512};
    vector<int> pointsPerMinute = {2258, 1713, 24, 36489, 48696, 1265, 11, 4, 6, 45, 172, 9, 153, 18582, 5, 89832, 90431, 5, 10254, 3, 8667, 14938, 145, 21, 4, 175, 931, 73, 22, 1069, 15118, 19831, 39, 220, 34, 18, 594, 2, 120, 255, 10354, 9, 1304, 8883, 49356, 73, 27, 167, 49605, 11587};
    vector<int> requiredTime = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 296407;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {4590, 103, 48234, 2, 17, 22622, 22, 39339, 5, 1, 230, 540, 280, 62, 7, 2, 19, 24, 35, 415, 1344, 1, 11590, 23, 4, 2191, 4, 2354, 1, 16, 485, 51616, 2, 1237, 1047, 17937, 107, 50, 33, 77, 3241, 15459, 6241, 3858, 1390, 8, 624, 6, 21695, 22120};
    vector<int> requiredTime = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 830000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int T = 100000;
    vector<int> maxPoints = {12946, 74587, 15458, 76168, 48408, 14469, 81132, 65066, 67307, 85736, 75663, 62932, 20909, 19704, 70517, 20526, 46908, 29765, 30677, 2828, 97293, 52260, 97763, 63726, 5105, 68772, 46058, 59347, 77491, 10072, 30100, 72980, 25467, 37661, 61243, 56975, 17651, 65869, 53171, 64251, 86805, 52164, 99499, 28254, 76761, 50051, 33490, 85201, 75731, 39882};
    vector<int> pointsPerMinute = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1219986;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2450000;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int T = 100000;
    vector<int> maxPoints = {21606, 13786, 24152, 90676, 48781, 15887, 11403, 37192, 3642, 57194, 99658, 85328, 30982, 2149, 32581, 7373, 16024, 44890, 78236, 90804, 17980, 52096, 12921, 65698, 87873, 56540, 35388, 45289, 36873, 26658, 48148, 92322, 98880, 86347, 6083, 19975, 11089, 89613, 21917, 57068, 36613, 33209, 59769, 62232, 62631, 61849, 31408, 1127, 4344, 15989};
    vector<int> pointsPerMinute = {12, 1, 1, 3, 3, 4, 45, 54, 3, 5, 43, 47, 3, 12, 18, 2, 2, 6, 2, 2, 19, 5, 1, 10, 2, 5, 19, 1, 39, 26, 6, 33, 76, 6, 2, 13, 1, 30, 64, 11, 1, 1, 7, 21, 55, 30, 1, 19, 5, 36};
    vector<int> requiredTime = {4057, 2568, 1268, 1139, 1991, 2846, 4117, 3228, 2424, 2055, 1119, 1217, 2346, 2250, 3215, 1997, 1681, 1069, 4098, 1136, 1398, 1635, 3615, 1309, 1801, 1565, 3376, 1235, 2319, 1558, 1590, 2911, 1229, 2706, 1628, 1755, 2048, 2920, 1431, 2268, 1287, 978, 2311, 939, 2504, 1389, 1758, 990, 743, 983};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 517580;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int T = 100000;
    vector<int> maxPoints = {34547, 93715, 82344, 34301, 76898, 45534, 95346, 55497, 55714, 20483, 27213, 78892, 55024, 59174, 39978, 31863, 23433, 80894, 75006, 63693, 90637, 48149, 42764, 46074, 38076, 96734, 34653, 89546, 66919, 10466, 2147, 7771, 27409, 72091, 59789, 41718, 90850, 44436, 7936, 53517, 47016, 77321, 80196, 81083, 25110, 15005, 59194, 80944, 77465, 21858};
    vector<int> pointsPerMinute = {3, 6, 34, 28, 45, 2, 2, 2, 5, 2, 2, 8, 1, 2, 29, 74, 24, 1, 5, 3, 1, 4, 92, 63, 1, 99, 59, 7, 5, 3, 15, 16, 7, 18, 1, 8, 14, 30, 30, 8, 8, 3, 30, 2, 1, 11, 3, 1, 99, 65};
    vector<int> requiredTime = {1561, 2311, 1498, 2378, 2575, 4152, 3374, 1389, 2244, 1593, 3129, 2811, 3651, 3042, 3335, 2856, 3244, 3096, 1405, 1680, 1170, 2118, 3302, 973, 1935, 2378, 772, 1957, 3020, 1306, 2299, 695, 1163, 1071, 2039, 1005, 2070, 2295, 1446, 1151, 2531, 2565, 955, 1484, 1183, 1635, 961, 1176, 1159, 862};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 747986;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int T = 100000;
    vector<int> maxPoints = {66853, 9075, 75112, 4541, 98429, 91011, 53667, 42981, 21564, 98789, 23879, 93046, 69576, 19473, 70584, 3991, 94070, 86189, 32959, 79873, 65248, 80581, 53603, 45553, 97345, 78580, 74671, 28394, 11518, 45556, 8282, 96093, 32249, 73767, 97452, 62390, 2711, 76191, 79186, 38845, 39137, 28654, 22228, 82969, 52305, 48807, 58946, 47645, 93651, 90465};
    vector<int> pointsPerMinute = {2, 2, 5, 63, 20, 5, 1, 10, 12, 1, 2, 1, 2, 1, 5, 2, 1, 4, 3, 12, 10, 41, 60, 1, 16, 3, 5, 18, 2, 2, 19, 7, 14, 12, 5, 11, 2, 26, 13, 2, 14, 27, 4, 10, 23, 6, 2, 3, 20, 10};
    vector<int> requiredTime = {4020, 1723, 1173, 2582, 4126, 3676, 1998, 1297, 4163, 1445, 3215, 2914, 1377, 2247, 2794, 3423, 1037, 1389, 1443, 2128, 1103, 2224, 856, 2203, 2411, 977, 2930, 1627, 1277, 3124, 2879, 1390, 1292, 2756, 2209, 1699, 1298, 1339, 1562, 978, 1633, 1746, 1652, 1144, 1415, 1354, 1896, 1259, 1531, 2066};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 809350;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int T = 100000;
    vector<int> maxPoints = {33822, 19040, 30, 70370, 79129, 14565, 7086, 53503, 83748, 60259, 4037, 20955, 23495, 25670, 76447, 3093, 85324, 11015, 35181, 76067, 55413, 64157, 52848, 96082, 44929, 56613, 10068, 69211, 35950, 87284, 42873, 2762, 84318, 37627, 64386, 31509, 24673, 53266, 98438, 28649, 92880, 11429, 95070, 84039, 51949, 61100, 48495, 27458, 60098, 10420};
    vector<int> pointsPerMinute = {6, 1, 22, 1, 39, 2, 13, 6, 4, 37, 7, 2, 1, 24, 2, 68, 17, 7, 2, 11, 73, 5, 9, 40, 56, 89, 47, 9, 66, 11, 17, 17, 66, 1, 4, 15, 21, 17, 15, 7, 48, 35, 2, 33, 10, 44, 7, 8, 13, 1};
    vector<int> requiredTime = {2893, 4660, 3474, 951, 4667, 2182, 1006, 2259, 1826, 1128, 1178, 3931, 991, 3695, 3899, 1583, 2513, 2302, 2140, 3480, 2839, 2829, 2211, 1568, 1258, 2530, 1929, 816, 2383, 1108, 1204, 877, 942, 1347, 1939, 2081, 1303, 2323, 885, 1216, 2566, 839, 1084, 1709, 1403, 1309, 959, 2242, 2097, 1446};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 538690;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int T = 100000;
    vector<int> maxPoints = {30159, 54562, 34107, 90136, 91354, 42865, 58734, 67880, 39423, 3407, 14986, 18945, 2178, 37756, 11673, 10481, 98479, 59005, 53799, 2946, 11713, 64989, 94220, 72268, 49466, 7727, 4227, 75018, 26638, 11096, 46790, 26582, 7601, 57291, 30284, 80779, 88774, 82246, 29313, 29724, 87452, 50923, 19777, 10909, 93259, 53188, 31138, 57865, 46861, 99096};
    vector<int> pointsPerMinute = {36, 7, 33, 35, 11, 14, 1, 9, 48, 27, 6, 11, 1, 62, 3, 3, 15, 4, 18, 5, 99, 17, 2, 6, 1, 15, 2, 78, 22, 77, 24, 4, 7, 1, 6, 25, 58, 61, 3, 18, 3, 1, 9, 11, 7, 1, 5, 4, 14, 16};
    vector<int> requiredTime = {4093, 2655, 3403, 2113, 1784, 2566, 1408, 1782, 4186, 2136, 943, 3638, 2699, 2549, 2152, 3638, 2313, 2389, 2654, 1223, 2356, 3249, 878, 1633, 2609, 1924, 2111, 2720, 1981, 1465, 1066, 1938, 1763, 1611, 2522, 925, 945, 2517, 1253, 1139, 2403, 1456, 1217, 1282, 940, 771, 923, 1327, 1124, 1628};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 599051;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int T = 100000;
    vector<int> maxPoints = {68923, 87380, 34618, 57093, 97191, 54782, 46686, 25830, 40351, 6051, 33570, 67105, 79110, 2367, 26982, 89988, 41511, 95273, 59478, 41479, 79320, 99764, 12512, 67258, 9412, 48203, 6338, 85765, 93671, 37257, 384, 98761, 93985, 86966, 31133, 5849, 95276, 25216, 58878, 10207, 51741, 78198, 29463, 22230, 46062, 58267, 64397, 22071, 88573, 26915};
    vector<int> pointsPerMinute = {1, 2, 39, 64, 1, 37, 26, 3, 11, 1, 13, 96, 1, 30, 4, 13, 8, 4, 16, 99, 84, 4, 12, 15, 20, 2, 2, 30, 1, 1, 95, 1, 5, 5, 9, 7, 2, 1, 17, 2, 95, 1, 3, 1, 3, 33, 2, 6, 59, 12};
    vector<int> requiredTime = {1199, 2736, 3346, 3817, 3345, 1176, 2469, 3451, 2513, 1879, 1720, 726, 3087, 2045, 1573, 1919, 2943, 1791, 2538, 1383, 1505, 1800, 1738, 1685, 1089, 2834, 2727, 1447, 1824, 953, 2070, 1802, 2402, 2185, 1362, 2066, 2318, 1409, 2499, 1551, 2063, 1724, 1069, 2380, 1496, 738, 1997, 2260, 1230, 2121};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 870954;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int T = 100000;
    vector<int> maxPoints = {53783, 26665, 83629, 35876, 97712, 53442, 90897, 74473, 64358, 80198, 34336, 25049, 64193, 96034, 79854, 57683, 87490, 76789, 99392, 28932, 97173, 52763, 133, 64178, 32085, 927, 14567, 97221, 17039, 7084, 33324, 91013, 57388, 17148, 21311, 11207, 89279, 91610, 9743, 8838, 86467, 41865, 86730, 71997, 70358, 4215, 27606, 80635, 67428, 87410};
    vector<int> pointsPerMinute = {1, 87, 8, 1, 19, 10, 3, 63, 6, 29, 25, 32, 2, 2, 20, 74, 1, 3, 1, 7, 1, 2, 70, 1, 9, 22, 3, 1, 69, 6, 52, 12, 2, 32, 2, 16, 1, 9, 5, 17, 50, 10, 24, 1, 2, 27, 66, 1, 3, 33};
    vector<int> requiredTime = {1168, 2823, 5111, 3531, 1033, 3460, 1903, 2389, 2536, 2889, 1296, 1193, 1515, 1764, 1640, 1371, 1594, 3653, 1949, 3949, 3523, 1234, 1530, 2008, 911, 1508, 1775, 1695, 3258, 2071, 1685, 3133, 1185, 3009, 1604, 2664, 1864, 1991, 1239, 820, 2548, 1738, 1129, 2099, 1175, 1441, 748, 1568, 1278, 802};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1078019;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int T = 100000;
    vector<int> maxPoints = {52141, 71458, 69593, 1312, 3877, 37417, 46213, 51724, 54357, 76, 55673, 51692, 49419, 6447, 26997, 90214, 22944, 85826, 9441, 7442, 37108, 10702, 19564, 52626, 17554, 96972, 2917, 57349, 16235, 21430, 63254, 10563, 18981, 23187, 41415, 28803, 40795, 2603, 39113, 24713, 3341, 79531, 70128, 34859, 74391, 77248, 86866, 66899, 93535, 7493};
    vector<int> pointsPerMinute = {93, 20, 18, 25, 19, 2, 5, 2, 21, 1, 63, 1, 13, 27, 3, 15, 3, 4, 62, 2, 2, 4, 59, 8, 3, 6, 1, 2, 3, 1, 38, 64, 51, 32, 13, 2, 7, 10, 8, 6, 1, 3, 27, 94, 20, 1, 5, 30, 1, 5};
    vector<int> requiredTime = {1569, 1389, 2203, 2023, 1461, 1078, 4776, 1456, 890, 3637, 2914, 2799, 1890, 1646, 3856, 3910, 1330, 2362, 3565, 2984, 2931, 980, 1777, 2887, 3052, 1977, 1234, 1733, 2586, 2338, 2871, 2569, 927, 1170, 1537, 1392, 1742, 2649, 977, 2042, 1149, 1435, 987, 935, 1216, 1591, 2413, 1025, 1081, 1059};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 540786;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int T = 100000;
    vector<int> maxPoints = {94797, 51936, 93213, 603, 17025, 16954, 88897, 31301, 36400, 94078, 15352, 8625, 16734, 13469, 15740, 48716, 62950, 54728, 85252, 70531, 75805, 30410, 61115, 26114, 17293, 67145, 82357, 73293, 60662, 67271, 2713, 20809, 7015, 71704, 75376, 14952, 1510, 61431, 52177, 39139, 60131, 13572, 3134, 1967, 70301, 67742, 64657, 40981, 23984, 38224};
    vector<int> pointsPerMinute = {43, 7, 45, 11, 52, 12, 16, 10, 1, 1, 7, 22, 9, 2, 77, 8, 2, 3, 60, 4, 2, 4, 3, 29, 21, 5, 97, 73, 4, 2, 18, 50, 5, 5, 31, 58, 1, 4, 10, 17, 62, 6, 17, 66, 2, 46, 2, 7, 98, 1};
    vector<int> requiredTime = {1651, 1670, 2070, 2473, 3788, 2129, 4195, 2304, 1068, 2370, 750, 1351, 2650, 4029, 915, 3839, 3103, 3658, 1375, 2179, 1125, 961, 2176, 722, 776, 1931, 2029, 1326, 3000, 813, 2140, 2048, 1277, 2830, 2278, 1674, 1702, 1737, 1766, 2071, 2032, 2685, 1130, 1670, 1745, 1056, 2316, 1526, 2042, 1849};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 519542;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int T = 100000;
    vector<int> maxPoints = {63124, 52947, 42782, 2175, 21362, 61831, 13021, 8252, 8026, 3280, 70230, 45907, 36800, 1756, 22487, 56409, 27466, 56607, 35867, 53010, 10708, 69408, 35343, 72287, 85736, 43879, 45701, 69540, 22727, 57950, 40116, 17472, 35165, 100000, 32893, 3325, 22891, 38731, 55174, 12993, 71485, 46259, 5783, 15725, 57718, 97205, 26023, 81523, 27414, 45193};
    vector<int> pointsPerMinute = {3, 1, 1, 1, 5, 2, 72, 11, 94, 10, 1, 6, 42, 3, 13, 39, 15, 1, 1, 19, 2, 50, 3, 10, 13, 3, 1, 1, 65, 32, 2, 13, 25, 12, 34, 9, 1, 49, 1, 10, 2, 85, 55, 7, 3, 1, 4, 8, 3, 1};
    vector<int> requiredTime = {3324, 1991, 3289, 5108, 3903, 1365, 1103, 1173, 3634, 3985, 1527, 1514, 1338, 946, 1143, 2536, 816, 2435, 932, 1592, 2471, 1403, 1518, 1753, 2439, 3561, 3676, 1341, 1348, 1304, 3466, 1386, 2043, 2122, 2289, 1154, 946, 2154, 1557, 2384, 2592, 1108, 2806, 1576, 1504, 876, 1206, 1941, 1251, 1171};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 668172;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int T = 100000;
    vector<int> maxPoints = {45201, 38310, 84682, 18311, 58501, 31421, 18878, 20330, 11574, 14816, 39899, 4946, 33456, 13243, 30021, 71092, 23809, 48074, 35540, 39353, 51731, 8382, 916, 21765, 70025, 68634, 61279, 11627, 72079, 52021, 17132, 32134, 74705, 25865, 98706, 57205, 60923, 77234, 27699, 27582, 17641, 69621, 51808, 87792, 83281, 74519, 17105, 58458, 20904, 35416};
    vector<int> pointsPerMinute = {33, 18, 58, 1, 10, 18, 30, 3, 45, 15, 3, 51, 50, 66, 4, 4, 14, 3, 5, 2, 19, 9, 6, 2, 11, 5, 31, 3, 2, 13, 15, 19, 2, 1, 35, 57, 18, 96, 4, 6, 3, 4, 3, 20, 73, 67, 27, 10, 3, 3};
    vector<int> requiredTime = {6889, 3183, 1917, 4920, 4919, 4477, 6499, 6546, 2310, 2242, 5837, 6177, 1111, 2998, 2189, 1414, 1910, 1479, 2174, 3666, 1626, 4680, 3678, 3014, 1472, 2810, 4188, 4615, 1865, 1379, 1754, 3147, 1906, 3809, 1118, 4478, 4302, 1282, 1724, 1581, 1381, 1341, 1429, 3805, 2194, 2014, 1136, 3327, 2519, 3569};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 376360;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int T = 100000;
    vector<int> maxPoints = {34975, 44833, 47180, 20420, 96867, 3887, 87345, 78475, 3948, 31198, 56938, 43677, 28272, 74580, 18016, 60712, 82436, 92290, 39977, 63613, 36188, 76844, 56751, 7689, 16074, 59983, 61880, 25231, 45651, 2534, 30670, 38107, 26973, 10752, 49014, 21466, 33569, 50177, 94291, 80596, 79592, 31156, 69272, 5880, 1350, 12781, 79997, 82945, 16821, 95853};
    vector<int> pointsPerMinute = {64, 18, 3, 1, 12, 3, 1, 28, 7, 3, 6, 3, 12, 5, 3, 8, 9, 2, 1, 1, 2, 1, 11, 17, 3, 18, 3, 1, 1, 1, 1, 9, 79, 1, 37, 23, 10, 3, 3, 6, 2, 73, 19, 8, 1, 66, 12, 25, 9, 23};
    vector<int> requiredTime = {2962, 2928, 1761, 5436, 4936, 5402, 1790, 2837, 3601, 1972, 4518, 4755, 3361, 5141, 3034, 3463, 1342, 4087, 3791, 4328, 2700, 3324, 1222, 3841, 4002, 1679, 3066, 2145, 2380, 1597, 2751, 4134, 3170, 1906, 3160, 3030, 2950, 1326, 1727, 3350, 2334, 2343, 3669, 1804, 3324, 2822, 2176, 2150, 3058, 1415};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 590275;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int T = 100000;
    vector<int> maxPoints = {60553, 48854, 31940, 63827, 89951, 17682, 78018, 93356, 41337, 6232, 32537, 88472, 25493, 21913, 34922, 16876, 6422, 78744, 22747, 80430, 42540, 49477, 63644, 15564, 4119, 80905, 73782, 15011, 47442, 22257, 16069, 96555, 88801, 61222, 19073, 71029, 22692, 59242, 23594, 73357, 91183, 80954, 423, 7623, 95311, 35999, 80021, 33408, 73872, 50556};
    vector<int> pointsPerMinute = {2, 6, 76, 2, 1, 78, 11, 46, 9, 22, 3, 2, 29, 1, 61, 29, 6, 42, 61, 4, 3, 1, 6, 12, 4, 8, 2, 1, 1, 19, 77, 14, 82, 26, 2, 45, 5, 46, 20, 7, 1, 7, 11, 13, 1, 1, 5, 1, 88, 8};
    vector<int> requiredTime = {1633, 1196, 6334, 5730, 2717, 1635, 3749, 1948, 4816, 4282, 3900, 1564, 1913, 2820, 4285, 5018, 1314, 4662, 5201, 2805, 2811, 3444, 1775, 1085, 4710, 3060, 3023, 1542, 1330, 4359, 3132, 2902, 3697, 3890, 3889, 1381, 2401, 1868, 3665, 2721, 2870, 3171, 2171, 1406, 2375, 3340, 2554, 2471, 2496, 2939};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 613634;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int T = 100000;
    vector<int> maxPoints = {80100, 3536, 79117, 34140, 87606, 94674, 12033, 57545, 92821, 73954, 91291, 33373, 71273, 53653, 57988, 156, 81483, 72081, 9572, 30403, 23503, 6630, 93734, 88992, 89648, 63130, 99659, 21093, 56548, 6405, 87660, 32368, 44244, 59163, 69997, 46565, 99534, 72135, 60580, 35069, 26484, 51841, 42657, 29299, 46263, 93812, 31801, 88916, 2254, 45098};
    vector<int> pointsPerMinute = {67, 2, 24, 26, 2, 77, 4, 6, 2, 3, 42, 1, 1, 16, 5, 4, 10, 2, 2, 2, 16, 1, 89, 82, 23, 3, 22, 46, 1, 11, 7, 1, 1, 21, 8, 24, 4, 99, 6, 1, 84, 2, 65, 4, 2, 13, 4, 37, 10, 36};
    vector<int> requiredTime = {2306, 3522, 2198, 2642, 6791, 1989, 1511, 5561, 4611, 2192, 5944, 4144, 1190, 4764, 5276, 3567, 1680, 3278, 4648, 3747, 2115, 1184, 3311, 1898, 5083, 2495, 4230, 1304, 5089, 1776, 3681, 2920, 2914, 3999, 3038, 3536, 2423, 3895, 1435, 2836, 2424, 1606, 1112, 1711, 3132, 3457, 1288, 1953, 1452, 1142};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 511901;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int T = 100000;
    vector<int> maxPoints = {29832, 93449, 93894, 841, 9188, 87545, 43492, 62806, 10819, 18284, 43576, 8332, 63682, 61277, 14424, 46693, 6590, 70256, 84669, 75195, 33833, 50664, 54588, 60734, 39268, 49017, 29333, 87944, 41177, 82060, 11950, 61115, 30946, 68412, 82837, 1407, 81726, 38512, 82052, 33320, 9591, 89641, 96074, 50939, 79187, 22844, 32760, 53730, 72515, 85670};
    vector<int> pointsPerMinute = {41, 15, 14, 1, 7, 29, 9, 5, 1, 1, 5, 8, 6, 5, 21, 28, 1, 2, 7, 12, 22, 2, 4, 1, 12, 18, 31, 12, 2, 1, 1, 2, 1, 11, 9, 67, 10, 7, 1, 7, 10, 14, 1, 58, 11, 8, 12, 7, 22, 3};
    vector<int> requiredTime = {3698, 4637, 2809, 1259, 7272, 1305, 6991, 5777, 1246, 4018, 3218, 3253, 1571, 1275, 1797, 4140, 5913, 3079, 5852, 5638, 3115, 3683, 1795, 2269, 2433, 3998, 1781, 3249, 1980, 1943, 3238, 3983, 3999, 2142, 3981, 2249, 1749, 1803, 1133, 2102, 2863, 2345, 2136, 1715, 2410, 3259, 1602, 2882, 1294, 2121};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 563463;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int T = 100000;
    vector<int> maxPoints = {36392, 28871, 40742, 49329, 94140, 69404, 26045, 22829, 80009, 75812, 66049, 52956, 29961, 59835, 44404, 95972, 6861, 37284, 57822, 75883, 57105, 74595, 35781, 1377, 27852, 30192, 56464, 51519, 48467, 49060, 98759, 65067, 84880, 30790, 2317, 44457, 62631, 93919, 43336, 35850, 65040, 56417, 96568, 11752, 95909, 27675, 67817, 12770, 60035, 60244};
    vector<int> pointsPerMinute = {8, 1, 15, 10, 8, 21, 12, 92, 6, 3, 63, 8, 8, 94, 13, 90, 2, 59, 10, 3, 95, 1, 2, 8, 16, 11, 52, 2, 56, 95, 1, 67, 5, 8, 1, 8, 6, 1, 3, 9, 43, 10, 3, 1, 10, 68, 13, 26, 71, 54};
    vector<int> requiredTime = {3745, 1198, 3858, 6284, 2677, 5253, 5295, 5605, 1241, 5274, 5480, 2649, 4608, 1391, 1881, 4507, 3348, 1703, 4992, 4177, 4436, 2528, 3818, 3154, 1114, 1678, 3261, 1519, 1511, 3110, 2964, 3123, 3585, 2945, 1862, 2064, 1646, 3291, 3137, 1649, 3008, 2799, 2107, 1990, 2419, 1498, 2654, 2210, 2003, 1751};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 532113;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int T = 100000;
    vector<int> maxPoints = {48169, 11007, 39953, 63731, 56081, 27152, 21424, 52405, 35061, 57224, 56506, 4436, 2881, 46323, 94577, 85938, 91205, 24996, 62467, 58873, 11459, 40927, 13344, 99527, 27945, 10464, 54828, 10359, 51267, 41092, 19513, 80871, 9173, 20949, 2088, 89021, 85603, 76568, 29809, 79487, 63489, 68562, 74120, 94550, 81280, 92934, 6812, 50108, 88430, 41323};
    vector<int> pointsPerMinute = {8, 27, 2, 3, 23, 1, 12, 7, 2, 5, 1, 31, 66, 1, 26, 23, 1, 1, 9, 8, 1, 96, 7, 2, 2, 16, 17, 3, 13, 2, 42, 2, 66, 13, 1, 38, 7, 1, 51, 3, 14, 4, 21, 71, 9, 6, 3, 5, 6, 6};
    vector<int> requiredTime = {6523, 5462, 5423, 4562, 2091, 4350, 3838, 3253, 1294, 2483, 3387, 5114, 1221, 2579, 5019, 4580, 2685, 2795, 1764, 3480, 3437, 2402, 1416, 2077, 3908, 3426, 2051, 2905, 2424, 2048, 1331, 3908, 3198, 1795, 1719, 1751, 1812, 3295, 1972, 3506, 3018, 3518, 2229, 3328, 3189, 1422, 3243, 2378, 3161, 2230};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 556821;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int T = 100000;
    vector<int> maxPoints = {19857, 6174, 55739, 15741, 93572, 2047, 94991, 5822, 14973, 26886, 96544, 17318, 59897, 83399, 86835, 47292, 224, 30617, 13936, 55553, 72936, 34787, 11240, 70720, 51476, 90570, 60132, 51846, 7535, 67380, 23390, 4481, 35176, 26577, 53023, 4633, 73384, 40938, 27469, 37381, 84661, 47200, 87010, 1345, 96222, 54411, 85125, 80193, 87028, 76456};
    vector<int> pointsPerMinute = {33, 41, 12, 1, 50, 27, 2, 70, 80, 15, 2, 54, 55, 17, 67, 2, 15, 7, 5, 6, 16, 1, 2, 2, 2, 9, 4, 1, 4, 1, 71, 9, 6, 4, 35, 8, 98, 2, 44, 5, 27, 8, 5, 1, 2, 69, 6, 1, 24, 36};
    vector<int> requiredTime = {3503, 4047, 4084, 3514, 2990, 3061, 3050, 1693, 5837, 3514, 2111, 4873, 2700, 1863, 2868, 4287, 4956, 4474, 4413, 4591, 4565, 1302, 1446, 3173, 3894, 1941, 2343, 1736, 4557, 2194, 2721, 1679, 1658, 3530, 3825, 2397, 3931, 2938, 1868, 1156, 3699, 2279, 2083, 3481, 2360, 1614, 2581, 1319, 2658, 2643};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 593670;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int T = 100000;
    vector<int> maxPoints = {68593, 5376, 74038, 47487, 10469, 94277, 50270, 58719, 34307, 24449, 85049, 83270, 35998, 59663, 69045, 70007, 85730, 73619, 30735, 42473, 93791, 24312, 94357, 33344, 66159, 80650, 21731, 14672, 42859, 10542, 41099, 97409, 11969, 5754, 94110, 74879, 96572, 82777, 30410, 34961, 55263, 76019, 66014, 62961, 12447, 2406, 45510, 99136, 16737, 39454};
    vector<int> pointsPerMinute = {50, 1, 33, 95, 9, 20, 67, 1, 2, 5, 1, 22, 12, 1, 68, 1, 93, 12, 1, 29, 4, 35, 50, 82, 1, 64, 20, 42, 18, 1, 2, 1, 2, 3, 6, 83, 6, 9, 12, 9, 4, 13, 22, 1, 58, 1, 1, 6, 20, 35};
    vector<int> requiredTime = {4939, 6629, 2960, 4532, 6066, 5054, 3783, 1517, 1238, 1436, 4670, 3419, 4691, 3558, 4631, 4539, 3717, 3492, 4759, 3231, 3568, 1905, 3497, 4495, 1874, 3525, 3430, 1232, 2345, 3993, 3802, 1332, 3292, 1820, 2008, 3214, 1463, 1402, 1147, 1489, 1596, 1283, 2515, 2158, 2155, 2907, 1610, 1103, 3044, 1935};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 748424;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int T = 100000;
    vector<int> maxPoints = {17964, 70843, 40310, 51373, 81688, 13765, 63812, 84428, 78429, 36548, 64598, 68170, 88690, 79219, 23279, 2094, 79402, 43969, 40533, 74581, 13999, 85844, 50836, 98703, 99614, 6038, 82126, 43425, 85546, 82585, 84750, 31874, 32998, 96033, 49783, 61198, 36936, 88883, 25638, 93105, 47404, 5911, 23736, 81657, 23247, 10383, 35862, 93687, 40243, 6022};
    vector<int> pointsPerMinute = {1, 1, 10, 65, 6, 55, 6, 3, 10, 2, 1, 8, 5, 16, 32, 45, 10, 4, 34, 44, 60, 2, 8, 5, 1, 71, 1, 1, 63, 2, 5, 4, 62, 29, 8, 1, 2, 25, 2, 29, 10, 8, 2, 2, 9, 1, 72, 2, 74, 13};
    vector<int> requiredTime = {4669, 3184, 6423, 3373, 2434, 5051, 5684, 2121, 4585, 1953, 2149, 1328, 3383, 5319, 4145, 2236, 3249, 3473, 3097, 4419, 1746, 2284, 2523, 4012, 4696, 2739, 3430, 4345, 1733, 3247, 3748, 3852, 1151, 1698, 3026, 3145, 2188, 1613, 3558, 1136, 2723, 1719, 2025, 3495, 2089, 2768, 1281, 2960, 1515, 1280};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 698644;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int T = 56309;
    vector<int> maxPoints = {19644, 41610, 54805, 55108, 45595, 90013, 43788, 38572, 99988, 97078, 51306, 33771, 40654, 71602, 71452, 86854, 76804, 48000, 34275, 95249, 78928, 68238, 38111, 31106, 47522, 11661, 44743, 90655, 58675, 41864, 66114, 90459, 37452, 72015, 97481, 38451, 44563, 47494, 94211, 61964, 41780};
    vector<int> pointsPerMinute = {1, 4, 9, 2, 8, 7, 28, 1, 45, 3, 51, 1, 25, 1, 34, 4, 6, 9, 3, 2, 15, 42, 5, 56, 70, 70, 10, 18, 10, 1, 5, 3, 1, 9, 2, 26, 29, 1, 15, 2, 1};
    vector<int> requiredTime = {4858, 4042, 1982, 5502, 2919, 2250, 4633, 2542, 1094, 2039, 1553, 2501, 3380, 2873, 3717, 3908, 1345, 2939, 2505, 1572, 1093, 2454, 3172, 1085, 2159, 1368, 1703, 2517, 2430, 1500, 1275, 1380, 2417, 2812, 1220, 2333, 2128, 1403, 1671, 2501, 956};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 700763;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int T = 13154;
    vector<int> maxPoints = {86804, 84887, 62132, 71499, 28786, 45507, 51333, 80093, 63853, 11546, 97235, 79418, 58268, 46089, 15199, 59793, 80882, 65329, 80656, 6216, 64071, 50132, 27495, 96725, 66464, 36292, 73732, 9789, 85587, 51012, 8300, 10358, 71848, 52901, 93092, 97045, 73291, 76997, 21536, 60045, 96238, 53020, 55726, 93413, 65404, 32692, 44640, 51855, 3120, 61223};
    vector<int> pointsPerMinute = {98, 26, 2, 67, 35, 8, 5, 47, 33, 1, 51, 3, 1, 2, 47, 1, 2, 2, 3, 82, 24, 11, 6, 5, 17, 13, 21, 30, 28, 27, 29, 7, 26, 42, 7, 10, 6, 10, 10, 14, 24, 12, 33, 13, 3, 4, 7, 61, 44, 5};
    vector<int> requiredTime = {120, 418, 178, 390, 368, 496, 210, 399, 555, 238, 572, 603, 191, 473, 399, 207, 577, 146, 209, 111, 195, 181, 154, 351, 210, 358, 271, 430, 350, 244, 463, 305, 402, 141, 206, 253, 199, 292, 174, 174, 198, 273, 222, 228, 187, 174, 141, 138, 91, 218};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1489625;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int T = 53575;
    vector<int> maxPoints = {90674, 23179, 86042, 34339, 50642, 82324, 26190, 67196, 50076, 44877, 35503, 85536, 69089, 64121, 3627, 79516, 30663, 71199, 7564, 20634, 27324, 84264, 98819, 34382, 86817, 3064, 64221, 91560, 54163, 29982, 43568, 23135, 87160, 41850, 48598, 90591, 86064, 66346, 34785, 43440, 86665, 3149, 64133, 1917};
    vector<int> pointsPerMinute = {7, 14, 22, 82, 4, 8, 15, 1, 1, 17, 96, 1, 36, 3, 8, 2, 37, 28, 15, 12, 24, 2, 3, 96, 1, 4, 2, 21, 24, 9, 49, 1, 2, 2, 4, 4, 21, 2, 19, 1, 1, 47, 37, 12};
    vector<int> requiredTime = {1225, 2520, 2966, 951, 3096, 2394, 3889, 3387, 3349, 1647, 3718, 1205, 3302, 1117, 2014, 2782, 2549, 1215, 1551, 2443, 2417, 1314, 2131, 2573, 1216, 1676, 1065, 2168, 1761, 2268, 2546, 1916, 855, 2013, 1671, 1182, 1294, 1094, 1075, 1100, 910, 1486, 1967, 1500};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 925113;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int T = 77522;
    vector<int> maxPoints = {63701, 19891, 16791, 42803, 74587, 28116, 70018, 69445, 93059, 78517, 76401, 79704, 19684, 96150, 72926, 24293, 30244, 76263, 60143, 1122, 672, 98236, 2029, 25635, 86779, 50463, 63563, 87200, 9846};
    vector<int> pointsPerMinute = {11, 94, 4, 14, 25, 3, 7, 1, 1, 32, 12, 98, 1, 1, 3, 8, 1, 6, 11, 10, 63, 4, 100, 1, 9, 42, 14, 18, 3};
    vector<int> requiredTime = {6510, 8266, 3049, 11375, 10333, 4669, 3033, 7018, 6110, 8463, 7715, 5216, 2711, 3007, 4203, 5423, 2016, 5389, 6846, 5290, 2349, 4680, 5293, 1969, 2145, 4163, 2983, 5761, 4113};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 391477;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int T = 24763;
    vector<int> maxPoints = {26149, 34532, 56409, 44525, 70534, 10515, 52625, 15496, 93036, 79003};
    vector<int> pointsPerMinute = {96, 32, 28, 10, 1, 57, 77, 5, 5, 58};
    vector<int> requiredTime = {7342, 4815, 3626, 5574, 2564, 1784, 3444, 3334, 4442, 1313};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 134354;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int T = 70136;
    vector<int> maxPoints = {44865, 85968, 96770, 28727, 39918, 61062, 99839, 60370, 99205, 16155, 55468, 62766, 53560};
    vector<int> pointsPerMinute = {12, 25, 70, 3, 10, 1, 57, 5, 91, 6, 11, 9, 6};
    vector<int> requiredTime = {6317, 20223, 11387, 5505, 3020, 9304, 14591, 4724, 11013, 6511, 7530, 6060, 3368};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 96928;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int T = 71403;
    vector<int> maxPoints = {7732, 18937, 76515, 39197, 14372, 45608, 84064, 71465, 17101, 71520, 16526, 70157, 65520, 83674, 96714, 23118, 42124, 41704, 80665, 12286, 75389, 1460, 79049, 87247, 32432, 89816, 89274, 69383, 51962, 64447, 68206, 63126, 88982, 49202, 17875, 25881, 68205, 89719, 26540, 74029};
    vector<int> pointsPerMinute = {70, 17, 45, 37, 1, 17, 1, 8, 24, 12, 33, 11, 39, 11, 9, 2, 2, 18, 27, 45, 10, 17, 66, 3, 1, 1, 3, 16, 90, 2, 1, 6, 46, 7, 16, 35, 36, 1, 76, 37};
    vector<int> requiredTime = {1682, 4596, 3345, 1841, 1109, 2750, 5091, 2738, 4058, 4013, 1413, 2791, 3383, 3769, 3749, 2080, 3641, 1790, 2555, 3710, 2711, 1462, 3413, 1827, 2140, 2493, 1867, 1289, 2271, 2200, 931, 893, 3026, 1432, 1628, 2060, 2704, 2328, 2225, 1283};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 593161;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int T = 59428;
    vector<int> maxPoints = {94030, 93799, 70978, 59521, 61537, 84452, 52781, 28387, 7041, 81522};
    vector<int> pointsPerMinute = {2, 1, 32, 2, 1, 17, 4, 3, 10, 6};
    vector<int> requiredTime = {17972, 18074, 19287, 5517, 16199, 4318, 9567, 11411, 4441, 4777};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 176750;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int T = 13361;
    vector<int> maxPoints = {87758, 66367, 83724, 37758, 13139, 91899, 78109, 30713, 22266, 72903, 49868, 65359, 75126, 99556, 51362, 17871, 18678, 10000, 43023, 87074, 41935, 29921, 54686, 70987, 61017, 24509, 40296, 41306, 52143, 99074, 29296, 26479, 35376, 81414, 69068, 66012, 26834};
    vector<int> pointsPerMinute = {1, 15, 13, 1, 3, 11, 4, 9, 48, 81, 1, 79, 6, 6, 8, 1, 61, 3, 1, 26, 22, 1, 3, 45, 8, 17, 1, 21, 33, 1, 17, 7, 1, 2, 9, 7, 44};
    vector<int> requiredTime = {416, 437, 1074, 594, 744, 402, 907, 649, 514, 752, 826, 374, 408, 519, 268, 439, 733, 593, 362, 516, 299, 397, 440, 624, 511, 643, 458, 256, 239, 466, 490, 361, 410, 547, 361, 200, 344};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1080685;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int T = 32674;
    vector<int> maxPoints = {84324, 73620, 60321, 97222, 81628, 12697, 11127, 65204, 62053, 53692, 64256, 44744, 95610, 14015, 29265, 69594, 97693, 67677, 96966, 19765, 29923, 4545, 73422, 99388, 19483, 20620, 87768, 88134, 10115, 89061, 32602, 84361, 46993, 27146, 70927, 68548, 40137, 42278, 31574, 43308, 44776, 89985, 20587, 26309, 81191, 25795};
    vector<int> pointsPerMinute = {2, 5, 1, 10, 4, 8, 72, 3, 11, 1, 49, 5, 2, 1, 2, 20, 15, 1, 83, 12, 3, 23, 8, 9, 19, 2, 63, 8, 6, 1, 66, 5, 55, 77, 2, 47, 2, 2, 3, 6, 10, 21, 10, 3, 73, 4};
    vector<int> requiredTime = {1999, 1924, 915, 1915, 1173, 398, 1632, 350, 1226, 1395, 772, 428, 462, 1563, 784, 936, 1352, 821, 1399, 821, 347, 518, 1374, 604, 1060, 1394, 1131, 1062, 610, 770, 1119, 1198, 876, 409, 637, 506, 669, 521, 1005, 400, 1040, 535, 341, 357, 930, 711};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 984507;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> requiredTime = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> requiredTime = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
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
    int T = 685;
    vector<int> maxPoints = {6368, 95813, 40011, 21328, 96782, 73382, 76476, 95947, 68188, 99481, 49343, 40368, 48094, 21521, 25446, 19600, 30245, 36127, 21448, 1196, 15183, 46830, 9230, 93782, 49195, 27584, 30829, 68974, 12514, 13575, 9387, 95898, 45666, 27218, 95185, 84390, 24509, 95962, 3019, 12644, 66423, 27880, 21677, 30983, 68154, 26059, 99206, 41780, 30786, 75612};
    vector<int> pointsPerMinute = {25, 23, 19, 9, 39, 13, 50, 41, 29, 49, 40, 7, 27, 40, 4, 41, 12, 9, 44, 42, 33, 29, 49, 47, 48, 38, 25, 41, 8, 37, 31, 11, 20, 27, 34, 22, 17, 39, 40, 14, 8, 5, 26, 24, 1, 33, 41, 31, 14, 46};
    vector<int> requiredTime = {25, 23, 19, 9, 39, 13, 50, 41, 29, 49, 40, 7, 27, 40, 4, 41, 12, 9, 44, 42, 33, 29, 49, 47, 48, 38, 25, 41, 8, 37, 31, 11, 20, 27, 34, 22, 17, 39, 40, 14, 8, 5, 26, 24, 1, 33, 41, 31, 14, 46};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1586461;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int T = 242;
    vector<int> maxPoints = {15280, 46580, 81266, 83474, 2314, 99075, 62766, 52487, 38912, 91761, 756, 4509, 22128, 32218, 28672, 30306, 13772, 45782, 84754, 24876, 73180, 68451, 19794, 32958, 91216, 46838, 31019, 87370, 6962, 39688, 34811, 61174, 31140, 68501, 13123, 50113, 31071, 75866, 38998, 59200, 6523, 7780, 68872, 29309, 30589, 20941, 79655, 48947, 60806, 53586};
    vector<int> pointsPerMinute = {38, 12, 19, 30, 34, 22, 13, 12, 38, 26, 33, 7, 9, 35, 22, 28, 41, 37, 46, 19, 4, 26, 24, 15, 34, 48, 17, 7, 50, 27, 6, 37, 46, 3, 28, 18, 42, 12, 31, 35, 42, 5, 39, 27, 34, 32, 17, 42, 44, 48};
    vector<int> requiredTime = {38, 12, 19, 30, 34, 22, 13, 12, 38, 26, 33, 7, 9, 35, 22, 28, 41, 37, 46, 19, 4, 26, 24, 15, 34, 48, 17, 7, 50, 27, 6, 37, 46, 3, 28, 18, 42, 12, 31, 35, 42, 5, 39, 27, 34, 32, 17, 42, 44, 48};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1056709;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int T = 993;
    vector<int> maxPoints = {41912, 29871, 46555, 69557, 3041, 10598, 90096, 12183, 77607, 97317, 66158, 27729, 38126, 13856, 60665, 76904, 38546, 4895, 95336, 39801, 29655, 52621, 87757, 53444, 84566, 19906, 59811, 54747, 32191, 53833, 20106, 73912, 2774, 98921, 35532, 55722, 75992, 773, 99268, 87009, 78145, 92965, 92080, 36943, 50866, 80320, 538, 44908, 11056, 48515};
    vector<int> pointsPerMinute = {5, 7, 2, 4, 28, 5, 17, 38, 18, 34, 18, 48, 7, 18, 12, 8, 19, 19, 42, 20, 22, 14, 28, 25, 22, 23, 19, 10, 39, 2, 29, 8, 17, 2, 20, 26, 30, 33, 38, 41, 19, 16, 48, 21, 38, 17, 44, 28, 34, 18};
    vector<int> requiredTime = {5, 7, 2, 4, 28, 5, 17, 38, 18, 34, 18, 48, 7, 18, 12, 8, 19, 19, 42, 20, 22, 14, 28, 25, 22, 23, 19, 10, 39, 2, 29, 8, 17, 2, 20, 26, 30, 33, 38, 41, 19, 16, 48, 21, 38, 17, 44, 28, 34, 18};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2134319;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int T = 227;
    vector<int> maxPoints = {41378, 34472, 3768, 55270, 90419, 92347, 97453, 5832, 33459, 69538, 23872, 41481, 76230, 83221, 23223, 14900, 1349, 20281, 69670, 27525, 44632, 11551, 95885, 45512, 35856, 10990, 8932, 93288, 13682, 62512, 68942, 24656, 79029, 43508, 90616, 70074, 31393, 7002, 98213, 79180, 3782, 63801, 18220, 73493, 64696, 36566, 61454, 30767, 89685, 61326};
    vector<int> pointsPerMinute = {8, 15, 17, 19, 26, 17, 22, 1, 4, 22, 44, 41, 24, 16, 29, 45, 1, 10, 2, 13, 6, 15, 47, 17, 28, 19, 36, 9, 9, 49, 14, 40, 39, 26, 43, 6, 25, 16, 32, 39, 31, 27, 45, 17, 47, 3, 33, 35, 21, 46};
    vector<int> requiredTime = {8, 15, 17, 19, 26, 17, 22, 1, 4, 22, 44, 41, 24, 16, 29, 45, 1, 10, 2, 13, 6, 15, 47, 17, 28, 19, 36, 9, 9, 49, 14, 40, 39, 26, 43, 6, 25, 16, 32, 39, 31, 27, 45, 17, 47, 3, 33, 35, 21, 46};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1131601;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int T = 1125;
    vector<int> maxPoints = {60862, 40725, 80305, 98840, 69980, 61739, 46592, 43757, 85781, 72732, 69792, 25944, 95153, 26953, 67465, 66505, 75614, 39953, 47085, 69251, 21606, 70601, 39096, 33299, 60897, 45731, 43473, 13136, 68713, 19961, 73631, 84019, 43906, 59064, 60152, 62556, 90867, 64673, 28290, 50313, 24890, 801, 90941, 19708, 94987, 51844, 51556, 19304, 58478, 69474};
    vector<int> pointsPerMinute = {37, 5, 21, 26, 49, 16, 14, 29, 37, 32, 34, 15, 6, 1, 21, 44, 11, 4, 1, 38, 19, 37, 32, 36, 12, 5, 5, 12, 48, 25, 29, 32, 19, 21, 38, 27, 48, 7, 12, 41, 49, 13, 3, 50, 27, 20, 14, 46, 7, 32};
    vector<int> requiredTime = {37, 5, 21, 26, 49, 16, 14, 29, 37, 32, 34, 15, 6, 1, 21, 44, 11, 4, 1, 38, 19, 37, 32, 36, 12, 5, 5, 12, 48, 25, 29, 32, 19, 21, 38, 27, 48, 7, 12, 41, 49, 13, 3, 50, 27, 20, 14, 46, 7, 32};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2139562;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int T = 1648;
    vector<int> maxPoints = {67642, 83749, 10451, 16809, 49469, 25515, 70447, 6381, 64983, 26959, 95536, 90540, 2628, 65209, 566, 26050, 24457, 88625, 55724, 85101, 55176, 98104, 62631, 22872, 38277, 7162, 53894, 39168, 72465, 29978, 9359, 45892, 62475, 86720, 29597, 83937, 96495, 72249, 85951, 56834, 82456, 53792, 96229, 90149, 24726, 77742, 57498, 28834, 77822, 47679};
    vector<int> pointsPerMinute = {43, 42, 42, 31, 48, 40, 46, 48, 45, 45, 36, 35, 35, 47, 50, 46, 48, 38, 45, 39, 38, 43, 48, 30, 38, 31, 40, 43, 49, 45, 43, 41, 45, 36, 33, 37, 38, 33, 32, 39, 43, 30, 49, 35, 44, 38, 35, 38, 36, 41};
    vector<int> requiredTime = {43, 42, 42, 31, 48, 40, 46, 48, 45, 45, 36, 35, 35, 47, 50, 46, 48, 38, 45, 39, 38, 43, 48, 30, 38, 31, 40, 43, 49, 45, 43, 41, 45, 36, 33, 37, 38, 33, 32, 39, 43, 30, 49, 35, 44, 38, 35, 38, 36, 41};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1493785;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int T = 248;
    vector<int> maxPoints = {36125, 63218, 69216, 27747, 23962, 58277, 48997, 56052, 14703, 5423, 36661, 29270, 76987, 24989, 72325, 20875, 57652, 89442, 47509, 8240, 59542, 28676, 22617, 30401, 89300, 22644, 97800, 17475, 79631, 75489, 82339, 31555, 17192, 97063, 77040, 43525, 22677, 19328, 25372, 24599, 36053, 79322, 31456, 40450, 37436, 61348, 60639, 7207, 25502, 81629};
    vector<int> pointsPerMinute = {33, 43, 34, 50, 44, 32, 39, 49, 47, 30, 50, 30, 32, 37, 48, 40, 44, 47, 45, 41, 45, 44, 38, 40, 45, 47, 30, 35, 33, 43, 36, 39, 43, 50, 34, 32, 48, 45, 33, 41, 50, 45, 47, 45, 37, 48, 36, 33, 35, 40};
    vector<int> requiredTime = {33, 43, 34, 50, 44, 32, 39, 49, 47, 30, 50, 30, 32, 37, 48, 40, 44, 47, 45, 41, 45, 44, 38, 40, 45, 47, 30, 35, 33, 43, 36, 39, 43, 50, 34, 32, 48, 45, 33, 41, 50, 45, 47, 45, 37, 48, 36, 33, 35, 40};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 538222;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int T = 512;
    vector<int> maxPoints = {98826, 50522, 98104, 27267, 28633, 60837, 13647, 83863, 65716, 31360, 5552, 50073, 33433, 2630, 83779, 6176, 84793, 92422, 92042, 99341, 98486, 91362, 68906, 59931, 53537, 62082, 4961, 25575, 67819, 39643, 19491, 87486, 66683, 29397, 31410, 98468, 56359, 29452, 60478, 38421, 83411, 22333, 81910, 39765, 42790, 15676, 90868, 80967, 44617, 22958};
    vector<int> pointsPerMinute = {42, 34, 49, 50, 39, 44, 43, 32, 33, 49, 39, 30, 32, 44, 49, 32, 35, 30, 34, 44, 41, 44, 49, 45, 36, 33, 30, 31, 31, 30, 46, 39, 35, 50, 42, 31, 40, 49, 46, 50, 48, 40, 35, 47, 34, 43, 50, 36, 31, 36};
    vector<int> requiredTime = {42, 34, 49, 50, 39, 44, 43, 32, 33, 49, 39, 30, 32, 44, 49, 32, 35, 30, 34, 44, 41, 44, 49, 45, 36, 33, 30, 31, 31, 30, 46, 39, 35, 50, 42, 31, 40, 49, 46, 50, 48, 40, 35, 47, 34, 43, 50, 36, 31, 36};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1089601;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int T = 1066;
    vector<int> maxPoints = {80740, 71367, 9190, 98210, 59561, 17628, 66674, 80375, 83905, 4882, 84629, 89985, 49903, 26403, 42684, 56727, 90055, 85828, 46394, 19685, 23653, 51766, 79561, 68723, 86886, 65369, 8107, 83312, 16318, 72003, 43200, 88972, 21324, 67262, 44250, 70429, 17011, 92747, 37483, 61304, 32864, 65416, 2694, 5686, 44552, 44469, 49602, 83588, 62092, 41807};
    vector<int> pointsPerMinute = {48, 36, 39, 35, 46, 41, 47, 32, 37, 35, 49, 35, 40, 50, 49, 38, 41, 50, 36, 31, 47, 41, 50, 36, 30, 36, 31, 50, 37, 50, 40, 45, 42, 41, 41, 38, 50, 46, 32, 48, 47, 49, 31, 49, 46, 44, 33, 49, 46, 45};
    vector<int> requiredTime = {48, 36, 39, 35, 46, 41, 47, 32, 37, 35, 49, 35, 40, 50, 49, 38, 41, 50, 36, 31, 47, 41, 50, 36, 30, 36, 31, 50, 37, 50, 40, 45, 42, 41, 41, 38, 50, 46, 32, 48, 47, 49, 31, 49, 46, 44, 33, 49, 46, 45};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1353881;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int T = 1274;
    vector<int> maxPoints = {2320, 44265, 60154, 74323, 19197, 77402, 99163, 63785, 81337, 42365, 5464, 85584, 53033, 38990, 27422, 45762, 10930, 42624, 60622, 72785, 79746, 55837, 99665, 95810, 53390, 56575, 36900, 71575, 84171, 59056, 18667, 37459, 37369, 50514, 95444, 62170, 75186, 1887, 84148, 16998, 75370, 73103, 81144, 22891, 5491, 88609, 37824, 28477, 92365, 81767};
    vector<int> pointsPerMinute = {44, 44, 48, 46, 31, 38, 48, 46, 35, 49, 50, 39, 47, 36, 45, 43, 35, 39, 44, 38, 34, 30, 35, 50, 34, 49, 46, 39, 33, 30, 30, 31, 47, 37, 50, 48, 32, 45, 33, 47, 48, 50, 42, 45, 41, 48, 34, 42, 40, 48};
    vector<int> requiredTime = {44, 44, 48, 46, 31, 38, 48, 46, 35, 49, 50, 39, 47, 36, 45, 43, 35, 39, 44, 38, 34, 30, 35, 50, 34, 49, 46, 39, 33, 30, 30, 31, 47, 37, 50, 48, 32, 45, 33, 47, 48, 50, 42, 45, 41, 48, 34, 42, 40, 48};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1458106;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int T = 119;
    vector<int> maxPoints = {70211, 74626, 6529, 24351, 87591, 11385, 94528, 22923, 89767, 85575};
    vector<int> pointsPerMinute = {49, 45, 40, 42, 44, 45, 40, 50, 43, 46};
    vector<int> requiredTime = {49, 45, 40, 42, 44, 45, 40, 50, 43, 46};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 179126;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int T = 48;
    vector<int> maxPoints = {9890, 50346, 96310, 68266, 63407, 38658, 50809, 88016, 61875, 23352};
    vector<int> pointsPerMinute = {43, 46, 50, 43, 47, 46, 50, 46, 46, 50};
    vector<int> requiredTime = {43, 46, 50, 43, 47, 46, 50, 46, 46, 50};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 85900;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int T = 286;
    vector<int> maxPoints = {65940, 73511, 45124, 8783, 10077, 11502, 89394, 34620, 43891, 42688};
    vector<int> pointsPerMinute = {47, 48, 44, 46, 43, 43, 45, 45, 44, 45};
    vector<int> requiredTime = {47, 48, 44, 46, 43, 43, 45, 45, 44, 45};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 317066;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int T = 33;
    vector<int> maxPoints = {35815, 98513, 26013, 55966, 19126, 56650, 41650, 82987, 39540, 73409};
    vector<int> pointsPerMinute = {48, 43, 48, 46, 47, 49, 48, 47, 40, 40};
    vector<int> requiredTime = {48, 43, 48, 46, 47, 49, 48, 47, 40, 40};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int T = 180;
    vector<int> maxPoints = {69493, 61292, 82681, 48874, 45101, 1506, 58580, 44267, 64763, 93533};
    vector<int> pointsPerMinute = {46, 43, 46, 47, 40, 42, 47, 46, 48, 46};
    vector<int> requiredTime = {46, 43, 46, 47, 40, 42, 47, 46, 48, 46};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 270992;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int T = 1093;
    vector<int> maxPoints = {64259, 45522, 26889, 13379, 3996, 18079, 64673, 89635, 25870, 80232, 97983, 97550, 57637, 83260, 50450, 89116, 72435, 64063, 22020, 99462, 50983, 18618, 7977, 59974, 9165, 64367, 24715, 60849, 92323, 47023, 51142, 34380, 90878, 32929, 21378, 21610, 13168, 26636, 54479, 21159, 92259, 63372, 39809, 97127, 60632, 22630, 49205, 49908, 10392, 3466};
    vector<int> pointsPerMinute = {10, 10, 44, 28, 42, 10, 26, 42, 12, 22, 30, 30, 24, 16, 8, 4, 8, 44, 24, 40, 14, 20, 44, 42, 6, 32, 14, 10, 30, 10, 16, 18, 16, 20, 2, 36, 2, 32, 26, 18, 24, 38, 6, 26, 16, 30, 46, 34, 24, 14};
    vector<int> requiredTime = {10, 10, 44, 28, 42, 10, 26, 42, 12, 22, 30, 30, 24, 16, 8, 4, 8, 44, 24, 40, 14, 20, 44, 42, 6, 32, 14, 10, 30, 10, 16, 18, 16, 20, 2, 36, 2, 32, 26, 18, 24, 38, 6, 26, 16, 30, 46, 34, 24, 14};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1952492;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int T = 86526;
    vector<int> maxPoints = {73290, 65249, 1835, 75277, 12984, 30318, 73714, 99775, 19839, 79286, 28961, 84496, 14482, 57654, 22166, 70625, 75639, 65227, 84328, 19520, 73942, 64750, 36005, 61605, 95243, 79920, 14466, 30592, 43827, 59785, 21158, 1236, 65266, 31434, 58665, 92646, 63695, 61876, 70613, 9742, 7606, 60460, 85503, 80865, 20551, 43078, 2719, 91463, 74537, 52620};
    vector<int> pointsPerMinute = {88, 47, 43, 38, 40, 70, 28, 58, 24, 64, 5, 53, 87, 15, 99, 68, 82, 56, 46, 31, 43, 38, 19, 73, 90, 14, 2752, 24331, 18658, 14530, 18471, 29572, 5576, 3533, 8775, 28694, 9511, 103, 20281, 6418, 7575, 25162, 26779, 28213, 3229, 12227, 2273, 24148, 24760, 854};
    vector<int> requiredTime = {183, 987, 821, 512, 108, 662, 589, 750, 193, 70, 457, 255, 249, 286, 678, 547, 127, 236, 959, 22, 726, 31, 817, 232, 630, 49, 1830, 2385, 29130, 1512, 12855, 18692, 15363, 3335, 6176, 3289, 12393, 13075, 1732, 22613, 17435, 17007, 28934, 2466, 17592, 16285, 2148, 2250, 28882, 5299};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 454662;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int T = 30;
    vector<int> maxPoints = {100, 97000, 100000};
    vector<int> pointsPerMinute = {1, 1, 100};
    vector<int> requiredTime = {15, 15, 30};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 97055;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int T = 20000;
    vector<int> maxPoints = {61928, 74861, 82954, 82940, 97611, 65846, 73378, 96012, 50139, 73409, 81665, 58332, 80447, 58627, 76397, 55452, 67986, 62079, 65734, 51610, 94905, 69102, 51946, 88077, 82657, 84998, 79768, 72144, 89289, 53009, 65652, 59220, 67101, 75738, 52775, 56346, 79836, 55539, 87875, 97387, 52831, 88683, 96157, 80010, 58186, 92327, 89953, 54325, 96144, 88987};
    vector<int> pointsPerMinute = {1, 3, 4, 5, 4, 5, 5, 1, 4, 4, 3, 1, 3, 3, 2, 5, 2, 5, 5, 4, 4, 4, 3, 3, 4, 2, 4, 1, 5, 3, 1, 3, 1, 5, 2, 3, 4, 1, 1, 4, 4, 3, 3, 3, 4, 3, 2, 1, 4, 3};
    vector<int> requiredTime = {2077, 4694, 4405, 2714, 4926, 2630, 2304, 3842, 3426, 2699, 3484, 4482, 4841, 2295, 4954, 3137, 3062, 3348, 3894, 2842, 2120, 2494, 3074, 4008, 3444, 4686, 4116, 2225, 3980, 2352, 4970, 2931, 2516, 4251, 2576, 2426, 4040, 4151, 2918, 2053, 2387, 4677, 3406, 3884, 2920, 3907, 2688, 3014, 4136, 2424};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 544155;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int T = 99325;
    vector<int> maxPoints = {31600, 19455, 1531, 26622, 6463, 10771, 19070, 28279, 14601, 9037, 32322, 30991, 6871, 8040, 12973, 14821, 13655, 21282, 16141, 2650, 7799, 22151, 3537, 21364, 25138, 28785, 18937, 21893, 15274, 15184, 203, 4871, 25720, 1831, 3016, 25291, 28224, 7383, 22238, 27987, 23176, 18080, 22239, 6524, 25802, 16869, 17458, 11359, 12999, 32303};
    vector<int> pointsPerMinute = {88, 97, 96, 29, 63, 41, 85, 8, 78, 11, 60, 93, 26, 30, 59, 68, 31, 78, 50, 82, 33, 20, 59, 57, 19, 82, 69, 78, 84, 70, 33, 37, 43, 32, 5, 38, 46, 76, 22, 20, 47, 67, 57, 16, 76, 94, 58, 88, 49, 30};
    vector<int> requiredTime = {957, 88, 251, 623, 354, 911, 303, 381, 274, 372, 256, 728, 959, 849, 846, 837, 182, 393, 824, 130, 627, 67, 845, 131, 261, 149, 339, 945, 595, 243, 896, 992, 973, 98, 904, 25, 625, 378, 727, 854, 577, 606, 592, 615, 575, 296, 87, 177, 738, 309};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101683;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int T = 100000;
    vector<int> maxPoints = {98933, 87918, 84145, 97986, 93545, 89258, 92222, 91037, 87341, 87406, 91127, 95834, 85694, 92473, 86944, 92070, 88577, 81336, 96994, 81322, 96998, 82972, 90171, 90791, 81693, 93382, 93890, 96274, 80683, 99351, 96376, 95402, 95297, 94805, 89170, 84939, 83974, 83285, 80903, 89068, 93696, 83431, 97249, 98022, 83594, 95009, 99426, 81527, 91017, 89450};
    vector<int> pointsPerMinute = {25, 15, 22, 28, 6, 25, 1, 7, 8, 8, 20, 19, 12, 22, 17, 1, 25, 10, 9, 9, 16, 22, 9, 17, 30, 24, 1, 1, 22, 20, 24, 25, 10, 10, 4, 1, 14, 2, 24, 18, 2, 13, 30, 5, 27, 13, 30, 10, 4, 20};
    vector<int> requiredTime = {221, 280, 716, 519, 421, 326, 849, 477, 253, 639, 8, 882, 380, 584, 202, 929, 265, 238, 30, 451, 259, 296, 430, 596, 241, 73, 483, 694, 141, 357, 136, 970, 256, 959, 48, 329, 967, 603, 370, 921, 882, 152, 344, 435, 517, 441, 669, 56, 562, 136};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2322360;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int T = 5437;
    vector<int> maxPoints = {32392, 154, 17422, 19896, 14772, 19913};
    vector<int> pointsPerMinute = {52, 95, 6, 3, 55, 27};
    vector<int> requiredTime = {42, 8, 18, 46, 88, 65};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 87741;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int T = 100000;
    vector<int> maxPoints = {969, 6816, 7741, 5022, 6648, 83, 733, 7167, 2098, 1497, 9852, 4423, 9580, 8015, 2260, 7307, 9519, 766, 9350, 2176, 324, 3554, 152, 8750, 9096, 8352, 7385, 6606, 3449, 532, 9888, 770, 7347, 7628, 5791, 3994, 7711, 2876, 7512, 9808, 4372, 3716, 582, 303, 8082, 9193, 7609, 3952, 9958, 3310};
    vector<int> pointsPerMinute = {27, 33, 15, 31, 82, 11, 82, 19, 68, 83, 50, 55, 4, 48, 34, 94, 93, 44, 69, 56, 3, 92, 71, 36, 94, 53, 28, 54, 4, 37, 63, 83, 69, 78, 13, 3, 40, 46, 73, 7, 28, 74, 13, 31, 73, 46, 77, 65, 42, 97};
    vector<int> requiredTime = {12, 19, 10, 3, 2, 13, 17, 7, 22, 19, 19, 2, 13, 22, 14, 8, 7, 7, 9, 21, 18, 7, 12, 4, 15, 21, 14, 1, 20, 15, 17, 9, 4, 3, 11, 5, 16, 4, 6, 8, 22, 1, 9, 6, 16, 17, 13, 23, 23, 15};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 130078;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000};
    vector<int> pointsPerMinute = {1, 100};
    vector<int> requiredTime = {1, 2};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 199797;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {71, 65, 71, 58, 71, 43, 81, 24, 38, 85, 59, 94, 37, 1, 19, 57, 33, 96, 22, 43, 16, 69, 11, 78, 59, 69, 45, 23, 7, 59, 30, 30, 23, 1, 39, 46, 43, 19, 69, 81, 3, 79, 26, 39, 79, 44, 47, 64, 40, 69};
    vector<int> requiredTime = {58, 55, 37, 68, 84, 48, 88, 28, 70, 95, 38, 99, 76, 13, 51, 14, 10, 46, 32, 78, 78, 86, 56, 3, 24, 86, 46, 71, 49, 37, 91, 7, 43, 27, 26, 26, 26, 14, 6, 95, 60, 95, 46, 87, 7, 48, 100, 16, 93, 83};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3331366;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int T = 100;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {100, 100, 104, 100, 31};
    vector<int> requiredTime = {30, 30, 31, 30, 10};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 378900;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int T = 3;
    vector<int> maxPoints = {10, 10, 10, 14};
    vector<int> pointsPerMinute = {1, 1, 1, 1};
    vector<int> requiredTime = {1, 1, 1, 3};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int T = 200;
    vector<int> maxPoints = {100, 50};
    vector<int> pointsPerMinute = {1, 2};
    vector<int> requiredTime = {1, 5};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1, 12, 13, 14, 15, 16, 17, 19, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4995694;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int T = 100000;
    vector<int> maxPoints = {16808, 75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924, 37710, 64441, 38166, 84493, 43043, 7988, 22504, 82328, 31730, 78841, 42613, 44304, 33170, 17710, 97158, 29561, 70934, 93100, 80279, 51817, 95336, 99098, 7827, 13513, 29268, 23811, 77634, 80980, 79150, 36580, 58822, 11968, 10673, 1394, 19337, 25486, 91746, 25229, 94092, 40195, 86358};
    vector<int> pointsPerMinute = {2, 54, 9, 45, 69, 91, 25, 97, 31, 4, 23, 67, 50, 25, 2, 54, 78, 9, 29, 34, 99, 82, 36, 14, 66, 15, 64, 37, 26, 70, 16, 95, 30, 2, 18, 96, 6, 5, 52, 99, 89, 24, 6, 83, 53, 67, 17, 38, 39, 45};
    vector<int> requiredTime = {502, 898, 872, 829, 138, 359, 178, 398, 295, 905, 610, 232, 746, 176, 636, 299, 143, 400, 969, 413, 261, 558, 595, 9, 396, 969, 114, 531, 7, 963, 943, 366, 83, 853, 768, 822, 696, 713, 672, 902, 591, 832, 739, 58, 617, 791, 641, 680, 336, 7};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 735921;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int T = 100000;
    vector<int> maxPoints = {48986, 64589, 41848, 70314, 64255, 14905, 4435, 6607, 39979, 1749, 36570, 98474, 40318, 91264, 45563, 61235, 85593, 51263, 68597, 12190, 25377, 20333, 89311, 79100, 82675, 26960, 65299, 20154, 37438, 51303, 13206, 42855, 8801, 35007, 11364, 83956, 82690, 70821, 38076, 2835, 89416, 36661, 13478, 20738, 91478, 593, 24221, 89889, 94501, 97358};
    vector<int> pointsPerMinute = {3, 34, 27, 6, 37, 46, 9, 30, 5, 35, 1, 2, 37, 34, 49, 47, 9, 15, 16, 29, 10, 17, 16, 9, 23, 38, 43, 32, 2, 48, 39, 13, 42, 9, 36, 20, 30, 46, 10, 11, 18, 27, 25, 21, 4, 26, 2, 2, 37, 1};
    vector<int> requiredTime = {53675, 13233, 36095, 11576, 22495, 42625, 91509, 84544, 22904, 49548, 94968, 68181, 84152, 65834, 16858, 9367, 91378, 78746, 83451, 47570, 7009, 41204, 24491, 18077, 38117, 87097, 69622, 37700, 82235, 35020, 60529, 18272, 66551, 71706, 59296, 81857, 24865, 86292, 74017, 35437, 5289, 12029, 51512, 39363, 13864, 66591, 62680, 59096, 31893, 61464};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 58052;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int T = 98765;
    vector<int> maxPoints = {11989, 10535, 3273, 4893, 6826, 3298, 11439, 7646, 5201, 4788, 6526, 5252, 11203, 6431, 5910, 11451, 5605, 9628, 8118, 3572, 6246, 9970, 5559, 10509, 4700, 6379, 10176, 4583, 8179, 5966, 9421, 11230, 2953, 7471, 11235, 5675, 8977, 3578, 5339, 2877, 11498, 10712, 3426, 9566, 3859, 5265, 11442, 4969, 8502, 10889};
    vector<int> pointsPerMinute = {78, 52, 3, 8, 38, 12, 20, 19, 64, 66, 35, 91, 9, 9, 7, 39, 46, 23, 52, 39, 90, 88, 53, 42, 10, 100, 1, 28, 8, 94, 4, 10, 98, 96, 52, 96, 11, 2, 62, 65, 2, 61, 47, 76, 11, 17, 81, 73, 53, 36};
    vector<int> requiredTime = {485, 153, 149, 435, 880, 350, 225, 862, 37, 966, 464, 912, 801, 697, 71, 31, 818, 861, 207, 327, 356, 825, 575, 442, 329, 170, 458, 3, 624, 289, 884, 208, 268, 685, 773, 959, 238, 754, 575, 602, 998, 388, 577, 274, 358, 161, 329, 383, 449, 136};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49186;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int T = 88171;
    vector<int> maxPoints = {71694, 17948, 56112, 4165, 91883, 41732, 23644, 56771, 63173, 70532, 99260, 16924, 2514, 54240, 89892, 21053, 86532, 39763, 38723, 64522, 78492, 72945, 41769, 82043, 79647, 31523, 55814, 43634, 98154, 61309, 22923, 38339, 41854, 5933, 34739, 36507, 85672, 89525, 4838, 94782, 62593, 91178, 30164, 82066, 17474, 9927, 13182, 97418, 18750, 32251};
    vector<int> pointsPerMinute = {484, 8020, 1451, 7330, 7922, 2415, 3531, 348, 8636, 2108, 3802, 1749, 4212, 4728, 2963, 1046, 4689, 1460, 4632, 1516, 775, 4050, 2916, 7155, 7046, 4450, 982, 7096, 5818, 340, 5183, 8127, 6247, 8289, 4287, 5810, 1623, 1608, 9761, 7421, 6696, 5034, 3239, 9171, 3909, 6767, 8790, 8315, 3152, 4285};
    vector<int> requiredTime = {65, 39, 75, 100, 10, 80, 80, 8, 48, 70, 54, 73, 75, 4, 25, 91, 21, 68, 56, 63, 16, 64, 27, 7, 69, 14, 2, 13, 45, 60, 86, 35, 2, 57, 54, 4, 37, 32, 2, 93, 75, 53, 99, 87, 74, 35, 57, 64, 77, 49};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 241392;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int T = 100000;
    vector<int> maxPoints = {89384, 30887, 92778, 36916, 47794, 38336, 85387, 60493, 16650, 41422, 2363, 90028, 68691, 20060, 97764, 13927, 80541, 83427, 89173, 55737, 5212, 95369, 2568, 56430, 65783, 21531, 22863, 65124, 74068, 3136, 13930, 79803, 34023, 23059, 33070, 98168, 61394, 18457, 75012, 78043, 76230, 77374, 84422, 44920, 13785, 98538, 75199, 94325, 98316, 64371};
    vector<int> pointsPerMinute = {14, 27, 92, 81, 57, 74, 63, 71, 97, 82, 6, 26, 85, 28, 37, 6, 47, 30, 14, 58, 25, 96, 83, 46, 15, 68, 35, 65, 44, 51, 88, 9, 77, 79, 89, 85, 4, 52, 55, 100, 33, 61, 77, 69, 40, 13, 27, 87, 95, 40};
    vector<int> requiredTime = {796, 571, 1435, 379, 7468, 6602, 98, 2903, 3318, 493, 6653, 757, 7302, 281, 4287, 9442, 3866, 9690, 8445, 6620, 8441, 4730, 8032, 8118, 8098, 5772, 4482, 676, 710, 8928, 4568, 7857, 9498, 2354, 4587, 6966, 5307, 4684, 6220, 8625, 1529, 2872, 5733, 8830, 9504, 20, 8271, 3369, 9709, 6716};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 349377;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {2, 8, 30, 23, 50, 25, 10, 47, 5, 2, 5, 31, 45, 20, 31, 15, 2, 26, 28, 2, 31, 27, 13, 14, 15, 12, 23, 29, 2, 36, 2, 10, 25, 45, 4, 37, 22, 49, 8, 13, 36, 39, 29, 5, 33, 10, 40, 32, 30, 12};
    vector<int> requiredTime = {4, 6, 7, 7, 3, 6, 6, 9, 3, 1, 2, 7, 8, 2, 7, 2, 6, 1, 8, 4, 1, 9, 10, 6, 7, 7, 5, 1, 2, 10, 9, 10, 7, 3, 10, 9, 10, 1, 5, 6, 2, 5, 8, 5, 10, 3, 1, 2, 6, 4};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4920320;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000};
    vector<int> pointsPerMinute = {101, 100};
    vector<int> requiredTime = {100, 2};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 189498;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int T = 10000;
    vector<int> maxPoints = {1234, 2322, 100, 100, 100000};
    vector<int> pointsPerMinute = {4, 43, 1, 1, 100};
    vector<int> requiredTime = {45, 88, 15, 15, 30};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 97944;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 27563, 86232, 62342, 42649, 64338, 78718, 99310, 84488, 24129, 8656, 34319, 75539, 83461, 53977, 42149, 96881, 11147, 78077, 73045, 91970, 32630, 37723, 92803, 96733, 46583, 45487, 76901, 44827, 19329, 125, 34766, 16217, 22201, 39249, 75417, 86530, 16709, 24050, 58448, 2811, 88103, 83233, 53339, 62969, 17715, 100000, 6841, 57759};
    vector<int> pointsPerMinute = {100000, 90000, 2, 2, 5, 1, 5, 3, 1, 5, 5, 5, 3, 2, 1, 3, 1, 1, 1, 4, 4, 1, 4, 5, 4, 3, 2, 2, 4, 2, 4, 1, 1, 5, 5, 1, 5, 3, 5, 4, 5, 4, 2, 3, 3, 2, 4, 1, 3, 1};
    vector<int> requiredTime = {100000, 1, 1685, 4973, 9886, 6092, 5583, 4389, 4403, 6768, 5194, 4036, 6454, 4798, 6422, 4046, 1543, 9327, 8127, 6232, 9819, 4742, 3202, 7171, 6389, 2177, 547, 5922, 4143, 7566, 615, 7345, 9855, 1442, 2360, 1006, 4555, 8995, 5610, 7181, 482, 302, 675, 6442, 9417, 491, 5739, 25000, 948, 663};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 845546;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int T = 100000;
    vector<int> maxPoints = {43478, 49648, 17532, 36291, 91411, 34675, 76576, 48744, 79017, 51136, 26911, 85077, 57283, 91288, 25703, 85943, 10552, 46520, 92833, 79522, 77882, 59890, 18369, 28819, 13162, 92600, 16449, 78116, 50987, 14194, 91637, 35917, 66061, 60337, 12420, 86174, 75345, 1743, 5751, 89562, 34209, 33163, 96409, 22236, 20528, 22282, 15433, 773, 83943, 54971};
    vector<int> pointsPerMinute = {20, 22, 100, 15, 45, 77, 69, 27, 87, 49, 87, 13, 30001, 12, 52, 35, 42, 63, 6, 72, 16, 99, 37, 63, 44, 96, 34, 12, 19, 96, 6, 41, 80, 25, 33, 18, 21, 35, 75, 61, 75, 24, 3, 55, 23, 96, 49, 16, 38, 84};
    vector<int> requiredTime = {8758, 5412, 7171, 3489, 8831, 5017, 8626, 4004, 6051, 4951, 2809, 6361, 3513, 7734, 7638, 9509, 8540, 6191, 7079, 2132, 8008, 2214, 343, 636, 2376, 6868, 5284, 9814, 9626, 7541, 7801, 8439, 5021, 88, 7077, 8882, 6441, 7863, 8536, 3283, 7868, 4915, 2591, 8742, 5538, 7670, 7417, 551, 2279, 7954};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 180794;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int T = 98543;
    vector<int> maxPoints = {99986, 99984, 99979, 99947, 99956, 99985, 99986, 99948, 99932, 99953, 99944, 99941, 99905, 99974, 99938, 99903, 99958, 99994, 99913, 99940, 99962, 99983, 99963, 99992, 99964, 99985, 99908, 99948, 99931, 99944, 99902, 99904, 99966, 99993, 99925, 99952, 99987, 99932, 99954, 99999, 99987, 99947, 99945, 99988, 99982, 99964, 99977, 99930, 99908, 99979};
    vector<int> pointsPerMinute = {1, 83, 5, 6, 79, 50, 83, 29, 79, 62, 30, 4, 52, 55, 75, 57, 15, 95, 42, 85, 38, 5, 11, 68, 52, 94, 32, 8, 19, 100, 26, 100, 19, 41, 1, 83, 40, 32, 45, 35, 35, 53, 11, 49, 24, 71, 13, 5, 70, 38};
    vector<int> requiredTime = {3918, 3986, 3933, 3915, 3994, 3900, 3955, 3937, 3941, 3910, 3952, 3934, 3977, 3950, 3915, 3961, 3914, 3948, 3907, 3962, 3955, 3931, 3985, 3964, 3905, 3950, 3975, 3994, 3946, 3946, 3908, 3914, 3938, 3930, 3923, 3933, 3952, 3934, 3933, 3902, 3917, 3967, 3965, 3957, 3943, 3934, 3919, 3981, 3965, 3912};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 375111;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int T = 10;
    vector<int> maxPoints = {90, 85};
    vector<int> pointsPerMinute = {2, 1};
    vector<int> requiredTime = {8, 8};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int T = 50422;
    vector<int> maxPoints = {25108, 35457, 3008, 43718, 24346, 32577, 36439, 9363, 14817, 21312, 6419, 36386, 23657, 54889, 49470, 40204, 20229, 43458, 13819, 44925, 51044, 18019, 32579, 33600, 38796, 25731, 40166, 52404, 31962, 49773, 34192, 44495, 20228, 19331, 34242, 3364, 36633, 40771, 32470, 52440, 54908, 30784, 34301, 25005, 42478, 29477, 58178, 51704, 5251, 13751};
    vector<int> pointsPerMinute = {338, 514, 293, 211, 849, 877, 780, 782, 167, 479, 69, 784, 290, 506, 767, 549, 857, 68, 148, 333, 236, 870, 578, 463, 727, 495, 587, 663, 362, 593, 553, 714, 885, 557, 102, 991, 523, 939, 523, 193, 668, 77, 583, 890, 120, 148, 939, 106, 560, 754};
    vector<int> requiredTime = {32015, 25581, 8789, 30406, 20585, 27853, 20773, 5955, 19566, 13196, 21187, 32280, 3355, 26943, 17599, 43, 19215, 32279, 18513, 9312, 29168, 28217, 27618, 30476, 30219, 20681, 19918, 12717, 11578, 23880, 23657, 2776, 12043, 23329, 22336, 17010, 30, 12158, 30113, 15907, 3279, 32096, 22109, 18952, 14101, 3055, 7372, 20904, 31658, 26383};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 21070;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int T = 7;
    vector<int> maxPoints = {25, 25};
    vector<int> pointsPerMinute = {2, 1};
    vector<int> requiredTime = {5, 2};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int T = 1000;
    vector<int> maxPoints = {100, 50, 50, 50, 50, 50, 50, 50};
    vector<int> pointsPerMinute = {10, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {1, 10, 10, 10, 10, 10, 10, 10};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int T = 100000;
    vector<int> maxPoints = {902, 914, 576, 369, 996, 135, 741, 736, 405, 239, 385, 687, 329, 968, 321, 638, 167, 39, 858, 900, 438, 252, 843, 525, 698, 6, 696, 577, 523, 383, 202, 132, 15, 915, 97, 795, 159, 482, 155, 481, 214, 464, 814, 646, 166, 470, 402, 25, 101, 510};
    vector<int> pointsPerMinute = {1, 4, 3, 2, 6, 5, 10, 8, 2, 2, 8, 5, 8, 1, 8, 1, 3, 2, 2, 7, 7, 10, 9, 6, 3, 4, 9, 4, 2, 8, 10, 5, 3, 6, 3, 7, 8, 3, 8, 10, 3, 3, 9, 2, 9, 10, 3, 5, 5, 5};
    vector<int> requiredTime = {3, 1, 1, 9, 5, 9, 6, 9, 5, 4, 8, 5, 1, 6, 1, 4, 9, 1, 3, 5, 7, 3, 9, 6, 9, 9, 7, 10, 8, 10, 8, 9, 8, 4, 5, 5, 10, 2, 7, 8, 1, 10, 6, 1, 10, 6, 5, 1, 9, 6};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 13083;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int T = 100000;
    vector<int> maxPoints = {32476, 16444, 5001, 20294, 18257, 14558, 1239, 30202, 16028, 32523, 25452, 10028, 9081, 18775, 29464, 8373, 24685, 11274, 15254, 15805, 19730, 9506, 29815, 732, 6575, 10651, 27996, 13696, 6412, 6125, 18024, 655, 23685, 13271, 3317, 30797, 22108, 3931, 4230, 22399, 30292, 1290, 1021, 32721, 29819, 10113, 16143, 31605, 15943, 18996};
    vector<int> pointsPerMinute = {10, 3, 10, 8, 3, 9, 3, 5, 9, 6, 4, 6, 3, 2, 8, 4, 8, 1, 1, 9, 1, 4, 8, 4, 10, 8, 4, 7, 9, 6, 9, 4, 8, 3, 6, 10, 5, 7, 7, 6, 4, 6, 6, 10, 5, 4, 1, 7, 2, 9};
    vector<int> requiredTime = {2722, 1576, 6153, 3197, 2473, 4357, 6068, 5121, 2346, 1375, 8061, 8174, 2461, 5181, 8914, 9112, 2083, 42, 1995, 6759, 6665, 1473, 2335, 3862, 8509, 1159, 7447, 7433, 7072, 4553, 3923, 1139, 364, 8056, 4076, 134, 7303, 2610, 3465, 4684, 9257, 627, 5094, 6983, 5995, 5212, 2626, 100, 3392, 5394};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 137543;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int T = 50000;
    vector<int> maxPoints = {50000, 50000, 50000};
    vector<int> pointsPerMinute = {50000, 2, 3};
    vector<int> requiredTime = {50000, 1, 100};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 99695;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {43, 6, 23, 543, 65, 345, 5, 765, 234, 65, 7, 25, 5, 23, 65, 765, 4, 6, 252, 642, 876, 8, 98, 6, 4, 235, 56, 786, 78, 43, 5, 6, 735, 6, 85, 3, 5645, 76, 76, 7, 43, 65, 546, 73, 8, 245, 654, 2, 2, 435};
    vector<int> requiredTime = {85, 56, 347, 764, 34, 245, 52, 234, 54, 56, 67, 2, 265, 8, 89, 73, 2, 62, 56, 1, 65, 456, 67, 54, 625, 562, 7, 76, 426, 5, 65, 45, 65, 5, 2, 56, 56, 56, 565, 2, 234, 65, 65, 42, 24, 65, 76, 53, 65, 2134};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3065917;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000};
    vector<int> pointsPerMinute = {2, 2, 1};
    vector<int> requiredTime = {40000, 40000, 5};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 119985;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int T = 20;
    vector<int> maxPoints = {10000, 340, 385};
    vector<int> pointsPerMinute = {1, 2, 3};
    vector<int> requiredTime = {30, 20, 20};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int T = 100000;
    vector<int> maxPoints = {100, 100};
    vector<int> pointsPerMinute = {1, 1};
    vector<int> requiredTime = {10, 5};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int T = 100;
    vector<int> maxPoints = {10, 10, 1, 1, 8, 1, 9, 10, 1, 8, 10, 3, 8, 3, 4, 6, 3, 7, 1, 1, 1, 9, 1, 7, 10, 6, 8, 5, 5, 6, 1, 10, 8, 10, 4, 7, 10, 5, 1, 9, 8, 6, 9, 4, 10, 2, 7, 1, 6, 9};
    vector<int> pointsPerMinute = {9, 2, 8, 8, 6, 3, 2, 4, 6, 10, 6, 5, 6, 6, 1, 7, 10, 5, 10, 1, 10, 8, 1, 10, 8, 9, 3, 6, 7, 1, 5, 5, 10, 10, 10, 8, 1, 10, 5, 7, 4, 3, 3, 7, 3, 9, 7, 8, 1, 10};
    vector<int> requiredTime = {6, 8, 9, 4, 8, 4, 3, 1, 3, 9, 5, 2, 2, 4, 3, 1, 2, 2, 10, 8, 5, 2, 6, 5, 1, 4, 6, 9, 2, 3, 10, 8, 1, 3, 3, 3, 6, 1, 4, 10, 8, 2, 1, 8, 2, 9, 2, 9, 7, 6};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {581, 607, 63, 558, 888, 786, 101, 863, 12, 53, 338, 42, 457, 24, 278, 104, 568, 103, 212, 514, 770, 76, 599, 419, 837, 564, 420, 995, 241, 100, 189, 384, 569, 999, 709, 213, 157, 102, 903, 255, 641, 958, 43, 430, 814, 986, 481, 925, 304, 693};
    vector<int> requiredTime = {55, 93, 86, 8, 65, 10, 63, 94, 65, 78, 84, 86, 72, 42, 25, 52, 16, 84, 35, 77, 66, 53, 99, 100, 25, 100, 15, 40, 54, 41, 74, 44, 54, 14, 16, 37, 88, 37, 81, 13, 83, 39, 39, 73, 40, 54, 70, 82, 7, 64};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1606299;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000};
    vector<int> pointsPerMinute = {90000, 1};
    vector<int> requiredTime = {1, 90000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 19999;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int T = 100000;
    vector<int> maxPoints = {4000, 4000};
    vector<int> pointsPerMinute = {100, 11};
    vector<int> requiredTime = {10, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6889;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int T = 21695;
    vector<int> maxPoints = {22659, 22467, 23852, 28465, 2801, 1927, 32171, 30228, 7165, 17087, 29578, 25628, 25424, 14963, 3738, 32526, 6203, 20327, 6412, 21521, 30189, 20852, 30901, 17579, 11478, 6440, 19358, 5109, 19802, 22429, 19406, 28705, 6073, 14486, 1627, 13358, 23870, 13023, 12718, 24042, 24230, 8933, 12054, 29735, 21458, 2964, 912, 22849, 2224, 6512};
    vector<int> pointsPerMinute = {303, 679, 485, 120, 88, 11, 316, 44, 110, 566, 475, 630, 521, 124, 262, 265, 117, 12, 548, 791, 764, 663, 714, 366, 201, 304, 325, 114, 851, 994, 541, 836, 351, 557, 358, 338, 362, 618, 697, 424, 566, 297, 963, 655, 370, 608, 636, 676, 143, 742};
    vector<int> requiredTime = {372, 594, 19, 153, 61, 758, 577, 759, 883, 488, 626, 929, 903, 597, 196, 261, 31, 772, 154, 925, 941, 830, 959, 8, 59, 761, 478, 888, 461, 385, 112, 357, 824, 217, 527, 272, 897, 113, 586, 130, 560, 856, 585, 973, 533, 484, 68, 939, 755, 176};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 41176;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int T = 100;
    vector<int> maxPoints = {90, 100};
    vector<int> pointsPerMinute = {8, 10};
    vector<int> requiredTime = {1, 5};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int T = 40000;
    vector<int> maxPoints = {100000, 100000};
    vector<int> pointsPerMinute = {1, 20};
    vector<int> requiredTime = {100, 1000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 178900;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int T = 40;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3999180;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000};
    vector<int> pointsPerMinute = {9, 4};
    vector<int> requiredTime = {13, 3};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 199844;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int T = 12;
    vector<int> maxPoints = {1000, 1000};
    vector<int> pointsPerMinute = {2, 5};
    vector<int> requiredTime = {2, 10};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1936;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 24325, 2345, 231, 324};
    vector<int> pointsPerMinute = {34, 54, 246, 2, 1, 6, 3, 1, 3, 1, 1, 1, 5, 3, 5, 7, 4, 3, 7, 8};
    vector<int> requiredTime = {2, 4, 2, 6, 3, 123, 42, 75, 23, 82, 85, 12, 54, 34, 1, 64, 2, 7, 4, 2};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1618285;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int T = 100000;
    vector<int> maxPoints = {35127, 85916, 17856, 41621, 14123, 19702, 37556, 5677, 56817, 56010, 82222, 31762, 48990, 37054, 7935, 67411, 26853, 5891, 46541, 15673, 82492, 27060, 92818, 50786, 9403, 21086, 28310, 33838, 95421, 16804, 88127, 47236, 83604, 5529, 27885, 94686, 48212, 8986, 74592, 81950, 27997, 12837, 91313, 89726, 35539, 35329, 64504, 24427, 15198, 88239};
    vector<int> pointsPerMinute = {58, 89, 44, 42, 86, 84, 89, 7, 54, 32, 22, 27, 45, 56, 24, 96, 90, 62, 73, 79, 75, 17, 55, 94, 44, 46, 17, 73, 84, 78, 21, 92, 18, 37, 86, 74, 48, 9, 64, 71, 71, 58, 6, 84, 2, 78, 85, 87, 46, 59};
    vector<int> requiredTime = {853, 62, 871, 936, 147, 736, 282, 163, 361, 936, 153, 395, 971, 913, 158, 255, 389, 489, 318, 727, 417, 877, 161, 373, 882, 228, 675, 661, 97, 249, 209, 405, 906, 48, 933, 601, 360, 633, 770, 618, 997, 902, 155, 683, 478, 128, 778, 305, 872, 822};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 552920;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int T = 2;
    vector<int> maxPoints = {200, 150, 150};
    vector<int> pointsPerMinute = {1, 1, 1};
    vector<int> requiredTime = {2, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int T = 100000;
    vector<int> maxPoints = {83206, 85715, 88924, 92610, 56559, 72247, 60126, 61454, 64569, 92060, 57817, 90782, 66440, 94747, 89569, 76337, 90476, 81845, 75865, 64700, 92854, 71326, 60757, 63693, 71598, 56532, 61417, 53570, 54955, 56664, 62672, 86035, 97748, 50627, 85340, 84046, 80306, 77069, 63107, 66119, 65982, 85697, 56505, 81147, 66068, 97655, 64137, 75685, 99438, 89084};
    vector<int> pointsPerMinute = {89, 89, 10, 74, 65, 19, 87, 40, 43, 77, 48, 55, 12, 45, 90, 78, 36, 33, 81, 65, 3, 41, 56, 76, 7, 66, 31, 50, 1, 33, 70, 47, 58, 80, 64, 3, 22, 58, 55, 12, 22, 28, 1, 28, 95, 5, 76, 72, 15, 100000};
    vector<int> requiredTime = {39, 67, 25, 90, 21, 60, 35, 44, 67, 78, 83, 6, 31, 61, 58, 84, 10, 50, 90, 5, 23, 47, 78, 98, 11, 31, 21, 28, 92, 53, 22, 78, 59, 78, 11, 44, 69, 78, 17, 94, 12, 40, 72, 1, 20, 74, 1, 36, 67, 60};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2436974;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int T = 2000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {100, 827, 384, 22, 77, 6, 119, 45};
    vector<int> requiredTime = {3, 8, 9, 5, 7, 6, 2, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 778393;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int T = 100000;
    vector<int> maxPoints = {65934, 77744, 16263, 91530, 69701, 75509, 49753, 87257, 17257, 58120, 99712, 68352, 72844, 78706, 54109, 46394, 18331, 37367, 32170, 57933, 26918, 69848, 37973, 32869, 6981, 6224, 38550, 67593, 88165, 76170, 26552, 50428, 16191, 42625, 40636, 4921, 27945, 19311, 69863, 98485, 37364, 43302, 14711, 67237, 51877, 50432, 79930, 60398, 676, 70492};
    vector<int> pointsPerMinute = {91, 45, 35, 26, 30, 31, 28, 27, 44, 35, 5, 61, 50, 21, 57, 33, 73, 14, 91, 10, 20, 6, 96, 50, 28, 20, 98, 25, 97, 50, 57, 85, 94, 46, 8, 7, 10, 55, 53, 66, 84, 39, 2, 91, 31, 38, 96, 57, 64, 12};
    vector<int> requiredTime = {428, 43, 107, 969, 213, 2, 511, 481, 659, 572, 332, 815, 848, 565, 198, 626, 439, 932, 19, 488, 152, 188, 914, 180, 996, 751, 751, 914, 563, 135, 274, 548, 522, 831, 141, 558, 679, 727, 504, 598, 409, 894, 989, 239, 86, 94, 189, 721, 212, 747};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 730671;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int T = 100;
    vector<int> maxPoints = {479, 359};
    vector<int> pointsPerMinute = {3, 5};
    vector<int> requiredTime = {6, 46};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 560;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int T = 30;
    vector<int> maxPoints = {30, 20};
    vector<int> pointsPerMinute = {2, 4};
    vector<int> requiredTime = {1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3998360;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int T = 1000;
    vector<int> maxPoints = {92097, 74053, 84351, 80755, 69436, 56409, 90182, 89438, 91250, 61484};
    vector<int> pointsPerMinute = {29888, 54774, 19, 74071, 62758, 73219, 98799, 31485, 21596, 75};
    vector<int> requiredTime = {847, 532, 100, 869, 747, 297, 573, 995, 526, 461};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 101860;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int T = 10000;
    vector<int> maxPoints = {10000, 10000};
    vector<int> pointsPerMinute = {10, 100};
    vector<int> requiredTime = {10, 10};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 18800;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int T = 5403;
    vector<int> maxPoints = {6924, 3879, 22620, 21946, 12393, 6699, 5939, 31462, 9962, 1516, 28870, 13972, 16216, 18331, 29289, 16086, 24775, 25952, 1680, 23074, 18133, 26114, 15791, 29, 7201, 21975, 22868, 32169, 15630, 3310, 30081, 26668, 7865, 8827, 27727, 27682, 5687, 14722, 20416, 17125, 31763, 4807, 5603, 23482, 26631, 4085, 21294, 1055, 249, 5132};
    vector<int> pointsPerMinute = {832, 260, 972, 782, 686, 590, 38, 235, 960, 270, 59, 265, 556, 40, 83, 711, 381, 542, 111, 789, 957, 9, 724, 185, 72, 72, 154, 826, 651, 694, 117, 529, 422, 817, 667, 965, 22, 65, 903, 942, 424, 269, 908, 13, 115, 557, 997, 346, 492, 115};
    vector<int> requiredTime = {370, 9, 4, 505, 314, 723, 411, 509, 494, 938, 701, 118, 816, 213, 955, 485, 816, 116, 899, 978, 690, 942, 364, 779, 886, 334, 296, 677, 599, 687, 250, 680, 406, 517, 88, 341, 663, 310, 874, 746, 532, 319, 308, 137, 810, 291, 153, 709, 713, 440};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 61713;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int T = 100000;
    vector<int> maxPoints = {100000, 99999, 99998, 99997, 99996, 99995, 99994, 99993, 99992, 99991, 99990, 99989, 99988, 99987, 99986, 99985, 99984, 99983, 99982, 99981, 100000, 99999, 99998, 99997, 99996, 99995, 99994, 99993, 99992, 99991, 99990, 99989, 99988, 99987, 99986, 99985, 99984, 99983, 99982, 99981, 99990, 99989, 99988, 99987, 99986, 99985, 99984, 99983, 99982, 99981};
    vector<int> pointsPerMinute = {43, 6, 23, 543, 65, 345, 5, 765, 234, 65, 7, 25, 5, 23, 65, 765, 4, 6, 252, 642, 876, 8, 98, 6, 4, 235, 56, 786, 78, 43, 5, 6, 735, 6, 85, 3, 5645, 76, 76, 7, 43, 65, 546, 73, 8, 245, 654, 2, 2, 435};
    vector<int> requiredTime = {85, 56, 347, 764, 34, 245, 52, 234, 54, 56, 67, 2, 265, 8, 89, 73, 2, 62, 56, 1, 65, 456, 67, 54, 625, 562, 7, 76, 426, 5, 65, 45, 65, 5, 2, 56, 56, 56, 565, 2, 234, 65, 65, 42, 24, 65, 76, 53, 65, 2134};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3065535;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int T = 75;
    vector<int> maxPoints = {250, 500, 1000};
    vector<int> pointsPerMinute = {2, 4, 8};
    vector<int> requiredTime = {1, 10, 100};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 704;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int T = 100000;
    vector<int> maxPoints = {500, 1000};
    vector<int> pointsPerMinute = {1, 1};
    vector<int> requiredTime = {50, 51};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1349;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int T = 10;
    vector<int> maxPoints = {100, 100};
    vector<int> pointsPerMinute = {3, 2};
    vector<int> requiredTime = {4, 2};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int T = 4;
    vector<int> maxPoints = {10, 100};
    vector<int> pointsPerMinute = {1, 3};
    vector<int> requiredTime = {1, 4};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int T = 100;
    vector<int> maxPoints = {100, 100};
    vector<int> pointsPerMinute = {5, 9};
    vector<int> requiredTime = {3, 5};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int T = 100;
    vector<int> maxPoints = {500, 300};
    vector<int> pointsPerMinute = {8, 8};
    vector<int> requiredTime = {25, 10};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int T = 10;
    vector<int> maxPoints = {1000, 700, 700, 100};
    vector<int> pointsPerMinute = {2, 1, 1, 5};
    vector<int> requiredTime = {6, 5, 5, 10};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1385;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int T = 100000;
    vector<int> maxPoints = {53338, 47702, 81033, 44390, 74200, 1227, 74983, 66208, 68483, 6691, 1754, 72250, 10274, 93969, 15120, 14380, 69969, 5723, 16587, 43057, 60725, 48198, 97504, 62108, 79933, 34241, 20140, 15969, 9149, 21863, 62106, 52378, 82840, 37908, 61213, 51822, 16570, 90407, 35537, 75842, 78953, 75483, 12552, 72859, 98842, 2700, 79606, 50211, 97452, 23074};
    vector<int> pointsPerMinute = {79075, 53513, 1803, 18, 44, 22, 72969, 32, 54, 42845, 85, 88533, 54, 88635, 10305, 71, 64239, 8299, 19, 19, 69, 17, 95085, 40288, 45258, 73763, 73, 69, 33242, 14, 41626, 67579, 86, 93128, 11689, 47, 74, 37, 85305, 17847, 70533, 100, 24, 69283, 45588, 3055, 60, 18, 54, 23568};
    vector<int> requiredTime = {97, 86, 5, 70, 1, 67441, 29, 81855, 97, 37440, 66034, 69428, 5, 77, 17, 36151, 49760, 34738, 85858, 13653, 2160, 75, 28375, 18, 56, 20015, 28594, 53953, 18, 16894, 93553, 4036, 3866, 43877, 72831, 99487, 73, 92, 6, 94277, 36, 99634, 44924, 68, 65089, 2454, 22538, 31, 88, 19860};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 508138;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int T = 6;
    vector<int> maxPoints = {150, 120};
    vector<int> pointsPerMinute = {2, 4};
    vector<int> requiredTime = {4, 2};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int T = 1000;
    vector<int> maxPoints = {1000, 1000, 50000};
    vector<int> pointsPerMinute = {2, 3, 1};
    vector<int> requiredTime = {1, 100, 1000};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49000;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int T = 100;
    vector<int> maxPoints = {100, 100, 100};
    vector<int> pointsPerMinute = {1, 5, 10};
    vector<int> requiredTime = {2, 4, 3};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int T = 30;
    vector<int> maxPoints = {100000, 100000, 100000};
    vector<int> pointsPerMinute = {1111, 1111, 100};
    vector<int> requiredTime = {15, 15, 30};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 150005;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int T = 3;
    vector<int> maxPoints = {10000, 6000, 6000, 6000};
    vector<int> pointsPerMinute = {1, 1, 1, 1};
    vector<int> requiredTime = {2, 1, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 17994;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int T = 100;
    vector<int> maxPoints = {100, 100};
    vector<int> pointsPerMinute = {2, 1};
    vector<int> requiredTime = {4, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int T = 2;
    vector<int> maxPoints = {500, 500, 500};
    vector<int> pointsPerMinute = {50, 1, 1};
    vector<int> requiredTime = {2, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 997;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int T = 60;
    vector<int> maxPoints = {100, 100, 500};
    vector<int> pointsPerMinute = {1, 1, 1};
    vector<int> requiredTime = {10, 10, 50};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 530;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int T = 1000;
    vector<int> maxPoints = {1000, 1000};
    vector<int> pointsPerMinute = {5, 4};
    vector<int> requiredTime = {10, 4};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1914;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int T = 51586;
    vector<int> maxPoints = {84951, 51997, 33611, 64489, 62880, 58677, 95129, 33823, 78913, 28314, 90181, 30899, 13302, 98507, 81227, 60006, 63817, 1520, 98100, 29250, 11985, 91756, 26658, 4408, 95547, 99163, 39761, 6645, 48216, 71708, 95728, 5227, 68552, 35667, 71059, 53960, 26694, 17095, 42632, 98570, 29574, 93120, 85514, 71001, 13497, 61522, 91435, 67052, 22595, 39811};
    vector<int> pointsPerMinute = {84, 80, 1, 86, 77, 83, 35, 87, 22, 77, 79, 76, 38, 78, 58, 34, 15, 37, 50, 63, 95, 45, 46, 5, 31, 88, 45704, 13575, 11674, 40923, 19260, 11015, 4025, 24784, 20331, 19493, 25605, 32249, 46817, 18524, 30604, 2182, 37085, 22751, 10161, 14120, 7166, 24260, 33243, 48164};
    vector<int> requiredTime = {719, 52, 206, 368, 780, 459, 704, 229, 799, 736, 772, 551, 751, 788, 616, 599, 533, 220, 493, 21, 499, 326, 763, 393, 550, 735, 24049, 25538, 5939, 14653, 13547, 26043, 35488, 26144, 31674, 29914, 25617, 39192, 17217, 24492, 43751, 21117, 25141, 49925, 20255, 6099, 31703, 30303, 27119, 11995};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 334938;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int T = 41;
    vector<int> maxPoints = {35, 25, 63};
    vector<int> pointsPerMinute = {1, 9, 5};
    vector<int> requiredTime = {10, 9, 6};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000};
    vector<int> pointsPerMinute = {2, 3, 4};
    vector<int> requiredTime = {100, 1000, 100};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 295600;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int T = 75;
    vector<int> maxPoints = {10000, 10000, 10000};
    vector<int> pointsPerMinute = {4, 5, 3};
    vector<int> requiredTime = {20, 15, 6};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 29713;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 99997, 23455, 65478, 32457};
    vector<int> pointsPerMinute = {1, 3, 12, 43, 2, 345};
    vector<int> requiredTime = {1, 3, 346, 345, 23, 11};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 392541;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int T = 2;
    vector<int> maxPoints = {100, 10, 100};
    vector<int> pointsPerMinute = {3, 2, 1};
    vector<int> requiredTime = {1, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int T = 101;
    vector<int> maxPoints = {100000, 100000};
    vector<int> pointsPerMinute = {2, 5};
    vector<int> requiredTime = {1, 100};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 199493;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int T = 30;
    vector<int> maxPoints = {30, 20};
    vector<int> pointsPerMinute = {2, 3};
    vector<int> requiredTime = {1, 5};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89, 60, 88, 32, 89};
    vector<int> requiredTime = {100, 100, 100, 100, 100, 100, 30, 30, 30, 100, 100, 100, 100, 100, 100, 30, 30, 30, 100, 100, 100, 100, 100, 100, 30, 30, 30, 100, 100, 100, 100, 100, 100, 30, 30, 30, 30, 100, 100, 100, 100, 100, 100, 30, 30, 30, 40, 100, 100, 100};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2140940;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int T = 1000;
    vector<int> maxPoints = {1000, 1000};
    vector<int> pointsPerMinute = {3, 4};
    vector<int> requiredTime = {10, 50};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1730;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int T = 100000;
    vector<int> maxPoints = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    vector<int> pointsPerMinute = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> requiredTime = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheProgrammingContestDivOne* pObj = new TheProgrammingContestDivOne();
    clock_t start = clock();
    int result = pObj->find(T, maxPoints, pointsPerMinute, requiredTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4998725;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22747741&rd=14431&pm=11357
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <cstring>
 
using namespace std;
 
 
 
class TheProgrammingContestDivOne 
{
  public:
    struct node
    {
      int a,b,c;
    } p[55];
    int opt[55][100010];
 
    int find(int T, vector <int> x, vector <int> y, vector <int> z) 
    {
      int n=x.size();
      for (int i=1;i<=n;i++) {p[i].a=x[i-1];p[i].b=y[i-1];p[i].c=z[i-1];}
      for (int i=1;i<=n;i++)
      for (int j=i+1;j<=n;j++)
      if (((long long)p[i].c*p[j].b>(long long)p[i].b*p[j].c))
        swap(p[i],p[j]);
        
      memset(opt,0,sizeof(opt));
      for (int i=0;i<n;i++) 
      for (int j=0;j<=T;j++)
      {
        opt[i+1][j]=max(opt[i+1][j],opt[i][j]);
        if (j+p[i+1].c<=T && (long long)opt[i][j]+(long long)p[i+1].a-(long long)(j+p[i+1].c)*p[i+1].b>=0) opt[i+1][j+p[i+1].c]=max((long long)opt[i+1][j+p[i+1].c],
              (long long)opt[i][j]+(long long)p[i+1].a-(long long)(j+p[i+1].c)*p[i+1].b
              );
      }
      int res=0;
      for (int i=0;i<=T;i++) res=max(res,opt[n][i]);
      return res;
    }
};
 
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/