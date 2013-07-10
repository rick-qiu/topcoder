/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2411
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

class PuckShot {
public:
    double caromAngle(int puckCoord, vector<int> xCoords, vector<int> yCoords);
};

double PuckShot::caromAngle(int puckCoord, vector<int> xCoords, vector<int> yCoords) {
    double ret;
    return ret;
}


int test0() {
    int puckCoord = 2833;
    vector<int> xCoords = {1500, 1580};
    vector<int> yCoords = {1730, 1730};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 47.022170720170784;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int puckCoord = 2833;
    vector<int> xCoords = {2690};
    vector<int> yCoords = {500};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 44.88563731851585;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int puckCoord = 2833;
    vector<int> xCoords = {2690, 2676};
    vector<int> yCoords = {500, 500};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int puckCoord = 2900;
    vector<int> xCoords = {1500, 1580, 2200, 2600};
    vector<int> yCoords = {1730, 1730, 1000, 500};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 46.79257639615244;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int puckCoord = 55;
    vector<int> xCoords = {1479, 1427, 2556, 2834, 2866, 2958, 2763, 2899, 2630};
    vector<int> yCoords = {1708, 1726, 487, 471, 121, 446, 473, 266, 380};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.706043385046158;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int puckCoord = 1809;
    vector<int> xCoords = {1571};
    vector<int> yCoords = {1730};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 33.18726534329994;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int puckCoord = 1;
    vector<int> xCoords = {1831};
    vector<int> yCoords = {1629};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.464425628113574;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int puckCoord = 11;
    vector<int> xCoords = {1668};
    vector<int> yCoords = {1693};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.508782280926084;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int puckCoord = 115;
    vector<int> xCoords = {1504, 1430, 2568, 2477, 2767, 2507, 2645, 2684, 2838};
    vector<int> yCoords = {1732, 1720, 281, 228, 173, 472, 325, 225, 229};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.980648511094003;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int puckCoord = 2839;
    vector<int> xCoords = {1472, 1550, 2905, 2692, 2687, 2688, 2854, 2798, 2950};
    vector<int> yCoords = {1705, 1701, 85, 174, 193, 263, 141, 448, 276};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int puckCoord = 655;
    vector<int> xCoords = {1474, 1500, 2885, 2534, 2478, 2794, 2576, 2769, 2694};
    vector<int> yCoords = {1714, 1732, 391, 253, 392, 450, 186, 341, 326};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 24.78288409190985;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int puckCoord = 480;
    vector<int> xCoords = {1514, 1509, 2600, 2675, 2878, 2782, 2584, 2873, 2722};
    vector<int> yCoords = {1699, 1688, 379, 119, 389, 283, 224, 102, 366};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 23.803968594369593;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int puckCoord = 1247;
    vector<int> xCoords = {1545, 1503, 2615, 2504, 2886, 2721, 2497, 2579, 2926};
    vector<int> yCoords = {1647, 1678, 357, 83, 240, 446, 433, 211, 109};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 28.729681693903068;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int puckCoord = 2901;
    vector<int> xCoords = {1486, 1447, 2627, 2797, 2908, 2827, 2713, 2647, 2500};
    vector<int> yCoords = {1698, 1659, 91, 186, 455, 280, 463, 93, 123};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int puckCoord = 37;
    vector<int> xCoords = {1575, 1476, 2568, 2716, 2510, 2730, 2774, 2626, 2916};
    vector<int> yCoords = {1710, 1692, 142, 298, 292, 367, 99, 340, 156};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.62493085310635;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int puckCoord = 1669;
    vector<int> xCoords = {1470, 1575, 2799, 2716, 2481, 2687, 2904, 2521, 2685};
    vector<int> yCoords = {1640, 1714, 435, 253, 301, 217, 139, 170, 108};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 32.31733026762112;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int puckCoord = 840;
    vector<int> xCoords = {1528, 1472, 2953, 2854, 2918, 2849, 2643, 2663, 2852};
    vector<int> yCoords = {1649, 1725, 491, 284, 491, 343, 98, 243, 256};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 25.902981728497977;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int puckCoord = 1441;
    vector<int> xCoords = {1580, 1494, 2834, 2658, 2650, 2486, 2648, 2891, 2649};
    vector<int> yCoords = {1729, 1649, 499, 229, 188, 141, 139, 259, 475};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 29.923263658520504;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int puckCoord = 1359;
    vector<int> xCoords = {1464, 1500, 2765, 2961, 2705, 2896, 2866, 2650, 2720};
    vector<int> yCoords = {1685, 1732, 477, 286, 309, 214, 59, 260, 429};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 29.609131167187037;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int puckCoord = 72;
    vector<int> xCoords = {1531, 1469, 2735, 2539, 2540, 2574, 2769, 2763, 2485};
    vector<int> yCoords = {1666, 1718, 174, 212, 134, 363, 162, 440, 380};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.783183102247648;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int puckCoord = 851;
    vector<int> xCoords = {1551, 1516, 2841, 2763, 2565, 2493, 2857, 2512, 2550};
    vector<int> yCoords = {1731, 1658, 306, 244, 140, 393, 303, 461, 302};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 25.972558302706005;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int puckCoord = 2026;
    vector<int> xCoords = {1494, 1475, 2841, 2540, 2959, 2718, 2930, 2580, 2862};
    vector<int> yCoords = {1700, 1703, 396, 460, 85, 249, 358, 392, 51};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int puckCoord = 2458;
    vector<int> xCoords = {1501, 1585, 2568, 2612, 2671, 2928, 2861, 2769, 2531};
    vector<int> yCoords = {1720, 1687, 395, 219, 178, 423, 302, 456, 283};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int puckCoord = 950;
    vector<int> xCoords = {1522, 1499, 2835, 2681, 2482, 2898, 2655, 2831, 2740};
    vector<int> yCoords = {1703, 1704, 441, 241, 232, 427, 93, 88, 91};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 26.61472958617206;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int puckCoord = 1411;
    vector<int> xCoords = {1501, 1420, 2869, 2563, 2967, 2920, 2862, 2620, 2896};
    vector<int> yCoords = {1722, 1718, 133, 201, 260, 227, 144, 155, 479};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 30.034287741826027;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int puckCoord = 2861;
    vector<int> xCoords = {1478, 1499, 2668, 2822, 2953, 2943, 2485, 2695, 2812};
    vector<int> yCoords = {1658, 1725, 293, 290, 177, 187, 292, 352, 220};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 48.23641542085916;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int puckCoord = 519;
    vector<int> xCoords = {1521, 1545, 2570, 2750, 2963, 2728, 2944, 2883, 2534};
    vector<int> yCoords = {1725, 1730, 68, 242, 376, 161, 311, 149, 413};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 24.015771472506188;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int puckCoord = 678;
    vector<int> xCoords = {1489, 1497, 2627, 2696, 2705, 2835, 2772, 2839, 2613};
    vector<int> yCoords = {1682, 1706, 122, 200, 291, 488, 340, 298, 452};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 24.917177035275017;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int puckCoord = 2849;
    vector<int> xCoords = {1498, 1535, 2721, 2492, 2591, 2769, 2540, 2501, 2573};
    vector<int> yCoords = {1732, 1703, 115, 394, 249, 404, 287, 108, 264};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int puckCoord = 2859;
    vector<int> xCoords = {1543, 1441, 2709, 2688, 2549, 2491, 2648, 2866, 2625};
    vector<int> yCoords = {1685, 1722, 144, 331, 250, 241, 172, 323, 206};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 47.114293288225944;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int puckCoord = 499;
    vector<int> xCoords = {1508, 1535, 2932, 2946, 2850, 2809, 2526, 2505, 2873};
    vector<int> yCoords = {1732, 1669, 283, 215, 447, 136, 251, 419, 222};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 23.906713436666493;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int puckCoord = 2243;
    vector<int> xCoords = {1425, 1540, 2688, 2575, 2584, 2785, 2649, 2723, 2823};
    vector<int> yCoords = {1686, 1656, 500, 161, 141, 171, 408, 380, 257};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 36.45054739069765;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int puckCoord = 858;
    vector<int> xCoords = {1484, 1567, 2944, 2523, 2628, 2532, 2487, 2817, 2864};
    vector<int> yCoords = {1669, 1707, 98, 451, 391, 486, 84, 81, 125};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 26.017015664393845;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int puckCoord = 1438;
    vector<int> xCoords = {1468, 1517, 2769, 2931, 2501, 2752, 2690, 2547, 2737};
    vector<int> yCoords = {1646, 1731, 186, 324, 399, 482, 162, 470, 308};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 30.259435247307067;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int puckCoord = 2128;
    vector<int> xCoords = {1590, 1528, 2653, 2657, 2804, 2604, 2796, 2743, 2850};
    vector<int> yCoords = {1730, 1707, 219, 414, 178, 303, 168, 215, 213};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 36.7704834376051;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int puckCoord = 91;
    vector<int> xCoords = {1460, 1412, 2926, 2874, 2553, 2769, 2734, 2921, 2665};
    vector<int> yCoords = {1722, 1699, 354, 449, 84, 51, 253, 110, 159};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.870017567612067;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int puckCoord = 1486;
    vector<int> xCoords = {1537, 1476, 2751, 2682, 2784, 2510, 2781, 2704, 2742};
    vector<int> yCoords = {1676, 1649, 98, 430, 402, 165, 371, 93, 219};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 30.66732440931191;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int puckCoord = 838;
    vector<int> xCoords = {1468, 1485, 2903, 2898, 2743, 2864, 2661, 2667, 2836};
    vector<int> yCoords = {1691, 1712, 364, 226, 412, 354, 312, 136, 185};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 25.890368709532936;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int puckCoord = 2810;
    vector<int> xCoords = {1511, 1518, 2613, 2562, 2542, 2963, 2495, 2831, 2693};
    vector<int> yCoords = {1678, 1670, 367, 473, 302, 140, 292, 98, 453};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int puckCoord = 1098;
    vector<int> xCoords = {1493, 1453, 2917, 2820, 2483, 2955, 2779, 2946, 2765};
    vector<int> yCoords = {1712, 1686, 239, 461, 397, 110, 358, 362, 477};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 27.631422371236447;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int puckCoord = 1140;
    vector<int> xCoords = {1472, 1552, 2657, 2724, 2524, 2729, 2791, 2836, 2952};
    vector<int> yCoords = {1686, 1695, 470, 98, 101, 460, 500, 370, 255};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 27.933100262427935;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int puckCoord = 2762;
    vector<int> xCoords = {1500, 1594, 2814, 2659, 2865, 2542, 2904, 2942, 2660};
    vector<int> yCoords = {1732, 1719, 342, 182, 71, 245, 401, 497, 470};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 45.84550797561554;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int puckCoord = 35;
    vector<int> xCoords = {1460, 1525, 2541, 2757, 2949, 2957, 2921, 2746, 2581};
    vector<int> yCoords = {1644, 1725, 284, 447, 243, 422, 490, 284, 224};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.61595396254762;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int puckCoord = 2679;
    vector<int> xCoords = {1450, 1545, 2701, 2657, 2681, 2672, 2476, 2530, 2790};
    vector<int> yCoords = {1687, 1690, 400, 140, 476, 250, 388, 223, 338};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 45.05791629169531;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int puckCoord = 2328;
    vector<int> xCoords = {1431, 1526, 2475, 2586, 2647, 2910, 2803, 2714, 2817};
    vector<int> yCoords = {1720, 1680, 444, 333, 198, 391, 428, 235, 56};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 39.79337934817982;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int puckCoord = 152;
    vector<int> xCoords = {1500, 1487, 2728, 2491, 2621, 2825, 2642, 2955, 2904};
    vector<int> yCoords = {1732, 1731, 143, 336, 324, 266, 208, 165, 298};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 22.15330349945802;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int puckCoord = 1031;
    vector<int> xCoords = {1501, 1535, 2857, 2678, 2560, 2779, 2967, 2598, 2557};
    vector<int> yCoords = {1724, 1655, 70, 376, 282, 272, 261, 127, 381};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 27.162423084690076;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int puckCoord = 55;
    vector<int> xCoords = {1479, 1427, 2530, 2808, 2840, 2932, 2737, 2873, 2604};
    vector<int> yCoords = {1708, 1726, 487, 471, 121, 446, 473, 266, 380};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.706043385046158;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int puckCoord = 2628;
    vector<int> xCoords = {1548, 1485, 2725, 2519, 2813, 2883, 2620, 2836, 2647};
    vector<int> yCoords = {1667, 1645, 204, 125, 347, 407, 391, 169, 357};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 44.22544934160531;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int puckCoord = 1891;
    vector<int> xCoords = {1543, 1518, 2662, 2944, 2757, 2493, 2962, 2557, 2769};
    vector<int> yCoords = {1697, 1698, 214, 155, 206, 53, 479, 444, 382};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 32.722652216820116;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int puckCoord = 1919;
    vector<int> xCoords = {1498, 1589, 2876, 2731, 2672, 2763, 2539, 2749, 2884};
    vector<int> yCoords = {1689, 1710, 100, 140, 319, 387, 230, 426, 313};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 34.842691883211046;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int puckCoord = 623;
    vector<int> xCoords = {1588, 1496, 2567, 2691, 2867, 2635, 2511, 2958, 2523};
    vector<int> yCoords = {1691, 1676, 76, 160, 345, 450, 205, 498, 83};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 24.59828302183631;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int puckCoord = 665;
    vector<int> xCoords = {1472, 1538, 2610, 2951, 2756, 2634, 2967, 2847, 2671};
    vector<int> yCoords = {1710, 1716, 238, 463, 318, 128, 425, 241, 52};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 24.84110535733005;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int puckCoord = 1693;
    vector<int> xCoords = {1455, 1442, 2579, 2944, 2740, 2667, 2932, 2580, 2797};
    vector<int> yCoords = {1678, 1651, 407, 63, 183, 194, 377, 494, 352};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 32.54553768877361;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int puckCoord = 2199;
    vector<int> xCoords = {1504, 1466, 2655, 2722, 2795, 2887, 2614, 2762, 2886};
    vector<int> yCoords = {1643, 1683, 271, 245, 485, 420, 326, 487, 315};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 36.53508316908163;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int puckCoord = 943;
    vector<int> xCoords = {1541, 1494, 2652, 2799, 2813, 2807, 2539, 2849, 2964};
    vector<int> yCoords = {1683, 1730, 96, 200, 420, 118, 158, 164, 463};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 26.56835772021335;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int puckCoord = 1129;
    vector<int> xCoords = {1479, 1539, 2598, 2741, 2955, 2587, 2604, 2641, 2913};
    vector<int> yCoords = {1699, 1698, 114, 209, 207, 270, 375, 492, 97};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 27.85350529829538;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int puckCoord = 2767;
    vector<int> xCoords = {1521, 1469, 2707, 2651, 2923, 2511, 2778, 2734, 2852};
    vector<int> yCoords = {1716, 1721, 450, 223, 302, 221, 410, 52, 74};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int puckCoord = 1709;
    vector<int> xCoords = {1594, 1491, 2612, 2904, 2519, 2795, 2618, 2954, 2677};
    vector<int> yCoords = {1706, 1703, 69, 293, 370, 233, 151, 462, 306};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 32.699275562952415;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int puckCoord = 2841;
    vector<int> xCoords = {1514, 1438, 2672, 2719, 2773, 2673, 2828, 2510, 2945};
    vector<int> yCoords = {1694, 1703, 324, 235, 249, 140, 406, 262, 256};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 46.96696076023582;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int puckCoord = 393;
    vector<int> xCoords = {1497, 1562, 2678, 2611, 2690, 2518, 2482, 2656, 2633};
    vector<int> yCoords = {1696, 1689, 364, 240, 448, 363, 485, 51, 491};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 23.343947654891466;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int puckCoord = 811;
    vector<int> xCoords = {1426, 1480, 2580, 2554, 2691, 2485, 2941, 2693, 2573};
    vector<int> yCoords = {1680, 1725, 104, 288, 379, 310, 317, 314, 236};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 25.72120594463378;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int puckCoord = 1336;
    vector<int> xCoords = {1472, 1509, 2554, 2552, 2813, 2900, 2827, 2704, 2901};
    vector<int> yCoords = {1699, 1722, 205, 335, 162, 389, 495, 201, 301};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 29.42455449702296;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int puckCoord = 1334;
    vector<int> xCoords = {1527, 1513, 2509, 2505, 2873, 2893, 2707, 2857, 2585};
    vector<int> yCoords = {1654, 1671, 338, 75, 303, 485, 254, 281, 496};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 29.408603323726766;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int puckCoord = 1646;
    vector<int> xCoords = {1479, 1468, 2762, 2547, 2878, 2485, 2615, 2597, 2808};
    vector<int> yCoords = {1729, 1697, 399, 400, 482, 271, 329, 307, 247};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 32.101295117355;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int puckCoord = 1309;
    vector<int> xCoords = {1415, 1499, 2556, 2742, 2593, 2864, 2911, 2838, 2934};
    vector<int> yCoords = {1684, 1730, 470, 239, 474, 407, 114, 88, 104};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 29.21053511716169;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int puckCoord = 1664;
    vector<int> xCoords = {1537, 1527, 2819, 2488, 2874, 2550, 2620, 2793, 2600};
    vector<int> yCoords = {1698, 1671, 257, 294, 281, 91, 432, 294, 461};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 32.27014579240081;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int puckCoord = 1461;
    vector<int> xCoords = {1500, 1519, 2486, 2518, 2709, 2558, 2596, 2514, 2891};
    vector<int> yCoords = {1732, 1654, 364, 378, 283, 493, 434, 412, 159};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 30.453650337044166;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int puckCoord = 2215;
    vector<int> xCoords = {1548, 1503, 2498, 2713, 2914, 2825, 2525, 2960, 2657};
    vector<int> yCoords = {1660, 1709, 425, 155, 292, 167, 321, 55, 356};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 37.31873142401753;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int puckCoord = 1819;
    vector<int> xCoords = {1413, 1503, 2506, 2941, 2556, 2691, 2505, 2930, 2935};
    vector<int> yCoords = {1714, 1730, 206, 469, 387, 252, 121, 295, 131};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 33.79206711472079;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int puckCoord = 2699;
    vector<int> xCoords = {1434, 1483, 2947, 2742, 2552, 2652, 2645, 2715, 2685};
    vector<int> yCoords = {1723, 1729, 355, 124, 75, 82, 324, 498, 322};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 43.12723573636204;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int puckCoord = 1797;
    vector<int> xCoords = {1477, 1502, 2731, 2595, 2843, 2564, 2665, 2936, 2527};
    vector<int> yCoords = {1680, 1673, 282, 284, 312, 241, 77, 233, 380};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 33.56838294203687;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int puckCoord = 2404;
    vector<int> xCoords = {1448, 1450, 2773, 2544, 2532, 2685, 2726, 2496, 2689};
    vector<int> yCoords = {1653, 1707, 205, 73, 273, 184, 398, 444, 240};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int puckCoord = 579;
    vector<int> xCoords = {1510, 1447, 2527, 2572, 2540, 2894, 2715, 2737, 2877};
    vector<int> yCoords = {1714, 1665, 176, 152, 153, 472, 293, 55, 391};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 24.3486301778553;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int puckCoord = 2703;
    vector<int> xCoords = {1439, 1449, 2753, 2558, 2533, 2827, 2967, 2598, 2655};
    vector<int> yCoords = {1708, 1694, 171, 355, 255, 234, 199, 470, 467};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 45.4582231624032;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int puckCoord = 2360;
    vector<int> xCoords = {1550, 1427, 2560, 2825, 2648, 2825, 2663, 2651, 2693};
    vector<int> yCoords = {1731, 1711, 192, 281, 239, 113, 66, 411, 214};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int puckCoord = 845;
    vector<int> xCoords = {1543, 1439, 2540, 2773, 2583, 2726, 2759, 2584, 2501};
    vector<int> yCoords = {1699, 1684, 415, 328, 443, 349, 323, 337, 362};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 25.93456438043377;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int puckCoord = 112;
    vector<int> xCoords = {1546, 1499, 2861, 2795, 2831, 2573, 2612, 2773, 2917};
    vector<int> yCoords = {1676, 1732, 336, 63, 105, 185, 478, 76, 60};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.96676149838636;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int puckCoord = 2708;
    vector<int> xCoords = {1511, 1538, 2690, 2616, 2598, 2537, 2887, 2643, 2706};
    vector<int> yCoords = {1709, 1687, 211, 342, 337, 342, 426, 166, 253};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 44.73226466129779;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int puckCoord = 2818;
    vector<int> xCoords = {1530, 1481, 2664, 2491, 2951, 2774, 2837, 2759, 2532};
    vector<int> yCoords = {1698, 1702, 225, 370, 258, 241, 438, 376, 255};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 44.59886924109083;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int puckCoord = 2494;
    vector<int> xCoords = {1528, 1450, 2487, 2506, 2822, 2587, 2516, 2730, 2787};
    vector<int> yCoords = {1689, 1684, 275, 99, 169, 259, 494, 370, 135};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 42.15130536538905;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int puckCoord = 879;
    vector<int> xCoords = {1477, 1514, 2959, 2658, 2688, 2573, 2777, 2764, 2915};
    vector<int> yCoords = {1730, 1728, 247, 409, 206, 203, 173, 335, 158};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 26.15124103849317;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int puckCoord = 1293;
    vector<int> xCoords = {1572, 1483, 2873, 2705, 2880, 2873, 2636, 2965, 2479};
    vector<int> yCoords = {1681, 1724, 95, 176, 61, 393, 285, 304, 454};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 29.085043625440115;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int puckCoord = 2357;
    vector<int> xCoords = {1545, 1507, 2614, 2767, 2926, 2930, 2880, 2600, 2649};
    vector<int> yCoords = {1677, 1672, 415, 64, 195, 405, 267, 277, 344};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 40.18937659495279;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int puckCoord = 2965;
    vector<int> xCoords = {1461, 1479, 2748, 2572, 2905, 2961, 2779, 2727, 2806};
    vector<int> yCoords = {1724, 1701, 340, 322, 191, 321, 232, 334, 199};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int puckCoord = 1310;
    vector<int> xCoords = {1499, 1507, 2619, 2880, 2832, 2599, 2693, 2552, 2537};
    vector<int> yCoords = {1696, 1698, 63, 344, 444, 450, 117, 361, 298};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 29.218411128774186;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int puckCoord = 2820;
    vector<int> xCoords = {1442, 1503, 2678, 2523, 2586, 2886, 2652, 2957, 2726};
    vector<int> yCoords = {1705, 1719, 276, 258, 266, 418, 355, 315, 222};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 47.49105008761407;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int puckCoord = 2199;
    vector<int> xCoords = {1558, 1524, 2766, 2751, 2621, 2682, 2721, 2872, 2804};
    vector<int> yCoords = {1725, 1721, 476, 314, 164, 252, 432, 150, 233};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 38.108521290089946;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int puckCoord = 347;
    vector<int> xCoords = {1531, 1502, 2688, 2565, 2874, 2719, 2499, 2596, 2944};
    vector<int> yCoords = {1724, 1724, 473, 498, 66, 189, 111, 172, 104};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 23.107440730927863;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int puckCoord = 1423;
    vector<int> xCoords = {1459, 1498, 2784, 2663, 2901, 2650, 2750, 2869, 2656};
    vector<int> yCoords = {1715, 1718, 274, 94, 163, 237, 66, 140, 425};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 30.13397728369089;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int puckCoord = 199;
    vector<int> xCoords = {1531, 1441, 2732, 2906, 2823, 2952, 2831, 2785, 2617};
    vector<int> yCoords = {1723, 1673, 143, 490, 74, 316, 62, 207, 403};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 22.37636975893011;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int puckCoord = 1642;
    vector<int> xCoords = {1478, 1521, 2801, 2842, 2782, 2847, 2478, 2703, 2931};
    vector<int> yCoords = {1685, 1728, 480, 296, 221, 165, 313, 308, 289};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 32.06398685211629;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int puckCoord = 2969;
    vector<int> xCoords = {1554, 1524, 2966, 2506, 2943, 2849, 2548, 2884, 2659};
    vector<int> yCoords = {1649, 1713, 100, 192, 182, 491, 125, 196, 415};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int puckCoord = 490;
    vector<int> xCoords = {1492, 1441, 2637, 2542, 2539, 2698, 2603, 2661, 2921};
    vector<int> yCoords = {1730, 1655, 330, 415, 151, 401, 142, 151, 197};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 23.857940942631842;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int puckCoord = 74;
    vector<int> xCoords = {1484, 1571, 2663, 2939, 2761, 2849, 2720, 2537, 2938};
    vector<int> yCoords = {1724, 1678, 75, 482, 322, 135, 254, 315, 183};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 21.792292668875902;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int puckCoord = 1013;
    vector<int> xCoords = {1505, 1455, 2763, 2539, 2532, 2518, 2952, 2475, 2528};
    vector<int> yCoords = {1721, 1653, 429, 447, 349, 129, 211, 242, 96};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 27.03892029424609;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int puckCoord = 2474;
    vector<int> xCoords = {1433, 1483, 2672, 2624, 2504, 2555, 2886, 2659, 2956};
    vector<int> yCoords = {1716, 1700, 110, 199, 195, 319, 326, 500, 427};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int puckCoord = 2038;
    vector<int> xCoords = {1473, 1531, 2549, 2640, 2818, 2603, 2754, 2905, 2527};
    vector<int> yCoords = {1682, 1665, 96, 185, 106, 249, 53, 68, 364};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 35.3050273265593;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int puckCoord = 654;
    vector<int> xCoords = {1463, 1409, 2526, 2913, 2790, 2624, 2685, 2703, 2690};
    vector<int> yCoords = {1723, 1719, 80, 193, 104, 321, 209, 405, 265};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 24.77707602455017;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int puckCoord = 2483;
    vector<int> xCoords = {1416, 1486, 2802, 2958, 2945, 2546, 2519, 2747, 2891};
    vector<int> yCoords = {1730, 1673, 340, 212, 202, 442, 155, 264, 212};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 41.98803448278311;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int puckCoord = 2334;
    vector<int> xCoords = {1459, 1396, 1509, 1559, 1609};
    vector<int> yCoords = {1717, 1727, 1717, 1717, 1717};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = 37.569832573137546;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int puckCoord = 1;
    vector<int> xCoords = {26};
    vector<int> yCoords = {1};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int puckCoord = 1000;
    vector<int> xCoords = {1400, 1450, 1500, 1550, 1600};
    vector<int> yCoords = {1733, 1733, 1733, 1733, 1733};
    PuckShot* pObj = new PuckShot();
    clock_t start = clock();
    double result = pObj->caromAngle(puckCoord, xCoords, yCoords);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=4750&pm=2411
********************************************************************************
#line 2 "PuckShot.cpp" 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
 
using namespace std; 
typedef long long ll; typedef long double ld; 
typedef vector<int> VI; typedef vector<string> VS; typedef string S; 
 
#define LS < 
#define FOR(k,start,end) for(typeof(start) k=(start); k LS (end); ++k) 
 
#define WIDE 3000 
#define HIGH 1733 
#define GOAL 183 
 
#include <complex> 
typedef complex<long double> cld; 
typedef complex<long long> cll; 
 
template <class T> T operator | (complex<T> x, complex<T> y) { 
  return (x*conj(y)).real(); 
  } 
 
template <class T> T operator ^ (complex<T> x, complex<T> y) { 
  return (x*conj(y)).imag(); 
  } 
 
class PuckShot { 
  public: 
  double caromAngle(int pC, vector <int> xCoords, vector <int> yCoords) { 
    vector<cld> enemy; 
    int n = xCoords.size(); 
    FOR(k,0,n) { 
      enemy . push_back( cld(xCoords[k]-pC,yCoords[k]) ); 
      enemy . push_back( cld(WIDE+WIDE-xCoords[k]-pC,yCoords[k]) ); 
      } 
    ld pos = WIDE*1.5 - GOAL*0.5 - pC; 
 
    n *= 2; 
    again: 
//  printf("pos = %Lf\n", pos); 
    FOR(k,0,n) { 
      ld x = pos * (enemy[k].imag() / 1733); 
//    printf("%d (%Lf, %Lf): miss by %Lf\n", 
//      k, enemy[k].real(), enemy[k].imag(), x - enemy[k].real()); 
      if(x < enemy[k].real() - 25) continue; 
      if(x > enemy[k].real() + 24.9999995) continue; 
      // enemy[k].real() + 25 = pos * (1733 / i) 
//    printf("Pushed by %d\n", k); 
      pos = (enemy[k].real() + 25) * (1733 / enemy[k].imag()); 
      goto again; 
      } 
 
    if(pos > WIDE*1.5 + GOAL*0.5 - pC) return -1; 
    return atan(HIGH / pos) * 180 / M_PI; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/