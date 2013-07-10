/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9995
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

class Polygons2 {
public:
    long number(vector<int> segments, int K);
};

long Polygons2::number(vector<int> segments, int K) {
    long ret;
    return ret;
}


int test0() {
    vector<int> segments = {1, 1, 1, 1};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> segments = {2, 3, 4, 5};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> segments = {4, 4, 4, 2, 2, 2};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> segments = {10, 1, 4, 9, 20};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> segments = {3310, 1660, 211, 1260, 160, 213, 884, 539, 17212, 2025, 105, 120, 5510};
    int K = 7;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 532;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> segments = {44444};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> segments = {49999, 50000, 49999, 26346, 49999, 49999, 49999, 45799, 49999};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> segments = {1, 12, 8, 4, 9, 13, 19, 8, 4, 19, 9, 20, 15, 9};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 177;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> segments = {1459, 1780, 1920, 1785, 1736, 1154, 1261, 1758, 1876, 1168, 1778, 1448, 1453, 1294, 1733, 1557, 1185, 1822, 1314, 1179, 1148, 1647, 1296, 1781};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2024;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> segments = {5751, 12609, 5390, 14629, 14656, 11019, 10613, 11976, 8865, 11576, 12137, 5731, 7657, 11595, 9063, 5986, 5008, 14439, 9140, 5058, 10550, 5318, 11261, 7865, 8939, 9223, 11059, 9924, 14480, 12617, 5440, 8769, 13300, 7428, 10055, 7389, 13637, 6352, 7397, 13986, 13293};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9658;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> segments = {5180, 14689, 7035, 11951, 7680, 5280, 5419, 7914, 13918, 8376, 5987, 9697, 14147, 7328, 7969, 10093, 5727, 13339, 8757, 5128, 14852, 9580, 6395, 13566, 14353, 12203, 8712, 9772, 6018, 12386, 13076, 11113, 9767, 5607, 14917, 9586, 9177, 8455, 7714, 14560, 5221, 5727, 12203, 13339, 10093, 14852};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 13279;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> segments = {12407, 13431, 9397, 14996, 10135, 12032, 10645, 13542, 10785, 10694, 13504, 12269, 11493, 11760, 8808, 5665, 6404, 8952, 5806, 11126, 10770, 10535, 11797, 9300, 9548, 11175, 12292, 10019, 7980, 8272, 7434, 6027, 5320, 14829, 5964, 11653, 8862, 10220, 12694, 8427, 12567, 9592, 11571, 14250, 10329, 12521, 12368, 7797, 11860, 13430};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 19192;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> segments = {28480, 28619, 33228, 31489, 33982, 42596, 48575, 37163, 26703, 33007, 46246, 47277, 48594, 26027, 37886, 26950, 25121, 46376, 35942, 38030, 45343, 36168, 28591, 28805, 47182, 45095, 40252, 30931, 25029, 30420, 25409, 36932, 40007, 32187, 33889, 40481, 45932, 31028, 29444, 48124, 27473, 28414, 41070, 31458, 35364, 30903, 41432, 43999, 32693, 32484};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 19600;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> segments = {7501, 19938, 37094, 6997, 323, 31860, 19860, 7001, 12147, 38671, 42333, 26546, 28877, 15078, 2100, 3728, 22005, 38275, 26969, 9675, 28036, 26583, 40070, 19152, 31169, 41369, 39517, 32690, 29584, 9557, 25884, 22842, 5819, 25819, 28532, 26157, 24229, 9358, 41897, 6181, 166, 42872, 37806};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6247;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> segments = {8447, 22453, 41773, 7880, 364, 35879, 22364, 7884, 13680, 43548, 47673, 29894, 32519, 16980, 2364, 4198, 24780, 43102, 30370, 10895, 31572, 29936, 45124, 21568, 35100, 46587, 44501, 36812, 33316, 10762, 29149, 25723, 6552, 29075, 32131, 29456, 27285, 43102, 43102, 7884, 35879, 29456, 35100, 22453, 29936, 43548, 35100, 7880};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10549;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> segments = {627, 34272, 32519, 29641, 17609, 10688, 39875, 25436, 1641, 26352, 21684, 35706, 47633, 7318, 28524, 6838, 44235, 1685, 22538, 49079, 12138, 47775, 36164, 39970, 12138, 47633, 17609, 1685, 7318, 47633, 7318, 47633, 10688, 21684, 7318, 28524, 7318, 39970, 22538, 17609, 36164, 1641, 29641, 17609, 17609, 44235, 1685};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6395;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> segments = {22513, 26923, 26415, 39407, 17500, 39270, 36337, 29450, 28452, 36229, 41015, 30702, 18059, 38060, 29450, 39407, 30702, 36337, 38060, 38060, 41015, 36337, 18059, 22513, 38060, 36229, 41015, 28452, 36337, 39270, 18059, 41015, 30702, 29450, 18059, 41015, 28452, 39270, 28452};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8889;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> segments = {16727, 7455, 27310, 14295, 31184, 30865, 17664, 30044, 20345, 1490, 18110, 13300, 26998, 11877, 9333, 7158, 31184, 17664, 17664, 11877, 7455, 31184, 9333, 18110, 1490, 9333, 26998, 20345, 7455, 9333, 7455, 26998, 27310, 18110, 31184, 20345, 7158, 27310, 1490, 17664, 7455, 27310, 11877, 7455, 17664, 18110, 9333, 30865};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9311;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> segments = {44148, 41957, 32081, 29989, 42395, 23427, 20076, 29270, 42355, 45592, 23157, 45260, 41551, 23051, 41733, 24379, 20466, 40408, 45899, 45979, 25938, 40366, 21076, 29692, 37406, 36266, 48111, 30413, 39731, 31921, 33591, 794, 597, 748, 825, 1016, 797, 100, 757, 240, 920, 553, 1014, 801, 671, 1090};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5117;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> segments = {9920, 12579, 10537, 9494, 6926, 9881, 19285, 10420, 17394, 8212, 13176, 6953, 9820, 11577, 5926, 12924, 7593, 6466, 6325, 7121, 15822, 9542, 16240, 7573, 3440, 8762, 9064, 9976, 6564, 18297, 4312, 17285, 1423, 115, 1256, 1465, 1368, 1341, 1008, 692, 1710, 335, 264, 720, 426, 254, 1712, 1304};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5241;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> segments = {9920, 12579, 10537, 9494, 6926, 9881, 19285, 10420, 17394, 8212, 13176, 6953, 9820, 11577, 5926, 12924, 7593, 6466, 6325, 7121, 15822, 9542, 16240, 7573, 3440, 8762, 9064, 9976, 6564, 18297, 4312, 17285, 1423, 115, 1256, 1465, 1368, 1341, 1008, 692, 1710, 335, 264, 720, 426, 254, 1712, 1304};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 118544;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> segments = {3339, 3339, 3339, 10016};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> segments = {3339, 3338, 3339, 10016};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
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
    vector<int> segments = {54, 101, 99, 69, 96, 5, 33, 29};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> segments = {26397, 49579, 48683, 33983, 47461, 1532, 15814, 13727, 12667, 17283, 46969, 26412, 42737, 29994, 10583, 26754, 12603, 8394, 12501, 17551, 44509};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4977;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> segments = {24743, 30244, 20316, 15492, 12184, 28893, 23760, 13054, 43213, 14273, 35459, 30291, 12268, 972, 47785, 47974, 64, 5975, 40966, 7561, 21219, 29424, 27158, 45136, 16322, 33390, 17698, 30698, 27053, 1459, 45227, 45, 7050, 42819, 32753, 44951, 41797, 13649, 48628, 22376, 40648, 14460, 14799, 18423, 1912, 15139, 2348, 30410, 28599, 48941};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 184303;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> segments = {43908, 12831, 20592, 29663, 11821, 16603, 9610, 31626, 22154, 1846, 42976, 36142, 408, 42192, 39727, 31721, 1648, 32248, 49355, 44116, 16252, 6605, 3684, 11794, 20957, 48643, 32095, 40394, 28959, 30346, 21098, 3332, 39352, 26074, 23471, 46898, 2057, 3104, 9442, 3173, 48112, 17217, 31596, 46743, 39337, 15920, 5242, 25443, 21473, 25713};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 179610;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> segments = {21877, 35088, 7953, 8187, 14476, 18835, 29923, 11419, 23076, 30869, 42194, 12629, 13022, 21196, 14867, 17633, 43837, 20247, 10416, 47174, 20088, 2486, 48531, 48355, 13774, 21877, 35088, 7953, 8187, 14476, 18835, 29923, 11419, 23076, 30869, 42194, 12629, 13022, 21196, 14867, 17633, 43837, 20247, 10416, 47174, 20088, 2486, 48531, 48355, 13774};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 191748;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> segments = {12619, 7233, 16260, 1098, 23440, 37714};
    int K = 5;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> segments = {48131, 47965, 22264, 3155, 19019, 19710, 30489, 40604, 13542, 5900, 46653, 40882, 265, 8106, 13156, 8447, 36607, 44657, 21032, 25529, 46438, 3569, 28639, 30563, 4140, 27969, 8121, 33052, 9134, 48075, 19491, 9950, 36217, 9297, 34229, 39531};
    int K = 5;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 354705;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> segments = {50000, 50000, 50000, 50000, 18216, 18216, 4654, 2742, 4780, 2795, 4031, 1271, 2151, 4655, 2823, 1921, 3422, 3018, 4895, 2487, 842, 3247, 942, 107, 1219, 3958, 4234, 1253, 3847, 3765, 3275, 1114, 1984, 3693, 3287, 4885, 181, 757, 830, 793, 3134, 2795};
    int K = 5;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 430062;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> segments = {18288, 9048, 2811, 2474, 50000, 14658, 526, 12091, 14343, 3800, 50000, 11873, 18288, 3746, 8463, 13968, 10261, 9396, 8218, 5943, 9858, 50000, 12702, 301, 14687, 3644, 9737, 7452, 8379, 11292, 9822, 11540, 6445, 11077, 13964, 3327, 2363, 2254, 8378, 2510, 5752, 50000};
    int K = 5;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 554076;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> segments = {18288, 9048, 2811, 2474, 49770, 16658, 526, 12091, 14343, 1, 50000, 11873, 18288, 3746, 8463, 13968, 10261, 9396, 8218, 5943, 9858, 50000, 12702, 301, 14687, 3644, 9737, 7452, 8379, 11292, 9822, 11540, 6445, 11077, 13964, 3327, 2363, 2254, 8378, 2510, 5752, 50000};
    int K = 5;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 548599;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> segments = {19272, 27416, 12680, 27058, 20958, 250, 24240, 5384, 32532, 25542, 9199, 4362, 23798, 3948, 957, 19944, 27513, 29039, 28554, 15961, 19884, 8928, 20444, 12661, 31717, 30875, 10246, 22316, 18404, 11668, 21262, 10111, 8621, 16083, 20994, 9976, 18049, 30523, 1708, 32108, 25805, 2994, 9758, 11420, 4717, 1338, 22254, 7070};
    int K = 5;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1646132;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> segments = {39410, 41940, 41601, 42975, 38729, 33074, 42252, 33477, 44173, 46165, 34739, 46631, 40440, 42390, 37968, 46583, 41769, 28716, 28821, 32915, 40700, 40085, 45968, 36663, 33643, 31622, 34850, 28974, 41853, 36764, 38354, 31819, 43776, 28269, 32964, 27845, 30569, 41271, 38345, 40666, 39389, 39545, 45489, 248, 277, 134, 73, 118, 275};
    int K = 5;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1889183;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> segments = {6213, 10333, 13144, 3246, 12047, 7464, 15091, 5195, 5077, 14238, 9529, 22461, 23205, 22265, 1772, 28298, 14304, 15537, 17231, 13028, 7516, 15939};
    int K = 6;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 74573;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> segments = {303, 4335, 8927, 8421, 9522, 10998, 4742, 7298, 14096, 9499, 291, 12441, 7141, 9860, 19984, 16652, 8428, 8238, 9453, 1423, 14029, 4006, 5340, 8270, 124, 21243, 21096, 17673, 19850, 11148, 7955, 3159, 22633, 3643, 1617, 17224};
    int K = 6;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1916211;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> segments = {590, 6728, 7698, 4294, 5711, 57, 2380, 7498, 5159, 12453, 8394, 9563, 3970, 4137, 3876, 8920, 2331, 7919, 5410, 38928, 1190, 8429, 8461, 2601, 7137, 1982, 8863, 2185, 3467, 3686, 34608, 3189, 9492, 5271, 7080, 4228, 6596, 41992, 6083, 3597, 954, 631, 3623, 1318, 7373, 1725, 6258, 3462, 29371};
    int K = 6;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9440600;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> segments = {577, 297, 739, 283, 233, 1717, 1523, 27104, 1636, 33487, 1956, 28394, 886, 753, 20427, 1436, 1060, 1556, 17987, 121, 14618, 1561, 1779, 1653, 607, 198, 733, 1382, 1558, 41794, 993, 1318, 69, 228, 1903, 1444, 1624, 1947, 570, 1512, 1401, 109, 858, 1364, 902, 1134, 397, 1202, 1033, 15631};
    int K = 6;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6457201;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> segments = {13184, 6180, 17105, 3703, 41698, 37815, 36847, 20933, 39684, 37740, 47690, 46355, 20225, 34685, 47465, 43255, 4465, 37690, 13012, 1777, 17242, 4599, 481, 17592, 5842, 31722, 1491, 33319, 23588, 25264, 13937, 8695, 36577, 24597, 21324, 34887, 39387, 27122, 32882, 28836, 33805, 40097, 21697, 29515, 31026, 16080, 46716};
    int K = 7;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 62864538;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> segments = {45126, 13871, 5942, 222, 40369, 13134, 31813, 24921, 1018, 49406, 5709, 11458, 10956, 21605, 4775, 20379, 48754};
    int K = 7;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 19170;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> segments = {22998, 39033, 46021, 39253, 36844, 7717, 13097, 37930, 43849, 8440, 38909, 22446, 22657, 14735, 36661, 27877, 9259, 41121, 15749, 8999, 7409, 32383, 14832, 39077, 37989, 30450, 2016, 19721, 5300, 34488, 33161, 9317, 5237};
    int K = 8;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 13884151;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> segments = {22998, 39033, 46021, 39253, 36844, 7717, 13097, 37930, 43849, 8440, 38909, 22446, 22657, 14735, 36661, 27877, 9259, 41121, 15749, 8999, 7409, 32383, 14832, 39077, 37989, 30450, 2016, 19721, 5300, 34488, 33161, 39035, 39036, 39035, 39034, 39035, 39036, 39033, 39037, 39036, 39034, 39034, 39036, 39035, 39037, 39035, 39035, 39037, 39037, 39036};
    int K = 8;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 536878650;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> segments = {44724, 12426, 5123, 32180, 15777, 5275, 2069, 5446, 32304, 28006, 34423, 27481, 41481, 32458, 30969, 7822, 27135, 44815};
    int K = 9;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 48620;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> segments = {43907, 12817, 20581, 29656, 11807, 16590, 9595, 31620, 22144, 1828, 42975, 36138, 389, 42190, 39724, 31714, 1630, 32242, 49355, 44115, 16239, 6589, 3667, 11780, 20947, 48643, 32089, 40392, 28952, 30339, 21088, 3314, 39348, 26066, 23461, 46898, 2039, 3087, 9427, 3156};
    int K = 9;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 273417812;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> segments = {43907, 12817, 20581, 29656, 11807, 16590, 9595, 31620, 22144, 1828, 42975, 36138, 389, 42190, 39724, 31714, 1630, 32242, 49355, 44115, 16239, 6589, 3667, 11780, 20947, 48643, 32089, 40392, 28952, 30339, 21088, 3314, 39348, 26066, 23461, 46898, 2039, 3087, 9427, 3156, 31620, 42975, 11780, 48643, 1828, 23461, 9427, 32089, 3156};
    int K = 9;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2054138845;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> segments = {43907, 12817, 20581, 29656, 11807, 16590, 9595, 31620, 22144, 1828};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> segments = {9438, 12972, 28901, 32274, 12266, 42857, 48262, 33434, 12330, 7109, 43293, 7645, 13626, 43465, 13333};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3003;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> segments = {11, 11, 11, 11, 11, 11, 11, 121, 121, 121, 121, 121, 121, 121, 1221, 1221, 1221, 1221, 1221, 1221, 1221, 12221, 12221, 12221, 12221, 12221, 12221, 12221};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11051586;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> segments = {11, 6087, 12221, 12221, 12221, 11, 121, 121, 4826, 121, 121, 4817, 11, 121, 4427, 1221, 6058, 1221, 5521, 11, 12221, 5916, 12221, 11, 12221, 11, 1221, 121, 1683, 1221, 121, 5065, 5322, 1221, 2672, 1221, 473, 4703, 570, 789, 12221, 11, 1221, 2183, 2581};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2953671210;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> segments = {32, 512, 16, 128, 256, 1024, 16384, 8, 64, 4096, 4, 2, 8192, 32768, 2048, 1};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
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
    vector<int> segments = {32, 512, 16, 128, 256, 1024, 16384, 8, 64, 4096, 4, 50000, 2, 8192, 32768, 2048, 1};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3361;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> segments = {9959, 9938, 9971, 19957, 9985, 9949, 9981, 9913, 9935, 9993, 9994, 9949, 9916, 9980, 9910, 9908, 9984, 9919, 9958, 9930, 9997, 9929, 9952, 9915, 9965, 9961, 9956, 9996, 9962, 9934, 9973, 9980, 9924, 9955, 9900, 9950, 9957, 9952, 9929, 9969, 9923, 9941, 9914, 9998, 9969, 9913, 9927, 9934, 9964, 9914};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> segments = {7523, 7405, 3764, 670, 1428, 2278, 9442, 3278, 7534, 662, 6892, 8112, 7274, 5943, 4168, 7437, 473, 4219, 4812, 8703, 6906, 5937, 6234, 8471, 7546, 2238, 9390, 3682, 3545, 1341, 4707, 5807, 3449, 8578, 3838, 3998, 3313, 5554, 3488, 6687, 8677, 347, 5132, 1735, 5570, 1307, 1198, 3181, 1572, 7333};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278162;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> segments = {14156, 8303, 22397, 9156, 1513, 1808, 22466, 18825, 241, 26005, 28916, 19626, 13942, 11997, 4348, 15842, 5436, 23648, 27755, 19466, 24989, 22497, 8923, 16044, 21733, 977, 24962, 11058, 19900, 11782, 10339, 9603, 3284, 22692, 25122, 21761, 14147, 20508, 779, 22435, 29081, 29988, 26076, 28474, 11077, 3013, 13060, 10861, 18764, 19695};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272277945;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> segments = {14156, 1808, 1810, 11782, 5436, 19626, 21733, 4346, 25122, 28916, 22397, 11058, 4348, 11997, 23648, 13942, 29081, 14147, 22497, 26005, 13060, 8303, 20508, 27755, 22435, 977, 16044, 779, 18764, 3013, 29988, 24962, 3137, 3316, 21761, 241, 8923, 19466, 1513, 3284, 4745, 4164, 3282, 9603, 10339, 1526, 22692, 22466};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6540442318;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> segments = {43845, 13702, 83, 27474, 1399, 22169, 18479, 2179, 41536, 36836, 39591, 862, 2702, 930, 5597, 14518, 39325, 1849, 4444, 14811, 4305, 2149, 33161, 44132, 3687, 4376, 1938, 3656, 7668, 3357, 28846, 2984, 20382, 3796, 3285, 45772, 25151, 15, 12988, 32715, 3430, 19540, 2750, 951, 509, 2520, 2499, 250, 2044, 366};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9785693182;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> segments = {21444, 1944, 2196, 21502, 862, 923, 43522, 542, 17256, 14206, 4202, 12103, 1125, 1798, 388, 3910, 3874, 7556, 4547, 1121, 725, 1616, 1320, 1641, 2674, 4714, 3725, 27228, 2822, 4804, 4075, 174, 2193, 584, 18332, 1220, 37248, 778, 10175, 2166, 269, 986, 672, 815, 3760, 561, 631, 1664, 748};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6032666013;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> segments = {40384, 974, 2703, 45613, 544, 876, 37181, 504, 42785, 3396, 537, 3220, 878, 2950, 2522, 5123, 2393, 35009, 976, 3564, 630, 709, 631, 561, 963, 3247, 916, 44730, 877, 671, 896, 868, 846, 675, 5882, 702, 46692, 817, 37137, 2262, 4173, 517, 672, 545, 37182, 932, 558, 4442, 514};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5609332805;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> segments = {13910, 29116, 366, 365, 18618, 3299, 29374, 473, 2903, 4220, 451, 343, 283, 3293, 5053, 5050, 3103, 598, 522, 4087, 282, 2718, 503, 141, 420, 521, 2765, 153, 12281, 342, 3312, 49332, 2502, 577, 160, 2626, 2301, 582, 219, 48053, 406, 560, 311, 463, 220, 369, 391, 136, 341, 536};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4374326728;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> segments = {49990, 80, 13909, 81, 33, 100, 13201, 7318, 124, 24, 18864, 20935, 9050, 80, 16187, 30, 111, 108, 42, 5, 110, 49962, 53, 7738, 56, 91, 106, 17617, 16865, 5, 16540, 52, 75, 41, 17, 10, 30, 1, 122};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 329920606;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> segments = {50000, 510, 25718, 30837, 812, 32932, 328, 657, 31468, 330, 35357, 166, 16264, 40332, 27801, 729, 22798, 40233, 236, 606, 4288, 12572, 354, 31748, 445, 50000, 569, 39388, 28328, 451, 125, 13710, 24340, 481, 123, 30151, 30491, 4075, 601, 343, 540, 12894, 263, 110, 576};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3012227842;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> segments = {1, 1, 1, 1};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> segments = {2968, 1228, 689, 155, 4084, 1799, 1961, 1990, 63, 3554, 1933, 2973, 4384, 399, 387, 1920, 2675, 1170, 3561, 1394, 94, 3293, 2418, 969, 2213, 4030, 580, 2391, 2573, 3903, 3992, 371, 3335, 3548, 4703, 835, 590, 2082, 111, 4988, 2515, 950, 4763, 4283, 807, 184, 3091, 4521, 3958, 3918};
    int K = 4;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 170786;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> segments = {1, 2, 3, 5247, 7, 11, 13, 17, 19, 21, 51, 67, 99, 129, 2323, 3498, 8968, 9983, 10023, 21987, 22434, 23985, 24985, 25896, 26984, 27894, 28934, 29074, 30855, 30855, 31983, 32987, 33985, 34985, 35984, 36894, 37845, 38975, 39785, 40894, 41983, 42985, 43545, 44298, 45984, 46984, 47983, 48934, 49839, 50000};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10260477751;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> segments = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> segments = {12055, 33580, 49581, 15317, 18582, 29490, 4196, 3096, 35041, 18332, 44226, 17697, 45101, 5159, 16735, 14600, 47088, 1202, 36614, 45273, 15009, 46714, 17921, 9336, 10062, 49159, 6439, 8178, 16712, 1471, 32382, 22831, 7647, 33864, 40015, 33972, 19222, 24411, 5973, 10917, 25043, 32708, 45649, 18519, 13813, 18662, 7982, 33955, 42626, 48763};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272277897;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> segments = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272264988;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> segments = {48801, 32985, 4845, 29599, 46241, 11574, 37812, 6344, 16973, 17160, 21688, 33775, 12114, 10775, 5740, 5125, 10761, 31007, 43310, 3145, 44453, 32436, 47883, 5967, 9143, 49306, 18833, 42571, 32212, 4081, 34457, 40783, 47659, 43083, 2562, 11511, 44743, 33008, 3068, 27885, 44094, 42786, 2807, 36866, 20562, 15026, 20050, 33930, 33966, 33};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272257179;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> segments = {12343, 44330, 45769, 128, 5423, 1888, 30156, 24543, 6567, 34654, 44330, 2343, 4876, 9012, 467, 34568, 24, 38, 19, 20, 27, 104, 4, 640, 5, 140, 122, 3, 905, 23, 7, 12456, 43245, 12223, 4355, 6587, 2312, 3628, 34, 100, 3440, 1245, 5565, 333, 106, 107, 213, 4488, 212, 12956};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6495842302;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> segments = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> segments = {32, 34, 46464, 364, 45876, 5432, 865, 765, 453, 76, 12, 34, 1, 56, 6758, 4553, 6588, 5756, 7876, 7667, 7887, 565, 4234, 4354, 24233, 22222, 11111, 23, 34, 6667, 87, 98, 9054, 53, 78, 789, 6747, 5346, 6778, 8786, 5677, 42322, 5435, 677, 890, 324, 6788, 5456, 5778, 546};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6955454764;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> segments = {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8217822536;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> segments = {2, 3, 5};
    int K = 3;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> segments = {3310, 1660, 211, 1260, 160, 213, 884, 539, 17212, 2025, 105, 120, 5510, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 324, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241, 3241};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10236817648;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> segments = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> segments = {51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> segments = {124, 177, 1274, 2833, 4859, 2591, 5732, 946, 6347, 7197, 9264, 9341, 5773, 7823, 12296, 10603, 12137, 6843, 15982, 16914, 15422, 12864, 3526, 22757, 23598, 1266, 19686, 3677, 5136, 26895, 792, 27435, 17093, 6556, 1476, 4995, 24512, 35949, 8477, 36754, 6400, 31191, 34787, 7237, 34366, 22882, 45649, 45063, 12035, 39302};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10255039349;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> segments = {29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 29999, 1, 1, 1, 1, 1};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> segments = {3310, 1660, 211, 1260, 160, 213, 884, 539, 17212, 2025, 105, 120, 5510, 1, 2, 3, 4, 6, 7, 99, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 30, 31, 32, 33, 34, 35, 36, 37, 38};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1878806497;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> segments = {3, 5, 7, 9, 9, 5, 9, 5, 9, 5, 7, 9, 9, 9, 78, 9, 5, 5, 9, 12, 15, 12, 33, 12, 21, 26, 18, 12, 16, 21, 18, 32, 33, 34, 12, 16, 13, 17, 19, 40, 41, 42};
    int K = 8;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 115346306;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> segments = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 1, 1, 1, 1, 2, 8, 8, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 1, 1, 1, 1, 2, 8, 8, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10};
    int K = 8;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 536650884;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> segments = {50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3190187286;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> segments = {3310, 1660, 211, 1260, 160, 213, 884, 539, 17212, 2025, 105, 120, 5510, 1300, 1200, 1100, 1300, 1200, 1200, 1300, 1300, 1500, 1500, 1160, 1700, 1800, 1900, 2000, 2100, 2000, 1400, 1300, 1200, 1100, 1000, 3000, 3100, 3200, 3300, 3400, 3300, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 9558771374;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> segments = {50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 5000, 5000, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 4444, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 3333, 222, 1};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1341247908;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> segments = {100, 105, 99, 87, 56, 123, 320, 100, 104, 105, 106, 71, 210, 78, 98, 85, 23, 45, 1, 2, 3, 46, 63, 78, 98, 111, 113, 105, 103, 142, 111, 123, 143, 152, 74, 76, 220, 33, 330, 333, 122, 124, 125, 126, 134, 135, 137, 138, 139, 140};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272277580;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> segments = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 9;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2505433700;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> segments = {4, 5, 12, 2, 3, 42, 3, 4, 5, 4, 354, 54, 34, 53, 45, 35, 2, 45, 34, 657, 5687, 5684, 3, 546, 2, 543, 5432, 5, 4, 3, 23, 3, 4, 45, 3, 4, 5, 4, 34, 5, 34, 5, 464, 5647, 67, 4, 56, 4, 45, 4};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3371848962;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> segments = {47900, 47899, 47898, 47897, 47896, 47895, 47894, 47893, 47892, 47891, 47890, 46666, 47888, 47887, 47886, 47885, 47884, 47883, 40000, 47881, 47880, 47879, 47878, 47877, 47876, 47875, 47874, 47873, 47872, 47799, 40001, 47869, 47868, 47867, 47866, 47865, 47864, 47863, 47862, 47861, 46800, 47859, 47858, 47857, 47856, 47855, 47854, 47853, 47852, 47851};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> segments = {49999, 49999, 49999, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49399, 49999};
    int K = 8;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 536878650;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> segments = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 6;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15890700;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> segments = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5178066751;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> segments = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278125;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> segments = {49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 49999, 1, 1, 1, 2};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> segments = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36999, 37000, 38000, 39000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 49000, 50000};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6540715851;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> segments = {3310, 1660, 1260, 211, 160, 213, 884, 539, 17212, 2025, 105, 120, 5510, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 5, 2, 2, 5, 67, 88, 33, 22, 11, 344, 6678, 9999};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1547563853;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> segments = {50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> segments = {3, 3, 34, 323, 2, 34, 4, 34, 234, 2, 2, 234, 23, 4, 34, 23, 2, 34, 23, 123, 1, 23, 123, 123, 123, 1, 123, 12, 4, 34, 234, 2, 4, 4, 34, 34, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5421505364;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> segments = {15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009, 15009};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278170;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> segments = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 343, 3243, 25232, 1221, 2146, 41, 13, 676, 464, 422, 543, 342, 345, 234, 466, 244, 342, 244};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3156498869;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> segments = {1983, 1321, 245, 2425, 1314, 2432, 2134, 234, 5245, 4674, 252, 242, 43253, 2534, 363, 353, 2453, 34536, 234, 345, 234, 3453, 24, 35, 5364, 234, 345, 24, 34, 46, 57, 345, 45, 345, 67, 85, 667, 35, 456, 35, 647, 345, 456, 35, 76, 464, 35, 46, 35, 46};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4763483505;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> segments = {14179, 32675, 32108, 12329, 17563, 11896, 13239, 29224, 18489, 24072, 12299, 11619, 4648, 26784, 17741, 951, 11545, 7488, 31058, 19256, 8230, 2731, 29602, 20958, 29621, 186, 18811, 2427, 32160, 15349, 19225, 12272, 14483, 28516, 13877, 18337, 10933, 8355, 29132, 29734, 8074, 2613, 14113, 3908, 14616, 30746, 19461, 2587, 7240, 21156};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278031;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> segments = {38635, 4505, 35485, 19600, 25317, 49137, 46042, 32021, 11589, 44350, 45709, 12974, 32433, 47159, 22937, 40272, 37598, 27157, 21027, 8285, 17886, 10398, 40175, 33473, 26797, 28044, 28662, 41116, 9763, 11308, 37686, 3578, 23687, 8770, 12646, 44990, 1489, 44201, 5844, 16814, 25834, 38552, 2974, 48535, 24899, 24688, 35881, 5808, 926, 44563};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10272278020;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> segments = {14, 17, 18, 29, 23, 11, 345, 43, 11, 38, 3, 4, 41, 5, 36, 7, 2, 12, 32, 41, 4, 5, 6, 11, 5, 4, 3, 2, 3, 5, 23, 17, 28, 32, 6, 7, 9, 13, 14, 18, 8, 22, 19, 11, 21, 23, 24, 4, 14, 19};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8217657266;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> segments = {50000, 50000, 50000, 50000, 1, 1, 1, 1, 1, 2, 2, 2, 2, 19446, 46887, 1386, 20647, 31853, 46701, 12238, 15854, 7434, 31069, 793, 21414, 16671, 45480, 25803, 5320, 38253, 35823, 28170, 49199, 33862, 34714, 36572, 22833, 46947, 13159, 40716, 2619, 34876, 34783, 24321, 21313, 1913, 20835, 24468, 30047, 3853};
    int K = 9;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2497900030;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> segments = {14179, 32675, 32108, 12329, 17563, 11896, 13239, 29224, 18489, 24072, 12299, 11619, 4648, 26784, 17741, 951, 11545, 7488, 31058, 19256, 8230, 2731, 29602, 20958, 29621, 186, 18811, 2427, 32160, 15349, 19225, 12272, 14483, 28516, 13877, 18337, 10933, 8355, 29132, 29734, 8074, 2613, 14113, 3908, 14616, 30746, 19461, 2587, 7240, 21156};
    int K = 9;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2505430891;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> segments = {50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000};
    int K = 10;
    Polygons2* pObj = new Polygons2();
    clock_t start = clock();
    long result = pObj->number(segments, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1917334783;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22721553&rd=13751&pm=9995
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <list> 
#include <map> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <utility> 
#include <vector> 
using namespace std; 
 
template<class A, class B> void CONV(A& x, B& y) { stringstream s; s << x; s >> y; } 
typedef long long LL; 
#define FOR(i, a, b) for (int i = a; i < b; ++i) 
#define FORE(i, v) FOR(i, 0, v.size()) 
#define FORU(i, a) for (int i = a; ; ++i) 
#define ALL(v) v.begin(), v.end() 
#define SORT(v) sort(ALL(v)) 
#define SET(a, n) memset(a, n, sizeof a) 
 
struct Polygons2 { 
  long long number(vector <int> segments, int K); 
}; 
 
 
LL dp[11][50002]; 
 
long long Polygons2::number(vector <int> v, int K) { 
  SORT(v); 
  SET(dp, 0); 
  dp[K][0] = dp[K-1][v[0]] = 1; 
  LL res = 0; 
  FOR(i, 1, v.size()) FOR(j, 1, 11) FOR(l, 0, 50002) { 
    if (j == 1) { 
      if (v[i] < l) res += dp[j][l]; 
    } 
    else dp[j-1][min(50001, l+v[i])] += dp[j][l]; 
  } 
  return res; 
} 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/