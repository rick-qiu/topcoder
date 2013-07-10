/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5922
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

class IntegerSequence {
public:
    int maxSubsequence(vector<int> numbers);
};

int IntegerSequence::maxSubsequence(vector<int> numbers) {
    int ret;
    return ret;
}


int test0() {
    vector<int> numbers = {1, 4, 6, 5, 2, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {1, 2, 1, 2, 3, 2, 1, 2, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {2, 2, 2, 2, 2};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {1, 1, 2, 1, 2, 3, 4, 7, 9, 3, 5, 7, 4, 6, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {4, 5, 65, 34, 786, 45678, 987, 543, 2, 6, 98, 580, 4326, 754, 54, 2, 1, 3, 5, 6, 8, 765, 43, 3, 54};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {3256, 27939, 4990, 7427, 20580, 13669, 31783, 11517, 6105, 31004, 25087, 27329, 2532, 13618, 14932, 29242, 8023, 22914, 26282, 19368, 30975, 5878, 23122};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {20949, 22764, 15934, 29686, 24952, 28127, 1811, 2224, 17115, 9027, 12672, 9181, 13115, 22704, 6351, 1389, 15701, 20035, 7097, 29698, 9429, 12866, 895, 22448, 9745, 12798};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {29185, 24055, 4606, 21858, 22333, 28228, 4441, 30151, 3304, 12792, 7268, 17788, 29067, 5638, 4749, 29505, 20920, 27215, 9095, 21010, 20040, 16081, 1960, 16381, 30695, 8476, 6031, 28464, 17363, 19974, 1801, 17750, 15840, 11168, 18230, 17700};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {8041, 21479, 13870, 5505};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
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
    vector<int> numbers = {28747, 32512, 10071, 18336, 5835, 25962, 8348, 10119, 8242, 10523, 9237, 26295, 26129};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {32119, 2466, 25698, 8080, 28713, 2719, 7787, 25010, 25420, 26081, 19173, 3262, 3833, 8618, 2910, 24347, 3785, 9916, 13020, 30662, 32155, 32017, 24515, 6306, 32401, 16587, 27896};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {22364, 25454, 32327, 17088, 32698, 3405, 11266, 31431, 19004, 13122};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {2289, 2637, 13474, 17748, 21336, 23408, 5488, 30341, 21557, 28105, 10449, 16734, 14327, 31711, 16320, 28990, 8594, 19872, 12291, 15395, 2330, 27814, 18270, 14610, 26768, 28088, 32518, 5561, 11004, 29588, 856, 20307, 4539, 20203, 25547, 29388, 1051};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {32548, 10277, 32037, 7048, 32745, 3355, 3002, 23980, 32023, 8963, 6370, 25552, 4887, 21497, 26720, 7289, 2287, 21305, 1930, 10874, 21942, 23757, 7767, 16823, 6730, 6249, 22202, 16687, 25413, 9107, 20014, 11834, 18220, 1798, 17810, 29966, 13546, 7001, 824, 4744, 1661, 8412, 6969, 2858};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {3779, 4619, 21344, 649, 23942, 3413, 3335, 11331, 20615, 1793, 15919, 31614, 758, 13971, 25888, 18166, 15345, 9402, 3484, 14834, 19952, 7461, 19300, 29886, 1377, 29336, 15870, 4442, 27279, 18751, 436, 24692, 23240, 23362, 12768, 29332, 15551, 27545, 24679, 16791, 21551, 23330, 9860, 3678, 30913, 5105, 12999, 18119};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {16103, 30813, 2012, 2987, 30598, 25489, 4171, 30843, 29187, 14227};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {21477, 18333, 31096};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {14930, 23854, 3203, 31608, 10669, 6144, 25507, 30872, 24333, 21729, 27708, 7761, 14228, 21882, 5674, 16032, 6295, 6108, 7428, 17748, 8958, 19548, 30365, 31867, 13806, 23969, 2769, 29978, 1190, 16123, 6270, 26657, 17319, 29942, 27600, 9117, 12568, 3120};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {22576, 31848, 29287, 13537, 23230, 20789, 26070, 28499, 11882, 2413, 28354, 24089, 27329, 19123, 5968, 12689, 21044, 4868, 21913, 30527, 11468, 30874, 23552, 30924, 15129, 8464, 17348, 3151, 21868, 13256, 17873, 14796};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {19338, 30172, 23034, 22287, 11117, 13230, 4682, 14859, 15099, 18112, 21028, 21643, 3472, 22537, 13684, 20064, 30979, 15892, 28773, 9109, 32648, 20309, 10348, 10590, 4309, 11965, 24201, 24395, 26244, 18060, 20170, 24769, 32697, 25959, 26896, 2731};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {12714, 18197, 10605, 30089};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {17326, 17177, 19038, 4656, 5966, 20966, 25908, 16185, 7628, 734, 15674, 19874, 10598, 19670, 25918, 24331, 1797};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {21013, 5129, 6083};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {24638, 2864, 9130, 20730, 23746, 22129, 18878, 26742, 5470, 23207, 12606, 23253, 13284, 19820, 24616, 25006, 26847, 17713, 23291, 22541, 10614, 3982, 29120, 25451, 1171, 16854, 24139, 10461, 21316, 14319, 6079, 25227, 18529, 30048, 32592, 26980, 9071, 7340, 19021};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {2756, 28895, 19805, 9254, 20716, 5478, 3337, 9888};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {35, 14202, 5260, 4101, 20929, 27524, 20228, 26907, 2117, 28900, 31071, 6871, 16358, 17862, 24745, 10089, 30239, 9611, 30545, 2514, 770, 27848};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {23041, 15567, 32402, 2932, 31804, 31173, 3833, 28068, 24514, 25656, 30418, 3521, 4271, 21732, 29882, 5512, 8479, 10113, 32599, 17299, 11670, 15768, 3297, 9421, 160, 9108};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {553, 6580, 3100, 18745, 22164, 7006, 5536, 24421, 24872, 25758, 3634, 19200, 10146, 22923, 10648};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {32022, 7995, 23967, 24424, 24801, 20199, 22706, 32300, 18912, 25675, 18090, 19479, 12767, 27468, 22504, 31708, 30036, 12509, 16033, 27559, 23374, 31523, 5754, 15966, 22952, 3287, 27221, 6695, 27010, 30701, 19562, 12330, 32753, 883};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {29080, 32502, 10427, 6398, 5612, 12973, 27580, 29895, 22129, 11975, 4790, 12610, 772, 8250, 277};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {21531, 26423, 14744, 7812, 7686, 3421, 19378, 10709, 18805, 27692, 12337, 3287, 13627, 6076, 22813, 9851, 25937, 25007, 30947, 10640, 8990, 2148, 17586, 26005, 29429, 26221, 13862, 4555, 736, 13892};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {20111, 30364, 15929, 11013, 20711, 13540, 30895, 19446, 27739, 6643, 3208, 2974, 28422, 13124, 10718, 4098, 1004, 26780, 7924, 7590, 3982, 13898, 14700, 17397, 15036, 23725, 18362, 10467, 8107, 10488, 20184, 14289};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {15154, 18491, 14257, 5322, 28033, 31751, 3178, 21902, 16551, 19327, 10110, 15135, 29133, 32703, 27626, 8597, 7552, 28845, 2382, 5153, 5113, 6189, 4685, 6629, 17057, 26004, 21047, 17673, 22228, 25952, 9701, 14347, 32229};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {23525, 5462, 26211, 23499, 24536, 3351, 26267, 19959, 13591, 32076, 27742, 18119, 1181, 22557, 6661, 13506, 16929, 17520, 13489, 23311, 11394, 11448, 18392, 30437, 11624, 12301, 8701, 22850, 23593, 10626, 3774, 18656, 10217, 16819, 29204, 16485, 27910, 16029, 10455, 23769};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {1459, 21120, 4190, 17890, 1070};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {27931, 25192, 29092, 17661, 7290, 25435, 8412, 858, 22163, 18879, 21217, 21498, 28136, 12386, 16469, 12740, 17234, 16389, 19720, 5916, 13883, 11964, 6601, 6241, 25870};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {26748, 1978, 20972, 28546, 1645, 1555, 16289, 6250, 12516, 9570, 23254, 23458, 10234, 47, 903, 19076, 25514, 27219, 19128, 19547};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {7936, 30820, 23681, 11901, 4097, 11703, 29636, 21059, 14915, 30589, 8462, 32208, 9109, 25817, 5446, 17284, 26028, 30266, 9841, 23385, 27242, 30859, 3613, 30649, 15712, 8362, 26367, 23699, 5777};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {11739, 27821, 632, 1023, 18852, 8508, 19277, 31551, 24293, 8114, 1925, 18701, 29279, 25047, 29080, 1677};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {9243, 27910, 32463, 25283, 3626, 23708, 15361, 18325, 18882, 11763, 29923, 27256, 31681, 15931, 28283, 9897, 21379, 31798, 9737, 26551, 9322, 27527, 22333};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {15806, 27949, 12968, 22481, 29880, 29003, 22641, 18516, 5337, 30250, 27465, 14249, 10880, 30848, 20384, 10449, 23484, 14579, 27417, 13366, 17247, 31449, 30780, 23694, 596, 8258, 17004, 11010, 31538, 18232, 24088, 22160, 27664, 19525, 12597, 31406, 23196, 22070, 24555, 8496, 1639, 20255};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {9067, 21891, 28319, 16849, 9883, 28496, 14693, 4662, 14210, 31123, 6643, 20425, 18770, 11208, 30370, 24846, 7117, 11450, 26855, 4152};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {28240, 31188, 26011, 6204, 31658, 2018, 1636, 3406, 28012, 14829, 27528, 14417, 30810, 9088, 1274, 2489, 18982, 32339, 7457, 31652, 10373, 7442, 4233, 15037, 1672, 31584, 11737};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {1066, 3868, 20997, 15359, 3110, 16099, 5316, 452, 1035, 8662, 6469, 17527};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {27805, 22301, 7331, 16430, 12204, 28549, 28404, 13797, 19140, 25282, 7140, 7775, 14781, 14820, 21142, 19772, 7812, 30899, 2818, 4267, 11360, 27623, 27475, 4408, 22649, 10135, 7309, 25574, 29594, 18932, 21107, 638, 4406, 22071, 2728, 7718, 24489, 15320, 18196, 53, 21953};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {18313, 27974, 22909, 12098, 1703, 16012, 17428, 13702, 32253, 9573, 26425, 2630, 30064, 19761, 30622};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {25057, 20324, 183, 11739};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
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
    vector<int> numbers = {11738, 17856, 11965, 20649, 18283, 13313, 2141, 22241, 31424, 19025, 11718, 16861, 27492, 6617, 14347, 8374, 7454, 17434, 31801, 1943, 22911, 6706, 15754, 18719, 5047, 16730, 20443, 24326, 16045, 180, 15968, 17924, 18766, 7236, 19095, 20718, 13604, 24891, 22394, 14115, 31531, 18300, 5369, 25126, 13025, 19545, 32679, 16012};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {27293, 2228, 5145, 2081, 21456, 31259, 10534, 15474, 20150, 27420, 13637, 28136, 24345, 22765, 26408, 23937, 6856, 14253, 447, 9338, 20448, 3993, 21665, 23329, 24650, 31362, 5037, 8677, 30341, 5503, 20977, 16559, 30630, 15071, 9163, 20597, 22173, 6241, 11341};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {11449, 30120, 6630, 23869, 15215, 16105, 22079, 30492, 15191, 10215, 28004, 5781, 7287, 31521, 28708, 30792, 7108, 26953, 21946, 23191, 20966, 27897};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {7932, 7996, 5794, 19188, 5536, 6432, 21701, 15710, 10026, 23660, 3173, 22065, 20693, 26940, 5564};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {9926, 27638, 28973, 12836, 20636, 6024, 18554, 7796, 13384, 29937, 4151, 15253, 17183, 19459, 23934, 17543, 7469, 2407, 17381};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {32461, 17889, 20397, 6943, 11383, 21205, 28732, 18286, 20696, 28683, 26317, 12646, 296, 3759, 3431};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
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
    vector<int> numbers = {23480, 17820, 2571, 18521, 29898, 23258, 16946, 27781, 1446, 1636, 8823, 11080, 4586, 21039, 3728, 5327, 30498, 15209, 3458, 22618, 6808, 30974, 1557, 24292, 10606, 2913, 8070, 30982, 7913, 31113, 6781, 9241, 1296, 24378, 13886};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {9078, 12421, 30243, 9171, 4180, 22162, 23370};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {1, 2, 3, 3, 2, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {4, 5, 65, 34, 786, 45678, 987, 543, 2, 6, 98, 580, 4326, 754, 54, 2, 1, 3, 5, 6, 8, 765, 43, 3, 54};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {324, 42342, 3464563, 999999999, 543534, 242, 456, 45, 345, 234, 12, 12, 543, 231, 12, 324, 5342534, 4234, 23, 34533, 345, 34, 435, 3452, 234, 3241234, 543, 2345, 3452, 34523, 43, 345, 45, 456, 756, 45, 4352, 62, 4634, 432534, 345, 4564, 254, 12345, 354, 43523523, 345234, 23452, 23452};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {1, 2};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
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
    vector<int> numbers = {4, 5, 65, 34, 786, 45678, 987, 543, 2, 6, 98, 580, 4326, 754, 54, 2, 1, 3, 5, 6, 8, 765, 43, 3, 54, 99, 100, 1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 6, 5, 4, 1024, 555, 2222, 345, 1023, 66, 223, 12};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {1, 10, 7, 8, 9, 10, 11, 12, 13, 10, 7};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {2};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
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
    vector<int> numbers = {1, 2, 18, 17, 24, 23, 223, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1420, 21, 22, 23, 21, 20, 199, 8, 7, 6, 5, 4, 3, 2, 1, 15, 16, 17, 18, 19, 16, 15, 14, 13, 12, 11, 10, 24, 25};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {7510, 6422, 2526, 20508, 9622, 5816, 28686, 6539, 2441, 3424, 31446, 10808, 19634, 19348, 29552, 18435, 30916, 25160, 23764, 2199, 12553, 31408, 16950, 30181, 5380, 15955, 20176, 22225, 13910, 1377, 4833, 28714, 9694, 16198, 6646, 20960, 23588, 18815, 13928, 1137, 248, 10412, 9766, 10917, 22102, 22503, 29876, 27515, 19085, 8789};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {1, 100, 2, 3, 4, 4, 5, 6, 7, 4, 3, 2};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {1, 5, 2, 5, 3, 5, 2, 5, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {1, 2, 3, 2, 3, 1, 2, 3, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 3, 4, 5, 6, 7, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {4, 5, 1, 9, 7, 111, 1111, 2, 3, 45, 645, 7, 67, 34, 234, 234, 45, 56, 67, 34, 23, 90, 5, 45, 34, 23, 345, 234, 123, 34, 456, 678, 34, 23, 12, 234, 45, 565, 67, 234, 234, 45, 56, 76, 324, 45};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {12, 23, 4, 12, 1, 2, 1, 124324, 2342, 1, 1, 2, 34, 234, 423, 12, 23, 2, 2, 4, 4, 4, 23, 23, 2};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {1, 2, 3, 4, 3, 5, 6, 1, 7, 5, 6, 5, 2, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {12, 23, 4, 12, 1, 2, 1, 124324, 2342, 1, 1, 2, 34, 234, 423, 12, 23, 2, 2, 4, 4, 4, 23, 23, 2, 13, 2, 12, 34, 1, 1, 3, 421, 3213, 1, 234, 4, 2134, 23, 23, 23};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
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
    vector<int> numbers = {1, 2, 3, 2, 3, 1, 2, 3, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 50};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {1, 100, 2, 3, 4, 4, 5, 6, 7, 4, 3, 4, 2, 2, 1};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {4, 5, 65, 34, 786, 45678, 987, 543, 2, 6, 98, 560, 4326, 754, 54, 2, 1, 3, 5, 6, 8, 765, 43, 3, 54, 4, 5, 65, 34, 786, 45678, 987, 543, 2, 6, 98, 580, 4326, 754, 54, 2, 1, 3, 5, 6, 8, 765, 43, 3, 54};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {1, 2, 3, 4, 9, 8, 7, 5, 6};
    IntegerSequence* pObj = new IntegerSequence();
    clock_t start = clock();
    int result = pObj->maxSubsequence(numbers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20286298&rd=8075&pm=5922
********************************************************************************
#include <vector>
#include <algorithm>
using namespace std;
 
class IntegerSequence {
public:
 
int maxSubsequence(vector<int> numbers)
{
  int a[256], b[256], n = numbers.size();
 
  for (int i = 0; i < n; i++) {
    a[i] = 1;
    for (int j = 0; j < i; j++)
      if (numbers[j] < numbers[i]) a[i] = max(a[i], a[j]+1);
  }
 
  for (int i = n-1; i >= 0; i--) {
    b[i] = 1;
    for (int j = n-1; j > i; j--)
      if (numbers[j] < numbers[i]) b[i] = max(b[i], b[j]+1);
  }
 
  int r = 0;
  for (int i = 0; i < n; i++)
    r = max(r, a[i] + b[i] - 1);
 
  return n-r;
}
 
};

********************************************************************************
*******************************************************************************/