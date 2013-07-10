/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11577
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

class RangeSquaredSubsets {
public:
    long countSubsets(int nlow, int nhigh, vector<int> x, vector<int> y);
};

long RangeSquaredSubsets::countSubsets(int nlow, int nhigh, vector<int> x, vector<int> y) {
    long ret;
    return ret;
}


int test0() {
    int nlow = 5;
    int nhigh = 5;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int nlow = 10;
    int nhigh = 10;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int nlow = 1;
    int nhigh = 100;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int nlow = 3;
    int nhigh = 100000000;
    vector<int> x = {-1, -1, -1, 0, 1, 1, 1};
    vector<int> y = {-1, 0, 1, 1, -1, 0, 1};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int nlow = 64;
    int nhigh = 108;
    vector<int> x = {-56, -234, 12, 324, -12, 53, 0, 234, 1, 12, 72};
    vector<int> y = {6, 34, 2, 235, 234, 234, 342, 324, 234, 234, 234};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int nlow = 1;
    int nhigh = 1;
    vector<int> x = {-1, 0};
    vector<int> y = {0, 0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int nlow = 371199;
    int nhigh = 1910458;
    vector<int> x = {434896, 84806, 101964, 404354, 80818, 19388, 112928, 324875, 377291, 133710, 213683, 478949, 364540, 390814, 484127, 260541, 234024, 420641, 130653, 209735};
    vector<int> y = {6656324, 2284495, 7806484, 2590408, 9614916, 3243807, 2043830, 4874849, 9153501, 1295037, 4426554, 7366674, 4190884, 6490218, 1054580, 676966, 7439769, 2304382, 5064945, 5154265};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 144;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int nlow = 402329;
    int nhigh = 2143858;
    vector<int> x = {3601763, 5355610, 5387780, 7914153, 6077402, 8715623, 2032989, 9920531, 6120403, 9931960, 1457905, 622243, 8060356};
    vector<int> y = {327777, 39305, 248968, 445277, 106436, 371779, 161994, 351146, 472585, 70832, 42948, 116150, 319556};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int nlow = 417970;
    int nhigh = 1137236;
    vector<int> x = {497734, 113745, 411747, 30124, 71819, 195103, 211665, 442692, 448094, 59930};
    vector<int> y = {7099234, 443780, 496812, 6044250, 1084848, 1128538, 6369651, 5232415, 58089, 4168718};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 34;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int nlow = 414630;
    int nhigh = 2419305;
    vector<int> x = {9433241, 9336677, 5482533, 681374, 4128951, 3440483, 8373691, 5007557, 539506, 8345775, 6995247, 2917949, 4575942, 362012, 6196869, 33723};
    vector<int> y = {391971, 13892, 95727, 115787, 487688, 427287, 409391, 343508, 31693, 304704, 34236, 397686, 12657, 66711, 97009, 333254};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 89;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int nlow = 412804;
    int nhigh = 1736421;
    vector<int> x = {6981067, 9377637, 549857, 6154411, 7323565, 3701440, 9370399, 7633978, 7850437, 6726771, 4317879, 95686, 1604370, 2858744, 9309037, 1174296, 8946177, 8613754, 8236024};
    vector<int> y = {42301, 145583, 177738, 35807, 444278, 143731, 347145, 455752, 460068, 437110, 31474, 378752, 317227, 348408, 220835, 182308, 240064, 13760, 406645};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 131;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int nlow = 366201;
    int nhigh = 1944213;
    vector<int> x = {472615, 362211, 83633, 443450, 244082, 166379, 130085, 366926, 95068, 398233, 422146, 52681, 449834};
    vector<int> y = {4376245, 1011986, 472289, 262064, 2158170, 9933134, 3848452, 564699, 3837438, 3076261, 6796507, 212647, 5781651};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int nlow = 377225;
    int nhigh = 1954929;
    vector<int> x = {9205794, 7759415, 8482139, 2448754, 6412139, 1679100, 8734307, 2871911, 4281516, 6779378, 1817457};
    vector<int> y = {101246, 23460, 332031, 245666, 173999, 441941, 417441, 335878, 400685, 392935, 124129};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int nlow = 403167;
    int nhigh = 1753691;
    vector<int> x = {7524777, 4002187, 2674950, 1706339, 3464819, 5148437, 2790408, 7912953, 9948670, 4428641};
    vector<int> y = {148279, 194335, 463120, 350569, 202336, 345677, 53433, 357415, 456600, 207849};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int nlow = 414489;
    int nhigh = 1928029;
    vector<int> x = {7583042, 3589850, 9976350, 6075786, 7469422, 1982273, 1232780, 3126022, 54244, 2798785, 2967468};
    vector<int> y = {401788, 11532, 278121, 339378, 69321, 350116, 35706, 427657, 9471, 426021, 247164};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int nlow = 327960;
    int nhigh = 2288204;
    vector<int> x = {397560, 296763, 341268, 167478, 344578, 69600, 485410, 385428, 454464, 373589, 270675, 305005, 374486, 95153, 271957, 152833, 423787, 163319, 255685};
    vector<int> y = {4265055, 6553259, 1110971, 5143362, 752948, 3327949, 4701355, 7973879, 921164, 6623648, 1225106, 3416610, 239424, 8961213, 6967289, 9375600, 8882715, 3800140, 6978111};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 125;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {8261, 5119, 2397, 3401, 7402, 6165, 1120, 3369, 5446, 2440, 386, 6279, 8412, 1195, 64, 8388, 185, 1122, 4187, 6144, 5203, 3468, 4325, 5067, 5235, 3283, 7053, 5308, 108, 1194, 8420, 3285, 8122, 117, 183, 6208, 4343, 2174, 2377, 7471};
    vector<int> y = {1184, 6054, 7408, 92, 6215, 8191, 1248, 2298, 224, 123, 3056, 6279, 3396, 22, 1276, 6130, 16, 6281, 162, 4304, 1378, 5442, 8184, 4416, 8212, 8169, 5131, 3359, 2013, 4365, 159, 3175, 7258, 4281, 8169, 2063, 6370, 2425, 5243, 4301};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 192;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {246, 3171, 3462, 1424, 193, 4132, 1329, 1374, 349, 2009, 2183, 3335, 69, 1487, 3148, 2126, 2218, 1489, 1173, 1135, 1496, 3073, 2442, 433, 2416, 4117, 4258, 233, 3193, 4364, 2287, 2030, 3073, 16, 2416, 92, 117, 2182, 1145, 1068};
    vector<int> y = {4316, 11018, 3362, 4242, 6431, 8222, 12095, 2488, 8027, 210, 6242, 9326, 9324, 13014, 13105, 10283, 3428, 10114, 6112, 16106, 14371, 1239, 7320, 2482, 4019, 13148, 4131, 7201, 2316, 5120, 9038, 5196, 4341, 5042, 8207, 12107, 449, 17309, 1101, 3253};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 232;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int nlow = 2999;
    int nhigh = 2999;
    vector<int> x = {492, 409, 434, 252, 259, 69, 130, 498, 457, 39, 27, 282, 152, 42, 344, 261, 271, 9, 387, 463, 201, 262, 388, 109, 386, 470, 488, 59, 21, 53, 242, 410, 173, 243, 242, 343, 179, 279, 194, 228};
    vector<int> y = {48249, 54152, 27138, 52160, 39040, 4391, 50222, 10249, 18020, 41272, 35206, 14087, 21260, 53345, 51092, 43440, 15312, 19025, 40311, 36031, 28137, 20082, 42473, 44319, 26077, 8088, 22360, 29483, 33151, 25148, 3034, 9245, 11435, 1468, 38397, 49287, 34, 17124, 32073, 47341};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 129;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {2152, 6040, 6138, 1370, 8130, 8424, 97, 9160, 5373, 6014, 227, 8500, 4296, 9205, 7087, 6081, 7221, 2320, 4258, 5339, 3079, 6122, 4206, 1442, 3079, 5065, 6134, 8437, 9113, 9063, 3421, 8415, 1367, 8178, 7131, 5157, 1156, 7324, 9072, 3290};
    vector<int> y = {58, 3007, 4146, 1295, 5256, 477, 3062, 4371, 1341, 7178, 1081, 7337, 5338, 7166, 7419, 382, 5418, 7328, 1410, 7118, 2412, 5260, 4225, 2180, 1276, 3145, 6023, 1309, 5187, 6212, 336, 3254, 5019, 4344, 4079, 6146, 196, 3028, 1484, 7301};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 252;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int nlow = 999;
    int nhigh = 999;
    vector<int> x = {2486, 5181, 2173, 4047, 3399, 331, 2112, 1485, 5099, 1243, 1446, 1112, 2023, 4433, 345, 2091, 5401, 3162, 3010, 6126, 5009, 3106, 1090, 5176, 310, 86, 6294, 3062, 6039, 4397, 2327, 5146, 4377, 6093, 6394, 6435, 158, 3442, 4175};
    vector<int> y = {224, 1352, 2174, 427, 1181, 1343, 5096, 3027, 5051, 416, 1416, 5284, 3430, 1435, 3329, 1393, 50, 5135, 2158, 3326, 4293, 167, 4468, 2295, 4218, 212, 5096, 4499, 4184, 2116, 4372, 3107, 5103, 1412, 2076, 57, 2110, 3465, 3340};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 94;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int nlow = 999;
    int nhigh = 999;
    vector<int> x = {3263, 4200, 3247, 5247, 1215, 1272, 1407, 268, 5262, 3079, 5143, 5239, 246, 303, 5006, 2280, 3433, 4445, 2340, 1128, 3115, 5440, 4068, 3163, 4170, 347, 2360, 4179, 1379, 2350, 314, 2177, 1500, 223, 2149, 4213};
    vector<int> y = {3371, 3242, 2038, 5362, 3233, 2073, 5190, 4055, 2473, 4082, 1290, 31, 5252, 2158, 4370, 4021, 242, 2246, 2192, 1218, 1116, 3411, 104, 5015, 1374, 402, 1027, 4203, 4290, 5168, 3194, 216, 224, 1248, 3453, 5377};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 93;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {1290, 5328, 7009, 3311, 250, 1010, 1299, 3418, 3070, 6476, 2394, 8015, 280, 7372, 2129, 2057, 1014, 7279, 8164, 4242, 7049, 4156, 379, 6341, 399, 239, 5296, 4192, 1493, 7183, 1264, 2304, 2118, 3097, 6349, 2322, 8235, 6277, 5464, 3022};
    vector<int> y = {8171, 7428, 7177, 5497, 229, 5143, 1415, 2139, 4140, 3348, 1381, 8399, 7499, 4138, 258, 8260, 7112, 3445, 1102, 6379, 5458, 203, 6393, 4273, 4137, 3459, 220, 1292, 2101, 6110, 4136, 4490, 7105, 1424, 6324, 5402, 4079, 373, 2365, 8352};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 219;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {3088, 2329, 350, 1466, 314, 2028, 1287, 2026, 4074, 4201, 133, 1358, 3291, 3133, 191, 3428, 2379, 4145, 2272, 1058, 4005, 4470, 3196, 3269, 3099, 2107, 2369, 56, 4251, 4087, 3030, 1086, 3028, 97, 4219, 1237, 4207, 1008, 1333, 4260};
    vector<int> y = {2164, 8192, 8165, 14377, 11420, 15114, 318, 17091, 1042, 17350, 9378, 3021, 3243, 4045, 7139, 14258, 9200, 16201, 10428, 12205, 13046, 2046, 7292, 98, 17453, 12436, 14169, 4230, 14402, 8139, 6007, 16011, 8071, 16342, 10208, 7024, 9278, 15495, 4318, 5211};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 189;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int nlow = 2999;
    int nhigh = 2999;
    vector<int> x = {161, 93, 165, 206, 23, 115, 407, 39, 363, 374, 129, 219, 47, 339, 341, 81, 383, 171, 446, 471, 197, 300, 314, 236, 411, 454, 200, 196, 18, 169, 32, 18, 203, 280, 285, 166, 159, 251, 46, 86};
    vector<int> y = {43420, 46172, 3003, 30049, 24391, 22358, 324, 25392, 27205, 45258, 32048, 48150, 26274, 41457, 51330, 52026, 16081, 49033, 31088, 50366, 47074, 8165, 34470, 11120, 40277, 33246, 44045, 35457, 28148, 21377, 29455, 10157, 9273, 2185, 13328, 15492, 12245, 17014, 54042, 14207};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 154;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {483, 4454, 7173, 7365, 7392, 5077, 5154, 6264, 4492, 114, 379, 6284, 5229, 3255, 1299, 3161, 4239, 6424, 2456, 4211, 4084, 425, 5464, 2478, 114, 7385, 5415, 2146, 3258, 6224, 2362, 3133, 423, 3361, 5249, 6471, 10, 7321, 7367, 3146};
    vector<int> y = {44, 4353, 1451, 5355, 9143, 4073, 7243, 1179, 2341, 6178, 8132, 8368, 9216, 5260, 7274, 6441, 9431, 313, 335, 3414, 1476, 3002, 2203, 4079, 5234, 6169, 3461, 9188, 8361, 5061, 8019, 4069, 7300, 7119, 1493, 3018, 2081, 7128, 361, 246};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 212;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int nlow = 999;
    int nhigh = 999;
    vector<int> x = {2476, 3165, 4403, 237, 4246, 1122, 4300, 3252, 2068, 285, 320, 1382, 1492, 5076, 2176, 3191, 5370, 247, 99, 4463, 4051, 5139, 2290, 1163, 4250, 3067, 451, 3292, 1291, 5325, 2171, 2163, 1367, 1099, 155, 2244, 3076, 3303, 4419};
    vector<int> y = {4418, 6442, 5476, 6455, 1455, 3441, 3313, 2165, 1157, 4394, 1163, 5002, 1421, 6235, 3387, 3284, 3025, 2085, 3238, 2209, 4486, 417, 211, 2027, 6027, 317, 5, 1480, 6478, 2205, 2240, 5275, 4037, 124, 5118, 6113, 4267, 5312, 184};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 83;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int nlow = 999;
    int nhigh = 999;
    vector<int> x = {3481, 5057, 1409, 1073, 5386, 2252, 5466, 153, 2155, 441, 3496, 323, 3136, 4106, 5091, 401, 4155, 3385, 486, 4312, 1463, 2124, 2146, 2349, 5165, 2419, 3467, 1467, 353, 1383, 1162, 5059, 4136, 3314, 4113, 4005};
    vector<int> y = {3438, 4309, 1122, 433, 272, 5057, 1350, 319, 2436, 1214, 1070, 2308, 2307, 2208, 2024, 4055, 4199, 4298, 5192, 5128, 2407, 4348, 3399, 1309, 5458, 294, 5456, 5092, 3256, 4036, 3209, 3461, 1218, 286, 3241, 391};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 111;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {4086, 3283, 8060, 4016, 8066, 189, 2291, 4074, 6143, 1188, 4150, 2278, 4007, 4221, 5276, 7482, 205, 2335, 3046, 4146, 6119, 1423, 37, 5340, 4314, 2017, 7172, 3072, 8445, 1007, 5403, 5458, 8104, 7254, 5156, 7087, 5244, 4304, 3100, 1141};
    vector<int> y = {7361, 1090, 2480, 309, 6462, 6298, 6325, 4142, 6360, 5355, 3025, 2284, 8285, 1141, 55, 3398, 5062, 3313, 2396, 5405, 168, 6115, 7137, 8072, 6278, 8147, 6182, 5180, 4013, 4188, 4134, 2407, 67, 5374, 6259, 7013, 1162, 2299, 6263, 1302};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 242;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {168, 11392, 9046, 1127, 6415, 11283, 9382, 16482, 10448, 16131, 7222, 12072, 13271, 15231, 13029, 3050, 17194, 7001, 4137, 13354, 2373, 134, 14142, 7228, 8068, 3316, 8440, 17045, 16089, 15432, 6312, 11096, 462, 15486, 17166, 15345, 2490, 6331, 5310, 5358};
    vector<int> y = {4302, 3457, 3262, 2283, 35, 4135, 4129, 3284, 1461, 4117, 3489, 4146, 1050, 4409, 2301, 2291, 272, 1387, 2191, 458, 4381, 97, 2401, 147, 4327, 4019, 1326, 4200, 2137, 3234, 4121, 2396, 1061, 1221, 1092, 491, 20, 3442, 3125, 4424};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 166;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int nlow = 2999;
    int nhigh = 2999;
    vector<int> x = {421, 197, 144, 66, 287, 247, 311, 130, 346, 310, 253, 120, 361, 210, 477, 14, 102, 214, 356, 275, 356, 103, 105, 60, 204, 130, 430, 66, 181, 290, 379, 5, 224, 74, 274, 433, 119, 235, 129, 267};
    vector<int> y = {34058, 35416, 20296, 32375, 44333, 52354, 50097, 1127, 30020, 48402, 42475, 7477, 31291, 12239, 14034, 17487, 29474, 23216, 53323, 54059, 27339, 21237, 13412, 412, 39379, 26408, 19066, 15036, 3092, 25389, 43250, 37489, 38070, 9075, 47417, 22074, 41189, 10140, 33132, 11116};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 130;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int nlow = 1999;
    int nhigh = 1999;
    vector<int> x = {2342, 4313, 6487, 4458, 2023, 5189, 5428, 162, 55, 2300, 8179, 5407, 5272, 1466, 1278, 2256, 5427, 5213, 1327, 7002, 6266, 7202, 4195, 1383, 8065, 6380, 6413, 4462, 132, 3486, 6156, 9247, 7463, 9278, 6148, 1060, 3353, 6302, 4472, 9322};
    vector<int> y = {198, 5117, 2451, 6098, 2135, 4229, 3335, 6011, 4445, 6084, 4023, 6431, 267, 7072, 1318, 1115, 7388, 1020, 2168, 3170, 7310, 4033, 3099, 6315, 2124, 122, 5104, 1343, 1480, 4312, 1439, 7203, 5159, 1209, 3254, 5121, 1283, 4438, 2156, 5155};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 262;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int nlow = 999;
    int nhigh = 999;
    vector<int> x = {4469, 3013, 4132, 1297, 5084, 6040, 227, 5160, 2246, 6362, 5143, 1357, 2093, 3467, 5250, 255, 5388, 1296, 6481, 4239, 1051, 6366, 4464, 4420, 2177, 3065, 2458, 4202, 2339, 455, 6003, 5149, 102, 2348, 6495, 400, 1051, 3339, 253};
    vector<int> y = {4479, 2093, 2031, 4207, 308, 201, 1454, 2448, 197, 4262, 1244, 5006, 5004, 4306, 4453, 3386, 3158, 3481, 1064, 1208, 253, 5388, 464, 3296, 1371, 1022, 4182, 5218, 3198, 374, 3382, 5121, 2123, 2436, 2096, 5208, 1048, 5283, 4484};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 89;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int nlow = 999;
    int nhigh = 999;
    vector<int> x = {3007, 4110, 5293, 1472, 1112, 1044, 5034, 74, 4024, 2135, 5218, 2331, 4343, 5138, 3274, 3120, 3341, 26, 3331, 71, 490, 180, 4216, 5024, 1288, 4174, 1325, 3148, 2407, 2290, 2265, 5460, 1058, 316, 4465, 2097};
    vector<int> y = {4120, 50, 4258, 381, 3241, 2360, 1120, 5154, 5106, 4362, 5233, 2093, 4432, 2158, 1143, 450, 3199, 3102, 5017, 1366, 4473, 152, 1442, 173, 4166, 2397, 1309, 2109, 69, 1219, 5167, 3151, 5232, 2404, 3125, 3418};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {7059, 4021, 4464, 194, 5345, 5317, 6223, 1340, 6222, 1223, 3174, 3414, 2224, 5310, 1266, 2025, 2086, 3120, 1365, 1268, 5191, 6445, 4278, 6122, 3162, 8130, 4027, 8334, 7458, 4389, 1175, 2493, 3155, 7029, 6437, 6442, 8162, 403, 5089, 52};
    vector<int> y = {7166, 4119, 37, 4234, 1226, 454, 4170, 5260, 1050, 397, 3497, 6039, 4397, 8127, 8250, 8411, 5483, 7429, 2367, 6380, 5444, 3196, 3445, 6127, 4017, 7376, 7148, 5252, 2220, 8230, 4099, 7292, 365, 5111, 5384, 2273, 2253, 1395, 4183, 2453};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 245;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {4353, 9396, 12222, 4093, 6394, 331, 5022, 16070, 10178, 2089, 1471, 15490, 17004, 6476, 14237, 9423, 1003, 4400, 16280, 4035, 14461, 12464, 1115, 6134, 8422, 7099, 3495, 2094, 13232, 68, 12361, 2371, 7496, 15063, 87, 5254, 4478, 9140, 13413, 17350};
    vector<int> y = {1355, 2394, 459, 2047, 4065, 5, 1162, 1280, 274, 1269, 2386, 1458, 4167, 2494, 4172, 4040, 4009, 3175, 2495, 4059, 345, 3257, 3353, 22, 486, 3437, 4259, 3278, 1325, 4345, 1458, 2475, 4169, 2491, 2149, 254, 156, 332, 3002, 1235};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 164;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int nlow = 2999;
    int nhigh = 3000;
    vector<int> x = {17059, 46488, 43265, 37276, 35072, 54467, 45383, 52092, 16431, 1200, 14494, 52, 12418, 13483, 28283, 50259, 21227, 40228, 51429, 44084, 26384, 7237, 38113, 9182, 8344, 10291, 20426, 4266, 31173, 5285, 2458, 42472, 25451, 6242, 22374, 36465, 24226, 41206, 53264, 39407};
    vector<int> y = {400, 383, 228, 298, 325, 57, 351, 75, 45, 488, 286, 415, 155, 20, 302, 321, 140, 339, 295, 255, 16, 383, 190, 263, 266, 383, 225, 264, 286, 326, 14, 112, 318, 151, 167, 109, 217, 209, 56, 411};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 131;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {3138, 6272, 4254, 4049, 2438, 4361, 213, 4112, 1449, 5465, 3406, 6251, 1369, 2012, 7319, 1182, 5023, 2457, 5097, 1394, 4149, 2339, 496, 5478, 5023, 4483, 3431, 1290, 2359, 439, 5467, 2286, 6469, 5189, 7365, 6098, 3314, 2179, 3092, 7275};
    vector<int> y = {5143, 2399, 9324, 201, 8224, 8079, 5285, 4080, 330, 2224, 6155, 321, 7221, 3437, 8291, 1409, 6071, 9122, 9312, 8137, 6278, 4104, 2121, 7367, 4327, 3139, 2104, 6397, 6288, 9051, 183, 5451, 9002, 1392, 4220, 1482, 454, 2230, 3423, 9046};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 240;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int nlow = 999;
    int nhigh = 1000;
    vector<int> x = {2025, 1255, 144, 4381, 117, 2465, 3367, 2116, 5176, 1137, 3032, 5056, 1209, 5286, 3335, 1328, 2419, 5339, 4206, 457, 1093, 4292, 3466, 1440, 4135, 3223, 5295, 3366, 4315, 2142, 3097, 1348, 4447, 5153, 329, 484, 4308, 2200, 2050};
    vector<int> y = {2195, 1374, 184, 3259, 2003, 4493, 6315, 1438, 4120, 2161, 5182, 5120, 113, 3204, 3472, 5186, 5378, 1449, 4471, 4427, 4096, 1158, 254, 6469, 360, 4085, 85, 1372, 5430, 6273, 2175, 3251, 2335, 6250, 3018, 5412, 6022, 433, 3448};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int nlow = 999;
    int nhigh = 1000;
    vector<int> x = {4177, 4068, 5158, 432, 3064, 1326, 4066, 2321, 5227, 1053, 5128, 4041, 3092, 3325, 36, 1316, 5302, 3013, 2308, 3158, 2191, 1352, 2091, 5122, 2109, 5248, 373, 345, 3433, 4023, 4158, 1218, 390, 25, 2369, 1075};
    vector<int> y = {5174, 10, 4192, 1244, 1197, 4149, 3325, 3096, 3110, 3481, 5142, 4391, 416, 2437, 5276, 5186, 1497, 3451, 5252, 4394, 4468, 2187, 2435, 483, 1216, 2312, 2489, 4149, 5087, 2393, 1485, 225, 3489, 35, 321, 1208};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 97;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {177, 6081, 4128, 4083, 2464, 3390, 2344, 1041, 469, 7280, 3322, 7383, 5018, 1455, 6035, 4406, 307, 4211, 436, 2306, 3405, 1149, 5056, 3471, 1014, 2341, 5228, 4086, 6134, 7019, 7492, 6489, 3087, 4192, 8154, 8436, 2057, 3362, 8395, 4259};
    vector<int> y = {122, 6023, 1181, 54, 1075, 2446, 5166, 7394, 6439, 8174, 8386, 6471, 195, 6228, 1256, 5470, 8390, 3005, 4326, 8133, 1448, 1315, 5342, 4037, 139, 3104, 1172, 7105, 8197, 5448, 7477, 2238, 7301, 2372, 266, 3165, 2491, 5463, 1263, 4436};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 235;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {15048, 10279, 7221, 12290, 5247, 15110, 353, 8090, 17261, 13348, 16128, 374, 15230, 12157, 16261, 3133, 10290, 16109, 14409, 11245, 2427, 4304, 9262, 6236, 6164, 12491, 6229, 17140, 3498, 10455, 7263, 2030, 11460, 8008, 1048, 6084, 345, 14227, 10258, 317};
    vector<int> y = {3452, 354, 85, 4279, 4321, 184, 1225, 1374, 4119, 1420, 4270, 3070, 4395, 2205, 189, 2418, 4167, 1066, 473, 1183, 3246, 4365, 4342, 3375, 124, 1260, 2084, 1388, 4358, 2360, 4481, 2321, 3223, 4032, 3122, 4067, 240, 3473, 3310, 4345};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 164;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int nlow = 2999;
    int nhigh = 3000;
    vector<int> x = {37, 69, 427, 300, 250, 207, 249, 167, 268, 155, 269, 429, 25, 426, 336, 375, 377, 70, 449, 27, 15, 471, 305, 473, 459, 373, 26, 477, 56, 265, 159, 147, 388, 322, 279, 363, 85, 416, 274, 234};
    vector<int> y = {1357, 39190, 22431, 47229, 51305, 49481, 42419, 30300, 6498, 25260, 35418, 36174, 50327, 26174, 31395, 33479, 16009, 46209, 41190, 10372, 328, 4214, 5264, 15070, 54431, 45406, 7188, 12334, 14049, 40223, 34500, 37207, 44419, 48026, 17481, 53308, 8452, 3294, 19290, 24202};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 124;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {6123, 2189, 8486, 8121, 8294, 3248, 9026, 7389, 7227, 4060, 1080, 5352, 4153, 7282, 9357, 2045, 7211, 9065, 3187, 14, 3023, 7350, 8106, 6299, 9166, 4117, 6402, 2362, 1041, 1310, 3209, 1454, 9311, 6264, 157, 4411, 3475, 414, 7462, 8392};
    vector<int> y = {4237, 4146, 6097, 1125, 3176, 4417, 1058, 6160, 7310, 1158, 1333, 4153, 6140, 416, 3204, 6103, 4135, 2436, 1453, 7227, 6002, 3239, 4050, 6045, 6102, 5417, 1349, 5442, 6389, 2060, 5155, 184, 7252, 492, 3460, 2371, 2266, 6457, 2260, 5251};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 228;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int nlow = 999;
    int nhigh = 1001;
    vector<int> x = {6114, 6281, 6335, 4426, 3441, 117, 1344, 439, 3489, 2255, 3252, 416, 3206, 2351, 5144, 5059, 184, 2194, 3053, 2002, 209, 2132, 5462, 1374, 5220, 1293, 4190, 6060, 4333, 3477, 2120, 4283, 6355, 280, 5138, 1180, 1069, 4093, 5355};
    vector<int> y = {4363, 1161, 2130, 3046, 2335, 2244, 5206, 5448, 1382, 4248, 5313, 3394, 3474, 2442, 4472, 449, 108, 5137, 34, 1470, 4012, 342, 1143, 289, 2116, 3195, 4269, 164, 491, 4458, 3457, 2345, 5492, 1227, 5018, 4325, 2153, 5457, 3215};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 95;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int nlow = 999;
    int nhigh = 1000;
    vector<int> x = {3028, 5480, 177, 3327, 3399, 1022, 1272, 3184, 2033, 3125, 4134, 5369, 2014, 1011, 1005, 3395, 324, 359, 5254, 2365, 2113, 5353, 4175, 4042, 1140, 447, 247, 5027, 2146, 1348, 5435, 4166, 4436, 4162, 2221, 106};
    vector<int> y = {3164, 5392, 2419, 5288, 1082, 1239, 5253, 422, 189, 2471, 3401, 188, 2460, 464, 2327, 4175, 3118, 5478, 3207, 3068, 5206, 4449, 5026, 2136, 4408, 1067, 4004, 1488, 4166, 3341, 2075, 248, 4400, 1143, 1494, 83};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 85;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {4076, 7347, 5491, 4086, 6022, 1308, 4150, 3369, 8242, 1387, 1236, 4261, 7215, 3165, 5441, 4277, 8113, 8287, 262, 5136, 6251, 1286, 6136, 1300, 6021, 2357, 7356, 3131, 8321, 3011, 2291, 6050, 34, 1480, 2150, 7283, 5319, 481, 8497, 8022};
    vector<int> y = {6289, 2329, 7179, 7196, 2197, 1238, 8262, 3327, 5056, 2332, 367, 1037, 5335, 1190, 1089, 5105, 3446, 2291, 7150, 5241, 7323, 4262, 1155, 5300, 3429, 5348, 317, 310, 8104, 2341, 8102, 5481, 8151, 3280, 159, 4251, 8349, 6025, 7356, 1226};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 205;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {1106, 2167, 3379, 3180, 1119, 2211, 440, 1151, 1110, 3138, 189, 4472, 3292, 1381, 3144, 2487, 394, 2171, 4176, 268, 4163, 3333, 1210, 4449, 304, 1419, 298, 2260, 1253, 2412, 492, 500, 2060, 2403, 4135, 3109, 4151, 1007, 60, 4381};
    vector<int> y = {7168, 15013, 3486, 15130, 4451, 14090, 15090, 16334, 12226, 5097, 5124, 7173, 16398, 3236, 8195, 17203, 14187, 9386, 9268, 16339, 13407, 6439, 1043, 16454, 17342, 447, 13485, 12280, 15049, 292, 372, 9483, 6161, 11105, 12139, 7254, 11128, 2456, 2374, 404};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 180;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int nlow = 2999;
    int nhigh = 3000;
    vector<int> x = {97, 256, 69, 74, 330, 436, 275, 324, 77, 191, 435, 176, 417, 447, 273, 285, 191, 152, 70, 306, 140, 377, 83, 353, 490, 152, 406, 193, 350, 194, 483, 79, 261, 367, 458, 339, 238, 413, 272, 176};
    vector<int> y = {34261, 43227, 17040, 15095, 14468, 21498, 25074, 47255, 12498, 16197, 10072, 30077, 45254, 26012, 32353, 31219, 54434, 29191, 18244, 9329, 24024, 36156, 40003, 53450, 37284, 19028, 48082, 20264, 2374, 50169, 46201, 44407, 5409, 42371, 4450, 41029, 11256, 372, 1123, 3112};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 130;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int nlow = 1999;
    int nhigh = 2000;
    vector<int> x = {8285, 1242, 9050, 8071, 7460, 3421, 3350, 4482, 8414, 4224, 7487, 2359, 6018, 3472, 1455, 5478, 7020, 9469, 1174, 3426, 1120, 9204, 5080, 6092, 2063, 1074, 138, 4197, 2450, 2264, 6376, 9332, 3436, 4296, 8463, 6303, 2397, 2079, 3461, 8080};
    vector<int> y = {1093, 6322, 7209, 2087, 7488, 121, 7130, 7054, 7395, 1104, 5219, 2394, 4211, 3178, 443, 2451, 6418, 380, 5375, 1064, 4135, 5483, 143, 7206, 4281, 1360, 4161, 3061, 5, 5078, 3187, 3170, 6211, 6226, 4439, 6394, 6357, 1169, 5195, 3287};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 201;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int nlow = 999;
    int nhigh = 1000;
    vector<int> x = {2063, 1024, 4016, 3342, 3120, 3148, 2149, 1337, 2177, 3457, 4237, 4393, 5297, 2219, 1246, 64, 345, 1183, 3181, 244, 2053, 3110, 2435, 245, 1174, 5292, 4232, 5047, 5438, 4440, 1313, 4105, 3031, 1310, 2322, 333, 399, 231, 4202};
    vector<int> y = {1458, 1487, 1245, 279, 2152, 6293, 3307, 4247, 109, 4284, 4375, 3079, 1158, 6149, 6313, 6342, 5320, 3401, 1282, 4078, 4006, 3057, 5048, 1364, 5004, 2131, 5393, 5244, 166, 6290, 2459, 56, 5292, 403, 2260, 2390, 3395, 103, 2134};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 94;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int nlow = 999;
    int nhigh = 1000;
    vector<int> x = {5435, 2178, 3288, 337, 4358, 5009, 2168, 3193, 3233, 1075, 433, 2301, 338, 5153, 5192, 4102, 4292, 2164, 1283, 3135, 2002, 3183, 5303, 4010, 2293, 1264, 4321, 332, 4466, 354, 1466, 5276, 1438, 154, 1423, 3306};
    vector<int> y = {2332, 4191, 1100, 127, 3243, 1445, 5491, 3293, 5119, 1013, 3341, 3153, 1026, 5480, 3177, 2144, 5151, 363, 4401, 2036, 2323, 361, 319, 69, 1371, 2282, 1171, 2126, 4118, 4428, 157, 4117, 3391, 5035, 5080, 4452};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 82;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {4203, 1324, 6267, 8218, 1377, 99, 5112, 6244, 4442, 5233, 2191, 4282, 6275, 2090, 6488, 298, 427, 8228, 170, 7101, 7084, 2366, 8138, 4108, 5, 7386, 2065, 3414, 2295, 8170, 359, 4380, 5245, 3313, 7078, 1394, 1155, 1001, 3086, 6401};
    vector<int> y = {5359, 2208, 1078, 1425, 7091, 239, 2330, 6159, 3195, 5353, 2469, 4042, 3469, 4047, 5389, 3460, 4280, 480, 5326, 2194, 193, 1366, 3205, 1102, 6359, 5416, 7088, 5042, 8309, 8397, 2127, 61, 4, 3144, 3368, 3070, 1444, 368, 4183, 4386};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 239;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {9032, 2398, 15140, 3009, 15134, 5027, 1383, 6106, 3097, 5204, 13069, 15009, 39, 13467, 5111, 5437, 10172, 10323, 8435, 14427, 10255, 3216, 4303, 10203, 3134, 16417, 4164, 11382, 9223, 2049, 14366, 13031, 12055, 37, 261, 13289, 12433, 17163, 16122, 12337};
    vector<int> y = {3479, 4077, 4197, 3487, 3308, 1064, 3389, 3285, 1434, 2242, 2343, 2163, 2448, 1378, 4296, 412, 3011, 308, 3338, 2015, 2340, 24, 3486, 1036, 4493, 1428, 4198, 53, 1156, 388, 4131, 4092, 4481, 287, 3431, 79, 337, 4382, 2094, 3471};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 166;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int nlow = 3000;
    int nhigh = 3000;
    vector<int> x = {277, 215, 81, 45, 211, 372, 131, 37, 122, 179, 458, 416, 63, 408, 390, 50, 128, 120, 340, 199, 214, 310, 218, 109, 193, 289, 327, 106, 262, 205, 318, 177, 156, 98, 336, 486, 77, 237, 283, 461};
    vector<int> y = {12257, 20110, 19225, 39161, 43274, 38121, 49148, 10338, 47383, 7018, 36333, 33396, 42, 1370, 22040, 51194, 45311, 35402, 27327, 26255, 15203, 13314, 18208, 6281, 23347, 14135, 32129, 8398, 25326, 31311, 9416, 16122, 4155, 54436, 34497, 41385, 37199, 50102, 30354, 48389};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 134;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {461, 7138, 1453, 5329, 5219, 2464, 1209, 255, 2358, 4047, 6260, 7067, 3094, 6319, 83, 3177, 2052, 4380, 3269, 1084, 3479, 4025, 7252, 5484, 414, 2146, 6451, 2451, 3276, 3147, 1100, 2460, 5434, 3350, 145, 7374, 5342, 212, 3298, 1233};
    vector<int> y = {6330, 8452, 9441, 7348, 5334, 4400, 6268, 8032, 7139, 9168, 426, 9104, 380, 4263, 3142, 7118, 6194, 8285, 8377, 8326, 3005, 5071, 7135, 9189, 1073, 2420, 7225, 3300, 9127, 1387, 3010, 88, 1397, 5431, 5168, 3385, 6433, 9313, 4411, 4394};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 219;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int nlow = 1000;
    int nhigh = 1000;
    vector<int> x = {5394, 3355, 3433, 5401, 5401, 1286, 1121, 3382, 120, 455, 4460, 1261, 5367, 1471, 6099, 275, 36, 6035, 52, 3346, 274, 6108, 2399, 1216, 6264, 4454, 4412, 3117, 2441, 6365, 4175, 5163, 4333, 5413, 2017, 2076, 2410, 4420, 2121};
    vector<int> y = {1010, 4337, 5489, 5373, 25, 1023, 2325, 3413, 3266, 5399, 1150, 4178, 2096, 169, 3158, 4206, 1355, 2119, 2353, 2326, 372, 1104, 391, 3008, 5314, 3098, 369, 190, 1250, 4381, 4200, 4359, 2314, 3265, 5215, 2443, 4233, 5315, 3353};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 87;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int nlow = 1000;
    int nhigh = 1000;
    vector<int> x = {4275, 4179, 1292, 1304, 1300, 3181, 4483, 5249, 5345, 176, 1324, 359, 5325, 4205, 4339, 2227, 5096, 3395, 2054, 3486, 112, 2359, 1323, 3319, 5186, 4055, 222, 3443, 3419, 2092, 1236, 2365, 462, 5263, 12, 2180};
    vector<int> y = {1141, 432, 5056, 57, 3037, 1237, 2141, 4086, 7, 2, 1210, 3434, 5056, 3218, 5243, 5406, 1331, 3476, 366, 2207, 1061, 4331, 2028, 61, 3148, 4241, 5086, 5437, 4222, 1393, 4088, 3144, 4218, 2388, 2372, 2130};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 79;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {7298, 3313, 8172, 2182, 4108, 6152, 5138, 6183, 1004, 6201, 135, 6339, 2213, 6448, 4327, 7130, 8351, 6086, 5173, 3307, 7219, 8081, 7096, 7336, 4082, 94, 1289, 8141, 8029, 7407, 5361, 5290, 3481, 2060, 6264, 8124, 2236, 7483, 4311, 329};
    vector<int> y = {4004, 3291, 296, 6457, 1310, 165, 1108, 4477, 3336, 2233, 5295, 3016, 5331, 6478, 5429, 3210, 7023, 7342, 7089, 1176, 8157, 4328, 7134, 2267, 4174, 100, 4459, 8278, 2206, 375, 4205, 2150, 5183, 234, 5473, 1057, 2260, 5303, 410, 8014};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 238;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {2257, 160, 1162, 2369, 3306, 447, 1054, 4429, 3336, 2200, 1195, 1308, 4251, 1285, 3415, 4238, 2366, 4440, 2489, 498, 3241, 4360, 471, 4467, 100, 4327, 112, 2179, 2252, 38, 2001, 3307, 3140, 1228, 1418, 408, 3356, 317, 3104, 4174};
    vector<int> y = {13371, 3368, 17499, 461, 13024, 16121, 16134, 32, 5051, 16311, 9279, 14324, 3319, 3430, 10326, 5387, 15161, 9273, 9373, 8273, 9148, 17025, 15020, 8446, 5280, 10089, 14406, 6111, 12079, 2080, 11312, 6068, 15437, 2270, 286, 10178, 16357, 466, 1107, 7033};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 184;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int nlow = 3000;
    int nhigh = 3000;
    vector<int> x = {21246, 47008, 49122, 53060, 14182, 41048, 15342, 32265, 9197, 54495, 52078, 31140, 26079, 3001, 36249, 38186, 1334, 37087, 17037, 23314, 20233, 30355, 45073, 39106, 35106, 16042, 2046, 34417, 25414, 43043, 5202, 48240, 4414, 18363, 42433, 29396, 44406, 22402, 6206, 50459};
    vector<int> y = {132, 212, 342, 243, 398, 19, 265, 396, 162, 115, 59, 238, 15, 336, 149, 2, 277, 351, 176, 335, 128, 310, 439, 253, 265, 479, 207, 479, 362, 316, 493, 144, 493, 87, 193, 239, 412, 439, 118, 8};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 132;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {2202, 493, 7496, 7077, 367, 4131, 6127, 3060, 3003, 6075, 5474, 7063, 5149, 2039, 3163, 447, 9294, 2144, 7072, 9419, 6228, 1067, 9155, 1398, 4448, 3476, 1302, 1258, 8089, 1455, 1272, 9039, 1280, 8441, 6058, 227, 3230, 6304, 2046, 5366};
    vector<int> y = {73, 3376, 295, 3064, 136, 4428, 1369, 4422, 3036, 7455, 5320, 7071, 7318, 4277, 2272, 5414, 1240, 6252, 6093, 243, 5223, 1277, 7109, 4433, 497, 1242, 2368, 7113, 4300, 6246, 3471, 5481, 5372, 1379, 2284, 2279, 7169, 4189, 5356, 2252};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 237;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int nlow = 1000;
    int nhigh = 1000;
    vector<int> x = {1152, 406, 3477, 1106, 5218, 1308, 3172, 2479, 3203, 5330, 2023, 5352, 246, 5047, 120, 2006, 5133, 4111, 1025, 2183, 4358, 4348, 3369, 1192, 2055, 2002, 178, 4142, 5141, 4249, 5133, 3319, 461, 3407, 2217, 126, 4114, 436, 1223};
    vector<int> y = {382, 3003, 4011, 6154, 2304, 4448, 470, 3148, 1188, 3054, 1495, 1179, 113, 5198, 6358, 410, 4037, 6467, 1280, 5384, 2147, 5227, 3227, 2195, 2251, 4085, 2377, 183, 6461, 3114, 30, 2175, 4099, 6137, 6314, 1061, 4412, 5333, 3399};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 95;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int nlow = 1000;
    int nhigh = 1000;
    vector<int> x = {2348, 389, 4286, 99, 1075, 3101, 2319, 4040, 5424, 2433, 4484, 40, 2295, 1326, 3088, 322, 5136, 2233, 3130, 4288, 1219, 221, 5020, 5394, 3291, 4286, 1457, 1136, 3227, 3219, 1105, 49, 5385, 2010, 5322, 4248};
    vector<int> y = {5334, 3416, 2410, 5203, 4171, 154, 2170, 5295, 4120, 4219, 265, 1492, 3090, 3162, 1089, 4083, 1334, 376, 4009, 1052, 445, 2278, 2169, 5261, 2422, 3244, 5235, 2366, 5323, 3186, 1093, 274, 418, 1153, 3336, 4370};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 81;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {6354, 8483, 2185, 5083, 1487, 3239, 1283, 199, 8068, 326, 7134, 6200, 2394, 2085, 5323, 1129, 4416, 1335, 4419, 1462, 8407, 1417, 2180, 4323, 4087, 4136, 3401, 4125, 6446, 3191, 3094, 403, 80, 6436, 8407, 2384, 418, 4174, 283, 5171};
    vector<int> y = {346, 6490, 7355, 4238, 8323, 1249, 6356, 8013, 7436, 3391, 149, 7212, 5278, 8177, 5218, 218, 2324, 2456, 5385, 4470, 4363, 3500, 6365, 1494, 4352, 3181, 70, 6221, 3141, 2023, 6051, 5214, 1410, 6093, 8440, 3264, 6477, 328, 2491, 2311};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 247;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {3203, 227, 141, 1184, 492, 471, 3398, 2335, 2175, 1142, 3388, 4040, 2043, 2397, 2220, 454, 4499, 1097, 1475, 2387, 1066, 4053, 236, 2184, 1464, 4135, 382, 4389, 4083, 4020, 4499, 3253, 188, 1265, 2127, 3218, 1, 1138, 4482, 1025};
    vector<int> y = {6086, 12059, 2245, 5032, 6061, 63, 4128, 11285, 14100, 13383, 8236, 7494, 15235, 7060, 12213, 1374, 17418, 11255, 6129, 6470, 9162, 2223, 4388, 4025, 1297, 95, 17027, 9242, 3481, 11442, 13199, 10077, 9146, 14449, 9304, 13358, 14421, 3475, 10292, 7272};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 172;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int nlow = 3000;
    int nhigh = 3000;
    vector<int> x = {50080, 47183, 8025, 34169, 10360, 28231, 52408, 15439, 9038, 32147, 33255, 29361, 14005, 20168, 26021, 49072, 251, 23337, 45250, 39079, 24432, 4160, 46369, 7358, 43358, 19332, 31490, 2316, 18208, 3344, 27400, 16203, 25202, 21135, 6404, 48499, 1410, 37259, 44467, 36022};
    vector<int> y = {20, 92, 415, 206, 412, 166, 453, 241, 88, 386, 408, 240, 343, 220, 291, 290, 245, 492, 218, 447, 291, 463, 298, 332, 376, 262, 299, 312, 370, 361, 302, 256, 374, 232, 416, 367, 463, 60, 16, 188};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 138;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int nlow = 2000;
    int nhigh = 2000;
    vector<int> x = {4243, 4450, 15, 8402, 7025, 7176, 5352, 2162, 3023, 3294, 105, 8455, 9149, 6066, 385, 4478, 7412, 9444, 3006, 6257, 4316, 1490, 8209, 3025, 7440, 1383, 2459, 3039, 4184, 6242, 7140, 9200, 8089, 4362, 1265, 2139, 9017, 6481, 2154, 1173};
    vector<int> y = {5238, 2357, 1401, 6478, 7489, 1479, 5387, 6432, 1373, 7399, 2294, 1005, 4376, 4158, 6005, 4420, 3135, 1495, 6176, 2017, 6154, 1373, 450, 2214, 6385, 7383, 7022, 5347, 1484, 6095, 5411, 3006, 5114, 3188, 2095, 3006, 7059, 3204, 2001, 4401};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 222;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int nlow = 1000;
    int nhigh = 1000;
    vector<int> x = {4168, 1144, 445, 2159, 4344, 2013, 2011, 46, 3290, 1339, 5113, 1176, 1388, 3403, 5273, 5328, 2493, 3475, 1294, 123, 4499, 349, 3287, 5405, 4134, 3402, 2237, 4114, 1240, 4304, 2323, 5161, 2469, 1475, 5365, 225, 24, 22, 4416};
    vector<int> y = {4148, 419, 6279, 5258, 6490, 1189, 6171, 5254, 6476, 3181, 5159, 4442, 5198, 2093, 4119, 1207, 2193, 1307, 1096, 2192, 3280, 4341, 5093, 3154, 175, 3120, 3036, 5087, 2458, 2454, 4467, 272, 242, 6159, 2461, 272, 1305, 3436, 1116};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 93;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int nlow = 1000;
    int nhigh = 1000;
    vector<int> x = {445, 3031, 2124, 1318, 1470, 4022, 5317, 3229, 3383, 97, 2474, 4088, 343, 19, 3286, 3218, 1435, 5467, 2294, 4161, 5136, 3222, 2312, 4095, 1062, 4453, 5471, 2217, 4327, 1178, 2410, 5168, 375, 1042, 436, 5026};
    vector<int> y = {3353, 61, 5384, 3106, 1107, 3039, 3090, 1493, 2410, 1217, 2056, 5040, 2226, 5349, 4488, 3358, 4327, 4153, 4102, 58, 113, 5069, 170, 2424, 5465, 1250, 2258, 1484, 4463, 2127, 3306, 1460, 4045, 62, 39, 5497};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 84;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int nlow = 358778;
    int nhigh = 2017807;
    vector<int> x = {3019388, 84806, 2260541, 3601763, 6077402, 8133710, 3713683, 2448094, 9920531, 5355610, 4978949, 3824875, 1209735, 5613745, 8890814, 5387780, 7914153, 2571819, 101964, 9931960, 5612928, 7942692, 5484127, 2934896, 7364540, 622243, 9195103, 669495, 9580818, 1997734, 5920641, 2032989, 8715623, 9734024, 877291, 1457905, 6404354, 6120403, 8060356, 1630653};
    vector<int> y = {153501, 295037, 374849, 327777, 106436, 306484, 490218, 99234, 351146, 39305, 284495, 366674, 243807, 84848, 43830, 248968, 445277, 58089, 54580, 70832, 156324, 113807, 190884, 90408, 154265, 116150, 232415, 64945, 439769, 128538, 176966, 161994, 371779, 426554, 218139, 42948, 304382, 472585, 319556, 114916};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 849;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int nlow = 377430;
    int nhigh = 2077000;
    vector<int> x = {8345775, 8059930, 4911747, 1143731, 5031474, 362012, 33723, 3711665, 3455752, 681374, 6035807, 2944278, 5007557, 1460068, 4817227, 645583, 240064, 3848408, 8384942, 5542301, 8406645, 1378752, 3347145, 2917949, 7177738, 1437110, 182308, 6995247, 6196869, 5482533, 4128951, 9336677, 4575942, 8513760, 8373691, 539506, 9433241, 7220835, 3440483, 1030124};
    vector<int> y = {304704, 44250, 168718, 377637, 133978, 66711, 333254, 496812, 226771, 115787, 174296, 350437, 343508, 113754, 236024, 95686, 104370, 370399, 369651, 317879, 201440, 49857, 314173, 397686, 481067, 358744, 309037, 34236, 97009, 95727, 487688, 13892, 12657, 446177, 409391, 31693, 391971, 323565, 427287, 443780};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 877;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int nlow = 369465;
    int nhigh = 1769302;
    vector<int> x = {259415, 456600, 357415, 345677, 126022, 448754, 317457, 281516, 74904, 449834, 207849, 154411, 279378, 41371, 366926, 194335, 422146, 371911, 95068, 130085, 234307, 83042, 52681, 202336, 362211, 205794, 53433, 83633, 244082, 398233, 179100, 148279, 166379, 412139, 467468, 472615, 463120, 350569, 482139, 443450};
    vector<int> y = {3335878, 9948670, 7912953, 5148437, 4247164, 7917441, 5745666, 2941941, 1124129, 5781651, 4428641, 1324626, 5601246, 1427657, 564699, 4002187, 6796507, 2673999, 3837438, 3848452, 1832031, 5839378, 212647, 3464819, 1011986, 9023460, 2790408, 472289, 2158170, 3076261, 9892935, 7524777, 9933134, 5234121, 3401788, 4376245, 2674950, 1706339, 8900685, 262064};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 894;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int nlow = 343316;
    int nhigh = 1936498;
    vector<int> x = {6623648, 8882715, 384522, 1110971, 4701355, 1009471, 4566776, 7973879, 4456980, 239424, 921164, 3535706, 6511532, 1011748, 3800140, 4383724, 1976121, 4265055, 2850116, 5143362, 5360162, 8504092, 5926021, 2278121, 8961213, 6634123, 4682850, 6978111, 6553259, 6755489, 9669516, 4069321, 9375600, 1225106, 6967289, 752948, 3416610, 7792659, 1599208, 3327949};
    vector<int> y = {373589, 423787, 248695, 341268, 485410, 232780, 342564, 385428, 54244, 374486, 454464, 298785, 75786, 225620, 163319, 205446, 338273, 397560, 469422, 167478, 111687, 358401, 482273, 89850, 95153, 408940, 125181, 255685, 296763, 135395, 493685, 476350, 152833, 270675, 271957, 344578, 305005, 245420, 442375, 69600};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 885;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int nlow = 323386;
    int nhigh = 1896497;
    vector<int> x = {480058, 7725801, 4911327, 8233421, 8148239, 2666817, 1641316, 3066378, 6906192, 9407513, 1027758, 4257859, 1105634, 3047030, 7721865, 327556, 8059181, 5161184, 1399453, 2868889, 603975, 4362996, 7393193, 2212056, 1903425, 9621767, 8105743, 7576860, 5773781, 8021131, 9249416, 949396, 650942, 1839804, 9622298, 8367794, 5743675, 9164063, 3983690, 3393050};
    vector<int> y = {68212, 76971, 224443, 73485, 340587, 175810, 305148, 138203, 181723, 256108, 240084, 349308, 252245, 225099, 71694, 26886, 168819, 32761, 449438, 379533, 73607, 302660, 166830, 422306, 267674, 224565, 426377, 403088, 309617, 23553, 296567, 5912, 301968, 287144, 267869, 181628, 294785, 185708, 227509, 395897};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 853;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int nlow = 362163;
    int nhigh = 1966511;
    vector<int> x = {525668, 4628317, 3282949, 4991169, 3071296, 6700490, 8209723, 7527712, 1000850, 2967964, 863370, 1618630, 7896529, 3465818, 5690382, 5109816, 5593695, 1372188, 21496, 8461042, 4859408, 2230669, 9908319, 3627184, 9638377, 989152, 2548088, 7004281, 5116215, 2296554, 6899493, 66280, 9052853, 8051258, 739142, 4282856, 8232334, 6182706, 3085191, 2936779};
    vector<int> y = {345158, 22090, 407495, 393683, 132687, 429523, 208062, 363235, 430675, 95587, 228343, 480888, 269816, 285923, 121318, 67360, 370890, 121176, 413730, 37870, 282897, 451283, 270048, 46825, 459576, 162899, 326919, 75622, 175902, 134119, 76925, 489459, 73800, 221122, 275212, 221957, 215590, 358501, 262165, 359779};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 836;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int nlow = 402770;
    int nhigh = 2009962;
    vector<int> x = {4280372, 7055198, 1992333, 7692533, 1904557, 4596210, 3699601, 1351449, 3933205, 8415832, 8610812, 9995695, 1002658, 5607324, 496122, 1435419, 2661428, 9932348, 5045236, 5022239, 5097057, 4894851, 7740198, 7211628, 1135187, 7366784, 3364973, 8880730, 3141215, 7594560, 813752, 8730752, 8581724, 1604375, 9812612, 4376144, 3712482, 1048988, 6956371, 4246198};
    vector<int> y = {137829, 13199, 468377, 237424, 299132, 446009, 5145, 388617, 26569, 39744, 127834, 42752, 203447, 20206, 172669, 103145, 210040, 89389, 49490, 64573, 172838, 253786, 442938, 402150, 384118, 206872, 394336, 445522, 489411, 222196, 14704, 389576, 23146, 466144, 381412, 41732, 17933, 369874, 333224, 175924};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 866;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int nlow = 394021;
    int nhigh = 1876811;
    vector<int> x = {2811889, 5840614, 8845696, 8012242, 7209098, 6907862, 4553201, 8090631, 5261431, 7585784, 500519, 4688312, 3057042, 9046157, 4996722, 9511538, 4013620, 8604237, 2318341, 8172527, 5177554, 1604574, 1378824, 7138242, 9594326, 8388120, 7584316, 1201928, 9761867, 292496, 3809238, 2895820, 8959253, 2248612, 895289, 9037816, 6422118, 5446593, 7265207, 896442};
    vector<int> y = {303112, 448489, 106030, 220683, 50359, 55462, 101733, 22758, 492693, 214160, 237416, 159178, 442016, 142052, 386132, 143787, 446364, 420103, 54073, 368849, 315068, 224683, 239069, 444424, 458835, 288938, 482193, 304718, 46675, 450540, 137346, 191442, 239568, 191173, 304034, 116746, 198563, 274504, 484416, 26233};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 882;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int nlow = 366189;
    int nhigh = 1668540;
    vector<int> x = {9656283, 3308965, 5188281, 1197891, 4121107, 4046373, 4798404, 1932606, 777225, 7638398, 6466944, 7677870, 2784802, 4434605, 2303349, 5164593, 5542885, 6434968, 8140238, 1182186, 4476654, 47653, 3329595, 4824855, 2084613, 2851493, 8510148, 6604309, 3476744, 4403014, 3563812, 7282212, 6579646, 4515616, 100868, 3042018, 3194955, 8057371, 321507, 8818602};
    vector<int> y = {484626, 139471, 327687, 213960, 55092, 200752, 401549, 13135, 33570, 78340, 434501, 109941, 280914, 75648, 133436, 269921, 357485, 174545, 491660, 145912, 365687, 252785, 371829, 438174, 181821, 438726, 148617, 121182, 447490, 99987, 287372, 316267, 379877, 67699, 480589, 74171, 201577, 313496, 107369, 302200};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 907;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int nlow = 343891;
    int nhigh = 1718572;
    vector<int> x = {684438, 9020729, 1351926, 5849820, 6638654, 2836380, 4852629, 8793432, 8038203, 8214299, 5324459, 278840, 7856158, 8832350, 2567187, 2858167, 8699854, 4525769, 6846601, 3260708, 7589813, 7209144, 7830531, 4110181, 3322298, 9138924, 4910488, 7615937, 7488558, 3025481, 1117808, 8194775, 1595522, 7757936, 3106362, 2793572, 35338, 2225821, 8414112, 2527032};
    vector<int> y = {232894, 63233, 91995, 447448, 370548, 126917, 163108, 205584, 322440, 419021, 273083, 363411, 102524, 440119, 39468, 202914, 272955, 372581, 368652, 186688, 236175, 70796, 219775, 435968, 487625, 390413, 475386, 333429, 289667, 496821, 449394, 391940, 149590, 362661, 261980, 470808, 99457, 249065, 304163, 51507};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 936;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int nlow = 10906;
    int nhigh = 58699;
    vector<int> x = {13683, 95103, 13745, 33710, 42692, 77291, 80818, 69495, 84127, 20531, 20641, 15623, 78949, 32989, 97734, 34896, 9735, 55610, 1964, 24875, 31960, 90814, 22243, 48094, 71819, 60541, 12928, 84806, 1763, 34024, 57905, 87780, 60356, 30653, 4354, 19388, 14153, 77402, 64540, 20403};
    vector<int> y = {90218, 32415, 84848, 6484, 13807, 18139, 39769, 64945, 90884, 51146, 76966, 71779, 84495, 61994, 28538, 90408, 43807, 39305, 54580, 66674, 70832, 43830, 16150, 99234, 58089, 74849, 56324, 95037, 27777, 26554, 42948, 48968, 19556, 14916, 4382, 53501, 45277, 6436, 54265, 72585};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3208;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int nlow = 9998;
    int nhigh = 58717;
    vector<int> x = {9391, 96812, 15787, 43508, 91971, 33978, 74296, 23565, 97686, 12657, 58744, 87688, 44250, 26771, 27287, 31693, 9037, 50437, 13754, 13892, 36024, 4704, 66711, 70399, 95686, 14173, 77637, 49857, 17879, 68718, 97009, 95727, 34236, 4370, 33254, 81067, 43780, 1440, 69651, 46177};
    vector<int> y = {73691, 11665, 81374, 7557, 33241, 31474, 35807, 20835, 17949, 75942, 37110, 28951, 59930, 55752, 40483, 39506, 82308, 44278, 60068, 36677, 17227, 45775, 62012, 48408, 45583, 47145, 43731, 78752, 42301, 11747, 96869, 82533, 95247, 40064, 33723, 77738, 30124, 6645, 84942, 13760};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3255;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int nlow = 10460;
    int nhigh = 52713;
    vector<int> x = {24626, 1246, 64699, 23460, 28641, 12647, 6339, 685, 41941, 96507, 33134, 39378, 76245, 81651, 90408, 17441, 24777, 45666, 24129, 48437, 73999, 74950, 1788, 64819, 2187, 48670, 35878, 62064, 58170, 32031, 27657, 48452, 11986, 72289, 37438, 12953, 34121, 76261, 92935, 47164};
    vector<int> y = {54411, 79378, 66926, 5794, 7849, 52681, 50569, 82139, 81516, 22146, 66379, 83042, 72615, 49834, 53433, 48754, 48279, 17457, 74904, 45677, 71911, 63120, 67468, 2336, 94335, 56600, 59415, 43450, 44082, 34307, 41371, 30085, 62211, 83633, 95068, 57415, 12139, 98233, 79100, 26022};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3106;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int nlow = 10831;
    int nhigh = 57070;
    vector<int> x = {42375, 23787, 75786, 63319, 8940, 69600, 70675, 95153, 67478, 54244, 98785, 82273, 38273, 44578, 71957, 42564, 73589, 93685, 25620, 85428, 52833, 45420, 69422, 25181, 58401, 85410, 41268, 97560, 96763, 55685, 5446, 11687, 89850, 35395, 32780, 54464, 74486, 48695, 76350, 5005};
    vector<int> y = {99208, 82715, 11532, 140, 34123, 27949, 25106, 61213, 43362, 56980, 35706, 26021, 76121, 52948, 67289, 66776, 23648, 69516, 11748, 73879, 75600, 92659, 50116, 82850, 4092, 1355, 10971, 65055, 53259, 78111, 83724, 60162, 78121, 55489, 9471, 21164, 39424, 84522, 69321, 16610};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3202;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int nlow = 11169;
    int nhigh = 58927;
    vector<int> x = {32761, 87144, 38203, 49308, 67869, 2660, 26886, 25099, 9617, 66830, 68819, 96567, 23553, 26377, 40587, 73607, 56108, 75810, 95897, 76971, 73485, 49438, 67674, 1968, 5148, 79533, 40084, 71694, 24565, 81723, 5912, 3088, 85708, 94785, 68212, 52245, 27509, 81628, 22306, 24443};
    vector<int> y = {61184, 39804, 66378, 57859, 22298, 62996, 27556, 47030, 73781, 93193, 59181, 49416, 21131, 5743, 48239, 3975, 7513, 66817, 93050, 25801, 33421, 99453, 3425, 50942, 41316, 68889, 27758, 21865, 21767, 6192, 49396, 76860, 64063, 43675, 80058, 5634, 83690, 67794, 12056, 11327};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3093;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int nlow = 48;
    int nhigh = 95770;
    vector<int> x = {13683, 95103, 13745, 33710, 42692, 77291, 80818, 69495, 84127, 20531, 20641, 15623, 78949, 32989, 97734, 34896, 9735, 55610, 1964, 24875, 31960, 90814, 22243, 48094, 71819, 60541, 12928, 84806, 1763, 34024, 57905, 87780, 60356, 30653, 4354, 19388, 14153, 77402, 64540, 20403};
    vector<int> y = {90218, 32415, 84848, 6484, 13807, 18139, 39769, 64945, 90884, 51146, 76966, 71779, 84495, 61994, 28538, 90408, 43807, 39305, 54580, 66674, 70832, 43830, 16150, 99234, 58089, 74849, 56324, 95037, 27777, 26554, 42948, 48968, 19556, 14916, 4382, 53501, 45277, 6436, 54265, 72585};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7492;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int nlow = 82;
    int nhigh = 95569;
    vector<int> x = {9391, 96812, 15787, 43508, 91971, 33978, 74296, 23565, 97686, 12657, 58744, 87688, 44250, 26771, 27287, 31693, 9037, 50437, 13754, 13892, 36024, 4704, 66711, 70399, 95686, 14173, 77637, 49857, 17879, 68718, 97009, 95727, 34236, 4370, 33254, 81067, 43780, 1440, 69651, 46177};
    vector<int> y = {73691, 11665, 81374, 7557, 33241, 31474, 35807, 20835, 17949, 75942, 37110, 28951, 59930, 55752, 40483, 39506, 82308, 44278, 60068, 36677, 17227, 45775, 62012, 48408, 45583, 47145, 43731, 78752, 42301, 11747, 96869, 82533, 95247, 40064, 33723, 77738, 30124, 6645, 84942, 13760};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7194;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int nlow = 16;
    int nhigh = 95822;
    vector<int> x = {24626, 1246, 64699, 23460, 28641, 12647, 6339, 685, 41941, 96507, 33134, 39378, 76245, 81651, 90408, 17441, 24777, 45666, 24129, 48437, 73999, 74950, 1788, 64819, 2187, 48670, 35878, 62064, 58170, 32031, 27657, 48452, 11986, 72289, 37438, 12953, 34121, 76261, 92935, 47164};
    vector<int> y = {54411, 79378, 66926, 5794, 7849, 52681, 50569, 82139, 81516, 22146, 66379, 83042, 72615, 49834, 53433, 48754, 48279, 17457, 74904, 45677, 71911, 63120, 67468, 2336, 94335, 56600, 59415, 43450, 44082, 34307, 41371, 30085, 62211, 83633, 95068, 57415, 12139, 98233, 79100, 26022};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7400;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int nlow = 18;
    int nhigh = 97853;
    vector<int> x = {42375, 23787, 75786, 63319, 8940, 69600, 70675, 95153, 67478, 54244, 98785, 82273, 38273, 44578, 71957, 42564, 73589, 93685, 25620, 85428, 52833, 45420, 69422, 25181, 58401, 85410, 41268, 97560, 96763, 55685, 5446, 11687, 89850, 35395, 32780, 54464, 74486, 48695, 76350, 5005};
    vector<int> y = {99208, 82715, 11532, 140, 34123, 27949, 25106, 61213, 43362, 56980, 35706, 26021, 76121, 52948, 67289, 66776, 23648, 69516, 11748, 73879, 75600, 92659, 50116, 82850, 4092, 1355, 10971, 65055, 53259, 78111, 83724, 60162, 78121, 55489, 9471, 21164, 39424, 84522, 69321, 16610};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7525;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int nlow = 95;
    int nhigh = 95478;
    vector<int> x = {32761, 87144, 38203, 49308, 67869, 2660, 26886, 25099, 9617, 66830, 68819, 96567, 23553, 26377, 40587, 73607, 56108, 75810, 95897, 76971, 73485, 49438, 67674, 1968, 5148, 79533, 40084, 71694, 24565, 81723, 5912, 3088, 85708, 94785, 68212, 52245, 27509, 81628, 22306, 24443};
    vector<int> y = {61184, 39804, 66378, 57859, 22298, 62996, 27556, 47030, 73781, 93193, 59181, 49416, 21131, 5743, 48239, 3975, 7513, 66817, 93050, 25801, 33421, 99453, 3425, 50942, 41316, 68889, 27758, 21865, 21767, 6192, 49396, 76860, 64063, 43675, 80058, 5634, 83690, 67794, 12056, 11327};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7741;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int nlow = 31;
    int nhigh = 31;
    vector<int> x = {83, 3, 45, 10, 92, 91, 18, 95, 27, 31, 41, 23, 49, 89, 34, 96, 35, 10, 64, 75, 60, 14, 43, 94, 19, 41, 28, 6, 63, 24, 5, 80, 56, 53, 54, 88, 53, 2, 40, 3};
    vector<int> y = {18, 15, 48, 84, 7, 39, 69, 45, 84, 46, 66, 79, 95, 94, 38, 8, 7, 5, 80, 74, 32, 30, 50, 34, 89, 49, 24, 37, 77, 54, 48, 68, 56, 16, 82, 1, 77, 36, 65, 85};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 407;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int nlow = 27;
    int nhigh = 27;
    vector<int> x = {91, 12, 87, 8, 71, 78, 96, 65, 86, 57, 44, 88, 50, 71, 87, 93, 37, 37, 54, 92, 24, 4, 11, 99, 86, 73, 37, 57, 79, 18, 9, 27, 36, 70, 54, 67, 80, 40, 51, 77};
    vector<int> y = {91, 65, 74, 57, 41, 74, 7, 35, 49, 42, 10, 51, 30, 52, 83, 6, 8, 78, 68, 77, 27, 75, 12, 8, 83, 45, 31, 52, 1, 47, 69, 33, 47, 64, 23, 38, 24, 45, 42, 60};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 356;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int nlow = 27;
    int nhigh = 27;
    vector<int> x = {26, 46, 99, 60, 41, 47, 39, 85, 41, 7, 34, 78, 45, 51, 8, 41, 77, 66, 29, 37, 99, 50, 88, 19, 87, 70, 78, 64, 70, 31, 57, 52, 86, 89, 38, 53, 21, 61, 35, 64};
    vector<int> y = {11, 78, 26, 94, 49, 81, 69, 39, 16, 46, 79, 42, 15, 34, 33, 54, 79, 57, 4, 77, 11, 20, 68, 36, 35, 100, 15, 50, 82, 7, 71, 85, 11, 33, 68, 15, 39, 33, 100, 22};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 370;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int nlow = 31;
    int nhigh = 32;
    vector<int> x = {61, 44, 3, 8, 69, 60, 86, 99, 17, 30, 19, 67, 53, 77, 87, 7, 8, 10, 97, 71, 85, 38, 74, 68, 48, 33, 84, 94, 65, 23, 12, 88, 8, 85, 12, 45, 9, 28, 6, 43};
    vector<int> y = {84, 4, 78, 59, 98, 96, 56, 30, 81, 93, 81, 16, 31, 43, 39, 75, 13, 17, 50, 1, 21, 53, 25, 42, 16, 89, 58, 65, 67, 92, 96, 60, 63, 75, 58, 34, 90, 94, 56, 27};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 422;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int nlow = 3;
    int nhigh = 100000000;
    vector<int> x = {-1, -1, -1, 0, 1, 1, 1};
    vector<int> y = {-1, 0, 1, 1, -1, 0, 1};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int nlow = 5;
    int nhigh = 5;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int nlow = 64;
    int nhigh = 108;
    vector<int> x = {-56, -234, 12, 324, -12, 53, 0, 234, 1, 12, 72};
    vector<int> y = {6, 34, 2, 235, 234, 234, 342, 324, 234, 234, 234};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int nlow = 71234567;
    int nhigh = 91234567;
    vector<int> x = {11261625, -9593405, 23190875, 65645127, 45409342, 78231972, -80189968, 2837622, -46119817, 63624857, -75175625, 59229744, 39638550, -97709076, -44509219, -63247221, -23767583, -99769442, -70571804, -64210032, 48647478, 16917220, 62043679, -1062722, -9248126, 92484773, 3196602, -37026425, -10209336, -75879939, -18386512, 92454353, -38885600, 14439614, 73836115, -73780106, 83535157, 11293162, 27079880, -68182075};
    vector<int> y = {-36341306, 50612793, 70269064, 94623231, 8524326, -82561383, 26760928, 92794331, 15864252, -16694103, 98759025, 49869570, 88797828, -16933058, -56748367, -42828653, 94862220, -52659490, -64803736, -52965472, -25017480, -26292153, -98229196, -16116304, 39917310, -98685207, -19871226, -99193029, -42294933, 24646504, -22291293, 11527729, -60286692, 67372571, 45949475, -5901709, -55987706, -14012528, 3912309, 45417560};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1502;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int nlow = 5;
    int nhigh = 10;
    vector<int> x = {10, 20};
    vector<int> y = {10, 20};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int nlow = 4884456;
    int nhigh = 99988877;
    vector<int> x = {671736, 34123360, -65268087, -323418, -20728151, -31552715, -20669428, 30863120, 29472447, 29761906, 4912039, -8021606, -11364361, -30566719, -24460784, 17515640, -50052301, -53459725, 4877044, -63580336, -12485500, 21526448, 48360535, 46300400, 25544382, -1276228, -28076093, -30293249, 28546317, 22164918, 54371453, 1767227, 44588689, 32999575, -40193575, 6484597, 27116862, -65957919, -52885817, 1500463};
    vector<int> y = {943060, 60055882, -51803934, 33540499, -21581742, -43396190, 34765539, 26450324, 19424955, -37267403, 48622927, -33749755, -43908725, 31041754, -9954341, 55523047, -503409, -45143879, 52730424, 5333243, -15069655, -15848745, 1591684, 4875872, 2474271, -19068962, 65549197, 883739, -1073165, 2416587, 28767224, -47462545, -41286638, -2274649, -7797095, -54568023, 57194003, -20832404, -19906713, 4738623};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 6297;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int nlow = 1;
    int nhigh = 100;
    vector<int> x = {-5, 0, 5};
    vector<int> y = {0, 0, 0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int nlow = 3;
    int nhigh = 5;
    vector<int> x = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6};
    vector<int> y = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 182;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int nlow = 1;
    int nhigh = 2;
    vector<int> x = {0, 0, 0, 0, 0, -1, 1, 1, -1};
    vector<int> y = {0, 1, 2, -1, -2, 0, 0, 1, -1};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int nlow = 1000;
    int nhigh = 100000000;
    vector<int> x = {-56, -234, 12, 324, -12, 53, 0, 234, 1, 12, 72, 1000};
    vector<int> y = {6, 34, 2, 235, 234, 234, 342, 324, 234, 234, 234, -1000000};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int nlow = 1;
    int nhigh = 2;
    vector<int> x = {0, 0, 0, 0, 0, -1, 1, 1};
    vector<int> y = {0, 1, 2, -1, -2, 0, 0, 1};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int nlow = 1;
    int nhigh = 100000000;
    vector<int> x = {22193362, 51837241, 27146399, -77944015, -71693246, -15623980, -76826617, 79187215, -82697283, 73748311, 14374868, -35958996, 53374990, 64863234, 73868666, 28412242, 17748252, 640305, 82509017, -20204166, 63738315, 78419848, -60730360, -7393142, -20235793, -94425212, -27314212, 55465736, -2742536, -8918036, -83181901, -66043968, 26421529, -85009916, -65149470, -71823897, 56283634, -15389446, 80596665, -11930118};
    vector<int> y = {-42604999, 68673926, -65124985, -47793304, 82034585, -37122394, 93066353, -28390747, -388632, -52364315, -39750592, -90291315, 51398835, 24820647, 64933463, -41626373, -13958154, -55200085, 77082744, -55714085, 83431572, 32130649, -62276290, -89314199, 37452055, -81988912, 70328261, 93005273, -712456, -33177166, -25627602, -26635198, -65079092, 17588479, 71478745, -25476233, 238400, -19125704, 64523120, 5087216};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 2338;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int nlow = 40000000;
    int nhigh = 100000000;
    vector<int> x = {76000000, 82000000, 90000000, 96000000, 2000000, 8000000, 16000000, 22000000, 28000000, 36000000, 42000000, 48000000, 54000000, 62000000, 68000000, 74000000, 80000000, 88000000, 94000000, 0, 6000000, 14000000, 20000000, 26000000, 32000000, 40000000, 46000000, 52000000, 60000000, 66000000, 72000000, 78000000, 86000000, 92000000, 98000000, 4000000, 12000000, 18000000, 24000000, 30000000};
    vector<int> y = {38000000, 44000000, 50000000, 58000000, 64000000, 70000000, 76000000, 84000000, 90000000, 96000000, 2000000, 10000000, 16000000, 22000000, 28000000, 36000000, 42000000, 48000000, 56000000, 62000000, 68000000, 74000000, 82000000, 88000000, 94000000, 0, 8000000, 14000000, 20000000, 26000000, 34000000, 40000000, 46000000, 54000000, 60000000, 66000000, 72000000, 80000000, 86000000, 92000000};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7373;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int nlow = 2;
    int nhigh = 3;
    vector<int> x = {-5, -4, -3, -2, -1, 1, 2, 3, 4, 5, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5};
    vector<int> y = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 188;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int nlow = 1;
    int nhigh = 100000000;
    vector<int> x = {81692794, 14636933, 57747813, 24238340, 19885394, 49760509, 96516655, 89641433, 25202373, 50490041, 83368698, 2520071, 44897784, 67513946, 65180554, 40383442, 4089176, 3455750, 35005212, 21595374, 94702570, 26956447, 36465786, 61021539, 78722865, 33665126, 45174089, 68703140, 1513941, 1979821, 15634036, 35723065, 69133083, 25898179, 59961404, 89018477, 28175018, 56478059, 31176241, 53377390};
    vector<int> y = {46930895, 81692794, 14636933, 57747813, 24238340, 19885394, 49760509, 96516655, 89641433, 25202373, 50490041, 83368698, 2520071, 44897784, 67513946, 65180554, 40383442, 4089176, 3455750, 35005212, 21595374, 94702570, 26956447, 36465786, 61021539, 78722865, 33665126, 45174089, 68703140, 1513941, 1979821, 15634036, 35723065, 69133083, 25898179, 59961404, 89018477, 28175018, 56478059, 31176241};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7176;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int nlow = 1;
    int nhigh = 100000000;
    vector<int> x = {9711, 5760, 8896, 4667, 7285, 2550, 140, 3694, 2695, 1624, 8019, 2125, 6576, 1694, 2658, 6302, 7371, 2466, 4678, 2593, 3851, 5484, 1018, 8464, 1119, 3152, 2800, 8087, 1060, 1926, 9010, 4757, 2170, 315, 9576, 227, 2043, 2758, 7164, 5109};
    vector<int> y = {9711, 5760, 8896, 4667, 7285, 2550, 140, 3694, 2695, 1624, 8019, 2125, 6576, 1694, 2658, 6302, 7371, 2466, 4678, 2593, 3851, 5484, 1018, 8464, 1119, 3152, 2800, 8087, 1060, 1926, 9010, 4757, 2170, 315, 9576, 227, 2043, 2758, 7164, 5109};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 820;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int nlow = 1;
    int nhigh = 7;
    vector<int> x = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 5, 5, 5, 5};
    vector<int> y = {0, 1, 2, 3, 5, 0, 1, 2, 3, 5, 0, 1, 2, 3, 0, 1, 2, 3, 5, 4, 0, 1, 3, 5};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 203;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int nlow = 1;
    int nhigh = 100000000;
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 40, 38, 39};
    vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 40, 38, 39};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 820;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int nlow = 2;
    int nhigh = 100000000;
    vector<int> x = {-45709636, -7050789, 2964257, -48573306, -9574728, -29970035, 4235503, -8417364, -22696962, -24276080, 36329130, 9741256, 33833593, -18128461, -38113004, -18563516, -17123149, 43017083, -25851644, -31214581, 27850653, 2704540, 3453441, 41468645, 42949461, 29683787, -21464235, -6201313, -29184231, 4455745, 1784407, -24893867, -78692, 7265016, 29049179, 40346580, 27294981, -16715318, -18070783, 7114371};
    vector<int> y = {-38475046, 20774699, 19371979, -2125100, -47353762, 31258976, -18172264, 38039441, -23207589, 5976092, -43175140, -45356936, 11196985, 10278301, -1371939, 4146446, 42478441, 27163827, 461485, 15810562, 34135924, -47754108, 40916695, -15942767, -37972740, -27517774, -25596187, 39322241, 5766908, 6333030, 48952964, -30191786, -22892271, 18324944, -29800534, 32270319, -47899728, 2027203, 20309761, -21107317};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 7686;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int nlow = 1000000;
    int nhigh = 100000000;
    vector<int> x = {1000000, 45854, -8745555, 4888, 7555, 4, 8, 8854444, 100000000, -100000000, 47, 8555, 9888, 7555555, 8544, 97455, 4555, 855544, 4448, 4881, 1555555, -99999999, 99999999, 69888, 98555, 47, 58888, 975555, 48887, 6999, 5, 7, 855, 988, 75, 4888, 9888, 555, 4, 855};
    vector<int> y = {47, 8555, 100000000, 5888, 5444, 8555, 4888, 488, 9855, -55, 47, 5, 888888, 988, 5, 8, 8888, 75999, -99999999, 8, 44447, 558999, 985554, 458455, 4555887, 100000000, 4588, -100000000, 45888, 369999, 98856, 9888875, 98554458, 47777, 77777777, 44444444, 58455, 87555, 48888, 5444};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 3128;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int nlow = 1;
    int nhigh = 1;
    vector<int> x = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4};
    vector<int> y = {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 81;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int nlow = 1;
    int nhigh = 100;
    vector<int> x = {0};
    vector<int> y = {0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int nlow = 1;
    int nhigh = 1000000;
    vector<int> x = {3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 780;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int nlow = 1;
    int nhigh = 100000;
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int nlow = 5000000;
    int nhigh = 75000000;
    vector<int> x = {-70337365, 54199664, 82814842, 99891232, -71364195, -83500150, 77376759, -91408193, 45561476, -34431575, -46555146, -93977701, -44146248, -48104548, 94633936, -17299568, -83676512, -18703918, -92286814, 63407087, 9002912, 87823750, -97937772, 38143554, -11835322, -3400403, -14062334, 39480191, -35093200, 11577291, -37170006, -5430564, 18293307, -54355164, 46977020, 99445464, -37855314, 76870131, -91962728, -39777485};
    vector<int> y = {44087895, 48917460, -84802340, 50849523, 18653470, -1541768, 26286187, -74670839, -27965709, -91160920, 28560039, -40534962, 70228596, -25563859, 81168656, 77485527, 27439650, 29061626, -64324687, 92336695, -39539178, 90285327, 45934245, 36095285, 74330328, 64428036, -13337854, -27503598, -5432754, 75190478, 80110564, -61344859, 76624290, -52175424, -57978984, 47794112, 98799160, 68307203, -74360375, 23349803};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 806;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int nlow = 10;
    int nhigh = 10;
    vector<int> x = {1, 5, 5, 10};
    vector<int> y = {5, 1, 10, 5};
    RangeSquaredSubsets* pObj = new RangeSquaredSubsets();
    clock_t start = clock();
    long result = pObj->countSubsets(nlow, nhigh, x, y);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14546&pm=11577
********************************************************************************
//  SRM 521 (B)
 
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
 
using namespace std;
 
typedef unsigned uint;
typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
 
const int INF = 1001001001;
 
int N;
int xsLen, ysLen;
int xs[110], ys[110];
 
struct RangeSquaredSubsets {
  
  bool intersect(int a, int b, int c, int d, int e, int f) {
    int z = max(a, max(c, e));
    return (z <= b && z < d && z < f);
  }
  
  long long countSubsets(int nlow, int nhigh, vector <int> x, vector <int> y) {
    int i;
    int p, q, r, s;
    
    N = x.size();
    for (i = 0; i < N; ++i) {
      xs[xsLen++] = x[i];
      ys[ysLen++] = y[i];
    }
    xs[xsLen++] = -INF;
    ys[ysLen++] = -INF;
    xs[xsLen++] = +INF;
    ys[ysLen++] = +INF;
    sort(xs, xs + xsLen);
    sort(ys, ys + ysLen);
    xsLen = unique(xs, xs + xsLen) - xs - 1;
    ysLen = unique(ys, ys + ysLen) - ys - 1;
    
    set<Int> hs;
    for (p = 1; p < xsLen; ++p) for (q = 1; q < ysLen; ++q) 
    for (r = p; r < xsLen; ++r) for (s = q; s < ysLen; ++s) 
    {
      if (!intersect(nlow, nhigh, xs[r] - xs[p], xs[r + 1] - xs[p - 1], ys[s] - ys[q], ys[s + 1] - ys[q - 1])) continue;
      Int h = 0;
      for (i = 0; i < N; ++i) {
        if (!(xs[p] <= x[i] && x[i] <= xs[r])) continue;
        if (!(ys[q] <= y[i] && y[i] <= ys[s])) continue;
        h |= 1LL << i;
      }
      if (!h) continue;
      hs.insert(h);
    }
    return hs.size();
    
  }
  
};

********************************************************************************
*******************************************************************************/