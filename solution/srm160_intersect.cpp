/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1356
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

class Intersect {
public:
    int area(vector<int> x, vector<int> y);
};

int Intersect::area(vector<int> x, vector<int> y) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 2, 3, -4};
    vector<int> y = {17, 1000, 18, 6};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {10000, -10000};
    vector<int> y = {-10000, 10000};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {3, 8, 6, 12, 10, 15};
    vector<int> y = {7, 17, 7, 17, 7, 17};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {5, 5, 5, 5, 5, 5, 5, 5};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {2, 100, 5, 32, 1000, -20, 47, 12};
    vector<int> y = {29, -1000, -800, -200, -900, 300, -600, -650};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {1, 7, 12, 3, 16, 8, 3, 12};
    vector<int> y = {-90, -60, -70, 3, -60, -90, -80, -100};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {2, 3, 1, 4};
    vector<int> y = {6, 3, -10, 10};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {20, 30, 10, 40, 25, 50};
    vector<int> y = {3, 6, -10, 10, 5, -8};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {20, 30, 10, 40, 30, 50};
    vector<int> y = {3, 6, -10, 10, 5, -8};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {20, 30, 10, 40, 20, 50};
    vector<int> y = {3, 6, -10, 10, 5, -8};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {20, 30, 10, 40, 29, 50};
    vector<int> y = {3, 6, -10, 10, 5, -8};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {29, -177, -120, 31, 3, 100, 50, 7};
    vector<int> y = {-466, 16, -566, -266, -366, 26, -666, -16};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 2200;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-50, 27, 0, 300, -20, 5, -50, 300};
    vector<int> y = {7500, 100, 1000, 7501, 7000, 10, 10, 7501};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 30000;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-6520, -1976, 7940, 9494, -2322, -9034, 2229, 6002, 6945, 5815, 8862, 8994, -5804, 8978, -1440, 9747, -7138, -1009, -4474, -3180, -5143, 3731, 6897, -360, 8171, 2042};
    vector<int> y = {9205, 7572, -1866, -7270, 5762, -7963, 8039, 5933, -9800, 4763, 8462, 6271, -9388, -4565, 6381, -7696, -4681, -6766, -8259, -2789, 859, 677, 1443, 8242, -4379, 8907};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {-3653, -4300, 4346, -6884, 3961, 9904, -1824, 5221, -3512, -7656, 9944, -9575};
    vector<int> y = {441, 1735, -9002, 6132, -549, 6507, -5967, -5115, 5784, -8219, 566, -6581};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {9046, -994, -4914, 7176, 8519, 9710, -6436, 3383, -3113, -6927, 2010, 9793, -7504, 3364, 4799, 4985, -8235, 7327, 6712, -1955, 5632, 6480, -2620, 2912, 9756, 6847, -9991, -2871, -7847, 5226, 4770, 5522, 7665, -9336, 2408, 1810, -335, 9925};
    vector<int> y = {-1061, 506, 6677, -8290, 77, -7952, 4759, -8405, -6200, -3800, 5200, -1576, -2428, -8171, 6883, -2918, -2452, -6956, 8505, -7766, -8268, 3482, 7440, -9213, -2714, -2541, -8617, 7626, -4260, 9913, -4495, 6681, 490, -5736, -3446, 5157, -8424, -9202};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {3349, 1499, 5001, 456, 2271, 6450, 6762, -2117};
    vector<int> y = {-2870, -810, 2349, 2340, -7178, -7720, 1160, 4740};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {3925, 9922, 7959, 887, -4728, -9208};
    vector<int> y = {-6713, 3516, -2399, -9003, -102, 2373};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-3956, 2664, -9532, 2856, -9424, -630, 5540, 6490, -6860, -4298, -9026, -8385, -3408, 7714, -8448, -1721, 1585, -5480, 3388, 8342, 7326, -1130, -3851, 3606, 7907, 7239, 9862, 7343};
    vector<int> y = {6991, -5260, -5826, 3161, -8836, 6506, -6717, -4097, -1928, 7161, -1155, 2831, -1886, -9432, -7319, -7066, 429, -9820, -8080, -3886, -1704, -3252, -2069, -2364, -3591, -5878, 6663, 5609};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {-3653, 4664, -3998, -244, 4280, 6252, -5792, -3800, 8863, -1280, 5335, -8159, 3445, -4422, -4638, -7080, -2051, 3965, -3673, -1087, -4521, 3656, -5187, 8932, 4509, 5911};
    vector<int> y = {-5409, 3397, 8084, 3713, -7175, -3060, -9234, -2538, -3754, -7001, -2008, 7116, 3824, -9895, 7094, -9319, 8087, -1134, -1098, -4310, 3650, -5317, -5328, 3567, 1220, -7003};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-8924, 6326, 6278, 4734, 7885, 8603, 487, -3734, 1937, 3726, 5134, -1836, 8061, -8932, 2851, -7608, -8846, -1270, -2124, -3348, 7199, 9724, -3280, -9366, 7537, -151, 5254, -9762, -7591, -1388, -1062, -5324, 6950, -9894, 8174, -5271, -1542, 2990};
    vector<int> y = {-1151, -6466, -9782, 1780, -4665, 4204, 7518, 3411, -2586, -5128, -2324, 9406, 2511, 99, -4084, -5776, 2731, -3714, -8555, 5509, -2992, 6352, -2594, 5550, 6623, -2372, 2697, -212, -2563, -2840, 3772, -4557, 6212, -9351, 4216, -5710, -6417, -9539};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {780, 6954, 8340, -3255, 1540, 8515, -4309, 9663, 741, 4493, 5767, -1058, 1465, 7112, -214, 8008, -8841, 1597, 31, 5917, 6363, 6455, -9850, -6941, -5859, 7644, -2148, -8249};
    vector<int> y = {-3069, 8837, 1661, -454, -4986, 278, -6142, -717, -4475, -9886, -5055, -2878, 4061, -1840, 6866, -8207, -8451, 3056, 7584, 6687, -8597, 763, -9695, -8143, 8725, 3177, 3318, 6243};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {2742, -9961, -8537, -2482, 6787, 2782, -3330, 7754, 7948, 7416};
    vector<int> y = {5939, -3787, 8203, -8391, -4112, -101, -5443, 9485, -9262, 7070};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {1471, -6907, 5726, -3516, 6284, -1001, -8324, -3979, -3050, -4207, 9222, -3315, 6845, 6713};
    vector<int> y = {-3214, 2612, -4501, -7360, -8966, -7171, 3214, -1932, -7532, -562, -9974, 1115, -4096, 2874};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-1803, -6684, -476, 7746, -9276, 7386, 9262, -2193, -7518, -7866, 8345, 6310, 3992, -6436};
    vector<int> y = {1350, 9529, -8882, 2023, 4277, -6751, 1931, -5190, -9164, -6158, -267, -5030, 5368, 5476};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {9663, -3809, -4898, -7409, 8614, -6722, 6457, -4193, -6588, -9730, -6239, 6011, 4009, -2502, 6187, -6603, 1735, -9738, 6222, -6053, -4103, -9893, -5851, -1563, 4131, -464, -6777, -6501, 8989, 6370, 3522, 2571, -5740, -8429, 5353, 9001, -152, 2838, -1448, -4694, -1155, 5803, -1178, 9182};
    vector<int> y = {7753, -2557, 2085, -3513, -1187, 4563, 6487, 5824, -642, -3681, 9964, 1560, -1019, -2352, 3397, -4368, 6163, 76, 6505, 6397, -9920, -351, -1321, 5609, -9590, 5858, 6280, -6835, -9883, 9422, -6141, 5511, 5244, -9597, 2631, 8027, 6483, 8875, 428, -4518, -6006, 1346, -6820, -751};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {3234, -3748, 726, -8168, -9360, 373, -9138, -9358, -8015, -6531, 1789, -4349, 4427, -2747, 8346, 6006, 2378, 9199, 5768, -7094};
    vector<int> y = {7493, 6702, -6731, -1152, 4870, -840, 2942, -39, -3249, -3302, -254, 3382, 2438, -4788, -7492, -7296, 9145, -497, -978, -87};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {1313, -6853, -8539, -5963, -5833, 9046};
    vector<int> y = {1466, -5713, 7596, 6127, 8630, 7412};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {7611, 6862, -21, -6307, -3791, 2931, 2982, -2205};
    vector<int> y = {529, -9231, 1016, -4514, -9252, -2510, -977, -3968};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {-7760, 8159};
    vector<int> y = {7710, 7228};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 7672958;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {8745, -3918, 170, -297, 5483, 301, -3157, 7691, 3294, -5696, 7455, 5270, 8502, -7930, -5017, 8042, 172, -8776, -889, -122};
    vector<int> y = {1457, 8637, 795, -8090, 8800, 1550, 2800, 7862, 9927, 5936, 4181, -2804, -1748, -4074, 3729, -5985, 3145, -5015, -1070, 2184};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {-3312, -9695, 3949, -6711, -5638, -5141, -4911, 7496, -4465, -3158, 1603, 8527, 4974, -2454, -2518, -6357, 6808, 8133, -9050, 6342, -5205, 2711};
    vector<int> y = {-9947, -9681, 4163, 333, 4302, 3580, 4103, -7831, 8299, -8628, 5359, -2604, -5762, 7003, 7268, -9826, 8984, 1561, 5909, -4096, 3501, -6546};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {4817, -2154, -2604, 7211, -4136, 4776, -9278, 5600, 9539, 6549, 4852, -1017};
    vector<int> y = {5910, -6285, 273, -9702, 3327, 3647, -7297, -3710, 7877, 4606, -2639, -8825};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {-421, 1393, -167, -1988, 9661, -5944, -8520, -4335, 3475, -4440, -824, 3543, -8325, 6474, 6990, -8006, 4944, -9821, -4992, -4664, 6010, 8569, 7114, 3903, -1409, 8467};
    vector<int> y = {-8287, -5874, -2210, -3730, -1128, 4716, -9688, 8587, 8874, 4426, -3703, 4224, 8295, 8894, -6467, -5422, -3743, 3362, -3875, -3190, -5122, -9309, -3408, 8206, -8493, 2545};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {-4597, -3195, 4675, 6750, -7122, -5820, 4441, 8731, 4467, 8138, 6485, 8813, -7114, 5275, -9683, -8622, -2178, 4246, -7542, -4018, -683, -7774, 903, -3012, 9154, 3800, -9156, 5869, 131, -5034};
    vector<int> y = {40, -3045, -9057, 8161, -992, -5352, -3054, 6645, 6894, -2121, -2040, -4129, 4948, 703, -5450, 3754, -4818, -9604, -629, 632, 8036, -2450, 8729, 8372, -9224, 8391, 2199, 4893, 8582, -9049};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {7449, 2017, -1380, -432, -4369, -7231, 7366, 5196, -5070, -9789, 5395, 8276, -248, 1915, 8820, 9798, -8149, 1399, -7526, -9834, -6564, 3697, -9951, 2185, -3977, -8638, 6651, 2199, -9402, -9401, -9213, -8092, 7281, -5408, -9618, -9100};
    vector<int> y = {5833, 5220, -7420, 7842, -9601, 6995, -3765, -4377, 5582, 4154, -2794, -8726, 3787, -3821, 2718, 852, 4638, -2493, 5064, -1140, 8638, 5626, 146, 4155, 4119, 7362, 8931, 4020, 2815, -3352, -7634, 8185, 1740, -6102, -5857, -7055};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {3051, -207, -3369, -8221, -9025, 1257, -2751, -6012, 2563, 6575, 5832, -3723, 2004, -8745, -4372, -144, 3088, -4307, -1489, 8328, -1725, 6537, 3315, 1565, -7224, -2469, -4478, -5638, 7056, 4100, -8677, -6522, 5018, -2593};
    vector<int> y = {365, 2498, -8676, 731, -6327, 8573, 6786, 1877, -8614, -9008, -7548, -5794, 3695, 6882, -742, 7082, 7935, -4317, 3108, -611, -698, 4869, -4992, -4088, -5395, -5041, -8446, 3189, -2584, 6641, -9732, -2771, -1187, -9685};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-6538, 2067, 215, -7470, 9957, 867, 1417, 4559, -8429, 6357, -2299, -7607, -364, -3776, 7546, -9331, -7662, -9454, -8131, 85, 2167, 66, -2976, 4079};
    vector<int> y = {6927, -3807, -7356, 5622, 4447, 1028, 4398, 8286, -7286, -9458, -4150, -9861, 2946, -9899, -540, -4623, 847, -8307, -8948, -4857, 3120, -1021, 149, -5356};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {95, -4374, 584, -3253, 4964, 9108, -3661, -3804, -9208, -2272};
    vector<int> y = {744, -4003, -3540, -8742, 259, -6793, -2493, -6870, -2612, -7301};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {691, -9706, 5327, 7996, -1682, 4452, 9, -5730};
    vector<int> y = {-4890, 6474, 1381, -7379, 3058, -4292, -7869, -9102};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-372, 330, 3653, 6910, 2096, -3656, -9157, -8395, 3797, 3369};
    vector<int> y = {523, -8573, 4862, 4530, 1295, 2565, 8709, 9406, 9064, 9902};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-8152, -5458, -8364, -4308, 7765, 5296, -3602, 2115, -2698, 7885, 8009, -5132, 8986, 8100, -835, -8062, -9246, -1212, -5089, -1982, -8409, 8014, 10000, 5621, 9870, 1521};
    vector<int> y = {8133, 876, -3184, -6400, -3709, -9610, 3291, -9375, -7925, -9856, 160, 5295, 296, 5658, -527, 1880, 9646, -9458, -2862, 3771, 207, 9004, -3973, 9479, -9884, 1623};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-3206, 9502, -6474, -572, -8789, -1425, -7065, -7977, 2320, -9608, -4955, -4830, 7128, -1340, 6207, -218, -1064, 5083, -5957, -4488};
    vector<int> y = {-3073, 7717, 3374, 3504, -6177, 2612, 6260, -9035, -8656, 3927, 6527, -4558, 2534, -7249, -3238, -2881, 8949, -4266, 5610, -9958};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-7017, 895, 951, -9118, -8512, -8348, 60, 5543, -4334, -4567, 3088, 6779, -9046, 7397, -5019, 6112, 191, 7225, 541, 5683, 2822, -878, 5901, 6783, -5303, -7598, -9675, -8526, -8814, -682, 3480, -6729, -4624, 8988, 4451, -2757, 946, -9477};
    vector<int> y = {6003, 6149, 8404, -1498, 6155, 8385, 9340, 786, -4629, 4722, 8348, -4299, 5892, -3385, 8001, -6978, 1770, -6588, 22, -649, -6773, 5776, -5250, -720, 279, -9378, -4829, 3688, -367, 419, -6345, 8484, -3386, -6551, -7056, 8523, -2766, 7553};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {6779, 2689, 3227, 122, 4542, 3582, -9588, -7473, -2385, -1428, 4484, -5645, 9924, -1742, 6239, 8245};
    vector<int> y = {3534, 4260, 4950, -7938, 8544, -9318, 5844, 9022, -9153, 2107, 1772, 5783, 5978, -1130, 1422, 7261};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-9613, -1988, -4888, 8143, -1437, 58, 321, -950, 5132, -8799, -2682, -9850, -3562, -3551};
    vector<int> y = {-7877, -2375, -4675, 8136, 5801, 8056, 3663, -2305, 143, -4408, 1047, 6865, -9145, 8930};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {-227, -4483, -3754, -2760, 9082, 4608, -2029, -3036, 1574, 6573, -6182, 1529, 263, 2940, 7440, 9444, -875, 3652, 3620, 7696, 6820, -758, 5157, -5944, 7823, 4660, -824, 3806, 4291, -2396, 994, 3718, 3057, -2829, 8588, 377, 946, -5449, 762, 7655, -351, -9606};
    vector<int> y = {4341, 5379, 7314, 6875, -9302, -2610, -6136, 81, 1572, 7266, 2548, -2785, -226, 7138, 1682, -2432, -9756, 3398, 9847, -2812, 3237, -6308, 9709, -7415, -6866, 1899, 6284, 950, -4363, 5721, 6907, 2222, 7109, -2057, -4840, -2036, 453, -8740, -1566, -777, -6237, 1737};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {3578, 6211, -3927, 7434};
    vector<int> y = {497, -4034, -3866, -8416};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 442344;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-6591, 7270, -1532, 4374, -4985, -9430, -8829, -9806, 5453, -1033, -9477, 3665, 3770, -9934, -1638, -5323, 6922, 533, -9257, -5634, -9294, -605, -3076, -8764, -4016, -3338, -9411, 3822, -1704, -299, 8485, 2812, -9906, -4633, -8921, 6903};
    vector<int> y = {2270, -3288, -7635, -9833, -944, 7622, -5985, -6983, -5306, 5829, -621, -4851, -9474, 7357, 2195, 4612, -1141, 2963, -6136, -767, -1509, 8157, -9778, 1087, 8233, 3119, -2391, -7826, -6936, 5621, -3411, -6568, 5537, -6215, -5334, -6020};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {-6316, 9348, 2659, 2206, 5525, 7562, 5339, -8785, 1479, 5656, 3081, -9867, 1235, 763, -1273, 6533, -3808, -9781, -5737, 6442, 6900, 4074, -8923, 1299, 8696, -8740, -3311, 2955, -117, 2373, 2600, 2706, -3724, -6381, 4846, 39, -778, 3972, 5782, 3853, 4970, -8902};
    vector<int> y = {3579, 112, 4850, -2221, -2483, 5420, 9101, -4799, 8872, 4343, 372, 5397, 9953, -3594, -142, 9731, -2248, -1561, 7820, -5425, -7007, -2748, 8589, 8289, -5801, 1270, 1936, -4340, 5673, 3516, 838, -6149, 8702, -4126, 9311, -9215, -3963, 2700, 8207, -1631, -3911, -5526};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-7895, -5998, -6916, 8487, -8878, 6862, 2076, 5378, -1906, 4173, 9787, -6592, -8450, -143, 1852, -279, 6584, 2001, -1354, 4804, -7344, 2727, 486, 6546, 9977, 3899, -4018, 8333, 1343, -2204, -350, 911, 8688, -8734, -8965, 3678, 9959, 3330, 3457, -6699, 3573, -8166, 8433, 5759, -4777, 1115};
    vector<int> y = {1271, -1278, -5250, 6025, -1835, -8056, -5620, 4696, -9960, -4774, -9759, -1901, -1248, -8948, 8647, 7627, 9492, -7920, 4636, 2711, 9878, -8013, 2866, -3558, -259, -3670, 207, -3314, 431, -5931, -2346, -4174, -6470, 1536, -5950, 2247, 6828, 4411, -4232, 6377, -9470, 9385, 282, 5836, 5217, 9613};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {-5977, 3589, -7374, -3821};
    vector<int> y = {5263, 8037, -6257, 8219};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 5980744;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-3210, -5862, -3968, 2509, 1626, 8365, -7975, -6366, 3220, -6702, 4907, -9167};
    vector<int> y = {1973, 659, 7719, 7394, -5738, -6830, -7043, 6506, -187, -2433, -2272, 8546};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {9112, -2784, 8345, 5084, -4907, -229, 3858, -4360, 9808, -2912, -8489, -6575, -3453, -1304, 5101, -3007, 5254, 8910};
    vector<int> y = {-202, 8881, -1934, -5286, -2347, -2641, 5524, -5689, 9017, 635, -2163, -6560, -9739, 2898, -2554, 6702, -5064, -1849};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {5772, -2001, -9761, -3478, 1352, -2624, -806, 1711, 8707, -8106, 9048, 2428, 2395, 1111, 9633, -8221, -8909, -7231, 7910, 3657, -7682, 950, -6978, 3434, -1681, -1931, 7893, 5894};
    vector<int> y = {-4409, 2702, 8002, -9702, 1034, -2126, 6318, 5159, -3318, -6254, 1546, 2536, -3822, -3636, 6045, -9478, -3349, -9578, 705, 4937, 4174, 97, 9738, 8700, 3476, 2058, -3024, 2126};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {2483, -5354, 184, 698, 8826, -8242, 9147, 6413, 7384, -4514, -9497, -6316, 6962, -2158, -1134, -53, 2413, -891, -6457, -9775, 9089, 7211, 4613, -3912, -3813, 8599, 2353, -235, 8527, 4630, -6080, -2956, -1834, -2204, 6897, -8564, 8242, 1273, 9914, 1486, -132, -988};
    vector<int> y = {-5904, 7100, -7411, 8666, 5033, -4315, 694, 4639, -4459, -8837, -1201, 2141, -7019, -7357, -9940, 7512, 8309, -6550, 8340, 1876, 3226, 1062, 3005, 227, -2115, 360, 721, -651, -3074, 2475, 3928, -8592, -524, 2245, 6292, 4917, 4574, -6688, -8892, -1966, -3165, -3108};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
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
    vector<int> x = {179, -3427, -3968, 5984, 2133, -8837, -2658, -1801, 6038, 717, -5182, 1423, -7781, 5153, 7897, 8148, -4922, 421, -6306, 1839, -4483, -3959, 2578, 6790, 1073, -4091, -9636, 196, 242, 7697, 4083, -9329};
    vector<int> y = {5340, 2606, -1154, -5428, -8937, -9649, 1423, -5083, -5824, -3675, 311, -8477, 4180, -3040, 4892, -8878, 6096, -387, -1831, 4961, 9895, 6886, 7740, -4277, -5636, 5102, -7961, -6931, 2634, -5278, -8426, -7852};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {8195, 4888, -9571, -6271, -5442, -3529, 6140, -973, -115, -536, 5884, -6813, 8332, -1356, -3435, -5476, -2273, -2832, -1364, 367, 5516, -6616, -8407, 9867, -7846, -1523, 2376, 7037, 1965, 5713, -4164, 5017, 9928, -8097, 9340, -942, -9239, -5730, 3953, -6716, 3616, -4420, 4846, -1294};
    vector<int> y = {2267, 7565, -7867, -7420, -460, -7081, -1635, 948, -3224, 3545, -6412, -4167, 2589, -2253, -1117, -7946, -3068, -5332, 3098, -4699, 6683, -5415, 9318, 3566, -554, -9214, 5291, -209, 5419, 2450, 1435, -8588, -1718, 4880, 2227, 4455, 8405, -1273, 2409, -5896, -4975, 2500, -7420, -925};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-794, -245, -1523, -4679, 4074, -4927, 3693, -7674, 6515, -6603, 8351, -805, -9634, 4224, -18, 3822, 6667, 4675, -1355, -2043, 5150, 5121, 1810, -4396, 4359, -4572, -6031, 9135, -4125, -3745, -1478, 7698, 1071, 3477, 8593, -5712, 8532, 8528, -8616, 7303, 4334, -5883, -2319, -3734, 8018, -581, 7584, 9938, 8969, -3348};
    vector<int> y = {-9497, -3224, -7745, -7673, 2705, 8276, -1126, -7769, 2542, 9135, -7747, -7679, -4146, -6386, 4719, -3495, 2462, -1522, -1004, -2555, -8642, -9487, 6591, -2280, -340, 2878, 8882, -3855, 4554, 9005, 1907, 954, 2070, 9846, 5907, -1753, 1082, -5838, 5376, 3661, 5410, -8261, 7696, -9864, -5441, 584, 1750, 5692, 2149, -7289};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-2667, 5698, 5800, 9979, 9128, -4017, 1351, 7822, -3847, 2585, -6540, -8748, -1166, 1941, 6646, 450, 6028, -3467, -1069, -3144};
    vector<int> y = {-9585, -9544, 3510, 7284, -8799, -7495, 8769, 4111, 7922, -1132, -7208, -6479, -7187, 4533, -8538, -9512, 1364, 2838, 8949, -7724};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {6466, 8671};
    vector<int> y = {1824, -3258};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 11205810;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {-5779, 3065, -3468, -6708, 1526, 7182, 4551, 4808, 8577, -6192, 6835, 7035, -3061, 28, 249, 5548, 3293, 8180, -9994, 2693};
    vector<int> y = {2285, 6685, -9876, 378, -6808, -8041, 4141, 4756, 3645, 6802, -1498, -9453, -1014, -9873, -5304, -8011, 4385, 8941, 4396, 8336};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {8212, -9975, 8858, 7921, -1013, -9979, -3630, -4408, 1506, 1853, -8911, -5003, 6668, 3306, 3287, 3708, 2722, -8436, 1100, -6721, 1051, -2831, 2624, -3011, -5385, -3201, 9052, 5801, 5827, -5219, 421, 3714, 727, -6200, -4740, 2611, -4146, 3927, 4366, 3100};
    vector<int> y = {-1858, -1241, 3752, -3810, 4668, -7886, 7622, -592, 6452, -6862, -1987, 505, -81, 5428, 2626, 1830, 1032, -6952, 2940, -2920, 1259, 5756, 3449, 8539, 7133, -277, 8436, 4837, -9671, 2843, -8944, 1792, -4430, -3530, -1785, -6238, -5702, 7677, 986, -5611};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {2, 100, 5, 32, 1000, -20, 47, 12};
    vector<int> y = {29, -1000, -800, -200, -900, 300, -600, -650};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {1, 7, 12, 3, 16, 8, 3, 12};
    vector<int> y = {-90, -60, -70, 3, -60, -90, -80, -100};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {0, 4, 6, -8};
    vector<int> y = {4, 8, -6, 9};
    Intersect* pObj = new Intersect();
    clock_t start = clock();
    int result = pObj->area(x, y);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7358786&rd=4605&pm=1356
********************************************************************************
#include <vector>
 
using namespace std;
 
class Intersect {
int left, right, top, bottom;
void eat(int x1, int x2, int y1, int y2){
  int lo,hi;
  lo = ((x1<x2)?x1:x2);
  hi = x1+x2-lo;
  if (lo>left) left=lo;
  if (hi<right) right=hi;
 
  lo = ((y1<y2)?y1:y2);
  hi = y1+y2-lo;
  if (lo>bottom) bottom=lo;
  if (hi<top) top=hi;
  
}
public:
int area(vector <int> x, vector <int> y) {
  left = bottom = -11111; right = top = 11111;
  for (int i=0; i<x.size(); i+=2)
    eat(x[i],x[i+1],y[i],y[i+1]);
  if (top<=bottom) return 0;
  if (right<=left) return 0;
  return (top-bottom) * (right-left);
}  
};

********************************************************************************
*******************************************************************************/