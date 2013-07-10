/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1880
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

class Workshop {
public:
    int pictureFrames(vector<int> pieces);
};

int Workshop::pictureFrames(vector<int> pieces) {
    int ret;
    return ret;
}


int test0() {
    vector<int> pieces = {1, 2, 3, 4, 5};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> pieces = {8, 5, 3};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
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
    vector<int> pieces = {4, 23, 76, 22, 87, 3, 1, 99};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> pieces = {10000, 9999, 9998, 9997, 9996, 1, 2, 3, 4, 5};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> pieces = {100};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
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
    vector<int> pieces = {6419, 4679, 6975, 9285, 6727, 7377, 48, 2476, 1868, 2185, 7270, 2600, 6577, 4553, 5133, 5241, 3772, 2166, 5536, 3395, 857, 2457, 707, 6587, 9730, 9817, 7976, 4295, 5475, 3273, 2632, 1970, 6619, 9913, 8964, 2643, 8024, 6712, 6639, 9624, 6059, 3562, 2068};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 6779;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pieces = {4475, 3294, 2105, 5666, 8603, 280, 504, 3477, 4935, 7795, 5924, 2043, 2934, 5727, 3952, 6553, 5993, 4485, 4612, 4548, 8881, 7954, 1129, 1719, 9713, 8234, 5336, 632, 5514, 7533, 54};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2173;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> pieces = {1789, 8107, 9008, 9238, 8133, 9385, 398, 3615, 3930, 2540};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pieces = {7382, 417, 6701, 4855, 1552};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pieces = {7693, 8530, 713, 546, 9767, 8921, 5045, 1876, 3104, 2683, 7771, 2564, 5077, 1027, 1513, 9832, 1211, 2745, 174, 6784, 2562, 7415, 3902, 2040, 9881, 3997, 3462, 5516, 1298, 8677, 6906, 1163, 9517, 9844, 5821, 2923, 6551, 7379, 627, 5834};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3890;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pieces = {8037, 4416, 269, 3489, 8678, 2635, 3620, 6106, 4288, 1555, 374, 5438, 8347, 1920, 8530, 4353, 8931, 5418, 7541, 7012, 5119, 705, 573, 3137, 4806, 2576, 1771, 4985, 6769, 2598, 7433, 9996, 7018, 2016, 8524, 2243, 1845, 8055, 782, 8761, 7746, 2914, 7846, 2683, 1467};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 6467;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pieces = {2276, 3644, 1753};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
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
    vector<int> pieces = {9122, 7392, 8100, 43};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> pieces = {729, 777, 9862, 274, 4973, 717, 367, 2841, 971, 7454, 9550, 2660, 1364, 8276, 4600, 2981, 1293, 1941, 325, 5497, 6997, 5913, 8818, 8808, 2900, 6909, 660, 6069, 1658, 763, 2045, 8523, 8396, 9058};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1727;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pieces = {4524, 9890, 6844, 266, 6833, 1811, 7830, 5494, 4550, 2300, 892, 5572, 9828, 8148, 4480, 8986, 3707, 612, 3572, 3905};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 528;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pieces = {1535, 7161, 2014, 9717, 6824, 2991, 7389, 7890, 3597, 203, 3013, 1496, 9320, 9902, 9708, 3588, 6145, 8235, 2283, 6211, 1286, 6538, 5531, 5298, 4783, 8324, 8313, 6166, 9279, 3468, 7437, 5350, 2532, 5786, 4305, 1791, 2316, 1412, 6333, 7975, 5083, 1849, 2105, 9527, 4307, 7406, 3831, 9973, 1767, 3809};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 10729;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> pieces = {5908, 5216, 7251, 7567, 6648, 8849, 863, 9522, 1604, 8768, 8642, 2941, 8046, 4256, 1273, 7243};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 348;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pieces = {7088, 1910, 7243, 3048, 5326, 9034, 3356, 1297};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pieces = {7771, 4650, 1343, 3687, 689, 2206, 6756, 12, 4017, 3075, 5830, 3871, 5488, 5723, 8019, 3858, 5542, 6334, 483, 4757, 4521, 1591, 6638, 9248, 4637};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1234;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pieces = {1223, 5450, 7019, 6637, 9305, 1372, 947, 2709, 9822, 9696, 4460, 5169, 7829, 1494, 3029, 4032, 3407, 5431, 5663, 4503, 9404, 9834, 5903, 8824, 4565, 8577, 8536, 2379, 3454, 8170, 1518, 7594, 9619, 2664, 6615, 3524, 3846, 5017};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 4927;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pieces = {1230, 5104, 8415, 1096, 5062, 7754, 8747};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> pieces = {7770, 4974, 9849, 1499, 3016, 4979, 6480, 1134, 2309, 3592, 6056, 625, 4616, 3989, 9115, 6266, 6021, 2031, 194, 1997, 3645, 3494};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 676;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pieces = {4504, 2764, 7734, 9855, 416, 8557, 824, 9990, 3668, 4254, 67, 5364, 8821, 5572, 916, 4572, 9204, 7279, 6807, 5141, 7100, 1502, 2185, 355, 6888, 8933, 9094};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1286;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> pieces = {1036, 3513, 8078, 6836, 3169, 8340, 4908, 8475, 2023, 5561, 5596, 949, 5062, 5856, 3585, 5815, 745, 3720, 4570, 4873, 4023, 3217, 6429, 5692, 470, 5143, 3990, 2786, 698, 602, 947, 6274, 8114, 7864, 4162, 9412, 9977, 9117, 8758, 8737, 3754, 1182, 5996, 5721, 8256, 9632, 9702, 6827, 1752};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 9827;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pieces = {1206, 9630, 7330, 1495, 7202, 6286, 9140, 9764, 9708, 2050, 1822, 7060, 2404, 5741, 9448, 3497, 3018, 1147, 9570, 533, 7146, 3161, 2631, 188, 4923, 148, 6884, 2093, 8284, 4488, 4253, 7241, 3228, 6562, 3079, 780, 8429, 3527, 9606, 7420, 8859, 3153, 1213, 2121, 615};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5747;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pieces = {915, 5610, 1113, 3527, 4434, 8958, 6954, 2885, 8302, 3974, 351, 7681, 9845, 6485, 3808, 6530, 7668, 7719, 1907, 5360, 4318, 4932, 8518, 3850};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1176;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pieces = {6208, 7523, 7585, 9158, 5905};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pieces = {2994, 8370, 6638, 3082, 9195, 3028, 842, 9875, 719, 8993, 21, 3935, 7753, 5064, 2565, 6772, 6016, 9995, 1678, 1611, 6677, 2581, 3403, 2020, 7829, 3067};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1059;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pieces = {8204, 2940, 288, 5871, 1085};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pieces = {473, 7593, 7207, 2191, 428, 4365, 704, 6703, 9954, 3862, 2111, 6648, 5756, 8870, 7618, 7517, 1884, 5699, 6533, 3627, 9767, 4140, 9172, 6985, 4298, 6572, 2174, 5034, 1087, 333, 3329, 4512, 4005, 1899, 3397, 696, 1455, 3589, 8130, 6164, 4405, 3541, 9704};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 5833;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pieces = {};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> pieces = {10000};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pieces = {10000, 9999};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> pieces = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 19600;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pieces = {10000, 9999, 9998, 9997, 9996, 1, 2, 3, 4, 5};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pieces = {2, 3, 4};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
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
    vector<int> pieces = {4, 23, 76, 22, 87, 3, 1, 99, 46, 34, 63, 323, 888, 975, 754, 543};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pieces = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 9500;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pieces = {1, 2, 3, 4, 5};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> pieces = {4, 23, 76, 22, 87, 3, 1, 99};
    Workshop* pObj = new Workshop();
    clock_t start = clock();
    int result = pObj->pictureFrames(pieces);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=159446&rd=4635&pm=1880
********************************************************************************
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  Olorin.invoke(Dijkstra.spirit(), Hoare.spirit() );
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//
//  **  **  **
//  **  **  **
//  ** **  **
//  ****  **
//  ***  **
//  **  **
//  ** **
//  ****
//  **
//  **
//  **
//  ** Olorin's Black Book of Dirty Code(TM)
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
#include <iostream>
#include <cmath>
#include <climits>
#include <float.h>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef long double      ld;
typedef long long      i64;
typedef vector<int>::iterator    vit;
typedef vector<string>::iterator  vis;
 
const int  MAX     = 50;
const ld  EPSILON  = 0.000000000001;
 
template<class T> T ABS(const T& x)  { return (x>0? x: -x); }
 
bool ldEqual(ld a, ld b)  { return (ABS(a-b)<EPSILON); }
bool ldLess(ld a, ld b)    { return (a-b<-EPSILON); }
 
 
/*
N items => N*(N-1)/2 unordered pairs
LowestCommonMultiple (a, b): a/gcd(a, b)*b;
*/
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++  Main Class                                                     ++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class Workshop
{
public:
int pictureFrames(vector <int> in)
{
  int ins = in.size();
  int tot = 0;
  for(int a=0; a<(ins-2); a++)
  for(int b=(a+1); b<(ins-1); b++)
  for(int c=(b+1); c<ins; c++)
  {
  if(Possible(in[a], in[b], in[c]))  tot++;
  }//FOR x3
  return tot;
}
//End
 
 
private:
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
bool Possible(int a, int b, int c)
{
  int ab = a+b;
  if(ab<=c)  return false;
  int ac = a+c;
  if(ac<=b)  return false;
  int bc = b+c;
  if(bc<=a)  return false;
  return true;
}
//End Possible
 
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  itos:
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
string itos(int x)
{
  if(x==0)  return "0";
  bool negative=false;
  if(x<0)
  { negative=true; x*=-1; }
  string t;
  while(true)
  {
    t+=(char)((x%10)+'0');
    if(x<10)  break;
    x/=10;
  }//WEND
  string r;
  if(negative)  r+='-';
  for(int i=t.size()-1; i>=0; i--)
    r+=t[i];
  return r;
}
//End itos
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  inBase:
//  returns the string representation of the decimal x
//  converted to base B.
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
string inBase(int x, int B)
{
  bool neg=false;
  if(x<0)  { neg=true; x*=-1; }
  string t="";
  while(true)
  {
  int k = x%B;
  switch(k)
  {
  case 10:  t+="A";  break;
  case 11:  t+="B";  break;
  case 12:  t+="C";  break;
  case 13:  t+="D";  break;
  case 14:  t+="E";  break;
  case 15:  t+="F";  break;
  default:  t+=(char)(k+'0');  break;
  }//SWITCH
  if(x<B)  break;
  x/=B;
  }//WEND
  string r="";
  if(neg) r+="-";
 
  for(int i=t.size()-1; i>=0; i--)  r+=t[i];
  return r;
}
//End inBase
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  GCD:
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int GCD(int a, int b)
{
  int n;
  a= abs(a);
  b= abs(b);
  while(b)
  {
  n=b;
  b=a%b;
  a=n;
  }//WEND
  return a;
}
//End GCD
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
string itobs(int x, int w)
{
  string t;
  while(true)
  {
  if(x==0) { t+="0"; break; }
  if(x==1) { t+="1"; break; }
 
  t+=(char)((x%2)+'0');
  x/=2;
  }//WEND
  string r;
  for(int i=t.size()-1; i>=0; i--)
  r+=t[i];
  int diff=(w-r.size());
  if(diff>0)
  {
  string f;
  for(int j=0; j<diff; j++)
    f+='0';
  f+=r;
  r=f;
  }//IF
  return r;
}
//*********************************************
//End itobs
//*********************************************
 
int bstoi(string in)
{
  int r=0;
  int p = 0;
  for(int i=in.size()-1; i>=0; i--)
  {
  if(in[i]=='1') r+=(int)( pow(2.0, p) );
  p++;
  }//FOR
  return r;
}
//*********************************************
//End bstoi
//*********************************************
 
 
};
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++  End Main Class                                                 ++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  EOF
//  "There is poetry in overloading"
//  Olorin.finalize();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

********************************************************************************
*******************************************************************************/