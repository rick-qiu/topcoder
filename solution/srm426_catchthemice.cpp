/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8066
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

class CatchTheMice {
public:
    double largestCage(vector<int> xp, vector<int> yp, vector<int> xv, vector<int> yv);
};

double CatchTheMice::largestCage(vector<int> xp, vector<int> yp, vector<int> xv, vector<int> yv) {
    double ret;
    return ret;
}


int test0() {
    vector<int> xp = {0, 10};
    vector<int> yp = {0, 10};
    vector<int> xv = {10, -10};
    vector<int> yv = {0, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> xp = {0, 10, 0};
    vector<int> yp = {0, 0, 10};
    vector<int> xv = {1, -6, 4};
    vector<int> yv = {4, 5, -4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> xp = {50, 10, 30, 15};
    vector<int> yp = {-10, 30, 20, 40};
    vector<int> xv = {-5, -10, -15, -5};
    vector<int> yv = {40, -10, -1, -50};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 40.526315789473685;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> xp = {0, 10, 10, 0};
    vector<int> yp = {0, 0, 10, 10};
    vector<int> xv = {1, 0, -1, 0};
    vector<int> yv = {0, 1, 0, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> xp = {13, 50, 100, 40, -100};
    vector<int> yp = {20, 20, -150, -40, 63};
    vector<int> xv = {4, 50, 41, -41, -79};
    vector<int> yv = {1, 1, 1, 3, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 212.78688524590163;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> xp = {0, 10};
    vector<int> yp = {0, 0};
    vector<int> xv = {5, 5};
    vector<int> yv = {3, 3};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> xp = {502, 168, 767, 402, 397, 798, 779, 882, 840, 712};
    vector<int> yp = {75, 694, 690, 419, 631, 444, 308, 573, 882, 178};
    vector<int> xv = {1, 68, -54, 19, 19, -60, -56, -75, -67, -44};
    vector<int> yv = {-76, 0, -3, 55, 12, 46, 75, 20, -43, -97};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 807.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> xp = {167, -42, 229, 234, 696, 650, 363, 219, 285, 448};
    vector<int> yp = {-853, -696, -471, -703, -583, -608, -999, -548, -119, -772};
    vector<int> xv = {34, 84, 23, 17, -97, -86, -17, 25, 4, -32};
    vector<int> yv = {14, -23, -79, -19, -52, -44, 51, -62, 83, -6};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 880.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> xp = {296, 657, 701, 147, 862, 927, 630, 212, 394, 581};
    vector<int> yp = {-616, -616, -76, -334, -314, -986, -631, -414, -95, -534};
    vector<int> xv = {-52, 19, 29, -84, 60, 69, 14, -72, -36, 3};
    vector<int> yv = {21, 16, -72, 73, 76, -59, 15, 57, -80, 33};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 899.8192771084338;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> xp = {-494, -511, -460, -534, -550, -458, -449, -425, -541, -407};
    vector<int> yp = {744, 728, 644, 690, 700, 726, 578, 573, 671, 627};
    vector<int> xv = {0, 2, -25, 30, 58, -26, -62, -67, 40, -82};
    vector<int> yv = {-97, -90, 17, -46, -62, -80, 57, 83, -14, 5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 28.307692307692307;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> xp = {-243, -262, -119, -200, -145, -252, -152, -211, -145, -215};
    vector<int> yp = {-593, -681, -574, -653, -569, -649, -595, -590, -608, -545};
    vector<int> xv = {-57, -78, 71, -29, 33, -73, 41, -41, 25, -25};
    vector<int> yv = {-22, -100, 12, -72, 25, -80, -17, -6, -14, 36};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 143.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> xp = {-49, -463, -212, -204, -557, -67, -374, -335, -590, -4};
    vector<int> yp = {352, 491, 280, 355, 129, 78, 404, 597, 553, 445};
    vector<int> xv = {-82, 57, -23, -32, 89, -72, 27, 17, 100, -94};
    vector<int> yv = {-9, -58, 9, -14, 56, 75, -32, -98, -81, -43};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 25.467532467532468;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> xp = {759, 971, 556, 79, 926, 327, 680, 544, 836, 728};
    vector<int> yp = {520, 357, 101, -419, 214, -156, -8, 105, 368, 138};
    vector<int> xv = {-8, -51, 35, -73, -37, 83, 8, 37, -20, 0};
    vector<int> yv = {-95, -60, -10, 94, -33, 43, 14, -14, -65, -17};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 896.9004739336493;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> xp = {-351, -410, -301, -296, -357, -434, -307, -300, -440, -435};
    vector<int> yp = {319, 416, 282, 326, 386, 395, 286, 398, 369, 457};
    vector<int> xv = {-13, 41, -76, -67, -35, 52, -66, -89, 67, 66};
    vector<int> yv = {54, -50, 79, 55, -15, -31, 70, -40, 10, -86};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 28.40740740740741;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> xp = {385, 25, 248, 263, 6, 491, 266, 495, 45, 239};
    vector<int> yp = {332, 361, -37, 388, 26, -151, 175, -26, 82, -162};
    vector<int> xv = {40, -88, -8, -4, -89, 71, -7, 69, -74, -18};
    vector<int> yv = {76, 85, -42, 90, -28, -81, 24, -48, -3, -91};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 550.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> xp = {96, 966, 972, 928, 784, 24, 769, 27, 902, 214};
    vector<int> yp = {-132, -422, -33, -3, -415, -208, -336, -107, -249, -144};
    vector<int> xv = {68, 37, 36, 27, -13, 53, -11, 51, 19, 100};
    vector<int> yv = {12, -63, 36, 45, -59, -5, -38, 15, -20, 12};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 880.8536585365854;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> xp = {-286, 854};
    vector<int> yp = {138, -428};
    vector<int> xv = {616, -122};
    vector<int> yv = {822, 670};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 664.0314606741573;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> xp = {8, 6};
    vector<int> yp = {7, -3};
    vector<int> xv = {8, 9};
    vector<int> yv = {0, 3};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> xp = {173, 489, -47, 668, -224, 339, 290, 145, -90, -245, 749, 395, 235, 466, -31, 695, 514, 561, 743, 424, 765, -100, 306, 621, 259, -270, 716, 356, 510, 828, -69, -39, 538, 606, 35, 897, -64, 317, 588, 51, -68, 191, 547, 521, -64, -19, 231, 912, 61, 520};
    vector<int> yp = {-397, -646, -252, -409, 2, -753, -50, -89, -482, -618, -222, -739, -828, -363, -482, -23, -905, -494, -906, 43, -869, -300, -209, -104, -192, -391, -620, -538, -75, -747, -978, -632, -382, -185, -233, -99, -645, -849, -799, -263, -922, -452, 53, 12, -803, -49, -54, -928, -526, -56};
    vector<int> xv = {-31, 26, -71, 61, -92, -1, -6, -35, -69, -96, 60, 3, -14, 25, -64, 61, 28, 36, 70, 19, 78, -67, -12, 44, -13, -99, 70, 1, 21, 81, -60, -62, 33, 38, -51, 88, -71, 2, 43, -50, -65, -17, 40, 26, -71, -63, -17, 92, -40, 23};
    vector<int> yv = {11, -28, 36, 9, 82, -45, -92, 61, -2, -27, 42, -40, -54, 22, -5, -94, -70, -8, -74, 82, -57, 25, 56, -97, 52, 23, -14, -5, 68, -35, -85, -21, 24, 45, 46, 68, -17, -53, -57, 43, -76, 6, 90, 78, -52, 80, 78, -64, -12, 67};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1182.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> xp = {-177, -891, -616, -346, -21, -120, -852, -675, -707, -123, -353, -916, -59, -901, -71, -988, -42, -344, -888, -97, -667, -73, -688, -87, -279, -122, -91, -624, -525, -754, -914, -130, -622, -107, -321, -199, -756, -838, -854, -877, -677, -210, -121, -256, -579, -802, -813, -92, -253, -228};
    vector<int> yp = {306, 186, 0, 167, -31, 128, 633, 175, 484, 21, -2, 138, 425, 42, 159, 439, 191, 340, 353, -114, 384, 539, 0, 201, 97, 5, 177, 637, 273, -55, 528, 135, 308, 71, 687, 400, 530, -25, 553, 212, -22, 103, 10, 24, 365, 642, 2, 441, -3, 371};
    vector<int> xv = {-67, 11, 88, -88, -6, -32, 37, 69, 55, -52, -100, 16, -29, 26, -29, -3, -15, -100, 12, -27, 73, -27, 71, -44, -88, -36, -32, 90, 96, 51, 7, -45, 95, -48, -100, -53, 41, 25, 30, 29, 71, -61, -33, -82, 83, 46, 29, -33, -70, -64};
    vector<int> yv = {4, -27, -71, -37, -88, -31, 89, -27, 47, -70, -82, -31, 30, -67, -35, 43, -19, 9, 15, -95, 15, 62, -67, -33, -45, -74, -15, 75, 8, -97, 59, -32, 15, -66, 98, 34, 52, -83, 70, -15, -84, -50, -59, -63, 23, 86, -71, 30, -80, 15};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 964.4591836734694;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> xp = {232, 749, -57, 28, 152, 821, 212, 860, 4, 236, 146, 514, 558, 741, 298, 389, 930, 74, 121, 479, 953, 213, 894, 714, 438, 819, 394, 826, 856, 227, 786, 253, 128, 768, 20, 834, 356, 735, 492, 782, 107, 402, 241, 363, 190, 910, 645, 323, 41, 684};
    vector<int> yp = {-795, -513, -468, -118, -269, -158, -82, -356, -346, -638, -805, -437, -562, -950, -606, -975, -466, -271, -333, -611, -411, -771, -383, -180, -289, -895, -496, -776, -809, -153, -306, -954, -774, -623, -81, -779, -709, -287, -261, -646, -992, -114, -602, -691, -669, -98, -20, -523, -108, -393};
    vector<int> xv = {48, -61, 99, 90, 50, -84, 54, -87, 95, 33, 59, -23, -20, -68, 34, 11, -88, 68, 74, -7, -92, 38, -99, -59, 5, -65, 4, -71, -75, 40, -66, 34, 68, -73, 90, -84, 11, -59, -7, -65, 69, 3, 35, 20, 41, -85, -46, 16, 89, -40};
    vector<int> yv = {-23, -95, -96, 30, 69, 35, 34, 73, 71, -65, -35, 87, -82, 5, -66, 8, 97, 63, 70, -73, 94, -45, 94, 48, 75, -13, 98, -46, -26, 37, 71, 3, -45, -57, 23, -28, -51, 59, 68, -67, -3, 31, -71, -46, -55, 30, 16, -96, 40, 93};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 975.4380952380952;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> xp = {202, 437, 340, 461, 875, -134, 491, 42, 539, 224, 949, 598, -158, 21, 83, 71, 46, 565, 730, 250, 81, 481, 781, 331, 424, 780, 576, 309, 857, 507, 497, 231, 289, 26, 941, 965, 839, 58, 294, 855, 200, 120, 815, 738, 700, 8, -43, 504, 426, 448};
    vector<int> yp = {-322, -932, -571, -168, -385, -312, -371, -356, -433, -854, -307, -480, -4, -197, -804, -812, -183, -340, -893, -520, -483, -194, -14, -952, -500, -917, -418, -782, -116, -889, -312, -645, -317, -551, -660, -345, -507, -752, -182, -482, -461, -663, -448, 62, -366, -243, -865, -57, -522, -60};
    vector<int> xv = {61, -56, -47, -59, 1, 96, 39, -24, -64, 61, -8, 24, 96, -16, -21, -18, 82, -67, 8, 56, -22, -58, -98, 51, -53, 6, -77, -43, 0, 37, -69, -37, -48, 82, -7, -10, 1, -23, -47, 4, 68, -29, -94, -87, -83, 88, 93, -64, -60, -56};
    vector<int> yv = {40, 6, 70, -76, -51, -56, 51, -51, -45, 94, 36, -44, -93, -71, -10, -7, 31, 40, 100, -34, 57, -72, 14, 1, -40, 99, 53, -15, -76, 98, 37, -25, -58, -34, -26, -60, 64, 80, -73, -38, -41, -22, -48, -98, 51, -71, 100, 12, -34, 20};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 958.2100840336135;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> xp = {-836, -720, -927, -280, -104, -117, 175, -796, -255, -568, -165, -15, -251, -264, -71, 233, -259, -253, -795, -549, 13, 105, -217, -18, -4, -803, -483, 159, -108, 106, -280, -197, -308, -840, -512, 250, -622, 144, 77, -733, -502, -423, 76, -222, 208, -640, 28, -145, -496, -677};
    vector<int> yp = {122, 956, 4, 586, -340, 378, -263, 126, -355, 247, -258, -314, 540, 511, 950, 706, -315, 849, -195, 30, 351, 19, 870, 162, 116, 115, 739, 908, 928, 380, 44, 734, 160, -127, -361, 682, -418, 26, 675, -250, 842, -186, 158, -205, -360, 225, -322, 519, -73, 196};
    vector<int> xv = {-37, -22, -49, 30, 52, 44, 85, -40, -94, -15, -86, 64, 36, 32, -70, 96, -93, -98, -38, -3, 61, 72, 34, 54, 60, -44, 0, 77, 43, 74, -98, 42, -99, -42, -8, 88, -15, 83, 72, -28, -1, 9, 73, -96, 91, -12, 68, 43, -5, -22};
    vector<int> yv = {-27, 76, -49, 22, -91, -2, -84, 96, -97, -15, -79, -89, 20, 15, 76, 47, -83, 64, -73, 85, -4, 84, 59, -22, -29, -32, 45, 63, 66, 1, 86, 49, -30, -68, -92, 40, -96, -40, 40, -73, 61, -75, -25, -76, -88, -16, -82, 18, -52, 99};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1374.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> xp = {-628, -180, -199, -306, -584, -92, -121, -434, -161, -257, -323, -727, -706, -600, -310, -263, -886, -96, -192, -796, -577, -337, -279, -284, -342, -813, -404, -334, -353, -295, -338, -284, -224, -313, -187, -235, -887, -650, -45, -293, -698, -30, -590, -417, -61, -684, -854, -329, -896, -987};
    vector<int> yp = {-986, -798, -994, -210, -237, -104, -676, -126, -188, -648, -311, -543, -269, -258, -732, -148, -179, -9, -125, -30, -767, -893, -620, -158, -971, -384, -204, -971, -421, -365, -620, -113, -125, -604, -76, -893, -756, -811, -577, -113, -853, -996, -955, -282, -436, -227, -983, -626, -489, -56};
    vector<int> xv = {19, 95, -65, 77, 32, -58, -49, 51, -70, 95, 81, 14, 19, 24, -81, -74, -15, -45, -71, 6, 34, 67, -79, 76, 71, -6, 60, 77, 77, -89, -89, 86, -75, -94, 98, 89, -12, 23, -50, -83, 11, -35, 37, 60, -48, 22, -9, -87, -14, -39};
    vector<int> yv = {-55, -28, -61, -94, -98, 86, -3, -73, 71, -5, 57, 21, -96, 65, -16, 78, 73, -61, -76, -67, -25, -42, 5, -92, -49, 36, 66, -56, 44, 41, 2, 92, -82, 10, 93, -38, -25, -36, 10, -83, -31, -57, -59, -99, 37, -99, -50, -4, 20, -71};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 985.2597402597403;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> xp = {-763, -415, -980, -899, -68, -798, -596, -289, -565, -128, 219, -20, 296, 268, 47, -225, -692, -256, 177, -947, -5, -485, -392, -518, -30, -437, -908, -117, -106, 231, -165, -167, -883, -208, 117, 55, -341, 25, -223, -95, 55, -678, -671, -781, 76, -91, -455, -821, -450, 303};
    vector<int> yp = {254, -75, -65, -465, -144, 330, -600, -111, -764, 386, -25, 301, 394, 160, -567, 330, -67, 148, -648, -157, 292, -546, -315, -228, -413, -261, -843, 236, -58, -663, -70, 227, -672, -776, -24, 93, -684, -974, -16, -160, 40, -828, -95, 444, -359, 250, -76, -60, -884, 271};
    vector<int> xv = {-43, 11, -66, -60, -78, -44, -11, 23, -11, -86, 88, -67, 95, 95, 60, 33, -26, 21, 78, -58, 51, 2, 15, -7, 54, 2, -60, -83, 50, 91, 43, -93, -52, 27, 71, 66, 12, 61, 28, -77, 63, -30, -26, -45, 73, 46, 5, -51, -2, 99};
    vector<int> yv = {80, -83, -81, -7, -93, 93, -26, 34, -47, 94, 42, 80, 96, 66, -23, 90, 39, 70, -36, 32, 89, -18, 4, 20, -3, 12, -53, 72, -86, -39, 41, 72, -39, -54, -82, 60, -40, -74, 50, -92, 55, -57, 37, 97, 7, 80, 42, 46, -58, 84};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1418.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> xp = {-376, -673, -251, -804, -370, -457, -35, -894, -637, -28, -261, -157, -264, -228, -340, -70, -678, -794, 5, -283, -522, -477, -435, 45, -244, -178, -606, -165, -687, -690, -923, -972, -856, -922, -680, -411, -596, -732, -963, -515, -797, -820, -639, -672, -687, -878, -568, -36, -303, -205};
    vector<int> yp = {-485, -200, -337, -239, -645, -139, -825, -698, -204, -462, -711, -215, -240, -804, -790, -255, -235, -551, -873, -514, -598, -993, -811, -516, -581, -393, -88, -183, -225, -408, -306, -160, -412, -396, -383, -701, -818, -241, -642, -51, -13, -645, -603, -619, -747, -9, -502, -567, -58, -282};
    vector<int> xv = {26, -32, 37, -73, 22, 5, 87, -92, -34, 88, 32, 71, 40, 45, 23, 77, -40, -64, 96, 28, -7, -4, 4, 100, 36, 51, -19, 66, -45, -47, -87, -93, -75, -93, -33, 6, -25, -44, -89, -16, -63, -79, -36, -37, -36, -75, -17, 91, 43, 43};
    vector<int> yv = {38, 97, 71, 86, 7, -96, -38, -13, 86, 34, -12, 85, 78, -31, -29, 89, 94, 13, -40, 24, 20, -70, -37, 39, 17, 63, -91, 96, 89, 54, 79, -94, 54, 56, 50, -5, -22, 84, -4, -84, -65, 4, 14, 16, -11, -79, 31, 15, -88, 78};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1017.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> xp = {595, 518, 561, 494, 481, 627, 662, 504, 623, 650, 551, 483, 560, 627, 591, 478, 506, 577, 613, 626, 542, 574, 544, 544, 599, 528, 517, 577, 537, 618, 562, 654, 581, 547, 477, 475, 666, 546, 584, 515, 629, 509, 567, 549, 608, 516, 661, 607, 606, 539};
    vector<int> yp = {346, 166, 187, 321, 340, 359, 218, 264, 256, 255, 167, 182, 255, 218, 161, 269, 329, 183, 265, 339, 231, 241, 191, 299, 360, 253, 350, 286, 239, 239, 162, 186, 239, 332, 173, 357, 267, 270, 246, 208, 257, 328, 199, 318, 291, 202, 225, 214, 322, 281};
    vector<int> xv = {-10, -10, 3, -3, -5, 3, -6, -8, 5, 4, -1, 6, 3, -1, -4, -10, 5, 0, -10, -7, -6, 5, 8, -7, 4, 8, -2, -2, -2, 8, 3, 8, -5, -7, 5, -5, 3, -4, -5, 8, 4, 8, -6, -2, 3, -6, 2, -10, 4, -5};
    vector<int> yv = {2, -1, 5, -4, -9, 8, 0, 4, -4, 1, 3, 6, -8, 5, -9, 7, 1, 6, -4, 8, 6, -5, 5, 10, 1, 2, 3, -2, 9, 6, -5, 7, -5, -3, -1, 1, 4, 5, 6, -9, -9, 3, 1, 0, 3, 5, 1, 4, -7, -2};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 199.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> xp = {-735, -702, -843, -671, -830, -722, -738, -776, -788, -642, -779, -673, -678, -684, -811, -812, -697, -663, -813, -759, -681, -660, -738, -807, -805, -788, -709, -637, -658, -728, -683, -665, -724, -686, -783, -715, -681, -739, -668, -695, -655, -675, -730, -834, -809, -814, -730, -739, -823, -656};
    vector<int> yp = {-4, 94, 102, 102, -73, -83, 7, -89, -32, 86, -85, -45, 42, -5, 67, 97, 83, 34, 10, -31, -21, -36, 107, 25, -8, -69, 26, -31, 98, -82, 46, -83, 11, -83, -52, 50, -47, 78, -47, -48, -54, -50, 49, 51, -77, -40, -18, 63, 15, -32};
    vector<int> xv = {7, 0, -8, 1, -9, 0, 7, 9, -5, -2, 2, -10, 10, 8, -8, -2, 0, -8, 2, 0, -7, 2, -8, 7, -2, 2, 9, 6, 8, 2, -9, -4, -3, 5, 7, 8, 0, -10, 1, -10, 2, -4, -6, 1, -5, 10, -3, 8, -4, -5};
    vector<int> yv = {9, -2, -8, -6, -6, 0, 6, -10, -10, -2, -2, -10, 7, 8, 7, -5, -6, 1, 6, -6, 5, -6, -2, 6, -8, -4, -3, -10, -5, -6, -1, -4, 3, -5, -1, 7, -10, -10, 4, 7, -9, 0, -8, 1, 1, 7, -8, 5, 4, 6};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 206.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> xp = {-706, -547, -665, -582, -673, -679, -523, -618, -694, -605, -546, -621, -622, -593, -566, -534, -609, -693, -687, -665, -610, -649, -603, -685, -616, -616, -564, -559, -617, -696, -509, -595, -697, -704, -548, -615, -680, -704, -700, -649, -546, -641, -525, -590, -659, -563, -645, -645, -639, -607};
    vector<int> yp = {-318, -398, -475, -356, -352, -488, -331, -401, -442, -360, -470, -464, -361, -363, -497, -461, -345, -448, -460, -350, -498, -470, -372, -388, -473, -328, -317, -317, -415, -337, -461, -326, -455, -441, -343, -478, -414, -332, -387, -341, -412, -366, -314, -312, -402, -429, -403, -401, -513, -490};
    vector<int> xv = {9, -2, -9, 1, 1, -10, 2, 1, 10, 8, 6, 9, -1, -8, 3, -3, -6, 3, 8, -1, 5, -8, -4, -4, 1, 4, 6, -5, 8, -2, -9, 0, -1, -6, -1, -7, -8, 3, 8, 10, -2, 8, -7, 1, 10, 1, 3, 2, 7, -10};
    vector<int> yv = {-3, -7, -4, -4, 0, 7, -8, 3, -5, 2, -5, -10, -2, -9, -7, -6, -2, -4, -7, 9, 7, 5, 0, 8, 2, 4, -10, -5, 1, -8, -7, -6, 4, -10, 2, -7, 2, 5, 6, -2, -9, -6, -3, -4, -6, 4, 8, 5, 5, 4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 191.1818181818182;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> xp = {-308, -295, -302, -194, -250, -261, -247, -307, -263, -341, -293, -398, -304, -278, -430, -343, -381, -222, -346, -329, -283, -332, -217, -327, -383, -322, -279, -282, -405, -429, -213, -303, -340, -370, -209, -255, -240, -315, -330, -369, -345, -336, -336, -230, -354, -381, -234, -179, -353, -397};
    vector<int> yp = {654, 637, 769, 660, 674, 761, 674, 579, 807, 704, 583, 749, 746, 700, 751, 779, 776, 687, 724, 608, 665, 743, 794, 624, 696, 698, 716, 745, 690, 706, 779, 652, 663, 740, 689, 729, 613, 638, 725, 572, 728, 630, 767, 684, 702, 603, 612, 608, 778, 677};
    vector<int> xv = {-10, -3, -4, 3, 10, 1, -5, 6, -3, -1, -1, -2, -9, -10, -10, -2, -6, 9, 1, -4, 6, -5, 1, -5, 2, 5, -7, -6, -2, -8, 8, 4, 2, -7, 7, 10, -1, -4, -1, 6, 6, 4, -8, -4, 9, -2, -5, 6, -9, -6};
    vector<int> yv = {-5, -5, -9, 2, 5, -3, 2, -8, 10, 10, -8, -5, -2, 6, 10, 5, 9, 1, -8, -3, -3, 10, 4, -8, -10, 10, -8, 4, -4, -6, 4, -9, 0, -7, -6, 9, -2, -6, 8, -9, -10, -4, -10, -5, 9, -7, 0, -6, -4, 8};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 251.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> xp = {-207, 32};
    vector<int> yp = {461, 512};
    vector<int> xv = {-6, 5};
    vector<int> yv = {2, -2};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 239.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> xp = {-814, -276};
    vector<int> yp = {534, 542};
    vector<int> xv = {1, 3};
    vector<int> yv = {1, -7};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 538.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> xp = {-38, 117};
    vector<int> yp = {-145, -341};
    vector<int> xv = {-9, 7};
    vector<int> yv = {-9, 2};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 179.2962962962963;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> xp = {59, 41};
    vector<int> yp = {-670, 838};
    vector<int> xv = {-7, -5};
    vector<int> yv = {2, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 592.4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> xp = {714, -512};
    vector<int> yp = {295, 37};
    vector<int> xv = {-3, 4};
    vector<int> yv = {1, -8};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 802.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> xp = {750, 473};
    vector<int> yp = {-191, -736};
    vector<int> xv = {-3, 9};
    vector<int> yv = {7, -9};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 545.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> xp = {520, -706};
    vector<int> yp = {-709, -150};
    vector<int> xv = {0, 9};
    vector<int> yv = {9, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 380.4736842105263;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> xp = {28, 90};
    vector<int> yp = {224, -493};
    vector<int> xv = {-4, 2};
    vector<int> yv = {-3, 7};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 307.625;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> xp = {998, 658};
    vector<int> yp = {234, 921};
    vector<int> xv = {1, 6};
    vector<int> yv = {-2, 4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 687.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> xp = {-472, -523};
    vector<int> yp = {534, 541};
    vector<int> xv = {5, 10};
    vector<int> yv = {4, 8};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 26.555555555555557;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> xp = {92, -948};
    vector<int> yp = {-775, 32};
    vector<int> xv = {-3, 2};
    vector<int> yv = {4, -4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 329.61538461538464;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> xp = {741, -798};
    vector<int> yp = {-53, -47};
    vector<int> xv = {5, -8};
    vector<int> yv = {-6, -10};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1539.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> xp = {-655, -45};
    vector<int> yp = {961, -355};
    vector<int> xv = {0, -1};
    vector<int> yv = {8, -8};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1316.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> xp = {224, 20};
    vector<int> yp = {-316, 61};
    vector<int> xv = {-3, -8};
    vector<int> yv = {-5, 3};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 377.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> xp = {-996, -672};
    vector<int> yp = {-85, -86};
    vector<int> xv = {-8, -1};
    vector<int> yv = {-10, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 324.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> xp = {-121, 146};
    vector<int> yp = {572, -248};
    vector<int> xv = {-10, -4};
    vector<int> yv = {7, -7};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 820.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> xp = {-772, -909};
    vector<int> yp = {111, 601};
    vector<int> xv = {-4, -5};
    vector<int> yv = {7, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 181.125;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> xp = {-615, 548};
    vector<int> yp = {52, -167};
    vector<int> xv = {-9, 4};
    vector<int> yv = {4, 2};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1163.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> xp = {-768, -377};
    vector<int> yp = {-630, 650};
    vector<int> xv = {7, 9};
    vector<int> yv = {8, -5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 509.53333333333336;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> xp = {499, 697};
    vector<int> yp = {-229, 751};
    vector<int> xv = {-1, -3};
    vector<int> yv = {10, -10};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 90.9090909090909;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> xp = {713, -917};
    vector<int> yp = {-187, -787};
    vector<int> xv = {-5, 8};
    vector<int> yv = {3, 9};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 104.21052631578948;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> xp = {300, 833};
    vector<int> yp = {612, -546};
    vector<int> xv = {-1, 0};
    vector<int> yv = {-6, 5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 585.0833333333334;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> xp = {508, -859};
    vector<int> yp = {667, 211};
    vector<int> xv = {2, -10};
    vector<int> yv = {0, -4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1367.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> xp = {342, -997};
    vector<int> yp = {265, -905};
    vector<int> xv = {4, -6};
    vector<int> yv = {0, -5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1339.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> xp = {-368, -838};
    vector<int> yp = {-402, -966};
    vector<int> xv = {-3, -8};
    vector<int> yv = {1, -5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 564.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> xp = {578, 859};
    vector<int> yp = {-275, -358};
    vector<int> xv = {4, -6};
    vector<int> yv = {-9, -6};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> xp = {-955, -757};
    vector<int> yp = {710, 509};
    vector<int> xv = {10, 5};
    vector<int> yv = {0, 5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> xp = {-126, -556};
    vector<int> yp = {302, -156};
    vector<int> xv = {4, -6};
    vector<int> yv = {-8, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 445.55555555555554;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> xp = {-349, 476};
    vector<int> yp = {861, 312};
    vector<int> xv = {-9, 6};
    vector<int> yv = {6, -4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 825.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> xp = {906, -519};
    vector<int> yp = {-966, -53};
    vector<int> xv = {9, -7};
    vector<int> yv = {-4, -5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1425.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> xp = {-539, -576};
    vector<int> yp = {487, 567};
    vector<int> xv = {5, 9};
    vector<int> yv = {8, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> xp = {12, 43};
    vector<int> yp = {-60, -389};
    vector<int> xv = {-7, -6};
    vector<int> yv = {2, -9};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 329.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> xp = {140, 320};
    vector<int> yp = {198, 560};
    vector<int> xv = {-4, 5};
    vector<int> yv = {8, 4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 306.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> xp = {-377, -675};
    vector<int> yp = {-209, -198};
    vector<int> xv = {-3, 0};
    vector<int> yv = {-7, 3};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 231.76923076923077;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> xp = {-421, -161};
    vector<int> yp = {-389, 869};
    vector<int> xv = {3, -7};
    vector<int> yv = {-9, 8};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1258.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> xp = {353, 266};
    vector<int> yp = {451, 748};
    vector<int> xv = {-4, 7};
    vector<int> yv = {3, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 214.71428571428572;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> xp = {129, 32};
    vector<int> yp = {4, 805};
    vector<int> xv = {-3, -6};
    vector<int> yv = {1, -5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 331.6666666666667;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> xp = {872, 463};
    vector<int> yp = {-201, -347};
    vector<int> xv = {-10, 7};
    vector<int> yv = {-1, 5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2173913043478262;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> xp = {79, 883};
    vector<int> yp = {613, -221};
    vector<int> xv = {3, -1};
    vector<int> yv = {8, -9};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 834.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> xp = {-922, -941};
    vector<int> yp = {-648, -600};
    vector<int> xv = {5, 3};
    vector<int> yv = {3, 8};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 48.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> xp = {117, -74};
    vector<int> yp = {-155, -914};
    vector<int> xv = {-5, -9};
    vector<int> yv = {-6, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 443.44444444444446;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> xp = {782, 760};
    vector<int> yp = {557, 597};
    vector<int> xv = {-6, -9};
    vector<int> yv = {-9, -4};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> xp = {112, 168};
    vector<int> yp = {630, 678};
    vector<int> xv = {-2, 5};
    vector<int> yv = {3, 9};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 56.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> xp = {427, 662};
    vector<int> yp = {590, 698};
    vector<int> xv = {10, -3};
    vector<int> yv = {1, -5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3157894736842105;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> xp = {773, 344};
    vector<int> yp = {277, 152};
    vector<int> xv = {2, -7};
    vector<int> yv = {5, 9};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 429.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> xp = {766, -603};
    vector<int> yp = {231, 522};
    vector<int> xv = {7, -10};
    vector<int> yv = {-5, 5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1369.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> xp = {378, 421};
    vector<int> yp = {-264, -597};
    vector<int> xv = {-2, 0};
    vector<int> yv = {3, 7};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 139.66666666666666;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> xp = {-817, -898};
    vector<int> yp = {-208, -468};
    vector<int> xv = {-8, 5};
    vector<int> yv = {-10, -5};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 165.27777777777777;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> xp = {-28, 172};
    vector<int> yp = {-231, -561};
    vector<int> xv = {-3, -8};
    vector<int> yv = {-6, 6};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 44.11764705882353;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> xp = {-737, -461, -41, 971, 551, 804, -534, -186, 214, 657, -633, 341, -352, -171, -859, -15, 995, 381, -365, -392, -878, 23, -761, -981, 1, 99, -584, 777, -653, 901, -573, 70, 889, 608, -768, 59, -816, 305, 281, 494, -369, -64, 158, 653, 424, -68, 489, 423, 237, -335};
    vector<int> yp = {-218, -666, 338, -178, 220, -700, 230, -966, -484, 164, -821, -392, 929, -123, 88, 233, 717, 847, 93, -32, -732, -952, -161, -219, -319, -212, 774, 653, -814, 280, -103, 305, -157, 547, 0, -40, 571, 37, 849, 948, 742, 822, 86, -70, 296, -768, 705, 815, -806, 309};
    vector<int> xv = {-890, -546, -344, 757, 150, 894, -425, -534, 952, 224, -427, 717, -655, -800, -414, -473, 698, 532, -228, -194, -324, 278, -782, -523, 705, 630, -258, 566, -171, 456, -730, 677, 179, 718, -844, 116, -118, 139, 870, 647, -841, -874, 828, 339, 516, -548, 257, 537, 476, -249};
    vector<int> yv = {-588, -113, 385, -51, 256, -742, 212, -835, -480, 862, -214, -432, 472, -743, 163, 935, 476, 232, 105, -139, -491, -582, -954, -59, -495, -131, 963, 178, -260, 674, -561, 828, -887, 365, -971, -512, 668, 771, 505, 72, 790, 90, 587, -917, 103, -580, 414, 969, -989, 360};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1976.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> xp = {-670, -552, 994, -115, 243, -464, -473, 420, 791, 522, -902, 523, 8, 519, -12, -876, -434, -419, 285, 500, 661, -166, 472, 686, 8, 285, -235, -126, -937, -756, -591, 116, 601, -132, 483, 714, 253, -117, 590, -964, -310, 991, 479, 761, 192, -945, -537, 26, -697, 663};
    vector<int> yp = {-715, 827, 367, 463, -102, -418, 535, 613, 494, 371, 265, -489, 842, 752, 365, 867, 13, -828, -974, -639, -474, -40, 855, 324, -224, -104, 773, -149, 573, -208, 28, 227, -572, 462, 629, 832, -542, -416, -962, -955, 714, -696, -899, -853, -633, -221, 704, -664, 590, -971};
    vector<int> xv = {-731, -266, 265, -882, 135, -16, -725, 426, 735, 954, -68, 551, 691, 115, -65, -201, -322, -415, 364, 361, 262, -889, 347, 59, 141, 281, -160, -451, -131, -866, -711, 926, 892, -843, 180, 284, 890, -187, 988, -276, -507, 712, 840, 819, 560, -998, -146, 656, -507, 448};
    vector<int> yv = {-763, 459, 781, 728, -956, -835, 206, 72, 48, 111, 51, -431, 690, 891, 530, 608, 372, -980, -112, -236, -91, -346, 902, 480, -515, -864, 306, -187, 788, -581, 711, 670, -199, 553, 328, 220, -788, -293, -242, -490, 645, -676, -724, -478, -336, -890, 344, -986, 547, -71};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1958.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> xp = {-928, -648, 442, 142, -255, -33, 966, -425, -808, -781, -935, -756, 849, 160, -908, -450, -141, -777, -380, -980, -264, -720, 819, -105, 288, 884, 803, 526, 292, -331, -106, 25, -663, -321, -363, -469, -498, 103, 205, -843, -79, 442, 810, 84, -782, -175, 929, 73, 513, 730};
    vector<int> yp = {-173, 117, 850, 590, 185, 900, -832, 954, 768, 0, -860, 59, -977, 887, 675, 119, 848, 682, -365, -790, -318, 707, -201, 403, 667, -413, 168, -722, -362, -262, 0, 865, -781, -235, 589, -592, 868, -29, 880, -235, -495, -189, 547, 227, -103, -136, -410, 889, 342, 349};
    vector<int> xv = {-958, -753, 446, 897, -763, -811, 826, -233, -443, -358, -543, -78, 594, 495, -502, -780, -684, -422, -816, -760, -256, -255, 674, -733, 225, 997, 812, 76, 289, -717, -572, 10, -513, -94, -352, -359, -46, 67, 282, -253, -755, 699, 677, 142, -216, -548, 989, 263, 780, 884};
    vector<int> yv = {-98, 596, 719, 591, 303, 525, -966, 196, 514, 735, -669, 368, -932, 729, 392, 426, 830, 608, -772, -10, -813, 695, -984, 110, 295, -689, 849, -548, -799, -389, -761, 890, -446, -704, 771, -143, 712, -546, 283, -171, -634, -455, 722, 174, -63, -496, -464, 677, 536, 749};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1946.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> xp = {91, 842, -784, -983, -626, 629, 105, -99, -180, 115, 960, 110, -66, -285, -98, -398, -669, 915, 604, -277, -594, 799, 268, -614, 380, 211, -488, -424, 486, 378, 162, -237, -305, -681, 336, -717, -584, 356, 709, -967, -478, -768, -354, -498, 795, 495, 323, 422, 868, 959};
    vector<int> yp = {377, 331, 601, -751, 421, 255, 179, 884, 942, 474, 454, 73, 306, 947, -936, -474, -365, -26, 944, -785, -740, 389, 286, 335, -334, 347, -542, -707, -443, -161, -272, 208, -680, 88, -250, -473, -507, 956, -506, 345, 382, -356, 413, 949, -529, -330, -642, 794, 908, -166};
    vector<int> xv = {-667, -365, 325, 845, 791, -591, -385, 796, 4, -724, -624, -76, 434, 703, 1, 364, 372, -33, -337, 315, 462, -338, -717, 251, -946, -905, 758, 533, -178, -344, -965, 196, 688, 561, -232, 738, 102, -766, -443, 160, 887, 888, 25, 848, -158, -764, -948, -283, -292, -198};
    vector<int> yv = {-541, -694, -388, 78, -174, -868, -407, -500, -844, -232, -30, -551, -2, -633, 933, 270, 51, 621, -589, 857, 175, -135, -616, -301, 750, -679, 902, 865, 873, 863, 62, -102, 793, -735, 386, 159, 981, -766, 680, -777, -482, 232, -171, -297, 969, 987, 981, -151, -876, 744};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1688.313777777778;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> xp = {-475, 443, 763, 626, 536, -944, 127, -959, -440, 111, -885, -832, 570, -178, 130, 679, 598, 90, 749, 529, -461, -634, -653, -193, -432, -612, 309, 174, -342, -866, -811, -681, -832, -129, 222, 254, 761, -775, -851, 969, -556, -372, 417, -854, 89, 8, 804, -260, -564, -941};
    vector<int> yp = {-196, -464, 122, 907, -45, -168, -562, -931, -783, 270, 316, 810, -1, 545, 267, 909, 963, -905, -633, 51, 679, 774, -351, 542, 126, -393, -859, 480, 12, -144, 24, 957, 184, -747, 861, -660, -304, -628, -110, 341, 917, -277, -40, 772, 205, -78, 816, -710, 189, -873};
    vector<int> xv = {-359, 168, 331, 967, 441, -134, 795, -166, -123, 893, -736, -188, 958, -368, 358, 22, 214, 305, 383, 991, -321, -614, -914, -452, -84, -899, 135, 424, -302, -466, -511, -876, -430, -867, 40, 925, 78, -199, -332, 433, -530, -335, 305, -955, 607, 714, 928, -186, -523, -948};
    vector<int> yv = {-489, -94, 902, 916, -747, -607, -801, -349, -720, 736, 84, 705, -292, 849, 879, 297, 32, -470, -164, 982, 504, 257, -641, 769, 46, -254, -44, 611, 752, -327, 527, 816, 127, -6, 613, -510, -748, -620, -457, 888, 630, -128, -312, 996, 317, -426, 567, -680, 387, -370};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1928.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> xp = {983, -260, -814, -265, -538, 217, 495, -432, -442, 293, 464, 302, 37, 282, 784, -982, 317, -325, -980, -986, 181, -35, 921, 806, -463, 960, 211, -326, -29, 449, -252, 6, -508, -268, 460, 121, -466, -819, 466, -777, 242, 776, -48, 820, 559, -678, 267, 900, -349, 307};
    vector<int> yp = {-941, -961, 67, 64, -387, -216, -810, -610, -792, -650, 196, -832, -964, -685, 115, 468, -147, -791, -922, -160, 487, 969, 874, -727, -992, 18, 55, 863, -633, 38, -641, -749, 57, -372, 531, -723, -284, -80, -53, -208, -812, 764, 715, -420, -213, -209, 714, -486, 310, 932};
    vector<int> xv = {-543, 846, 772, 685, 757, -919, -230, 147, 453, -745, -761, -754, -748, -879, -25, 249, -574, 133, 64, 661, -634, 282, -337, -424, 535, -387, -957, 352, 127, -173, 125, -957, 606, 842, -363, -275, 96, 752, -830, 253, -185, -83, 133, -708, -931, 703, -762, -861, 348, -416};
    vector<int> yv = {944, 405, -840, -409, 295, 344, 450, 587, 420, 218, -827, 321, 217, 368, -979, -977, 27, 438, 672, 172, -600, -474, -711, 63, 937, -181, -392, -289, 62, -186, 208, 225, -39, 70, -491, 956, 680, 113, 93, 171, 630, -832, -756, 814, 72, 500, -690, 282, -496, -733};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1678.0509304603331;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> xp = {-9, -606, 881, -355, 731, 414, -713, 881, -879, -356, 540, -800, -362, -772, -73, -727, -785, 317, 121, -524, 197, -128, 505, 651, 245, 16, -987, -438, -212, -410, -834, 99, 969, -127, 508, -99, 732, 650, 185, 487, -627, -116, 483, 763, -781, 536, -950, -170, -937, 596};
    vector<int> yp = {122, -288, -918, 890, 746, -356, -863, -125, 266, 232, 221, 17, -601, -415, -974, -576, 190, 654, -985, 464, 136, 76, -261, -237, -287, -516, 556, -874, 651, -635, 741, -302, 609, -560, -615, -793, 657, -163, -877, -264, -751, 512, 779, 356, -133, -415, 495, 754, 819, 234};
    vector<int> xv = {-770, -555, 355, -16, 362, 585, -856, 427, -763, -602, 615, -88, -645, -591, -219, -945, -65, 89, 148, -261, 770, -874, 238, 380, 297, 20, -721, -519, -120, -728, -112, 355, 137, -41, 862, -94, 872, 808, 777, 297, -549, -896, 684, 820, -726, 699, -218, -18, -181, 81};
    vector<int> yv = {532, -118, -833, 213, 822, -395, -582, -103, 973, 62, 386, 304, -748, -763, -435, -994, 558, 628, -301, 311, 112, 102, -64, -790, -361, -832, 914, -219, 892, -498, 714, -458, 183, -714, -120, -944, 14, -910, -884, -876, -358, 170, 53, 324, -262, -926, 601, 430, 625, 75};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1956.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> xp = {986, 18, -773, -812, -65, 595, 489, 340, -35, -296, -30, -268, 193, 665, -654, 669, -167, 326, 327, -368, -763, 618, 343, -212, -225, -455, -139, 134, 32, -229, -290, 502, -628, -432, -291, 580, 533, 549, -519, 802, -746, -544, 554, 809, 559, -901, 910, -379, 94, 551};
    vector<int> yp = {-732, -768, 836, 362, -690, 61, 104, -243, -34, 786, 166, -305, -249, 183, -57, 933, 50, -807, 564, 223, -440, -865, -403, 910, -363, -664, 215, -828, 359, -773, -654, -876, 649, 355, -14, 868, -277, -609, -655, -686, -751, 865, -305, -37, 464, -472, 974, 185, 213, -445};
    vector<int> xv = {-554, -440, 895, 38, 959, -177, -448, -436, 495, 919, 694, 246, -942, -817, 408, -301, 812, -508, -620, 390, 608, -438, -646, 453, 47, 725, 854, -62, -295, 594, 359, -443, 210, 493, 213, -891, -601, -811, 613, -388, 749, 655, -465, -763, -8, 795, -828, 713, -179, -111};
    vector<int> yv = {36, 315, -797, -196, 633, -370, -882, 867, 252, -272, -790, 369, 132, -539, 2, -795, -802, 856, -46, -290, 920, 951, 217, -859, 517, 939, -460, 336, -168, 305, 899, 675, -382, -61, 798, -695, 511, 365, 990, 492, 738, -165, 463, 811, -598, 986, -544, -335, -432, 107};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1444.7272727272727;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> xp = {-129, 254, -180, 130, -71, -210, 257, 760, 477, -713, -453, 382, 897, -771, -110, 32, -771, 789, 890, -114, 249, -124, 667, 712, -202, -922, 875, -78, 636, -154, -949, 654, -308, 861, -932, -150, -337, 676, -795, -41, -988, 312, 405, -539, 770, 26, -404, 667, 542, -309};
    vector<int> yp = {382, -674, -24, 86, 862, 723, -808, -464, 301, -86, 997, 746, -568, -566, 285, 14, 309, -484, 111, -414, 189, 225, -10, 918, -736, -770, 822, -410, -155, -28, 628, 942, -509, -680, -969, -197, 249, -210, -403, 97, -601, -527, 121, 902, 40, 89, 836, 957, -595, -156};
    vector<int> xv = {-488, 437, -692, 164, -192, -769, 70, 87, 399, -634, -479, 780, 486, -989, -139, 488, -539, 363, 413, -74, 932, -446, 406, 678, -718, -876, 857, -141, 426, -925, -817, 844, -349, 272, -80, -519, -261, 833, -549, -796, -344, 181, 184, -338, 189, 554, -646, 65, 974, -426};
    vector<int> yv = {846, -704, -540, 353, 711, 489, -685, -953, 830, -526, 680, 581, -856, -62, 583, 596, 369, -712, 894, -594, 897, 1000, -902, 644, -704, -187, 434, -107, -498, -588, 90, 188, -831, -893, -589, -544, 642, -578, -145, 224, -385, -571, 861, 252, 547, 17, 855, 169, -281, -491};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1966.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> xp = {-718, -736, -441, -402, -886, -480, -627, -727, -149, 723, -73, 418, -611, -838, 509, -909, 391, -542, 920, -462, -332, 504, 267, 458, -282, 300, 373, 242, 40, 175, -88, -816, -76, -115, -188, 328, -777, 532, 432, -574, -35, 703, 531, -293, -412, 107, -53, -866, -746, 824};
    vector<int> yp = {-20, -624, 909, 182, 81, 803, -594, 75, 689, -288, 823, 131, 27, 376, -564, 702, 193, -140, 404, 817, -364, 28, 20, 296, 698, 262, -680, 76, -95, 268, 987, -510, 898, -175, -418, -759, -116, 582, -653, -811, -378, 437, -468, -682, 520, 530, -618, 178, -749, 966};
    vector<int> xv = {968, 914, 20, 381, 95, 150, 339, 865, 441, -382, 322, -982, 592, 42, -32, 711, -968, 267, -668, 404, 225, -651, -501, -303, 648, -562, -541, -912, -570, -997, 100, 574, 568, 602, 131, -358, 160, -164, -272, 562, 101, -130, -381, 68, 453, -990, 543, 123, 121, -245};
    vector<int> yv = {72, 146, -407, -850, -504, -508, 715, -889, -122, 190, -481, -457, -657, -717, 519, -723, -409, 713, -57, -448, 284, -557, -242, -329, -277, -91, 14, -473, 793, -171, -907, 830, -663, 628, 551, 989, 632, -495, 704, 867, 588, -430, 635, 236, -824, -456, 71, -256, 647, -116};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1537.3067552602436;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> xp = {589, 604, 649, 655, 604, 622, 603, 680, 641, 619, 596, 628, 640, 667, 585, 693, 655, 686, 684, 687, 622, 612, 611, 690, 657, 639, 632, 673, 583, 608, 599, 588, 605, 635, 638, 679, 614, 610, 679, 613, 676, 602, 610, 676, 625, 647, 657, 633, 637, 618};
    vector<int> yp = {536, 539, 521, 554, 501, 558, 535, 551, 588, 542, 529, 593, 547, 574, 514, 518, 591, 525, 505, 525, 577, 524, 551, 520, 500, 523, 508, 553, 555, 588, 576, 535, 508, 499, 536, 506, 586, 504, 597, 498, 580, 542, 493, 532, 507, 549, 519, 523, 594, 575};
    vector<int> xv = {5, 4, -2, -1, 2, -5, -1, 3, -4, -1, 2, -3, -3, 1, 5, -4, 1, -2, -2, -3, 3, 4, -2, -5, -3, 1, 5, 1, 3, -3, -3, 1, 1, -3, 5, -4, -4, -3, 2, 5, -1, -3, -4, -3, -5, 3, -2, 0, 1, 0};
    vector<int> yv = {3, 5, -2, 0, 1, 2, -4, 5, -2, 2, -4, -5, 2, -1, -3, -2, 3, -1, -3, 0, 4, -3, -2, 0, 1, 5, -3, 5, 2, 3, 0, 0, -5, -1, 1, 2, 0, 2, 0, 4, 3, 5, 3, -3, 1, -3, 4, -1, -4, -3};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 99.5;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> xp = {-416, -462};
    vector<int> yp = {380, 297};
    vector<int> xv = {-59, 292};
    vector<int> yv = {-892, -259};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01524390243902439;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> xp = {404, 881};
    vector<int> yp = {642, 76};
    vector<int> xv = {-404, -999};
    vector<int> yv = {-35, 671};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006149116064565719;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> xp = {150, 198};
    vector<int> yp = {-797, -453};
    vector<int> xv = {-132, -322};
    vector<int> yv = {590, -772};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010309278350515464;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> xp = {762, -177};
    vector<int> yp = {69, 360};
    vector<int> xv = {-681, 16};
    vector<int> yv = {117, -99};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0032858707557502738;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> xp = {-820, 442};
    vector<int> yp = {795, -687};
    vector<int> xv = {-816, -842};
    vector<int> yv = {-753, -722};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 10.350877192982455;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> xp = {-567, 570};
    vector<int> yp = {-155, 779};
    vector<int> xv = {-579, -589};
    vector<int> yv = {305, 300};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 243.66666666666666;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> xp = {719, -819};
    vector<int> yp = {773, 1000};
    vector<int> xv = {115, 115};
    vector<int> yv = {758, 749};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1538.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> xp = {-963, 877};
    vector<int> yp = {-402, 464};
    vector<int> xv = {-367, -371};
    vector<int> yv = {-630, -632};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> xp = {513, -986};
    vector<int> yp = {-285, -664};
    vector<int> xv = {662, 927};
    vector<int> yv = {832, 899};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006024096385542169;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> xp = {-897, -847};
    vector<int> yp = {-743, 510};
    vector<int> xv = {-792, -821};
    vector<int> yv = {-99, -825};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04900662251655629;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> xp = {-880, -414};
    vector<int> yp = {783, 880};
    vector<int> xv = {-736, -765};
    vector<int> yv = {-398, -404};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4857142857142857;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> xp = {205, -596};
    vector<int> yp = {-941, 517};
    vector<int> xv = {-833, -828};
    vector<int> yv = {361, 352};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 5.785714285714286;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> xp = {246, -44, 496, -631, 360, -337, 710, -763, 406, -502};
    vector<int> yp = {-224, -126, -626, -148, -962, -446, -894, -696, 329, -57};
    vector<int> xv = {-240, -695, -100, 131, 656, 746, -97, 283, 559, 937};
    vector<int> yv = {953, -197, -609, 84, -598, 342, 179, 19, -628, 569};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1333.4783451842275;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> xp = {60, -117, 178, -528, -998, -70, -80, -480, 261, -725};
    vector<int> yp = {-205, -394, -477, -28, -354, -409, -86, 878, 309, 316};
    vector<int> xv = {-520, -705, -788, 166, -800, -238, 169, 14, 109, -708};
    vector<int> yv = {910, -2, -510, -358, -520, -881, 463, -881, -935, 189};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1327.175;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> xp = {157, 620, 375, 682, -101, -860, -288, 11, 236, 599};
    vector<int> yp = {-430, -694, 769, -338, -836, -839, -105, -293, -2, 243};
    vector<int> xv = {-858, -811, -251, -202, -118, 315, -555, -858, -460, -730};
    vector<int> yv = {30, 866, -1, 97, 657, 749, 33, 249, -718, 868};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1223.1464574417498;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> xp = {-349, 371, -720, 855, 599, 485, -429, -84, 173, 321};
    vector<int> yp = {341, 99, -633, 61, -762, -219, -764, -150, 16, 795};
    vector<int> xv = {-869, -533, -793, -753, -552, 156, 903, -440, 22, 558};
    vector<int> yv = {-864, -132, 335, 652, -950, 888, 418, 172, 351, 152};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1575.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> xp = {-49, -463, -212, -204, -557, -67, -374, -335, -590, -4};
    vector<int> yp = {352, 491, 280, 355, 129, 78, 404, 597, 553, 445};
    vector<int> xv = {-82, 57, -23, -32, 89, -72, 27, 17, 100, -94};
    vector<int> yv = {-9, -58, 9, -14, 56, 75, -32, -98, -81, -43};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 25.467532467532468;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> xp = {-1000, -960, -920, -880, -840, -800, -760, -720, -680, -640, -600, -560, -520, -480, -440, -400, -360, -320, -280, -240, -200, -160, -120, -80, -40, 0, 40, 80, 120, 160, 200, 240, 280, 320, 360, 400, 440, 480, 520, 560, 600, 640, 680, 720, 760, 800, 840, 880, 920, 960};
    vector<int> yp = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> xv = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 975, 974, 973, 972, 971, 970, 969, 968, 967, 966, 965, 964, 963, 962, 961, 960, 959, 958, 957, 956, 955, 954, 953, 952, 951};
    vector<int> yv = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 49.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> xp = {590, 575, -916, -219, 474, -101, 952, -815, 886, -153, 308, -179, 866, 851, 288, -679, 366, -481, -948, -971, -278, -885, 72, -479, -602, 615, 964, -899, 706, -685, -848, 281, 622, 415, -260, -315, 122, 779, 104, 865, 566, 759, -476, -787, 834, -349, 592, -935, -946, -753};
    vector<int> yp = {-788, 757, -854, 827, 728, -735, 262, 983, 180, -755, 754, -845, 816, -247, 862, 159, -324, -539, 714, -597, -904, -239, 518, -521, -956, -707, 130, -749, 688, 569, -882, 943, 796, 821, -438, 347, 552, -15, -698, -345, -76, 653, 98, 35, -608, 425, -162, 639, -884, 805};
    vector<int> xv = {-742, 795, 296, -351, 182, 791, -604, -931, 690, 467, 912, -535, -2, -625, 780, 277, 922, -981, -600, 849, -954, -825, -940, -483, 498, -733, -64, 553, -450, -385, 492, -219, 650, 27, -8, 497, 118, -649, 20, 509, -958, 163, 336, 873, -802, 943, 348, -859, 122, -357};
    vector<int> yv = {104, -79, -266, 663, 900, -67, 898, -29, 480, 121, -290, 719, -260, 5, -918, 219, -792, -943, 950, -905, -140, -755, 306, -45, -992, 345, -658, 863, 188, 37, 298, 363, 824, 993, 374, -185, -332, 13, 242, -93, -912, 249, -850, -545, 300, -539, 986, 891, 296, 865};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1939.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> xp = {-513, 558, -965, -239, -601, 319, 817, -630, -514, -393, 497, -329, -759, 944, 676, -737, 843, -651, -3, 28, 793, 104, -141, 272, 34, 734, 16, 857, -629, -864, -948, -207, 173, -342, 65, 405, -827, 190, 8, -113, -9, -590, 537, 774, 321, 653, -994, 40, -460, -396};
    vector<int> yp = {892, -304, -475, -103, -752, -984, -163, 282, -321, -839, 376, 123, -235, 307, -555, 10, -170, 39, -518, 27, 515, 127, -385, -289, 779, -738, 634, 989, 466, -243, 60, 503, -131, -57, -825, -779, -590, 740, -874, 574, -583, 569, -383, 706, -451, -636, 485, -990, -451, -40};
    vector<int> xv = {-690, 415, -439, 146, 487, -96, -210, 548, 379, 360, 220, 523, -438, -669, 571, 77, 866, -940, 733, -804, 750, -273, 454, 70, -512, 206, 565, 261, 775, -531, 808, -962, 293, -89, -670, -173, -953, -985, 386, -84, -903, -164, -755, 629, 386, -823, -102, -436, 711, 799};
    vector<int> yv = {-853, -496, -908, -728, 543, -582, 584, -1000, 838, 962, -527, -63, 19, 580, -96, -304, -644, -959, -276, 270, -351, 533, 957, 753, -55, -725, -972, -684, -421, 86, -27, -325, 795, -639, 681, -375, 158, 74, 389, 420, 124, 819, -766, 454, 427, 693, 134, 427, -521, 729};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1961.038379530917;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> xp = {20, -20, 1, 0, 21};
    vector<int> yp = {1, 0, 40, -40, 0};
    vector<int> xv = {3, -3, 0, 0, -3};
    vector<int> yv = {0, 0, -3, 3, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> xp = {-1000, 1000};
    vector<int> yp = {-1000, 1000};
    vector<int> xv = {2, -2};
    vector<int> yv = {1, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 666.6666666666666;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> xp = {13, 50, 100, 40, -100};
    vector<int> yp = {20, 20, -150, -40, 63};
    vector<int> xv = {4, 50, 41, -41, -79};
    vector<int> yv = {1, 1, 1, 3, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 212.78688524590163;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> xp = {-49, -463, -212, -204, -557, -67, -374, -335, -590, -4, 567, 43, 90, 58, -345};
    vector<int> yp = {352, 491, 280, 355, 129, 78, 404, 597, 553, 445, 90, -87, 89, 90, 34};
    vector<int> xv = {-82, 57, -23, -32, 89, -72, 27, 17, 100, -94, 90, 43, -499, 999, 10};
    vector<int> yv = {-9, -58, 9, -14, 56, 75, -32, -98, -81, -43, 1, -999, 109, 99, 18};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1151.807903402854;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> xp = {0, 0};
    vector<int> yp = {1, -1};
    vector<int> xv = {0, 0};
    vector<int> yv = {1, -1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> xp = {-1000, 1000};
    vector<int> yp = {1, 0};
    vector<int> xv = {1000, 999};
    vector<int> yv = {0, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> xp = {229, -680, 604, -628, 773, 808, -114, -568, -800, -135, 597, -182, 217, -834, -683, 727, 553, -22, 750, 887, -598, 701, -714, 454, 232, -512, -740, 704, -298, 743, -636, 856, -653, 96, -704, 205, -181, 357, 878, -612, 374, -479, -787, -998, -879, 936, -376, 81, 783, 302};
    vector<int> yp = {-721, 428, 881, 808, 723, -179, 752, -677, 457, -914, -884, 444, 410, 74, -650, -943, -315, -245, -803, -795, -999, 731, 873, -207, -701, -897, -302, 46, -970, 957, -397, -320, 713, -184, 87, 99, -745, -875, 190, -312, 718, -101, -902, -453, 67, 445, -69, 397, -651, 889};
    vector<int> xv = {838, -661, 501, -808, -775, -404, 487, -543, 251, 671, 195, 536, 44, 945, 892, -896, -794, 438, 477, 131, 719, -375, 756, -754, 50, 573, 72, -673, -53, 611, 923, -472, -334, 709, 901, 916, 305, 12, 732, 695, -411, 33, 490, -182, -97, -262, -84, -403, 17, -375};
    vector<int> yv = {-157, -293, -778, 738, -614, -659, -26, 230, 408, -927, -375, 8, 180, -57, 782, 811, 985, 983, -718, 688, -83, -349, -809, 503, 951, -916, 260, 397, 71, -356, 402, 425, -487, 951, 603, -670, 90, 523, -352, -434, -160, 418, -812, 414, -710, 85, -778, 414, 362, -403};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1937.6006739679865;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> xp = {-1, 2};
    vector<int> yp = {1, 0};
    vector<int> xv = {1, -1};
    vector<int> yv = {-1, 1};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> xp = {50, 10, 30, 15};
    vector<int> yp = {-10, 30, 20, 40};
    vector<int> xv = {-5, -10, -15, -5};
    vector<int> yv = {40, -10, -1, -50};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 40.526315789473685;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> xp = {-117, 386, 277, 415, 293, -165, -114, -8, 149, -79, -138, -473, 190, -441, 263, 426, 40, -74, -328, 236, -289, -132, 67, -71, 282, 30, 362, -377, -433, -365, 429, 302, -478, -442, -431, -333, -107, -44, -489, -458, -271, -127, -79, 419, 284, 37, -302, -176, -185, -130};
    vector<int> yp = {-87, 26, -409, 480, 456, 373, 362, -330, 496, -219, -195, 425, -416, -173, -164, 5, 346, 229, -187, 357, -376, 395, 82, 45, 314, -133, -66, -136, -457, 250, -413, 308, -224, -322, 288, 84, -97, 151, 254, -101, 432, -440, 176, -132, 239, -488, -274, 86, -406, 39};
    vector<int> xv = {295, 70, -66, -122, -33, 101, -403, 402, -183, -8, 152, 256, -199, -220, -214, -59, 365, 189, -56, 119, -60, 229, -469, -383, -403, 271, -19, 175, 209, 427, 67, 356, -3, -147, 86, 465, -194, 183, -281, 124, 28, 371, 232, 329, 3, -481, -230, -132, 208, 215};
    vector<int> yv = {-160, -351, 296, 223, 118, -255, 346, -49, 421, 55, -121, -12, 264, -272, 341, -150, -307, 0, -466, 264, -376, 414, 487, 356, 243, -9, -273, -135, 359, 436, -68, 51, -63, -272, -225, -93, -26, -379, 358, -105, -471, -263, -265, 293, 318, -72, -357, -489, 428, 29};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 984.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> xp = {1000, -1000};
    vector<int> yp = {1000, -1000};
    vector<int> xv = {-1, 1};
    vector<int> yv = {-1, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 666.6666666666666;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> xp = {-570, -481, 344, 748, 104, -51, 597, 453, -122, 461, -441, -384, 494, -614, -549, -414, 488, 381, -39, 82, 450, 257, -548, 759};
    vector<int> yp = {-299, 569, -105, -420, -480, -399, -119, 715, 473, 552, 443, 439, -474, -363, 324, 687, 240, 638, 448, 782, 716, -156, -632, -323};
    vector<int> xv = {-306, 698, 434, -204, -59, -60, 697, -361, -389, -240, 696, 612, 243, 127, -19, -634, 657, 355, 780, 56, 590, -609, -133, -360};
    vector<int> yv = {644, -179, 380, 530, -202, 483, 362, -572, -544, 261, 311, 682, 763, -646, 639, 717, 207, -199, -49, -495, -57, -103, -619, -417};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1414.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> xp = {-999, 1000};
    vector<int> yp = {-1000, 1000};
    vector<int> xv = {1000, 999};
    vector<int> yv = {1000, 999};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> xp = {0, 2};
    vector<int> yp = {0, 0};
    vector<int> xv = {-1, 1};
    vector<int> yv = {0, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> xp = {0, 1, 100, -100};
    vector<int> yp = {0, 0, 1, 0};
    vector<int> xv = {0, 0, -1, 1};
    vector<int> yv = {-1, 1, 0, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> xp = {0, -1, 0};
    vector<int> yp = {2, -2, 0};
    vector<int> xv = {0, 0, 100};
    vector<int> yv = {-1, 1, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9411764705882355;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> xp = {0, 0};
    vector<int> yp = {0, 1};
    vector<int> xv = {1000, 0};
    vector<int> yv = {0, 1000};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> xp = {0, 100, 101, 200};
    vector<int> yp = {3, 2, 3, 2};
    vector<int> xv = {1, 0, 0, -1};
    vector<int> yv = {0, -1, 1, 0};
    CatchTheMice* pObj = new CatchTheMice();
    clock_t start = clock();
    double result = pObj->largestCage(xp, yp, xv, yv);
    clock_t end = clock();
    delete pObj;
    double expected = 100.5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7502813&rd=13517&pm=8066
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);++i)
#define FORE(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
 
vector<int> XP,YP,XV,YV;
int n;
double x[100],y[100];
double licz(double t) {
   REP(i,n) x[i]=XP[i]+XV[i]*t;
   REP(i,n) y[i]=YP[i]+YV[i]*t;
   return max( *max_element(x,x+n)-*min_element(x,x+n), *max_element(y,y+n)-*min_element(y,y+n) );
}
 
struct CatchTheMice {
double largestCage(vector <int> xp, vector <int> yp, vector <int> xv, vector <int> yv) {
   XP=xp,YP=yp,XV=xv,YV=yv; n=xp.size();
   double lb=0,ub=1000000; int ii;
   for(ii=0;ii<100;++ii) if (licz(10*ub) < licz(0)) ub=10*ub; else break;
   printf("%d\n",ii);
   REP(i,300) {
      double a=(2*lb+ub)/3,b=(lb+2*ub)/3;
      double A=licz(a),B=licz(b);
      if (A<B) ub=b; else lb=a;
   }
   return licz(lb);
}
 
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/