/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12427
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

class RobotHerb {
public:
    long getdist(int T, vector<int> a);
};

long RobotHerb::getdist(int T, vector<int> a) {
    long ret;
    return ret;
}


int test0() {
    int T = 100;
    vector<int> a = {1};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int T = 5;
    vector<int> a = {1, 1, 2};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int T = 1;
    vector<int> a = {1, 2, 3};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int T = 1000000000;
    vector<int> a = {100};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int T = 1000000000;
    vector<int> a = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int T = 9;
    vector<int> a = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 2340000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int T = 563708089;
    vector<int> a = {6963031};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 6963031;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int T = 423268072;
    vector<int> a = {630434, 7432665, 9664455, 5220187, 1420111, 2294809};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int T = 53082124;
    vector<int> a = {4001266, 901621, 790967, 376193, 7554561, 886880, 5376293, 5927937, 8693901, 4726283, 8674548};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int T = 903173147;
    vector<int> a = {9626405, 8172013, 8526233, 3818811, 8827328, 1476492, 2453075, 5665783, 7580740, 9060422, 4120056, 9526461, 9486476, 5381469, 9287147, 9980038};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 15454067;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int T = 568194595;
    vector<int> a = {9741728, 5899251, 6173256, 1384774, 4233874, 7881605, 303673, 7886120, 5803966, 7743285, 9058413, 9134949, 4267388, 7426937, 5775470, 674370, 1970994, 7326336, 1024511, 2736684, 2900527};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 24100693;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int T = 783371049;
    vector<int> a = {7942558, 8600052, 1469720, 1277783, 4862739, 9493026, 9238231, 7667538, 5413984, 2132930, 903974, 4828928, 8025237, 827717, 1574373, 2652909, 8606837, 2772859, 6390931, 3965760, 5360392, 5338676, 9014909, 3674155, 3948383, 5426463};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 37968874524429930;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int T = 308921372;
    vector<int> a = {9002530, 6017593, 3541846, 4905646, 5393997, 6548287, 8919984, 302594, 394880, 8420658, 6032186, 8989933, 6588433, 5652005, 914006, 9633373, 4811481, 5741420, 4625108, 2594302, 102256, 247140, 6395282, 513084, 414639, 9044105, 386660, 6847051, 3415881, 6852248, 1677305};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int T = 168825406;
    vector<int> a = {2684149, 4663606, 9065588, 1158773, 6129983, 6386330, 7812399, 3907921, 3292786, 59964, 2333430, 1755513, 1280794, 5819461, 4487482, 5350413, 567734, 9435343, 1058807, 1317312, 5455730, 9726839, 896806, 5666840, 1070652, 5891158, 2705273, 31540, 2963908, 1773134, 5575832, 9363907, 7566757, 233031, 7615717, 6321794};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int T = 949691582;
    vector<int> a = {7937364, 818807, 1824003, 9018603, 6368011, 445368, 696940, 2127537, 5591445, 5112752, 8752623, 9499181, 6409782, 5694629, 1020040, 8461586, 9069395, 853956, 1581136, 6576603, 5222039, 4500676, 2246057, 9295083, 9329277, 7280593, 3825066, 5298068, 8730455, 3364448, 6832242, 8719440, 4647967, 8342225, 452715, 5915967, 6340713, 8869080, 9308333, 1977829, 1728225};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 82210256;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int T = 560562535;
    vector<int> a = {6728128, 7657846, 2643651, 1632209, 3324891, 4639455, 3847442, 6304079, 2292443, 2108649, 7836430, 8224448, 9403987, 1463249, 612131, 6089678, 1180418, 6406787, 931508, 3011132, 9542213, 8486939, 2839953, 5473388, 1651179, 1925947, 832453, 4761949, 8754275, 7173701, 8668892, 5424597, 2018133, 9421952, 5949824, 9664378, 7209025, 4357559, 2501176, 3014288, 3837416, 7887741, 9277201, 7185595, 3334372, 1117176};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 42806499;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int T = 520856781;
    vector<int> a = {6556289, 6265065, 8965656, 7314831, 9263132, 4010889, 2498292, 8618211, 9172655, 7348617, 9544122, 4295968, 4318463, 8925415, 7868676, 1584102, 2104632, 4611777, 5029474, 2598257, 4315541, 5312540, 9533402, 997529, 3404434, 2204119, 4826429, 222966, 5430486, 5237176, 555589, 5009929, 9295974, 2229450, 5585521, 1700507, 2552332, 2240311, 9866594, 2184800, 9307195, 300395, 9205398, 7446463, 3690999, 7428803, 2848266, 9997199};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 13321024;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int T = 349396076;
    vector<int> a = {9541628, 4275134, 9644625, 6168266, 5259444, 8965841, 8086813, 7687302, 3558667, 9600413, 1417361, 4518849, 3267491, 2117878, 1298631, 6598030, 9453406, 489424, 3585820, 296396, 560606, 8810246, 3127007, 2776003, 7245671, 8540614, 5078789, 7878305, 4229527, 9280199, 1815601, 2309010, 3101286, 9172668, 7476464, 3854226, 2794922, 363638, 8573342, 2587217, 2490727, 9442590, 4676047, 4650764, 6208672, 1338062, 6550024};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int T = 534219720;
    vector<int> a = {1689127, 1853272, 8300974, 8736335, 2710010, 1723411, 5668970, 761337, 3941493, 4175500, 5797677, 8974840, 845518, 7686558, 7511081, 74322, 1922069, 8036418, 3416914, 9801702, 4356225, 9255837, 4136180, 3896150, 9182055, 3213107, 1245856, 8616495, 9079532, 7897092, 7004058, 2244261, 9537221, 6617061, 8619712, 6047316, 3279843, 4648273, 8203991, 1949366, 2065806, 8034330, 4125476, 3870911, 3129073, 387199, 104446, 1849959, 6466960, 3692718};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int T = 829616992;
    vector<int> a = {4426345, 2019276, 372599, 6065201, 5429748, 7415344, 5955142, 9822359, 4268532, 5752679, 7228742, 7221223, 5215121, 4809783, 2700313, 1127443, 3323606, 6629836, 7831958, 1688122, 9283770, 2093599, 6752189, 9072495, 6419921, 3505536, 5026788, 1606631, 8841980, 7946411, 7160802, 5860066, 4203361, 8639238, 8024177, 3484005, 820206, 3994041, 1287957, 1184779, 2952624, 3512347, 8507155, 2078132, 9776898, 3581374, 7953985, 4547664, 2584419};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int T = 815543654;
    vector<int> a = {7035749, 3926986, 8832108, 4227930, 485419, 8608850, 7520795, 2819366, 2794854, 6716140, 1152307, 8921987, 1585504, 1625202, 5330508, 5427332, 2838944, 7520767, 5689924, 9956637, 7930743, 3875172, 1751143, 2415938, 8297912, 6845791, 2713017, 1314148, 721672, 6759705, 4264707, 1282368, 2183035, 8513640, 9909860, 5371795, 6728696, 6165666, 2430243, 5348426, 9463092, 9940872, 8147189, 7831021, 1130495, 6663215, 4848144, 5063860};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int T = 576720380;
    vector<int> a = {5710943, 6031991, 8094079, 6983964, 9928690, 5709161, 7977741, 2334711, 7393058, 51385, 4863200, 6936654, 2577566, 3662239, 2333216, 1104926, 3504965, 6819392, 7421868, 1665789, 4406995, 302806, 2919408, 8750015, 9423458, 7536700, 1003700, 8463386, 3857283, 4601431, 7984386, 8183181, 5267166, 8398650, 3030310, 2431459, 8945604, 5231198, 3503410, 3493528, 262221, 593558, 129888, 6949031, 7528583, 6093793, 7790155};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int T = 65166880;
    vector<int> a = {6053962, 3420207, 4278154, 2309320, 432766, 8037858, 7846728, 7332246, 8627614, 2445854, 2822391, 2462631, 1982161, 2426570, 2837960, 236791, 5742616, 5583548, 9655517, 3182310, 3810234, 4369290, 1571648, 2913365, 1520826, 3803701, 9806137, 9717823, 4862073, 7565407, 5650005, 9848826, 2396357, 5522025, 6542170, 9485186, 5136286, 640760, 9164836, 9173463, 6335208, 6516102, 965267, 138444, 1437434, 8509891, 7341906, 1029680, 5931799, 47626};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int T = 687563930;
    vector<int> a = {7450197, 8446536, 8459110, 2692241, 2301473, 14303, 9458270, 4836186, 6195333, 1777669, 3519596, 5408519, 6511763, 8007227, 8133647, 1099626, 2306555, 8250477, 6536524, 9402332, 4030976, 6115834, 9882844, 105770, 7659584, 2114418, 9986545, 4047033, 3908721, 2247296, 1157512, 8693289, 7068132, 4417155, 5564747, 2675000, 2499519, 2095867, 3436866, 6296633, 6278522, 2755944, 2191170, 6627986, 8983429, 4817529, 473357, 5013817, 4992435};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int T = 567397874;
    vector<int> a = {4153763, 1762675, 5242152, 9591508, 4606493, 5261643, 8993656, 8733384, 4806353, 2591879, 8296141, 6515994, 1362065, 6334623, 25161, 5719588, 5877773, 8872778, 5308196, 982417, 9935204, 3326602, 9365119, 3615308, 9274833, 3232395, 2350050, 4858765, 9586340, 4418494, 1580031, 6187957, 8081169, 8890373, 3148671, 4196941, 387453, 7579736, 1147638, 1930149, 416911, 2420141, 5257465, 5841878, 9997690, 503780, 7936334, 6193507};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 57615516087506088;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int T = 829835776;
    vector<int> a = {4045386, 2503126, 4840026, 2778858, 2192901, 6239057, 4446714, 7644036, 1240671, 4801623, 1751814, 9067503, 8320955, 8204803, 7109162, 4572965, 9679435, 1965824, 8233923, 7658202, 9237989, 6760110, 6612919, 8868028, 4956792, 3750260, 6737117, 5023234, 5905666, 5716428, 8127742, 8740871, 4318382, 3716471, 7107396, 5883913, 5181178, 2986827, 6194412, 373733, 6987696, 8714193, 5897038, 536075, 5876464, 4964860, 2374160};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int T = 999999998;
    vector<int> a = {10000000, 9999999, 9999998, 9999999, 9999998, 9999998, 9999999, 10000000, 10000000, 9999999, 9999999, 10000000, 9999997, 9999997, 9999999, 9999999, 9999997, 10000000, 9999998, 9999999, 9999999, 9999998, 9999998, 9999997, 9999999, 9999998, 9999999, 9999998, 10000000, 9999997, 10000000, 10000000, 10000000, 10000000, 9999997, 9999997, 9999998, 9999998, 9999997, 9999997, 9999998, 9999999, 10000000, 9999998, 10000000, 9999998, 9999999};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int T = 999999997;
    vector<int> a = {9999997, 9999999, 10000000, 10000000, 10000000, 9999997, 9999997, 10000000, 10000000, 9999997, 10000000, 9999998, 9999999, 9999999, 9999998, 9999998, 10000000, 9999997, 9999999, 9999998, 9999998, 9999997, 9999998, 9999997, 9999998, 9999998, 9999999, 9999997, 9999997, 9999997, 9999999, 10000000, 10000000, 9999999, 9999999, 9999998, 10000000, 10000000, 9999997, 9999997, 10000000, 10000000, 9999999, 10000000, 9999998, 9999999, 9999997};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 69999995;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int T = 1000000000;
    vector<int> a = {9999998, 9999997, 9999998, 9999997, 10000000, 10000000, 10000000, 9999998, 9999999, 10000000, 9999999, 9999997, 9999999, 9999999, 10000000, 9999999, 9999997, 9999998, 10000000, 9999997, 9999998, 9999998, 9999997, 9999997, 9999997, 9999998, 10000000, 10000000, 9999997, 9999997, 9999997, 9999999, 9999997, 9999997, 10000000, 9999997, 9999998, 9999999, 10000000, 9999997, 10000000, 9999997, 9999998, 9999997, 10000000, 9999997, 9999999, 9999998, 9999997, 9999997};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 19999992000000000;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int T = 999999999;
    vector<int> a = {10000000, 9999997, 10000000, 10000000, 9999998, 9999997, 10000000, 10000000, 10000000, 9999998, 9999998, 9999999, 10000000, 9999999, 10000000, 9999998, 10000000, 10000000, 9999999, 10000000, 9999998, 9999997, 9999997, 9999997, 9999999, 9999999, 9999999, 9999998, 9999999, 9999997, 10000000, 9999998, 9999999, 9999999, 9999999, 9999999, 9999999, 10000000, 9999997, 10000000, 9999998, 9999997, 9999999, 9999999, 9999997, 9999999, 9999999, 9999997, 10000000, 9999998};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 79999999920000000;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int T = 999999997;
    vector<int> a = {9999997, 9999997, 9999997, 9999999, 9999999, 9999999, 9999998, 9999997, 9999999, 10000000, 9999998, 10000000, 9999998, 10000000, 9999998, 9999998, 10000000, 9999997, 9999998, 10000000, 10000000, 10000000, 9999998, 10000000, 9999998, 9999997, 10000000, 9999999, 9999998, 9999999, 9999999, 9999999, 9999997, 9999999, 9999999, 9999998, 9999999, 9999997, 9999997, 10000000, 10000000, 9999999, 10000000, 9999998, 10000000, 9999997, 10000000, 9999997, 10000000, 9999999};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 119999993640000018;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int T = 999999999;
    vector<int> a = {9999997, 10000000, 9999999, 9999999, 9999998, 9999999, 10000000, 9999998, 9999997, 10000000, 9999997, 10000000, 9999997, 9999997, 9999997, 9999999, 9999997, 9999998, 9999999, 10000000, 9999997, 9999997, 9999998, 9999997, 9999998, 9999997, 9999997, 9999997, 9999999, 9999999, 9999997, 9999999, 9999999, 9999997, 9999999, 10000000, 9999999, 10000000, 9999999, 9999998, 9999998, 9999999, 9999999, 10000000, 9999997, 9999997, 10000000, 9999997, 10000000, 9999999};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 79999985;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int T = 999999999;
    vector<int> a = {9999999, 10000000, 10000000, 9999998, 9999999, 9999998, 9999999, 9999999, 9999998, 9999997, 9999997, 9999998, 9999998, 9999999, 9999999, 9999998, 9999997, 9999997, 10000000, 9999998, 9999998, 9999998, 9999998, 9999998, 9999998, 9999999, 10000000, 9999997, 9999999, 9999998, 9999997, 10000000, 9999997, 9999999, 9999997, 9999998, 9999999, 10000000, 9999999, 9999998, 9999999, 9999999, 10000000, 9999998, 10000000, 10000000, 9999997, 10000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 7999999992;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int T = 1000000000;
    vector<int> a = {9999998, 9999999, 9999998, 9999998, 9999999, 9999997, 9999999, 9999999, 10000000, 9999999, 9999997, 9999997, 10000000, 9999998, 9999997, 9999999, 10000000, 9999997, 9999998, 9999997, 9999997, 9999999, 9999999, 9999997, 10000000, 10000000, 9999998, 10000000, 9999998, 10000000, 9999999, 9999999, 9999998, 9999999, 9999998, 9999997, 9999997, 9999999, 9999999, 10000000, 9999998, 9999997, 9999998, 9999997, 9999997, 9999998, 9999999};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int T = 999999998;
    vector<int> a = {9999998, 9999998, 9999997, 10000000, 9999997, 9999997, 9999998, 9999997, 9999999, 9999998, 9999999, 10000000, 9999998, 9999999, 9999997, 10000000, 9999998, 10000000, 9999998, 10000000, 9999999, 9999998, 9999999, 9999997, 9999999, 9999998, 10000000, 9999999, 9999999, 9999997, 9999997, 9999999, 9999997, 9999999, 9999998, 10000000, 9999997, 9999998, 9999999, 9999997, 10000000, 9999998, 10000000, 9999999, 10000000, 10000000, 9999998, 9999999, 9999998, 9999997};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 59999980;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int T = 999999998;
    vector<int> a = {9999998, 10000000, 10000000, 9999999, 9999997, 9999998, 10000000, 9999997, 9999997, 10000000, 9999998, 9999997, 9999998, 9999997, 9999997, 9999997, 9999999, 9999999, 9999998, 9999998, 9999997, 9999999, 9999997, 9999998, 9999997, 10000000, 10000000, 9999998, 9999997, 9999999, 9999999, 9999997, 10000000, 9999999, 9999999, 9999997, 10000000, 9999999, 10000000, 9999999, 9999998, 9999997, 9999998, 9999999, 9999999, 9999998, 10000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 89999977820000044;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int T = 3;
    vector<int> a = {9542770, 8185304, 1557225, 7910738, 641446, 4860393, 6734381, 4276260, 8232441, 1925427, 6212322, 2776504, 5133845, 5890407, 4709148, 6825047, 8617876, 8779288, 7915789, 726383, 91706, 2310513, 606628, 1523645, 8282969, 494279, 5000269, 4087135, 9245990, 2057718, 4817691, 1716046, 8037838, 9620167, 5102660, 511801, 8760614, 7651495, 3397772, 1197776, 1606958, 3118025, 7389373, 7034836, 2169571, 6910549, 2534322, 4297532};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 136414944;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int T = 3;
    vector<int> a = {1208135, 4458360, 783092, 3685556, 7732746, 416928, 8948927, 2684015, 7174490, 1592749, 3786960, 8226395, 9701507, 7860259, 2975050, 1815530, 2107823, 5296803, 5515599, 143544, 3472866, 2217632, 5313041, 1417974, 9157052, 4713953, 528793, 4909758, 5022535, 5714283, 8489351, 9777082, 6796973, 1754935, 6115615, 5040444, 2208025, 9389569, 2773745, 3189488, 8953701, 4005635, 943804, 1226714, 8623168, 5905021, 1195645, 1683463, 1070601};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 8078170;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int T = 2;
    vector<int> a = {2444009, 6193186, 5569929, 1585785, 9995770, 4937384, 3408028, 9021101, 1163166, 4893465, 8163308, 7885786, 2741496, 1043455, 3082493, 6569227, 3330719, 5964272, 8721002, 4274122, 2129518, 489268, 1605193, 8871936, 8561436, 666164, 4447795, 4436981, 3115841, 9904530, 6659484, 4827137, 4122769, 8023517, 3780786, 8658399, 2365702, 4592506, 363422, 881698, 6542173, 9582053, 9374328, 4283193, 8433392, 8068304, 2531228, 4204229, 281603};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 97535256;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int T = 2;
    vector<int> a = {5944052, 609729, 5459063, 7821682, 2826967, 4102018, 8009149, 7016634, 9273581, 22275, 7992941, 8333244, 196759, 3229191, 9065022, 6151080, 1481763, 615262, 9841595, 3188274, 7116404, 9923081, 5239829, 8044225, 658475, 332639, 746994, 3138893, 5964072, 7006956, 8660080, 3429538, 4996046, 7613995, 4038986, 2082859, 2476345, 8579336, 609998, 7215323, 5152355, 466221, 102288, 908075, 3631324, 9889344, 5289938, 7326523, 7587487};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int T = 2;
    vector<int> a = {5633011, 7743627, 3417006, 997101, 9247793, 4651606, 2177077, 9416090, 4436881, 8656339, 1332906, 6765733, 7561523, 8722015, 7056993, 13003, 5013904, 9874711, 6316352, 258554, 1390246, 3299865, 7921496, 1314062, 9548202, 9878219, 3625706, 2918798, 4694366, 4231997, 3862711, 1327006, 3450209, 3893588, 6259611, 8294636, 9358102, 6458944, 97006, 1050747, 9530912, 7942234, 8254472, 7100556, 4999344, 9927813, 7379798, 2169590};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 104888206;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int T = 4;
    vector<int> a = {1000357, 5911407, 6143636, 1349480, 4895193, 5602648, 7555797, 5080399, 8325175, 1161009, 4702545, 1436249, 3877020, 6411834, 7327126, 161796, 9592965, 4668136, 1644141, 3210771, 3192817, 8538026, 511250, 6430735, 2263877, 6458510, 4192169, 3785804, 4599081, 214203, 8013655, 8594752, 7933997, 303148, 972248, 5864955, 4906718, 6570967, 5553477, 6589533, 7682883, 9897332, 9453610, 3918052, 6478147, 8429650, 5604020, 8798090, 6946027};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int T = 1;
    vector<int> a = {9009973, 2194848, 3815952, 348605, 1896577, 5010640, 818241, 9458022, 5507737, 2465533, 9413120, 716712, 1807808, 6829238, 7362213, 9901472, 9201899, 6912503, 1053667, 6576686, 8998531, 8636843, 9160813, 520346, 2376429, 7034972, 3846525, 6342793, 9369017, 6533728, 9326759, 151099, 4434418, 1245365, 6762903, 3508424, 3960447, 7972356, 5430371, 3260173, 9551762, 3389159, 3492974, 8874031, 5849213, 8072524, 9302544};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 17688145;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int T = 2;
    vector<int> a = {2986439, 6085920, 1699980, 7361332, 940281, 7085322, 7177062, 7155418, 7369377, 6289686, 9961782, 3182914, 4435618, 1718164, 5893464, 7307991, 3401786, 905495, 9704664, 4295827, 6393320, 1127374, 7874857, 4675835, 5941346, 3403720, 7394900, 5772901, 2734165, 5540471, 3158004, 8459158, 6919044, 2103475, 9792010, 988825, 9802216, 6154889, 3378316, 1164029, 8528907, 6028373, 9361217, 7820639, 9100645, 9141928, 5671219, 7431080, 7834828, 9833568};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 15621950;
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
    vector<int> a = {3250700, 339051, 9979544, 7296671, 4048012, 4438085, 7776746, 3084794, 5288580, 3113216, 7863267, 8235351, 5506175, 9554153, 1239631, 7749853, 9446789, 699373, 8606791, 9144270, 7946857, 6824480, 8433063, 2311067, 2389861, 7900463, 2835654, 7035205, 6340688, 8112039, 3568239, 3469574, 9270499, 8223101, 7636205, 222121, 8236014, 7655305, 9386443, 4389287, 8348938, 7813394, 6125817, 3254948, 8010721, 4338704, 8934614, 4630046};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 43856379;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int T = 4;
    vector<int> a = {9565744, 5224767, 9265170, 8918799, 5713921, 8069705, 2657768, 1661451, 5866208, 3707489, 208254, 9801525, 1548695, 7311851, 3073, 7892660, 6713856, 520698, 6733535, 6423716, 617524, 7247983, 3887687, 9065724, 331105, 9105301, 5578409, 5835412, 2575939, 7355806, 1484866, 5362649, 6569031, 938013, 5591177, 6152101, 2231334, 669976, 2500746, 8045678, 9096180, 9821338, 1613654, 3884984, 49027, 6484605, 3458545};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int T = 334343676;
    vector<int> a = {6925174, 458007, 4644856, 8392961, 3170419, 8598108, 7149558, 346423, 2797994, 2208497, 7492030, 6847410, 4686572, 4230349, 3095553, 8236403, 3324229, 5453243, 8875742, 4085588, 4116808, 341612};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 9480388488588720;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int T = 3045597;
    vector<int> a = {5208092, 4628735, 4364113, 5430808, 7535610, 6836046, 1921359, 729380, 4277395, 9599253, 4379417, 2905337, 6807985, 3583109, 3603419, 6556745, 8815190, 3611570, 9960978, 8982375, 8264618};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 26047368;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int T = 949009317;
    vector<int> a = {1506322, 7439707, 751705, 104716, 5732605, 8580982, 9129340, 912370, 6121788, 1554878, 4298754, 3126985, 7125073, 6141118, 1410965, 7799632, 5043886, 8317473, 5651716, 4239872, 1545458};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 11118945;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int T = 791784984;
    vector<int> a = {7027401, 6477617, 4498717, 5429369, 2388446, 5631070, 5671861, 1945640, 2941904, 4976930, 9614360, 9762811, 7295121, 7309451, 2612384, 4512853, 7639053, 5232990, 9376686, 3089298, 8605797, 2821424, 8512860, 7976046, 7571312, 5322850, 8094748, 2089403, 6613329, 4506587, 2463481, 6528312, 8346493, 4338768, 5382082, 5177661, 4654963, 7910465, 9201270, 5718123, 6051007, 1543568, 2304029, 3707152, 5322650, 7161305, 4404631};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int T = 348955622;
    vector<int> a = {9282191, 3524680, 9465906, 3692592, 5726597, 1252327, 871324, 4874513, 4476731, 4353957, 9794606, 4268952, 597417, 789679, 1628442, 2259591, 4286618, 1371435, 5846879, 8721875, 1588345, 3539844, 9180920, 8382030, 4295037, 9481968, 2257225, 9804680, 4621226, 5304883, 628448, 5701317, 1912744, 8929632, 5660594, 6702928, 9539712, 8439100, 1223858, 2699488, 207779, 1862398, 5880078, 5612466, 7116190};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int T = 570;
    vector<int> a = {2013, 2, 13, 314, 271, 1414, 1732};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 4112;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int T = 1000000000;
    vector<int> a = {10000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000000000;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int T = 1000000000;
    vector<int> a = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int T = 1000000000;
    vector<int> a = {505, 654, 654, 654, 98, 1654, 654, 654, 6541, 654, 654, 65, 465, 465, 465, 45};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int T = 10;
    vector<int> a = {5, 4};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int T = 2;
    vector<int> a = {1, 2, 3};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int T = 999999999;
    vector<int> a = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 499999999500000000;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int T = 1000000000;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 10000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 9968000000000;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int T = 1000000000;
    vector<int> a = {10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000, 10000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 450000000000000000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int T = 100;
    vector<int> a = {2};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int T = 10;
    vector<int> a = {1, 5};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int T = 1000000000;
    vector<int> a = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 12000000000000000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int T = 1000000000;
    vector<int> a = {1, 1};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int T = 5;
    vector<int> a = {1, 1, 2};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int T = 1000000000;
    vector<int> a = {2487707, 3862778, 2950343, 2077944, 3900268, 9717841, 1965190, 8292180, 4360410, 2729790, 2449452, 5428456, 7507203, 4698320, 7521835, 1237678, 7524303, 284419, 7665969, 2221698, 9062225, 4247314, 6550416, 8338156, 5022757, 1281171, 5219399, 5658635, 9914557, 3057580, 9692388, 3641807, 2162807, 7831797, 965771, 3966457, 3492133, 285158, 4427419, 4714972, 7300801, 3153049, 7775016, 7106088, 805574, 7627266, 2671625, 1946387, 7660394, 6523541};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 36269492000000000;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int T = 49;
    vector<int> a = {92};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 4508;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int T = 1000000000;
    vector<int> a = {100};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int T = 1000002;
    vector<int> a = {3, 4};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int T = 1;
    vector<int> a = {1, 1, 1};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
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
    int T = 6;
    vector<int> a = {6};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int T = 2;
    vector<int> a = {2, 3, 33};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int T = 2;
    vector<int> a = {1, 4};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int T = 7;
    vector<int> a = {1};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int T = 100;
    vector<int> a = {1};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int T = 4;
    vector<int> a = {4};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int T = 3639286;
    vector<int> a = {1291278, 1921642, 6104352, 4964808, 4740384, 1708925};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 33776210;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int T = 103;
    vector<int> a = {3};
    RobotHerb* pObj = new RobotHerb();
    clock_t start = clock();
    long result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22915393&rd=15490&pm=12427
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <climits> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <fstream> 
#include <iomanip> 
#include <iostream> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <vector> 
 
#define EPS 1e-9 
#define INF 1070000000LL 
#define MOD 1000000007LL 
#define fir first 
#define foreach(it,X) for(__typeof((X).begin()) it=(X).begin();it!=(X).end();it++) 
#define ite iterator 
#define mp make_pair 
#define rep(i,n) rep2(i,0,n) 
#define rep2(i,m,n) for(int i=m;i<(n);i++) 
#define pb push_back 
#define sec second 
#define sz(x) ((int)x.size()) 
 
using namespace std; 
 
typedef istringstream iss; 
typedef long long ll; 
typedef pair<int,int> pi; 
typedef stringstream sst; 
typedef vector<int> vi; 
 
 
 
class RobotHerb { 
public: 
long long getdist(int T, vector <int> a); 
 
 
}; 
 
long long RobotHerb::getdist(int T, vector <int> a){ 
   
  ll y=0,x=0,d=0; 
  ll dy[]={0,1,0,-1}; 
  ll dx[]={1,0,-1,0}; 
   
  int n=sz(a); 
   
  rep(t,4){ 
    rep(i,n){ 
      y+=dy[d]*a[i]; 
      x+=dx[d]*a[i]; 
       
      d+=a[i]; 
      d%=4; 
    } 
  } 
   
  ll cycle=T/4; 
  ll rest=T%4; 
   
  y*=cycle; 
  x*=cycle; 
   
  rep(t,rest){ 
    rep(i,n){ 
      y+=dy[d]*a[i]; 
      x+=dx[d]*a[i]; 
       
      d+=a[i]; 
      d%=4; 
    } 
  } 
   
  return abs(y)+abs(x); 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/