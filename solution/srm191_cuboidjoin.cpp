/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2329
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

class CuboidJoin {
public:
    long totalVolume(vector<int> cuboids);
};

long CuboidJoin::totalVolume(vector<int> cuboids) {
    long ret;
    return ret;
}


int test0() {
    vector<int> cuboids = {0, 0, 0, 1, 1, 1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cuboids = {0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 0, 0, 0, 1, 1, 1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cuboids = {-5000, -5000, -5000, 5000, 5000, 5000};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cuboids = {-275, -1020, -2918, 921, 2673, 3863, 497, -3921, -1831, 3059, 618, 811, -3106, -1159, -2082, 996, 3280, 3052, 4387, 1735, 244, 4469, 4692, 3278, -369, -366, 2870, 968, -91, 3502};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 129892376024;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cuboids = {1140, 2751, -1253, 1580, 4433, 4795, -4815, 9, 1222, -4309, 1585, 2128, -1496, -1921, 1236, 602, -1300, 4118, 458, 1438, -839, 2715, 2588, 2766, -4210, -1597, 1999, -1705, 2013, 4861};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 44191502582;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cuboids = {-3149, -3139, -3843, -2590, 2472, 4666, -988, -4182, -4745, 3101, 233, -2290, -2875, -4122, 1943, -2849, -2273, 3240, -1973, -965, 733, 3805, 3670, 3578, 1310, -1837, -4989, 3393, -578, 3941};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 162823810512;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cuboids = {-3209, -2934, -4688, -390, 4393, -2577, -1816, -4149, 1709, 3216, -3087, 2316, 1524, -3311, -4251, 2600, -106, 1701, -2551, -227, -3024, 4191, 2343, 4417, -783, -1519, -4952, 4777, 1232, -4142};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 204837483171;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cuboids = {1051, 3609, -184, 1699, 3707, 3002, -1864, -971, -2605, -1682, 4838, 4526, 237, -1757, -3464, 1168, 3418, 3713, -4939, -3614, -4969, -1319, 1112, -38, -1798, -3032, 1504, 1635, 1387, 4041};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 157034258652;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cuboids = {-4007, 3046, -3249, -3882, 3136, -1863, -2235, -4619, 719, -983, -465, 4795, -4604, 1716, -2222, -481, 4009, 4864, -4528, -3039, -1258, 3956, 3269, 3905, -902, -1654, -3847, 3791, -531, 4370};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 337888555093;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cuboids = {-3654, -4797, -3059, 2630, -2833, -2183, -31, 2833, -4614, 3574, 3736, -2747, -738, -2735, -1061, 930, -2388, -533, -1940, 2772, -4131, 4112, 2816, -1434, 1703, 2688, -583, 4918, 4441, 4344};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 45680906570;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cuboids = {-3770, -4962, -3697, -1858, 1899, 1502, 2996, -3343, -1433, 4308, 883, 2898, -4693, -1637, -2455, -1226, -883, 1635, -4956, 1156, 326, -4914, 2180, 1333, -3469, -3008, -2343, 643, -1338, 558};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 108813743682;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cuboids = {-3455, -3695, -3168, -2513, 2084, -1226, 2377, -3969, 2228, 2991, -1299, 3672, -1282, -385, -4254, 4016, 1923, -583, -4034, 1854, 2090, -3546, 4497, 2329, -3423, 996, -1457, -2216, 1597, 3177};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 61370812544;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cuboids = {548, 1638, -773, 658, 4076, 1596, -1075, -4477, -3619, 2927, 4021, 1956, -3555, -195, -4047, 3234, 1830, 1900, -1854, -3824, -4964, -1360, -2896, -2442, -3494, -2621, -1016, -1110, 767, -926};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 228322641839;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cuboids = {-3146, 3452, 1161, 678, 3830, 3285, -1494, -2099, 2146, 3603, 2090, 4040, -4539, 213, -3485, -3112, 3394, -3254, -2211, -285, -2471, 308, 1770, 214, -41, -912, -1529, 591, 1083, 4362};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 62664619356;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cuboids = {-4310, -3729, -382, 4745, 950, 3324, -526, -1309, -3543, 1536, 812, -550, -3839, 1583, 42, -2710, 1817, 2019, 1369, -1714, -4534, 3902, 3803, -1543, -3807, -3917, -4568, -443, -156, 2191};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 266020880902;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cuboids = {3517, -3723, 988, 3525, 2747, 2609, -3660, 4490, -2768, -830, 4774, -562, -54, -1750, 596, 4444, 3646, 3494, 863, -4315, -4648, 2402, -177, 1727, -1268, 196, -4074, 4877, 1704, 4541};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 170172198529;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cuboids = {437, -1775, -1847, 4588, -919, 2249, -1993, -3754, 2564, -349, -1525, 3332, -4675, 341, -2407, -1672, 4690, 4987, -2529, 783, -3405, 3394, 3661, -54, -3085, -3169, -4386, 4213, 1334, 1347};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 328240104918;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cuboids = {-1996, 523, -4338, 2684, 4967, -3434, -2932, -2169, 2559, 3272, -318, 3320, 3204, -2234, 683, 3864, -438, 1291, -2242, 130, -4871, -655, 1099, 978, 295, -4310, 848, 2917, -1165, 967};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 37538683497;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cuboids = {-3729, -4309, -4950, 4564, 296, -4184, -4161, 3403, -2314, 1225, 4282, -769, -3272, -3245, -4452, -2137, -341, 4370, -3145, -514, -2415, 892, 1719, 1027, -4026, -3529, -4994, -2663, 3715, -234};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 129256462914;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cuboids = {-1878, -1472, -299, -766, -992, 2850, -1724, -455, 2919, -60, 116, 3013, 2701, -1800, -1383, 4179, 3083, 4110, 656, -4336, 2045, 1210, -1937, 2371, -4148, 2693, 2062, 1084, 4568, 2472};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 45868880254;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cuboids = {2575, 1370, 605, 2782, 4773, 1347, -4182, -331, -1945, -3188, -263, -902, -1598, -4951, -1270, -929, -268, -255, -3747, -4190, -4605, 3932, -1062, 217, -470, -2252, 1287, 2231, -1561, 2154};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 119091254924;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cuboids = {2426, -4598, -2912, 4036, -738, -2171, 197, -1394, 3018, 1800, 1652, 4364, 2469, -412, -52, 3054, 2780, 2418, -960, -3588, -1691, 4038, 2795, 1169, -898, -2173, -1310, 860, -784, 4526};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 112402823822;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cuboids = {-4555, 476, -3556, -3362, 2877, -1146, -450, -4543, 498, 2018, -3076, 4408, -3990, -3654, -3922, 155, 661, -2169, -4875, -4412, -4191, -3239, 812, 3298, 599, 4522, -4776, 2703, 4812, -1033};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 112054693016;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cuboids = {-5000, -5000, -5000, 5000, 5000, 5000, -5000, -5000, -5000, 5000, 5000, 5000, -5000, -5000, -5000, 5000, 5000, 5000, -5000, -5000, -5000, 5000, 5000, 5000, -5000, -5000, -5000, 5000, 5000, 5000};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cuboids = {-5000, -5000, -5000, 5000, 5000, 5000, -5000, -5000, -5000, 0, 5000, 5000, 0, -5000, -5000, 5000, 5000, 5000, -5000, -5000, -5000, 5000, 0, 5000, -5000, 0, -5000, 5000, 5000, 5000};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cuboids = {0, 0, 0, 5000, 5000, 5000, -5000, -5000, -5000, 0, 5000, 5000, 0, -5000, -5000, 5000, 5000, 5000, -5000, -5000, -5000, 5000, 0, 5000, -5000, 0, -5000, 5000, 5000, 5000};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 3, 3, 3, 8, 8, 8};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 188;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 3, 3, 3, 7, 7, 7, 6, 6, 6, 10, 10, 10};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 190;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 1, 1, 1, 3, 3, 3};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cuboids = {0, 0, 0, 5, 5, 5, 1, 1, 1, 4, 4, 4, 2, 2, 2, 3, 3, 3};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 125;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 2, -2, -2, 7, 6, 6};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 352;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 2, -2, -2, 7, 6, 6, 5, 0, 0, 9, 4, 4};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 384;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cuboids = {0, 0, 0, 9, 4, 4, 2, -2, -2, 7, 6, 6};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 384;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 3, 2, 0, 7, 6, 4, 3, -1, 0, 8, 3, 4};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 176;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cuboids = {0, 0, 0, 9, 4, 4, 0, 2, 0, 9, 6, 4, 2, -2, -2, 7, 6, 6};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 416;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 2, 2, 2, 8, 3, 3, 6, 0, 0, 10, 4, 4};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 130;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cuboids = {-5, 3, -1, 2, 4, 0, 1, -5, 1, 2, -2, 1, -3, -4, -3, -1, 0, 4, -2, -5, -1, 0, -2, -1, 1, -3, -5, 2, 3, 0};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 93;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cuboids = {1, -5, -5, 4, 3, 5, 0, -4, -3, 2, -2, 2, -1, 2, -5, 1, 2, 0, -1, 1, 0, 2, 4, 1, -4, -3, -2, 0, -1, 4};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 305;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cuboids = {-3, -1, 2, 3, -1, 5, -3, 0, -2, 2, 1, -1, -3, 2, -4, 3, 5, 5, 4, -5, 1, 5, -3, 2, -4, 0, -3, -3, 5, 1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 189;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cuboids = {-1, -2, -3, -1, -2, 0, 4, -5, -1, 4, 1, 3, -5, 3, 0, -3, 4, 5, 0, 2, -2, 5, 4, 0, 1, -2, 1, 5, 2, 2};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 46;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cuboids = {-1, 5, 2, 2, 5, 5, 0, -5, -4, 5, -2, -3, -5, 1, -4, 5, 3, -1, -3, -3, -1, 4, 3, 5, -5, -4, 1, 0, 4, 1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 327;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cuboids = {0, 0, 0, 1, 2, 3, 5, 5, 5, 6, 6, 6};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cuboids = {};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cuboids = {0, 0, 0, 1, 1, 0};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cuboids = {-1302, 2052, -965, -197, 4268, 3029, -860, -1763, -3318, -228, 441, 2418, 770, 1668, -3785, 1635, 2842, -2862, -1939, -870, -2904, -1419, -804, 2252, 881, -4270, -4068, 3590, -423, 3226};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 94898721340;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cuboids = {-2379, -4984, 1650, 471, -145, 1870, -2764, -3169, -3851, 67, 581, 4844, -3142, 2803, -2890, 2854, 3565, -1454, -1639, -2811, 2488, 3699, 3108, 4687, -3094, -3703, 7, 3025, -3670, 1075};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 157245450108;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cuboids = {1430, -2074, -4886, 1603, 2210, -293, -771, -4027, -4386, 2688, -1097, 2217, -4731, -1105, -3863, 2774, 3908, 1286, -3494, -3104, -1166, 2423, 2895, 2156, -1155, -1433, -2990, 4130, 2500, -1061};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 310389718846;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cuboids = {-4767, -4746, -1274, 2425, 2455, 4012, -1570, 1703, -2748, 470, 4125, 2979, 307, -589, -1686, 624, 1413, 4834, -1048, 1127, -2736, 526, 3573, 3871, -1596, -4655, -1738, 1420, 4078, 491};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 311557135452;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cuboids = {-501, -4903, -1517, 1528, -3490, 356, -4423, -1956, -3435, 4976, -302, 327, 1378, -2608, 717, 4534, 4990, 2737, -4216, -2081, -1326, 4460, 273, 3786, -4795, -1441, -3305, 914, 3500, 4342};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 336659119546;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cuboids = {1435, -4189, -4454, 4304, -2988, 632, -247, -3691, -2631, 2541, 1800, -1834, -309, -2919, 1557, 3426, 3626, 2909, -2634, -4242, -3114, 2527, 2690, 1119, 4257, 2661, 1929, 4665, 2829, 4062};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 197301897874;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cuboids = {-141, -829, -2171, 1975, 4434, 4439, 1293, -1676, -3323, 4597, 4272, 4686, -4934, -1744, 3234, -3370, 3638, 3719, -4117, -2076, 854, -409, 2773, 1498, -684, 874, -1979, 3267, 3340, 3997};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 231338733304;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cuboids = {-826, -3435, -4569, 942, 261, 458, -158, 233, -1792, 1892, 1517, -357, 2994, 1591, -223, 3126, 4848, 159, -1027, -1030, 391, 1551, -81, 3752, -4796, 4066, -4503, 284, 4332, 1365};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 52785968962;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cuboids = {-823, -919, -40, 369, 3496, 2703, -4788, 1900, -1199, 451, 3885, 2837, -4710, -661, -2860, -3469, 1407, -607, -1445, 205, -1592, 2284, 511, -1561, -2922, -2936, 1263, 1237, 1358, 2465};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 75210408186;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cuboids = {913, -2119, -2268, 1475, 1910, -1470, -2603, -3081, -2918, -1563, 1373, 1687, -1414, -1354, -2013, 2547, 3680, 4567, 245, 2585, -779, 2125, 2992, 187, 1132, 3047, -4414, 2620, 3269, 4430};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 154242551694;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cuboids = {-3243, -917, 922, 354, 364, 1183, -4259, -4523, 2913, 301, 831, 3721, -3266, -3573, 1228, 1073, 1286, 1874, -2537, -3262, -1462, 1433, 4764, 4087, 603, -1988, -2396, 4736, 4907, -228};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 245265661180;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cuboids = {0, 0, 0, 1, 2, 3, 5, 5, 5, 6, 6, 6};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cuboids = {0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cuboids = {-123, 43, 345, 12, 344, 4999, 30, 45, 360, 800, 300, 700, -50, 20, 345, 12, 344, 4999, 50, 79, -4999, 4999, 90, 0, 245, 23, 21, 456, 1245, 4566};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1688249645;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cuboids = {-5000, -5000, -5000, 5000, 5000, 5000};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 0, 0, 0, 1, 1, 1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cuboids = {0, 0, 0, 1, 1, 1, 0, 0, 0, 22, 22, 22, 5, 5, 5, 17, 17, 17, 9, 9, 9, 13, 13, 13};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 10648;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 2, 2, 2, 5, 5, 5, 3, 3, 3, 6, 6, 6};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cuboids = {0, 0, 0, 10, 10, 10, 5, 5, 5, 20, 20, 20, 7, 7, 7, 30, 30, 30};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 14220;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cuboids = {1, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6, 7, 3, 4, 5, 6, 7, 8, 100, 120, 130, 1000, 1000, 1000, 1, 1, 1, 10, 2, 3};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 689040083;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cuboids = {0, 0, 0, 4, 4, 4, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 4, 4, 4};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cuboids = {100, 100, 100, 200, 200, 200, 150, 50, 120, 250, 80, 300, 0, 0, 0, 60, 60, 60, -2000, -2000, -2000, -1000, -1000, -1000, -2100, -2320, -2280, -2001, 0, -1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1525196720;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cuboids = {0, 0, 0, 50, 50, 50, 25, 25, 25, 100, 100, 100};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 531250;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cuboids = {0, 0, 0, 10, 10, 10, 0, 0, 0, 10, 10, 10, 5, 5, 5, 15, 15, 15, 5, 5, 5, 15, 15, 15, 5, 5, 5, 15, 15, 15};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1875;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cuboids = {0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cuboids = {0, 0, 0, 22, 22, 22, 5, 5, 5, 17, 17, 17, 10, 10, 10, 12, 12, 12};
    CuboidJoin* pObj = new CuboidJoin();
    clock_t start = clock();
    long result = pObj->totalVolume(cuboids);
    clock_t end = clock();
    delete pObj;
    long expected = 10648;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7393427&rd=4775&pm=2329
********************************************************************************
#include <string> 
#include <iostream> 
#include <vector> 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
 
#ifdef WIN32 
typedef __int64 int64; 
typedef unsigned __int64 uint64; 
#else 
typedef long long int64; 
typedef unsigned long long uint64; 
#endif 
using namespace std; 
 
class CuboidJoin { 
  public: 
  long long totalVolume(vector <int> cuboids) ; 
}; 
 
int N; 
long long V; 
int X1[10], Y1[10], Z1[10], X2[10], Y2[10], Z2[10]; 
 
void bagamarfa(int x) 
{ 
  int x1, y1, z1, x2, y2, z2, i; 
  long long s = -1; 
  x1 = y1 = z1 = -5000; 
  x2 = y2 = z2 = 5000; 
  for (i = 0; i < N; i++) 
  if (x & (1 << i)) 
  { 
    if (x1 < X1[i]) x1 = X1[i]; 
    if (y1 < Y1[i]) y1 = Y1[i]; 
    if (z1 < Z1[i]) z1 = Z1[i]; 
    if (x2 > X2[i]) x2 = X2[i]; 
    if (y2 > Y2[i]) y2 = Y2[i]; 
    if (z2 > Z2[i]) z2 = Z2[i]; 
    if (x1 >= x2 || y1 >= y2 || z1 >= z2) return; 
    s = -s; 
  } 
  V += s * (long long) (x2-x1) * (long long) (y2-y1) * (long long) (z2-z1); 
} 
 
long long CuboidJoin::totalVolume(vector <int> cuboids)  
{ 
  int i; 
  N = cuboids.size() / 6; 
  for (i = 0; i < N; i++) 
  { 
    X1[i] = cuboids[6*i + 0]; 
    Y1[i] = cuboids[6*i + 1]; 
    Z1[i] = cuboids[6*i + 2]; 
    X2[i] = cuboids[6*i + 3]; 
    Y2[i] = cuboids[6*i + 4]; 
    Z2[i] = cuboids[6*i + 5]; 
  } 
  for (i = 1; i < (1 << N); i++) 
    bagamarfa(i); 
  return V; 
} 
 
#ifdef WIN32 
int main() 
{ 
    CuboidJoin test; 
  vector<int> x; 
  x.push_back(0); x.push_back(0); x.push_back(0); x.push_back(2); x.push_back(2); x.push_back(2); 
  x.push_back(1); x.push_back(1); x.push_back(1); x.push_back(3); x.push_back(3); x.push_back(3); 
  x.push_back(1); x.push_back(1); x.push_back(1); x.push_back(2); x.push_back(2); x.push_back(2); 
  x.push_back(1); x.push_back(1); x.push_back(0); x.push_back(2); x.push_back(2); x.push_back(10); 
  printf("%lld\n", test.totalVolume(x)); 
    return 0; 
} 
#endif 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/