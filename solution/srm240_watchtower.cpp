/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4567
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

class WatchTower {
public:
    double minHeight(vector<int> positions, vector<int> heights);
};

double WatchTower::minHeight(vector<int> positions, vector<int> heights) {
    double ret;
    return ret;
}


int test0() {
    vector<int> positions = {1, 2, 4, 5, 6, 7};
    vector<int> heights = {1, 2, 2, 4, 2, 1};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
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
    vector<int> positions = {10, 20, 49, 59};
    vector<int> heights = {0, 10, 10, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 14.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> positions = {0, 2, 4, 6, 8, 10};
    vector<int> heights = {0, 1, 3, 6, 10, 11};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> positions = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> heights = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> positions = {0, 250000, 500000, 750000, 1000000};
    vector<int> heights = {1000000, 900000, 10000, 900000, 1000000};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> positions = {0, 1000000};
    vector<int> heights = {30581, 170681};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> positions = {2134, 45674, 76543};
    vector<int> heights = {3425, 65342, 532};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> positions = {234, 333, 532, 789, 2345, 78767, 342356, 654643};
    vector<int> heights = {0, 0, 0, 0, 0, 0, 0, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> positions = {0, 3, 7, 13};
    vector<int> heights = {4, 17, 23, 3};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 7.1449275362318865;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> positions = {0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> heights = {0, 2, 0, 1, 0, 1, 3, 1};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 7.25;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> positions = {0, 1, 2, 3, 4, 5};
    vector<int> heights = {400, 0, 99, 0, 99, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 95.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> positions = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> heights = {45, 12, 65, 23, 87, 12, 87, 12, 65, 1, 400};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 89.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> positions = {0, 1, 999999, 1000000};
    vector<int> heights = {0, 1000000, 1000000, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999E11;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> positions = {5176, 20669, 88868, 131700, 171922, 179175, 201337, 237911, 367907, 381886, 454433, 465446, 488677, 511959, 512828, 516053, 518957, 594847, 632707, 635201, 640232, 664890, 702273, 702667, 722423, 722584, 745836, 758843, 884667, 895719, 897042, 954703, 960334, 978001};
    vector<int> heights = {59894, 98837, 50516, 57739, 104299, 112693, 101775, 99324, 46499, 121374, 51594, 85509, 84262, 117927, 113414, 37655, 64788, 100152, 90409, 62418, 73842, 47750, 72287, 62521, 101263, 117774, 104503, 65406, 81837, 97580, 38149, 66785, 72753, 106498};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 5444600.559605422;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> positions = {93796, 116331, 169610, 208028, 231819, 295583, 312990, 342669, 346625, 392002, 392875, 426452, 500733, 514824, 548265, 610925, 635371, 694008, 696837, 704912, 896816, 945289, 946796, 988779, 991525, 997879};
    vector<int> heights = {19999, 19862, 20040, 19610, 19905, 19825, 19617, 19980, 19837, 19834, 19994, 20010, 20027, 19878, 19728, 19679, 19687, 19917, 19616, 20073, 19958, 19837, 19627, 19859, 19963, 19635};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 43949.038454933485;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> positions = {27024, 51368, 178242, 254259, 275393, 405867, 455037, 698136, 703936, 777358, 871829, 962980};
    vector<int> heights = {95056, 109747, 101284, 107768, 107374, 93485, 94633, 92873, 95160, 99045, 95734, 96441};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 20272.24725982717;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> positions = {87648, 122696, 163282, 191148, 241795, 441231, 467694, 493012, 537653, 595866, 754892, 791912, 887890, 891931};
    vector<int> heights = {43412, 43156, 42771, 43794, 43229, 43949, 42749, 43769, 43889, 44514, 43426, 43423, 43611, 43742};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 5384.946260793506;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> positions = {995, 34790, 42618, 65742, 67425, 113181, 118254, 204639, 229024, 233733, 253651, 259311, 267896, 274495, 294101, 298010, 307820, 316673, 320807, 334053, 337114, 344653, 364354, 385043, 435058, 466316, 468205, 468514, 501942, 510824, 568413, 572443, 615961, 637745, 659353, 670156, 688676, 754418, 792265, 796018, 853471, 892823, 905642, 906630, 962504, 987247};
    vector<int> heights = {76396, 75529, 76514, 76487, 76236, 76155, 76693, 76504, 76160, 76206, 76025, 76703, 76625, 76847, 75704, 76393, 76142, 75962, 76533, 75893, 76512, 75535, 76012, 75827, 75818, 76826, 76658, 76379, 76147, 75765, 75773, 75489, 75715, 76881, 76569, 76544, 75981, 76207, 75993, 76734, 75531, 76611, 76382, 76750, 76403, 76680};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 47711.83236904697;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> positions = {116029, 152699, 158256, 185165, 251495, 271989, 325741, 363380, 369226, 386008, 421452, 441423, 547257, 655141, 679128, 712301, 738006, 807157, 845183, 853666, 910164, 951076};
    vector<int> heights = {53872, 23249, 30261, 76462, 81400, 31349, 64655, 49378, 72489, 28824, 85249, 44521, 15541, 11695, 57404, 80518, 24335, 66710, 87439, 38481, 23947, 6690};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 1183485.9891241242;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> positions = {53462, 72143, 73280, 206419, 227903, 304744, 310640, 345509, 564677, 602191, 604699, 644919, 646211, 678375, 738962, 739889, 740176, 763596, 782787, 789069, 809966, 810281, 820616, 827736, 865880, 903750, 913911, 938476, 953989, 996103};
    vector<int> heights = {56742, 45411, 48099, 59027, 52809, 55276, 45570, 45336, 56077, 56573, 61862, 60429, 62267, 56984, 51458, 46242, 47061, 58357, 44664, 47655, 57045, 50224, 59243, 49600, 56922, 61954, 56038, 50345, 58852, 48352};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 1567601.2186756397;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> positions = {1283, 12419, 32204, 65482, 85104, 130804, 209721, 221356, 233923, 237562, 245550, 246342, 251534, 272564, 293221, 319165, 320368, 381994, 389918, 447383, 456730, 472013, 503948, 513466, 516900, 517207, 517330, 517417, 549173, 607630, 613092, 613522, 685884, 688385, 723392, 760491, 772389, 789273, 827920, 848681, 900345, 909701, 935802, 948771, 997973};
    vector<int> heights = {32374, 83563, 47315, 37162, 64546, 57200, 34967, 31606, 33610, 46434, 31933, 74496, 64094, 49822, 32208, 31640, 46523, 49405, 78529, 74545, 84468, 52414, 45029, 71086, 53267, 42033, 45904, 73365, 66857, 47681, 83720, 67905, 45658, 64081, 38113, 43250, 35695, 41755, 43530, 56611, 75495, 62769, 45521, 54003, 81266};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 8009978.318835881;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> positions = {169, 40354, 52411, 54845, 101396, 170481, 173151, 203081, 203251, 213493, 224340, 227176, 260277, 265245, 325014, 326794, 347866, 388221, 390885, 408707, 453489, 493423, 494712, 502230, 525134, 527936, 531932, 551641, 563223, 583954, 601357, 618496, 630440, 633364, 654668, 656503, 671892, 688419, 717427, 724303, 729629, 762508, 804378, 892232, 901604, 946690, 954592, 960280, 998216};
    vector<int> heights = {21818, 11041, 18372, 9951, 17552, 8314, 12028, 18298, 16883, 11557, 12135, 13126, 24533, 11411, 17733, 12150, 24131, 17740, 21060, 19445, 15026, 14312, 7991, 20454, 22008, 24559, 22159, 14287, 19291, 9055, 20177, 16188, 8727, 10231, 14770, 18308, 24126, 15430, 8288, 16089, 19016, 9054, 21244, 18629, 12494, 10658, 19410, 11704, 20428};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 533587.7910290633;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> positions = {1550, 33670, 34500, 56126, 88437, 91286, 100975, 108630, 159805, 185512, 195027, 204255, 209311, 215494, 228384, 239176, 274365, 319074, 333755, 354688, 358021, 390133, 393002, 401821, 412147, 456230, 461747, 485035, 502434, 516482, 532434, 538088, 548635, 552807, 590630, 610497, 612047, 630211, 630250, 632680, 632705, 644577, 653145, 667173, 721579, 745556, 794885, 887122, 932036};
    vector<int> heights = {118054, 93018, 89761, 95363, 113096, 88435, 83827, 106935, 79993, 115437, 113479, 100084, 100731, 104804, 113752, 76738, 111506, 84008, 84340, 92239, 92536, 93729, 116531, 92781, 99358, 120659, 74372, 73968, 113372, 87630, 76987, 109355, 107891, 93991, 119303, 86257, 97011, 81058, 107777, 104247, 111081, 86526, 82260, 89740, 105915, 110597, 81064, 95349, 121849};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 789406.7632505299;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> positions = {63150, 97534, 110812, 188427, 206998, 216457, 247365, 298470, 330917, 366329, 379657, 389945, 400500, 527619, 533758, 535955, 590326, 605498, 639657, 648015, 671985, 721409, 732336, 741709, 776703, 946793, 983475, 987720};
    vector<int> heights = {57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500, 57500};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> positions = {96065, 141862, 233523, 412182, 461060, 562996, 577820, 701949, 733212, 733611, 739058, 772185, 791960, 842835, 873702, 952642, 980178};
    vector<int> heights = {74932, 74933, 74934, 74934, 74932, 74932, 74934, 74932, 74934, 74932, 74933, 74932, 74934, 74932, 74934, 74934, 74934};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 20.675979772247956;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> positions = {4811, 6457, 38306, 57556, 61442, 107040, 110970, 111249, 130054, 137954, 149081, 179324, 197453, 221073, 224498, 234273, 241215, 249167, 269503, 273411, 349983, 389976, 400792, 407457, 454129, 458348, 495736, 510842, 535769, 553143, 588752, 602319, 606986, 621023, 641730, 645247, 648187, 652902, 675926, 699515, 768109, 776506, 787709, 849151, 865826, 897324, 902805, 920793, 940199, 997344};
    vector<int> heights = {79259, 79259, 79260, 79260, 79259, 79261, 79259, 79261, 79259, 79261, 79260, 79260, 79261, 79261, 79260, 79261, 79259, 79259, 79259, 79260, 79259, 79261, 79259, 79260, 79259, 79260, 79259, 79260, 79260, 79260, 79259, 79260, 79261, 79261, 79259, 79261, 79261, 79259, 79261, 79259, 79261, 79259, 79260, 79261, 79259, 79259, 79261, 79259, 79259, 79259};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 215.32910912165244;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> positions = {9456, 21072, 39185, 77366, 94773, 107510, 134381, 142538, 143452, 153982, 154958, 234456, 281241, 290013, 332464, 355984, 393257, 395511, 422152, 424308, 441246, 481417, 488030, 492800, 523952, 538558, 539605, 581145, 622412, 628619, 632221, 638218, 689539, 709588, 732806, 751054, 762412, 776147, 781258, 826689, 946006, 953196, 979646, 982129};
    vector<int> heights = {86165, 86187, 999999, 86187, 86187, 86185, 86185, 86185, 86186, 86186, 86185, 86185, 86187, 86187, 86186, 86185, 86187, 86187, 86186, 86186, 86185, 86185, 86187, 86187, 86187, 86186, 86187, 86186, 86185, 86187, 86187, 86186, 86187, 86185, 86186, 86186, 945367, 86186, 86187, 86187, 86187, 86186, 86187, 86185};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1087053618934307E7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> positions = {12527, 35736, 124454, 222551, 224659, 349980, 409786, 480614, 538839, 605196, 618257, 673186, 700777, 711984, 749093, 752596, 837783, 838690, 859617, 907100, 993656};
    vector<int> heights = {2092, 2091, 2091, 2091, 2092, 102090, 2090, 2091, 2091, 2091, 2092, 2092, 2092, 2092, 2092, 2090, 2092, 2092, 2092, 2090, 2090};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> positions = {97235, 97244, 97679, 97681, 97694, 97795, 98230, 98508, 98574, 98578, 98883};
    vector<int> heights = {23313, 23074, 22946, 23243, 22843, 23098, 23394, 23481, 23012, 22972, 23355};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 8444.42227566661;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> positions = {72594, 72598, 72856, 73142, 73315, 74382, 74439, 74530, 74625, 74640, 75271, 75660, 75667, 75764, 76117, 76302, 76373, 76557, 76599, 76638, 76716, 76857, 76880, 76913, 77116, 77186, 77350, 77374, 77491, 77655, 77723, 77869, 77926, 78118, 78198, 78337, 78460, 78791, 79305, 79816, 79988};
    vector<int> heights = {39341, 39399, 39283, 50195, 39286, 39339, 39453, 39331, 39400, 39266, 39455, 39408, 39447, 39342, 39461, 39465, 39468, 39362, 39186, 39208, 39478, 39272, 39272, 39275, 39362, 39374, 39400, 39420, 39298, 39453, 39431, 39455, 39275, 39212, 39391, 39376, 39292, 39268, 39204, 39190, 39275};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 4187.3684210526335;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> positions = {9746, 10431, 11419, 11873, 12444, 13908, 14416, 14681, 15060, 15567, 16226, 16875, 18120, 18169, 18401, 19297};
    vector<int> heights = {86818, 86756, 86786, 86877, 86887, 86870, 86838, 86813, 86862, 86766, 86855, 86836, 86743, 86812, 86799, 86893};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 303.49993972662196;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> positions = {20322, 20765, 20906, 20987, 21054, 21227, 21559, 21633, 21924, 22254, 22458, 23025, 23079, 23104, 23288, 24045, 24220, 24811};
    vector<int> heights = {71108, 71403, 71052, 71298, 71201, 71123, 71192, 71127, 71390, 71383, 71281, 71117, 71349, 71306, 71218, 71181, 71184, 82899};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 12.62962962963502;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> positions = {92064, 92319, 92418, 92512, 92868, 93887, 94571, 94903, 95209, 95481, 95491, 95897, 96114, 96469, 96541, 96823};
    vector<int> heights = {1744, 1484, 2007, 2186, 2158, 1707, 1612, 1546, 1844, 1970, 1694, 1417, 2144, 2203, 2005, 1405};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 13954.164627018921;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> positions = {71295, 71514, 71650, 71693, 71812, 71929, 72069, 72220, 72293, 72455, 72482, 72805, 72905, 73130, 73672, 73840, 73956, 75645, 75706, 75834, 76457, 76927, 77134, 77154, 77167, 77180, 77211, 77990, 78343, 78483, 78904, 79042, 79893, 80898, 80930, 81028};
    vector<int> heights = {63824, 63818, 63547, 63662, 63588, 63360, 63419, 63704, 63309, 63381, 63605, 63794, 63311, 63870, 63736, 63592, 63366, 63409, 63396, 63610, 63358, 63503, 63787, 63464, 63368, 63692, 63622, 63747, 63460, 63358, 63657, 63402, 63878, 63322, 63533, 63351};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 25756.5274045165;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> positions = {0, 1, 2, 3, 6, 7, 12, 15};
    vector<int> heights = {0, 1, 5, 20, 21, 22, 21, 22};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 2.701754385964911;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> positions = {0, 1, 2, 3, 6};
    vector<int> heights = {0, 50, 50, 52, 53};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333357;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> positions = {0, 1, 2, 3, 1000};
    vector<int> heights = {0, 50, 50, 52, 51};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0019658582576056;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> positions = {0, 1, 2, 999998, 999999, 1000000};
    vector<int> heights = {0, 1000000, 0, 1, 999999, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 4.99999749999375E11;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> positions = {1, 2, 4, 5, 6, 7};
    vector<int> heights = {1, 2, 2, 4, 2, 1};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> positions = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    vector<int> heights = {1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0, 1000000, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9999899999849994E11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> positions = {0, 1, 99, 100};
    vector<int> heights = {0, 3, 10, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 222.34615384615387;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> positions = {10, 20, 49, 99};
    vector<int> heights = {0, 10, 10, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 4.833333333333334;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> positions = {1, 2};
    vector<int> heights = {1, 2};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> positions = {0, 4, 5, 8, 11, 15, 17, 19, 22};
    vector<int> heights = {0, 7, 1, 4, 2, 10, 5, 15, 6};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 16.921052631578952;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> positions = {1, 2, 6, 8};
    vector<int> heights = {0, 10, 10, 0};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 13.333333333333336;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> positions = {0, 131, 1222, 8340, 14756, 15883, 20442, 23322, 24683, 31405, 36453, 37895, 41881, 49391, 55963, 65780, 75432, 79026, 82337, 84333, 90426, 91715, 100380, 104244, 109609, 110761, 110862, 119675, 122342, 131385, 140555, 146939, 147881, 155760, 157540, 159774, 163204, 165627, 167565, 170834, 177293, 185454, 194597, 198713, 206132, 210412, 216272, 224570, 227552, 236593};
    vector<int> heights = {982, 1656, 7595, 2948, 9004, 3571, 8492, 5412, 2463, 7119, 7190, 1214, 252, 4779, 1681, 7995, 3734, 3979, 5561, 8489, 8466, 5892, 2766, 7639, 427, 5795, 5108, 2347, 9774, 5589, 9666, 3390, 3565, 6190, 53, 2285, 8333, 1636, 6460, 6936, 4842, 9667, 5116, 1156, 5008, 9561, 3755, 1275, 8690, 8137};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 332499.3187479824;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> positions = {6419, 17920, 33809, 98842, 103928, 115631, 123736, 141053, 149353, 161482, 171063, 206884, 231886, 235393, 253789, 324907, 354190, 361748, 377601, 392605, 398429, 433490, 437197, 458702, 479329, 486573, 496377, 534648, 537745, 548429, 576805, 584831, 593938, 598711, 637408, 655146, 678544, 679899, 709151, 719356, 725822, 734479, 745049, 745945, 835780, 852194, 868536, 888615, 894247, 934448};
    vector<int> heights = {557869, 854615, 29092, 431119, 398644, 535424, 179700, 800206, 783173, 3976, 785588, 8826, 279388, 312837, 837249, 661899, 323379, 224601, 813250, 640501, 568532, 163157, 868134, 345239, 912922, 534028, 507937, 138779, 715452, 140959, 754098, 363145, 843896, 226381, 304769, 586325, 463768, 942446, 469239, 418403, 427590, 458560, 111182, 198114, 889503, 87998, 627246, 595134, 308362, 693042};
    WatchTower* pObj = new WatchTower();
    clock_t start = clock();
    double result = pObj->minHeight(positions, heights);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2494809567554563E7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=6539&pm=4567
********************************************************************************
// You will never see how this line looked after 4 challenges failed! 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
typedef long double ld; 
typedef vector<int> vi; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Standard mathematical quantifiers, plus tools to implement them 
// note: the range has to be non-empty here 
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(++k; k LS (b); ++k) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
 
#line 3 "WatchTower.cc" 
 
int N; 
 
vi pos, h; 
 
ld level(ld x, int l) { 
  ld x1 = pos[l], x2 = pos[l+1]; 
  ld y1 = h  [l], y2 = h  [l+1]; 
  // (y-y1) / (y2-y1) == (x-x1) / (x2-x1) 
  ld res = y1 + (x-x1) * (y2-y1) / (x2-x1); 
//printf("(%Lf,%Lf) (%Lf,%Lf) (%Lf,%Lf)\n", 
//  x1,y1, x2,y2, x,res); 
  return res; 
  } 
 
 
ld altAt(ld x, int k) { 
  ld y = MAX(l,0,N-1, level(x,l)); 
  return y - level(x,k); 
  } 
 
class WatchTower { 
  public: 
  double minHeight(vector <int> positions, vector <int> heights) { 
    // !FDI 
    pos = positions; h = heights; 
    N = Size(positions); 
 
    ld min = 0; 
     
    FOR(k,0,N-1) { 
      ld low = pos[k]; 
      ld hig = pos[k+1]; 
      FOR(it,0,500) { 
        ld a = (low*2+hig) / 3; 
        ld b = (low+2*hig) / 3; 
        ld ah = altAt(a, k); 
        ld bh = altAt(b, k); 
        if(ah < bh) hig = b; else low = a; 
        } 
//    printf("altat %d (%Lf): %Lf\n", k, low, altAt(low, k)); 
      if(k == 0) min = altAt(low, k); 
      else min <?= altAt(low, k); 
      } 
     
    return min; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/