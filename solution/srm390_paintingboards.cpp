/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8516
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

class PaintingBoards {
public:
    double minimalTime(vector<int> boardLength, vector<int> painterSpeed);
};

double PaintingBoards::minimalTime(vector<int> boardLength, vector<int> painterSpeed) {
    double ret;
    return ret;
}


int test0() {
    vector<int> boardLength = {5, 3, 2};
    vector<int> painterSpeed = {2, 3, 5};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> boardLength = {1, 2, 1, 4, 2, 1, 1};
    vector<int> painterSpeed = {1, 2, 3};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> boardLength = {90, 5, 3, 17, 2, 27, 84, 73, 67, 2, 33, 71, 31, 40, 99, 35, 81, 48, 57, 68, 46, 51, 92, 35, 24, 9, 87, 43, 41, 67, 85, 23, 40, 32, 22, 85, 6, 60, 75, 94, 32, 97, 54, 23, 1, 54, 58, 6, 95, 23};
    vector<int> painterSpeed = {4, 4, 13, 10, 5, 17, 7, 9, 4, 12, 13, 4, 6, 12, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 20.647058823529413;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.686274509803922;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> boardLength = {4280, 6931, 4927, 8275, 4946, 8723, 693, 6638, 8418, 2068, 514, 5773, 9517, 6841, 3480, 6809, 454, 4464, 6481, 7451, 7609, 1573, 3463, 1136, 1168, 5335, 4143, 5260, 6581, 8535, 8802, 5067, 8021, 9644, 5434, 514, 4461, 612, 7909, 5811, 9108, 4293, 6633, 559, 6149, 7890, 5717, 2598, 5815, 4505};
    vector<int> painterSpeed = {918, 6710, 1327, 7549, 997, 403, 8898, 7262, 4808, 3930, 166, 194, 709, 9172, 1958};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.897072459928467;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> boardLength = {8, 2, 6, 4, 6, 6, 1, 5, 1, 2, 6, 8, 6, 1, 2, 1, 7, 2, 2, 9, 9, 2, 4, 5, 6, 5, 1, 2, 1, 8, 3, 7, 5, 6, 1, 3, 5, 4, 1, 6, 6, 2, 4, 5, 5, 7, 2, 5, 8, 2};
    vector<int> painterSpeed = {7, 4, 3, 4, 8, 5, 5, 7, 2, 9, 1, 1, 2, 5, 2};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4444444444444446;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> boardLength = {4, 2, 3, 3, 3, 2, 4, 1, 2, 2, 4, 2, 3, 3, 4, 1, 4, 3, 4, 3, 1, 1, 2, 4, 3, 2, 2, 1, 2, 3, 4, 2, 2, 3, 2, 2, 3, 3, 3, 3, 2, 2, 1, 1, 2, 1, 4, 4, 4, 1};
    vector<int> painterSpeed = {1, 3, 2, 3, 3, 3, 2, 1, 4, 3, 1, 1, 4, 4, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.75;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> boardLength = {2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2};
    vector<int> painterSpeed = {1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> boardLength = {2, 2, 1, 1, 3, 2, 3, 1, 2, 3, 3, 1, 2, 3, 2, 3, 3, 1, 3, 3, 2, 2, 2, 3, 2, 2, 3, 1, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 3, 1, 2, 1, 1, 1, 3, 1, 2, 1, 1, 1};
    vector<int> painterSpeed = {1, 3, 2, 3, 2, 1, 1, 1, 3, 1, 1, 3, 1, 2, 3};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> boardLength = {4880, 9129, 3823, 653, 2989, 9306, 6347, 1068, 7832, 6083, 6444, 8161, 9127, 4052, 5822, 1595, 4562, 6972, 4214, 5185, 3960, 9548, 6465, 2296, 7408, 7214, 9144, 9054, 440, 1004, 2213, 5750, 6185, 8814, 6751, 5232, 2172, 8516, 7681, 1908, 9429, 155, 6986, 6427, 9470, 4976, 3645, 4938, 9167, 447};
    vector<int> painterSpeed = {2, 1, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14009.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> boardLength = {6328, 5265, 2437, 1201, 4876, 4437, 746, 2236, 2938, 3017, 6636, 9190, 5722, 5657, 9072, 4576, 281, 6120, 2813, 4640, 2770, 3073, 2844, 3251, 5193, 5790, 9071, 8782, 900, 1494, 4923, 5330, 8614, 6448, 2627, 9166, 1320, 4454, 5250, 6126, 8662, 2694, 2197, 7553, 6660, 7362, 9715, 5065, 4363, 4023};
    vector<int> painterSpeed = {3, 1, 3, 1, 2, 3, 3, 1, 3, 1, 3, 1, 2, 3, 3};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7924.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> boardLength = {220, 8822, 217, 7889, 1582, 1508, 3445, 9369, 6525, 7054, 9123, 6621, 1504, 904, 2376, 9759, 1232, 4179, 9660, 1689, 4097, 9632, 7219, 4114, 1455, 5874, 2378, 6947, 7813, 9680, 3759, 4931, 877, 2362, 6973, 7310, 7519, 163, 1299, 5765, 408, 3325, 6336, 9247, 9497, 1315, 6222, 3198, 6504, 5103};
    vector<int> painterSpeed = {5, 3, 4, 4, 3, 5, 1, 2, 1, 3, 4, 5, 1, 1, 5};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5450.5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> boardLength = {6163, 1640, 8012, 8878, 2329, 9636, 9062, 3963, 9371, 7886, 8261, 9241, 3939, 3141, 1818, 8407, 5589, 2743, 451, 50, 768, 4404, 6790, 6182, 6575, 4897, 2602, 8593, 2780, 7144, 9618, 3940, 3683, 3212, 278, 1924, 5743, 7130, 6463, 1661, 2867, 1675, 6815, 6389, 3191, 3830, 8059, 6206, 3980, 8434};
    vector<int> painterSpeed = {5, 9, 4, 6, 7, 7, 2, 9, 7, 8, 9, 4, 5, 7, 10};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2702.2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> boardLength = {3, 3, 20};
    vector<int> painterSpeed = {9, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.888888888888889;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> boardLength = {241, 177, 93, 142, 62, 128, 74, 454, 429, 362, 338, 286, 260, 75, 341, 28, 342, 34, 272, 124, 413, 284, 90, 24, 20, 195, 164, 342, 283, 57, 192, 421, 342, 263, 449, 214, 377, 78, 369, 179, 422, 221, 264, 443, 37, 405, 25, 376, 322, 445};
    vector<int> painterSpeed = {4516, 1911, 3573, 5184, 262, 140, 3041, 1449, 4443, 5540, 1501, 3981, 2362, 4413, 267};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28786536758193093;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> boardLength = {2595, 3251, 2230, 279, 840, 848, 1689, 1904, 211, 3364, 3274, 2737, 3642, 842, 4549, 3747, 917, 1255, 2616, 2780, 4280, 3476, 2058, 1530, 3204, 487, 4538, 2367, 2624, 491, 2633, 1564, 1094, 3283, 2949, 3036, 4602, 1899, 792, 4081, 356, 4268, 3305, 2436, 3761, 1902, 1409, 1148, 582, 4294};
    vector<int> painterSpeed = {147, 5552, 6, 10000, 20, 5, 40, 707, 10000, 10000, 4161, 95, 1645, 6513, 67};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4967;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> boardLength = {72, 10000, 8920, 959, 65, 1596, 2008, 8320, 8, 4299, 2, 774, 79, 1, 1807, 3, 88, 1582, 10000, 1066, 19, 8, 9, 673, 338, 8, 1, 63, 3320, 33, 8, 974, 3356, 10000, 10000, 4, 10000, 3, 20, 9286, 43, 948, 10000, 1388, 8681, 678, 10000, 5597, 915, 472};
    vector<int> painterSpeed = {43, 10000, 94, 721, 53, 9619, 9, 10000, 82, 675, 10000, 79, 7, 104, 10000};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.03;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> boardLength = {4911, 5, 82, 916, 56, 27, 6, 6, 37, 5941, 10000, 1669, 10000, 9, 6, 18, 1, 1204, 480, 86, 2, 5108, 51, 9, 1, 10000, 347, 53, 9, 631, 836, 9, 6239, 7210, 6919, 7, 6040, 5, 87, 1766, 27, 80, 1339, 10000, 88, 3, 8, 10000, 10000, 3};
    vector<int> painterSpeed = {42, 941, 39, 99, 19, 586, 2271, 48, 7, 1, 23, 756, 6, 1246, 852};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 17.064846416382252;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> boardLength = {42, 2, 10, 51, 105, 91, 8, 80, 8, 39, 7536, 4713, 118, 672, 10000, 6500, 10000, 910, 10000, 10000, 50, 89, 461, 3, 789, 10000, 10000, 10000, 911, 10000, 5, 524, 9, 10000, 67, 5, 7, 10000, 14, 2, 10000, 10000, 4, 54, 31, 164, 8106, 10000, 8, 3};
    vector<int> painterSpeed = {20, 4036, 2536, 9688, 5631, 2, 43, 3, 10000, 9, 1793, 94, 56, 259, 383};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0633;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> boardLength = {149, 77, 146, 10000, 10000, 7, 10000, 34, 3, 10000, 2, 2, 515, 440, 89, 10000, 48, 8223, 10000, 3539, 371, 37, 4, 44, 4, 1, 72, 1241, 556, 77, 59, 418, 485, 455, 54, 9, 54, 62, 95, 7994, 88, 947, 28, 521, 515, 10000, 10000, 8264, 10000, 56};
    vector<int> painterSpeed = {29, 549, 6, 56, 9, 23, 10000, 6, 21, 4707, 10000, 61, 97, 7352, 5290};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8264;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> boardLength = {4, 5, 1, 4, 4, 3, 4, 3, 2, 2, 4, 5, 4, 3, 4, 5, 2, 3, 5, 2, 4, 2, 5, 3, 4, 2, 3, 5, 1, 2, 4, 2, 4, 4, 3, 1, 4, 2, 2, 4, 4, 3, 3, 3, 4, 2, 4, 1, 4, 3};
    vector<int> painterSpeed = {8419, 8782, 6434, 9310, 6564, 190, 8961, 1494, 9062, 7611, 802, 3625, 8633, 3120, 697};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002008032128514056;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> boardLength = {4, 1, 3, 5, 1, 5, 4, 2, 2, 1, 2, 3, 4, 5, 1, 1, 3, 3, 1, 5, 2, 1, 3, 5, 5, 2, 3, 3, 2, 5, 2, 1, 3, 5, 2, 2, 4, 5, 4, 3, 4, 4, 1, 4, 4, 1, 2, 2, 1, 5};
    vector<int> painterSpeed = {9197, 7657, 3817, 2676, 7559, 4369, 6122, 6402, 3414, 3562, 8758, 2726, 4895, 6794, 408};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019589917722345565;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> boardLength = {5, 4, 4, 5, 4, 5, 3, 4, 1, 5, 1, 3, 5, 2, 5, 3, 5, 2, 2, 3, 2, 5, 5, 4, 3, 5, 1, 1, 4, 5, 4, 3, 1, 3, 1, 5, 4, 4, 4, 5, 3, 1, 4, 2, 1, 2, 4, 2, 1, 1};
    vector<int> painterSpeed = {4104, 9578, 5736, 4496, 6140, 9597, 7221, 7818, 9263, 140, 155, 5456, 9450, 524, 8759};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019083969465648854;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> boardLength = {3, 1, 4, 4, 5, 4, 3, 4, 3, 2, 3, 5, 3, 2, 5, 2, 3, 4, 5, 3, 4, 3, 2, 1, 4, 1, 2, 2, 1, 4, 3, 3, 2, 2, 2, 3, 1, 5, 3, 3, 1, 1, 4, 5, 1, 4, 1, 5, 2, 4};
    vector<int> painterSpeed = {7232, 5746, 6407, 9728, 8272, 2879, 8967, 7807, 9180, 8554, 1076, 7752, 7076, 2480, 5274};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0015607928827844546;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> boardLength = {1, 5, 3, 2, 1, 3, 5, 3, 1, 4, 2, 2, 4, 1, 5, 1, 4, 1, 5, 4, 3, 5, 2, 1, 3, 3, 3, 4, 4, 1, 1, 1, 5, 3, 5, 3, 4, 3, 3, 3, 3, 5, 4, 1, 5, 3, 3, 3, 5, 1};
    vector<int> painterSpeed = {2833, 1116, 8302, 4979, 1537, 2204, 4652, 102, 7698, 5499, 6356, 288, 3317, 8509, 8800};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0023645743766122097;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> boardLength = {1, 5, 4, 2, 1, 2, 3, 3, 3, 2, 4, 4, 4, 5, 1, 5, 3, 3, 3, 2, 3, 2, 2, 4, 3, 1, 3, 2, 4, 2, 1, 4, 5, 5, 3, 2, 2, 3, 4, 3, 1, 2, 3, 4, 4, 2, 5, 4, 2, 1};
    vector<int> painterSpeed = {3152, 295, 1877, 8089, 2010, 4629, 4138, 3123, 7732, 8254, 6896, 8948, 9438, 3454, 3357};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002026635784597568;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> boardLength = {3, 1, 2, 2, 1, 2, 5, 2, 3, 4, 3, 3, 1, 1, 2, 1, 2, 5, 4, 1, 3, 5, 1, 1, 1, 1, 4, 5, 5, 2, 4, 1, 2, 5, 4, 2, 4, 5, 1, 5, 5, 4, 3, 2, 3, 1, 3, 3, 2, 2};
    vector<int> painterSpeed = {9626, 1639, 3257, 1201, 4794, 983, 4989, 9808, 2102, 83, 3823, 139, 45, 842, 7951};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002804903386661126;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> boardLength = {3, 4, 2, 5, 4, 2, 5, 5, 4, 4, 4, 5, 4, 4, 2, 1, 2, 4, 5, 1, 1, 2, 2, 5, 1, 2, 2, 1, 5, 4, 3, 2, 1, 3, 5, 1, 4, 5, 4, 5, 5, 5, 1, 3, 3, 4, 1, 2, 1, 5};
    vector<int> painterSpeed = {5768, 8175, 6576, 6427, 6574, 8928, 3566, 6812, 7625, 7045, 7044, 2588, 325, 3808, 3473};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001962983735277622;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> boardLength = {2, 4, 4, 2, 3, 4, 4, 5, 3, 4, 4, 3, 2, 3, 2, 3, 2, 5, 5, 4, 3, 5, 1, 1, 3, 4, 4, 2, 1, 4, 5, 3, 4, 4, 4, 3, 2, 2, 3, 3, 3, 2, 2, 3, 2, 5, 4, 3, 5, 2};
    vector<int> painterSpeed = {6125, 8056, 7944, 6366, 5916, 2128, 3409, 3652, 6710, 1754, 8827, 6254, 4494, 145, 104};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0023467292461132297;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> boardLength = {5, 3, 3, 2, 1, 1, 4, 3, 5, 2, 4, 1, 3, 5, 3, 1, 1, 4, 4, 2, 5, 3, 2, 2, 1, 5, 4, 4, 4, 1, 3, 1, 1, 4, 1, 1, 3, 5, 4, 5, 5, 4, 3, 1, 4, 1, 1, 5, 3, 5};
    vector<int> painterSpeed = {7096, 481, 8584, 9409, 1203, 2388, 3202, 1506, 2765, 2858, 597, 1385, 9881, 6904, 9166};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002291075714597425;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> boardLength = {3, 4, 1, 2, 5, 2, 2, 3, 1, 2, 1, 1, 3, 5, 4, 3, 5, 1, 3, 1, 4, 3, 3, 3, 4, 3, 4, 5, 4, 3, 1, 2, 2, 1, 2, 2, 4, 5, 4, 2, 1, 3, 4, 5, 4, 2, 3, 2, 4, 2};
    vector<int> painterSpeed = {2631, 5676, 7984, 3210, 9156, 2163, 4985, 812, 553, 5001, 16, 8119, 2715, 4227, 3020};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0024665257223396757;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> boardLength = {5, 1, 4, 3, 2, 4, 3, 1, 1, 1, 5, 1, 2, 4, 5, 1, 1, 4, 3, 2, 4, 2, 2, 5, 3, 5, 3, 4, 1, 2, 1, 3, 5, 3, 5, 3, 2, 1, 1, 5, 5, 5, 4, 5, 2, 5, 3, 2, 2, 5};
    vector<int> painterSpeed = {5737, 6056, 531, 6867, 5416, 6283, 2424, 4952, 5627, 7942, 2731, 592, 3328, 4606, 4458};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002329983981360128;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> boardLength = {1, 5, 3, 5, 4, 5, 1, 5, 3, 1, 5, 5, 4, 2, 1, 2, 4, 2, 2, 3, 2, 3, 5, 3, 4, 4, 2, 5, 2, 2, 3, 1, 5, 2, 3, 2, 1, 4, 4, 4, 5, 3, 4, 4, 5, 5, 4, 4, 2, 5};
    vector<int> painterSpeed = {6584, 9567, 5568, 2241, 6217, 8033, 5272, 3482, 1608, 9687, 1063, 8036, 4303, 5752, 7274};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002010338885697875;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> boardLength = {2, 1, 5, 5, 1, 5, 1, 2, 4, 5, 3, 1, 1, 3, 2, 3, 2, 2, 2, 2, 1, 1, 5, 3, 1, 3, 1, 2, 3, 4, 1, 5, 4, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 5, 4, 1, 2, 5, 1, 4};
    vector<int> painterSpeed = {5821, 9435, 4526, 1585, 5462, 7767, 9191, 6039, 5160, 5520, 1056, 2031, 4694, 5716, 982};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0018115942028985507;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> boardLength = {1, 5, 3, 3, 4, 4, 5, 1, 3, 5, 1, 3, 2, 1, 2, 3, 1, 4, 4, 4, 5, 5, 1, 3, 3, 1, 2, 1, 3, 5, 5, 5, 2, 5, 2, 2, 2, 2, 3, 2, 5, 1, 4, 2, 3, 3, 1, 4, 5, 3};
    vector<int> painterSpeed = {4228, 4814, 2277, 4456, 2919, 690, 835, 6673, 9707, 5044, 5038, 1477, 4034, 3372, 6658};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0024927295388450354;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> boardLength = {2, 3, 2, 4, 2, 4, 1, 1, 1, 1, 3, 4, 1, 4, 4, 3, 1, 2, 4, 3, 3, 3, 2, 2, 3, 1, 4, 3, 3, 2, 3, 3, 1, 4, 3, 1, 3, 4, 4, 4, 3, 5, 5, 1, 4, 5, 2, 4, 2, 3};
    vector<int> painterSpeed = {9985, 4564, 1991, 1767, 6170, 4381, 8784, 3529, 2336, 5565, 4260, 948, 9283, 1393, 3610};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0021536252692031586;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> boardLength = {5, 5, 1, 4, 1, 3, 3, 4, 5, 1, 3, 3, 2, 3, 5, 3, 4, 3, 3, 3, 4, 4, 2, 3, 5, 4, 1, 3, 3, 5, 5, 5, 3, 1, 4, 5, 4, 2, 1, 3, 4, 5, 3, 2, 5, 2, 4, 4, 3, 4};
    vector<int> painterSpeed = {974, 3090, 3975, 7120, 2612, 6998, 5416, 2883, 3194, 8836, 9082, 332, 7810, 350, 6101};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025324818321955517;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> boardLength = {5, 3, 5, 2, 5, 5, 1, 4, 4, 2, 1, 3, 5, 3, 4, 3, 2, 4, 1, 1, 4, 4, 5, 3, 1, 1, 1, 2, 3, 1, 3, 1, 2, 3, 1, 4, 2, 4, 4, 2, 2, 2, 1, 1, 4, 3, 2, 3, 4, 4};
    vector<int> painterSpeed = {3498, 3287, 515, 9512, 1634, 8554, 5805, 7047, 148, 36, 4774, 2900, 6732, 4369, 4259};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0023128679562657694;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> boardLength = {4, 2, 4, 4, 2, 4, 1, 2, 4, 2, 1, 5, 2, 2, 2, 1, 4, 5, 4, 5, 2, 1, 4, 4, 4, 2, 4, 4, 2, 5, 5, 4, 4, 3, 1, 2, 5, 3, 4, 2, 1, 2, 1, 2, 3, 1, 2, 5, 2, 3};
    vector<int> painterSpeed = {7415, 7204, 1352, 3557, 5181, 8208, 2659, 6486, 1443, 6722, 2422, 6133, 8771, 6395, 7816};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001888064733648011;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> boardLength = {5, 1, 1, 4, 1, 1, 2, 2, 1, 5, 2, 1, 2, 3, 2, 3, 4, 2, 5, 3, 2, 4, 5, 3, 3, 4, 5, 1, 1, 2, 5, 1, 2, 5, 3, 1, 1, 5, 3, 1, 4, 1, 4, 3, 4, 2, 4, 2, 4, 4};
    vector<int> painterSpeed = {6867, 4551, 1631, 1939, 8554, 2350, 9176, 5749, 7088, 8602, 7753, 3355, 8687, 9251, 7100};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0015519187358916478;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> boardLength = {4, 3, 3, 5, 5, 3, 3, 5, 5, 5, 4, 5, 4, 2, 2, 5, 5, 4, 5, 1, 1, 1, 2, 4, 4, 2, 1, 2, 3, 5, 1, 2, 2, 1, 3, 3, 1, 2, 2, 2, 4, 5, 4, 4, 1, 4, 5, 5, 5, 1};
    vector<int> painterSpeed = {8898, 8511, 2347, 4603, 6632, 3194, 8972, 6383, 1311, 4839, 7802, 2943, 6770, 6074, 5900};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019601930036188178;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> boardLength = {5, 2, 2, 5, 2, 1, 3, 4, 3, 3, 4, 3, 3, 1, 3, 3, 2, 2, 4, 3, 5, 5, 3, 4, 2, 3, 2, 2, 4, 4, 2, 1, 5, 4, 3, 1, 5, 1, 3, 3, 3, 3, 2, 4, 1, 5, 3, 1, 3, 3};
    vector<int> painterSpeed = {9926, 325, 7668, 1937, 4093, 487, 6672, 2054, 6528, 622, 42, 2371, 5453, 5333, 844};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0028690662493479394;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> boardLength = {1, 3, 2, 4, 4, 2, 5, 5, 2, 5, 2, 5, 3, 4, 3, 3, 3, 4, 1, 4, 4, 2, 2, 5, 1, 5, 1, 3, 3, 1, 4, 2, 3, 4, 1, 1, 2, 2, 2, 5, 3, 2, 1, 4, 3, 2, 1, 5, 1, 4};
    vector<int> painterSpeed = {1794, 2373, 1017, 6785, 9014, 659, 5213, 7892, 8809, 5745, 1143, 8052, 8007, 9636, 4617};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0018733608092918695;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> boardLength = {4, 4, 5, 3, 4, 4, 5, 1, 5, 2, 4, 2, 4, 3, 5, 4, 2, 1, 4, 5, 1, 1, 1, 5, 5, 1, 3, 5, 2, 1, 4, 1, 1, 4, 5, 5, 4, 5, 4, 1, 5, 1, 3, 1, 1, 3, 4, 3, 3, 5};
    vector<int> painterSpeed = {29, 7089, 4293, 4233, 6407, 213, 1714, 9210, 6596, 7887, 4943, 4657, 6850, 8896, 8356};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002029030747619791;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> boardLength = {3, 1, 3, 5, 5, 2, 5, 2, 2, 3, 3, 5, 1, 1, 5, 5, 1, 2, 2, 3, 2, 1, 5, 5, 5, 4, 1, 3, 1, 4, 3, 3, 1, 4, 4, 3, 4, 3, 3, 3, 1, 4, 4, 2, 5, 3, 3, 2, 3, 5};
    vector<int> painterSpeed = {8759, 5658, 8240, 957, 943, 1307, 6353, 2146, 1818, 7616, 1379, 597, 28, 858, 3820};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0031553398058252425;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> boardLength = {6, 7, 4, 1, 1, 16, 18, 8, 7, 13, 6, 19, 8, 6, 12, 13, 20, 18, 17, 1, 12, 10, 11, 3, 8, 12, 8, 3, 7, 14, 4, 17, 19, 2, 12, 19, 18, 13, 17, 2, 2, 8, 14, 12, 14, 15, 8, 3, 9, 17};
    vector<int> painterSpeed = {5568, 3451, 2276, 1498, 462, 1054, 5388, 7720, 5637, 7277, 1230, 9981, 1502, 4448, 272};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009117322913535718;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> boardLength = {2, 10, 3, 1, 8, 5, 20, 17, 1, 5, 8, 11, 2, 17, 1, 4, 4, 19, 18, 8, 6, 20, 3, 15, 12, 19, 9, 7, 5, 3, 6, 2, 12, 15, 18, 20, 10, 1, 5, 1, 13, 12, 9, 8, 4, 8, 12, 20, 2, 18};
    vector<int> painterSpeed = {5067, 1181, 5670, 1740, 7361, 6802, 8009, 6046, 3023, 4781, 2627, 4432, 6095, 2959, 5667};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006615944426066821;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> boardLength = {14, 8, 8, 1, 19, 6, 15, 15, 17, 17, 20, 14, 8, 15, 19, 12, 9, 4, 18, 6, 19, 5, 3, 10, 15, 19, 12, 10, 9, 5, 20, 5, 15, 14, 3, 15, 4, 18, 13, 1, 2, 18, 15, 8, 6, 11, 15, 14, 5, 2};
    vector<int> painterSpeed = {4984, 1811, 4597, 6635, 2963, 7469, 4732, 4922, 3793, 7375, 210, 6119, 6684, 5864, 9122};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0074237560192616375;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> boardLength = {2, 4, 8, 11, 1, 12, 5, 5, 15, 14, 12, 18, 11, 6, 16, 4, 9, 14, 7, 9, 2, 2, 20, 11, 14, 15, 20, 10, 15, 5, 5, 3, 13, 4, 18, 6, 17, 15, 4, 8, 3, 5, 8, 19, 8, 2, 9, 4, 10, 16};
    vector<int> painterSpeed = {7665, 7256, 2666, 5119, 7140, 2111, 4348, 7994, 3023, 3761, 3865, 9482, 3476, 7222, 3948};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0062017640573318635;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> boardLength = {6, 7, 10, 7, 12, 6, 6, 4, 7, 19, 6, 17, 8, 6, 20, 7, 7, 14, 18, 8, 8, 5, 16, 4, 7, 11, 9, 11, 2, 9, 4, 9, 18, 2, 10, 14, 10, 7, 15, 1, 20, 17, 3, 15, 20, 7, 8, 18, 18, 16};
    vector<int> painterSpeed = {8550, 3936, 4216, 6286, 6327, 2695, 3306, 4165, 544, 7318, 4151, 3399, 3140, 3081, 2493};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008218745060850324;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> boardLength = {20, 20, 20, 8, 6, 12, 6, 20, 3, 14, 17, 10, 20, 13, 5, 18, 2, 13, 1, 6, 8, 18, 7, 10, 7, 11, 4, 3, 3, 18, 1, 14, 11, 13, 17, 8, 9, 19, 19, 20, 3, 14, 20, 18, 13, 5, 2, 14, 16, 3};
    vector<int> painterSpeed = {2316, 9404, 2700, 3587, 8169, 2575, 4031, 909, 2429, 7540, 3681, 5914, 8051, 5714, 5917};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007943214466790603;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> boardLength = {12, 18, 16, 14, 18, 3, 8, 16, 11, 11, 3, 1, 10, 3, 10, 19, 15, 16, 20, 4, 4, 6, 1, 5, 11, 20, 20, 9, 20, 9, 4, 17, 3, 2, 6, 10, 4, 16, 19, 7, 19, 3, 15, 17, 14, 2, 11, 2, 2, 14};
    vector<int> painterSpeed = {8539, 1084, 5763, 3380, 8169, 4607, 3497, 2542, 3440, 8274, 3432, 9689, 5057, 8740, 4735};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006708638662400661;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> boardLength = {14, 16, 4, 9, 17, 5, 10, 4, 16, 9, 5, 15, 17, 16, 9, 3, 9, 6, 2, 7, 13, 7, 15, 18, 10, 4, 5, 7, 5, 4, 5, 7, 2, 3, 1, 13, 14, 18, 16, 3, 5, 12, 1, 16, 18, 10, 20, 12, 14, 19};
    vector<int> painterSpeed = {4112, 7145, 1255, 3594, 7652, 1427, 5897, 44, 8811, 735, 5212, 8985, 5076, 7668, 7037};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006783110055960658;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> boardLength = {15, 10, 16, 15, 11, 17, 11, 6, 5, 20, 14, 11, 4, 8, 19, 20, 3, 3, 7, 20, 10, 11, 8, 6, 8, 5, 2, 9, 17, 1, 6, 15, 12, 12, 15, 4, 16, 14, 9, 16, 17, 7, 3, 2, 18, 16, 20, 16, 5, 19};
    vector<int> painterSpeed = {1154, 1746, 9792, 9342, 3868, 2286, 9255, 5530, 2879, 4666, 8379, 8141, 8348, 9542, 570};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0066380718954248364;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> boardLength = {2, 12, 17, 4, 1, 5, 7, 10, 6, 1, 14, 5, 16, 8, 13, 11, 19, 15, 7, 3, 11, 20, 8, 7, 20, 10, 6, 7, 19, 7, 19, 16, 3, 13, 7, 3, 16, 14, 18, 17, 17, 14, 15, 12, 5, 11, 12, 16, 13, 9};
    vector<int> painterSpeed = {4981, 7643, 9469, 1348, 3325, 2323, 881, 8711, 5717, 1622, 8975, 8839, 9564, 7360, 7638};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006350974930362117;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> boardLength = {1, 8, 14, 11, 17, 10, 10, 4, 12, 8, 20, 18, 9, 4, 4, 3, 20, 14, 9, 13, 7, 13, 18, 11, 15, 2, 8, 17, 11, 17, 17, 12, 16, 5, 16, 17, 14, 18, 1, 6, 6, 15, 4, 3, 1, 10, 2, 6, 4, 9};
    vector<int> painterSpeed = {5148, 7906, 8202, 935, 7325, 5918, 2856, 5563, 6011, 8154, 2564, 5441, 3834, 8613, 1734};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006520605112154408;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> boardLength = {6, 1, 1, 12, 19, 14, 4, 8, 11, 20, 12, 20, 6, 15, 2, 5, 5, 5, 4, 5, 15, 9, 20, 20, 3, 1, 5, 18, 1, 20, 20, 8, 3, 14, 14, 4, 12, 8, 6, 15, 16, 13, 14, 17, 3, 12, 6, 16, 20, 15};
    vector<int> painterSpeed = {9275, 9711, 8490, 8392, 5731, 2130, 2958, 1962, 7470, 228, 2900, 5832, 447, 6584, 7472};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0067613252197430695;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> boardLength = {2, 1, 1, 6, 1, 8, 5, 2, 2, 20, 17, 5, 19, 19, 12, 13, 11, 4, 9, 4, 7, 4, 2, 16, 13, 14, 19, 11, 8, 4, 12, 18, 2, 20, 1, 20, 16, 1, 16, 5, 4, 10, 20, 14, 9, 17, 8, 20, 15, 6};
    vector<int> painterSpeed = {19, 4776, 3250, 2127, 4884, 3837, 9890, 5228, 3943, 581, 1993, 9796, 4199, 7255, 1569};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007992477668077104;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> boardLength = {14, 14, 15, 12, 7, 2, 5, 2, 12, 2, 7, 10, 20, 10, 5, 2, 17, 8, 14, 1, 12, 9, 5, 10, 4, 15, 15, 15, 7, 13, 4, 8, 19, 20, 10, 6, 8, 13, 14, 1, 7, 2, 2, 14, 12, 5, 3, 17, 18, 17};
    vector<int> painterSpeed = {3312, 4268, 66, 1007, 9624, 4356, 2579, 4972, 9173, 2862, 9940, 5554, 2910, 4702, 5752};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006954102920723227;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> boardLength = {8, 10, 7, 12, 16, 16, 20, 14, 1, 15, 13, 12, 6, 20, 11, 3, 17, 7, 6, 7, 12, 2, 13, 19, 14, 10, 18, 12, 6, 19, 3, 16, 14, 7, 5, 13, 8, 15, 7, 2, 10, 17, 15, 17, 3, 19, 9, 6, 14, 13};
    vector<int> painterSpeed = {2293, 3933, 3091, 1039, 1952, 5106, 6036, 8754, 5366, 9664, 8650, 8693, 2104, 8263, 3538};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007247210399171747;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> boardLength = {16, 13, 9, 11, 7, 15, 1, 18, 17, 15, 11, 6, 16, 1, 3, 9, 14, 3, 16, 8, 11, 1, 16, 15, 6, 4, 17, 5, 18, 16, 2, 19, 17, 7, 2, 3, 16, 7, 9, 9, 2, 19, 18, 13, 19, 6, 16, 13, 5, 6};
    vector<int> painterSpeed = {5790, 6495, 3762, 4437, 987, 3582, 5166, 9155, 6566, 2958, 8460, 2159, 1635, 2374, 2663};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008117443868739206;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> boardLength = {19, 2, 10, 2, 15, 14, 18, 9, 13, 18, 14, 16, 9, 15, 4, 15, 20, 1, 20, 16, 19, 1, 15, 5, 6, 9, 3, 13, 6, 13, 14, 6, 20, 9, 2, 17, 20, 6, 18, 17, 15, 6, 8, 7, 1, 8, 15, 20, 6, 18};
    vector<int> painterSpeed = {5859, 4881, 5748, 8989, 5563, 9175, 7490, 9656, 5728, 1043, 3237, 2317, 4417, 5345, 6988};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006809078771695594;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> boardLength = {9, 2, 1, 5, 15, 13, 15, 11, 3, 7, 12, 3, 5, 13, 10, 4, 1, 13, 17, 3, 8, 5, 1, 16, 9, 7, 20, 18, 12, 12, 13, 2, 12, 6, 2, 11, 8, 18, 15, 18, 17, 8, 3, 14, 4, 4, 4, 6, 18, 13};
    vector<int> painterSpeed = {4973, 5196, 2920, 5531, 9263, 7174, 5428, 3661, 3834, 7592, 4403, 8578, 7181, 6445, 4891};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005505775666630681;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> boardLength = {15, 5, 1, 9, 6, 3, 12, 12, 5, 13, 2, 16, 1, 8, 12, 20, 15, 11, 8, 19, 10, 12, 1, 19, 3, 8, 20, 6, 13, 13, 3, 18, 11, 16, 12, 15, 5, 14, 17, 19, 4, 20, 12, 1, 19, 6, 6, 13, 3, 20};
    vector<int> painterSpeed = {7119, 9692, 3998, 8021, 4909, 3100, 1048, 9985, 8072, 3767, 890, 4811, 1334, 1925, 6992};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007210816224336504;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> boardLength = {4, 15, 1, 10, 18, 1, 11, 20, 9, 3, 16, 8, 11, 20, 3, 1, 1, 3, 16, 2, 13, 18, 4, 11, 19, 12, 16, 8, 20, 19, 7, 17, 2, 2, 15, 18, 7, 4, 4, 1, 16, 8, 16, 1, 7, 18, 7, 1, 16, 14};
    vector<int> painterSpeed = {1002, 3539, 5817, 9047, 9807, 9614, 6521, 3846, 520, 3800, 427, 9990, 5437, 4966, 7492};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0062402496099844;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> boardLength = {2, 13, 1, 2, 10, 2, 15, 17, 2, 1, 13, 13, 19, 20, 4, 14, 8, 14, 16, 20, 18, 5, 13, 15, 12, 15, 14, 14, 19, 3, 3, 16, 14, 4, 2, 15, 18, 9, 6, 9, 1, 7, 9, 1, 13, 20, 9, 20, 16, 16};
    vector<int> painterSpeed = {2794, 8203, 1430, 1309, 3074, 656, 2578, 1318, 7325, 4269, 382, 725, 9500, 6360, 8971};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009655172413793104;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> boardLength = {19, 18, 5, 14, 12, 15, 6, 2, 11, 17, 1, 14, 9, 16, 4, 18, 9, 13, 10, 18, 5, 19, 2, 19, 7, 3, 1, 15, 11, 18, 1, 16, 14, 13, 9, 20, 20, 4, 5, 12, 4, 4, 14, 19, 12, 13, 12, 19, 12, 4};
    vector<int> painterSpeed = {4923, 3655, 2663, 4210, 6088, 3388, 2705, 9353, 7217, 9854, 4748, 8067, 3312, 969, 2022};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00788436268068331;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> boardLength = {14, 2, 14, 1, 15, 15, 4, 18, 16, 2, 5, 20, 4, 6, 10, 13, 20, 13, 10, 15, 5, 10, 7, 1, 18, 18, 10, 9, 17, 20, 11, 2, 2, 1, 14, 3, 7, 10, 9, 14, 18, 1, 14, 15, 1, 12, 11, 13, 9, 10};
    vector<int> painterSpeed = {6157, 8859, 9359, 6544, 851, 2537, 6732, 2408, 4837, 5602, 1851, 8076, 9033, 8150, 5745};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005983545250560957;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> boardLength = {1, 13, 13, 4, 12, 7, 7, 9, 6, 11, 19, 5, 5, 7, 6, 19, 10, 5, 9, 16, 6, 5, 12, 15, 14, 6, 7, 13, 6, 8, 18, 2, 19, 19, 8, 2, 19, 3, 5, 15, 18, 4, 5, 18, 20, 1, 19, 17, 14, 2};
    vector<int> painterSpeed = {1914, 3801, 2136, 8023, 7854, 3749, 1408, 2420, 3031, 9987, 6380, 9883, 2695, 194, 4366};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0076031409697120775;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> boardLength = {16, 12, 10, 13, 8, 16, 8, 16, 1, 5, 10, 19, 10, 17, 19, 14, 8, 2, 20, 6, 9, 4, 12, 15, 12, 11, 5, 12, 10, 16, 4, 7, 4, 9, 14, 12, 11, 1, 6, 5, 1, 3, 4, 12, 5, 1, 3, 13, 19, 13};
    vector<int> painterSpeed = {7119, 6496, 9434, 5424, 5988, 5899, 6474, 3371, 2828, 6017, 9630, 6617, 2941, 6037, 8383};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0053378283466779045;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> boardLength = {43, 16, 86, 63, 63, 35, 73, 62, 30, 72, 65, 51, 16, 39, 84, 39, 51, 96, 46, 30, 88, 51, 3, 70, 75, 75, 82, 62, 87, 1, 37, 53, 89, 87, 10, 60, 90, 23, 55, 86, 23, 22, 77, 91, 94, 16, 82, 55, 79, 85};
    vector<int> painterSpeed = {5896, 7817, 496, 3339, 1080, 9160, 9999, 8950, 6521, 7571, 3933, 1876, 5891, 3725, 7136};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.035278154681139755;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> boardLength = {47, 19, 7, 35, 36, 43, 51, 78, 35, 16, 97, 49, 85, 60, 93, 42, 33, 27, 85, 27, 76, 89, 68, 14, 81, 65, 100, 71, 9, 65, 37, 92, 72, 79, 96, 44, 76, 26, 47, 11, 13, 14, 50, 23, 11, 53, 3, 60, 29, 13};
    vector<int> painterSpeed = {4343, 1868, 8376, 5527, 8878, 5633, 1184, 8950, 6169, 3921, 5733, 4966, 3687, 6917, 2926};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03240223463687151;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> boardLength = {5, 57, 39, 19, 87, 40, 18, 2, 46, 29, 15, 90, 58, 7, 48, 79, 23, 49, 42, 89, 33, 14, 68, 67, 76, 3, 40, 15, 88, 40, 10, 70, 92, 20, 24, 66, 79, 80, 18, 97, 50, 71, 73, 45, 50, 39, 72, 93, 77, 18};
    vector<int> painterSpeed = {7062, 4843, 4664, 8187, 19, 2618, 9143, 322, 471, 2304, 2448, 125, 6509, 4654, 6834};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04170968408011563;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> boardLength = {57, 93, 65, 2, 12, 48, 50, 57, 59, 82, 1, 34, 12, 42, 45, 95, 71, 42, 28, 55, 99, 57, 74, 87, 12, 62, 84, 13, 52, 52, 56, 38, 23, 84, 64, 59, 4, 96, 33, 59, 17, 57, 93, 53, 6, 7, 85, 58, 35, 17};
    vector<int> painterSpeed = {7861, 555, 5344, 4052, 9990, 5675, 9163, 9758, 7559, 2559, 8254, 6408, 9747, 5016, 1526};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.027187852672617214;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> boardLength = {37, 2, 75, 96, 97, 27, 20, 66, 34, 19, 48, 33, 47, 100, 60, 23, 63, 69, 51, 80, 10, 62, 9, 79, 42, 8, 63, 27, 96, 71, 24, 79, 78, 80, 81, 39, 77, 82, 96, 29, 77, 25, 6, 93, 29, 66, 83, 17, 45, 34};
    vector<int> painterSpeed = {6256, 7693, 5636, 562, 3188, 9863, 2358, 2024, 485, 6091, 3542, 4140, 6789, 4865, 8437};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.037919497110412655;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> boardLength = {2, 22, 15, 30, 56, 83, 70, 71, 19, 12, 30, 74, 80, 89, 80, 58, 65, 50, 40, 9, 98, 73, 35, 90, 14, 36, 9, 84, 79, 29, 56, 69, 63, 69, 15, 29, 52, 69, 70, 39, 55, 58, 28, 10, 64, 3, 77, 90, 30, 20};
    vector<int> painterSpeed = {8673, 1043, 2751, 6626, 4900, 863, 4435, 4737, 4931, 3223, 2666, 2603, 33, 6462, 3752};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.043949241720829466;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> boardLength = {18, 62, 50, 10, 34, 25, 85, 94, 83, 98, 61, 100, 62, 11, 82, 60, 18, 92, 12, 43, 24, 61, 52, 99, 47, 88, 58, 59, 55, 16, 61, 96, 91, 66, 77, 86, 94, 50, 78, 71, 79, 2, 15, 39, 44, 87, 64, 20, 17, 93};
    vector<int> painterSpeed = {8129, 4012, 3683, 386, 1113, 9945, 4899, 5207, 3083, 3901, 5705, 535, 2461, 2533, 8310};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04632972322503008;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> boardLength = {89, 33, 88, 86, 1, 45, 40, 83, 98, 23, 37, 83, 27, 79, 49, 9, 76, 37, 45, 75, 76, 82, 10, 12, 89, 12, 88, 9, 29, 34, 4, 83, 44, 83, 92, 96, 43, 6, 54, 31, 71, 75, 78, 85, 66, 88, 20, 85, 61, 26};
    vector<int> painterSpeed = {458, 4520, 2467, 8932, 5594, 3931, 551, 498, 6052, 9840, 1571, 5057, 5152, 1271, 6099};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04579646017699115;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> boardLength = {67, 71, 5, 51, 85, 85, 86, 78, 17, 14, 60, 5, 68, 69, 93, 67, 94, 51, 26, 33, 54, 12, 68, 75, 17, 62, 16, 67, 40, 75, 53, 10, 97, 60, 93, 37, 51, 80, 53, 29, 45, 81, 87, 31, 36, 24, 71, 80, 38, 12};
    vector<int> painterSpeed = {8738, 164, 4944, 7637, 6922, 4530, 3757, 928, 5966, 8052, 9801, 6666, 6882, 2417, 8548};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03200883002207505;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> boardLength = {23, 28, 78, 23, 52, 47, 25, 25, 8, 49, 13, 64, 88, 20, 6, 94, 38, 50, 92, 67, 37, 81, 48, 97, 92, 38, 39, 28, 48, 82, 68, 57, 8, 63, 73, 81, 64, 5, 62, 3, 34, 52, 2, 66, 54, 43, 54, 50, 99, 15};
    vector<int> painterSpeed = {6312, 6782, 6955, 4270, 4777, 3195, 9761, 8132, 4475, 3799, 3026, 1528, 3503, 8852, 1163};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.032550860719874807;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> boardLength = {16, 27, 74, 49, 62, 8, 88, 19, 11, 54, 92, 65, 29, 93, 65, 85, 30, 20, 21, 68, 81, 77, 81, 19, 56, 1, 4, 68, 100, 70, 65, 76, 60, 27, 29, 47, 39, 59, 32, 15, 74, 74, 81, 22, 9, 61, 56, 35, 57, 21};
    vector<int> painterSpeed = {317, 5500, 6729, 7899, 8651, 8998, 8371, 1112, 4890, 4426, 3287, 6892, 8252, 3644, 6840};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.029506630032254212;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> boardLength = {13, 82, 70, 87, 14, 15, 86, 68, 65, 25, 73, 88, 31, 87, 93, 21, 58, 100, 82, 10, 73, 95, 18, 23, 76, 34, 83, 17, 83, 12, 98, 6, 70, 29, 9, 11, 91, 40, 92, 19, 56, 89, 17, 65, 83, 38, 24, 7, 76, 8};
    vector<int> painterSpeed = {823, 9593, 9898, 3375, 8895, 5337, 9354, 9986, 9679, 9457, 3145, 410, 310, 5972, 4553};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.029431144300461235;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> boardLength = {23, 9, 10, 60, 40, 98, 98, 86, 35, 75, 82, 40, 21, 18, 17, 94, 73, 3, 82, 1, 92, 98, 10, 81, 32, 24, 28, 23, 34, 72, 84, 67, 75, 65, 65, 95, 75, 62, 57, 15, 38, 75, 91, 4, 71, 85, 29, 100, 53, 53};
    vector<int> painterSpeed = {4032, 9379, 9654, 190, 3736, 8786, 8784, 580, 8629, 6054, 4432, 8840, 828, 6715, 9909};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.030882352941176472;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> boardLength = {74, 55, 58, 9, 22, 20, 40, 51, 69, 21, 46, 29, 23, 29, 91, 10, 6, 92, 73, 81, 27, 84, 84, 80, 40, 48, 44, 59, 54, 90, 82, 77, 36, 45, 22, 62, 21, 67, 40, 48, 100, 55, 65, 75, 30, 83, 6, 59, 54, 41};
    vector<int> painterSpeed = {3321, 9952, 7217, 6543, 704, 9330, 5271, 8275, 2818, 2125, 2179, 848, 2615, 160, 8638};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03755022862685326;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> boardLength = {67, 99, 13, 95, 42, 24, 72, 100, 2, 51, 29, 93, 34, 2, 97, 60, 4, 28, 13, 100, 87, 40, 1, 50, 71, 40, 84, 61, 73, 82, 93, 93, 40, 53, 99, 17, 85, 59, 79, 7, 94, 38, 50, 57, 37, 42, 66, 69, 100, 98};
    vector<int> painterSpeed = {9902, 8296, 846, 8899, 7210, 1721, 8651, 5133, 8881, 7766, 6464, 6860, 2933, 981, 9797};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03135183728508821;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> boardLength = {40, 44, 33, 92, 57, 18, 83, 2, 48, 28, 48, 26, 66, 76, 56, 46, 19, 96, 58, 91, 86, 99, 43, 65, 63, 51, 29, 99, 24, 22, 13, 13, 24, 16, 9, 95, 79, 79, 20, 51, 3, 49, 99, 20, 23, 99, 3, 17, 23, 26};
    vector<int> painterSpeed = {7845, 5541, 2171, 6582, 1161, 3965, 5785, 60, 7682, 9245, 5402, 9474, 7150, 3868, 3621};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03059099192918511;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> boardLength = {62, 80, 86, 9, 60, 68, 56, 80, 65, 91, 42, 40, 1, 71, 70, 53, 61, 12, 34, 50, 7, 11, 92, 10, 50, 97, 13, 39, 96, 48, 83, 58, 44, 90, 49, 33, 81, 93, 73, 95, 86, 99, 54, 98, 8, 99, 37, 51, 58, 21};
    vector<int> painterSpeed = {8052, 6938, 7544, 7848, 1753, 7908, 990, 6055, 2949, 6019, 9273, 6938, 626, 9621, 1272};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03525980911983033;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> boardLength = {59, 28, 61, 1, 55, 20, 16, 18, 99, 39, 88, 39, 69, 65, 51, 39, 48, 69, 7, 51, 77, 57, 53, 20, 38, 40, 40, 4, 49, 84, 24, 55, 19, 75, 85, 71, 20, 70, 67, 38, 83, 41, 2, 59, 94, 26, 91, 24, 71, 60};
    vector<int> painterSpeed = {8046, 1695, 678, 9520, 1518, 9639, 6436, 90, 6181, 8985, 5369, 4934, 7305, 7956, 1290};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.031642286544247326;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> boardLength = {11, 68, 74, 93, 42, 95, 10, 35, 80, 21, 98, 41, 41, 29, 55, 71, 76, 38, 72, 2, 89, 56, 68, 24, 63, 31, 60, 29, 7, 38, 1, 73, 34, 6, 75, 89, 97, 54, 26, 60, 4, 1, 38, 68, 6, 42, 6, 97, 31, 31};
    vector<int> painterSpeed = {8619, 3010, 9584, 137, 3032, 2922, 4811, 768, 7810, 5898, 2248, 8992, 4940, 4771, 933};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03558013355592654;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> boardLength = {44, 96, 46, 86, 22, 54, 77, 56, 16, 14, 88, 80, 66, 42, 36, 12, 38, 75, 33, 54, 26, 12, 70, 2, 31, 53, 40, 37, 99, 78, 99, 96, 13, 36, 77, 27, 5, 49, 69, 10, 80, 67, 16, 99, 69, 87, 68, 31, 6, 84};
    vector<int> painterSpeed = {1517, 6603, 7251, 1743, 3817, 9384, 9061, 7300, 8174, 3240, 7499, 2798, 4807, 3532, 9989};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03033336670337371;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> boardLength = {55, 30, 84, 29, 80, 46, 97, 89, 48, 78, 80, 67, 1, 69, 24, 64, 63, 88, 82, 63, 64, 85, 61, 81, 96, 65, 32, 68, 50, 95, 27, 9, 26, 16, 18, 35, 23, 55, 97, 42, 93, 43, 55, 28, 91, 83, 31, 71, 90, 26};
    vector<int> painterSpeed = {9648, 2060, 9902, 1872, 801, 1572, 3151, 357, 4743, 9818, 5436, 6681, 9571, 5065, 4376};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.039551140544518026;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> boardLength = {8, 28, 60, 1, 65, 98, 79, 2, 54, 91, 12, 30, 19, 16, 64, 15, 80, 92, 33, 90, 93, 44, 73, 80, 33, 25, 25, 25, 86, 78, 51, 13, 62, 59, 30, 8, 42, 97, 37, 8, 96, 13, 3, 58, 91, 83, 2, 98, 54, 35};
    vector<int> painterSpeed = {4117, 3396, 7072, 854, 620, 3187, 5870, 5251, 1580, 2533, 1303, 7850, 3737, 9838, 2245};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04178343949044586;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> boardLength = {99, 6, 22, 8, 72, 47, 86, 73, 84, 80, 79, 57, 28, 89, 5, 80, 92, 86, 35, 89, 71, 78, 17, 28, 77, 69, 8, 79, 9, 11, 33, 42, 3, 7, 12, 77, 100, 81, 40, 80, 49, 17, 4, 84, 19, 74, 50, 73, 44, 46};
    vector<int> painterSpeed = {9808, 456, 4551, 2638, 2737, 3082, 8638, 7026, 3033, 3298, 4017, 9576, 2609, 9828, 147};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03748955722639933;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> boardLength = {3, 74, 83, 97, 92, 59, 34, 47, 36, 43, 8, 88, 20, 85, 10, 90, 14, 4, 9, 62, 77, 63, 77, 6, 65, 57, 68, 4, 24, 43, 52, 5, 13, 47, 37, 59, 60, 81, 83, 71, 86, 26, 93, 91, 23, 24, 50, 15, 2, 49};
    vector<int> painterSpeed = {6025, 2964, 3274, 5383, 232, 3239, 9884, 4824, 2697, 7752, 9876, 3200, 5450, 926, 4905};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0354306658521686;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> boardLength = {100, 15, 50, 71, 28, 90, 53, 24, 38, 63, 20, 40, 93, 26, 63, 86, 51, 55, 90, 38, 90, 84, 74, 100, 58, 54, 63, 79, 57, 18, 12, 62, 9, 94, 71, 23, 4, 49, 92, 12, 26, 51, 95, 59, 87, 66, 92, 78, 8, 87};
    vector<int> painterSpeed = {2526, 7055, 167, 5049, 4685, 5161, 1811, 9437, 8159, 2382, 1870, 8855, 9307, 1597, 4718};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.040106951871657755;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> boardLength = {44, 468, 240, 907, 757, 416, 679, 628, 443, 156, 935, 666, 6, 37, 290, 246, 625, 129, 628, 830, 995, 924, 271, 506, 188, 295, 676, 677, 25, 586, 39, 551, 695, 658, 765, 871, 385, 286, 805, 358, 221, 187, 576, 511, 769, 400, 534, 474, 485, 52};
    vector<int> painterSpeed = {4190, 512, 7037, 466, 7258, 4600, 526, 7366, 6437, 9144, 9290, 9098, 9098, 8583, 1738};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.29405376052131416;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> boardLength = {610, 290, 143, 647, 630, 697, 625, 340, 877, 838, 809, 188, 589, 982, 584, 627, 793, 323, 263, 364, 204, 758, 697, 359, 130, 758, 570, 204, 870, 227, 796, 209, 326, 340, 920, 915, 3, 905, 65, 436, 332, 462, 908, 802, 553, 717, 251, 184, 917, 295};
    vector<int> painterSpeed = {5953, 4323, 3637, 878, 7513, 4475, 9502, 2474, 8207, 2084, 6411, 6302, 7664, 8864, 5899};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.31957773512476007;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> boardLength = {382, 453, 98, 361, 872, 137, 746, 557, 524, 140, 488, 704, 113, 929, 639, 53, 789, 562, 575, 226, 32, 451, 959, 694, 182, 596, 85, 277, 887, 783, 475, 262, 869, 706, 648, 445, 81, 199, 640, 301, 587, 374, 210, 125, 580, 156, 356, 795, 17, 540};
    vector<int> painterSpeed = {9532, 1911, 1910, 8388, 1237, 7062, 7693, 1843, 8020, 3022, 4346, 1639, 9927, 4401, 5348};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30331419361337764;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> boardLength = {763, 641, 411, 738, 989, 228, 118, 263, 885, 771, 893, 843, 1, 635, 693, 520, 725, 950, 15, 966, 616, 51, 546, 683, 379, 509, 941, 555, 506, 326, 978, 935, 405, 824, 998, 325, 192, 912, 885, 116, 445, 576, 515, 74, 716, 696, 357, 645, 89, 992};
    vector<int> painterSpeed = {5078, 7330, 6475, 2108, 765, 1837, 2053, 5387, 8068, 9037, 1149, 3918, 7403, 8787, 1138};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4216456128371458;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> boardLength = {202, 427, 631, 707, 426, 399, 383, 843, 37, 132, 254, 984, 23, 321, 532, 914, 742, 145, 759, 17, 660, 821, 422, 663, 451, 679, 294, 484, 714, 434, 59, 329, 643, 293, 77, 348, 581, 70, 740, 618, 101, 243, 41, 978, 989, 947, 850, 54, 838, 388};
    vector<int> painterSpeed = {2497, 1357, 5951, 7749, 4827, 8820, 9289, 2411, 8792, 3667, 1574, 1706, 7220, 2443, 742};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3550859747255024;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> boardLength = {489, 913, 5, 862, 248, 774, 414, 317, 901, 984, 950, 948, 385, 499, 664, 10, 706, 924, 892, 513, 105, 711, 592, 968, 164, 617, 925, 302, 246, 369, 214, 288, 658, 784, 835, 719, 335, 561, 475, 425, 557, 478, 744, 394, 406, 177, 964, 399, 791, 476};
    vector<int> painterSpeed = {9018, 2814, 4189, 1526, 6144, 7405, 2981, 3483, 4872, 5950, 7228, 8390, 677, 332, 8605};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.389591788016233;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> boardLength = {749, 450, 598, 705, 298, 534, 836, 600, 657, 140, 858, 861, 754, 831, 200, 224, 237, 11, 403, 286, 301, 550, 588, 11, 427, 614, 27, 695, 408, 604, 640, 309, 374, 405, 845, 240, 740, 842, 475, 489, 252, 357, 944, 156, 554, 764, 418, 385, 971, 2};
    vector<int> painterSpeed = {5627, 9782, 4847, 3448, 7480, 3553, 5957, 7291, 264, 4882, 9946, 5631, 2670, 1415, 9518};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3063399041022909;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> boardLength = {122, 578, 970, 883, 171, 730, 117, 810, 857, 928, 150, 148, 687, 433, 397, 954, 285, 162, 362, 177, 322, 782, 723, 653, 765, 104, 403, 577, 315, 714, 567, 417, 563, 728, 850, 916, 30, 60, 288, 1, 594, 895, 967, 12, 125, 672, 945, 413, 190, 452};
    vector<int> painterSpeed = {6782, 9638, 1679, 3018, 3615, 5415, 7966, 1233, 3597, 2272, 3995, 5385, 8216, 6650, 2349};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3583731064536211;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> boardLength = {523, 819, 410, 901, 142, 661, 379, 572, 455, 586, 743, 448, 564, 896, 474, 409, 141, 422, 371, 698, 535, 14, 255, 628, 823, 524, 707, 940, 255, 982, 582, 460, 320, 659, 378, 814, 300, 760, 317, 741, 750, 805, 376, 318, 665, 431, 427, 540, 657, 310};
    vector<int> painterSpeed = {3018, 6530, 834, 6382, 8993, 7152, 9692, 1772, 343, 7833, 6976, 5134, 6322, 3299, 6625};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33915267430223506;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> boardLength = {285, 623, 821, 361, 206, 564, 703, 103, 459, 380, 787, 50, 865, 789, 361, 661, 275, 226, 112, 991, 923, 608, 513, 669, 832, 440, 893, 591, 676, 632, 183, 844, 28, 605, 212, 394, 67, 370, 663, 902, 776, 398, 593, 716, 459, 684, 46, 532, 271, 980};
    vector<int> painterSpeed = {4482, 7633, 7729, 9666, 1458, 6567, 7070, 9328, 5863, 8640, 3035, 4421, 9836, 6732, 1006};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2836368400366828;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> boardLength = {897, 241, 331, 858, 436, 185, 415, 48, 906, 126, 835, 256, 733, 101, 370, 951, 95, 475, 197, 554, 873, 278, 5, 553, 269, 744, 217, 935, 885, 478, 36, 638, 263, 928, 767, 943, 365, 241, 311, 911, 677, 573, 186, 277, 898, 594, 739, 832, 420, 447};
    vector<int> painterSpeed = {5735, 2373, 8715, 1538, 2611, 3349, 3675, 3766, 4332, 4461, 3060, 345, 7867, 1736, 4921};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44182027649769584;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> boardLength = {835, 187, 415, 219, 722, 352, 169, 562, 795, 982, 205, 431, 651, 219, 164, 73, 339, 466, 724, 442, 770, 13, 222, 453, 972, 14, 785, 254, 968, 818, 504, 973, 360, 826, 78, 1, 833, 376, 466, 974, 923, 386, 597, 962, 98, 110, 112, 41, 978, 771};
    vector<int> painterSpeed = {9099, 1803, 3537, 7151, 3088, 4535, 2695, 6178, 7718, 1071, 7945, 8478, 458, 8639, 2154};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3376195186284207;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> boardLength = {722, 911, 243, 650, 274, 38, 36, 793, 92, 841, 494, 572, 241, 633, 873, 800, 165, 223, 2, 245, 437, 279, 766, 289, 61, 57, 74, 942, 468, 850, 434, 117, 172, 695, 692, 25, 553, 889, 544, 105, 630, 268, 903, 533, 870, 193, 324, 386, 294, 604};
    vector<int> painterSpeed = {7859, 5776, 5996, 8976, 7973, 5992, 3, 101, 5285, 6955, 1543, 2420, 1514, 6302, 9799};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2986991327551701;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> boardLength = {353, 929, 842, 836, 583, 79, 359, 812, 778, 584, 921, 403, 662, 87, 539, 87, 701, 106, 935, 231, 221, 48, 519, 679, 727, 18, 806, 306, 300, 660, 256, 181, 162, 903, 616, 940, 52, 92, 224, 371, 576, 302, 595, 955, 682, 309, 887, 943, 998, 35};
    vector<int> painterSpeed = {2958, 2826, 2627, 5972, 3179, 6223, 283, 967, 9585, 339, 4486, 2187, 6871, 3459, 1086};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4909207777599229;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> boardLength = {224, 152, 318, 541, 332, 975, 23, 754, 486, 248, 266, 107, 418, 250, 416, 636, 297, 584, 945, 958, 437, 687, 12, 923, 454, 641, 750, 926, 332, 320, 445, 807, 849, 302, 359, 692, 466, 721, 324, 931, 482, 860, 764, 139, 219, 840, 231, 835, 466, 979};
    vector<int> painterSpeed = {1752, 7994, 1061, 9311, 9893, 4182, 6804, 2458, 677, 2880, 9970, 6197, 6638, 7412, 7518};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.31436077057793343;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> boardLength = {262, 290, 942, 762, 401, 525, 464, 503, 627, 550, 312, 643, 158, 327, 694, 208, 897, 315, 92, 970, 423, 708, 382, 773, 184, 222, 672, 161, 700, 531, 943, 763, 731, 531, 703, 489, 570, 183, 452, 937, 617, 954, 581, 943, 960, 238, 322, 1, 422, 295};
    vector<int> painterSpeed = {6502, 1848, 2676, 4373, 9175, 7981, 2294, 9435, 6178, 8382, 5417, 4855, 4724, 7844, 75};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3295326400200476;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> boardLength = {350, 332, 370, 203, 101, 796, 292, 881, 726, 309, 609, 624, 77, 42, 623, 952, 774, 853, 762, 936, 862, 278, 984, 257, 978, 467, 468, 798, 839, 152, 901, 416, 391, 167, 594, 621, 861, 883, 804, 904, 957, 318, 368, 188, 163, 987, 487, 26, 118, 390};
    vector<int> painterSpeed = {5820, 1386, 1313, 31, 4882, 3445, 5782, 6765, 7712, 4545, 4815, 5599, 9977, 1902, 2786};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4209020902090209;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> boardLength = {485, 452, 974, 32, 606, 493, 490, 763, 875, 614, 479, 482, 64, 694, 423, 858, 555, 131, 891, 578, 861, 863, 526, 547, 173, 613, 317, 538, 548, 150, 907, 268, 523, 660, 913, 37, 896, 419, 467, 116, 992, 743, 677, 903, 310, 974, 220, 422, 265, 58};
    vector<int> painterSpeed = {193, 3431, 9404, 690, 9864, 3429, 4703, 9431, 767, 1509, 8915, 7807, 4985, 6680, 9987};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33964153399419245;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> boardLength = {423, 627, 926, 182, 737, 238, 133, 313, 631, 163, 125, 560, 67, 813, 951, 301, 486, 551, 850, 105, 73, 806, 25, 584, 803, 545, 356, 234, 511, 534, 81, 11, 177, 78, 272, 827, 605, 560, 864, 881, 187, 843, 777, 267, 523, 605, 375, 33, 210, 257};
    vector<int> painterSpeed = {6327, 2896, 3678, 813, 25, 74, 3284, 4929, 9755, 2962, 611, 2444, 9142, 6293, 5668};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.38283627510651247;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> boardLength = {840, 814, 380, 401, 293, 435, 926, 519, 828, 311, 283, 393, 553, 460, 555, 394, 780, 419, 228, 735, 289, 691, 490, 999, 771, 933, 737, 711, 807, 400, 319, 718, 948, 677, 917, 466, 897, 737, 171, 174, 519, 578, 83, 945, 670, 752, 861, 971, 195, 90};
    vector<int> painterSpeed = {1370, 8518, 3846, 3938, 557, 3527, 3417, 5006, 1083, 6904, 7381, 5596, 9075, 5131, 3831};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4297407912687585;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> boardLength = {401, 729, 436, 792, 230, 332, 828, 706, 855, 255, 622, 13, 89, 493, 584, 714, 304, 109, 776, 327, 186, 557, 952, 201, 436, 891, 736, 632, 166, 959, 470, 780, 613, 164, 388, 221, 134, 85, 566, 480, 122, 596, 374, 901, 10, 638, 590, 205, 280, 482};
    vector<int> painterSpeed = {5801, 9505, 8175, 9112, 6079, 1062, 5777, 8366, 8235, 5605, 6379, 2349, 5339, 5327, 8742};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25234413554860996;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> boardLength = {275, 708, 277, 189, 810, 15, 389, 862, 950, 875, 177, 136, 691, 192, 993, 831, 684, 677, 240, 246, 160, 879, 685, 793, 439, 207, 480, 470, 739, 879, 628, 424, 394, 409, 316, 400, 863, 979, 478, 824, 304, 178, 460, 101, 522, 282, 465, 65, 880, 528};
    vector<int> painterSpeed = {9776, 6289, 6219, 109, 248, 1682, 1003, 2159, 4669, 7715, 3460, 8821, 8752, 9319, 3924};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.35208674304418985;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> boardLength = {590, 462, 753, 328, 135, 613, 876, 262, 736, 475, 46, 246, 937, 849, 873, 489, 942, 573, 350, 787, 972, 269, 134, 854, 631, 535, 206, 204, 57, 454, 958, 229, 457, 574, 814, 889, 238, 240, 133, 85, 775, 634, 16, 762, 744, 614, 28, 612, 99, 850};
    vector<int> painterSpeed = {1768, 4790, 8896, 5648, 2273, 2914, 6914, 299, 1027, 5030, 6008, 1786, 8777, 6163, 9133};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3637547006074631;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> boardLength = {9, 402, 886, 45, 771, 704, 625, 236, 236, 78, 692, 844, 163, 173, 285, 370, 612, 43, 759, 6, 747, 489, 62, 766, 989, 671, 688, 614, 376, 590, 95, 733, 716, 441, 788, 911, 625, 465, 773, 651, 279, 428, 127, 800, 676, 73, 39, 625, 567, 875};
    vector<int> painterSpeed = {2345, 5945, 3388, 2320, 580, 5269, 3617, 8444, 661, 9477, 4781, 2943, 1407, 7183, 9600};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3744543556652116;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> boardLength = {191, 605, 696, 222, 283, 510, 863, 341, 734, 543, 945, 781, 348, 70, 354, 991, 700, 394, 918, 278, 410, 32, 988, 10, 992, 233, 876, 788, 160, 311, 229, 236, 705, 966, 997, 198, 923, 111, 6, 99, 56, 304, 793, 779, 170, 471, 802, 248, 459, 581};
    vector<int> painterSpeed = {4024, 3837, 7053, 5135, 6567, 3854, 6638, 6816, 2620, 5273, 1735, 4427, 372, 4594, 8201};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3588586757712474;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.686274509803922;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> boardLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> painterSpeed = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> boardLength = {5975, 8468, 4133, 8728, 8134, 8224, 7590, 7686, 2555, 7229, 9537, 5030, 1857, 5338, 3980, 4876, 9643, 9046, 8325, 9167, 5099, 6042, 5785, 1401, 173, 2244, 8519, 1253, 9768, 8081, 7914, 2888, 9460, 2767, 8093, 5766, 8178, 6973, 5571, 8645, 2445, 7890, 6331, 7655, 37, 1526, 3985, 3474, 6882, 5184};
    vector<int> painterSpeed = {455, 969, 8386, 7095, 5547, 9932, 2682, 2731, 8554, 5889, 9705, 6336, 7917, 4473, 9314};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.353846153846154;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> boardLength = {6975, 2345, 9355, 9155, 1240, 15, 847, 943, 9212, 1252, 345, 927, 5932, 5732, 6587, 3578, 996, 125, 746, 7778, 555, 222, 333, 444, 115, 6975, 2345, 9355, 9155, 1240, 15, 847, 943, 9212, 1252, 345, 927, 5932, 5732, 6587, 3578, 996, 125, 746, 7778, 555, 222, 333, 444, 115};
    vector<int> painterSpeed = {46, 78, 19, 27, 23, 13, 40, 7, 14, 10, 11, 23, 27, 19, 31};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 416.9130434782609;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> boardLength = {553, 34, 654, 7, 34, 325, 7, 654, 6, 436, 4, 634, 8657, 5432, 5, 432, 3236, 3245, 325, 234, 76, 876, 45, 8, 765, 4, 854, 54, 6, 876, 98, 7, 679, 86, 97, 69, 65, 95, 686, 5, 45, 135, 6, 65, 876, 234, 6754, 543, 548, 964};
    vector<int> painterSpeed = {532, 534, 65, 234, 543, 234, 754, 234, 6, 54, 24, 74, 2, 4, 674};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.667655786350148;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> boardLength = {1, 3332, 4313, 132, 76, 653, 10000, 10000, 9999, 10000, 10000, 10000, 8765, 10000, 1, 10000, 10000, 10000, 10000, 9999, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 1000, 10000, 10000, 10000, 10000, 10000, 7635, 10000, 10000, 10000, 10000, 10000, 1};
    vector<int> painterSpeed = {1, 3, 5, 7, 9, 11, 13, 15, 2, 4, 6, 8, 10, 12, 14};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3846.076923076923;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> boardLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> boardLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> painterSpeed = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> boardLength = {34, 2, 124, 412, 1, 42, 41, 4, 141, 41, 34, 2, 124, 412, 1, 42, 41, 4, 141, 41, 34, 2, 124, 412, 1, 42, 41, 4, 141, 41, 34, 2, 124, 412, 1, 42, 41, 4, 141, 41, 34, 2, 124, 412, 1, 42, 41, 4, 141, 41};
    vector<int> painterSpeed = {4, 56, 2, 24, 34, 2, 542, 34, 245, 25, 66, 3, 124, 52, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.867158671586716;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> boardLength = {10000, 9990, 9980, 9970, 9960, 9950, 9940, 9930, 9920, 9910, 9900, 9890, 9880, 9870, 9860, 9850, 9840, 9830, 9820, 9810, 9800, 9790, 9780, 9770, 9760, 9750, 9740, 9730, 9720, 9710, 9700, 9690, 9680, 9670, 9660, 9650, 9640, 9630, 9620, 9610, 9600, 9590, 9580, 9570, 9560, 9550, 9540, 9530, 9520, 9510};
    vector<int> painterSpeed = {1, 11, 21, 31, 41, 51, 61, 71, 81, 91, 101, 111, 121, 131, 141};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 509.7709923664122;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3636363636363638;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> boardLength = {9383, 886, 2777, 6915, 7793, 8335, 5386, 492, 6649, 1421, 2362, 27, 8690, 59, 7763, 3926, 540, 3426, 9172, 5736, 5211, 5368, 2567, 6429, 5782, 1530, 2862, 5123, 4067, 3135, 3929, 9802, 4022, 3058, 3069, 8167, 1393, 8456, 5011, 8042, 6229, 7373, 4421, 4919, 3784, 8537, 5198, 4324, 8315, 4370};
    vector<int> painterSpeed = {13, 26, 91, 80, 56, 73, 62, 70, 96, 81, 5, 25, 84, 27, 36};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 304.8131868131868;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> boardLength = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> painterSpeed = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> boardLength = {7329, 9898, 7341, 9595, 5895, 7365, 7835, 8698, 8596, 6454, 7873, 6746, 9532, 8743, 8040, 6753, 9486, 7249, 7732, 9389, 8876, 6121, 9476, 5105, 6481, 5194, 6911, 7420, 7056, 7426, 6601, 8590, 6526, 7259, 8612, 5729, 8151, 5899, 8454, 5373, 8132, 6815, 9095, 8157, 5426, 9618, 7334, 5244, 8609, 9291};
    vector<int> painterSpeed = {5901, 7707, 9729, 7719, 5264, 7343, 6972, 5979, 8584, 6533, 8488, 5622, 6157, 8537, 8759};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5643338280625643;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> boardLength = {98, 98, 95, 95, 94, 94, 93, 93, 93, 93, 90, 90, 89, 89, 82, 82, 81, 81, 69, 69, 50, 50, 46, 46, 46, 46, 45, 45, 43, 43, 40, 40, 40, 40, 38, 38, 35, 35, 34, 34, 33, 33, 28, 28, 18, 18, 17, 17, 3, 3};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 49, 51, 35, 27, 48, 36, 54};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.111111111111111;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 8, 12, 15, 13, 19, 20, 23};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.833333333333333;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> boardLength = {1, 1, 18, 5, 6, 14, 7, 4, 8, 9, 2, 10, 2, 17, 2, 6, 19, 8, 16, 7, 14, 17, 15, 7, 4, 7, 10, 5, 17, 6, 10, 3, 18, 6, 16, 20, 10, 18, 17, 1, 3, 3, 11, 1, 12, 1, 16, 14, 16, 15};
    vector<int> painterSpeed = {19, 15, 3, 12, 14, 15, 5, 7, 11, 20, 2, 19, 12, 12, 7};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8421052631578947;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> boardLength = {37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10, 37, 28, 74, 22, 10};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 84, 33, 39, 34, 12, 51, 22};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.156862745098039;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> boardLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> painterSpeed = {3, 1, 2, 1, 1, 1, 2, 1, 1, 4, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 26666.666666666668;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> boardLength = {1, 314, 8611, 2026, 2730, 6717, 3187, 1618, 3723, 4257, 821, 4748, 706, 8409, 598, 2933, 9173, 3680, 7747, 3280, 6977, 8442, 7180, 3067, 1627, 3295, 4661, 2467, 8257, 2791, 4818, 1492, 8744, 2873, 7728, 9765, 4926, 8880, 8273, 203, 1411, 1436, 5009, 217, 5930, 97, 7745, 6507, 7705, 7082};
    vector<int> painterSpeed = {5576, 2061, 6811, 5929, 9555, 6441, 9984, 2438, 6762, 2957, 859, 7724, 4953, 8817, 5100};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 2.663095792578792;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> boardLength = {10000, 1000, 9000, 2000, 8000, 3000, 7000, 4000, 6000, 5000, 10000, 1000, 9000, 2000, 8000, 3000, 7000, 4000, 6000, 5000, 10000, 1000, 9000, 2000, 8000, 3000, 7000, 4000, 6000, 5000, 10000, 1000, 9000, 2000, 8000, 3000, 7000, 4000, 6000, 5000, 10000, 1000, 9000, 2000, 8000, 3000, 7000, 4000, 6000, 5000};
    vector<int> painterSpeed = {10000, 1000, 9000, 2000, 8000, 3000, 7000, 4000, 6000, 5000, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> boardLength = {42, 8468, 6335, 6501, 9170, 5725, 1479, 9359, 6963, 4465, 5706, 8146, 3282, 6828, 9962, 492, 2996, 1943, 4828, 5437, 2392, 4605, 3903, 154, 293, 2383, 7422, 8717, 9719, 9896, 5448, 1727, 4772, 1539, 1870, 9913, 5668, 6300, 7036, 9895, 8704, 3812, 1323, 334, 7674, 4665, 5142, 7712, 8254, 6869};
    vector<int> painterSpeed = {5548, 7645, 2663, 2758, 38, 2860, 8724, 9742, 7530, 779, 2317, 3036, 2191, 1843, 289};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.699867197875166;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> boardLength = {42, 468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 913, 668, 300, 36, 895, 704, 812, 323, 334, 674, 665, 142, 712, 254, 869};
    vector<int> painterSpeed = {548, 645, 663, 758, 38, 860, 724, 742, 530, 779, 317, 36, 191, 843, 289};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.650395778364116;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> painterSpeed = {423, 12, 65, 27, 588, 96, 42, 311, 289, 532, 34, 11, 23, 7, 234};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4793233082706767;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 17, 37, 43, 91, 29, 57, 61};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1208791208791204;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> boardLength = {100, 5, 10000, 10000, 8, 9, 233, 555, 1870, 8888, 9999, 5555, 6666, 333, 2222, 100, 5, 10000, 10000, 8, 9, 233, 555, 1870, 8888, 9999, 5555, 6666, 333, 2222, 100, 5, 10000, 10000, 8, 9, 233, 555, 1870, 8888, 9999, 5555, 6666, 333, 2222, 1234, 1235, 1567, 9876, 7654};
    vector<int> painterSpeed = {1000, 511, 10000, 9999, 899, 977, 233, 555, 1870, 8888, 9999, 5555, 6666, 333, 2222};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {123, 123, 213, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 6.227642276422764;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> boardLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 12, 1, 1};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 49, 51, 35, 27, 48, 36, 54};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7407407407407405;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> boardLength = {9041, 9467, 9334, 9500, 9169, 9724, 9478, 9358, 9962, 9464, 9705, 9145, 9281, 9827, 9961, 9491, 9995, 9942, 9827, 9436, 9391, 9604, 9902, 9153, 9292, 9382, 9421, 9716, 9718, 9895, 9447, 9726, 9771, 9538, 9869, 9912, 9667, 9299, 9035, 9894, 9703, 9811, 9322, 9333, 9673, 9664, 9141, 9711, 9253, 9868};
    vector<int> painterSpeed = {9547, 9644, 9662, 9757, 9037, 9859, 9723, 9741, 9529, 9778, 9316, 9035, 9190, 9842, 9288};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.858560032726529;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {53, 87, 12, 67, 87, 17, 83, 23, 72, 73, 27, 29, 35, 41, 9};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.043478260869565;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> boardLength = {3699, 5457, 3731, 7228, 2554, 1017, 8720, 7977, 3750, 2273, 5347, 8492, 7738, 4637, 5895, 1305, 1236, 3905, 5211, 3491, 9075, 2991, 1897, 2916, 6705, 1892, 9240, 1510, 2213, 1879, 4758, 3634, 1822, 2597, 3013, 4334, 3633, 3396, 3967, 5224, 9061, 5627, 9167, 1063, 9932, 7670, 1248, 3188, 2450, 3095};
    vector<int> painterSpeed = {668, 358, 580, 578, 187, 658, 917, 297, 993, 754, 756, 630, 302, 463, 395};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 26.663291139240506;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> boardLength = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> boardLength = {9317, 6955, 2426, 7297, 1827, 3074, 7605, 529, 3776, 1871, 362, 8840, 8372, 8825, 850, 4060, 8478, 1006, 3512, 8767, 6575, 8364, 6960, 859, 5658, 1903, 7837, 4194, 6486, 1958, 4557, 2799, 9281, 628, 9058, 7763, 2131, 7314, 3366, 6608, 4105, 5252, 3070, 4656, 8413, 9969, 1667, 6727, 9827, 7654};
    vector<int> painterSpeed = {8122, 5336, 985, 2575, 4974, 8520, 4249, 7910, 5839, 6376, 9314, 3575, 9281, 454, 1908};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4051833122629582;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> boardLength = {1698, 1044, 5851, 4273, 6125, 8654, 2730, 4763, 686, 6688, 2537, 6452, 7006, 5215, 5, 89, 4744, 6101, 1679, 450, 7891, 4163, 2533, 6265, 512, 5319, 6866, 415, 9903, 2059, 882, 5787, 6230, 1806, 648, 7700, 1332, 8040, 2819, 3633, 9331, 4648, 126, 7503, 1117, 7871, 1799, 5220, 3025, 754};
    vector<int> painterSpeed = {467, 1521, 1941, 5084, 7216, 8221, 5918, 7715, 5914, 1087, 8062, 2140, 1698, 3180, 189};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4523487664751604;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> boardLength = {9213, 9734, 9992, 9052, 9849, 9559, 9873, 9032, 9889, 9999, 9652, 9668, 9034, 9086, 9149, 9753, 9168, 9484, 9840, 9006, 9526, 9276, 9290, 9804, 9942, 9439, 9830, 9534, 9134, 9012, 9227, 9189, 9564, 9846, 9660, 9915, 9484, 9798, 9656, 9326, 9487, 9859, 9315, 9208, 9798, 9840, 9973, 9484, 9159, 9205};
    vector<int> painterSpeed = {9633, 9171, 9607, 9744, 9217, 9096, 9249, 9973, 9912, 9121, 9862, 9259, 9112, 9248, 9573};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8313090418353575;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> boardLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> painterSpeed = {222, 333, 234, 255, 224, 243, 343, 245, 289, 313, 319, 317, 260, 241, 266};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 135.13513513513513;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 31, 41, 95, 92, 65, 35, 89};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8048780487804876;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> boardLength = {5310, 4247, 1564, 2772, 4408, 8751, 916, 8583, 5191, 8437, 1445, 8381, 5408, 5972, 9048, 7486, 7048, 2314, 9940, 8236, 6575, 3265, 9997, 8399, 5567, 2953, 1853, 7258, 6442, 6546, 9581, 2023, 140, 7363, 571, 298, 7487, 7570, 5879, 3965, 1221, 9766, 1371, 6120, 9416, 5440, 6076, 7257, 3637, 4909};
    vector<int> painterSpeed = {339, 8066, 3989, 6176, 6971, 7428, 6671, 7581, 7253, 4159, 1434, 2719, 9268, 6597, 5242};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3580187545082953;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> boardLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> painterSpeed = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.000400040004;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> boardLength = {8405, 6028, 596, 4781, 1392, 4580, 8009, 3983, 250, 4097, 3762, 7134, 5920, 1497, 7520, 191, 7479, 745, 9768, 2879, 3558, 3434, 2498, 7733, 5056, 9614, 7916, 3950, 3676, 521, 9241, 7419, 452, 5520, 2698, 3487, 6768, 326, 8450, 4108, 3190, 512, 9517, 5128, 1296, 888, 9106, 6697, 6222, 6333};
    vector<int> painterSpeed = {1855, 7084, 7795, 5671, 1691, 3801, 967, 6625, 7713, 8752, 2177, 6142, 6376, 4139, 6733};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1218100499868457;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> boardLength = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 1000};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> boardLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5000.0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 9, 11, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7.285714285714286;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> boardLength = {1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 2, 3, 4, 56, 7, 87, 9, 1, 2, 3, 4, 5100, 1232, 1221, 18, 90, 76, 55, 143, 232, 98, 111, 4, 15, 2777};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 38, 12, 64, 34, 10, 1, 25};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 79.6875;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 3, 6, 35, 27, 48, 36, 53, 10};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.612244897959184;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> boardLength = {953, 2405, 8190, 25, 1088, 4469, 6026, 7789, 7746, 2123, 6520, 950, 3947, 1007, 7162, 7232, 1707, 8051, 8016, 462, 6202, 8609, 3368, 2926, 5786, 2193, 1354, 8016, 2396, 4735, 3459, 5001, 1557, 6685, 8289, 7091, 5890, 9796, 6415, 807, 7497, 225, 5600, 1646, 370, 6478, 2945, 4052, 950, 9678};
    vector<int> painterSpeed = {6282, 3470, 3527, 7005, 934, 3565, 2449, 2999, 5844, 4068, 4608, 1736, 5196, 2327, 4177};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.984483462637811;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> boardLength = {1019, 1091, 1091, 1091, 1091, 1801, 101, 1600, 1001, 191, 1001, 1001, 101, 1301, 1401, 5101, 101, 5101, 6101, 1701, 1801, 1201, 4101, 6101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101, 101};
    vector<int> painterSpeed = {12, 13, 15, 16, 17, 12, 13, 15, 16, 17, 12, 13, 15, 16, 17};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 358.88235294117646;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> boardLength = {82, 6377, 4097, 349, 1873, 77, 6060, 7000, 8494, 6224, 3931, 8674, 6805, 8776, 4124, 1941, 9900, 3670, 6797, 5589, 5538, 3768, 241, 8793, 1689, 4016, 981, 9817, 8563, 2373, 8691, 3224, 8105, 5256, 8023, 4020, 7569, 6634, 6448, 9916, 8752, 396, 2985, 5857, 4430, 231, 7529, 1823, 4202, 5566};
    vector<int> painterSpeed = {1192, 6526, 5118, 1632, 595, 7381, 997, 7762, 2225, 8318, 5801, 893, 870, 720, 6065};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7269776388554945;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 11, 13, 23, 97, 65, 88, 102};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.043478260869565;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 100, 1200, 10, 10, 1, 1, 1, 2, 3};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 4, 5};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 133.33333333333334;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> boardLength = {9384, 887, 2778, 6916, 7794, 8336, 5387, 493, 6650, 1422, 2363, 28, 8691, 60, 7764, 3927, 541, 3427, 9173, 5737, 5212, 5369, 2568, 6430, 5783, 1531, 2863, 5124, 4068, 3136, 3930, 9803, 4023, 3059, 3070, 8168, 1394, 8457, 5012, 8043, 6230, 7374, 4422, 4920, 3785, 8538, 5199, 4325, 8316, 4371};
    vector<int> painterSpeed = {6414, 3527, 6092, 8981, 9957, 1874, 6863, 9171, 6997, 7282, 2306, 926, 7085, 6328, 337};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0067040848144684;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    vector<int> painterSpeed = {50, 31, 55, 46, 2, 5, 8, 9, 4, 6, 8, 5, 4, 2, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5272727272727273;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 51, 35, 27, 48, 36, 54, 10};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 5.194444444444445;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> boardLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> painterSpeed = {1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 400000.0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> boardLength = {3423, 425, 654, 876, 567, 123, 534, 7567, 123, 534, 7567, 1234, 534, 76, 1, 1, 1, 1, 1, 434, 534, 6, 6, 7, 54, 567, 123, 534, 7567, 123, 534, 7567, 1234, 534, 76, 1, 1, 1, 1, 1, 434, 534, 6, 6, 7, 54};
    vector<int> painterSpeed = {321, 42, 657, 12, 432, 5, 5, 5, 5, 5, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 32.798611111111114;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> boardLength = {1231, 2313, 4534, 1231, 1, 23, 56, 2, 1, 78, 1231, 2313, 4534, 1231, 1, 23, 56, 2, 1, 78, 1231, 2313, 4534, 1231, 1, 23, 56, 2, 1, 78, 1231, 2313, 4534, 1231, 1, 23, 56, 2, 1, 78, 1231, 2313, 4534, 1231, 1, 23, 56, 2, 1, 78};
    vector<int> painterSpeed = {12, 45, 23, 78, 45, 78, 23, 12, 1, 10000, 11, 23, 45, 67, 89};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7189;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> boardLength = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69};
    vector<int> painterSpeed = {48, 45, 63, 58, 38, 60, 24, 42, 30, 79, 17, 36, 91, 43, 89};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2911392405063293;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> boardLength = {3562, 2342, 4433, 3434, 3344, 2344, 2334, 2342, 2344, 2343, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988, 9988};
    vector<int> painterSpeed = {4784, 3455, 7655, 3455, 3455, 8766, 2344, 2344, 6546, 4566, 2344, 2344, 9876, 2344, 2344};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 7.828608752449379;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> boardLength = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9987, 9985, 9923, 9983, 10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9987, 9985, 9923, 9983, 10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9987, 9985, 9923, 9983, 123, 536};
    vector<int> painterSpeed = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9987, 9985, 9923};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9957;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> boardLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> boardLength = {93, 960, 928, 131, 456, 380, 724, 141, 828, 797, 356, 663, 938, 867, 118, 353, 663, 355, 427, 654, 65, 679, 691, 42, 361, 466, 429, 552, 1, 804, 900, 586, 384, 349, 982, 834, 683, 311, 358, 833, 487, 660, 253, 823, 852, 722, 412, 618, 956, 340};
    vector<int> painterSpeed = {805, 354, 484, 180, 955, 676, 698, 941, 471, 93, 16, 470, 357, 426, 208};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.902231668437832;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> boardLength = {346, 132, 235, 346, 346, 234, 234, 234, 346, 457, 34, 5, 34, 5, 235, 235, 234, 346, 345, 234, 235, 2436, 234, 235, 235, 235, 234, 2365, 365, 456, 356, 345, 345, 345, 345, 345, 345, 34, 5, 34, 5, 34, 5, 34, 5, 34, 5, 34, 5, 345};
    vector<int> painterSpeed = {187, 349, 238, 651, 982, 739, 183, 659, 132, 659, 23, 15, 321, 452, 345};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2002706359945874;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> boardLength = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74};
    vector<int> painterSpeed = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.71875;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> boardLength = {10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000, 10000, 2000, 3000, 10000, 2000};
    vector<int> painterSpeed = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> boardLength = {9785, 2030, 6979, 5785, 6536, 6916, 756, 5881, 684, 5635, 2636, 1122, 4571, 2210, 1444, 8105, 7898, 5912, 1274, 3698, 8988, 4316, 2615, 1927, 9973, 140, 8030, 7799, 6596, 3186, 7270, 5280, 5664, 4820, 8315, 5216, 6402, 3115, 1186, 3800, 8116, 4390, 7820, 4002, 3800, 960, 2078, 549, 1660, 6815};
    vector<int> painterSpeed = {258, 7766, 2166, 3790, 3851, 3816, 1358, 8519, 5901, 3160, 7264, 9888, 5242, 539, 1688};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7181993392070485;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> boardLength = {690, 244, 981, 201, 487, 403, 983, 375, 823, 369, 314, 782, 957, 831, 55, 11, 353, 885, 59, 592, 733, 459, 348, 326, 226, 710, 809, 87, 611, 862, 551, 912, 226, 654, 177, 668, 578, 291, 736, 228, 174, 904, 740, 30, 368, 241, 881, 732, 60, 303};
    vector<int> painterSpeed = {366, 231, 261, 500, 946, 267, 672, 327, 887, 388, 912, 762, 195, 457, 386};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.365979381443299;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> boardLength = {3838, 9385, 8246, 2264, 5845, 3103, 7650, 4263, 7895, 477, 3846, 7369, 4639, 964, 9632, 4937, 1675, 6, 7416, 2948, 945, 8848, 6747, 5732, 1562, 51, 7795, 9203, 7788, 2602, 8679, 1625, 1986, 6924, 241, 7831, 26, 7890, 2093, 4273, 4718, 2290, 1641, 9357, 9605, 7625, 4293, 1279, 283, 8060};
    vector<int> painterSpeed = {498, 54, 19, 785, 861, 968, 843, 1343, 983, 340, 857, 547, 683, 414, 492};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 25.2146490335707;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> boardLength = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 40000.0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> boardLength = {1042, 1468, 7335, 9501, 2170, 7725, 3479, 3359, 9963, 7465, 6706, 2146, 6282, 8828, 1962, 1492, 3996, 3943, 5828, 6437, 6392, 6605, 4903, 1154, 1293, 4383, 9422, 1717, 2719, 2896, 6448, 4727, 6772, 3539, 2870, 2913, 8668, 9300, 9036, 1895, 2704, 6812, 5323, 4334, 9674, 5665, 7142, 8712, 2254, 7869};
    vector<int> painterSpeed = {8548, 1645, 6663, 6758, 3038, 4860, 9724, 1742, 1530, 1779, 4317, 4036, 5191, 2843, 1289};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.177777777777778;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 99.0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> boardLength = {454, 54, 54, 545, 45, 45, 45, 45, 45, 45, 45, 4, 54, 54, 54, 54, 54, 545, 45, 4, 54, 54, 54, 54, 54, 54, 5, 45, 45, 45, 4, 54, 54, 5, 45, 45, 45, 4, 54, 54, 5, 45, 45, 45, 4, 54, 5, 4, 5, 5};
    vector<int> painterSpeed = {45, 4, 54, 54, 54, 54, 54, 5, 45, 45, 45, 4, 54, 54, 5};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10.092592592592593;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> boardLength = {5, 8, 4, 3, 8, 2, 1, 9, 7, 5, 6, 4, 6, 3, 2, 4, 2, 7, 6, 4, 5, 8, 4, 3, 8, 2, 1, 9, 7, 5, 6, 4, 6, 3, 2, 4, 2, 7, 6, 4, 5, 8, 4, 3, 8, 2, 1, 9, 7, 5};
    vector<int> painterSpeed = {3, 6, 7, 9, 2, 6, 3, 5, 4, 8, 7, 1, 5, 4, 6};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3333333333333335;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> boardLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10000};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> boardLength = {9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951, 9950};
    vector<int> painterSpeed = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 358.6126126126126;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> boardLength = {15, 20, 20, 20, 20, 202, 20, 20, 202, 202, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 202, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> painterSpeed = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 14.428571428571429;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 100, 100, 100};
    vector<int> painterSpeed = {3, 4, 5, 6, 7, 8, 9, 5, 6, 7, 8, 3, 4, 5, 6};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> boardLength = {4167, 102, 8253, 2987, 3685, 1937, 5661, 1617, 1243, 4330, 5621, 1744, 5533, 3550, 9581, 913, 9787, 4122, 5040, 1482, 7190, 1900, 3416, 236, 3396, 9675, 9788, 7446, 35, 9403, 8708, 7709, 1789, 995, 4146, 8856, 5781, 7366, 2327, 5236, 7094, 8249, 8072, 2324, 8732, 2164, 8019, 5551, 1859, 5887};
    vector<int> painterSpeed = {5183, 9587, 416, 1642, 9833, 8323, 1503, 2292, 5392, 1570, 3238, 494, 7117, 786, 9947};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.728261974982203;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> boardLength = {12, 14, 11, 16, 12, 1, 1, 1, 1, 1, 1, 1, 1613, 1, 1, 124, 1, 621, 1, 172, 1, 1, 13, 1, 1, 231, 1, 41, 41, 531, 16, 145, 13, 61, 1, 1, 1, 161, 3412, 71, 11, 61, 17, 19, 145, 12, 13, 14, 51, 21};
    vector<int> painterSpeed = {13, 15, 16, 413, 71, 41, 51, 31, 61, 13, 145, 61, 81, 41, 51};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 11.124137931034483;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> boardLength = {6007, 2482, 1640, 7552, 6928, 3777, 7406, 9877, 9053, 4013, 4482, 255, 7533, 9730, 5065, 6336, 8037, 5574, 3937, 431, 445, 5338, 3649, 4292, 1653, 7322, 2430, 7664, 3494, 3522, 9802, 8055, 4147, 9708, 518, 475, 7757, 6314, 7656, 3670, 1734, 9100, 3961, 3091, 4605, 3839, 5749, 394, 5208, 9779};
    vector<int> painterSpeed = {757, 7238, 5232, 1191, 8217, 9477, 3126, 866, 1646, 7883, 339, 8737, 9520, 4483, 7470};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 3.473160123612224;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> boardLength = {10000, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 666.6666666666666;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> boardLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> boardLength = {24, 42, 31, 42, 52, 26, 24, 42, 12, 341, 31, 25, 23, 412, 9999, 123, 123, 42, 42, 32, 23, 23, 23, 12, 12, 42, 34, 34, 512, 12, 52, 42, 31, 52, 763, 765, 754, 2, 34, 53, 53, 43, 42, 53, 53, 63, 73, 46, 63};
    vector<int> painterSpeed = {3, 4, 5, 2, 3, 4, 2, 3, 4, 5, 6, 5, 2, 3, 2};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 1666.5;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> boardLength = {1651, 32, 165, 65, 31, 65, 3215, 4321, 65, 6516, 5651, 6516, 5165, 165, 416, 54, 651, 651, 65, 4, 61, 165, 35, 564, 321, 65, 651, 651, 65, 46, 565, 165, 165, 1651, 654, 6516, 51, 654, 65, 165, 654, 461, 65, 15, 4, 21, 5, 1, 5, 100};
    vector<int> painterSpeed = {4, 6, 8, 2, 7, 3, 1, 5, 3, 6, 9, 8, 1, 6, 7};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 814.5;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> boardLength = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4975.5;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10000};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 666.6666666666666;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> boardLength = {123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 61.5;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> boardLength = {76, 86, 29, 51, 4, 34, 95, 44, 35, 99, 86, 32, 55, 61, 53, 51, 98, 67, 93, 3, 88, 97, 96, 95, 89, 17, 89, 20, 27, 62, 4, 68, 22, 58, 85, 56, 76, 59, 53, 40, 90, 97, 13, 71, 36, 22, 75, 37, 13, 63};
    vector<int> painterSpeed = {9353, 4822, 6349, 3574, 1, 4331, 8452, 1881, 3907, 6276, 2170, 1179, 1057, 8172, 9054};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.041528632276384286;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> boardLength = {1, 10, 1, 110, 15, 150, 13, 13, 13, 15, 16, 555, 556, 44, 34, 36, 73, 23, 532, 324, 654, 2, 3, 4, 5, 6, 7, 89, 999, 234, 234, 234, 234, 4, 4, 4, 5, 6, 78, 34, 534, 5345, 45, 6, 7, 8, 9, 999, 8, 7};
    vector<int> painterSpeed = {99, 98, 97, 98, 99, 98, 95, 15, 11, 1, 2, 13, 13, 91, 85};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 53.98989898989899;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> boardLength = {10000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> painterSpeed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> boardLength = {123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7, 123, 1, 2, 6, 7};
    vector<int> painterSpeed = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 52.4;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> boardLength = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> painterSpeed = {1234, 1234, 1213, 12, 123, 129, 1234, 123, 177, 14, 123, 123, 785, 123, 663};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18699186991869918;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> boardLength = {189, 3748, 10000, 11, 9300, 400, 50, 2000, 3323, 5000, 2308, 1470, 50, 5913, 6681, 1111, 3333, 999, 3984, 377, 189, 3748, 10000, 11, 9300, 400, 50, 2000, 3323, 5000, 2308, 1470, 50, 5913, 6681, 1111, 3333, 999, 3984, 377, 208, 140, 3510, 5913, 6681, 1111, 333, 2999, 384, 699};
    vector<int> painterSpeed = {90, 136, 152, 180, 23, 167, 220, 150, 30, 348, 207, 103, 97, 79, 125};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 69.9493670886076;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> boardLength = {40, 46, 82, 89, 33, 46, 3, 50, 95, 81, 69, 40, 94, 93, 90, 98, 17, 34, 45, 18, 93, 28, 43, 38, 35, 12, 23, 45, 234, 34, 23, 45, 6, 42, 45, 12, 623, 4, 346, 3434, 25, 43, 52, 5, 3452, 5432, 5, 345, 23, 53};
    vector<int> painterSpeed = {49, 51, 35, 27, 48, 36, 54, 10, 45, 23, 56, 33, 34, 64, 23};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 84.875;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> boardLength = {54, 915, 828, 303, 632, 786, 231, 12, 568, 351, 308, 340, 930, 217, 480, 704, 700, 91, 441, 927, 33, 330, 683, 765, 616, 962, 274, 276, 39, 924, 541, 444, 838, 369, 747, 470, 506, 329, 481, 4, 679, 140, 764, 960, 708, 243, 664, 760, 333, 456};
    vector<int> painterSpeed = {6, 7, 7, 90, 3, 2, 200, 7, 213, 10, 2, 100, 4, 10, 10};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 41.708920187793424;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> boardLength = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> painterSpeed = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    PaintingBoards* pObj = new PaintingBoards();
    clock_t start = clock();
    double result = pObj->minimalTime(boardLength, painterSpeed);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13351270&rd=11124&pm=8516
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <memory> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <queue> 
#include <deque> 
#include <stack> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std; 
 
typedef long long Int; 
typedef pair<int,int> PII; 
typedef vector<int> VInt; 
 
#define FOR(i, a, b) for(i = (a); i < (b); ++i) 
#define RFOR(i, a, b) for(i = (a) - 1; i >= (b); --i) 
#define CLEAR(a, b) memset(a, b, sizeof(a)) 
#define SIZE(a) int((a).size())  
#define ALL(a) (a).begin(),(a).end()  
#define PB push_back 
#define MP make_pair 
 
int R[64][64]; 
int Res[1 << 16]; 
 
class PaintingBoards { 
  public: 
  double minimalTime(vector <int> A, vector <int> S)  
  { 
    double Min = 0, Max = 1e7; 
    int N = SIZE(S); 
    int M = SIZE(A); 
    int t; 
    FOR(t, 0, 64) 
    { 
      double Mid = (Max + Min)/2; 
      int i, j, k; 
      FOR(i, 0, N) 
        FOR(j, 0, M) 
        { 
          int sum = 0; 
          FOR(k, j, M) 
          { 
            sum += A[k]; 
            if(sum > Mid*S[i]) 
              break; 
          } 
 
          R[i][j] = k; 
        } 
 
      FOR(i, 0, N) 
        R[i][M] = M; 
 
      CLEAR(Res, 0); 
      FOR(i, 0, 1 << N) 
      { 
        FOR(j, 0, N) 
          if((i & (1 << j)) == 0) 
            Res[i ^ (1 << j)] = max(Res[i ^ (1 << j)], R[j][ Res[i] ]); 
      } 
 
      if(Res[(1 << N) - 1] == M) 
        Max = Mid; 
      else 
        Min = Mid; 
    } 
 
    return Max; 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/