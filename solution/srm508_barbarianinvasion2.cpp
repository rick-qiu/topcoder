/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11174
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

class BarbarianInvasion2 {
public:
    double minimumTime(vector<int> boundaryX, vector<int> boundaryY, vector<int> cityX, vector<int> cityY);
};

double BarbarianInvasion2::minimumTime(vector<int> boundaryX, vector<int> boundaryY, vector<int> cityX, vector<int> cityY) {
    double ret;
    return ret;
}


int test0() {
    vector<int> boundaryX = {0, 2, 2, 0};
    vector<int> boundaryY = {0, 0, 2, 2};
    vector<int> cityX = {1};
    vector<int> cityY = {1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1.414213562373088;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> boundaryX = {0, 3, 3, 0};
    vector<int> boundaryY = {0, 0, 3, 3};
    vector<int> cityX = {1};
    vector<int> cityY = {1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461485;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> boundaryX = {0, 3, 3, 0};
    vector<int> boundaryY = {0, 0, 3, 3};
    vector<int> cityX = {1, 2};
    vector<int> cityY = {2, 1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 2.236067977499772;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> boundaryX = {0, 40, 40, 0};
    vector<int> boundaryY = {0, 0, 40, 40};
    vector<int> cityX = {1, 2, 31, 2, 15};
    vector<int> cityY = {1, 2, 3, 3, 24};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 38.05748153551994;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> boundaryX = {0, 124, -6, -120, -300};
    vector<int> boundaryY = {0, 125, 140, 137, -100};
    vector<int> cityX = {10, 10, 10, 10};
    vector<int> cityY = {50, 51, 52, 21};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 332.77770358002783;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> boundaryX = {0, 40, 40, 0};
    vector<int> boundaryY = {0, 0, 40, 40};
    vector<int> cityX = {1, 1, 39, 39, 20};
    vector<int> cityY = {1, 39, 1, 39, 20};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 20.396078054371102;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> boundaryX = {0, 40, 40, 0};
    vector<int> boundaryY = {0, 0, 40, 40};
    vector<int> cityX = {1, 2, 3, 4, 5};
    vector<int> cityY = {1, 2, 3, 4, 5};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 49.49747468305778;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> boundaryX = {0, 40, 40, 0};
    vector<int> boundaryY = {0, 0, 40, 40};
    vector<int> cityX = {1, 2, 3, 4, 20};
    vector<int> cityY = {1, 2, 3, 4, 20};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 41.18252056394762;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> boundaryX = {0, 40, 40, 0};
    vector<int> boundaryY = {0, 0, 40, 40};
    vector<int> cityX = {1, 2, 3, 20};
    vector<int> cityY = {1, 1, 1, 20};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 42.11243035166017;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> boundaryX = {-1000, -997, -994, -952, -229, -113, 882, 934, 976, 998, 1000, 1000, 995, 978, 972, 900, 753, -223, -839, -953, -977, -987, -990, -1000};
    vector<int> boundaryY = {-710, -931, -993, -999, -1000, -1000, -999, -992, -971, -958, -614, 900, 964, 987, 995, 999, 1000, 1000, 999, 997, 988, 981, 970, 921};
    vector<int> cityX = {234, 12, -321, -268, -19};
    vector<int> cityY = {-89, 35, 0, 196, 11};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1311.373325944965;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> boundaryX = {-1000, -982, -978, -755, -120, 841, 924, 994, 996, 999, 1000, 1000, 999, 942, 606, -883, -971, -980, -993, -999, -1000};
    vector<int> boundaryY = {-953, -995, -998, -999, -1000, -1000, -998, -965, -953, -920, -746, 944, 985, 999, 1000, 1000, 986, 971, 909, 840, 415};
    vector<int> cityX = {-97, -244, -183, -50, 158};
    vector<int> cityY = {118, -148, 59, -152, -49};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1332.8304468310828;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> boundaryX = {-1000, -998, -942, -594, -62, 847, 950, 991, 1000, 1000, 998, 992, 950, -277, -927, -955, -997, -999, -1000};
    vector<int> boundaryY = {-541, -979, -993, -998, -1000, -1000, -993, -984, -937, 725, 986, 997, 1000, 1000, 999, 998, 930, 898, 646};
    vector<int> cityX = {-174, -176, -172, 175, 234};
    vector<int> cityY = {261, 79, -140, 420, 429};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1436.9777312122624;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> boundaryX = {-1000, -993, -892, -170, 389, 905, 975, 998, 999, 1000, 1000, 999, 998, 970, 876, 836, 665, -872, -984, -999, -1000};
    vector<int> boundaryY = {-961, -998, -999, -1000, -1000, -999, -986, -937, -655, -198, 579, 945, 974, 993, 996, 997, 1000, 1000, 996, 990, 853};
    vector<int> cityX = {-221, 288, -436, -334, -398};
    vector<int> cityY = {-214, -405, -385, -162, -58};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1555.4832046666315;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> boundaryX = {-1000, -998, -996, -980, -944, -908, -873, 27, 970, 994, 1000, 1000, 999, 995, 977, 901, 882, 795, -970, -999, -1000};
    vector<int> boundaryY = {-63, -918, -956, -974, -996, -998, -999, -1000, -1000, -986, -712, 241, 707, 929, 974, 993, 996, 1000, 1000, 996, 947};
    vector<int> cityX = {331, 12, 462, -206, 203};
    vector<int> cityY = {481, -356, -244, -86, -357};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1341.4816435568314;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> boundaryX = {-846, -838, -827, -799, -766, -728, -638, -591, -553, -465, -436, -407, -383, -123, -84, -25, 110, 173, 251, 290, 361, 443, 575, 702, 811, 843, 840, 817, 804, 773, 731, 718, 671, 580, 498, 312, 206, 157, 124, 100, -335, -417, -442, -502, -565, -644, -689, -764, -835};
    vector<int> boundaryY = {21, -104, -154, -271, -357, -434, -548, -603, -638, -710, -727, -743, -754, -835, -840, -847, -839, -825, -804, -793, -766, -720, -624, -475, -245, -98, -53, 217, 265, 349, 434, 454, 517, 619, 685, 785, 821, 833, 839, 842, 777, 738, 721, 679, 628, 553, 494, 355, 144};
    vector<int> cityX = {239, -263, -398, 274, -18};
    vector<int> cityY = {-265, -387, -324, -443, -357};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1144.8080268717717;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> boundaryX = {-901, -897, -856, -824, -788, -689, -602, -474, -334, -251, -178, -92, 22, 45, 152, 252, 344, 496, 555, 605, 730, 794, 826, 855, 873, 895, 901, 902, 891, 876, 700, 680, 657, 545, 307, 170, 104, 18, -28, -207, -281, -361, -457, -506, -578, -674, -799, -881, -895};
    vector<int> boundaryY = {-34, -86, -293, -375, -447, -580, -678, -775, -838, -867, -890, -901, -907, -906, -890, -870, -836, -758, -711, -665, -537, -422, -360, -282, -216, -129, -60, -1, 122, 211, 568, 597, 624, 721, 848, 883, 895, 906, 905, 879, 857, 826, 774, 747, 692, 603, 416, 192, 117};
    vector<int> cityX = {-214, -324, -350, 205, -372};
    vector<int> cityY = {-362, 313, 361, 246, 201};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1064.8570035857595;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> boundaryX = {-890, -878, -840, -790, -713, -659, -629, -597, -499, -443, -382, -216, -7, 51, 185, 343, 600, 753, 816, 895, 894, 892, 882, 877, 852, 829, 773, 756, 663, 626, 576, 544, 506, 370, 272, 222, 181, 145, -4, -78, -94, -262, -291, -637, -707, -755, -778, -853, -866};
    vector<int> boundaryY = {7, -159, -308, -418, -531, -598, -633, -668, -743, -780, -805, -868, -897, -896, -874, -819, -666, -476, -370, -35, 25, 61, 152, 179, 272, 327, 440, 471, 596, 643, 685, 709, 734, 812, 849, 867, 878, 884, 895, 893, 891, 851, 842, 618, 549, 486, 439, 276, 236};
    vector<int> cityX = {-243, 373, -333, -38, -236};
    vector<int> cityY = {20, 460, -147, -39, -302};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 939.3569158789038;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> boundaryX = {-944, -943, -931, -916, -867, -820, -733, -670, -646, -471, -421, -351, -299, -124, -31, 201, 400, 479, 556, 667, 725, 801, 853, 865, 932, 940, 944, 939, 929, 884, 822, 811, 709, 476, 207, 134, 41, -48, -163, -325, -441, -530, -575, -731, -833, -865, -886, -921, -937};
    vector<int> boundaryY = {71, 34, -168, -228, -386, -473, -598, -668, -694, -823, -848, -874, -893, -939, -947, -925, -860, -813, -767, -672, -603, -498, -407, -377, -126, -85, 25, 79, 169, 328, 455, 474, 615, 814, 915, 931, 941, 938, 932, 886, 839, 775, 738, 599, 446, 377, 329, 201, 138};
    vector<int> cityX = {-296, -275, -297, 380, 275};
    vector<int> cityY = {-34, -101, 69, -249, 148};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 991.1973999254458;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> boundaryX = {-956, -945, -924, -881, -766, -731, -637, -505, -397, -247, -166, 41, 104, 321, 445, 477, 516, 597, 766, 840, 880, 926, 941, 940, 911, 808, 754, 723, 556, 477, 356, 322, 255, 167, 67, -56, -79, -210, -256, -281, -311, -447, -503, -706, -787, -812, -868, -904, -949};
    vector<int> boundaryY = {-11, -113, -227, -349, -569, -617, -715, -816, -869, -918, -942, -954, -951, -900, -844, -829, -803, -741, -566, -445, -368, -232, -155, 146, 287, 496, 585, 621, 770, 823, 880, 895, 916, 940, 950, 952, 952, 929, 920, 913, 900, 841, 810, 646, 535, 499, 389, 282, 117};
    vector<int> cityX = {-178, 260, -469, 203, -225};
    vector<int> cityY = {-185, 110, -374, 67, -456};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1059.2593410791567;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> boundaryX = {0, 1000, -1000};
    vector<int> boundaryY = {-1000, 0, 1000};
    vector<int> cityX = {0};
    vector<int> cityY = {0};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.2135623730671;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> boundaryX = {0, 1000, -1000};
    vector<int> boundaryY = {-1000, 0, 1000};
    vector<int> cityX = {0, 1};
    vector<int> cityY = {0, 1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.2135623730678;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> boundaryX = {0, 1000, -1000};
    vector<int> boundaryY = {-1000, 0, 1000};
    vector<int> cityX = {0};
    vector<int> cityY = {-999};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 2235.173595048019;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> boundaryX = {0, 1000, -1000};
    vector<int> boundaryY = {-1000, 0, 1000};
    vector<int> cityX = {-999};
    vector<int> cityY = {999};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 2234.726381461491;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> boundaryX = {-1000, 1000, 1000, -1000};
    vector<int> boundaryY = {-1000, -1000, 1000, 1000};
    vector<int> cityX = {999};
    vector<int> cityY = {999};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 2827.012911183789;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> boundaryX = {0, 1000, -1000};
    vector<int> boundaryY = {-1000, 0, 1000};
    vector<int> cityX = {0, 0, 0, 1, -1};
    vector<int> cityY = {-999, -998, -997, -997, -997};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 2232.93752711534;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> boundaryX = {0, 1, 0, -1};
    vector<int> boundaryY = {-1, 0, 1, 0};
    vector<int> cityX = {0};
    vector<int> cityY = {0};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999999999999951;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> boundaryX = {27, 14, 15};
    vector<int> boundaryY = {-30, -38, -42};
    vector<int> cityX = {17, 16, 15, 15, 15};
    vector<int> cityY = {-39, -40, -39, -41, -40};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 13.453624047073527;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> boundaryX = {286, 304, 337, 347, 369, 347, 331, 286, 280, 211, 144, 56, -5, -21, -23, -2, 14, 103, 171, 199, 219};
    vector<int> boundaryY = {-321, -307, -270, -254, -195, -56, -32, 11, 15, 43, 45, 11, -56, -93, -99, -259, -282, -345, -357, -355, -351};
    vector<int> cityX = {211, 63, 185};
    vector<int> cityY = {-232, -85, -86};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 215.1689375026707;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> boundaryX = {-336, -218, -413, -469, -524, -519, -444};
    vector<int> boundaryY = {-615, -554, -275, -309, -476, -495, -590};
    vector<int> cityX = {-344, -440, -345, -407};
    vector<int> cityY = {-439, -419, -549, -483};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 146.50938536489406;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> boundaryX = {59, 58, 59, 60, 61, 63, 67, 70, 72, 75, 81, 87, 90, 92, 95, 99, 101, 102, 103, 103, 102, 101, 99, 95, 92, 90, 87, 75, 72, 70, 67, 63, 61, 60};
    vector<int> boundaryY = {136, 130, 124, 121, 119, 116, 112, 110, 109, 108, 107, 108, 109, 110, 112, 116, 119, 121, 124, 136, 139, 141, 144, 148, 150, 151, 152, 152, 151, 150, 148, 144, 141, 139};
    vector<int> cityX = {72, 76, 80, 92};
    vector<int> cityY = {143, 141, 147, 114};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 32.482916399325035;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> boundaryX = {-126, -123, -113, -79, -69, -66, -48, -47, -66, -105, -113, -123, -136};
    vector<int> boundaryY = {46, 44, 39, 39, 44, 46, 72, 77, 126, 135, 133, 128, 116};
    vector<int> cityX = {-122, -81, -106, -106};
    vector<int> cityY = {87, 54, 62, 46};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 68.24221567329074;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> boundaryX = {293, 303, 318, 357, 373, 452, 559, 598, 605, 669, 704, 724, 732, 739, 744, 770, 778, 777, 742, 731, 710, 653, 577, 526, 460, 412, 299, 285, 259, 247, 244, 225, 198, 196, 194, 190, 190, 193, 196, 201, 213, 223};
    vector<int> boundaryY = {-144, -152, -163, -185, -192, -212, -204, -191, -188, -149, -116, -91, -79, -68, -59, 6, 48, 124, 227, 245, 273, 325, 363, 375, 377, 369, 313, 301, 274, 259, 255, 225, 158, 150, 141, 113, 50, 30, 15, -4, -37, -57};
    vector<int> cityX = {513, 638, 669, 359, 399};
    vector<int> cityY = {-107, 186, 78, -30, 123};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 261.16508525876964;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> boundaryX = {-4, -2, 0, 3, 8, 13, 16, 18, 20, 20, 18, 16, 13, 3, 0, -2, -4, -5};
    vector<int> boundaryY = {14, 11, 9, 7, 6, 7, 9, 11, 14, 24, 27, 29, 31, 31, 29, 27, 24, 19};
    vector<int> cityX = {7, 10, 6, 18, 8};
    vector<int> cityY = {12, 25, 11, 20, 30};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 14.887574789950293;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> boundaryX = {-350, -472, -449, -433, -425, -411, -395};
    vector<int> boundaryY = {483, 380, 252, 234, 227, 217, 208};
    vector<int> cityX = {-416, -427, -352, -392, -399};
    vector<int> cityY = {302, 373, 471, 248, 261};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 96.41757958939371;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> boundaryX = {432, 404, 385, 230, -159, -173, -246, -251, -256, -140, 40, 108, 143};
    vector<int> boundaryY = {135, 437, 466, 589, 515, 501, 382, 368, 352, -20, -101, -104, -101};
    vector<int> cityX = {329};
    vector<int> cityY = {154};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 618.5539588427183;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> boundaryX = {293, 289, 276, 272, 264, 258, 254, 234, 230, 224, 216, 212, 202, 195, 193, 191, 192, 193, 195, 199, 216, 224, 230, 234, 244, 254, 258, 286, 289, 293, 295, 296, 295};
    vector<int> boundaryY = {481, 489, 503, 506, 510, 512, 513, 513, 512, 510, 506, 503, 493, 481, 475, 461, 451, 447, 441, 433, 416, 412, 410, 409, 408, 409, 410, 429, 433, 441, 447, 451, 475};
    vector<int> cityX = {269};
    vector<int> cityY = {421};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 100.1698557451291;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> boundaryX = {9, -25, -34, -48, -90, -105, -113, -112, -111, -108, -105, -100, -90, -79, -73, -60, -34, -30, -5, 55, 69, 86, 89, 97, 100, 102, 103, 100, 95, 86, 69, 50, 38, 30};
    vector<int> boundaryY = {104, 103, 101, 96, 64, 39, 10, -24, -29, -39, -47, -57, -72, -84, -89, -98, -109, -110, -113, -95, -84, -64, -59, -42, -33, -24, -17, 25, 39, 56, 76, 90, 96, 99};
    vector<int> cityX = {-62, -90, -71, -72};
    vector<int> cityY = {-62, 34, 16, -53};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 174.14073874595124;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> boundaryX = {19, 16, 8, 6, 4, 2, 1, 2, 4, 6, 8, 16, 19, 23, 29, 37, 45, 51, 55, 58, 66, 68, 70, 72, 72, 70, 68, 66, 58, 55, 51, 45, 29, 23};
    vector<int> boundaryY = {745, 743, 735, 732, 728, 722, 714, 706, 700, 696, 693, 685, 683, 681, 679, 678, 679, 681, 683, 685, 693, 696, 700, 706, 722, 728, 732, 735, 743, 745, 747, 749, 749, 747};
    vector<int> cityX = {10, 41, 52};
    vector<int> cityY = {722, 735, 707};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 40.48183451401122;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> boundaryX = {-25, -21, -3, 10, 14, 21, 39, 79, 97, 104, 130, 143, 146, 154, 155, 165, 156, 130, 110, 84, 39, 14, 8, 3, -3, -25, -35, -41, -43, -47, -46, -45};
    vector<int> boundaryY = {181, 176, 160, 152, 150, 147, 142, 142, 147, 150, 167, 181, 185, 198, 200, 233, 292, 327, 341, 351, 352, 344, 341, 338, 334, 313, 298, 285, 279, 233, 227, 222};
    vector<int> cityX = {11, 73, 43, 36};
    vector<int> cityY = {244, 226, 284, 201};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 107.15725598939274;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> boundaryX = {-133, -140, -142, -146, -147, -148, -147, -146, -142, -140, -133, -130, -122, -118, -110, -102, -98, -90, -87, -80, -78, -74, -73, -73, -74, -78, -80, -87, -90, -98, -102, -118, -122, -130};
    vector<int> boundaryY = {-19, -26, -29, -37, -41, -49, -57, -61, -69, -72, -79, -81, -85, -86, -87, -86, -85, -81, -79, -72, -69, -61, -57, -41, -37, -29, -26, -19, -17, -13, -12, -12, -13, -17};
    vector<int> cityX = {-125};
    vector<int> cityY = {-32};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 60.44005294504619;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> boundaryX = {-272, -264, -232, -228, -213, -184, -179, -158, -127, -80, -50, -35, -1, 36, 43, 68, 78, 113, 110, 106, 87, 64, 42, -32, -71, -117, -129, -206, -213, -236, -269, -277, -284, -287, -312, -313, -316, -305, -292, -287, -284};
    vector<int> boundaryY = {-378, -388, -418, -421, -431, -446, -448, -455, -461, -462, -457, -453, -439, -415, -409, -383, -370, -205, -192, -179, -136, -104, -82, -40, -31, -30, -31, -57, -61, -77, -110, -121, -131, -136, -200, -205, -226, -317, -347, -356, -361};
    vector<int> cityX = {-268};
    vector<int> cityY = {-280};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 388.3117304434669;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> boundaryX = {16, 14, -16, -63, -81, -83, -84, -85, -83, -50, 3, 14, 23, 24, 23};
    vector<int> boundaryY = {-117, -114, -94, -103, -127, -133, -137, -147, -161, -198, -191, -180, -161, -137, -133};
    vector<int> cityX = {-53};
    vector<int> cityY = {-190};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 102.88342918079614;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> boundaryX = {320, 308, 275, 270, 258, 254, 243, 237, 235, 231, 227, 226, 229, 238, 248, 259, 275, 283, 333, 339, 355, 371, 390, 456, 462, 468, 473, 476, 479, 481, 483, 483, 479, 475, 473, 468, 456, 452, 440, 435, 427, 419, 407, 399, 386, 377};
    vector<int> boundaryY = {412, 408, 389, 385, 373, 368, 352, 340, 335, 323, 304, 288, 261, 234, 216, 202, 187, 181, 161, 160, 159, 160, 164, 208, 216, 226, 236, 244, 253, 261, 272, 303, 323, 335, 340, 350, 368, 373, 385, 389, 395, 400, 406, 409, 413, 415};
    vector<int> cityX = {261, 444, 482, 254, 347};
    vector<int> cityY = {265, 346, 281, 351, 379};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 157.17656301787676;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> boundaryX = {90, 239, 306, 361, 386, 568, 598, 625, 751, 750, 728, 692, 627, 575, 509, 440, 269, 217, 56, -125, -170, -214, -254, -427, -471, -486, -540, -413, -307, -243, 25, 61};
    vector<int> boundaryY = {-711, -698, -680, -659, -648, -518, -486, -452, -138, 26, 127, 220, 327, 389, 449, 496, 569, 580, 588, 548, 529, 506, 482, 313, 242, 211, -146, -455, -565, -611, -707, -710};
    vector<int> cityX = {265, -72, 358, -462, -339};
    vector<int> cityY = {245, 547, 461, -297, 383};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 906.0309452903401;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> boundaryX = {456, 436, 418, 413, 400, 386, 371, 362, 356, 326, 320, 296, 282, 246, 242, 239, 228, 227, 225, 233, 253, 264, 269, 273, 279, 296, 311, 326, 362, 371, 386, 409, 413, 418, 429, 433, 436, 442, 449};
    vector<int> boundaryY = {-223, -134, -114, -110, -101, -94, -89, -87, -86, -86, -87, -94, -101, -134, -140, -145, -172, -176, -187, -247, -279, -290, -294, -297, -301, -310, -315, -318, -317, -315, -310, -297, -294, -290, -279, -274, -270, -261, -247};
    vector<int> cityX = {392, 239};
    vector<int> cityY = {-305, -237};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 207.660210231095;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> boundaryX = {-582, -566, -522, -509, -499, -457, -431, -425, -425, -427, -429, -431, -436, -441, -451, -459, -483, -492, -517, -529, -533, -538, -589, -595, -603, -610, -618, -635, -678, -685, -690, -696, -698, -701, -708, -707, -706, -705, -698, -696, -687, -681, -649, -640, -635, -623, -610, -603, -595, -589};
    vector<int> boundaryY = {-33, -34, -27, -22, -17, 17, 64, 92, 124, 137, 145, 152, 165, 175, 191, 201, 223, 229, 241, 245, 246, 247, 248, 247, 245, 243, 240, 232, 195, 185, 177, 165, 160, 152, 108, 93, 85, 79, 56, 51, 34, 25, -7, -13, -16, -22, -27, -29, -31, -32};
    vector<int> cityX = {-664, -645};
    vector<int> cityY = {17, 29};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 253.33771926027882;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> boundaryX = {87, 83, 83, 102, 106, 151, 163, 196, 219, 234, 251, 268, 287, 313, 326, 332, 345, 351, 355, 356, 351, 313, 170, 151, 146, 136, 118, 112, 106, 102, 93, 90};
    vector<int> boundaryY = {246, 229, 183, 133, 127, 86, 80, 70, 68, 69, 72, 77, 86, 105, 119, 127, 150, 166, 184, 191, 246, 307, 335, 326, 323, 316, 300, 293, 285, 279, 262, 255};
    vector<int> cityX = {334, 277, 216, 108};
    vector<int> cityY = {254, 289, 131, 128};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 165.0484777269969;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> boundaryX = {-461, -460, -460, -461, -463, -465, -473, -475, -477, -478, -479, -478, -477, -475, -473, -469, -465, -463};
    vector<int> boundaryY = {79, 81, 89, 91, 93, 94, 94, 93, 91, 89, 85, 81, 79, 77, 76, 75, 76, 77};
    vector<int> cityX = {-476, -467, -472, -474, -468};
    vector<int> cityY = {89, 85, 78, 77, 93};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 10.205637525536494;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> boundaryX = {141, -259, 432, 435};
    vector<int> boundaryY = {409, -357, -99, -83};
    vector<int> cityX = {-41};
    vector<int> cityY = {-194};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 629.867446372639;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> boundaryX = {-227, -220, -211, -206, -182, -173, -169, -167, -166, -168, -169, -173, -188, -192, -211, -227, -231, -238, -247, -254, -301, -306, -329, -333, -340, -349, -382, -383, -388, -391, -392, -393, -393, -384, -368, -349, -346, -322, -301, -295, -265, -259, -254, -250};
    vector<int> boundaryY = {-231, -227, -221, -217, -189, -171, -159, -150, -114, -103, -99, -87, -60, -55, -37, -27, -25, -22, -19, -17, -16, -17, -25, -27, -31, -37, -76, -78, -90, -99, -103, -108, -150, -178, -203, -221, -223, -236, -242, -243, -243, -242, -241, -240};
    vector<int> cityX = {-288, -357};
    vector<int> cityY = {-175, -103};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 158.24913168849764;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> boundaryX = {-10, -13, -14, -15, -14, -10, -7, -3, 0, 6, 16, 22, 35, 57, 76, 82, 86, 92, 95, 106, 105, 102, 99, 92, 86, 76, 70, 61, 57, 35, 31, 22, -3};
    vector<int> boundaryY = {-191, -200, -204, -215, -226, -239, -245, -251, -255, -261, -268, -271, -275, -275, -268, -264, -261, -255, -251, -226, -200, -191, -185, -175, -169, -162, -159, -156, -155, -155, -156, -159, -179};
    vector<int> cityX = {90};
    vector<int> cityY = {-217};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 105.0190458916856;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> boundaryX = {16, 2, -2, -8, -44, -145, -191, -250, -319, -380, -540, -554, -566, -565, -559, -546, -539, -523, -472, -137, -70};
    vector<int> boundaryY = {46, 85, 94, 106, 159, 236, 253, 263, 260, 243, 94, 59, 8, -81, -110, -148, -164, -193, -254, -300, -254};
    vector<int> cityX = {-60, -190};
    vector<int> cityY = {139, -178};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 443.2651576652495;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> boundaryX = {-14, -16, -17, -24, -28, -32, -41, -120, -137, -169, -202, -242, -265, -273, -279, -292, -292, -291, -288, -284, -273, -265, -261, -237, -223, -216, -214, -207, -186, -176, -169, -137, -130, -120, -116, -39, -33, -25, -21};
    vector<int> boundaryY = {187, 199, 204, 225, 234, 241, 255, 307, 310, 310, 302, 279, 255, 243, 232, 187, 155, 148, 134, 122, 99, 87, 82, 59, 50, 46, 45, 42, 35, 33, 32, 32, 33, 35, 36, 90, 99, 115, 125};
    vector<int> cityX = {-272, -255, -100, -80, -277};
    vector<int> cityY = {221, 125, 72, 130, 165};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 177.35039805003998;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> boundaryX = {-547, -551, -558, -565, -569, -572, -574, -573, -572, -569, -565, -561, -558, -551, -547, -541, -533, -524, -508, -497, -492, -483, -475, -469, -465, -458, -455, -451, -447, -444, -443, -443, -444, -447, -451, -455, -458, -465, -469, -475, -483, -492, -519, -524, -533, -541};
    vector<int> boundaryY = {713, 710, 703, 693, 685, 676, 660, 649, 644, 635, 627, 621, 617, 610, 607, 603, 599, 596, 594, 595, 596, 599, 603, 607, 610, 617, 621, 627, 635, 644, 649, 671, 676, 685, 693, 699, 703, 710, 713, 717, 721, 724, 725, 724, 721, 717};
    vector<int> cityX = {-537, -451};
    vector<int> cityY = {708, 639};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 101.35068055475037;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> boundaryX = {-134, -155, -159, -158, -156, -98, -75, -62, -43, -26, 14, 33, 31, -2, -49, -75, -81, -100};
    vector<int> boundaryY = {-547, -585, -612, -625, -635, -702, -708, -709, -707, -702, -672, -631, -585, -536, -516, -516, -517, -523};
    vector<int> cityX = {-65, -62, 20};
    vector<int> cityY = {-541, -617, -596};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 111.07260875781542;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> boundaryX = {27, 39, 69, 69, 66, 58, 42, 36, -129, -201, -268, -325, -333, -347, -354, -356, -372, -373, -367, -362, -320, -240, -225, -209, -50};
    vector<int> boundaryY = {-150, -133, -57, 26, 40, 65, 98, 108, 207, 202, 174, 123, 112, 89, 75, 70, 0, -15, -66, -84, -159, -219, -225, -230, -214};
    vector<int> cityX = {-99, -45};
    vector<int> cityY = {-176, -208};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 391.52011442580977;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> boundaryX = {540, 530, 525, 511, 490, 454, 428, 404, 376, 362, 326, 318, 151, 141, 99, 80, -148, -268, -289, -295, -361, -373, -463, -477, -447, -314, -296, -264, -185, -42, 106, 382, 492, 508, 528, 550};
    vector<int> boundaryY = {303, 338, 355, 392, 435, 492, 525, 551, 577, 589, 616, 621, 692, 694, 701, 703, 671, 606, 590, 585, 519, 504, 323, 252, 4, -192, -208, -233, -279, -323, -324, -196, -55, -21, 31, 139};
    vector<int> cityX = {-18, 21, -112, -199};
    vector<int> cityY = {-257, 598, 530, 13};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 695.8299098129012;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> boundaryX = {31, 25, 23, 22, 21, 20, 21, 22, 23, 25, 31, 34, 36, 39, 46, 53, 56, 58, 61, 67, 69, 70, 71, 71, 70, 69, 67, 61, 58, 56, 53, 39, 36, 34};
    vector<int> boundaryY = {-30, -36, -39, -41, -44, -51, -58, -61, -63, -66, -72, -74, -75, -76, -77, -76, -75, -74, -72, -66, -63, -61, -58, -44, -41, -39, -36, -30, -28, -27, -26, -26, -27, -28};
    vector<int> cityX = {33, 33, 41, 53};
    vector<int> cityY = {-42, -37, -45, -33};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 33.61547262794318;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> boundaryX = {664, 711, 699, 659, 542, 281};
    vector<int> boundaryY = {-380, -278, -152, -86, -14, -134};
    vector<int> cityX = {654, 548, 506, 553};
    vector<int> cityY = {-145, -47, -100, -246};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 227.55438910290815;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> boundaryX = {18, 12, 5, 4, 5, 8, 12, 18, 24, 30, 36, 40, 43, 43, 40, 36};
    vector<int> boundaryY = {-14, -17, -27, -33, -39, -45, -49, -52, -53, -52, -49, -45, -39, -27, -21, -17};
    vector<int> cityX = {34};
    vector<int> cityY = {-21};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 35.60898762952962;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> boundaryX = {63, 84, 113, 98, 89, 77, 58, 44, 15, -15, -21, -33, -39, -58, -77, -84, -95, -98, -112, -111, -105, -95, -84, -67, -58, -15};
    vector<int> boundaryY = {-43, -25, 67, 110, 123, 136, 150, 157, 165, 165, 164, 161, 159, 150, 136, 129, 115, 110, 73, 27, 8, -11, -25, -40, -46, -61};
    vector<int> cityX = {-68, 85, -72, 3};
    vector<int> cityY = {106, 54, 20, 103};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 121.12489246419078;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> boundaryX = {245, 195, 111, -2, -212, -303, -440, -445, -449, -445, -441, -429, -393, -146, 52, 251, 258, 275, 283, 293, 311, 312, 293, 275};
    vector<int> boundaryY = {362, 420, 481, 520, 498, 446, 238, 214, 188, 71, 52, 13, -61, -232, -220, -67, -56, -25, -7, 19, 96, 105, 268, 311};
    vector<int> cityX = {-266, 234, 238, 288};
    vector<int> cityY = {452, 43, 201, 259};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 597.292981005384;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> boundaryX = {-81, -71, -23, 10, 8, 6, -23, -28, -64, -189, -237, -275, -281, -301, -303, -301, -300, -298, -294, -281, -269, -264, -211};
    vector<int> boundaryY = {-26, -21, 19, 93, 153, 161, 217, 223, 253, 270, 247, 209, 200, 148, 101, 88, 83, 75, 63, 36, 19, 13, -26};
    vector<int> cityX = {-286, -93, -177};
    vector<int> cityY = {144, 254, 41};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 192.51328759346143;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> boundaryX = {-205, -188, -170, -142, -120, -101, -62, -60, -70, -73, -101, -211, -218, -220, -225};
    vector<int> boundaryY = {7, -8, -17, -22, -19, -11, 39, 49, 102, 107, 133, 107, 94, 89, 61};
    vector<int> cityX = {-90, -63};
    vector<int> cityY = {22, 51};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 147.87156589419027;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> boundaryX = {175, 177, 180, 183, 186, 191, 196, 199, 202, 205, 207, 208, 208, 207, 205, 202, 199, 196, 186, 183, 180, 177, 174, 173, 174};
    vector<int> boundaryY = {-166, -169, -172, -174, -175, -176, -175, -174, -172, -169, -166, -163, -153, -150, -147, -144, -142, -141, -141, -142, -144, -147, -153, -158, -163};
    vector<int> cityX = {187, 175, 205};
    vector<int> cityY = {-171, -165, -155};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 24.94193256345607;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> boundaryX = {69, -15, -13, -12, 53, 119, 87};
    vector<int> boundaryY = {29, -49, -58, -61, -107, -18, 22};
    vector<int> cityX = {110, 83, 7};
    vector<int> cityY = {-12, 17, -72};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 96.02102212124181;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> boundaryX = {34, 59, 65, 68, 76, 80, 81, 76, 74, 65, 53, 29, 3, -1, -12, -46, -51, -69, -81, -100, -106, -111, -117, -120, -126, -128, -130, -132, -134, -135, -134, -133, -132, -126, -117, -111, -106, -100, -94, -86, -69, -64, -40, -26, -1, 12, 17, 29};
    vector<int> boundaryY = {189, 212, 220, 225, 242, 255, 260, 318, 323, 340, 355, 374, 385, 386, 388, 387, 386, 380, 374, 360, 354, 348, 340, 335, 323, 318, 312, 305, 294, 280, 266, 260, 255, 237, 220, 212, 206, 200, 195, 189, 180, 178, 172, 171, 174, 178, 180, 186};
    vector<int> cityX = {-85, -121, -99, -20};
    vector<int> cityY = {297, 287, 225, 271};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 149.21093786512446;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> boundaryX = {74, 73, 74, 76, 78, 78};
    vector<int> boundaryY = {110, 108, 106, 105, 106, 110};
    vector<int> cityX = {76};
    vector<int> cityY = {108};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9999999999999822;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> boundaryX = {204, 219, 244, 246, 250, 258, 246, 225, 219, 147, 150, 158};
    vector<int> boundaryY = {-94, -92, -78, -76, -71, -15, 4, 18, 20, -26, -57, -71};
    vector<int> cityX = {205};
    vector<int> cityY = {-22};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 72.0069441095784;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> boundaryX = {73, 100, 109, 127, 135, 151, 193, 212, 224, 241, 260, 267, 279, 288, 292, 295, 297, 299, 300, 300, 299, 297, 273, 267, 255, 238, 232, 212, 193, 185, 168, 113, 109, 100, 73, 56, 48, 42, 14, 10, 5, 3, 3, 5, 8, 25, 42, 55};
    vector<int> boundaryY = {112, 99, 96, 92, 91, 90, 96, 103, 109, 120, 137, 145, 162, 179, 189, 198, 206, 216, 223, 257, 264, 274, 327, 335, 348, 362, 366, 377, 384, 386, 389, 385, 384, 381, 368, 356, 349, 343, 301, 291, 274, 264, 216, 206, 195, 159, 137, 125};
    vector<int> cityX = {146};
    vector<int> cityY = {194};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 196.23710148695082;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> boundaryX = {149, 200, 400, 475, 454, 449, 300, 242, 212, 183, 151, 2, -167, -275, -308, -300, -291, -216, -207, -174, -114, -83};
    vector<int> boundaryY = {-221, -209, -66, 140, 295, 309, 493, 525, 537, 546, 553, 550, 469, 328, 202, 79, 47, -89, -99, -131, -174, -190};
    vector<int> cityX = {-248, 162, 373};
    vector<int> cityY = {144, 72, 201};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 491.2485785899387;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> boundaryX = {-37, -80, 134};
    vector<int> boundaryY = {-312, -472, -566};
    vector<int> cityX = {-37, 7, 34, -6};
    vector<int> cityY = {-314, -456, -444, -429};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 157.74663229368466;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> boundaryX = {-198, -158, -135, -124, -118, -112, -110, -109, -112, -146, -175, -213, -235, -319, -323, -429, -470, -595, -602, -637, -643, -661, -667, -668, -647, -579, -500, -359, -327, -309, -296};
    vector<int> boundaryY = {78, 124, 164, 191, 210, 238, 252, 305, 331, 425, 466, 503, 519, 556, 557, 562, 553, 475, 467, 416, 404, 354, 324, 255, 173, 77, 26, 5, 10, 15, 19};
    vector<int> cityX = {-545, -539, -508, -374, -191};
    vector<int> cityY = {437, 329, 277, 198, 442};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 309.6784158600984;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> boundaryX = {-904, -907, -911, -914, -924, -924, -915, -911, -886, -880, -875, -812, -791, -782, -776, -772, -755, -746, -741, -738, -738, -751, -758, -772, -787, -804, -818, -844, -858, -864};
    vector<int> boundaryY = {273, 269, 263, 258, 227, 201, 172, 165, 138, 134, 131, 122, 129, 134, 138, 141, 159, 174, 187, 201, 227, 263, 273, 287, 297, 304, 307, 307, 304, 302};
    vector<int> cityX = {-875, -871};
    vector<int> cityY = {188, 287};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 142.44297104455492;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> boundaryX = {-246, -237, -256, -270, -277, -280, -285, -287, -290, -289, -287, -285, -256, -253};
    vector<int> boundaryY = {101, 113, 150, 150, 147, 145, 140, 137, 116, 113, 109, 106, 96, 97};
    vector<int> cityX = {-259, -256, -256};
    vector<int> cityY = {142, 134, 142};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 40.542326299818164;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> boundaryX = {-121, -115, -109, -103, -98, -95, -98, -109, -121, -127, -132, -136, -127};
    vector<int> boundaryY = {134, 133, 134, 137, 142, 148, 166, 174, 174, 171, 166, 154, 137};
    vector<int> cityX = {-120, -112};
    vector<int> cityY = {143, 160};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 23.625380138432874;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> boundaryX = {-112, -115, -127, -131, -149, -168, -261, -262, -248, -112};
    vector<int> boundaryY = {47, 51, 63, 66, 76, 81, 20, 16, -51, -51};
    vector<int> cityX = {-123, -176};
    vector<int> cityY = {54, -2};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 105.0551443520729;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> boundaryX = {-675, -679, -690, -705, -707, -700, -690, -685, -679, -662, -656, -645, -640, -619, -603, -547, -530, -516, -492, -450, -437, -435, -434, -432, -453, -461, -465, -521, -530, -554, -586, -593, -619, -624, -640, -648, -656};
    vector<int> boundaryY = {-490, -495, -511, -548, -558, -630, -651, -659, -667, -685, -690, -698, -701, -711, -716, -718, -714, -709, -696, -651, -621, -614, -609, -597, -506, -495, -490, -451, -448, -443, -443, -444, -451, -453, -461, -466, -472};
    vector<int> cityX = {-499};
    vector<int> cityY = {-529};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 226.92730113408552;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> boundaryX = {145, 162, 168, 181, 200, 241, 277, 271, 231, 217, 125, 109, 98, 85};
    vector<int> boundaryY = {-45, -50, -51, -52, -50, -31, 58, 81, 128, 135, 124, 110, 95, 32};
    vector<int> cityX = {168, 163, 104, 152, 165};
    vector<int> cityY = {91, 104, 72, 125, -17};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 128.60934109423889;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> boundaryX = {-819, -831, -834, -837, -840, -818, -792, -635, -544, -422, -340, -282, -239, -229, -209, -264, -340, -410, -479};
    vector<int> boundaryY = {170, 134, 122, 106, 86, -70, -121, -249, -269, -254, -214, -163, -102, -82, 125, 243, 316, 352, 369};
    vector<int> cityX = {-426};
    vector<int> cityY = {-65};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 457.901736183646;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> boundaryX = {536, 532, 527, 524, 518, 506, 498, 493, 483, 471, 461, 425, 413, 403, 390, 378, 372, 369, 364, 360, 358, 357, 358, 360, 372, 378, 390, 398, 403, 425, 435, 448, 461, 471, 483, 518, 524, 527, 538};
    vector<int> boundaryY = {184, 196, 206, 211, 219, 231, 237, 240, 245, 249, 251, 249, 245, 240, 231, 219, 211, 206, 196, 184, 174, 161, 148, 138, 111, 103, 91, 85, 82, 73, 71, 70, 71, 73, 77, 103, 111, 116, 148};
    vector<int> cityX = {386, 388, 479, 398, 419};
    vector<int> cityY = {119, 220, 77, 145, 229};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 123.39978233234568;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> boundaryX = {-121, -116, -109, -100, -87, -84, -79, -61, -58, -55, -54, -56, -58, -61, -70, -74, -84, -109, -121, -126, -147, -146, -145, -139, -136, -130};
    vector<int> boundaryY = {-100, -102, -104, -105, -103, -102, -100, -84, -79, -71, -67, -42, -37, -32, -22, -19, -14, -12, -16, -19, -58, -67, -71, -84, -88, -94};
    vector<int> cityX = {-95, -108, -137};
    vector<int> cityY = {-71, -82, -51};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 58.05170109479975;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> boundaryX = {-110, -92, -91, -90, -95, -96, -98, -117, -140, -146, -162, -228, -244, -252, -274, -324, -324, -322, -321, -308, -304, -237, -207, -186, -181, -177, -170, -140};
    vector<int> boundaryY = {357, 398, 403, 439, 461, 464, 469, 500, 521, 525, 533, 540, 536, 533, 521, 439, 409, 398, 394, 363, 357, 310, 306, 308, 309, 310, 312, 327};
    vector<int> cityX = {-253};
    vector<int> cityY = {383};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 179.40178371465493;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> boundaryX = {40, 36, -1, -15, -29, -39, -51, -77, -119, -178, -190, -202, -221, -230, -249, -253, -254, -252, -244, -241, -230, -224, -212, -178, -171, -137, -59, -51, -31, -15, -10, 3, 24, 45, 62, 64, 65, 65, 63, 56, 53, 47, 43};
    vector<int> boundaryY = {-362, -356, -319, -310, -303, -299, -295, -290, -291, -313, -321, -331, -352, -365, -410, -432, -449, -474, -504, -512, -533, -542, -557, -585, -589, -603, -605, -603, -596, -588, -585, -576, -557, -528, -484, -473, -466, -432, -419, -394, -386, -374, -367};
    vector<int> cityX = {-179, -211};
    vector<int> cityY = {-507, -489};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 262.7279962242317;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> boundaryX = {19, 20, 20, 18, 17};
    vector<int> boundaryY = {15, 16, 18, 18, 17};
    vector<int> cityX = {19, 19, 18};
    vector<int> cityY = {17, 16, 17};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730787;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> boundaryX = {-186, -165, -129, -109, -113, -156, -167};
    vector<int> boundaryY = {162, 105, 105, 164, 170, 186, 182};
    vector<int> cityX = {-118, -146, -132, -142, -160};
    vector<int> cityY = {167, 161, 144, 168, 147};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 43.09674466256323;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> boundaryX = {529, 556, 598, 602, 603, 597, 595, 589, 579, 542, 516, 493, 471, 457, 292, 263, 217, 209, 168, 126, 99, 88, 76, 41, 29, 26, 26, 28, 31, 37, 43, 63, 127, 145, 175, 212, 241, 257, 274, 294, 338, 355, 378, 435, 462};
    vector<int> boundaryY = {88, 122, 218, 238, 326, 356, 364, 383, 407, 467, 495, 515, 530, 539, 575, 571, 559, 556, 536, 506, 480, 467, 451, 383, 338, 319, 253, 239, 222, 199, 182, 140, 63, 49, 30, 13, 4, 0, -3, -5, -5, -3, 1, 20, 34};
    vector<int> cityX = {375, 178, 141, 152};
    vector<int> cityY = {210, 486, 236, 246};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 380.350543576193;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> boundaryX = {29, 31, 34, 34, 31, 29, 24, 21, 17, -3, -7, -10, -15, -19, -20, -21, -20, -19, -17, -15, -10, -7, -3, 0, 7, 14, 21, 24};
    vector<int> boundaryY = {-52, -49, -42, -28, -21, -18, -13, -11, -9, -9, -11, -13, -18, -25, -28, -35, -42, -45, -49, -52, -57, -59, -61, -62, -63, -62, -59, -57};
    vector<int> cityX = {-12, -10, 27, 12};
    vector<int> cityY = {-49, -28, -37, -33};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 28.550974970132224;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> boundaryX = {3, 10, 16, 17, 17, 16, 13, 10, 6, 3, -7, -13, -19, -28, -32, -54, -58, -73, -83, -89, -92, -96, -99, -102, -103, -104, -103, -102, -99, -96, -92, -89, -79, -73, -67, -58, -43, -32, -28, -19, -13, -7, -3};
    vector<int> boundaryY = {46, 56, 71, 75, 97, 101, 110, 116, 122, 126, 135, 139, 142, 145, 146, 146, 145, 139, 132, 126, 122, 116, 110, 101, 97, 86, 75, 71, 62, 56, 50, 46, 37, 33, 30, 27, 25, 26, 27, 30, 33, 37, 40};
    vector<int> cityX = {-47};
    vector<int> cityY = {58};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 89.26925562588704;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> boundaryX = {64, 66, 67, 67, 62, 58, 41, 37, 31, 23, 11, 6, -18, -23, -49, -63, -74, -76, -78, -79, -79, -76, -70, -66, -63, -43, -35, -30, -6, 6, 11, 18, 23, 31, 37, 51, 58};
    vector<int> boundaryY = {-88, -81, -76, -52, -35, -27, -7, -4, 0, 4, 8, 9, 9, 8, -4, -17, -35, -40, -47, -52, -76, -88, -101, -107, -111, -128, -132, -134, -138, -137, -136, -134, -132, -128, -124, -111, -101};
    vector<int> cityX = {-19, -46, -78, -50};
    vector<int> cityY = {-40, -109, -74, -6};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 99.10746873295112;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> boundaryX = {-198, -199, -203, -205, -209, -214, -217, -246, -268, -278, -294, -306, -311, -320, -400, -405, -414, -422, -445, -451, -463, -466, -468, -470, -465, -459, -445, -442, -438, -422, -405, -370, -362, -334, -318, -311, -294, -288, -229, -223, -219};
    vector<int> boundaryY = {223, 262, 279, 285, 295, 305, 310, 344, 359, 364, 370, 373, 374, 375, 359, 356, 350, 344, 319, 310, 285, 275, 267, 223, 199, 183, 159, 155, 150, 134, 122, 107, 105, 102, 103, 104, 108, 110, 151, 159, 165};
    vector<int> cityX = {-291, -298, -387, -270};
    vector<int> cityY = {243, 147, 198, 354};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 150.8483317243753;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> boundaryX = {-106, 33, 233, 254, 473, 67, 25, -2, -60};
    vector<int> boundaryY = {-164, -342, -379, -375, 14, 199, 177, 158, 98};
    vector<int> cityX = {51};
    vector<int> cityY = {-2};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 424.66221871035;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> boundaryX = {11, 15, 19, 23, 23, 19, 11, 7, 6, 7};
    vector<int> boundaryY = {-93, -94, -93, -89, -81, -77, -77, -81, -85, -89};
    vector<int> cityX = {7};
    vector<int> cityY = {-83};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 17.08800749063496;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> boundaryX = {91, 79, -176, -202, -233, -249, -267, -254, -246, -242, -169, -136, -46, -33, 19, 35, 52, 96, 130};
    vector<int> boundaryY = {89, 104, 144, 126, 94, 71, 31, -126, -140, -146, -212, -226, -234, -232, -214, -205, -193, -146, -14};
    vector<int> cityX = {-65, -58};
    vector<int> cityY = {84, 35};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 272.40594707164445;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> boundaryX = {41, 41, 40, 34, 33, 32, 33, 34, 37, 40};
    vector<int> boundaryY = {6, 12, 13, 13, 12, 9, 6, 5, 4, 5};
    vector<int> cityX = {39, 40, 35, 37, 38};
    vector<int> cityY = {10, 7, 11, 10, 8};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 5.385164807134426;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> boundaryX = {1, 98, 118, 126, 152, 192, 204, 208, 187, 160, 126, 47, 39, -10, -48, -59, -60, -58};
    vector<int> boundaryY = {-193, -213, -208, -205, -191, -148, -122, -51, -2, 27, 47, 54, 52, 27, -21, -56, -94, -107};
    vector<int> cityX = {135, 100, 55};
    vector<int> cityY = {-129, -100, -135};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 168.01488029338265;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> boundaryX = {-85, -87, -88, -89, -88, -87, -85, -82, -80, -77, -72, -68, -65, -59, -53, -49, -40, -31, -27, -21, -15, -12, -8, -3, 0, 2, 5, 7, 8, 8, 7, 5, 2, 0, -3, -8, -12, -15, -21, -27, -31, -49, -53, -59, -65, -68, -72, -77, -80, -82};
    vector<int> boundaryY = {22, 16, 12, 3, -6, -10, -16, -22, -25, -29, -34, -37, -39, -42, -44, -45, -46, -45, -44, -42, -39, -37, -34, -29, -25, -22, -16, -10, -6, 12, 16, 22, 28, 31, 35, 40, 43, 45, 48, 50, 51, 51, 50, 48, 45, 43, 40, 35, 31, 28};
    vector<int> cityX = {-67, -71, -18, -14, -15};
    vector<int> cityY = {7, 21, -40, -17, -31};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 65.68233264393106;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> boundaryX = {95, 98, 101, 102, 102, 101, 95, 94, 93, 94};
    vector<int> boundaryY = {275, 274, 275, 276, 282, 283, 283, 282, 279, 276};
    vector<int> cityX = {97, 98};
    vector<int> cityY = {282, 275};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 5.942842195436609;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> boundaryX = {49, 58, 60, 63, 64, 64, 63, 60, 58, 49, 43, 40, 24, 21, 15, 12, 6, 4, 1, 0, -1, 12, 15, 21, 24, 32, 40, 43};
    vector<int> boundaryY = {-51, -43, -40, -34, -31, -15, -12, -6, -3, 5, 8, 9, 9, 8, 5, 3, -3, -6, -12, -15, -23, -49, -51, -54, -55, -56, -55, -54};
    vector<int> cityX = {32};
    vector<int> cityY = {-8};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 47.99999999999988;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> boundaryX = {589, 584, 565, 515, 408, 385, 345, 336, 325, 306, 293, 280, 250, 247, 227, 215, 221, 226, 227, 238, 253, 259, 345, 362, 430, 483, 551, 556, 679, 685, 697, 699, 707, 704, 699, 696, 690, 685, 679, 660, 642};
    vector<int> boundaryY = {169, 172, 182, 199, 199, 193, 176, 171, 164, 150, 139, 126, 86, 81, 37, -20, -100, -118, -121, -148, -175, -184, -260, -268, -287, -288, -272, -270, -158, -146, -114, -108, -22, 2, 24, 34, 50, 62, 74, 104, 126};
    vector<int> cityX = {575, 290, 436, 700, 677};
    vector<int> cityY = {162, 75, 129, -84, -115};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 350.33634668761425;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> boundaryX = {-28, -27, -26, -22, -18, -16, -7, -1, 2, 4, 8, 9, 12, 13, 14, 14, 13, 12, 9, 8, 2, -1, -13, -16, -18, -22, -23, -26, -28, -29};
    vector<int> boundaryY = {-13, -16, -18, -23, -26, -27, -29, -28, -27, -26, -23, -22, -18, -16, -13, -1, 2, 4, 8, 9, 13, 14, 14, 13, 12, 9, 8, 4, -1, -7};
    vector<int> cityX = {5, -17, -12};
    vector<int> cityY = {6, 7, -11};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 25.76479787063789;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> boundaryX = {233, 244, 267, 273, 366, 373, 382, 420, 462, 491, 506, 529, 543, 562, 590, 594, 597, 602, 604, 607, 598, 595, 591, 573, 517, 491, 486, 474, 446, 382, 354, 325, 320, 311, 253, 252, 244, 236};
    vector<int> boundaryY = {292, 208, 165, 157, 94, 92, 90, 86, 91, 100, 107, 121, 132, 151, 194, 203, 211, 227, 236, 292, 334, 342, 352, 383, 435, 448, 450, 454, 460, 458, 450, 436, 433, 427, 360, 358, 340, 312};
    vector<int> cityX = {581};
    vector<int> cityY = {230};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 354.6110545372208;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> boundaryX = {41, 30, 25, 25, 27, 30, 41, 47, 83};
    vector<int> boundaryY = {155, 146, 135, 121, 115, 110, 101, 99, 135};
    vector<int> cityX = {53, 44, 36};
    vector<int> cityY = {107, 106, 138};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 41.036569057365924;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> boundaryX = {245, 240, 209, 198, 194, 116, 73, 67, 59, 37, 11, 3, 0, 1, 11, 15, 23, 25, 67, 101, 184, 202, 251, 264, 312, 319, 317, 298, 281, 251};
    vector<int> boundaryY = {284, 287, 301, 304, 305, 303, 284, 280, 274, 253, 211, 187, 173, 118, 85, 76, 62, 59, 16, -2, -11, -7, 16, 26, 98, 131, 178, 229, 253, 280};
    vector<int> cityX = {210, 277, 114, 144, 83};
    vector<int> cityY = {242, 165, 24, 276, 131};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 153.32154734798655;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> boundaryX = {55, 72, 88, 81, 72, 65, -115, -127, -132, -152, -165, -188, -195, -200, -199, -191, -182, -142, -132, -84};
    vector<int> boundaryY = {-14, 10, 111, 135, 154, 165, 215, 209, 206, 191, 178, 142, 123, 66, 58, 29, 10, -35, -42, -61};
    vector<int> cityX = {57};
    vector<int> cityY = {123};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 265.21689237301575;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> boundaryX = {-198, -171, -72, -64, -64, -113, -183, -227, -236};
    vector<int> boundaryY = {-517, -529, -491, -476, -406, -357, -357, -396, -464};
    vector<int> cityX = {-162, -218, -109, -130, -185};
    vector<int> cityY = {-382, -459, -454, -378, -474};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 80.48141495271142;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> boundaryX = {235, 309, 357, 401, 412, 443, 460, 484, 499, 500, 506, 530, 533, 539, 522, 517, 502, 464, 275, 179, 166, 84, -28, -64, -114, -185, -233, -245, -250, -256, -226, -219, -195, -156, -19};
    vector<int> boundaryY = {-674, -648, -622, -589, -579, -547, -526, -490, -462, -460, -447, -374, -359, -271, -168, -153, -116, -52, 90, 112, 113, 110, 77, 58, 23, -53, -142, -178, -198, -232, -447, -462, -504, -555, -653};
    vector<int> cityX = {266, 450, 139};
    vector<int> cityY = {-268, -291, 55};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 523.5503796197636;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> boundaryX = {-198, -175, -155, -141, -112, -100, -95, -75, -53, -50, -48, -47, -50, -64, -70, -75, -95, -126, -130, -175, -198, -215, -223, -246, -255, -263, -264, -261, -260, -240, -215};
    vector<int> boundaryY = {148, 141, 139, 140, 148, 154, 157, 174, 210, 219, 228, 262, 277, 308, 316, 322, 339, 353, 354, 355, 348, 339, 333, 308, 291, 262, 248, 223, 219, 180, 157};
    vector<int> cityX = {-79, -96};
    vector<int> cityY = {299, 174};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 188.1215496197752;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> boundaryX = {16, 12, 9, 8, 9, 12, 16, 22, 28, 34, 40, 44, 47, 47, 44, 40, 34, 22};
    vector<int> boundaryY = {-38, -42, -48, -54, -60, -66, -70, -73, -74, -73, -70, -66, -60, -48, -42, -38, -35, -35};
    vector<int> cityX = {33, 26, 36, 25, 46};
    vector<int> cityY = {-65, -68, -61, -51, -58};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 26.849429226835447;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> boundaryX = {-88, -92, -97, -104, -112, -115, -117, -119, -121, -122, -117, -115, -112, -108, -104, -101, -92, -57, -54, -50, -43, -36, -37, -41, -43, -54, -57, -66, -70};
    vector<int> boundaryY = {145, 144, 142, 138, 131, 127, 124, 120, 115, 111, 80, 77, 73, 69, 66, 64, 60, 64, 66, 69, 77, 111, 115, 124, 127, 138, 140, 144, 145};
    vector<int> cityX = {-83, -70, -53, -63, -72};
    vector<int> cityY = {96, 140, 84, 114, 138};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 54.17223344298664;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> boundaryX = {-339, -328, -312, -306, -302, -331, -382, -398, -414, -416, -387};
    vector<int> boundaryY = {370, 376, 392, 403, 438, 480, 486, 478, 462, 395, 370};
    vector<int> cityX = {-335};
    vector<int> cityY = {433};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 89.47066558375353;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> boundaryX = {-2, -5, -7, -8, -9, -8, -7, -5, -2, 1, 4, 9, 14, 17, 20, 23, 25, 26, 26, 25, 23, 20, 17, 14, 4, 1};
    vector<int> boundaryY = {-15, -18, -21, -24, -29, -34, -37, -40, -43, -45, -46, -47, -46, -45, -43, -40, -37, -34, -24, -21, -18, -15, -13, -12, -12, -13};
    vector<int> cityX = {9};
    vector<int> cityY = {-26};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 20.999999999999893;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> boundaryX = {-128, -122, -111, -98, -87, -82, -66, -52, -46, -4, 23, 47, 53, 55, 64, 69, 69, 58, 53, 23, 18, 5, -4, -60, -82, -90, -111, -119, -122, -126, -131, -133, -133, -131};
    vector<int> boundaryY = {509, 496, 480, 467, 459, 456, 449, 445, 444, 447, 459, 480, 488, 491, 509, 526, 566, 596, 604, 633, 636, 642, 645, 645, 636, 631, 612, 601, 596, 588, 574, 566, 526, 518};
    vector<int> cityX = {-41, -72, -94, -15, 21};
    vector<int> cityY = {484, 587, 528, 469, 527};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 105.70874611807061;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> boundaryX = {62, 30, 18, -66};
    vector<int> boundaryY = {-152, 110, 113, -161};
    vector<int> cityX = {13, 14};
    vector<int> cityY = {-80, -77};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 190.04210059878716;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> boundaryX = {-109, -55, -41, -33, -22, -104, -109, -131, -146, -145, -142, -140, -139, -136, -131, -123};
    vector<int> boundaryY = {335, 335, 344, 352, 371, 453, 451, 434, 393, 382, 371, 366, 364, 359, 352, 344};
    vector<int> cityX = {-68, -79};
    vector<int> cityY = {343, 422};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 80.28692023008182;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> boundaryX = {59, 63, 66, 67, 67, 66, 63, 59, 56, 46, 43, 39, 36, 35, 34, 35, 36, 39, 43, 46, 51, 56};
    vector<int> boundaryY = {-114, -111, -107, -104, -94, -91, -87, -84, -83, -83, -84, -87, -91, -94, -99, -104, -107, -111, -114, -115, -116, -115};
    vector<int> cityX = {50, 66, 59, 48, 51};
    vector<int> cityY = {-86, -105, -112, -98, -89};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 17.166966996959722;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> boundaryX = {175, 170, 156, 154, 148, 142, 108, 84, 81, 74, 21, 14, -34, -67, -82, -88, -98, -95, -39, -20, -7, 0, 37, 53, 84, 92, 113, 119, 173, 177, 179};
    vector<int> boundaryY = {142, 157, 184, 187, 195, 202, 229, 240, 241, 243, 247, 246, 229, 203, 184, 174, 58, 50, -16, -26, -31, -33, -38, -37, -30, -27, -16, -12, 61, 76, 121};
    vector<int> cityX = {-44, 22, 75, -30};
    vector<int> cityY = {152, 160, -32, 34};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 167.2782851626077;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> boundaryX = {105, 118, 121, 125, 134, 131, 121, 105, 101, 95, 79, 72, 66, 29, 26, 21, 13, -13, -17, -21, -23, -24, -28, -24, -23, -21, -17, -10, 3, 7, 13, 26, 42, 54, 72, 79, 87, 95};
    vector<int> boundaryY = {352, 365, 369, 375, 434, 444, 463, 480, 483, 487, 494, 496, 497, 494, 493, 491, 487, 463, 457, 449, 444, 441, 416, 391, 388, 383, 375, 365, 352, 349, 345, 339, 335, 334, 336, 338, 341, 345};
    vector<int> cityX = {17, 104, 58};
    vector<int> cityY = {456, 431, 487};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 118.77548455268239;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> boundaryX = {27, 92, 246, 445, 556, 554, 405, 372, 357};
    vector<int> boundaryY = {-11, -84, -151, -111, 1, 315, 443, 454, 458};
    vector<int> cityX = {108, 219, 295};
    vector<int> cityY = {-66, 229, 323};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 406.88204678997334;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> boundaryX = {66, 310, 342, 286};
    vector<int> boundaryY = {-485, -401, -307, -146};
    vector<int> cityX = {244, 252};
    vector<int> cityY = {-388, -203};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 202.71408436514284;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> boundaryX = {-24, -19, -17, -10, -6, -3, 6, 10, 19, 37, 41, 59, 61, 57, 52, 41, 37, 28, 10, 6, -3, -6, -14, -17, -19, -21, -23, -24};
    vector<int> boundaryY = {-625, -638, -641, -649, -652, -654, -658, -659, -660, -656, -654, -634, -629, -594, -587, -578, -576, -573, -573, -574, -578, -580, -587, -591, -594, -598, -603, -607};
    vector<int> cityX = {44};
    vector<int> cityY = {-622};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 69.64194138592053;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> boundaryX = {-267, -264, -245, -242, -275, -276, -277};
    vector<int> boundaryY = {333, 332, 338, 344, 357, 354, 349};
    vector<int> cityX = {-254, -258, -273, -257};
    vector<int> cityY = {339, 347, 347, 336};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 15.135791330203714;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> boundaryX = {-71, -72, -71, -70, -67, -65, -61, -57, -55, -52, -51, -51, -52, -55, -57, -65, -67, -70};
    vector<int> boundaryY = {-45, -49, -53, -55, -58, -59, -60, -59, -58, -55, -53, -45, -43, -40, -39, -39, -40, -43};
    vector<int> cityX = {-62, -53, -63, -65};
    vector<int> cityY = {-46, -53, -42, -49};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 11.503637114853968;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> boundaryX = {-11, 199, 139, 60, -133, -158, -159};
    vector<int> boundaryY = {-245, -114, 78, 116, 35, -26, -31};
    vector<int> cityX = {79};
    vector<int> cityY = {19};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 278.9193431800635;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> boundaryX = {-76, -78, -79, -80, -81, -80, -79, -78, -76, -70, -67, -65, -62, -55, -48, -45, -43, -40, -34, -32, -31, -30, -30, -31, -32, -34, -40, -43, -45, -48, -62, -65, -67, -70};
    vector<int> boundaryY = {71, 68, 66, 63, 56, 49, 46, 44, 41, 35, 33, 32, 31, 30, 31, 32, 33, 35, 41, 44, 46, 49, 63, 66, 68, 71, 77, 79, 80, 81, 81, 80, 79, 77};
    vector<int> cityX = {-71, -72, -55};
    vector<int> cityY = {70, 70, 53};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 40.85591534064196;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> boundaryX = {-156, -160, -260, -278, -281, -282, -283, -281, -278, -274, -267, -260, -250, -242, -206, -192, -184, -167, -164, -156, -152, -153};
    vector<int> boundaryY = {97, 105, 122, 97, 88, 83, 72, 56, 47, 39, 29, 22, 15, 11, 7, 11, 15, 29, 33, 47, 61, 88};
    vector<int> cityX = {-235, -216, -275, -212, -200};
    vector<int> cityY = {34, 36, 47, 75, 21};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 78.6580533480894;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> boundaryX = {19, 20, 20, 18, 17};
    vector<int> boundaryY = {15, 16, 18, 18, 17};
    vector<int> cityX = {19, 19, 18};
    vector<int> cityY = {17, 16, 17};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730787;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> boundaryX = {150, 144, 142, 144, 158, 233, 322};
    vector<int> boundaryY = {-65, -76, -81, -158, -180, -215, -158};
    vector<int> cityX = {269, 228, 153};
    vector<int> cityY = {-136, -114, -121};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 91.26395314685564;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> boundaryX = {-193, -195, -199, -203, -184, -180, -158, -145, -137, -35, 120, 136, 186, 224, 235, 286, 283, 273, 258, 254, 212, 194, 186, 113, 102, 82, 63, 24, -5, -18, -32, -66, -110, -149};
    vector<int> boundaryY = {47, 40, 22, -22, -117, -126, -164, -181, -190, -256, -257, -251, -224, -191, -178, 27, 40, 70, 101, 108, 159, 174, 180, 215, 218, 222, 224, 224, 220, 217, 213, 199, 171, 132};
    vector<int> cityX = {1, 16, 146, 46, -15};
    vector<int> cityY = {-156, -37, 113, 178, -219};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 248.51032250221348;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> boundaryX = {166, 162, 67, -164, -232, -165, -79, 347, 362, 416, 177};
    vector<int> boundaryY = {-254, -253, -245, -358, -671, -793, -864, -781, -760, -541, -257};
    vector<int> cityX = {-89, 164, 241, 217, 373};
    vector<int> cityY = {-365, -579, -635, -794, -665};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 392.334017912339;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> boundaryX = {206, 212, 204, 180, 130, 81, 76, 72, 65, 21, 81, 136, 153, 162, 180, 198};
    vector<int> boundaryY = {59, 124, 145, 175, 197, 191, 189, 187, 183, 81, 9, 4, 9, 13, 25, 45};
    vector<int> cityX = {156, 79, 142, 156};
    vector<int> cityY = {153, 186, 118, 92};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 123.40159766256055;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> boundaryX = {-44, -50, -53, -54, -53, -50, -47, -44, -41, -41};
    vector<int> boundaryY = {-23, -23, -26, -29, -32, -35, -36, -35, -32, -26};
    vector<int> cityX = {-50, -44, -47, -45, -45};
    vector<int> cityY = {-26, -24, -28, -29, -35};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 7.083784299369891;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> boundaryX = {-87, -91, -94, -106, -109, -113, -120, -122, -123, -124, -123, -122, -120, -113, -109, -106, -100, -94, -91, -87, -80, -78, -77, -77, -78, -80};
    vector<int> boundaryY = {59, 61, 62, 62, 61, 59, 52, 48, 45, 39, 33, 30, 26, 19, 17, 16, 15, 16, 17, 19, 26, 30, 33, 45, 48, 52};
    vector<int> cityX = {-99, -101, -98, -111, -117};
    vector<int> cityY = {26, 39, 51, 51, 44};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 24.182032794187606;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> boundaryX = {-121, -123, -145, -149, -276, -334, -281, -237};
    vector<int> boundaryY = {354, 362, 407, 412, 459, 218, 194, 192};
    vector<int> cityX = {-157, -196, -227, -296};
    vector<int> cityY = {353, 411, 297, 204};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 105.41924421262759;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> boundaryX = {-60, -61, -61, -55, -48, -41, -36, -35, -35, -36, -43};
    vector<int> boundaryY = {-2, -4, -14, -21, -23, -21, -16, -14, -4, -2, 4};
    vector<int> cityX = {-50, -41, -39};
    vector<int> cityY = {-19, -16, -15};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 20.015421878087633;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> boundaryX = {310, 304, 302, 301, 302, 304, 307, 310, 312, 312};
    vector<int> boundaryY = {-103, -103, -105, -108, -111, -113, -114, -113, -111, -105};
    vector<int> cityX = {306, 306, 307, 304};
    vector<int> cityY = {-110, -107, -104, -111};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 6.184658438426158;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> boundaryX = {15, 11, 8, -1, -2, -1, 18, 27, 80, 104, 111, 121, 107, 95, 83, 23};
    vector<int> boundaryY = {134, 129, 125, 102, 91, 80, 45, 38, 31, 45, 53, 110, 134, 144, 150, 141};
    vector<int> cityX = {43, 17, 65, 65, 77};
    vector<int> cityY = {105, 92, 139, 89, 87};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 59.120652091383874;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> boundaryX = {60, 50, 36, 33, 28, 6, -20, -50, -55, -67, -74, -98, -106, -146, -182, -221, -230, -241, -273, -285, -295, -315, -325, -328, -327, -325, -315, -306, -303, -285, -257, -232, -223, -200, -169, -106, -98, -82, -78, -55, -8, 50, 56, 62, 72, 74, 75, 76, 69, 64};
    vector<int> boundaryY = {298, 318, 339, 343, 349, 371, 390, 405, 407, 411, 413, 418, 419, 419, 412, 396, 391, 384, 357, 343, 329, 291, 257, 237, 191, 178, 143, 124, 118, 91, 62, 44, 39, 28, 19, 15, 16, 19, 20, 27, 52, 116, 128, 141, 173, 183, 189, 237, 273, 288};
    vector<int> cityX = {-276, -87, 16, -78, -101};
    vector<int> cityY = {213, 46, 351, 75, 413};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 209.407928300428;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> boundaryX = {60, 50, 36, 33, 28, 6, -20, -50, -55, -67, -74, -98, -106, -146, -182, -221, -230, -241, -273, -285, -295, -315, -325, -328, -327, -325, -315, -306, -303, -285, -257, -232, -223, -200, -169, -106, -98, -82, -78, -55, -8, 50, 56, 62, 72, 74, 75, 76, 69, 64};
    vector<int> boundaryY = {298, 318, 339, 343, 349, 371, 390, 405, 407, 411, 413, 418, 419, 419, 412, 396, 391, 384, 357, 343, 329, 291, 257, 237, 191, 178, 143, 124, 118, 91, 62, 44, 39, 28, 19, 15, 16, 19, 20, 27, 52, 116, 128, 141, 173, 183, 189, 237, 273, 288};
    vector<int> cityX = {-53, -191, -301, -125, -49};
    vector<int> cityY = {261, 396, 223, 219, 42};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 200.55352740766693;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> boundaryX = {60, 50, 36, 33, 28, 6, -20, -50, -55, -67, -74, -98, -106, -146, -182, -221, -230, -241, -273, -285, -295, -315, -325, -328, -327, -325, -315, -306, -303, -285, -257, -232, -223, -200, -169, -106, -98, -82, -78, -55, -8, 50, 56, 62, 72, 74, 75, 76, 69, 64};
    vector<int> boundaryY = {298, 318, 339, 343, 349, 371, 390, 405, 407, 411, 413, 418, 419, 419, 412, 396, 391, 384, 357, 343, 329, 291, 257, 237, 191, 178, 143, 124, 118, 91, 62, 44, 39, 28, 19, 15, 16, 19, 20, 27, 52, 116, 128, 141, 173, 183, 189, 237, 273, 288};
    vector<int> cityX = {-127, -127, -7, -127, -127};
    vector<int> cityY = {239, 223, 345, 216, 200};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 203.01998628743883;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> boundaryX = {1000, 992, 969, 930, 876, 809, 729, 637, 536, 426, 309, 187, 63, -63, -187, -309, -426, -536, -637, -729, -809, -876, -930, -969, -992, -1000, -992, -969, -930, -876, -809, -729, -637, -536, -426, -309, -187, -63, 63, 187, 309, 426, 536, 637, 729, 809, 876, 930, 969, 992};
    vector<int> boundaryY = {0, 125, 249, 368, 482, 588, 685, 771, 844, 905, 951, 982, 998, 998, 982, 951, 905, 844, 771, 685, 588, 482, 368, 249, 125, 0, -125, -249, -368, -482, -588, -685, -771, -844, -905, -951, -982, -998, -998, -982, -951, -905, -844, -771, -685, -588, -482, -368, -249, -125};
    vector<int> cityX = {0, 1, -1, 0, 0};
    vector<int> cityY = {0, 0, 0, 1, -1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 999.6044217589274;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> boundaryX = {100, 99, 97, 93, 88, 81, 73, 64, 54, 43, 31, 19, 6, -6, -19, -31, -43, -54, -64, -73, -81, -88, -93, -97, -99, -100, -99, -97, -93, -88, -81, -73, -64, -54, -43, -31, -19, -6, 6, 19, 31, 43, 54, 64, 73, 81, 88, 93, 97, 99};
    vector<int> boundaryY = {0, 13, 25, 37, 48, 59, 68, 77, 84, 90, 95, 98, 100, 100, 98, 95, 90, 84, 77, 68, 59, 48, 37, 25, 13, 0, -13, -25, -37, -48, -59, -68, -77, -84, -90, -95, -98, -100, -100, -98, -95, -90, -84, -77, -68, -59, -48, -37, -25, -13};
    vector<int> cityX = {0, 1, -1, 0, 0};
    vector<int> cityY = {0, 0, 0, 1, -1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 99.71961057384944;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> boundaryX = {250, 248, 242, 232, 219, 202, 182, 159, 134, 106, 77, 47, 16, -16, -47, -77, -106, -134, -159, -182, -202, -219, -232, -242, -248, -250, -248, -242, -232, -219, -202, -182, -159, -134, -106, -77, -47, -16, 16, 47, 77, 106, 134, 159, 182, 202, 219, 232, 242, 248};
    vector<int> boundaryY = {0, 31, 62, 92, 120, 147, 171, 193, 211, 226, 238, 246, 250, 250, 246, 238, 226, 211, 193, 171, 147, 120, 92, 62, 31, 0, -31, -62, -92, -120, -147, -171, -193, -211, -226, -238, -246, -250, -250, -246, -238, -226, -211, -193, -171, -147, -120, -92, -62, -31};
    vector<int> cityX = {0, 1, -1, 0, 0};
    vector<int> cityY = {0, 0, 0, 1, -1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 249.5135266874322;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> boundaryX = {500, 496, 484, 465, 438, 405, 364, 319, 268, 213, 155, 94, 31, -31, -94, -155, -213, -268, -319, -364, -405, -438, -465, -484, -496, -500, -496, -484, -465, -438, -405, -364, -319, -268, -213, -155, -94, -31, 31, 94, 155, 213, 268, 319, 364, 405, 438, 465, 484, 496};
    vector<int> boundaryY = {0, 63, 124, 184, 241, 294, 342, 385, 422, 452, 476, 491, 499, 499, 491, 476, 452, 422, 385, 342, 294, 241, 184, 124, 63, 0, -63, -124, -184, -241, -294, -342, -385, -422, -452, -476, -491, -499, -499, -491, -476, -452, -422, -385, -342, -294, -241, -184, -124, -63};
    vector<int> cityX = {0, 1, -1, 0, 0};
    vector<int> cityY = {0, 0, 0, 1, -1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 499.65187881163814;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> boundaryX = {750, 744, 726, 697, 657, 607, 547, 478, 402, 319, 232, 141, 47, -47, -141, -232, -319, -402, -478, -547, -607, -657, -697, -726, -744, -750, -744, -726, -697, -657, -607, -547, -478, -402, -319, -232, -141, -47, 47, 141, 232, 319, 402, 478, 547, 607, 657, 697, 726, 744};
    vector<int> boundaryY = {0, 94, 187, 276, 361, 441, 513, 578, 633, 679, 713, 737, 749, 749, 737, 713, 679, 633, 578, 513, 441, 361, 276, 187, 94, 0, -94, -187, -276, -361, -441, -513, -578, -633, -679, -713, -737, -749, -749, -737, -713, -679, -633, -578, -513, -441, -361, -276, -187, -94};
    vector<int> cityX = {0, 1, -1, 0, 0};
    vector<int> cityY = {0, 0, 0, 1, -1};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 749.4778182174592;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> boundaryX = {0, 124, -6, -120, -300};
    vector<int> boundaryY = {0, 125, 140, 137, -100};
    vector<int> cityX = {0, 30, 20, 15, 16};
    vector<int> cityY = {50, 51, 52, 21, 28};
    BarbarianInvasion2* pObj = new BarbarianInvasion2();
    clock_t start = clock();
    double result = pObj->minimumTime(boundaryX, boundaryY, cityX, cityY);
    clock_t end = clock();
    delete pObj;
    double expected = 335.41019662496376;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22713193&rd=14437&pm=11174
********************************************************************************
#include <vector> 
#include <string> 
#include <cmath> 
#include <algorithm> 
 
using namespace std; 
 
class BarbarianInvasion2 
{ 
public: 
  double minimumTime(vector <int> boundaryX, vector <int> boundaryY, vector <int> cityX, vector <int> cityY) 
  { 
    double low = 0, high = 10000; 
    int n = cityX.size(); 
    while (high - low > max(1.0, low) * 1e-10) 
    { 
      double radius = (low + high) / 2.0; 
      double sum[32]; 
      for (int i = 0; i < (1 << n); ++i) 
        sum[i] = 0; 
      bool broken = false; 
      for (int i = 0; i < boundaryX.size(); ++i) 
      { 
        double x0 = boundaryX[i]; 
        double y0 = boundaryY[i]; 
        double dx = boundaryX[(i + 1) % boundaryX.size()] - x0; 
        double dy = boundaryY[(i + 1) % boundaryY.size()] - y0; 
        vector<double> segments; 
        segments.push_back(0); 
        segments.push_back(1); 
        for (int j = 0; j < n; ++j) 
        { 
          double alpha = dx * dx + dy * dy; 
          double beta = 2 * dx * (x0 - cityX[j]) + 2 * dy * (y0 - cityY[j]); 
          double gamma = (x0 - cityX[j]) * (x0 - cityX[j]) + (y0 - cityY[j]) * (y0 - cityY[j]) - radius * radius; 
          double delta = beta * beta - 4 * alpha * gamma; 
          if (delta >= 0) 
          { 
            double x1 = (-beta + sqrt(delta)) / (2 * alpha); 
            if (x1 > 0 && x1 < 1) 
              segments.push_back(x1); 
            double x2 = (-beta - sqrt(delta)) / (2 * alpha); 
            if (x2 > 0 && x2 < 1) 
              segments.push_back(x2); 
          } 
          double slope = ((cityX[j] - x0) * dx + (cityY[j] - y0) * dy) / (dx * dx + dy * dy); 
          if (slope > 0 && slope < 1) 
            segments.push_back(slope); 
        } 
        sort(segments.begin(), segments.end()); 
        for (int j = 0; j + 1 < segments.size(); ++j) 
        { 
          double t = (segments[j] + segments[j + 1]) / 2; 
          double mid_x = x0 + t * dx; 
          double mid_y = y0 + t * dy; 
          int inside = 0; 
          for (int k = 0; k < n; ++k) 
            if ((mid_x - cityX[k]) * (mid_x - cityX[k]) + (mid_y - cityY[k]) * (mid_y - cityY[k]) <= radius * radius) 
              inside |= (1 << k); 
          if (inside == 0) 
            broken = true; 
          sum[inside] += sqrt(dx * dx + dy * dy) * (segments[j + 1] - segments[j]); 
        } 
      } 
      if (broken) 
        low = radius; 
      else 
      { 
        int size = n + (1 << n) + 2; 
        double flow[50][50]; 
        double tot = 0; 
        for (int i = 0; i < (1 << n); ++i) 
          tot += sum[i]; 
        double avg = tot / n; 
        memset(flow, 0, sizeof(flow)); 
        for (int i = 0; i < n; ++i) 
          flow[0][i + 1] = avg; 
        for (int i = 0; i < (1 << n); ++i) 
          for (int j = 0; j < n; ++j) 
            if (i & (1 << j)) 
              flow[j + 1][i + n + 1] = avg; 
        for (int i = 0; i < (1 << n); ++i) 
          flow[i + n + 1][size - 1] = sum[i]; 
        int last[50]; 
        while (1) 
        { 
          memset(last, 255, sizeof(last)); 
          last[0] = 0; 
          while (last[size - 1] < 0) 
          { 
            bool ok = true; 
            for (int i = 0; i < size; ++i) 
              if (last[i] >= 0) 
                for (int j = 0; j < size; ++j) 
                  if (flow[i][j] > 1e-11 && last[j] < 0) 
                  { 
                    last[j] = i; 
                    ok = false; 
                  } 
            if (ok)  
              break; 
          } 
          if (last[size - 1] < 0) 
            break; 
          double add = tot; 
          for (int i = size - 1; i > 0; i = last[i]) 
            if (flow[last[i]][i] < add) 
              add = flow[last[i]][i]; 
          tot -= add; 
          for (int i = size - 1; i > 0; i = last[i]) 
          { 
            flow[last[i]][i] -= add; 
            flow[i][last[i]] += add; 
          } 
        } 
        if (tot > 1e-11) 
          low = radius; 
        else 
          high = radius; 
 
      } 
    } 
    return low; 
  } 
};

********************************************************************************
*******************************************************************************/