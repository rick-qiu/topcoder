/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11118
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

class TimeTravellingCellar {
public:
    int determineProfit(vector<int> profit, vector<int> decay);
};

int TimeTravellingCellar::determineProfit(vector<int> profit, vector<int> decay) {
    int ret;
    return ret;
}


int test0() {
    vector<int> profit = {1, 2, 3};
    vector<int> decay = {3, 1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
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
    vector<int> profit = {3, 2};
    vector<int> decay = {1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> profit = {50, 5743, 2919, 483, 382, 5583};
    vector<int> decay = {2823, 3479, 9955, 312, 3838, 402};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5431;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> profit = {3, 3, 3};
    vector<int> decay = {1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> profit = {10000, 10000};
    vector<int> decay = {1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> profit = {7116, 8936};
    vector<int> decay = {9309, 536};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6580;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> profit = {8241, 4702};
    vector<int> decay = {5650, 1297};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6944;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> profit = {4654, 9352, 3621};
    vector<int> decay = {8188, 4149, 409};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8943;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> profit = {5788, 7193, 3373, 8546};
    vector<int> decay = {3535, 1508, 174, 8701};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8372;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> profit = {4458, 4809, 5567, 8710, 4539};
    vector<int> decay = {6103, 1750, 2095, 4619, 8865};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6960;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> profit = {1030, 279, 9400, 9270, 1333, 1401, 6918, 5986};
    vector<int> decay = {7104, 6890, 526, 1252, 3651, 6313, 8445, 7023};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8744;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> profit = {1210, 1979, 4882, 7736, 680, 9340, 2544, 6246, 4401, 7082, 8700, 6151, 5528};
    vector<int> decay = {3318, 1367, 2909, 3597, 7119, 8531, 4929, 8519, 1800, 7266, 5623, 8690, 7791};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7973;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> profit = {3226, 8692, 4103, 1670, 5714, 1665, 1, 6948, 9400, 7032, 2639, 8295, 9629, 3391, 5377, 8328, 5893, 7256, 1646, 7260, 165};
    vector<int> decay = {1594, 730, 5047, 2874, 9248, 6846, 139, 1222, 1887, 7930, 800, 578, 8384, 8821, 2644, 6400, 8821, 9591, 5799, 2204, 8581};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9490;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> profit = {4094, 1832, 1971, 5822, 160, 7864, 9429, 8157, 1475, 9593, 6102, 2204, 991, 5327, 7803, 7837, 5465, 5377, 9723, 9746, 6176, 301, 4482, 4996, 2944, 881, 169, 8886, 3032, 2372, 7466, 3477, 4204, 5788};
    vector<int> decay = {9298, 715, 3651, 8726, 5223, 5125, 4671, 7676, 3680, 2013, 3002, 1483, 9849, 4818, 6859, 5924, 916, 3034, 2576, 5397, 4381, 1871, 2629, 4549, 756, 5660, 6921, 4573, 5488, 7476, 6712, 4785, 4542, 6715};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9031;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> profit = {9863, 6116, 1839, 885, 3791, 5519, 2897, 6792, 3353, 9098, 1609, 211, 5021, 2524, 3244, 7596, 4272, 7624, 9466, 3253, 8525, 6573, 5264, 1797, 7497, 752, 5624, 4208, 1888, 165, 922, 1750, 6280, 9113, 8986, 6422, 983, 1883, 9565, 4335, 980, 7525, 897, 2352, 6401, 4140, 6299};
    vector<int> decay = {672, 8115, 2116, 276, 2991, 8688, 5540, 4787, 2536, 6291, 410, 6743, 8178, 6926, 4017, 6280, 9557, 9481, 5265, 5978, 463, 3499, 5542, 1149, 4478, 9419, 2045, 3181, 5819, 2536, 9479, 6490, 7002, 1594, 6766, 9993, 6633, 8657, 1131, 9168, 4947, 1541, 2263, 9476, 4818, 6279, 5755};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9587;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> profit = {4375, 2111, 7372, 6704, 8925, 870, 8598, 6425, 1700, 8016, 8469, 4880, 3834, 7356, 4359, 6675, 4357, 5952, 3440, 701, 2585, 8448, 1832, 8104, 9746, 9724, 366, 9222, 4541, 2996, 1328, 8915, 1458, 8699, 1971, 382, 5921, 568, 6806, 7620, 8583, 1626, 2499, 2416, 8981, 6857, 9090, 9690, 9161, 8882};
    vector<int> decay = {390, 8097, 7329, 8573, 2552, 7075, 8296, 2918, 2648, 9189, 2265, 3975, 8103, 3723, 9026, 73, 4104, 4946, 640, 7262, 2565, 5574, 8887, 1415, 7989, 7868, 8272, 7079, 7557, 3784, 5960, 4298, 8232, 9640, 2871, 783, 6714, 7518, 52, 9361, 6706, 2317, 9688, 1161, 2391, 5065, 7585, 6494, 10, 4577};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9736;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> profit = {3755, 8926, 150, 8994, 340, 8139, 6861, 4963, 5217, 769, 5098, 7528, 1418, 3329, 7167, 4288, 4112, 233, 8158, 4163, 9593, 4863, 2831, 5632, 6023, 5221, 696, 3608, 8067, 7057, 4536, 8173, 2334, 4685, 7166, 9026, 2823, 378, 3988, 4391, 1146, 5438, 8270, 2564, 8766, 5437, 3203, 9229, 5669, 1360};
    vector<int> decay = {9744, 1613, 2575, 2574, 3597, 8597, 4147, 644, 8556, 2213, 7701, 3091, 385, 6386, 7776, 3903, 5411, 6950, 4280, 5751, 7693, 1778, 1188, 5962, 693, 6305, 1398, 3895, 5534, 3418, 1607, 1629, 5031, 4181, 554, 4979, 9129, 4700, 5622, 4037, 3264, 3322, 3479, 3649, 6060, 1254, 3903, 1470, 4556, 8182};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9208;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> profit = {8209, 651};
    vector<int> decay = {4712, 5959};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2250;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> profit = {8904, 3093};
    vector<int> decay = {1031, 2383};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6521;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> profit = {3093, 3442, 9988};
    vector<int> decay = {6995, 4912, 895};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5076;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> profit = {3661, 5739, 901, 9388};
    vector<int> decay = {4594, 5477, 6498, 3981};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4794;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> profit = {606, 8585, 8848, 435, 6294};
    vector<int> decay = {4104, 9880, 7325, 2838, 2972};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6010;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> profit = {7118, 2825, 9967, 2029, 3720, 1495, 512, 3213};
    vector<int> decay = {9333, 3753, 915, 7822, 8057, 927, 3560, 8957};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9040;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> profit = {6667, 4505, 4433, 3164, 8485, 5038, 1748, 3685, 1825, 8042, 4140, 1704, 1718};
    vector<int> decay = {6977, 4675, 8835, 6153, 993, 864, 9872, 8839, 7727, 9437, 8172, 1479, 351};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8134;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> profit = {5993, 9535, 7630, 5905, 4843, 4296, 409, 9275, 7459, 5246, 664, 5558, 5282, 8840, 3599, 9421, 543, 5316, 6397, 1570, 503};
    vector<int> decay = {2549, 8914, 7718, 8773, 7753, 5444, 8209, 5924, 3274, 4911, 8268, 2808, 8892, 4172, 7650, 3187, 4581, 3276, 6997, 9826, 291};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9244;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> profit = {2555, 1459, 9131, 2505, 879, 6025, 4173, 3627, 7594, 4675, 6175, 6508, 8744, 1299, 612, 4187, 5859, 6535, 7460, 770, 4802, 6619, 9661, 5326, 4268, 9200, 6258, 3895, 6196, 2435, 4185, 5102, 3893, 3315};
    vector<int> decay = {7607, 4771, 5692, 8131, 8397, 3285, 9157, 923, 6144, 7900, 8574, 6755, 2086, 4432, 9641, 5897, 5201, 795, 2515, 1214, 6120, 3134, 413, 2377, 7028, 6608, 4811, 1212, 8062, 5055, 879, 2020, 9825, 6570};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8866;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> profit = {150, 4573, 6206, 9306, 5495, 8702, 3557, 4068, 1808, 1994, 8500, 7801, 7890, 52, 8595, 404, 1265, 1066, 9889, 1677, 9794, 6916, 4637, 956, 4479, 9050, 6010, 1709, 1069, 5834, 4630, 7570, 406, 7188, 3227, 2252, 5889, 6783, 2672, 4048, 8776, 7523, 1848, 6665, 7574, 442, 3420};
    vector<int> decay = {8839, 1507, 3308, 6867, 7652, 6575, 7855, 8607, 1053, 6904, 4616, 2762, 7972, 449, 3743, 5541, 7206, 930, 5119, 5810, 3170, 1901, 8481, 7218, 7028, 6003, 9065, 3692, 9928, 5859, 3463, 5118, 3717, 3122, 1985, 1369, 9696, 6191, 9975, 749, 3095, 4591, 9862, 7418, 5039, 9956, 9311};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9440;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> profit = {8597, 886, 4429, 4406, 4055, 6330, 9238, 1272, 9709, 5240, 6689, 3401, 1519, 2547, 3215, 6637, 6263, 6337, 4973, 7631, 6032, 1163, 7606, 3132, 609, 8548, 9345, 8027, 3586, 9301, 7337, 8534, 6538, 1765, 9291, 592, 4446, 8528, 8216, 4155, 3767, 4904, 3907, 1638, 3802, 7121, 8274, 64, 9809, 9598};
    vector<int> decay = {4047, 2193, 760, 8004, 1676, 1369, 6551, 1021, 5747, 6488, 6673, 3083, 5022, 3210, 1199, 4312, 153, 5645, 2840, 4720, 6151, 2958, 5975, 57, 947, 9776, 3529, 9220, 6192, 9690, 8817, 238, 1882, 5929, 4593, 3557, 3649, 1143, 929, 9395, 7630, 7601, 8829, 9003, 7162, 27, 3315, 7315, 2023, 2506};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9782;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> profit = {8386, 8173, 1815, 4361, 4581, 2762, 4136, 4462, 8333, 6679, 503, 3502, 3268, 2384, 9430, 7860, 2292, 9430, 9002, 9573, 5176, 2984, 7173, 4004, 1986, 687, 382, 1652, 4353, 2405, 509, 2738, 6929, 2324, 7098, 1510, 1437, 7586, 2323, 9769, 4264, 2825, 9622, 7532, 1560, 9051, 1743, 3851, 4832, 745};
    vector<int> decay = {9775, 7, 80, 6948, 362, 2065, 3986, 744, 3717, 8338, 3148, 577, 1075, 6428, 2900, 8173, 7937, 688, 2110, 259, 6809, 6373, 9435, 6430, 256, 994, 1833, 1999, 1197, 6664, 2743, 971, 3023, 2822, 4270, 3384, 1238, 8255, 479, 1306, 2944, 9978, 1883, 4019, 6406, 1134, 8543, 694, 1822, 652};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9762;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> profit = {1, 2};
    vector<int> decay = {1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
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
    vector<int> profit = {2, 2};
    vector<int> decay = {1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> profit = {6, 8};
    vector<int> decay = {3, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> profit = {6, 4};
    vector<int> decay = {3, 8};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
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
    vector<int> profit = {292, 116};
    vector<int> decay = {332, 160};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> profit = {148, 400};
    vector<int> decay = {382, 242};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> profit = {645, 564};
    vector<int> decay = {325, 431};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> profit = {966, 54};
    vector<int> decay = {879, 273};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 693;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> profit = {2651, 2153};
    vector<int> decay = {598, 3900};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1555;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> profit = {3949, 3618};
    vector<int> decay = {4948, 3272};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 677;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> profit = {1210, 1301};
    vector<int> decay = {1262, 1134};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> profit = {1235, 1235};
    vector<int> decay = {1340, 1041};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> profit = {5046, 5019};
    vector<int> decay = {5047, 5024};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> profit = {5007, 5028};
    vector<int> decay = {5017, 5042};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> profit = {9755, 9874};
    vector<int> decay = {9565, 9968};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 309;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> profit = {9090, 9260};
    vector<int> decay = {9850, 9028};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> profit = {1, 2};
    vector<int> decay = {1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> profit = {2, 1};
    vector<int> decay = {2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> profit = {9999, 10000};
    vector<int> decay = {9999, 10000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> profit = {10000, 10000};
    vector<int> decay = {10000, 9999};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> profit = {22, 1};
    vector<int> decay = {11, 6};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> profit = {44, 37};
    vector<int> decay = {33, 9};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> profit = {10, 1};
    vector<int> decay = {3, 6};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> profit = {8, 2};
    vector<int> decay = {9, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> profit = {1, 1, 2, 1, 2, 2, 1, 1, 1, 1};
    vector<int> decay = {2, 2, 1, 1, 2, 1, 2, 2, 2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> profit = {10, 2, 8, 8, 4, 7, 4, 7, 6, 10};
    vector<int> decay = {6, 3, 6, 4, 4, 10, 9, 3, 3, 7};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> profit = {326, 106, 31, 263, 379, 86, 239, 158, 150, 324};
    vector<int> decay = {128, 14, 286, 6, 234, 214, 73, 225, 364, 185};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 373;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> profit = {315, 294, 211, 362, 350, 339, 47, 248, 338, 165};
    vector<int> decay = {127, 264, 267, 154, 322, 45, 35, 160, 198, 180};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 327;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> profit = {309, 228, 587, 900, 306, 1027, 119, 672, 125, 518};
    vector<int> decay = {983, 810, 365, 877, 690, 618, 472, 674, 194, 328};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 833;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> profit = {213, 828, 829, 437, 971, 944, 594, 623, 553, 418};
    vector<int> decay = {353, 798, 582, 930, 668, 824, 927, 723, 465, 21};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> profit = {4909, 2533, 504, 1114, 1160, 3526, 1509, 4626, 3810, 3258};
    vector<int> decay = {488, 371, 2320, 2793, 3595, 1758, 332, 1439, 4833, 3010};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4577;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> profit = {181, 3398, 4219, 1087, 658, 4582, 1890, 4865, 4469, 4117};
    vector<int> decay = {1508, 4377, 1650, 4137, 2715, 2710, 2663, 4125, 2335, 1472};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3393;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> profit = {1036, 1015, 1352, 1153, 1161, 1054, 1231, 1385, 1120, 1166};
    vector<int> decay = {1189, 1495, 1497, 1068, 1230, 1049, 1258, 1494, 1427, 1447};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 336;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> profit = {1000, 1294, 1263, 1459, 1283, 1180, 1202, 1166, 1408, 1139};
    vector<int> decay = {1279, 1445, 1154, 1130, 1097, 1316, 1431, 1328, 1447, 1050};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 409;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> profit = {5004, 5033, 5032, 5012, 5017, 5011, 5043, 5035, 5041, 5046};
    vector<int> decay = {5006, 5015, 5016, 5030, 5027, 5005, 5042, 5023, 5010, 5038};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> profit = {5027, 5020, 5003, 5024, 5035, 5038, 5020, 5007, 5015, 5044};
    vector<int> decay = {5011, 5022, 5050, 5024, 5040, 5035, 5041, 5049, 5000, 5036};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> profit = {9628, 9364, 9290, 9949, 9649, 9036, 9508, 9815, 9420, 9738};
    vector<int> decay = {9766, 9261, 9058, 9310, 9583, 9675, 9469, 9768, 9762, 9642};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 891;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> profit = {9199, 9639, 9341, 9914, 9030, 9945, 9403, 9744, 9169, 9114};
    vector<int> decay = {9331, 9797, 9478, 9974, 9098, 9479, 9362, 9959, 9294, 9782};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 847;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> profit = {2, 1, 2, 2, 2, 2, 2, 1, 2, 2};
    vector<int> decay = {1, 1, 1, 2, 1, 2, 2, 2, 2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> profit = {10000, 9999, 10000, 9999, 9999, 10000, 10000, 9999, 9999, 9999};
    vector<int> decay = {9999, 10000, 9999, 9999, 10000, 10000, 10000, 9999, 10000, 9999};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> profit = {40, 14, 47, 26, 46, 13, 43, 23, 35, 6};
    vector<int> decay = {21, 18, 3, 34, 23, 11, 28, 8, 24, 22};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> profit = {38, 30, 4, 33, 24, 29, 27, 13, 45, 23};
    vector<int> decay = {39, 40, 38, 33, 14, 22, 41, 34, 39, 43};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> profit = {1, 3, 7, 2, 4, 10, 9, 8, 5, 6};
    vector<int> decay = {1, 5, 9, 3, 7, 6, 2, 10, 4, 8};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> profit = {3, 1, 5, 3, 3, 8, 5, 4, 10, 4};
    vector<int> decay = {8, 7, 6, 4, 9, 6, 4, 1, 3, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> profit = {2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2};
    vector<int> decay = {1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> profit = {5, 5, 2, 9, 2, 4, 8, 5, 5, 10, 5, 6, 10, 7, 9, 3, 6, 6, 2, 8, 9, 8, 4, 4, 3};
    vector<int> decay = {10, 6, 4, 2, 6, 4, 5, 9, 4, 4, 10, 6, 8, 2, 9, 5, 3, 2, 5, 9, 7, 6, 4, 2, 6};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> profit = {174, 38, 383, 176, 337, 276, 20, 98, 234, 237, 199, 56, 384, 92, 240, 89, 77, 211, 285, 282, 142, 34, 110, 46, 239};
    vector<int> decay = {106, 75, 159, 186, 303, 328, 219, 285, 299, 155, 160, 314, 48, 389, 150, 243, 240, 330, 272, 128, 169, 156, 200, 375, 40};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 344;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> profit = {277, 313, 69, 382, 154, 104, 284, 225, 258, 265, 127, 381, 83, 11, 79, 33, 166, 388, 76, 351, 334, 114, 386, 63, 181};
    vector<int> decay = {309, 227, 332, 108, 398, 367, 381, 110, 36, 162, 259, 331, 241, 83, 384, 105, 5, 364, 183, 11, 42, 11, 369, 225, 279};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 383;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> profit = {907, 866, 506, 916, 562, 117, 226, 214, 129, 571, 632, 156, 819, 994, 491, 266, 172, 290, 190, 54, 229, 313, 709, 64, 435};
    vector<int> decay = {681, 383, 725, 604, 985, 966, 480, 821, 387, 311, 352, 440, 527, 502, 506, 14, 103, 652, 823, 66, 112, 1025, 175, 338, 185};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> profit = {219, 557, 434, 864, 611, 805, 514, 930, 445, 87, 830, 380, 557, 620, 704, 805, 909, 59, 301, 380, 555, 305, 474, 122, 44};
    vector<int> decay = {476, 170, 38, 641, 498, 159, 796, 24, 583, 630, 571, 304, 113, 416, 739, 137, 216, 35, 630, 826, 729, 404, 704, 778, 696};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 895;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> profit = {3609, 520, 1397, 4425, 3151, 2188, 2621, 3694, 4816, 180, 1419, 1116, 2749, 4963, 2066, 2031, 1396, 1075, 2916, 4496, 1955, 1826, 2432, 638, 945};
    vector<int> decay = {3389, 865, 4735, 2901, 2246, 3499, 3734, 4891, 4796, 3158, 365, 4209, 3003, 3959, 4024, 3083, 378, 2364, 3057, 2565, 4330, 2312, 1185, 2629, 227};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4736;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> profit = {680, 1809, 4178, 3012, 2347, 123, 1401, 3113, 2082, 1526, 2583, 580, 259, 2473, 2600, 641, 2738, 1808, 868, 3922, 3056, 3852, 1524, 420, 1908};
    vector<int> decay = {3989, 1974, 4120, 173, 1828, 1572, 754, 3537, 749, 990, 883, 2997, 4516, 3896, 2303, 3266, 1478, 107, 749, 1175, 2608, 1290, 1138, 1640, 2059};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4071;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> profit = {1477, 1304, 1349, 1009, 1466, 1052, 1427, 1408, 1141, 1279, 1059, 1160, 1314, 1167, 1037, 1273, 1480, 1185, 1302, 1388, 1494, 1174, 1062, 1346, 1285};
    vector<int> decay = {1399, 1139, 1270, 1471, 1115, 1320, 1065, 1371, 1285, 1117, 1297, 1439, 1093, 1185, 1218, 1400, 1091, 1278, 1313, 1128, 1050, 1292, 1060, 1088, 1340};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> profit = {1194, 1081, 1261, 1002, 1173, 1045, 1401, 1313, 1061, 1117, 1174, 1127, 1182, 1045, 1158, 1299, 1088, 1097, 1139, 1019, 1315, 1285, 1358, 1339, 1097};
    vector<int> decay = {1486, 1390, 1135, 1292, 1224, 1222, 1486, 1051, 1483, 1489, 1224, 1027, 1135, 1283, 1336, 1253, 1458, 1463, 1181, 1249, 1121, 1481, 1083, 1218, 1366};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 374;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> profit = {5002, 5021, 5046, 5009, 5038, 5007, 5013, 5042, 5039, 5049, 5030, 5048, 5041, 5027, 5025, 5012, 5029, 5044, 5020, 5001, 5006, 5023, 5010, 5045, 5008};
    vector<int> decay = {5012, 5018, 5003, 5046, 5002, 5015, 5040, 5007, 5041, 5013, 5037, 5039, 5017, 5030, 5029, 5011, 5031, 5009, 5010, 5004, 5020, 5005, 5027, 5042, 5036};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> profit = {5022, 5007, 5012, 5036, 5014, 5028, 5049, 5025, 5041, 5002, 5013, 5027, 5042, 5004, 5007, 5020, 5040, 5038, 5004, 5025, 5016, 5049, 5004, 5047, 5002};
    vector<int> decay = {5031, 5035, 5017, 5000, 5000, 5002, 5047, 5007, 5039, 5033, 5046, 5016, 5031, 5046, 5031, 5007, 5008, 5008, 5050, 5038, 5015, 5044, 5001, 5027, 5048};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> profit = {9813, 9637, 9545, 9745, 9241, 9329, 9000, 9773, 9847, 9159, 9899, 9388, 9102, 9173, 9665, 9633, 9922, 9162, 9779, 9629, 9082, 9260, 9645, 9998, 9109};
    vector<int> decay = {9996, 9921, 9607, 9054, 9165, 9421, 9691, 9062, 9518, 9284, 9392, 9057, 9591, 9030, 9957, 9980, 9484, 9130, 9997, 9117, 9404, 9511, 9896, 9386, 9945};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 968;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> profit = {9508, 9126, 9590, 9506, 9587, 9938, 9428, 9194, 9993, 9945, 9967, 9684, 9007, 9486, 9321, 9399, 9004, 9378, 9991, 9386, 9335, 9323, 9870, 9817, 9320};
    vector<int> decay = {9987, 9574, 9183, 9236, 9312, 9129, 9744, 9438, 9071, 9251, 9377, 9010, 9031, 9923, 9003, 9976, 9891, 9039, 9983, 9729, 9360, 9735, 9085, 9739, 9078};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> profit = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1};
    vector<int> decay = {1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> profit = {10000, 10000, 10000, 9999, 9999, 10000, 10000, 9999, 9999, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 9999, 9999, 9999, 9999, 9999, 9999, 10000, 10000, 10000};
    vector<int> decay = {10000, 10000, 9999, 10000, 9999, 10000, 9999, 10000, 9999, 10000, 10000, 9999, 9999, 9999, 9999, 10000, 10000, 9999, 9999, 9999, 10000, 10000, 10000, 9999, 10000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> profit = {50, 9, 13, 39, 42, 46, 45, 24, 23, 44, 32, 27, 18, 19, 31, 36, 5, 20, 28, 48, 26, 12, 41, 16, 21};
    vector<int> decay = {47, 13, 15, 44, 36, 29, 17, 32, 12, 10, 24, 7, 14, 28, 11, 8, 33, 49, 39, 4, 35, 2, 19, 1, 6};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> profit = {29, 15, 37, 40, 26, 49, 13, 6, 27, 21, 22, 6, 31, 7, 13, 16, 39, 21, 28, 32, 20, 16, 46, 25, 22};
    vector<int> decay = {32, 26, 40, 32, 24, 45, 10, 39, 34, 1, 16, 32, 15, 22, 10, 36, 45, 15, 18, 1, 30, 33, 39, 50, 12};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> profit = {2, 9, 8, 9, 3, 1, 10, 10, 10, 3, 4, 6, 4, 4, 9, 4, 9, 2, 10, 2, 1, 5, 6, 8, 5};
    vector<int> decay = {8, 7, 7, 8, 6, 9, 9, 7, 8, 9, 9, 8, 8, 1, 9, 2, 4, 4, 5, 7, 5, 8, 7, 8, 10};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> profit = {1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2};
    vector<int> decay = {1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> profit = {4, 5, 2, 2, 4, 10, 6, 4, 10, 3, 5, 9, 6, 5, 7, 7, 2, 4, 9, 2, 4, 4, 6, 5, 7, 4, 4, 3, 10, 5, 7, 3, 8, 5, 10, 9, 4, 5, 2, 10, 4, 5, 8, 6, 6, 2, 9, 4, 5, 7};
    vector<int> decay = {4, 7, 9, 9, 10, 3, 2, 10, 3, 8, 4, 6, 7, 9, 9, 6, 7, 9, 7, 7, 6, 9, 8, 10, 2, 10, 8, 9, 4, 2, 3, 4, 6, 2, 9, 3, 10, 8, 10, 9, 5, 10, 2, 2, 8, 7, 6, 2, 5, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> profit = {116, 226, 74, 147, 115, 39, 381, 275, 399, 244, 338, 23, 377, 31, 248, 73, 382, 112, 202, 262, 67, 362, 125, 181, 348, 56, 373, 64, 78, 46, 206, 188, 276, 258, 388, 20, 257, 231, 354, 207, 180, 318, 144, 299, 51, 245, 357, 114, 7, 81};
    vector<int> decay = {90, 340, 224, 337, 312, 283, 210, 153, 285, 394, 29, 266, 51, 16, 82, 303, 242, 35, 374, 244, 10, 291, 383, 53, 386, 230, 93, 342, 139, 95, 218, 34, 41, 356, 141, 120, 166, 290, 200, 355, 314, 261, 5, 125, 338, 104, 362, 168, 273, 173};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 394;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> profit = {359, 183, 21, 344, 12, 110, 85, 146, 200, 98, 165, 30, 331, 317, 362, 50, 82, 251, 45, 232, 360, 301, 32, 84, 239, 327, 241, 202, 199, 41, 371, 158, 220, 387, 297, 27, 292, 378, 169, 92, 271, 129, 313, 201, 45, 274, 246, 318, 321, 86};
    vector<int> decay = {149, 80, 383, 177, 356, 21, 299, 196, 218, 98, 33, 384, 251, 248, 171, 343, 270, 62, 120, 234, 345, 387, 359, 57, 187, 399, 127, 229, 317, 47, 310, 261, 318, 92, 233, 273, 108, 132, 265, 122, 225, 293, 105, 271, 336, 71, 13, 205, 129, 129};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 374;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> profit = {289, 955, 660, 422, 1008, 888, 718, 33, 205, 740, 674, 326, 344, 729, 332, 132, 676, 714, 932, 929, 754, 609, 459, 564, 847, 70, 939, 626, 465, 598, 968, 690, 522, 543, 81, 499, 400, 790, 542, 111, 858, 779, 831, 105, 902, 809, 749, 266, 478, 274};
    vector<int> decay = {715, 12, 90, 721, 887, 652, 155, 454, 535, 836, 966, 47, 853, 435, 384, 558, 893, 862, 27, 995, 635, 742, 741, 730, 613, 132, 455, 278, 334, 923, 542, 18, 871, 568, 675, 727, 190, 820, 150, 661, 571, 86, 645, 394, 457, 1019, 942, 265, 796, 905};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 996;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> profit = {229, 400, 563, 906, 45, 91, 974, 436, 359, 277, 329, 891, 231, 115, 429, 896, 833, 555, 632, 973, 185, 118, 995, 766, 448, 367, 700, 306, 623, 465, 126, 788, 801, 679, 664, 783, 761, 553, 188, 89, 821, 453, 917, 988, 559, 261, 800, 361, 752, 347};
    vector<int> decay = {249, 873, 455, 214, 609, 840, 517, 278, 115, 109, 734, 231, 888, 450, 901, 467, 202, 577, 1010, 381, 656, 746, 824, 488, 704, 352, 739, 419, 703, 406, 756, 943, 249, 126, 72, 848, 956, 579, 95, 40, 679, 765, 208, 482, 185, 78, 939, 377, 645, 864};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 955;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> profit = {257, 2906, 1332, 3862, 4010, 2340, 2557, 348, 4993, 3059, 1518, 3410, 3304, 1822, 4356, 3764, 2801, 3198, 3001, 3527, 3479, 1504, 3713, 2688, 1094, 2684, 1559, 4733, 4259, 155, 548, 1741, 286, 4005, 602, 4196, 1344, 1768, 3561, 3342, 3186, 4195, 1645, 2232, 3550, 2633, 4933, 3972, 634, 784};
    vector<int> decay = {2451, 4263, 1721, 2363, 357, 4305, 1147, 2314, 887, 3427, 4987, 2528, 937, 3991, 3030, 2357, 334, 3314, 4026, 1119, 1655, 2211, 313, 3201, 1668, 3764, 833, 1600, 2735, 3592, 4509, 2410, 179, 1229, 1998, 436, 533, 3045, 4875, 1321, 3696, 4862, 1073, 4534, 3852, 4004, 4115, 1411, 2317, 3140};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4814;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> profit = {2430, 1196, 2576, 2644, 4297, 4144, 1407, 2355, 2968, 4042, 3171, 2477, 3677, 3250, 3606, 674, 910, 1364, 3619, 785, 4810, 4539, 646, 882, 1396, 1722, 4786, 511, 3033, 4327, 3551, 463, 523, 1126, 331, 2044, 2494, 1638, 1623, 462, 2904, 4695, 163, 1580, 2944, 3669, 4379, 3755, 2257, 2997};
    vector<int> decay = {1764, 2066, 4761, 2310, 2849, 1156, 1256, 4859, 1567, 4190, 4186, 118, 1877, 1933, 3369, 4333, 1201, 3088, 970, 2725, 3450, 1098, 2419, 837, 4804, 2587, 4406, 4182, 3566, 3888, 4404, 329, 953, 4164, 4764, 3702, 2544, 1020, 885, 4012, 2434, 4971, 1354, 1535, 4128, 4623, 867, 328, 4935, 3962};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4692;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> profit = {1346, 1083, 1368, 1122, 1160, 1309, 1103, 1087, 1325, 1209, 1152, 1141, 1260, 1411, 1303, 1298, 1350, 1417, 1479, 1125, 1078, 1429, 1159, 1219, 1391, 1013, 1133, 1430, 1170, 1130, 1263, 1461, 1028, 1385, 1120, 1234, 1454, 1408, 1444, 1105, 1295, 1203, 1016, 1344, 1000, 1112, 1007, 1226, 1237, 1085};
    vector<int> decay = {1401, 1142, 1051, 1292, 1155, 1184, 1468, 1071, 1060, 1128, 1334, 1020, 1403, 1219, 1141, 1232, 1199, 1341, 1140, 1447, 1181, 1091, 1209, 1272, 1339, 1067, 1279, 1064, 1304, 1364, 1465, 1446, 1415, 1002, 1347, 1345, 1471, 1164, 1406, 1245, 1426, 1494, 1210, 1313, 1225, 1409, 1154, 1111, 1293, 1302};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 477;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> profit = {1311, 1227, 1369, 1089, 1037, 1419, 1199, 1249, 1110, 1361, 1251, 1457, 1205, 1468, 1367, 1357, 1058, 1111, 1029, 1051, 1321, 1088, 1277, 1230, 1489, 1388, 1027, 1335, 1427, 1416, 1383, 1237, 1143, 1251, 1326, 1180, 1169, 1272, 1429, 1025, 1132, 1427, 1228, 1083, 1140, 1095, 1441, 1199, 1206, 1216};
    vector<int> decay = {1250, 1274, 1304, 1026, 1250, 1293, 1415, 1277, 1374, 1341, 1192, 1257, 1078, 1081, 1007, 1150, 1262, 1424, 1422, 1437, 1449, 1300, 1363, 1177, 1130, 1003, 1018, 1317, 1449, 1224, 1032, 1198, 1244, 1336, 1225, 1494, 1375, 1386, 1016, 1249, 1473, 1456, 1005, 1050, 1036, 1012, 1448, 1044, 1182, 1115};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 486;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> profit = {5032, 5003, 5045, 5027, 5042, 5007, 5022, 5015, 5030, 5020, 5011, 5018, 5005, 5040, 5025, 5014, 5008, 5013, 5037, 5000, 5047, 5031, 5002, 5034, 5016, 5050, 5048, 5039, 5024, 5004, 5033, 5044, 5026, 5046, 5019, 5010, 5012, 5035, 5041, 5038, 5006, 5036, 5023, 5021, 5001, 5017, 5028, 5049, 5029, 5009};
    vector<int> decay = {5005, 5009, 5044, 5031, 5045, 5026, 5002, 5000, 5036, 5022, 5012, 5043, 5014, 5018, 5004, 5027, 5037, 5020, 5048, 5041, 5046, 5049, 5024, 5029, 5040, 5006, 5050, 5042, 5016, 5034, 5039, 5015, 5001, 5047, 5010, 5028, 5032, 5035, 5030, 5007, 5011, 5023, 5019, 5017, 5025, 5013, 5038, 5033, 5003, 5021};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> profit = {5022, 5048, 5004, 5011, 5015, 5019, 5012, 5035, 5031, 5023, 5027, 5014, 5015, 5032, 5017, 5002, 5034, 5048, 5033, 5039, 5005, 5031, 5018, 5037, 5026, 5022, 5006, 5009, 5033, 5034, 5005, 5004, 5031, 5034, 5015, 5047, 5028, 5001, 5005, 5008, 5025, 5006, 5022, 5014, 5038, 5039, 5016, 5047, 5011, 5024};
    vector<int> decay = {5035, 5041, 5029, 5027, 5027, 5004, 5023, 5007, 5039, 5005, 5042, 5018, 5034, 5022, 5001, 5024, 5043, 5003, 5050, 5022, 5011, 5024, 5029, 5008, 5012, 5041, 5021, 5003, 5037, 5006, 5027, 5047, 5047, 5030, 5048, 5049, 5009, 5021, 5005, 5048, 5000, 5021, 5040, 5009, 5018, 5015, 5033, 5010, 5019, 5032};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> profit = {9766, 9546, 9977, 9603, 9919, 9190, 9039, 9503, 9672, 9635, 9915, 9588, 9292, 9236, 9139, 9275, 9264, 9567, 9820, 9925, 9271, 9176, 9291, 9385, 9100, 9065, 9411, 9921, 9935, 9466, 9469, 9701, 9365, 9446, 9656, 9284, 9989, 9048, 9013, 9683, 9055, 9954, 9327, 9643, 9093, 9907, 9012, 9775, 9184, 9303};
    vector<int> decay = {9475, 9020, 9403, 9540, 9783, 9324, 9828, 9602, 9793, 9529, 9967, 9592, 9538, 9251, 9581, 9586, 9391, 9946, 9621, 9798, 9900, 9948, 9441, 9993, 9902, 9700, 9357, 9029, 9236, 9344, 9332, 9712, 9716, 9087, 9604, 9500, 9763, 9432, 9102, 9557, 9314, 9069, 9501, 9204, 9672, 9434, 9790, 9415, 9380, 9565};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 969;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> profit = {9281, 9711, 9358, 9626, 9965, 9058, 9336, 9995, 9295, 9680, 9679, 9359, 9397, 9767, 9963, 9249, 9530, 9748, 9703, 9439, 9414, 9772, 9940, 9618, 9796, 9374, 9760, 9212, 9755, 9523, 9777, 9388, 9586, 9136, 9014, 9551, 9546, 9350, 9898, 9841, 9031, 9930, 9552, 9780, 9697, 9868, 9381, 9579, 9616, 9084};
    vector<int> decay = {9019, 9382, 9208, 9311, 9000, 9004, 9038, 9112, 9568, 9145, 9635, 9346, 9533, 9221, 9834, 9547, 9124, 9380, 9898, 9375, 9574, 9281, 9305, 9478, 9413, 9354, 9346, 9146, 9933, 9314, 9230, 9304, 9696, 9790, 9968, 9048, 9794, 9006, 9160, 9363, 9151, 9795, 9061, 9036, 9368, 9895, 9583, 9845, 9627, 9833};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 995;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> profit = {1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 2, 2};
    vector<int> decay = {2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
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
    vector<int> profit = {9999, 9999, 10000, 9999, 10000, 10000, 10000, 10000, 10000, 10000, 9999, 9999, 10000, 9999, 9999, 9999, 10000, 10000, 10000, 10000, 9999, 10000, 10000, 10000, 10000, 10000, 10000, 9999, 10000, 10000, 9999, 10000, 9999, 10000, 9999, 10000, 9999, 10000, 9999, 10000, 10000, 9999, 10000, 9999, 10000, 10000, 9999, 9999, 9999, 10000};
    vector<int> decay = {10000, 9999, 9999, 9999, 9999, 10000, 10000, 10000, 10000, 9999, 10000, 10000, 10000, 10000, 9999, 10000, 9999, 9999, 10000, 9999, 10000, 9999, 9999, 9999, 9999, 10000, 10000, 9999, 10000, 10000, 10000, 9999, 9999, 10000, 9999, 9999, 10000, 10000, 10000, 9999, 10000, 9999, 9999, 10000, 10000, 9999, 9999, 10000, 10000, 10000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> profit = {18, 41, 8, 15, 40, 10, 29, 26, 2, 1, 45, 31, 5, 34, 38, 16, 44, 13, 12, 37, 25, 30, 27, 21, 39, 50, 14, 11, 23, 6, 24, 7, 48, 3, 22, 32, 43, 9, 4, 19, 33, 35, 17, 47, 49, 28, 46, 20, 42, 36};
    vector<int> decay = {41, 29, 50, 24, 19, 3, 34, 30, 20, 5, 23, 16, 10, 1, 9, 8, 21, 36, 14, 13, 26, 12, 15, 49, 33, 17, 38, 48, 42, 6, 47, 18, 11, 46, 32, 45, 27, 7, 39, 40, 2, 35, 25, 28, 4, 44, 31, 37, 43, 22};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> profit = {15, 16, 6, 15, 16, 21, 47, 14, 30, 7, 42, 25, 15, 27, 34, 14, 27, 43, 8, 34, 36, 34, 32, 29, 33, 3, 27, 43, 1, 38, 14, 17, 5, 21, 33, 22, 41, 29, 38, 21, 36, 29, 45, 2, 8, 30, 18, 34, 25, 25};
    vector<int> decay = {19, 12, 9, 1, 40, 41, 5, 16, 35, 7, 5, 48, 23, 9, 20, 5, 33, 11, 36, 20, 33, 23, 48, 29, 24, 7, 9, 41, 42, 35, 16, 11, 46, 26, 11, 37, 16, 17, 4, 50, 23, 9, 49, 47, 19, 18, 3, 1, 30, 38};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> profit = {10, 2, 10, 10, 3, 4, 6, 3, 4, 8, 7, 1, 10, 2, 6, 2, 10, 3, 8, 3, 2, 10, 1, 2, 6, 10, 2, 8, 2, 1, 8, 2, 5, 7, 3, 7, 2, 10, 1, 8, 7, 7, 8, 8, 10, 4, 9, 9, 6, 6};
    vector<int> decay = {1, 10, 5, 4, 3, 2, 5, 4, 2, 6, 5, 9, 9, 1, 5, 1, 9, 9, 1, 9, 6, 9, 5, 3, 9, 6, 8, 7, 4, 4, 3, 6, 5, 9, 9, 7, 1, 3, 1, 2, 1, 7, 2, 9, 9, 6, 2, 7, 4, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> profit = {2, 2};
    vector<int> decay = {1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> profit = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> profit = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> profit = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> profit = {100, 100};
    vector<int> decay = {1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> profit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> profit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> profit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> profit = {1000, 1000};
    vector<int> decay = {1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> profit = {9999, 9999};
    vector<int> decay = {1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> profit = {10000, 10000};
    vector<int> decay = {1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> profit = {100, 100};
    vector<int> decay = {2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> profit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> profit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> profit = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> profit = {1000, 1000};
    vector<int> decay = {2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> profit = {9999, 9999};
    vector<int> decay = {2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9997;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9997;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9997;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9997;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> profit = {10000, 10000};
    vector<int> decay = {2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9998;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> profit = {1000, 1000};
    vector<int> decay = {100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> profit = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> profit = {9999, 9999};
    vector<int> decay = {100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9899;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9899;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9899;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9899;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> profit = {10000, 10000};
    vector<int> decay = {100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9900;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> profit = {9999, 9999};
    vector<int> decay = {1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8999;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8999;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8999;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> profit = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> decay = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8999;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> profit = {10000, 10000};
    vector<int> decay = {1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> profit = {10000, 10000};
    vector<int> decay = {9999, 9999};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> profit = {5417, 4299};
    vector<int> decay = {4600, 2105};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3312;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> profit = {8992, 6589, 8643};
    vector<int> decay = {7469, 7659, 7965};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1333;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> profit = {5624, 4717, 3393, 3991, 3291, 3700, 3254, 3264, 4859, 2321, 5903, 4358, 6258, 4522, 5445, 5566, 2349, 3552, 4032, 2646, 3320, 4829, 2894, 2283, 4394, 5007, 4885, 2487, 5470, 4642, 2825, 3665, 3088, 4097, 5535, 3101, 4519, 2517, 4244, 6100, 5711, 2718, 3030, 5697, 5119, 2203, 3834, 4191, 2477, 5745};
    vector<int> decay = {3875, 3899, 6412, 5485, 4063, 6304, 4994, 4516, 4323, 5150, 5259, 4945, 5699, 5422, 5281, 3973, 3805, 5678, 5722, 5767, 5245, 4472, 5298, 4075, 3825, 4243, 4319, 4510, 6484, 5815, 3887, 4512, 5923, 4452, 6207, 4140, 4129, 5354, 4865, 4662, 3877, 4277, 6596, 5785, 5908, 5250, 3912, 3866, 5081, 5843};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2453;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> profit = {9490, 9652, 9704, 9221, 9232, 9442, 9095, 9712, 9161, 9478, 9677, 8633, 9185, 9311, 9370, 9185, 8982, 8853, 8886, 9289, 9549, 8737, 8933, 9042, 8845, 8841, 8718, 9367, 8812, 9430, 9188, 9674, 9355, 9289, 9168, 8984, 9004, 9634, 9093, 9537, 9385, 9167, 9541, 8967, 8876, 9309, 9524, 9229, 9657, 8683};
    vector<int> decay = {7683, 6005, 7106, 5305, 7713, 5891, 5452, 6918, 6240, 6338, 7044, 6050, 5151, 6518, 5586, 6932, 5935, 6006, 7359, 6947, 5778, 6017, 6972, 5564, 6373, 6418, 7333, 5403, 6819, 5398, 6879, 6647, 5130, 6131, 5679, 7715, 5749, 6003, 5634, 5717, 7213, 7550, 5494, 6091, 7795, 5952, 6750, 5876, 5686, 6255};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4582;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> profit = {9779, 9792, 9820, 9657, 9659, 9831, 9819, 9719, 9607, 9908, 9880, 9898, 9770, 9784, 9700, 9902, 9888, 9864, 9641, 9901, 9895, 9814, 9897, 9676, 9934, 9828, 9893, 9739, 9742, 9681, 9688, 9927, 9750, 9913, 9861, 9814, 9681, 9618, 9599, 9905, 9931, 9884, 9868, 9638, 9605, 9845, 9606, 9770, 9774, 9652};
    vector<int> decay = {2113, 2667, 2028, 2568, 2235, 1943, 2639, 2613, 2099, 2240, 2494, 2452, 2479, 1838, 2604, 2383, 2469, 2670, 1967, 2332, 2698, 1964, 2233, 1785, 1766, 2339, 2239, 2386, 1878, 1963, 2228, 2234, 1900, 1854, 2399, 2378, 2367, 2308, 2588, 2063, 2146, 2352, 2113, 2222, 2434, 2314, 1875, 2173, 2255, 2085};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8165;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> profit = {9366, 9676, 4596, 4858, 8637, 6459, 6624, 5329, 5570, 7908, 4414, 5646, 8407, 9278, 5265, 9554, 8361, 6863, 9648, 6279, 5218, 5492, 6229, 7582, 8581, 6065, 8388, 5759, 5971, 8145, 8672, 7704, 4859, 5635, 8157, 9092, 4461, 7149, 6788, 5627, 7424, 8898, 6868, 6097, 8442, 7728, 8018, 7069, 6959};
    vector<int> decay = {6010, 6214, 6334, 6644, 6184, 5605, 6555, 5645, 4925, 5887, 4798, 6430, 5747, 5347, 6154, 5325, 5749, 6575, 6669, 6170, 6394, 5982, 5346, 5297, 5361, 6673, 4908, 5287, 5900, 5090, 6448, 5010, 6362, 6038, 6713, 5802, 6701, 6524, 6661, 6685, 5511, 6517, 6371, 6317, 5120, 5781, 6700, 5928, 5613};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4878;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> profit = {9215, 9301};
    vector<int> decay = {4878, 5385};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4423;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> profit = {8095, 8348, 8604};
    vector<int> decay = {1924, 2090, 1595};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6753;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> profit = {7807, 3788, 3710, 4828, 8267, 4217, 8933, 8596, 8876, 8953, 8041, 8213, 6448, 4829, 4481, 6162, 5810, 3805, 9474, 4454, 5692, 9345, 6151, 5600, 8100, 5029, 6919, 7393, 6648, 5139, 8193, 4898, 5404, 7231, 6203, 4115, 7925, 4430, 8038, 6095, 8710, 6523, 3601, 4451, 6679, 9443, 7091, 8966, 3691, 5858};
    vector<int> decay = {3671, 4241, 2945, 4891, 5529, 3028, 2470, 6195, 5489, 6533, 2694, 6793, 4562, 3706, 3505, 5044, 6954, 3984, 5574, 2309, 4961, 5745, 2264, 6293, 6451, 2932, 5187, 3261, 5602, 2704, 4212, 5917, 3588, 3800, 3682, 5761, 3471, 2795, 4830, 6801, 2202, 5365, 6468, 3408, 5714, 6616, 5095, 4344, 3475, 3543};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7272;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> profit = {7796, 6044, 5835, 7536, 6979, 6846, 6174, 7897, 7166, 6602, 6258, 6781, 7151, 6525, 7984, 6807, 7777, 6047, 6895, 7215, 7871, 7283, 6408, 6076, 6366, 7795, 6650, 7574, 7772, 7277, 6608, 6453, 7632, 5691, 7237, 7859, 5785, 7723, 7705, 7262, 6273, 7211, 5992, 6673, 8047, 5924, 7791, 7773, 7582, 6634};
    vector<int> decay = {5479, 4784, 2527, 2696, 3634, 1711, 2943, 7874, 4161, 7032, 3894, 3466, 1748, 3768, 6815, 7017, 3696, 6167, 2757, 6277, 5824, 1782, 3588, 4497, 6565, 5362, 7513, 1899, 3705, 6959, 4771, 1250, 1616, 6102, 7295, 4053, 4424, 2303, 1801, 7389, 1400, 2306, 2920, 6497, 4877, 6346, 3387, 5185, 4579, 4948};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6797;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> profit = {8135, 8220, 8305, 8287, 8230, 8167, 8055, 8378, 8092, 8364, 8301, 8358, 8374, 8145, 8250, 8120, 8419, 8343, 8060, 8022, 8033, 8102, 8174, 8248, 8256, 8020, 8163, 8039, 8155, 8303, 8294, 8036, 8091, 8345, 8305, 8303, 8259, 8106, 8427, 8333, 8216, 8297, 8024, 8158, 8188, 8256, 8025, 8175, 8168, 8067};
    vector<int> decay = {2830, 1742, 7840, 7880, 6382, 2771, 5074, 5029, 7884, 4127, 9882, 5830, 5241, 7931, 1034, 4888, 1252, 9379, 2916, 8740, 2334, 4618, 9211, 1286, 6323, 7007, 3541, 1608, 1796, 1923, 1849, 3873, 2940, 8936, 1795, 8570, 1776, 6144, 3668, 8907, 9547, 3592, 4807, 4829, 1564, 5116, 8965, 2092, 4536, 1922};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7393;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> profit = {4986, 5402, 4434, 4128, 3539, 5410, 4401, 5709, 2937, 4672, 3233, 4387, 3022, 4482, 5758, 3090, 2972, 3609, 4183, 5063, 3652, 5909, 3466, 4176, 2633, 6058, 5899, 4528, 3526, 6179, 3251, 5950, 4802, 5122, 3298, 5778, 3752, 5136, 4707, 4127, 3028, 5378, 5373, 3488, 3658, 4930, 3437, 3489, 5976};
    vector<int> decay = {6801, 7629, 7578, 6068, 8108, 8085, 7232, 8110, 5364, 7473, 6747, 6808, 7349, 8119, 8496, 5376, 6070, 7856, 8101, 9216, 6661, 5804, 6180, 8355, 8991, 7399, 8700, 8013, 8778, 9406, 7609, 5956, 7412, 7884, 9175, 8217, 6346, 6784, 6704, 6540, 6954, 8282, 6046, 7000, 6778, 9372, 7207, 5546, 5472};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 815;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> profit = {9481, 9621};
    vector<int> decay = {6111, 6067};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3510;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> profit = {6735, 7036, 2089};
    vector<int> decay = {6736, 7263, 7152};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> profit = {9037, 8499, 7106, 7949, 7818, 7113, 7380, 8497, 8376, 8977, 8113, 8220, 7695, 8096, 7621, 8591, 8357, 8173, 9020, 8887, 7643, 7435, 8977, 7948, 7117, 7674, 7092, 7941, 8924, 7804, 8063, 8769, 7239, 8146, 7526, 8035, 8364, 8011, 7468, 7676, 7796, 8559, 8873, 8597, 7591, 7430, 7996, 8925, 8580, 7952};
    vector<int> decay = {5689, 5206, 5066, 4443, 5547, 5501, 6229, 6417, 5786, 4252, 4575, 5323, 5388, 4237, 4403, 5464, 5823, 5762, 6119, 5259, 6061, 5975, 4350, 6077, 4293, 6232, 5603, 5398, 4868, 6012, 5965, 6325, 4776, 4590, 4326, 6091, 5855, 6324, 6070, 5204, 6344, 6410, 6295, 5291, 6415, 4257, 4313, 5796, 5783, 6196};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4800;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> profit = {7073, 7573, 7433, 7288, 7490, 7313, 7410, 7173, 7338, 7113, 7569, 7471, 7098, 7233, 7053, 7267, 7311, 7581, 7467, 7271, 7355, 7461, 7147, 7069, 7327, 7471, 7557, 7222, 7077, 7324, 7314, 7115, 7300, 7380, 7596, 7423, 7096, 7409, 7560, 7398, 7154, 7532, 7502, 7445, 7397, 7519, 7344, 7112, 7171, 7214};
    vector<int> decay = {4951, 3908, 4420, 4961, 4929, 3653, 3482, 3337, 3906, 4943, 3592, 4182, 4494, 3425, 4955, 4359, 3713, 3595, 4468, 4499, 4252, 4683, 4201, 3662, 4993, 4431, 5167, 3520, 3746, 4642, 4620, 3296, 5326, 3640, 4968, 4854, 4004, 5161, 4902, 4685, 4767, 5269, 3467, 3924, 3294, 5197, 4994, 3782, 3391, 4061};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4302;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> profit = {5380, 6901, 4939, 8901, 5205, 6935, 5742, 6162, 6123, 4348, 7991, 4178, 9008, 6026, 7199, 6482, 6240, 6449, 6242, 5802, 4932, 6529, 5474, 8913, 5585, 5723, 5073, 7797, 4334, 8285, 9542, 5658, 4159, 4918, 4995, 5307, 6333, 6680, 5950, 8400, 5508, 8421, 7058, 8997, 4883, 4693, 5915, 5604, 7086, 8100};
    vector<int> decay = {6250, 7176, 6642, 7013, 6666, 7028, 6622, 6495, 6579, 6309, 7210, 6006, 7195, 6282, 6144, 7271, 6630, 7139, 6365, 6402, 6011, 6157, 7410, 6659, 6563, 6453, 7305, 7027, 6264, 6640, 7449, 7086, 6288, 7096, 7105, 7526, 6596, 6199, 6494, 6180, 7080, 6709, 6226, 6748, 7030, 6942, 7024, 6665, 6553, 7428};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3536;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> profit = {7413, 7032, 5469, 5359, 6174, 6143, 7564, 6776, 6931, 7676, 5253, 7049, 5544, 6165, 7286, 6831, 5900, 7386, 6565, 7306, 5843, 5310, 7676, 7782, 5314, 6805, 6710, 7526, 7434, 6012, 6324, 7050, 5247, 6700, 7316, 7033, 7750, 7787, 6012, 7588, 7666, 6172, 6841, 6117, 7244, 6330, 5856, 6052, 6623};
    vector<int> decay = {6387, 3318, 6694, 5424, 4739, 3393, 2750, 7082, 4397, 4273, 5521, 2690, 6860, 4410, 5372, 5991, 7207, 3656, 2422, 5657, 2515, 1879, 7352, 1693, 3097, 7482, 2800, 4749, 5877, 6171, 7105, 4633, 1858, 6168, 5867, 2407, 1929, 4427, 5299, 2136, 7014, 6630, 6582, 3738, 3408, 4323, 5539, 6425, 6293};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6094;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> profit = {7571, 7605};
    vector<int> decay = {2455, 1832};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5739;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> profit = {8355, 4532, 5421};
    vector<int> decay = {954, 973, 875};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7480;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> profit = {5219, 5592, 4251, 4635, 5353, 4469, 7301, 5052, 7032, 5130, 6275, 6994, 4779, 6044, 7176, 5227, 5154, 7042, 5750, 5470, 4856, 5754, 4213, 4973, 5863, 4541, 6308, 4406, 6611, 4295, 4288, 4426, 5855, 6296, 6818, 7175, 6732, 5133, 6613, 4778, 4648, 5484, 6157, 7183, 5913, 4347, 5006, 7034, 7356, 5142};
    vector<int> decay = {4477, 5172, 4208, 7183, 7404, 1876, 6629, 2752, 2121, 2021, 3762, 6907, 6408, 4504, 4163, 2265, 6954, 7152, 2675, 2577, 6528, 7360, 7457, 6445, 6756, 3862, 6113, 5019, 6651, 4969, 2664, 3227, 7103, 3834, 2508, 6605, 3840, 7267, 7488, 2924, 6250, 3348, 6793, 4756, 4814, 3054, 3984, 3866, 7168, 4789};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5480;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> profit = {7217, 7285, 7269, 7474, 7469, 7435, 7354, 7231, 7441, 7454, 7225, 7355, 7248, 7375, 7408, 7398, 7380, 7407, 7445, 7430, 7291, 7233, 7407, 7267, 7307, 7296, 7318, 7305, 7275, 7406, 7446, 7282, 7211, 7236, 7277, 7470, 7423, 7383, 7221, 7384, 7320, 7468, 7221, 7358, 7363, 7419, 7276, 7263, 7309, 7473};
    vector<int> decay = {3220, 2984, 2794, 2253, 2983, 4998, 4519, 4175, 2919, 2490, 5183, 3554, 5173, 4113, 4446, 2480, 5251, 4253, 5103, 2533, 3792, 2271, 3571, 3003, 2766, 3459, 4411, 5154, 4986, 3250, 4702, 2628, 3904, 5166, 2551, 4558, 4826, 4980, 3395, 2168, 2133, 3241, 3632, 4976, 5024, 2500, 2118, 4937, 4663, 4891};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5356;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> profit = {6104, 7226, 7918, 6637, 8264, 6572, 6391, 6428, 7891, 7479, 7449, 8198, 6127, 7959, 6931, 6475, 6515, 8002, 8276, 8185, 6894, 6466, 8011, 6292, 6139, 6565, 6313, 7496, 7346, 7590, 8296, 7487, 6003, 7889, 7673, 7817, 8010, 8101, 7794, 7088, 6768, 6918, 6474, 6932, 6065, 7442, 6956, 6617, 6631, 6907};
    vector<int> decay = {4101, 2329, 4201, 3573, 3882, 2702, 3923, 2758, 2487, 1927, 2600, 2506, 1727, 3562, 4208, 3954, 2018, 3025, 2370, 1656, 3195, 2711, 2161, 3552, 2153, 3613, 2311, 4240, 3930, 3405, 3137, 3785, 3390, 2404, 3112, 2338, 3450, 2102, 3440, 3593, 1685, 1794, 1853, 1756, 3013, 3717, 3366, 3375, 2497, 3393};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6640;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> profit = {4508, 5831, 3906, 1797, 6842, 2254, 7010, 7871, 6551, 5678, 5695, 3748, 3216, 7590, 3140, 2430, 2845, 4143, 6191, 4533, 7121, 2206, 6418, 2486, 1331, 3673, 4163, 1571, 2207, 1283, 6838, 3483, 5863, 7512, 2048, 2491, 6535, 7806, 2128, 4852, 3270, 4591, 7348, 3254, 3947, 2254, 4433, 3561, 5145};
    vector<int> decay = {5494, 3438, 5553, 6508, 5026, 5207, 3423, 6060, 4924, 3154, 7223, 7349, 3678, 4117, 4216, 4601, 6457, 3339, 4160, 4788, 5579, 3470, 5652, 5111, 4385, 3609, 5592, 4953, 7080, 4647, 3705, 5030, 5007, 6180, 4122, 6956, 3843, 4339, 5472, 5689, 4288, 5279, 5494, 4888, 6190, 6633, 6283, 5232, 6894};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4717;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> profit = {5026, 4353};
    vector<int> decay = {2383, 6865};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1970;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> profit = {2123, 4228, 5472};
    vector<int> decay = {5566, 5435, 6379};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> profit = {993, 2076, 3361, 2249, 4256, 809, 3484, 1267, 2498, 3913, 1890, 2908, 2449, 1758, 3160, 971, 4269, 2452, 2861, 2722, 1008, 1414, 4224, 2367, 1209, 3636, 1461, 4330, 3139, 1664, 2647, 3330, 2938, 4119, 3689, 2862, 4126, 2841, 3328, 2292, 1334, 3328, 3310, 1893, 3196, 2139, 2062, 3134, 2701, 4121};
    vector<int> decay = {1012, 5188, 2617, 1182, 4179, 4568, 4302, 2550, 6245, 1617, 4104, 4352, 689, 3786, 2403, 598, 5553, 4085, 4254, 4407, 2299, 6686, 3591, 2062, 3148, 3515, 515, 2580, 2785, 4238, 6456, 1645, 478, 6921, 675, 2505, 4558, 4842, 4920, 1855, 6323, 6872, 6071, 4861, 3727, 1543, 5323, 2348, 3476, 629};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3852;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> profit = {4444, 4111, 6513, 5872, 5955, 5326, 4412, 4270, 5410, 5753, 4142, 4795, 5792, 4826, 6464, 5908, 5475, 5736, 5745, 4705, 4964, 5118, 6685, 4261, 6654, 5643, 4397, 6573, 4882, 5727, 4615, 5247, 5760, 6222, 6214, 4897, 4731, 6547, 4262, 6062, 5482, 4325, 5951, 6368, 5073, 5598, 5458, 6469, 6428, 6297};
    vector<int> decay = {4360, 2397, 2365, 4171, 2885, 2543, 3141, 4396, 4082, 2820, 2742, 4284, 3776, 2545, 2640, 4199, 4406, 4123, 4465, 3666, 2919, 2271, 3640, 3759, 3815, 2481, 4185, 3440, 3702, 4227, 2762, 3798, 2361, 2946, 3501, 3269, 3308, 4461, 3401, 3127, 3018, 3962, 2943, 2530, 2243, 3402, 2465, 2386, 3262, 2462};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4442;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> profit = {7508, 8081, 7900, 4756, 5204, 6011, 5691, 8110, 6386, 7720, 7888, 6852, 5428, 6194, 5375, 6968, 5751, 7302, 6131, 6809, 7094, 7244, 6907, 6768, 8272, 7177, 7053, 6764, 6922, 8161, 8429, 5936, 5910, 5998, 6090, 6511, 5568, 5340, 6128, 7351, 6619, 7575, 7763, 7444, 5275, 4644, 7971, 8476, 7343, 5608};
    vector<int> decay = {1616, 4061, 1655, 3896, 4882, 1957, 5126, 3128, 1078, 2127, 3867, 1521, 3727, 2261, 4330, 2803, 5177, 1165, 1032, 1308, 3824, 1661, 3693, 4203, 3432, 4731, 1866, 1710, 3001, 3406, 5304, 3786, 2147, 1723, 2446, 1793, 2849, 2337, 4090, 3097, 3633, 2721, 3787, 2040, 4151, 2881, 4096, 4008, 3215, 4297};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7444;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> profit = {4518, 4815, 7393, 4338, 7179, 4371, 6246, 5310, 5991, 7493, 5957, 6411, 6014, 3392, 6393, 4648, 3752, 6137, 6599, 4276, 5525, 5503, 5386, 3409, 6013, 4388, 5718, 7414, 4445, 5590, 6421, 3653, 5094, 4098, 4778, 4655, 5257, 3407, 4654, 5937, 3282, 5300, 4730, 6084, 5480, 3506, 7519, 6019, 4332};
    vector<int> decay = {6680, 6619, 6203, 7331, 7003, 3210, 3925, 4176, 4499, 3776, 6237, 5297, 3722, 2948, 3883, 7019, 6574, 5561, 6705, 5398, 4591, 4021, 3702, 5363, 6345, 6196, 3339, 5360, 5702, 2534, 5104, 3540, 6666, 7393, 3458, 6256, 3189, 3468, 6517, 5201, 4758, 3912, 3084, 4565, 4373, 3053, 2742, 7033, 6127};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4985;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> profit = {2431, 4166};
    vector<int> decay = {3972, 4639};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 194;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> profit = {6379, 2681, 4293};
    vector<int> decay = {3000, 7922, 4581};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1798;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> profit = {3023, 3458, 3292, 3884, 5266, 6200, 8287, 8614, 7983, 5515, 9739, 6043, 5618, 8809, 5657, 8300, 9340, 8535, 7282, 4800, 5256, 8349, 7278, 3335, 3341, 9280, 8019, 9531, 9258, 8308, 8824, 6569, 9514, 6404, 8202, 9068, 2771, 3195, 7848, 8502, 6458, 4294, 4711, 9824, 3269, 8117, 4830, 6897, 3358, 6401};
    vector<int> decay = {8276, 7816, 5795, 6192, 6828, 7040, 7332, 6758, 5389, 5088, 6435, 9263, 6763, 5055, 7175, 6452, 8209, 8807, 5866, 9603, 6792, 5910, 8708, 5373, 7402, 8281, 5139, 4587, 7355, 6651, 6082, 5664, 9927, 9297, 9276, 6789, 6370, 6642, 5540, 7219, 7190, 7436, 8475, 9413, 9911, 5684, 7859, 4686, 6484, 9185};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5237;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> profit = {3286, 3487, 1989, 1873, 1870, 3640, 3637, 1926, 2830, 4328, 3422, 3363, 2287, 4097, 2964, 4365, 1970, 3904, 4393, 2323, 1940, 2960, 1821, 4365, 2886, 3701, 1790, 4217, 2929, 2246, 3581, 1811, 4073, 3911, 2960, 2475, 4083, 3129, 2741, 3445, 3054, 1760, 3340, 1873, 4197, 1900, 1834, 2699, 2336, 1823};
    vector<int> decay = {2024, 2638, 1996, 2025, 2644, 2028, 2735, 2756, 2214, 2859, 1745, 2582, 1822, 1943, 2504, 2195, 2046, 1664, 2126, 2202, 2375, 1794, 2802, 1788, 1846, 1657, 1736, 1863, 1844, 2617, 2507, 2853, 2313, 2847, 1937, 2658, 2575, 2372, 1829, 2489, 2931, 1917, 2129, 2453, 2204, 1692, 1706, 2593, 2341, 2817};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2736;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> profit = {6980, 6308, 8826, 5353, 6209, 8944, 4770, 4497, 7621, 8537, 7097, 4665, 8238, 4763, 7406, 4739, 5756, 6873, 6612, 7246, 6689, 8677, 9083, 7178, 6502, 4858, 7571, 6568, 9070, 8844, 8376, 7382, 5812, 7863, 8347, 8305, 8139, 8729, 8415, 6420, 7926, 6172, 7369, 7496, 7220, 5435, 7848, 8588, 8592, 5792};
    vector<int> decay = {5297, 5064, 6586, 5826, 7883, 5484, 4909, 6062, 5050, 6193, 7692, 8463, 6517, 5587, 8124, 6736, 5744, 7093, 4923, 6667, 5642, 8170, 5212, 7421, 5758, 6876, 6295, 6664, 9112, 6711, 5422, 6567, 8775, 7551, 7936, 7359, 5192, 5002, 5578, 7242, 8194, 5427, 6406, 6868, 6557, 5231, 9147, 7845, 4481, 4772};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4602;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> profit = {7604, 7277, 7988, 7684, 6465, 7986, 6300, 6896, 8098, 8030, 7349, 7567, 6340, 7536, 7537, 7293, 6895, 7840, 6854, 7894, 6472, 7122, 6812, 8126, 7480, 8025, 6597, 7111, 7336, 7483, 7226, 6720, 7877, 6995, 7520, 7458, 6761, 6937, 7470, 7975, 6747, 7935, 7322, 6944, 7252, 7975, 7353, 8003, 7596};
    vector<int> decay = {3115, 7418, 5568, 2978, 7726, 2702, 5986, 4607, 5428, 8093, 4144, 7323, 8220, 4712, 4188, 3335, 3881, 5298, 8024, 8046, 4141, 3963, 6133, 3232, 5349, 6613, 3224, 8213, 3411, 4500, 6609, 3882, 2906, 3869, 3512, 7284, 3927, 6151, 3584, 6007, 5232, 4380, 4319, 5144, 6448, 5863, 5131, 6981, 7814};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5424;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> profit = {5432, 5369};
    vector<int> decay = {5597, 5394};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> profit = {5509, 4570, 5136};
    vector<int> decay = {2965, 2606, 2963};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2903;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> profit = {2381, 5746, 8130, 8040, 3998, 3507, 5685, 1485, 6798, 2200, 1738, 9088, 6886, 8278, 4919, 3851, 6302, 295, 6990, 6925, 9310, 8057, 1770, 9336, 1561, 37, 7915, 8730, 1896, 6313, 8609, 2440, 912, 7400, 1141, 4882, 9070, 4989, 4530, 6530, 7160, 4431, 4471, 4707, 1563, 7553, 6721, 7836, 7819, 2564};
    vector<int> decay = {3867, 5730, 3402, 8436, 8597, 3954, 4396, 2451, 1809, 7703, 1895, 1335, 4562, 2767, 707, 5036, 4344, 4078, 4960, 1847, 869, 440, 5597, 1760, 5796, 757, 7458, 1455, 5707, 443, 728, 675, 6116, 4074, 212, 5233, 7971, 4551, 7627, 300, 2774, 8884, 1578, 7279, 2752, 1646, 2835, 7039, 5668, 7738};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9124;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> profit = {2530, 4107, 3759, 2102, 5826, 3668, 2006, 2819, 6528, 6725, 7216, 3332, 6025, 2397, 5242, 5449, 6562, 5860, 4690, 3031, 2945, 2266, 2113, 4618, 4918, 4795, 6960, 5898, 5774, 3779, 6612, 6586, 6169, 6383, 4700, 4738, 6064, 2719, 3569, 5335, 5456, 3529, 4679, 4224, 1938, 2664, 5685, 6783, 4536, 3119};
    vector<int> decay = {7969, 7840, 7600, 6993, 6419, 7175, 7336, 7275, 5990, 7100, 6726, 6817, 7175, 7262, 7828, 6011, 7143, 6374, 6685, 7739, 7112, 7552, 7172, 7000, 6520, 6784, 6053, 7210, 7296, 6842, 7936, 6532, 6653, 7507, 6880, 6428, 5950, 6187, 7762, 7383, 7346, 7843, 6171, 7876, 6373, 7355, 7946, 6871, 7084, 7986};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1266;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> profit = {2839, 6680, 3508, 3515, 7474, 4023, 2740, 5005, 7054, 9037, 3224, 8853, 9640, 6089, 6207, 6889, 9143, 5144, 6507, 7126, 9523, 4327, 4304, 6157, 3757, 3819, 4170, 6910, 9026, 3363, 9022, 9248, 7426, 8357, 8591, 3675, 2711, 7158, 6064, 7148, 6526, 5115, 6332, 4941, 8587, 8366, 7657, 8061, 9337, 2940};
    vector<int> decay = {8766, 8616, 6692, 9453, 4130, 2414, 7170, 8545, 8047, 9188, 7137, 3245, 6681, 6805, 2896, 9360, 5149, 7894, 3324, 8145, 2314, 8079, 2698, 2307, 5392, 8841, 5165, 6106, 3958, 6651, 3017, 6769, 9311, 7676, 6652, 7486, 4134, 4252, 6461, 6225, 7485, 4028, 7437, 4596, 4877, 4377, 8000, 4070, 2701, 9291};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7333;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> profit = {3652, 8845, 8637, 3615, 5593, 2836, 1396, 3679, 1550, 1794, 5541, 1448, 6987, 4470, 7468, 2164, 8740, 4515, 5402, 1150, 2029, 2621, 5851, 8463, 1466, 2216, 3650, 8835, 6996, 5390, 1359, 1589, 7137, 936, 4489, 3670, 5019, 5171, 8596, 5854, 8212, 5077, 8550, 6139, 8832, 6958, 1205, 8513, 4375};
    vector<int> decay = {8014, 6395, 7724, 7000, 6991, 6584, 6706, 8129, 8511, 6254, 7636, 7988, 6728, 6927, 7145, 6766, 7816, 6472, 7931, 7024, 6583, 6885, 6966, 6721, 7180, 8307, 6920, 6660, 7599, 6788, 8087, 6998, 7140, 7403, 7749, 8089, 7944, 8412, 7603, 7841, 8416, 6624, 7214, 6736, 7301, 8317, 7253, 6710, 8539};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2591;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> profit = {5184, 4223};
    vector<int> decay = {2734, 5564};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1489;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> profit = {8309, 8211, 8723};
    vector<int> decay = {6193, 6701, 4971};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3338;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> profit = {5596, 9092, 6681, 6158, 6606, 7292, 5483, 9209, 9326, 4357, 5735, 6057, 7655, 6743, 5987, 5730, 7509, 8966, 7036, 8640, 6267, 5557, 4369, 5976, 8827, 7947, 4008, 3940, 6672, 6242, 6240, 6353, 5469, 7005, 8675, 8240, 8381, 8242, 5504, 5762, 8763, 7403, 5903, 4474, 8230, 5974, 6368, 9823, 5075, 9568};
    vector<int> decay = {2157, 2066, 2157, 2198, 2150, 2160, 2158, 2184, 2105, 2117, 2202, 2153, 2136, 2195, 2205, 2199, 2113, 2211, 2135, 2160, 2076, 2193, 2125, 2147, 2173, 2140, 2138, 2201, 2072, 2144, 2103, 2098, 2079, 2129, 2166, 2172, 2073, 2193, 2067, 2207, 2094, 2212, 2070, 2100, 2117, 2059, 2168, 2173, 2214, 2087};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7764;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> profit = {4672, 3877, 4198, 4867, 4216, 4242, 4411, 4042, 4216, 4369, 4537, 4258, 3979, 4136, 4435, 4598, 4665, 4553, 3971, 4884, 4384, 4077, 4319, 4884, 4114, 4221, 4370, 3919, 4585, 3855, 4389, 4364, 3878, 4733, 4209, 4241, 3954, 4766, 4301, 4316, 4113, 3944, 4592, 4239, 4098, 4133, 3943, 3869, 4832, 3932};
    vector<int> decay = {2567, 1223, 1629, 2732, 495, 1569, 3266, 192, 1679, 3132, 688, 1929, 1129, 1738, 2286, 2024, 2067, 3048, 786, 2246, 405, 2273, 708, 991, 2178, 167, 2570, 2229, 519, 1686, 2100, 2936, 2759, 434, 205, 937, 1853, 176, 979, 1214, 990, 2494, 826, 1970, 1914, 794, 699, 1663, 547, 2313};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4717;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> profit = {5649, 4995, 5877, 6244, 5410, 4597, 5659, 7320, 6734, 6724, 5732, 6735, 6186, 5456, 4865, 6881, 5656, 6068, 6867, 6014, 7311, 4697, 4794, 7117, 7300, 6260, 5447, 5413, 5842, 5820, 6870, 6972, 6295, 5161, 6636, 5126, 6245, 5715, 4860, 6399, 5859, 7079, 5549, 7526, 4949, 6900, 6821, 7091, 5382, 6102};
    vector<int> decay = {5622, 6204, 6201, 5782, 6094, 5597, 5974, 6121, 6116, 5963, 5584, 5680, 6015, 6199, 5986, 5837, 5699, 5933, 6006, 6014, 5790, 5695, 5687, 5985, 6217, 5580, 6138, 6183, 5692, 6124, 6011, 5749, 6036, 5987, 5899, 5905, 5951, 5580, 5733, 5775, 5978, 5752, 5890, 5700, 5659, 5583, 5972, 5725, 5951, 5685};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1946;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> profit = {9386, 8697, 9269, 9191, 8691, 8880, 9367, 9062, 9264, 9470, 8964, 9254, 9114, 9343, 9318, 9266, 9453, 9347, 8734, 9122, 9539, 8856, 9369, 9166, 9440, 9255, 9535, 9354, 9359, 9114, 9365, 9200, 9033, 8960, 8845, 9075, 9190, 9434, 9359, 8781, 9358, 8777, 9385, 8926, 9470, 9157, 9415, 9377, 8831};
    vector<int> decay = {6406, 6802, 5417, 5400, 3983, 6264, 4961, 4597, 6770, 4006, 6469, 6733, 4331, 4659, 3759, 6344, 6254, 3620, 6357, 6852, 6862, 4789, 6229, 3662, 6717, 5781, 5993, 5967, 3653, 5677, 5026, 6607, 5474, 6285, 4296, 6005, 4838, 5099, 6445, 4604, 5654, 5909, 4332, 6533, 3563, 3933, 5872, 5659, 6948};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5976;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> profit = {1812, 2427};
    vector<int> decay = {1783, 1651};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 644;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> profit = {7363, 8923, 5277};
    vector<int> decay = {2585, 2708, 2372};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6551;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> profit = {2763, 2465, 3350, 1386, 6653, 2129, 7075, 5902, 5402, 7405, 1315, 4015, 5191, 6794, 944, 4704, 7295, 3017, 7431, 1987, 7060, 5310, 658, 5706, 5135, 5851, 6233, 506, 2415, 2549, 5707, 4770, 4607, 2162, 5749, 4365, 3884, 5929, 2529, 2391, 5595, 4280, 5998, 3891, 3335, 7378, 1700, 3736, 3500, 1393};
    vector<int> decay = {7257, 9193, 2636, 7884, 6578, 3740, 9718, 4189, 6881, 4067, 7240, 6964, 4129, 5247, 6490, 2740, 8831, 2804, 2171, 3533, 2827, 5486, 7194, 4137, 6159, 7258, 3372, 8997, 7588, 2515, 2898, 4617, 9404, 3231, 2681, 5754, 5075, 2579, 8048, 2137, 4343, 5060, 6797, 6168, 8411, 3059, 7012, 7422, 3559, 6879};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 5294;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> profit = {1534, 1838, 1580, 1788, 1979, 2567, 2245, 2866, 2850, 2855, 2757, 2834, 2300, 2860, 2721, 2256, 1961, 2158, 2690, 2693, 2488, 1667, 1548, 2782, 2597, 2144, 2117, 2773, 1679, 2104, 2761, 2559, 1922, 2322, 2839, 1882, 2015, 1699, 1874, 2845, 2534, 2611, 2805, 2814, 2085, 2141, 2196, 2027, 2279, 2866};
    vector<int> decay = {2749, 2745, 2756, 2733, 2687, 2700, 2717, 2733, 2723, 2736, 2747, 2737, 2703, 2734, 2739, 2743, 2734, 2734, 2746, 2738, 2719, 2712, 2757, 2729, 2737, 2738, 2734, 2739, 2699, 2721, 2720, 2689, 2723, 2733, 2756, 2728, 2690, 2714, 2718, 2747, 2708, 2706, 2725, 2744, 2697, 2705, 2728, 2688, 2696, 2731};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 179;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> profit = {3666, 3619, 3299, 4013, 3403, 3371, 4256, 3904, 3274, 4042, 3365, 4351, 3989, 4154, 4498, 3410, 3208, 4481, 3798, 3684, 3639, 4418, 4256, 4018, 4182, 3617, 3809, 3872, 4323, 4259, 4315, 3478, 3591, 4437, 4315, 4041, 3297, 4284, 3435, 3618, 4039, 3623, 3682, 3518, 3490, 3670, 3975, 3522, 3864, 3262};
    vector<int> decay = {1686, 3318, 1629, 831, 2805, 2495, 1575, 3756, 2867, 1958, 2021, 3560, 1706, 3113, 2528, 2870, 3773, 529, 3497, 1557, 1015, 1237, 656, 2422, 3205, 3162, 3820, 2968, 3405, 529, 1236, 3429, 3409, 2426, 3821, 1147, 3259, 3735, 3241, 1060, 1849, 1418, 2958, 1893, 2869, 1643, 3101, 1575, 510, 2754};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3988;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> profit = {6701, 6045, 4217, 4795, 6742, 7499, 4149, 5491, 6692, 4986, 5234, 4506, 4608, 6998, 4395, 6557, 4295, 5649, 5657, 6149, 4592, 7508, 4943, 8090, 5046, 8097, 5814, 6170, 4437, 7064, 4618, 7325, 8017, 5022, 7028, 6210, 3973, 6084, 6608, 5572, 7257, 8030, 6265, 8052, 5199, 6848, 4780, 5681, 3948};
    vector<int> decay = {5599, 5344, 7278, 8014, 5939, 5531, 6383, 7823, 5977, 6753, 5723, 5608, 6070, 6520, 7192, 6487, 5207, 6246, 7875, 5374, 5965, 7622, 5050, 6782, 6851, 7873, 5876, 5226, 7968, 7360, 7537, 4935, 7357, 6183, 7601, 5180, 6883, 5868, 4887, 8028, 7273, 5263, 5004, 5227, 6951, 6849, 6883, 6810, 7747};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3210;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> profit = {7857, 6823};
    vector<int> decay = {9898, 7061};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 796;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> profit = {4862, 2665, 5126};
    vector<int> decay = {2298, 3251, 3213};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2828;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> profit = {5682, 5703, 6353, 6121, 4853, 6085, 6707, 1491, 3573, 5386, 2931, 5130, 1650, 3729, 5182, 4518, 3808, 3398, 1633, 4792, 4220, 2414, 4211, 6486, 5136, 1870, 4772, 3129, 5279, 5535, 2288, 3576, 3854, 1551, 2312, 7229, 6158, 1930, 7243, 2641, 6133, 3084, 6294, 6305, 5336, 4386, 3438, 2054, 6601, 3888};
    vector<int> decay = {1344, 1107, 1316, 1360, 1405, 1190, 1104, 1454, 1266, 1163, 1330, 1362, 1457, 1143, 1127, 1343, 1482, 1142, 1089, 1294, 1106, 1443, 1141, 1135, 1428, 1268, 1118, 1186, 1272, 1445, 1363, 1243, 1180, 1306, 1101, 1500, 1124, 1250, 1452, 1305, 1328, 1279, 1294, 1412, 1467, 1467, 1252, 1158, 1106, 1257};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6154;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> profit = {6209, 6550, 6258, 5570, 6265, 6815, 6196, 6862, 5802, 6719, 6773, 6498, 5881, 6630, 6997, 6596, 6141, 6646, 6088, 6508, 6071, 6538, 6806, 6146, 5667, 5775, 6898, 6230, 6166, 6037, 6229, 6807, 5769, 5669, 6993, 6650, 6917, 6371, 6694, 5901, 6089, 6650, 6831, 6402, 6278, 6826, 6180, 5601, 6654, 6700};
    vector<int> decay = {4442, 2951, 7534, 3018, 3233, 7301, 4902, 6952, 4336, 6086, 7313, 3681, 5179, 7262, 5343, 5978, 5242, 5088, 6505, 5373, 5179, 5242, 3567, 2584, 7050, 4723, 2650, 7298, 7723, 6916, 2914, 6045, 7515, 4328, 6711, 4628, 3858, 3841, 3808, 7494, 3807, 5001, 3403, 2866, 4491, 2626, 6492, 3614, 5362, 6878};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4413;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> profit = {7760, 5951, 8021, 8273, 4429, 2445, 4875, 6109, 7262, 2244, 5553, 2620, 8035, 7052, 2198, 2457, 5667, 2197, 8658, 5109, 5601, 8628, 8199, 2547, 3783, 4913, 4263, 2725, 2211, 4060, 2346, 7816, 7855, 7055, 6253, 2449, 6187, 2450, 5245, 4771, 7904, 8642, 5235, 7260, 5859, 4120, 7562, 8213, 4161, 6384};
    vector<int> decay = {1784, 1717, 1865, 1746, 1911, 1813, 1525, 1588, 1780, 2131, 1582, 1633, 2001, 1761, 2134, 1484, 1712, 1564, 1644, 1802, 2154, 2174, 1960, 1632, 1723, 1646, 1936, 2005, 1474, 1607, 1546, 1787, 1853, 1812, 2062, 2165, 2154, 1988, 2282, 1645, 1830, 2266, 1807, 2232, 1737, 1523, 2245, 1978, 1616, 1471};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7187;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> profit = {5179, 5443, 4091, 3355, 4537, 4451, 5228, 4940, 4526, 4763, 5008, 3781, 3861, 4182, 3614, 4684, 4335, 4885, 3564, 3504, 4871, 5415, 5104, 5176, 5242, 5304, 5080, 4250, 4087, 3713, 4638, 3809, 3572, 5448, 3884, 4828, 4314, 3655, 4311, 5431, 5009, 3862, 3756, 3413, 4636, 4089, 4816, 3386, 3389};
    vector<int> decay = {7886, 7188, 7301, 5178, 7685, 8987, 8693, 7290, 4484, 2380, 5861, 2522, 8587, 8731, 5197, 4465, 2368, 3032, 2924, 3006, 4199, 8073, 6350, 1858, 5716, 2332, 1981, 7668, 9038, 2809, 7962, 6993, 8376, 8505, 5412, 9302, 2423, 7347, 6661, 5286, 2968, 2591, 9359, 1625, 4564, 4626, 7641, 8483, 6037};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3823;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> profit = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> decay = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> profit = {1000, 500, 250, 125};
    vector<int> decay = {64, 32, 16, 8};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> profit = {1000, 998, 999};
    vector<int> decay = {63, 70, 69};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 936;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> profit = {3, 3, 3};
    vector<int> decay = {1, 1, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> profit = {100, 50};
    vector<int> decay = {1, 55};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> profit = {10, 9};
    vector<int> decay = {2, 8};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> profit = {30, 25};
    vector<int> decay = {1, 10};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> profit = {100, 99};
    vector<int> decay = {1, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> profit = {3, 2};
    vector<int> decay = {1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> profit = {1000, 998};
    vector<int> decay = {2, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 996;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> profit = {1000, 2000, 3000};
    vector<int> decay = {2999, 2999, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1999;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> profit = {5, 6};
    vector<int> decay = {3, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> profit = {9, 8, 7};
    vector<int> decay = {1, 5, 6};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> profit = {9, 8};
    vector<int> decay = {1, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> profit = {99, 100};
    vector<int> decay = {99, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> profit = {5, 2};
    vector<int> decay = {1, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> profit = {10, 9};
    vector<int> decay = {1, 7};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> profit = {4, 3};
    vector<int> decay = {1, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> profit = {2, 3};
    vector<int> decay = {100, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> profit = {6, 5};
    vector<int> decay = {1, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> profit = {4, 1};
    vector<int> decay = {1, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> profit = {10, 9, 8};
    vector<int> decay = {1, 3, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> profit = {5, 2};
    vector<int> decay = {1, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> profit = {1, 3, 3};
    vector<int> decay = {3, 2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> profit = {3, 3, 3};
    vector<int> decay = {1, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> profit = {1000, 999};
    vector<int> decay = {1, 998};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> profit = {4, 3, 2};
    vector<int> decay = {1, 4, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> profit = {7, 7, 8};
    vector<int> decay = {3, 3, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> profit = {5, 4};
    vector<int> decay = {1, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> profit = {2, 3, 4};
    vector<int> decay = {4, 3, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> profit = {10, 8};
    vector<int> decay = {1, 9};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> profit = {1000, 500};
    vector<int> decay = {1, 500};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> profit = {10, 8};
    vector<int> decay = {1, 7};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> profit = {10000, 10000, 10000};
    vector<int> decay = {2000, 2000, 2000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8000;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> profit = {1, 2, 3};
    vector<int> decay = {3, 2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> profit = {200, 100};
    vector<int> decay = {1, 199};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> profit = {5, 4, 4, 4};
    vector<int> decay = {1, 3, 3, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> profit = {3, 2, 2};
    vector<int> decay = {1, 10000, 10000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> profit = {1, 2, 3, 4, 5};
    vector<int> decay = {1, 2, 3, 4, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> profit = {10, 20, 30};
    vector<int> decay = {9, 9, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> profit = {5, 2};
    vector<int> decay = {1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<int> profit = {100, 99};
    vector<int> decay = {1, 98};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<int> profit = {5, 6, 3};
    vector<int> decay = {5, 1, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<int> profit = {10, 10, 11};
    vector<int> decay = {9, 9, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<int> profit = {4, 4, 5};
    vector<int> decay = {3, 3, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<int> profit = {1, 2, 3};
    vector<int> decay = {3, 1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<int> profit = {3, 1};
    vector<int> decay = {100, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    vector<int> profit = {500, 450};
    vector<int> decay = {1, 400};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    vector<int> profit = {10, 9, 8};
    vector<int> decay = {1, 3, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    vector<int> profit = {5, 4, 3, 2};
    vector<int> decay = {1, 3, 5, 7};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    vector<int> profit = {7, 9, 14, 6, 13};
    vector<int> decay = {6, 4, 1, 5, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    vector<int> profit = {3, 2, 2};
    vector<int> decay = {1, 2, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    vector<int> profit = {10, 10, 10};
    vector<int> decay = {1, 2, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    vector<int> profit = {5, 4, 2};
    vector<int> decay = {1, 3, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    vector<int> profit = {4, 2};
    vector<int> decay = {1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    vector<int> profit = {100, 50, 75};
    vector<int> decay = {1, 99, 99};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    vector<int> profit = {10, 1, 2};
    vector<int> decay = {1, 2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    vector<int> profit = {5, 5, 5, 6};
    vector<int> decay = {3, 3, 3, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    vector<int> profit = {1000, 500, 500};
    vector<int> decay = {100, 900, 900};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    vector<int> profit = {5001, 5000, 5000};
    vector<int> decay = {1, 5000, 500};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4999;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    vector<int> profit = {30, 20};
    vector<int> decay = {1, 20};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    vector<int> profit = {10, 10};
    vector<int> decay = {1, 9};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    vector<int> profit = {9, 7, 2};
    vector<int> decay = {1, 5, 6};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    vector<int> profit = {10, 5};
    vector<int> decay = {1, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    vector<int> profit = {5, 1};
    vector<int> decay = {1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    vector<int> profit = {15, 13, 13};
    vector<int> decay = {1, 9, 9};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    vector<int> profit = {1, 2, 3};
    vector<int> decay = {100, 1, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    vector<int> profit = {1, 4, 5};
    vector<int> decay = {5, 5, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    vector<int> profit = {300, 1, 300};
    vector<int> decay = {300, 1, 300};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    vector<int> profit = {4, 4, 4};
    vector<int> decay = {1, 3, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    vector<int> profit = {10, 9};
    vector<int> decay = {1, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    vector<int> profit = {1, 1, 5};
    vector<int> decay = {1, 100, 10};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    vector<int> profit = {3, 4, 3};
    vector<int> decay = {3, 1, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test304() {
    vector<int> profit = {50, 2, 2};
    vector<int> decay = {1, 60, 60};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 304: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 304: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test305() {
    vector<int> profit = {10, 9, 7};
    vector<int> decay = {1, 4, 5};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 305: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 305: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test306() {
    vector<int> profit = {1000, 999, 90};
    vector<int> decay = {1, 999, 999};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 306: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 306: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test307() {
    vector<int> profit = {3, 2, 1};
    vector<int> decay = {1, 17, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 307: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 307: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test308() {
    vector<int> profit = {990, 980, 970};
    vector<int> decay = {1, 500, 100};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 979;
    if(result == expected) {
        cout << "Test Case 308: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 308: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test309() {
    vector<int> profit = {1, 3, 4};
    vector<int> decay = {3, 3, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 309: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 309: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test310() {
    vector<int> profit = {3, 3, 3, 2};
    vector<int> decay = {1, 2, 2, 7};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 310: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 310: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test311() {
    vector<int> profit = {10, 9};
    vector<int> decay = {1, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 311: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 311: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test312() {
    vector<int> profit = {2, 4, 6, 8};
    vector<int> decay = {10, 8, 6, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 312: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 312: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test313() {
    vector<int> profit = {6, 5, 3};
    vector<int> decay = {1, 3, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 313: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 313: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test314() {
    vector<int> profit = {15, 16};
    vector<int> decay = {15, 13};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 314: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 314: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test315() {
    vector<int> profit = {6, 15, 2};
    vector<int> decay = {6, 6, 2};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 315: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 315: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test316() {
    vector<int> profit = {1, 10, 20};
    vector<int> decay = {100, 5, 10};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 316: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 316: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test317() {
    vector<int> profit = {4, 2, 3};
    vector<int> decay = {1, 3, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 317: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 317: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test318() {
    vector<int> profit = {1, 2, 3, 4, 5, 6};
    vector<int> decay = {6, 5, 4, 3, 2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 318: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 318: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test319() {
    vector<int> profit = {11, 10};
    vector<int> decay = {1, 9};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 319: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 319: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test320() {
    vector<int> profit = {5, 4, 3};
    vector<int> decay = {1, 3, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 320: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 320: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test321() {
    vector<int> profit = {99, 100};
    vector<int> decay = {4, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 321: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 321: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test322() {
    vector<int> profit = {6, 100, 99};
    vector<int> decay = {90, 5, 90};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 322: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 322: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test323() {
    vector<int> profit = {99, 100};
    vector<int> decay = {98, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 323: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 323: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test324() {
    vector<int> profit = {100, 10, 1};
    vector<int> decay = {1, 2, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 324: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 324: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test325() {
    vector<int> profit = {11, 5, 10};
    vector<int> decay = {1, 3, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 325: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 325: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test326() {
    vector<int> profit = {10, 9, 3};
    vector<int> decay = {1, 5, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 326: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 326: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test327() {
    vector<int> profit = {8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> decay = {7, 8, 8, 8, 8, 8, 8, 8};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 327: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 327: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test328() {
    vector<int> profit = {8, 10};
    vector<int> decay = {2, 1};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 328: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 328: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test329() {
    vector<int> profit = {4, 3, 3};
    vector<int> decay = {1, 3, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 329: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 329: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test330() {
    vector<int> profit = {10000, 900};
    vector<int> decay = {80, 10000};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 820;
    if(result == expected) {
        cout << "Test Case 330: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 330: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test331() {
    vector<int> profit = {5, 4};
    vector<int> decay = {1, 4};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 331: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 331: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test332() {
    vector<int> profit = {5, 6, 7, 100, 99};
    vector<int> decay = {3, 8, 8, 1, 9};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 332: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 332: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test333() {
    vector<int> profit = {3, 4, 5};
    vector<int> decay = {1, 2, 3};
    TimeTravellingCellar* pObj = new TimeTravellingCellar();
    clock_t start = clock();
    int result = pObj->determineProfit(profit, decay);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 333: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 333: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    test292() == 0 ? ++passed : ++failed;
    test293() == 0 ? ++passed : ++failed;
    test294() == 0 ? ++passed : ++failed;
    test295() == 0 ? ++passed : ++failed;
    test296() == 0 ? ++passed : ++failed;
    test297() == 0 ? ++passed : ++failed;
    test298() == 0 ? ++passed : ++failed;
    test299() == 0 ? ++passed : ++failed;
    test300() == 0 ? ++passed : ++failed;
    test301() == 0 ? ++passed : ++failed;
    test302() == 0 ? ++passed : ++failed;
    test303() == 0 ? ++passed : ++failed;
    test304() == 0 ? ++passed : ++failed;
    test305() == 0 ? ++passed : ++failed;
    test306() == 0 ? ++passed : ++failed;
    test307() == 0 ? ++passed : ++failed;
    test308() == 0 ? ++passed : ++failed;
    test309() == 0 ? ++passed : ++failed;
    test310() == 0 ? ++passed : ++failed;
    test311() == 0 ? ++passed : ++failed;
    test312() == 0 ? ++passed : ++failed;
    test313() == 0 ? ++passed : ++failed;
    test314() == 0 ? ++passed : ++failed;
    test315() == 0 ? ++passed : ++failed;
    test316() == 0 ? ++passed : ++failed;
    test317() == 0 ? ++passed : ++failed;
    test318() == 0 ? ++passed : ++failed;
    test319() == 0 ? ++passed : ++failed;
    test320() == 0 ? ++passed : ++failed;
    test321() == 0 ? ++passed : ++failed;
    test322() == 0 ? ++passed : ++failed;
    test323() == 0 ? ++passed : ++failed;
    test324() == 0 ? ++passed : ++failed;
    test325() == 0 ? ++passed : ++failed;
    test326() == 0 ? ++passed : ++failed;
    test327() == 0 ? ++passed : ++failed;
    test328() == 0 ? ++passed : ++failed;
    test329() == 0 ? ++passed : ++failed;
    test330() == 0 ? ++passed : ++failed;
    test331() == 0 ? ++passed : ++failed;
    test332() == 0 ? ++passed : ++failed;
    test333() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21684580&rd=14245&pm=11118
********************************************************************************
#include <algorithm>
#include <numeric>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <cmath>
#include <complex>
#include <stack>
#include <limits>
#include "time.h"
using namespace std;
#define SZ(x) (int)x.size()
#define FOR(i,x,y) for(int i=(int)(x);i<=(int)(y);++i)
#define REP(i,n) FOR(i,0,n-1)
#define FORD(i,x,y) for(int i=(int)(x);i>=(int)(y);--i)
#define ALL(a) (a).begin(),(a).end()
#define FORE(i,t) for(i=t.begin();i!=t.end();++i)
typedef vector<int> VI;
typedef vector<string> VS;
#define prt if(1)printf
 
struct TimeTravellingCellar {
  int determineProfit(vector <int> profit, vector <int> decay) { REP(i,1)prt("%s","");
    int n = SZ(profit);
    int best = 0;
    REP(i,n) {
      REP(j,n) {
        if (i==j)
          continue;
        int x = profit[i] - decay[j];
        best = max(best,x);
      }
    }    
    return best;
  }
};
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/