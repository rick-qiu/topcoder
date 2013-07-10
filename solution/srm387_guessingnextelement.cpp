/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8539
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

class GuessingNextElement {
public:
    int guess(vector<int> A);
};

int GuessingNextElement::guess(vector<int> A) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {364, 843, 1322, 1801};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2280;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {315, 785, 1255, 1725, 2195, 2665};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 3135;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {394, 1172, 1950, 2728, 3506, 4284, 5062, 5840};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 6618;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {944, 1073, 1202, 1331, 1460, 1589, 1718, 1847, 1976, 2105};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2234;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {162, 549, 936, 1323, 1710, 2097, 2484, 2871, 3258, 3645, 4032, 4419};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4806;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {165, 983, 1801, 2619, 3437, 4255, 5073, 5891, 6709, 7527, 8345, 9163, 9981, 10799};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 11617;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {467, 1309, 2151, 2993, 3835, 4677, 5519, 6361, 7203, 8045, 8887, 9729, 10571, 11413, 12255, 13097};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 13939;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {403, 415, 427, 439, 451, 463, 475, 487, 499, 511, 523, 535, 547, 559, 571, 583, 595, 607};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 619;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {866, 1459, 2052, 2645, 3238, 3831, 4424, 5017, 5610, 6203, 6796, 7389, 7982, 8575, 9168, 9761, 10354, 10947, 11540, 12133};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 12726;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {480, 976, 1472, 1968, 2464, 2960, 3456, 3952, 4448, 4944, 5440, 5936, 6432, 6928, 7424, 7920, 8416, 8912, 9408, 9904, 10400, 10896};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 11392;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {716, 769, 822, 875, 928, 981, 1034, 1087, 1140, 1193, 1246, 1299, 1352, 1405, 1458, 1511, 1564, 1617, 1670, 1723, 1776, 1829, 1882, 1935};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1988;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {103, 1016, 1929, 2842, 3755, 4668, 5581, 6494, 7407, 8320, 9233, 10146, 11059, 11972, 12885, 13798, 14711, 15624, 16537, 17450, 18363, 19276, 20189, 21102, 22015, 22928};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 23841;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {470, 1260, 2050, 2840, 3630, 4420, 5210, 6000, 6790, 7580, 8370, 9160, 9950, 10740, 11530, 12320, 13110, 13900, 14690, 15480, 16270, 17060, 17850, 18640, 19430, 20220, 21010, 21800};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 22590;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {239, 377, 515, 653, 791, 929, 1067, 1205, 1343, 1481, 1619, 1757, 1895, 2033, 2171, 2309, 2447, 2585, 2723, 2861, 2999, 3137, 3275, 3413, 3551, 3689, 3827, 3965, 4103, 4241};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 4379;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {346, 1055, 1764, 2473, 3182, 3891, 4600, 5309, 6018, 6727, 7436, 8145, 8854, 9563, 10272, 10981, 11690, 12399, 13108, 13817, 14526, 15235, 15944, 16653, 17362, 18071, 18780, 19489, 20198, 20907, 21616, 22325};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 23034;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {881, 1479, 2077, 2675, 3273, 3871, 4469, 5067, 5665, 6263, 6861, 7459, 8057, 8655, 9253, 9851, 10449, 11047, 11645, 12243, 12841, 13439, 14037, 14635, 15233, 15831, 16429, 17027, 17625, 18223, 18821, 19419, 20017, 20615};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 21213;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {140, 994, 1848, 2702, 3556, 4410, 5264, 6118, 6972, 7826, 8680, 9534, 10388, 11242, 12096, 12950, 13804, 14658, 15512, 16366, 17220, 18074, 18928, 19782, 20636, 21490, 22344, 23198, 24052, 24906, 25760, 26614, 27468, 28322, 29176, 30030};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 30884;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {820, 956, 1092, 1228, 1364, 1500, 1636, 1772, 1908, 2044, 2180, 2316, 2452, 2588, 2724, 2860, 2996, 3132, 3268, 3404, 3540, 3676, 3812, 3948, 4084, 4220, 4356, 4492, 4628, 4764, 4900, 5036, 5172, 5308, 5444, 5580, 5716, 5852};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 5988;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {838, 900, 962, 1024, 1086, 1148, 1210, 1272, 1334, 1396, 1458, 1520, 1582, 1644, 1706, 1768, 1830, 1892, 1954, 2016, 2078, 2140, 2202, 2264, 2326, 2388, 2450, 2512, 2574, 2636, 2698, 2760, 2822, 2884, 2946, 3008, 3070, 3132, 3194, 3256};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 3318;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {179, 608, 1037, 1466, 1895, 2324, 2753, 3182, 3611, 4040, 4469, 4898, 5327, 5756, 6185, 6614, 7043, 7472, 7901, 8330, 8759, 9188, 9617, 10046, 10475, 10904, 11333, 11762, 12191, 12620, 13049, 13478, 13907, 14336, 14765, 15194, 15623, 16052, 16481, 16910, 17339, 17768};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 18197;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {890, 1352, 1814, 2276, 2738, 3200, 3662, 4124, 4586, 5048, 5510, 5972, 6434, 6896, 7358, 7820, 8282, 8744, 9206, 9668, 10130, 10592, 11054, 11516, 11978, 12440, 12902, 13364, 13826, 14288, 14750, 15212, 15674, 16136, 16598, 17060, 17522, 17984, 18446, 18908, 19370, 19832, 20294, 20756};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 21218;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {530, 721, 912, 1103, 1294, 1485, 1676, 1867, 2058, 2249, 2440, 2631, 2822, 3013, 3204, 3395, 3586, 3777, 3968, 4159, 4350, 4541, 4732, 4923, 5114, 5305, 5496, 5687, 5878, 6069, 6260, 6451, 6642, 6833, 7024, 7215, 7406, 7597, 7788, 7979, 8170, 8361, 8552, 8743, 8934, 9125};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 9316;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {166, 391, 616, 841, 1066, 1291, 1516, 1741, 1966, 2191, 2416, 2641, 2866, 3091, 3316, 3541, 3766, 3991, 4216, 4441, 4666, 4891, 5116, 5341, 5566, 5791, 6016, 6241, 6466, 6691, 6916, 7141, 7366, 7591, 7816, 8041, 8266, 8491, 8716, 8941, 9166, 9391, 9616, 9841, 10066, 10291, 10516, 10741};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 10966;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {973, 1161, 1349, 1537, 1725, 1913, 2101, 2289, 2477, 2665, 2853, 3041, 3229, 3417, 3605, 3793, 3981, 4169, 4357, 4545, 4733, 4921, 5109, 5297, 5485, 5673, 5861, 6049, 6237, 6425, 6613, 6801, 6989, 7177, 7365, 7553, 7741, 7929, 8117, 8305, 8493, 8681, 8869, 9057, 9245, 9433, 9621, 9809, 9997, 10185};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 10373;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {30, 60, 120, 240, 480, 960, 1920, 3840, 7680, 15360, 30720, 61440, 122880, 245760, 491520};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 983040;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {33, 231, 1617, 11319, 79233};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 554631;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {9, 18, 36, 72, 144, 288, 576, 1152, 2304, 4608, 9216, 18432, 36864, 73728, 147456, 294912};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 589824;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {13, 117, 1053, 9477, 85293};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 767637;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {17, 34, 68, 136, 272, 544, 1088, 2176, 4352, 8704, 17408, 34816, 69632, 139264, 278528};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 557056;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {11, 22, 44, 88, 176, 352, 704, 1408, 2816, 5632, 11264, 22528, 45056, 90112, 180224, 360448};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 720896;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {4, 16, 64, 256, 1024, 4096, 16384, 65536};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {33, 132, 528, 2112, 8448, 33792, 135168};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 540672;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {27, 54, 108, 216, 432, 864, 1728, 3456, 6912, 13824, 27648, 55296, 110592, 221184, 442368};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 884736;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {3, 15, 75, 375, 1875, 9375, 46875};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 234375;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {15, 30, 60, 120, 240, 480, 960, 1920, 3840, 7680, 15360, 30720, 61440, 122880, 245760, 491520};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 983040;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {27, 54, 108, 216, 432, 864, 1728, 3456, 6912, 13824, 27648, 55296, 110592, 221184, 442368};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 884736;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {21, 42, 84, 168, 336, 672, 1344, 2688, 5376, 10752, 21504, 43008, 86016, 172032, 344064};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 688128;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {22, 220, 2200, 22000};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 220000;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {27, 54, 108, 216, 432, 864, 1728, 3456, 6912, 13824, 27648, 55296, 110592, 221184, 442368};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 884736;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {10, 20, 40, 80, 160, 320, 640, 1280, 2560, 5120, 10240, 20480, 40960, 81920, 163840, 327680};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 655360;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {12, 24, 48, 96, 192, 384, 768, 1536, 3072, 6144, 12288, 24576, 49152, 98304, 196608, 393216};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 786432;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {35, 245, 1715, 12005, 84035};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 588245;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {5, 10, 20, 40, 80, 160, 320, 640, 1280, 2560, 5120, 10240, 20480, 40960, 81920, 163840, 327680};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 655360;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {28, 56, 112, 224, 448, 896, 1792, 3584, 7168, 14336, 28672, 57344, 114688, 229376, 458752};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 917504;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {1, 1000, 1000000};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {250000, 500000, 1000000};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {250000, 500000, 1000000};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {2, 3, 4};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
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
    vector<int> A = {3, 4, 5};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {4, 6, 8};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {2, 4, 6};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {1, 2, 4};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {10000, 100000, 1000000};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 10000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {1, 5, 9, 13};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {100000, 200000, 400000};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 800000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {2, 3, 4, 5};
    GuessingNextElement* pObj = new GuessingNextElement();
    clock_t start = clock();
    int result = pObj->guess(A);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22682203&rd=11121&pm=8539
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
 
class GuessingNextElement {
public:
  int guess(vector <int>);
};
 
int GuessingNextElement::guess(vector <int> A) 
{
    int p=A[1]-A[0];
  bool fuck=true;
  for(int i=2;i<A.size();i++)
   if(A[i]-A[i-1]!=p){fuck=false;break;}
    if( fuck==true )
        return A[A.size()-1]+p;
    p=A[1]/A[0];
    fuck=true;
    for(int i=2;i<A.size();i++)
      if( A[i]/A[i-1]!=p ){fuck=false;break;}
     if( fuck ==true)
      return A[A.size()-1]*p;
}

********************************************************************************
*******************************************************************************/