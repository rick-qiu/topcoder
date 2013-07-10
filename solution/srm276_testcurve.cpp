/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5927
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

class TestCurve {
public:
    vector<int> determineGrades(vector<int> scores);
};

vector<int> TestCurve::determineGrades(vector<int> scores) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> scores = {15, 27, 8, 33, 19, 50};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 54, 16, 66, 38, 100};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> scores = {0, 0, 0, 3};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 100};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> scores = {67, 89, 72, 100, 95, 88};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67, 89, 72, 100, 95, 88};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> scores = {1234, 3483, 234, 5738, 3421, 5832, 4433};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 59, 4, 98, 58, 100, 76};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> scores = {8765};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> scores = {8961, 3353, 4908, 2919, 236, 6112, 9381, 3762, 7426, 7885, 6534, 7383, 3821, 9424, 2242, 1783, 8545, 3987, 4852, 7551, 2953, 8128, 2834, 4894, 9548};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {93, 35, 51, 30, 2, 64, 98, 39, 77, 82, 68, 77, 40, 98, 23, 18, 89, 41, 50, 79, 30, 85, 29, 51, 100};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> scores = {4946, 3172, 3378, 9983, 2881, 2925, 5948, 9286, 6430, 405, 1624, 402, 1135, 4611, 6541, 5560, 8449, 6814, 2, 7461, 8386, 2593, 8400, 7567, 4680};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 31, 33, 100, 28, 29, 59, 93, 64, 4, 16, 4, 11, 46, 65, 55, 84, 68, 0, 74, 84, 25, 84, 75, 46};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> scores = {1603, 6883, 2447, 8420, 1881, 9236, 8332, 4440, 5298, 7054, 3170, 7545, 5624, 9653, 7143, 2816, 740, 4013, 7434, 4329, 1546, 8063, 8384, 4684, 3365, 6457, 4150, 7039, 9849, 8864, 3857, 9638};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 69, 24, 85, 19, 93, 84, 45, 53, 71, 32, 76, 57, 98, 72, 28, 7, 40, 75, 43, 15, 81, 85, 47, 34, 65, 42, 71, 100, 89, 39, 97};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> scores = {738, 9260, 2846, 4012, 6612, 4894, 8679, 804, 5866, 737, 2831, 5800, 1019, 7361, 9214, 395, 8505, 3588, 6979, 255, 1953, 6652, 56, 6719, 7976, 4848, 9182, 704, 4440, 2694, 6427, 9117, 1256, 8584, 2236, 3753, 3658, 4946, 4951, 2710, 7982, 895, 2846, 4289, 9947, 7396, 8661};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 93, 28, 40, 66, 49, 87, 8, 58, 7, 28, 58, 10, 74, 92, 3, 85, 36, 70, 2, 19, 66, 0, 67, 80, 48, 92, 7, 44, 27, 64, 91, 12, 86, 22, 37, 36, 49, 49, 27, 80, 8, 28, 43, 100, 74, 87};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> scores = {5440, 4911, 6624, 481, 3796, 3564, 1994, 2879, 3578, 5793, 3084, 8780, 858, 1504, 5797, 3605, 10000, 5733};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54, 49, 66, 4, 37, 35, 19, 28, 35, 57, 30, 87, 8, 15, 57, 36, 100, 57};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> scores = {8917, 6938, 8798, 2319};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 77, 98, 26};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> scores = {4963, 8956, 1653, 8904, 2997, 7560, 219, 2574, 6382, 6715, 7326, 35, 153, 9435, 9560, 4656, 4829, 2297, 2810, 1887};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 93, 17, 93, 31, 79, 2, 26, 66, 70, 76, 0, 1, 98, 100, 48, 50, 24, 29, 19};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> scores = {600, 6810, 5664, 8531, 6020, 2155, 7315, 3013, 6764, 9847, 6968, 8372, 231, 3314, 7456, 6734, 8166, 2952, 723, 2892, 4312, 3147, 6731, 7588};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 69, 57, 86, 61, 21, 74, 30, 68, 100, 70, 85, 2, 33, 75, 68, 82, 29, 7, 29, 43, 31, 68, 77};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> scores = {1814, 4864, 3288, 9673, 2422, 7838, 2473, 294, 8529, 8106, 8412, 4756, 810, 6760, 8447, 9157, 6595, 4945, 9772, 35, 1891, 7760, 7719};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 49, 33, 98, 24, 80, 25, 3, 87, 82, 86, 48, 8, 69, 86, 93, 67, 50, 100, 0, 19, 79, 78};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> scores = {5922, 661, 6534, 3015, 8152, 8380, 2660, 9298, 7822, 6314, 519, 3232, 5981, 4446, 793, 899, 14, 3743, 1205, 7254, 678, 5066, 9800, 6288, 1627, 571, 725, 3679, 1448, 7626, 2515, 1953, 8191, 5202, 8870, 8137, 6400, 2794, 1934, 3915, 6644, 1819, 8085, 8289, 7551, 9524, 6206, 2727};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 6, 66, 30, 83, 85, 27, 94, 79, 64, 5, 32, 61, 45, 8, 9, 0, 38, 12, 74, 6, 51, 100, 64, 16, 5, 7, 37, 14, 77, 25, 19, 83, 53, 90, 83, 65, 28, 19, 39, 67, 18, 82, 84, 77, 97, 63, 27};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> scores = {5390, 8474};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63, 100};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> scores = {5823, 43, 3636, 8471, 4005, 6659, 2794, 6476, 6046, 4867, 7686, 5760, 8822, 7157, 1462, 4989, 1955, 7788, 1973, 8741, 7344, 4192, 7548, 154, 1192, 882, 5274, 6091, 8543, 5856, 1780, 4787, 305, 9506, 6518, 6017, 2792, 6021, 7542, 3738, 9748, 7297, 9792, 1258, 6877};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59, 0, 37, 86, 40, 68, 28, 66, 61, 49, 78, 58, 90, 73, 14, 50, 19, 79, 20, 89, 75, 42, 77, 1, 12, 9, 53, 62, 87, 59, 18, 48, 3, 97, 66, 61, 28, 61, 77, 38, 99, 74, 100, 12, 70};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> scores = {5873, 8886, 8881, 1173, 9339, 4086, 8984, 6246, 470, 4141, 969, 6336, 4559, 1302, 3708, 7957, 2686, 447, 8189, 1265, 5007, 9239, 7051, 1468, 6530, 778, 6616, 2726, 5396, 8762, 1419, 4561, 3665, 5138, 1237, 761, 593, 264, 626, 791, 8415, 5562, 944, 3695, 623, 8675, 4892};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 95, 95, 12, 100, 43, 96, 66, 5, 44, 10, 67, 48, 13, 39, 85, 28, 4, 87, 13, 53, 98, 75, 15, 69, 8, 70, 29, 57, 93, 15, 48, 39, 55, 13, 8, 6, 2, 6, 8, 90, 59, 10, 39, 6, 92, 52};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> scores = {2755, 1119, 3535, 3135, 5667, 8451, 5843, 5816, 1320, 2908, 713, 8970, 1061, 8581, 1510, 5634, 6402, 9058, 3089, 4366, 2299, 7587, 1333};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 12, 39, 34, 62, 93, 64, 64, 14, 32, 7, 99, 11, 94, 16, 62, 70, 100, 34, 48, 25, 83, 14};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> scores = {2943, 9730, 5180, 774};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 100, 53, 7};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> scores = {8520};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> scores = {8307, 3549, 2116, 408, 2928, 5060};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 42, 25, 4, 35, 60};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> scores = {8231, 1874, 3478, 5441, 6103, 3838, 3350, 1030, 6214, 5373, 5644, 5959, 8499, 9799, 1019, 6367, 167, 8612, 5619, 1956};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {83, 19, 35, 55, 62, 39, 34, 10, 63, 54, 57, 60, 86, 100, 10, 64, 1, 87, 57, 19};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> scores = {5386, 9343, 1151, 1564, 2182, 6631, 8751, 2869, 8455, 9749, 6089, 3277, 2456, 4563, 3690, 6846, 5144, 8826, 6421, 4591, 6588, 2955, 1154, 1527, 4873, 3317, 6918, 6193, 7511, 8005, 7555, 2681, 5341, 5121, 6880, 5177, 8941, 3562, 6335};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {55, 95, 11, 16, 22, 68, 89, 29, 86, 100, 62, 33, 25, 46, 37, 70, 52, 90, 65, 47, 67, 30, 11, 15, 49, 34, 70, 63, 77, 82, 77, 27, 54, 52, 70, 53, 91, 36, 64};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> scores = {7530, 6295, 5142, 45, 375, 6139, 2966, 7005, 701, 4049, 5067, 5705, 2092, 9898, 9956, 6238, 7401, 5753, 9551, 8470, 152, 1661, 1837, 4073, 8453};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 63, 51, 0, 3, 61, 29, 70, 7, 40, 50, 57, 21, 99, 100, 62, 74, 57, 95, 85, 1, 16, 18, 40, 84};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> scores = {0, 1000, 509};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 100, 50};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> scores = {1234, 3483, 234, 5738, 3421, 5832, 4433};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 59, 4, 98, 58, 100, 76};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> scores = {15, 20};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 100};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> scores = {100, 101};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> scores = {8, 33};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 100};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> scores = {51, 25};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 49};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> scores = {37, 37, 37, 37, 37};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100, 100, 100, 100};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> scores = {101, 5};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 4};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> scores = {0, 1000, 509};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 100, 50};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> scores = {1234, 3483, 234, 5738, 3421, 5832, 4433};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 59, 4, 98, 58, 100, 76};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> scores = {15, 20};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 100};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> scores = {100, 101};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> scores = {8, 33};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 100};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> scores = {51, 25};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 49};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> scores = {37, 37, 37, 37, 37};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100, 100, 100, 100};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> scores = {101, 5};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 4};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> scores = {0, 1000, 509};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 100, 50};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> scores = {1234, 3483, 234, 5738, 3421, 5832, 4433};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 59, 4, 98, 58, 100, 76};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> scores = {15, 20};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 100};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> scores = {100, 101};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> scores = {8, 33};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 100};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> scores = {51, 25};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 49};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> scores = {37, 37, 37, 37, 37};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100, 100, 100, 100};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> scores = {101, 5};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 4};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> scores = {0, 1000, 509};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 100, 50};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> scores = {1234, 3483, 234, 5738, 3421, 5832, 4433};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 59, 4, 98, 58, 100, 76};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> scores = {15, 20};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 100};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> scores = {100, 101};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> scores = {8, 33};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 100};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> scores = {51, 25};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 49};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> scores = {37, 37, 37, 37, 37};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100, 100, 100, 100};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> scores = {101, 5};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 4};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> scores = {0, 1000, 509};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 100, 50};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> scores = {1234, 3483, 234, 5738, 3421, 5832, 4433};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 59, 4, 98, 58, 100, 76};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> scores = {15, 20};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 100};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> scores = {100, 101};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> scores = {8, 33};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 100};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> scores = {51, 25};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 49};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> scores = {37, 37, 37, 37, 37};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100, 100, 100, 100};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> scores = {101, 5};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 4};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> scores = {0, 1000, 509};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 100, 50};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> scores = {1234, 3483, 234, 5738, 3421, 5832, 4433};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 59, 4, 98, 58, 100, 76};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> scores = {15, 20};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 100};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> scores = {100, 101};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 100};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> scores = {8, 33};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 100};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> scores = {51, 25};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 49};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> scores = {37, 37, 37, 37, 37};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100, 100, 100, 100};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> scores = {101, 5};
    TestCurve* pObj = new TestCurve();
    clock_t start = clock();
    vector<int> result = pObj->determineGrades(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 4};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20065705&rd=8073&pm=5927
********************************************************************************
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cctype>
 
using namespace std;
 
class TestCurve
{
public: vector<int>determineGrades(vector<int> grade)
    {
      int i,len=grade.size();
      int max=-1,index=0;
      for(i=0;i<len;i++)
        if(grade[i]>max)
        {
          max=grade[i];
          index=i;
        }
      float pro= 100.0/(float)max;
      for(i=0;i<len;i++)
      {
        if(i==index)
          grade[i]=100;
        else 
        grade[i]=int(pro*(float)grade[i]);
      
      }
      return grade;
    
    }
 
};

********************************************************************************
*******************************************************************************/