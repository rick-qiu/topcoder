/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8762
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

class HouseProtection {
public:
    double safetyFactor(vector<int> possibleXForBlue, vector<int> possibleYForBlue, vector<int> possibleXForRed, vector<int> possibleYForRed, int R);
};

double HouseProtection::safetyFactor(vector<int> possibleXForBlue, vector<int> possibleYForBlue, vector<int> possibleXForRed, vector<int> possibleYForRed, int R) {
    double ret;
    return ret;
}


int test0() {
    vector<int> possibleXForBlue = {0, 4};
    vector<int> possibleYForBlue = {0, 0};
    vector<int> possibleXForRed = {2, 1};
    vector<int> possibleYForRed = {2, -1};
    int R = 1;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 9.42477796076938;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> possibleXForBlue = {1};
    vector<int> possibleYForBlue = {1};
    vector<int> possibleXForRed = {1};
    vector<int> possibleYForRed = {1};
    int R = 5;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 78.53981633974483;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> possibleXForBlue = {12, 32, 13, 43, 13, 43};
    vector<int> possibleYForBlue = {32, 21, 32, 21, 11, 5};
    vector<int> possibleXForRed = {43, 54, 23, 56, 12, 13};
    vector<int> possibleYForRed = {13, 43, 22, 11, 14, 19};
    int R = 801;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1.209389392881519E7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> possibleXForBlue = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
    vector<int> possibleYForBlue = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
    vector<int> possibleXForRed = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
    vector<int> possibleYForRed = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
    int R = 1000;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5707963267948964E8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> possibleXForBlue = {0, 8};
    vector<int> possibleYForBlue = {0, 0};
    vector<int> possibleXForRed = {4, 4};
    vector<int> possibleYForRed = {3, -3};
    int R = 3;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 78.53981633974483;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> possibleXForBlue = {-732, -338, -712, 550};
    vector<int> possibleYForBlue = {-754, 504, -913, 316};
    vector<int> possibleXForRed = {842, -342, -161, 789};
    vector<int> possibleYForRed = {-347, -765, -362, -722};
    int R = 300;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1979203.3717615698;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> possibleXForBlue = {141, 76, -735, -268};
    vector<int> possibleYForBlue = {-28, -219, 834, -700};
    vector<int> possibleXForRed = {827, 620, -56, -837};
    vector<int> possibleYForRed = {-91, -636, 55, 0};
    int R = 642;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 5179405.577896734;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> possibleXForBlue = {-83, -91, 304, 776};
    vector<int> possibleYForBlue = {880, -643, -357, -510};
    vector<int> possibleXForRed = {-537, 88, -245, -276};
    vector<int> possibleYForRed = {742, 920, 865, -182};
    int R = 633;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 7552809.712645443;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> possibleXForBlue = {-847, 347, -477, 544};
    vector<int> possibleYForBlue = {204, -651, 163, -853};
    vector<int> possibleXForRed = {-931, 629, -488, -319};
    vector<int> possibleYForRed = {-814, -924, 598, 95};
    int R = 671;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 5657895.271779688;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> possibleXForBlue = {374, -469, 294, 574};
    vector<int> possibleYForBlue = {22, 314, -338, 334};
    vector<int> possibleXForRed = {-963, 961, -190, 459};
    vector<int> possibleYForRed = {-222, -5, 612, 682};
    int R = 572;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 4111515.4030884914;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> possibleXForBlue = {468, -11, 756, 11, 802, 132, 474, 808, 128, 143, 807, -36, -568, 94, 1, -620, -626, -10, 96, 97, 821, 782, -570, 62, 26, -597, -651, 397, 450, -579, 474, 768, 25, 383, 798, 6, 794, -613, 25, 384, 389, 70, 748, -629, 61, 56, 421, -596, 391, -27};
    vector<int> possibleYForBlue = {-339, -145, -319, -150, -484, -510, 724, -679, -696, -128, -169, 666, 710, -373, -362, 731, -533, -461, 713, -506, -626, 655, -515, -705, -95, -674, -383, 647, -385, -517, -629, -323, 741, -346, -125, -93, -529, 718, 654, -695, -320, -465, -112, -149, -111, -680, -304, -649, -522, -638};
    vector<int> possibleXForRed = {-615, 799, 391, 383, -632, 21, 116, 79, -572, -554, 102, 393, 398, -54, 788, 740, 806, 95, 780, 21, 798, 408, -557, 142, -17, 14, 103, 811, 71, 761, 103, -610, 72, -11, 480, 417, 447, 403, -626, -60, -632, 763, 27, 731, -624, 429, 89, -19, -570, -61};
    vector<int> possibleYForRed = {-696, 660, -123, 715, 673, 676, -478, -75, -346, -678, -499, -317, -149, -500, -714, -489, 662, -143, 679, -456, -645, -699, -370, -692, -364, -123, -673, 670, -480, -448, -626, -100, -105, -308, -489, -122, 719, -297, -450, -712, -313, 676, -350, -151, -340, -712, 713, -508, -369, -96};
    int R = 411;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6534048631852075E7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> possibleXForBlue = {-313, -545, -55, -324, 605, 602, -51, -169, -74, -13, -57, -800, -35, -555, -280, -306, 607, -38, -59, -548, -301, -554, -323, -350, -133, -298, -804, -577, -28, -677, -776, -693, -138, -298, -327, -308, -136, -309, -800, -784, 622, -139, -692, -291, -81, -687, -655, 595, -337, -324};
    vector<int> possibleYForBlue = {772, -267, -30, -9, 795, -151, 750, 765, -32, -173, 92, -119, -300, 769, -103, -101, 814, -14, -150, -318, -112, 776, -334, -276, -304, -361, -269, 59, 60, -45, 96, 816, 824, -312, 788, -121, -335, 765, -360, -168, -350, -325, 809, 772, 778, -175, 782, -355, -265, 67};
    vector<int> possibleXForRed = {639, -58, -44, -807, -353, -665, -328, -38, -573, -677, -281, -670, -283, -682, -121, -572, -326, 639, -35, -136, -682, -47, -579, -163, -80, -320, -331, -307, -340, -164, 628, -328, -342, -552, -282, -29, -777, -52, -771, -22, -539, -129, -331, -809, -322, 605, -313, 598, -790, -35};
    vector<int> possibleYForRed = {63, -110, 781, -98, -108, 817, 789, -152, -294, 95, -333, -314, 792, -284, -306, -294, -338, 826, -175, 761, -318, -139, 790, -18, -264, 788, -326, 790, 75, -102, -143, -295, -293, -3, 779, -3, -139, 60, -19, -80, -323, 770, -350, 792, -7, -362, 791, 781, 748, 60};
    int R = 361;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0470774810423773E7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> possibleXForBlue = {805, -95, 258, -48, 371, 890, -210, 873, -118, 270, -251, 373, -20, -122, 234, 933, 794, 798, 234, -385, -401, -65, 28, 924, 924, 37, 913, -369, 231, 881, 805, 58, 951, -379, 399, 37, 907, 972, -18, -395, -212, -54, 396, -229, -78, -242, 42, 790, 370, -90};
    vector<int> possibleYForBlue = {-758, -726, -574, -529, -182, -765, 925, -733, -156, -155, -581, 895, -553, -583, 2, -803, -14, -528, 437, -14, -560, -13, 5, -712, 439, -538, 923, -515, 942, -585, 949, -599, -601, -731, -151, -769, 421, 896, -143, -729, 436, -522, 405, 890, 868, -489, 958, 878, -786, -593};
    vector<int> possibleXForRed = {52, 30, 899, 946, -247, -380, 878, 258, 778, -49, -362, 266, 947, 773, 895, 28, -49, -59, 270, 927, -239, -98, 402, -391, -249, -23, -119, -212, -398, 800, 388, 381, 949, 950, 801, -92, -225, 222, -394, 224, -97, 29, 909, 20, -75, 366, 905, 780, 366, -59};
    vector<int> possibleYForRed = {-9, -578, -577, -802, 894, -557, -735, 435, 858, -3, 392, -555, 863, -770, 918, -703, -769, 925, -568, -167, -575, -739, 930, 440, -162, -514, 2, -159, -511, 951, 414, 875, -23, -589, -543, 963, -737, 905, -144, -709, -766, -512, -583, 401, -514, -608, 0, -502, -141, -785};
    int R = 200;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 6660176.425610362;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> possibleXForBlue = {-32, 127, 593, 748, 63, 540, 555, 753, -566, 595, 26, 718, 134, 127, -519, 550, 56, 572, 32, -533, 63, 755, 715, 559, -954, -918, 577, -40, 858, -918, -528, 589, -539, 538, 162, 869, 623, 570, -26, 600, 157, 847, -65, 854, -61, 593, -923, -943, 550, 853};
    vector<int> possibleYForBlue = {-810, -574, -579, -169, -320, -393, -852, -372, -835, 655, 647, -389, 550, 565, -585, -399, -85, 183, -340, -183, -858, -353, -209, 195, -60, -345, 198, -817, 183, -190, -588, -838, -854, 669, -48, -64, 660, 217, 649, -547, -818, -189, -843, -350, 549, 554, -87, -843, -398, 581};
    vector<int> possibleXForRed = {874, -552, 759, 725, 559, 874, -61, 739, -555, -946, 574, 167, 562, 155, 849, 570, 576, -67, -563, 60, -911, -925, 41, 554, 614, 547, 155, -934, 46, -69, -23, 581, 611, -545, 530, -920, 607, 38, 132, 852, -71, 607, 148, 580, 744, 564, 56, 726, -566, 846};
    vector<int> possibleYForRed = {-318, -162, -823, -577, 674, -371, -582, -92, -406, -189, 676, 557, 574, -841, -847, -581, 562, -829, -819, -392, 578, -84, 650, -550, -53, 199, -338, 540, -55, -315, 194, -379, 651, -208, 178, -174, -832, -66, -202, -315, 187, -841, -851, -418, -855, -593, -831, -329, 632, 220};
    int R = 117;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2623320.971934431;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> possibleXForBlue = {-895, -505, -217, 973, 881, -152, -237, 795, -931, 972, 222, -915, -205, -160, 330, -412, -417, 317, -929, 302, -473, 216, 889, -166, -195, 231, -195, -425, 835, 814, -476, -479, 880, -439, 956, 920, -169, -421, 310, 234, 940, 794, -906, 215, 306, 949, 876, -478, 826, -153};
    vector<int> possibleYForBlue = {754, 869, 805, 707, 621, 704, 650, 759, 624, 718, 303, 717, -570, 718, 606, 795, 652, 837, 311, 802, -586, 741, 736, 276, 792, 873, 789, 764, -603, 778, 735, -591, 747, 805, -567, 765, 710, 688, 871, 306, 743, 745, 692, 786, 810, 880, 794, 778, 773, 278};
    vector<int> possibleXForRed = {946, 886, -504, -199, 908, -931, -458, -444, 249, -434, 244, -180, -483, -171, 209, -506, -166, 837, 937, 331, 830, -237, 334, -470, 947, -204, 311, 819, 317, -196, 898, -923, -932, 247, -197, 939, -454, 822, 329, 901, -919, 799, 965, -195, -202, -493, -904, 920, 223, -412};
    vector<int> possibleYForRed = {795, 296, 615, 773, 710, -568, 857, 770, 784, 636, 792, 709, 622, 866, -574, 763, 791, 713, 727, 306, 802, 790, 743, 705, 812, 696, -571, -563, 856, 759, -593, 769, 622, 868, 802, 774, 784, 289, 775, 713, 763, 716, 703, 282, 791, 839, 729, 645, 744, 291};
    int R = 111;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2283746.2220079107;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> possibleXForBlue = {-934, -118, 840, -429, 450, -428, 832, -896, 832, -894, 660, -386, 471, 639, -957, -588, -390, -893, -136, 469, -596, -866, 841, -849, -421, -597, -919, -838, 460, -866, -366, 831, -108, -381, -617, -968, -933, 642, -959, -927, 661, -876, -424, 462, -381, -583, -132, -411, -88, 629};
    vector<int> possibleYForBlue = {-851, -569, 281, -633, 203, 304, -653, 854, -706, 880, -819, -703, 506, -823, 538, -732, -576, -659, 535, -853, -827, -692, -689, 884, -847, -574, 874, 183, -859, -802, -683, 876, -625, 175, -795, 522, -549, -678, -639, 303, -744, -665, 299, -728, 199, -870, 520, 314, -581, 171};
    vector<int> possibleXForRed = {643, -432, -965, -846, 643, -894, -894, -577, 446, 814, -131, 440, -577, -114, -925, -410, -833, -601, -391, -399, -955, -926, -876, -398, -117, 658, -435, -91, 488, -933, 650, 816, -836, -916, -586, 648, 838, 449, 815, -392, -128, -426, -439, -899, -857, 844, 475, -893, -369, -594};
    vector<int> possibleYForRed = {848, -555, -687, -662, -893, 306, -717, -817, -641, -802, 872, 525, 188, -716, -851, 301, -581, -669, -845, 283, 214, -579, -808, -723, -745, 517, 846, -679, -590, -873, 189, -802, 531, 184, -555, 880, -633, -657, 546, -674, -721, -623, -834, 851, 316, -673, 544, -892, 209, 286};
    int R = 136;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3370200.067806215;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> possibleXForBlue = {-423, 185, -303, 330, -282, 872, -501, -304, -479, -435, -613, 243, 529, 343, 876, 192, 245, -432, 880, 332, -514, 532, -642, -649, -300, 220, -431, 376, -629, 513, -490, 875, 844, 352, 532, -636, -308, 196, 374, 397, 559, 227, 220, 185, 337, -473, 198, 369, 380, -416};
    vector<int> possibleYForBlue = {471, -261, 763, 198, 179, 131, 458, 171, -265, 117, 461, -638, 740, -247, 769, 444, 104, 436, -662, 192, 125, 627, 197, 191, 728, 787, 787, 465, 590, 200, 174, -663, 176, 606, 475, 486, 790, 630, 742, -666, 463, -254, 486, 165, 592, 100, -646, 742, 722, -263};
    vector<int> possibleXForRed = {837, -434, -516, 535, -270, 361, 202, -436, -653, 537, 558, 364, 216, 366, -639, -306, 353, 337, 199, 837, -503, 514, 335, 346, -651, 552, -288, -624, -394, 229, 217, 879, 207, 183, 203, 862, 362, 235, -506, 847, -412, -478, -302, 190, 354, -279, -401, -646, 354, -485};
    vector<int> possibleYForRed = {102, 483, 194, 170, 602, 92, -636, 627, 195, 765, 622, 788, 122, 769, -253, 475, 764, 131, 184, 740, -622, 444, 442, 111, -640, 207, 171, -256, 498, 498, -229, 744, 171, -264, 171, 453, 430, -269, 773, -665, 754, 727, 605, 178, 764, -661, 465, 177, 486, 589};
    int R = 100;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1947787.4452256719;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> possibleXForBlue = {-290, 390, -380, 513, 249, 920, 279, 405, 392, 489, -880, -295, -861, 904, 942, -874, -881, -887, -281, -390, -838, 899, 94, 490, 65, 516, -253, 391, 945, 930, 895, 933, 899, 253, 505, -871, -378, -863, -880, 948, 274, 84, -400, 404, 265, 100, -260, -892, -376, 110};
    vector<int> possibleYForBlue = {-714, 877, 346, -439, -780, 868, -689, -689, -345, 865, -347, 633, 349, -750, 638, 945, 891, 869, 873, 667, 345, -357, -755, 644, -452, -753, 958, 659, 648, 326, 677, -416, 666, 867, -355, 342, 856, 938, 899, -319, -699, -446, -741, 936, 675, 966, 649, -436, 881, -708};
    vector<int> possibleXForRed = {893, 493, 262, -884, -248, 80, -873, -838, 502, 504, -256, 421, 393, 380, -393, 428, -278, -278, 935, 283, 255, -370, -291, 942, 907, 912, -890, 899, -855, -894, -365, -385, 877, 269, 68, -877, 67, 63, 88, 492, 252, 945, -844, 398, -369, 494, -873, 899, 920, -879};
    vector<int> possibleYForRed = {-430, -428, 653, -716, -763, 338, 668, 640, -449, 643, -719, 876, -750, 884, -360, 631, 932, 327, 965, -707, -450, 886, 862, 675, 883, 942, 865, 861, -719, -768, 366, 971, 664, -462, 660, -740, 651, -332, 863, 888, 370, 337, -722, 863, -322, 936, -318, -759, 670, -338};
    int R = 144;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 4169220.1769496286;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> possibleXForBlue = {330, 31, -862, -150, 333, -863, -675, -868, -986, -59, -677, -4, -985, 24, 334, 23, -381, -674, -872, -146, -877, 333, 26, -4, -64, 31, -374, -3, -683, -987, -871, -5, -681, -149, -381, -149, 338, -865, -873, -378, -377, -62, -863, -67, -148, -872, -982, -63, -984, 0};
    vector<int> possibleYForBlue = {-254, -256, -369, 923, -366, -200, 916, -196, 5, 920, -202, -214, -198, 458, -879, -880, 462, -216, -370, 916, -371, -880, 459, -248, 7, -213, 462, 922, -202, -879, -885, -249, -883, -908, -882, -366, -219, -905, -906, 2, -911, -212, 463, -889, 4, -252, 9, -885, -913, -890};
    vector<int> possibleXForRed = {-145, -864, -61, -877, 25, -678, -987, -877, -375, -2, -683, 329, -380, -147, -373, -870, -861, -874, 330, -868, -63, -380, 338, -7, 0, -67, -981, -678, -861, -985, -65, -861, -147, -376, 32, -681, -7, -4, 335, -683, -64, 31, 335, -147, -987, 23, 31, -870, -146, -978};
    vector<int> possibleYForRed = {467, -878, -364, -249, 918, -891, 921, 922, -370, 2, -215, -252, -219, 465, 6, -883, -886, 460, -883, 8, 917, -365, -892, -881, 915, -881, -879, -201, -912, -364, 460, -905, -198, -883, -203, -366, -257, -909, -197, -219, 466, -211, 2, -204, -907, 9, -913, -249, -255, -212};
    int R = 111;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2263635.3166359556;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> possibleXForBlue = {440, -366, -494, -495, -497, -672, -677, -672, -364, -672, 437, -494, -113, -363, -673, -366, -489, -387, -383, -414, 299, -496, -106, -415, -492, -412, -493, -669, -671, -415, -673, 294, -107, -503, 291, 440, -495, -388, 298, 299, -384, 438, 437, -675, -409, -369, -115, -108, -389, -668};
    vector<int> possibleYForBlue = {-587, -512, 645, -810, 950, -843, -293, -810, -291, -406, 643, -608, -613, -298, -409, -411, -517, -608, 640, -18, 638, -298, -581, 953, -808, -584, -519, -584, -840, -15, -403, -515, -13, -17, -804, 643, -841, -20, -839, -581, -610, -513, -846, 948, 950, -614, 950, -408, -296, -807};
    vector<int> possibleXForRed = {-499, -372, -107, 292, 445, -108, -491, -675, 293, -408, 439, -107, -673, -407, -406, -672, -371, -670, -382, 294, -364, -679, 291, -679, -668, -679, -491, 297, 438, -388, 441, -496, -671, -414, -676, -490, -489, -409, -389, -386, -495, -496, -107, -383, -109, 443, -366, -367, -502, -497};
    vector<int> possibleYForRed = {-406, -14, -294, -403, -843, -18, -515, -607, -14, -510, -841, -584, 639, 950, -291, 950, -812, -841, -581, 644, -845, -516, -578, -404, -20, -582, -809, -805, 950, -407, -813, -290, -293, 946, 642, 639, -839, -811, -19, -408, -609, 642, -614, -586, 953, -295, -610, -608, -514, -513};
    int R = 101;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1794653.6529190908;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> possibleXForBlue = {-384, -386, -750, -660, -970, 19, -887, 701, 23, 955, -972, 564, -887, -744, 958, -523, 706, -665, -666, -527, 562, 565, -745, 957, -892, 565, -385, 702, 569, 954, -524, 699, -745, -384, -665, -386, 26, -971, 25, -891, -526, 955, -667, -976, -886, -521, -970, 699, -750, 26};
    vector<int> possibleYForBlue = {570, -36, -973, 641, -37, 124, -982, 644, 640, -709, -716, 123, -574, 405, 125, 400, -978, -977, 567, 646, 152, 122, 575, -32, -573, 159, 158, 401, 404, 125, 572, -978, 574, 399, 646, -980, -712, 153, -980, -40, -576, -976, -36, -576, -717, -712, -973, -569, 154, -973};
    vector<int> possibleXForRed = {-746, 960, -887, 956, -753, -520, -973, -523, 704, -378, -973, 563, 24, 21, 708, -663, -886, -663, -975, -529, -968, -381, -382, -662, -887, 566, 565, 569, 957, 962, -529, -379, -664, 20, -753, -752, -661, -748, 699, 962, -526, 20, -889, 26, -977, -893, -383, 563, 706, 702};
    vector<int> possibleYForRed = {-970, 403, 400, -980, -575, 645, 156, 130, -569, 158, 570, 641, 640, 122, 406, -978, -983, -710, -977, 576, -572, -34, -35, 575, 153, -41, -573, 648, 161, -39, 407, 405, -984, -977, -716, -711, 155, -982, -40, 130, -713, 645, -977, -574, 125, 126, 574, -713, 576, -973};
    int R = 141;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3497648.198577046;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> possibleXForBlue = {131, 586, -554, 519, 518, 517, 124, 590, -792, -551, 308, -852, -787, 571, -848, 517, -373, -752, 124, -550, -754, 592, 567, -371, 586, -785, -789, 125, 584, 127, 312, 569, -751, -370, -551, -747, -846, 571, -364, 314, -364, -554, 518, 306, 570, -848, -789, -845, -754, 310};
    vector<int> possibleYForBlue = {-981, 124, 418, 432, 306, 984, -981, 983, 420, 129, 985, 305, -387, 127, -987, 129, 305, 417, 419, 92, -110, 124, 100, 986, -390, -385, -985, 426, 553, -114, -982, 992, 429, 95, 553, 92, -391, 434, 557, 431, 300, -114, 554, -114, 417, -393, -113, 306, 96, 556};
    vector<int> possibleXForRed = {522, 587, 315, 518, -551, -853, -368, 562, -753, -849, 592, 520, 584, -751, 565, 308, -373, 520, -554, 125, 308, -749, -556, 517, 590, -556, -752, -364, -748, -368, -848, -787, -372, 122, 125, -786, -790, 129, -848, 570, 566, -790, 569, 126, -851, -791, 313, 586, 309, -552};
    vector<int> possibleYForRed = {989, 431, 984, -390, 307, 123, 555, -388, 433, 417, 96, 987, 555, 91, -391, 987, 308, 92, 992, -982, 121, 302, 100, 419, 98, -117, -115, 430, -108, -984, -393, 548, 430, -387, 128, 421, 129, 305, 550, -988, -108, -988, -110, 428, 125, -985, 413, 416, 551, 300};
    int R = 120;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2623858.1842781953;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> possibleXForBlue = {-376, -662, -819, -252, -625, -633, -661, -253, -254, -627, -626, -631, -253, 276, -826, -246, -623, -817, -820, 281, 76, 282, -961, -378, -253, -630, -627, 279, -246, -632, 73, -245, -665, -248, -380, -661, -959, 75, 74, -245, -379, -664, -823, -958, 70, -378, -628, 283, -958, -958};
    vector<int> possibleYForBlue = {-569, 350, 983, 664, -254, 192, 907, 352, -433, 184, -436, 983, 908, -254, -575, -256, 345, -805, 349, 910, 346, -254, 346, -576, 193, 348, 660, 988, 656, -807, -809, -252, 353, -429, -574, 349, 189, 906, 663, -433, -571, -800, 912, 189, -800, 988, -429, 662, 985, 353};
    vector<int> possibleXForRed = {278, -622, -625, 74, -252, -819, -633, -661, 72, -251, 70, -254, -823, -956, -659, -623, -662, 276, -627, -959, -250, -373, -659, 278, -621, -817, -963, -661, -630, -251, -377, 69, -247, -965, -624, 70, -252, -254, 276, -378, -821, -957, -825, 275, -381, -253, -629, -632, -377, -248};
    vector<int> possibleYForRed = {353, 348, 352, 191, -435, 912, 661, -803, 909, -431, 345, 185, 187, 989, -800, -433, 349, -259, 657, 353, 984, 989, 662, 350, 915, -577, -807, 985, 992, 906, -259, 656, -257, 658, 347, 915, -578, -801, -578, -253, -571, 186, -804, -429, -251, 350, -572, -431, 347, 188};
    int R = 110;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2394836.0798314996;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> possibleXForBlue = {419, 407, 128, 134, -38, -19, -16, -96, -92, 390, -37, -98, 124, 132, -107, 395, 121, -21, -32, 117, -27, 120, 418, 407, -41, 402, 138, -112, 398, 393, -108, -103, 418, -38, -100, -113, 114, -32, -102, -16, 400, 135, 133, -99, 126, -98, -26, 398};
    vector<int> possibleYForBlue = {-159, -604, -583, -148, -289, 956, -611, -610, -162, -265, -585, -146, -266, -153, -290, 972, -135, -611, -604, -268, 970, 952, -603, 950, 951, -290, 971, -134, 973, -582, -290, -287, 953, -588, 958, -146, -160, -287, -287, -261, -601, -161, -278, -583, -160, -155, 967, 966};
    vector<int> possibleXForRed = {-103, 123, 138, -103, 397, -93, 136, -13, 413, -94, 125, -25, 132, 125, 128, 112, 392, -99, -17, -104, -29, -38, 412, -98, -114, -25, 391, -33, -20, -119, 140, -40, 419, -42, -23, 134, 398, 417, 413, 419, -112, -110, 408, -114, 140, -18, 403, 126};
    vector<int> possibleYForRed = {-159, -153, -606, -589, 969, -588, -599, -585, -152, 976, -588, -145, -269, -597, 956, 955, 949, -156, -288, -593, -163, -147, -594, -163, 971, -279, -289, -277, 964, -285, -163, 951, 978, -285, -281, 956, -597, -146, -595, -134, -282, -280, 949, -145, -277, -591, -290, 960};
    int R = 87;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1236493.1693410994;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> possibleXForBlue = {-73, -164, -142, -71, -153, -161, -75, -306, -156, -288, -164, -141, -166, -317, -148, -75, -143, -152, -155, -302, -78, -308, -317, -305, -69, -315, -148, -152, -151, -161, -92, -65, -304, -146, -92, -316, -148, -153, -68, -142, -162, -301, -79, -145, -73, -302, -160, -164};
    vector<int> possibleYForBlue = {693, 714, -6, -6, -687, 708, 692, -5, 707, -701, -9, -10, 696, -10, 719, -698, 686, -699, -694, 705, 675, 708, 692, 711, -707, 690, -1, -713, -712, -689, 686, -685, 694, 704, 716, 691, 676, 703, 3, 6, 689, -5, 682, -694, 692, 0, 6, -707};
    vector<int> possibleXForRed = {-143, -83, -72, -156, -144, -152, -75, -73, -161, -154, -288, -289, -312, -145, -71, -158, -146, -146, -75, -86, -310, -72, -311, -169, -155, -311, -155, -74, -169, -75, -147, -292, -92, -317, -162, -314, -168, -157, -162, -165, -293, -148, -290, -152, -149, -92, -156, -290};
    vector<int> possibleYForRed = {673, -713, -8, 679, 701, -711, 690, 678, 14, 697, 9, 711, 703, 3, -13, -694, 1, 693, 708, -706, -701, 0, -688, -705, 715, 680, 686, 700, 696, 8, 11, 672, 670, 680, -1, 689, -690, 690, -698, 16, 712, 697, -704, 695, -700, -699, 696, 10};
    int R = 81;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 989375.4912097264;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> possibleXForBlue = {-488, -125, -125, -861, -39, -487, -861, -44, -132, -138, -467, -862, -145, -63, -35, -140, -135, -873, -480, -872, -120, -884, -126, -126, -119, -486, -47, -138, -862, -459, -465, -874, -865, -38, -63, -858, -51, -878, -867, -463, -483, -468, -464, -47, -47, -38, -459, -57};
    vector<int> possibleYForBlue = {32, -779, -763, -774, -359, -380, -324, -345, -380, -372, -334, -359, 30, -784, 34, -786, -384, 14, -325, -367, -371, -360, 32, -382, -342, -345, 10, -330, -786, -779, -782, -777, -772, -364, 32, -345, 20, -331, 7, -376, -769, 31, -777, 32, -347, -328, 31, -328};
    vector<int> possibleXForRed = {-885, -860, -859, -863, -125, -469, -117, -124, -133, -487, -59, -472, -882, -121, -463, -466, -62, -479, -45, -869, -60, -41, -137, -484, -34, -876, -118, -878, -45, -60, -480, -120, -468, -865, -130, -54, -146, -463, -872, -38, -883, -121, -121, -872, -477, -61, -44, -470};
    vector<int> possibleYForRed = {-377, 27, 19, -364, -331, 27, -777, -379, 10, -779, -776, -340, -788, -763, -337, -338, 18, -336, 7, -364, -361, -787, -773, -322, -381, -329, -782, -781, -780, -369, -344, -324, -380, 36, -331, -337, 19, -367, -779, 9, -773, -369, -344, 29, 34, -374, -360, 17};
    int R = 67;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 789746.1276300165;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> possibleXForBlue = {184, 705, 711, -377, -402, -293, 168, 193, 720, 723, -299, 190, 193, -386, 714, 165, -306, 173, 717, -392, 729, 170, -277, -283, -392, -283, 169, -398, 185, -277, -290, -301, 169, -298, 709, 724, -291, 717, 720, 180, -380, 721, -387, -402, -376, -402, -280, -391};
    vector<int> possibleYForBlue = {-949, 402, -963, 399, 150, 925, 395, -963, 416, -951, 167, 171, 920, 395, -961, -953, 166, 160, 395, 930, -968, -957, 419, -952, -946, 916, 908, 150, 163, 153, -948, 916, 912, 906, 156, 163, -942, 394, 928, 401, 916, 915, 400, 161, 412, 913, 157, 403};
    vector<int> possibleXForRed = {194, -302, -284, 710, -397, -395, -293, 182, 176, 727, -301, -299, -283, 716, -397, 171, -386, -379, 708, 710, 730, -398, -277, 174, -291, 191, -284, -302, -395, 703, 185, -395, -373, 730, -395, 724, 186, -284, 716, 187, 166, 709, 180, -397, 191, -284, 724, -401};
    vector<int> possibleYForRed = {170, 153, 405, 920, 169, -946, 910, -947, 405, -954, 393, 908, 903, 924, 415, 165, -941, 154, -963, 930, -960, -955, 915, 903, 161, 145, -948, 924, 153, 409, -953, -950, 155, 406, -959, 914, 408, 161, 152, 404, 395, 402, 924, -962, 911, 147, 421, 404};
    int R = 124;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2656782.075287816;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> possibleXForBlue = {-613, 413, 414, -619, -558, 410, -553, -570, 418, 390, -802, -830, -566, -803, -605, -826, -824, -565, -562, -810, -554, 402, 394, -817, 418, -810, -612, -562, 418, -814, 404, -813, -625, 390, -608, -804, -557, -563, -631, -810, -612, -630, -620, -561, -560, -610, 411, -605};
    vector<int> possibleYForBlue = {954, 447, 256, 470, 965, 888, 251, 238, 864, 885, 246, 464, 941, 876, 454, 467, 873, 447, 454, 238, 943, 864, 244, 233, 257, 469, 961, 446, 939, 457, 959, 260, 863, 235, 961, 964, 251, 948, 886, 450, 870, 468, 939, 242, 960, 867, 890, 876};
    vector<int> possibleXForRed = {-566, -817, -629, -631, 416, 401, 393, -817, -828, -626, -572, -550, 411, 412, -604, -828, 407, -829, -546, -822, -805, 407, 403, -612, 404, -627, -543, -611, -627, -549, -553, -828, -557, -628, 403, -549, -816, -820, -613, -559, 410, -631, -824, -621, -570, -553, -818, 417};
    vector<int> possibleYForRed = {236, 951, 887, 446, 870, 463, 967, 872, 943, 250, 456, 244, 240, 877, 966, 463, 256, 883, 445, 448, 960, 449, 957, 956, 471, 949, 953, 444, 866, 252, 241, 951, 876, 240, 258, 873, 451, 260, 887, 872, 870, 867, 954, 250, 446, 450, 968, 252};
    int R = 82;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1225196.0021587906;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> possibleXForBlue = {90, 76, -616, 873, 442, 891, 99, 919, -610, 895, 933, 78, 446, 453, 889, 100, 103, -623, 917, -471, 923, -461, 929, -453, 82, 890, 454, 872, 96, -636, 942, 106, 78, 84, 940, 104, -466, 892, 456, -458, -462, -622, 91, 462, 88, -633, -469, 444, -632};
    vector<int> possibleYForBlue = {-485, -88, 319, -43, 465, 482, -498, 319, -46, -79, 314, -39, -479, -190, -66, -176, -496, -482, 635, 318, 476, 479, 311, -176, 470, -179, 623, -67, -95, -69, -163, 296, -502, 615, 637, -91, 477, -71, -58, -190, 297, 638, -171, 630, -49, 612, -91, 469, -488};
    vector<int> possibleXForRed = {-475, 901, 876, 878, 74, 87, -632, 454, 103, -479, 901, 874, 460, -609, -477, 917, 453, 875, 925, 78, 107, 444, 919, -611, 89, 454, 935, -631, -457, -615, 915, 102, -456, 105, 464, 103, 924, 86, -472, -629, -452, 92, 927, 895, 96, 98, -630, 453, 83};
    vector<int> possibleYForRed = {-67, -50, -78, -68, -480, -487, -68, 637, -69, 324, 324, -186, 324, -478, 299, -62, 469, -504, -82, -166, 619, -67, -477, 483, 480, -190, 461, -173, -89, -477, 612, -184, 322, 633, -73, -179, 621, -79, 460, -163, -67, -504, 301, 477, 460, 307, 626, 631, -47};
    int R = 105;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1904983.2453205108;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> possibleXForBlue = {567, -212, 406, 405, 411, 558, -209, 475, 570, -205, 487, -50, -210, 411, 412, 488, 566, 542, -58, 550, -52, 560, -200, -136, 483, 543, -138, 537, -144, -155, 557, -65, -64, -206, 408, 472, 565, -133, -209, -146, 559, 489, 546, 556, 469, -41, 401, -153, -59};
    vector<int> possibleYForBlue = {134, 99, 557, 114, -676, 119, 607, -683, 553, 134, 98, -745, -904, -758, 617, 120, 623, -754, -742, 133, 604, -759, -886, -904, -695, -888, 628, 101, -694, 103, 533, -677, 619, 533, 626, -744, -887, 557, 130, 531, 131, -894, 559, -678, -887, 115, -749, -683, 106};
    vector<int> possibleXForRed = {-41, -152, 427, 558, 562, -65, -192, 415, 555, -40, 548, -211, -38, -216, 557, 411, 426, -211, 399, 465, 463, 563, -160, 403, -219, 569, -150, 550, 560, 482, -60, 553, -137, 427, 467, 468, 473, 473, -140, -51, 564, 547, -158, 571, 550, -63, -157, -195, -208};
    vector<int> possibleYForRed = {555, -745, 609, -676, 131, 620, 117, -902, -680, -907, -738, -752, 119, -751, -747, 546, 123, 125, 91, 540, -911, -892, 555, 97, -689, 614, 115, 617, -693, -908, 535, 625, -691, 548, -748, 548, -889, 132, 100, -677, -884, -753, 603, 605, 131, -685, 132, 99, 99};
    int R = 103;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1766445.292482508;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> possibleXForBlue = {818, -534, -477, -424, -618, 799, -527, -407, -413, 794, -481, -602, 808, -417, -624, -457, -515, -516, -515, -462, 796, 866, 866, 793, 874, -756, -610, -750, 851, 857, -616, -417, -608, -750, 820, -766, -459, -739, -431, 869, -600, -756, -471, -514, 856, -505, -422, -765, -475};
    vector<int> possibleYForBlue = {109, -642, -524, 122, -646, 130, -62, -57, -661, 129, 120, -119, 416, 796, -658, 422, -648, -634, 431, -642, -54, 815, -122, -130, -73, 428, 814, -515, -520, 421, -513, -503, 797, -503, 439, -118, 790, -126, 800, -510, 802, -117, -64, -111, -59, 429, 116, 124, -72};
    vector<int> possibleXForRed = {802, -601, -429, 800, -760, -740, -757, 858, -614, -424, 859, -513, -619, 799, -428, 867, 871, 855, -463, 871, -531, -507, -506, -601, 813, -473, -429, -523, -461, -744, -483, -462, -599, -745, -608, -412, 850, -471, 810, -404, -751, -406, 813, -525, -470, -627, -534, 807, -767};
    vector<int> possibleYForRed = {-75, -123, 122, -71, -529, -530, 113, 818, -642, -523, -109, 796, -67, 424, 120, 127, 440, 422, 425, -633, -77, 800, 132, -127, -506, 420, -523, -515, 116, -633, -78, -70, 793, -110, -131, -72, -642, -650, 131, -130, 423, 804, -632, 790, -657, -107, 815, -525, 435};
    int R = 120;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2488141.381643116;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> possibleXForBlue = {381, -215, -230, 660, 595, 386, -356, -356, 687, -603, 672, -359, -620, -223, 593, -604, -236, -793, -236, -789, -362, 362, 667, 369, -769, -353, -607, -790, -791, -238, 665, 581, -614, 362, 574, -361, -627, -767, -778, 663, 579, -629, 666, 358, 594, 385, 574, -229, -358};
    vector<int> possibleYForBlue = {-535, -878, -208, -522, -515, -675, 154, -879, 578, 573, -866, 60, 600, 139, 146, -675, 47, -877, 60, -197, 158, -879, 147, 585, 46, -877, -517, 137, -210, -679, 46, -670, -214, -531, -681, -683, -872, -540, 585, -210, -530, 145, 591, -677, -216, 52, -198, 56, 595};
    vector<int> possibleXForRed = {677, -358, -218, -785, -612, -774, 381, -629, -617, -623, -217, 679, -358, -359, -779, -768, -349, 576, 660, 596, -239, 371, -770, 680, -623, -606, -221, -791, 579, 372, 686, 594, -786, -363, -365, 593, 379, 570, 664, -217, 582, -238, 377, 382, -344, -231, 368, -622, 685};
    vector<int> possibleYForRed = {-530, 46, -201, -517, 141, -872, -541, 589, -671, -692, -693, 60, 587, -863, 74, -195, -514, 136, 144, -197, 134, -190, -526, -219, 71, 581, -694, -688, -538, 583, 574, -194, 581, 147, -865, 53, -866, -535, -889, 66, 144, 70, -880, -693, -215, 154, -669, 581, -881};
    int R = 114;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2218765.5195610593;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> possibleXForBlue = {-401, -352, 594, 199, -721, -339, 205, -404, 210, 581, 525, -349, 596, -739, -339, 595, 869, 523, 517, 573, 585, -748, -403, 874, 863, 211, 223, -403, 875, -402, 527, 515, -395, 860, -734, -404, -358, -727, 865, 529, -745, 522, 221, -729, -335, 596, 200, -363, 863};
    vector<int> possibleYForBlue = {51, -496, -773, -787, -909, 363, -716, 114, 390, 379, 102, -477, 389, -782, 368, -732, 386, 53, -891, -893, -788, -497, 121, -489, -716, -728, -884, 366, -789, 118, 94, 62, -907, -741, -891, 62, 116, -494, -886, -728, 67, -789, -474, 121, 62, -717, -779, -474, 55};
    vector<int> possibleXForRed = {-744, 530, -740, 510, -723, 874, 205, -341, 517, 210, -725, 882, 872, 883, 876, 592, -737, 597, -391, 588, 204, 223, 590, -409, 521, -348, 215, -733, -359, -363, -720, -341, 507, 580, -391, -409, 531, 523, -398, 218, 207, -387, -358, -399, 599, 858, 589, -351, 874};
    vector<int> possibleYForRed = {-733, -771, 379, -891, -485, -723, -722, 388, -884, -716, -890, -724, 110, -477, 64, -779, -476, 376, 111, 388, 76, 112, 56, -907, -499, -778, 384, 77, 63, -778, -715, 104, -785, 72, 388, -882, 118, 72, 116, -498, -493, -483, 378, -772, -730, -899, -908, -799, 117};
    int R = 115;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2474239.8341509816;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> possibleXForBlue = {-907, 332, -738, 329, -174, -173, -914, -713, 696, -738, 324, -753, 320, -902, -929, 326, -731, 726, -198, 715, -715, -200, -748, -900, 300, 324, 705, -718, -725, -712, -727, -727, -726, -203, -720, 725, 722, -725, -175, -172, -921, 696, -729, -917, 314, -175, 726, -924};
    vector<int> possibleYForBlue = {963, 969, 166, 981, -939, -917, -945, -938, 164, -950, -253, -244, -942, 974, -496, 162, -915, -241, -515, 175, -497, -496, -948, -518, 160, -235, -914, -237, -945, 975, 165, -933, -239, 171, -930, 154, -916, 987, 961, -521, -930, -923, -933, -496, 987, -227, -221, -498};
    vector<int> possibleXForRed = {315, -925, 699, -729, -917, 307, 328, -728, -173, -927, 333, -179, -205, -204, 302, -202, 321, 721, -708, 722, -710, 705, -905, -194, 720, 710, -750, -896, -902, -737, -190, 323, -730, -899, -199, -710, -744, -903, -730, -732, -740, 710, 704, -728, -735, -710, 332, -755};
    vector<int> possibleYForRed = {-237, -488, -916, 991, -510, -494, -925, 979, -924, 168, 151, 959, 163, -950, -923, -942, -244, -242, 181, 985, -489, -944, -922, -255, -937, -504, -512, -941, 160, 984, -229, -920, 980, -224, -923, -523, 147, 990, -918, -512, 168, 989, -238, -946, -230, -944, -942, 172};
    int R = 141;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3872396.219853158;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> possibleXForBlue = {144, 76, 930, 61, -816, -506, -809, -517, -638, 146, 152, -514, 60, -492, 141, -504, 86, -497, 80, -824, -815, 924, -619, -643, 66, -813, -608, -842, -501, 903, 153, 906, 65, 926, -615, -637, -488, 60, -613, 902, -835, 928, 171, 151, -825, 148, -611, 906};
    vector<int> possibleYForBlue = {-318, -293, 269, -288, -58, -69, 254, -207, 242, -322, 101, -37, -208, -311, 139, -207, -305, 115, -62, -211, -59, 121, -296, -49, 257, -317, 254, -229, 248, -321, -291, -315, 112, -42, 108, -318, 241, -221, -225, 101, 122, 261, -298, -50, -311, -312, -211, -303};
    vector<int> possibleXForRed = {-505, 144, 84, 85, 903, 82, -501, 931, 148, -621, 147, -617, -501, -499, -642, 141, 152, 174, 154, -829, -825, -812, -813, -822, 63, -818, -818, 917, -507, 69, 905, 68, -827, -503, 909, -641, -642, 904, 917, -617, 922, 79, -628, 56, -504, 150, -496, -642};
    vector<int> possibleYForRed = {257, -212, -209, -314, -46, 241, 136, -230, -308, -309, -316, -213, -325, 242, -37, -308, -63, 243, 124, -292, -211, -58, -302, -55, -214, -290, -49, -291, 256, 269, -300, 101, -309, 121, 236, 248, -305, -237, -309, 102, -294, -64, -228, 110, -301, 106, -35, 121};
    int R = 93;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1412925.0127667023;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> possibleXForBlue = {39, -969, 50, 571, 34, -944, 39, 47, 903, 546, 919, 904, 552, 878, -959, 909, -945, 712, 566, 705, 47, 728, 28, -950, 567, 858, 703, 896, 863, 863, -965, 22, 906, 570, 718, 698, 880, -968, 723, 545, 915, 883, 881, 715, 865, -977, 905, 556};
    vector<int> possibleYForBlue = {451, 337, -54, 243, -862, -848, 239, 334, 353, -836, -57, -75, 343, 141, 355, 337, 453, -833, 476, -845, 244, 334, 246, 473, 470, -833, 168, -47, 332, 159, -49, -43, 241, 144, -838, 249, 174, 470, 139, -51, 141, 258, 446, 167, 473, -863, 221, -52};
    vector<int> possibleXForRed = {544, 875, 559, 557, -969, 872, -966, 707, 711, 28, 705, -960, 888, 570, 880, 887, 873, -962, 573, 702, 907, 917, 560, 50, 906, -944, 42, -968, 714, 703, 918, 41, 25, 701, 703, -966, 868, 45, 572, 544, 896, 26, 49, 884, 871, 883, -970, 902};
    vector<int> possibleYForRed = {341, 364, 243, -62, 351, 142, -870, 484, -42, -52, 173, 357, 333, -60, 468, -852, 345, 467, 241, 167, 335, 152, -864, 470, 331, -48, 245, 243, -73, -835, -837, 479, -860, 257, 247, 464, 455, 481, -838, 140, 174, -64, -44, -833, 228, 173, 168, 244};
    int R = 114;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2082235.0444287006;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> possibleXForBlue = {262, -889, 258, -88, 485, -838, -830, 296, 462, -86, 258, 263, -91, 481, 464, 491, -67, -866, -871, 295, -71, 261, 259, 484, 286, -838, -98, 291, -879, -892, -866, -851, 255, 314, 307, 240, 475, 307, -868, -856, 317, -898, -69, -845, -101, -828, 469, -837};
    vector<int> possibleYForBlue = {356, 348, 336, -721, -684, 327, 347, 320, 416, -630, 421, 331, -60, -700, -648, -705, -652, -648, 407, 344, 355, -80, -712, 406, 324, 406, -627, 335, -683, -76, 347, -69, 407, 347, 342, -695, 326, -69, 416, -94, 345, 392, -67, -652, -692, -628, -614, -89};
    vector<int> possibleXForRed = {-78, -71, -837, 246, 476, -896, 288, -862, -848, -855, 309, -834, 494, -98, 242, 478, 297, 465, -867, 309, -897, 252, -870, 477, -66, 318, 247, -877, -879, 316, -862, 303, 263, 242, -101, -78, -86, -828, 255, 261, -86, 472, 473, -881, 293, -854, 487, -889};
    vector<int> possibleYForRed = {-65, -637, -79, 344, 360, -84, 403, 343, 318, 352, -92, -640, -643, -701, 329, 391, -77, -683, 344, 321, 330, -69, 317, -698, -647, 346, -91, -692, -651, -74, -712, 316, -690, 401, 405, 421, 318, 408, 325, 331, 335, -621, -703, -629, -651, -717, 397, 398};
    int R = 110;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2128743.182072444;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> possibleXForBlue = {-416, 789, 537, 808, 786, -402, 519, 788, -220, 526, 801, -254, -216, 527, -222, -219, -572, 549, -229, -246, 813, -583, 548, 808, -595, 526, -229, -223, -232, -402, -385, -580, 801, -573, 545, -235, -605, -407, -591, -241, -384, -385, -214, -249, -219, -607, -411, -234};
    vector<int> possibleYForBlue = {-943, -749, 142, 699, -161, -594, -609, -579, 701, -591, -147, 158, -579, -925, 704, -774, -935, -923, -171, 708, -164, -906, -923, 146, 137, 143, -758, -577, -143, 703, -910, -171, -907, -766, -747, -138, 718, -760, -753, 138, -745, 144, -579, 148, -142, 710, 702, -594};
    vector<int> possibleXForRed = {-233, 552, 812, -595, -596, -227, 790, -593, 527, -234, -221, -573, -247, -604, -405, -413, -234, 782, -242, -226, -387, 555, -394, 546, 786, 778, 527, -589, -580, -412, -581, -207, 554, 523, -256, 778, -217, -399, -245, -237, 800, -414, -251, 550, -210, -205, -414, 800};
    vector<int> possibleYForRed = {-604, 708, -609, -579, 707, -736, 151, -168, -912, -737, -598, -746, -599, -751, 130, 695, -939, -764, 715, 711, 162, -922, 135, -756, -587, -928, -774, -769, -169, -170, 144, 704, -172, -139, 150, 153, -912, -161, -937, -924, 704, -166, -942, 138, -608, 710, -153, -603};
    int R = 118;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2318407.413754967;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> possibleXForBlue = {309, 317, 564, 315, -558, -559, 181, -310, -550, 459, -569, 471, 559, -552, 312, -312, -556, 461, 177, -555, 224, 467, 174, 555, 555, -324, -564, 239, -551, -317, 187, -545, 317, 224, 183, 233, -314, 473, 184, 233, -547, -559, 551, 230, 552, 469, 315, -318};
    vector<int> possibleYForBlue = {-698, -690, 345, -676, -702, 682, -83, 197, -91, -688, -686, -909, 195, -636, -690, -81, -91, 673, 674, -675, -692, -91, -626, 678, 197, 675, 192, -914, -675, -632, 357, 200, -692, 347, 674, 352, -635, -685, 351, 345, -625, -899, -87, 191, -912, -898, -626, -908};
    vector<int> possibleXForRed = {474, 316, -318, -542, 240, 240, 174, -322, -551, -565, -543, 173, 559, 240, -551, -565, 468, -309, 177, 315, 316, -556, 313, -545, 551, 552, 460, 237, 563, 311, -568, -543, 557, 471, 469, -315, 172, -321, 183, -563, -566, 308, 185, 566, 227, 467, -322, 237};
    vector<int> possibleYForRed = {205, -676, 205, 201, -631, 203, 351, -78, -898, 349, -84, -686, 200, -906, 678, -685, 672, -78, 357, -82, 673, -622, 676, -678, -634, -898, -89, -702, 673, 345, -696, -624, 674, -911, -911, 346, 351, 201, -914, -638, -675, -701, -92, -634, -697, -679, -704, -697};
    int R = 108;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1978750.9824194526;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> possibleXForBlue = {751, -755, 37, -674, -746, 232, -578, -573, 223, 696, 223, 747, 225, -913, 750, -741, -568, 43, 41, -667, 695, -568, 224, 758, -916, 228, -916, -668, 691, 35, 757, -745, 691, 751, 680, -919, -917, -751, -664, -915, 45, -572, -575, -663, -664, -743, 692, 39};
    vector<int> possibleYForBlue = {254, -21, 235, 241, 245, -769, 918, 244, 246, -141, 251, -771, 918, 254, 797, 905, 907, -778, -282, -284, 797, -776, 806, 797, 249, -22, -138, -145, 804, -21, -274, 800, -138, -153, -11, -776, 906, 253, -284, 255, 911, 234, -776, -279, -279, -12, -144, -15};
    vector<int> possibleXForRed = {-914, -669, -581, -923, 225, -662, -751, 37, 223, 749, 234, -741, 748, 43, -579, 691, 685, -913, 747, -924, -674, -753, -752, -574, 225, 683, 755, 33, 40, 683, -749, 38, 745, 680, -675, 35, -566, 744, -572, -669, -577, 681, 224, 237, -926, -675, -745, -923};
    vector<int> possibleYForRed = {-138, 232, -15, 808, 807, 234, 242, -766, -779, -139, 254, 917, -773, -766, 244, -138, 798, 910, 241, -16, -26, -278, -139, 244, -276, 245, -13, 808, 256, 916, 910, 910, -776, 248, 907, -21, 811, -289, -286, 259, -289, -153, 233, -144, -764, 806, -13, -281};
    int R = 128;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2830951.9720028345;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> possibleXForBlue = {719, 724, -723, 424, 552, 412, 718, 565, 420, 425, 391, 718, 558, 618, 382, -325, 564, -331, 716, -324, -325, -340, 732, -727, -739, -731, -326, 620, 385, -726, 621, -736, 381, 550, 612, -734, 419, 420, 622, 393, -722, 560, -733, 621, 385, -732, -740, -727};
    vector<int> possibleYForBlue = {-63, -503, -875, -629, -68, 68, 741, 737, -435, -78, 58, 740, -514, -627, -93, -438, 743, -435, 733, -78, 735, -67, -511, -440, 71, -82, -433, -517, -71, -872, -75, -626, -881, -61, -617, -506, 69, -879, -78, -624, -618, -440, 74, -878, -82, 61, -515, -871};
    vector<int> possibleXForRed = {-740, 389, 566, 389, 413, -728, 559, -726, -339, 419, -733, 392, 620, 718, -331, 395, -328, -738, -740, 420, 427, 566, 726, 616, -736, 729, -327, 718, 619, 723, 389, -336, 615, 620, 393, 555, 421, 551, 552, -326, 726, -738, 622, -736, -729, 418, -728, -740};
    vector<int> possibleYForRed = {736, 59, -616, 67, -623, -627, -64, -76, 72, -436, -62, -81, -516, 70, -515, -430, -519, -874, -879, -435, 61, -876, -73, -619, -506, -432, -83, 731, -82, -507, -869, -74, 733, -429, -425, -90, -74, -79, -616, -505, 734, 59, -873, 744, -625, -878, 735, -91};
    int R = 114;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2245547.5969329122;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> possibleXForBlue = {480, 107, 512, 466, 170, 478, 110, 273, -951, -193, -196, 166, 157, 523, -959, 519, -960, -420, 270, 270, -190, -199, -417, 517, -956, 472, -957, 515, 275, 104, 102, 157, -409, -955, 107, 282, 472, -407, 286, 165, 97, -420, -198, 481, 525, -199, -416, 164};
    vector<int> possibleYForBlue = {-35, -218, -720, 491, -219, -238, -721, 377, -25, 908, -956, 484, -241, -945, 487, -35, -721, 378, 908, -947, 487, -240, -34, -214, -217, 377, -224, 372, -725, 496, 384, -240, -32, 909, -228, 368, -959, -249, -714, 905, -950, -956, -717, 496, -38, -248, 911, 914};
    vector<int> possibleXForRed = {513, -963, 481, 525, 517, -416, -200, 474, 274, 157, 111, 99, -413, 108, 160, -408, -197, -955, 156, -185, -421, 276, 524, -958, 509, 161, 161, 159, 104, 479, 274, 523, 277, 474, 475, -961, -419, -966, 99, 277, -411, -193, -966, 108, -189, -185, 472, 271};
    vector<int> possibleYForRed = {-720, 915, -948, -26, -958, -715, 485, -35, 912, 914, 909, -718, -228, -38, 375, 911, -247, -728, 494, -955, 383, 375, -246, -33, -953, -952, -958, -238, -728, 375, 484, -244, 497, -216, -250, -41, -726, -217, 379, -218, -227, -40, 490, 380, 494, 917, -244, -219};
    int R = 117;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2202062.4568200856;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> possibleXForBlue = {-783, 474, -41, -346, -43, -993, 466, -38, -977, 559, 564, -49, 577, 557, -53, 466, -50, 462, -988, -997, -47, 568, -41, -325, -343, -53, -51, -777, 575, -991, 466, -782, -49, -325, -994, -330, -328, -782, -775, -987, 456, -768, -771, 461, -51, 564, -38, -334, -34};
    vector<int> possibleYForBlue = {-341, -752, -748, -345, -830, -68, -820, -318, 850, 291, -62, 273, -314, -817, -359, -353, -741, 281, 855, -363, -733, -819, 286, 278, -56, -345, -57, -318, -353, -322, -826, 283, -48, -752, 837, 848, 859, -744, -311, -750, -811, 853, -53, -818, 842, -48, -325, -309, 289};
    vector<int> possibleXForRed = {568, -47, -982, -785, 465, 472, -330, -54, -57, -778, -777, 570, 467, 476, -331, -340, -35, -345, -777, 458, 567, -49, -344, -985, 562, 462, -338, -38, -56, -982, -46, -979, -985, -42, -338, -774, 578, -977, -997, -52, -40, -34, -45, 458, -770, 575, 565, -49, -781};
    vector<int> possibleYForRed = {-833, 271, -731, -742, -731, -323, -58, 287, -352, -53, -738, -357, -57, -47, -818, 841, 846, 288, -349, -744, -359, -324, 839, -815, -829, -54, -830, -315, -304, 858, -352, -66, -308, 843, -357, 288, -735, -356, -823, -823, -306, 841, 841, -309, 276, -63, -735, 285, 291};
    int R = 120;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2850052.85533666;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> possibleXForBlue = {-668, 275, -306, -308, 442, -222, 714, -206, -684, -202, -220, -679, 282, 436, 721, 708, 424, -307, 710, -192, -304, 718, -181, -177, 278, -319, 442, -204, -219, -178, -662, 431, -680, 428, -195, 273, 279, -664, 291, -320, 272, 708, 429, -215, -189, -195, -675, -311, 725};
    vector<int> possibleYForBlue = {-71, 412, 406, 731, 801, 809, -326, 735, -505, -333, -502, -336, -340, 419, -499, 409, -343, -496, -501, 585, -68, 750, -508, 601, 598, 806, 603, -508, -71, 606, -88, 745, -84, 418, 737, 801, 585, -344, -67, 814, 596, -71, 730, 809, 729, 415, 416, 809, -329};
    vector<int> possibleXForRed = {-188, 285, -209, 292, -680, -665, -314, 723, -192, 436, -320, 429, 435, -677, -190, -310, -197, -313, 725, -210, -303, -194, 716, 443, -215, -221, -198, -674, -219, 289, -682, 272, 289, -671, 715, 722, -221, 439, -183, -300, 444, 424, -665, -321, -209, 717, 285, 721, 275};
    vector<int> possibleYForRed = {-490, -69, -81, -345, 747, -497, 792, -501, 607, -495, 802, 428, -342, 733, 428, 594, 588, 422, -343, 741, 407, -343, 739, -505, -73, -338, 745, 406, -508, -76, 749, -337, -78, -67, 796, 601, -326, -71, 410, 420, 796, 809, 601, 596, 812, 732, 812, -501, 586};
    int R = 105;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2112799.5993554755;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> possibleXForBlue = {-683, -686, -215, 566, 853, 566, 607, 605, 936, -52, 936, -214, -231, -55, -45, 611, 839, 932, 843, -221, -688, 854, -233, -684, -702, 581, 591, 854, 565, -44, 613, -38, 934, -703, 935, -215, 611, 839, 569, -702, -220, 577, 848, 571, 922, -34, 598, 939, -34};
    vector<int> possibleYForBlue = {313, 340, 475, 335, -342, 353, 171, 470, -356, 352, 361, -348, 185, 313, -29, -33, -361, 308, -43, -354, -46, -345, -41, 469, 353, 303, 168, 340, 357, 184, 362, 167, 476, 314, 368, 352, -32, 353, 477, 460, 319, -348, 350, 308, 172, 352, -43, 184, 477};
    vector<int> possibleXForRed = {-39, 568, 920, 565, -697, 584, 854, -703, -692, 593, 578, -46, -215, 566, 582, 849, 933, -224, -699, 609, 599, 835, 924, -34, 593, 930, 848, 918, -215, -704, -37, -47, 585, 606, 600, 920, -231, -216, -686, -214, 839, -35, -221, -38, -703, 851, 611, 837, 918};
    vector<int> possibleYForRed = {169, 333, -351, 356, 352, 479, 337, 186, 363, -43, 186, 354, 461, 476, 316, 359, 189, 364, 354, -343, -43, 353, 461, -361, -38, -343, -38, -29, 349, -40, 321, 337, -358, 308, 458, 367, 171, -347, 317, 306, 174, 475, 305, 180, 468, 344, -41, -346, 313};
    int R = 94;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1498992.0851044483;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> possibleXForBlue = {757, -445, -787, 326, 366, 459, 337, -795, -618, 457, -438, 366, -625, 450, -615, 467, -451, 760, -439, 371, -440, 374, 744, 378, 377, 336, -783, 464, 747, -793, 752, 388, 454, 346, -606, -617, 336, -441, -609, -457, 762, -620, 469, 329, 346, -799, -780, -793, 755};
    vector<int> possibleYForBlue = {-842, -192, -837, 919, 920, -202, 906, -26, 233, -19, 418, -21, -187, 226, 416, -30, -858, 220, 903, -400, -844, -848, 224, -391, 217, -402, 404, 404, 920, -386, -194, -855, -399, 224, 226, -408, -32, -398, 415, -197, -201, -197, -854, 421, 905, 909, -32, 401, -17};
    vector<int> possibleXForRed = {-438, -797, -778, 465, 761, 754, 763, 759, 764, 379, 343, 332, -603, 335, 370, 343, 372, -442, 369, 751, 454, -622, 468, 461, -625, 377, -447, 763, 469, -780, 377, -617, -620, -435, -443, -793, -778, -608, 328, -453, 464, -441, 347, 341, 463, -608, -785, 369, -790};
    vector<int> possibleYForRed = {903, -856, 410, -199, 912, -401, -30, -198, -843, 224, 409, 401, -839, -22, -200, -24, -403, 910, -406, -387, -842, 222, 221, 231, -35, 911, -199, 411, 404, 224, 230, -400, -34, 404, 421, -22, -836, 230, -400, -193, -853, 924, 924, -207, 916, -28, -195, -397, -851};
    int R = 122;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2618530.043137707;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> possibleXForBlue = {304, 317, 94, -305, 742, -304, 193, 293, 195, 196, 176, 95, 193, 191, -543, 307, -561, -548, -308, -546, 104, 306, 193, -320, -299, -552, 296, 304, 86, 737, 322, 98, 749, 753, 94, 296, 307, 301, 291, 304, 749, 98, -560, -315, 753, -309, 288, 734, -548};
    vector<int> possibleYForBlue = {948, 14, -987, 535, 0, -989, -987, 590, -981, 11, 532, 969, 80, 85, -995, 582, 13, 68, 585, 594, 599, 85, -994, 10, -995, 601, 583, 544, 955, -7, 964, 9, -6, 70, 532, 549, 957, 65, 2, 7, 8, 952, 7, 2, 959, 84, 535, -6, 546};
    vector<int> possibleXForRed = {319, 86, 180, 741, 304, 189, 742, 100, -309, 198, -305, -558, 308, 321, 88, 101, 180, -548, 103, 180, -319, 297, 742, 752, 315, 198, 307, 312, 732, -562, 295, -298, -544, 105, -310, -546, 304, 733, 193, 314, 97, 313, 292, -544, 751, -301, -311, 299, -554};
    vector<int> possibleYForRed = {70, -982, 548, 535, 591, 602, -4, 1, 585, 547, 595, 969, -989, 961, 81, 538, 71, 76, 961, 69, 597, -4, 80, -987, 950, -993, 953, -6, -984, -7, 593, 5, 531, 967, 541, 0, -979, 11, 960, 547, 72, 11, 7, 13, -994, 10, 581, 7, 9};
    int R = 107;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2194053.751747922;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> possibleXForBlue = {391, 732, 395, -156, -581, -653, 332, 203, -127, 314, -483, -120, -159, 610, -953, -650, 251, 224, -623, -423, 539, -426, -154, -405, 462, 620, 459, 958, -159, 224, 617, -149, -127, 248, -153, -484, 331, 616, -405, -81, 203, 957, -115, -956, 312, -82, 727, -576, -627, 542};
    vector<int> possibleYForBlue = {122, -463, 595, -228, -664, 658, 761, 506, 786, 315, 656, -564, -865, -943, -551, -666, -874, -651, 799, 798, 128, -888, 791, 424, -478, -799, 750, -949, 500, 159, 311, -447, -467, -419, -547, -414, -235, -653, 743, -870, -868, 762, 423, 595, -566, -882, -444, -482, -795, 154};
    vector<int> possibleXForRed = {725, -151, -479, 541, 616, -125, 958, -117, 613, 332, -401, -408, -957, 466, 614, 727, -630, 465, 319, -582, -960, -630, -150, -425, 229, -80, -648, 545, -80, -148, 616, 205, 252, -124, 202, 393, -652, -484, -156, -573, 226, -156, 252, -430, -119, 313, 964, 328, 394, -151};
    vector<int> possibleYForRed = {420, -876, 598, 759, 154, 500, 314, 663, 599, -648, -227, 426, -657, -868, -414, 789, -882, -947, 742, -573, -554, 785, -229, -662, -868, 662, -485, 163, 127, 506, -547, 310, 763, -477, 802, -863, -803, -802, 795, -463, -420, -567, -663, -442, -887, -948, -466, 743, -441, 125};
    int R = 125;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2945243.112740431;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> possibleXForBlue = {-984, -979, 176, 181, -740, -497, 875, -553, -131, 108, 286, -165, 218, 912, -133, -496, 109, 175, 177, -572, 991, -166, -134, 294, -489, -548, 279, -43, 212, 627, 209, -40, 291, -134, 566, 989, 626, 303, 724, 219, -480, 285, 868, 570, 919, -568, 724, 298, 276, -742};
    vector<int> possibleYForBlue = {-907, -603, -571, -199, -606, 860, 149, -198, -830, 232, -955, 225, 438, 148, 59, 440, -949, 586, 199, 755, 200, -911, -199, -382, 750, -825, -757, -718, 177, 333, -566, 615, -201, -760, -377, -155, -619, 178, 860, 324, 580, 62, -151, 756, 750, -621, -386, -715, -390, 607};
    vector<int> possibleXForRed = {-131, -484, -39, 871, 626, 180, 570, 569, -979, 281, -736, 172, 723, -568, -131, -496, 220, 114, 914, 988, 213, -547, -739, 304, 720, -130, -553, 178, -42, -485, 177, 875, 207, -139, -495, -573, 911, 285, 107, 279, -170, 302, 274, 294, 986, 293, -171, 216, 623, -984};
    vector<int> possibleYForRed = {-384, 148, -952, 584, 756, -606, 58, -378, -566, 325, -712, 432, 329, 182, 579, 179, -625, 757, 232, -206, 60, -192, -710, -908, -153, 755, -760, -957, -611, 751, -764, 205, 437, 226, -200, -387, -906, -626, -196, 866, 204, -827, -829, -381, -570, 613, 148, 868, 615, -152};
    int R = 121;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2897751.6565961144;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> possibleXForBlue = {851, 556, 14, -686, 191, -570, 852, -791, -351, 839, -241, -791, -616, -31, 448, 723, 191, -31, -790, 365, -663, -234, 197, -356, 627, 622, 842, -280, 200, -686, -690, -688, -507, -617, -660, 360, -476, -491, 9, 584, 584, -475, -492, 723, -280, -503, -563, -787, 551, 448};
    vector<int> possibleYForBlue = {799, -909, -633, -522, -838, -136, -816, -272, -88, -768, 583, -88, 583, 800, 706, 835, -519, 375, -7, 799, -9, 705, -504, -287, -277, 375, 878, -959, 797, -141, -511, 878, 578, 841, 574, -629, 579, -63, -363, -58, 568, -765, -816, -958, -907, -371, -840, -282, 99, 93};
    vector<int> possibleXForRed = {-683, 719, 557, -500, -352, 625, -480, -475, -237, -685, -787, -685, -277, 448, 584, 366, 194, 198, -283, 587, -792, -490, -621, -492, 838, 14, -658, 552, -359, 628, -566, -682, 447, -662, -235, -28, 188, 10, 723, -567, -32, 360, -620, 852, -795, -499, 845, 187, 833, -790};
    vector<int> possibleYForRed = {836, -512, -370, 880, 379, -962, 802, -285, 99, 711, -95, -840, -629, 592, -910, -62, -764, 101, -367, 843, -291, -823, -16, -62, -959, 572, -277, -519, 707, -525, 574, -276, 799, -15, -135, -632, -762, 873, -907, 802, -818, -842, 378, 575, 801, 591, -92, 579, -509, -135};
    int R = 130;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3088228.775377753;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> possibleXForBlue = {-434, -127, 201, -120, -869, -701, 70, 63, -121, 593, -633, -997, -703, 312, -440, 723, 619, 326, 801, 309, 615, -441, -716, -71, -694, 712, -64, 723, -904, -969, -718, -966, 802, -901, -715, -868, -832, -633, -835, -434, 489, 710, 325, -990, -131, -699, 487, 589, -718, 203};
    vector<int> possibleYForBlue = {-441, -348, -683, 115, 595, -869, -350, 534, -348, -175, 463, -388, 923, 507, 461, -352, 28, -513, 494, 600, -193, -424, -436, 532, -392, 168, 32, 600, 165, 649, 498, -195, 658, -513, 273, -913, -691, -868, 508, -917, 477, 115, -634, 591, 917, 272, -425, -632, 478, -176};
    vector<int> possibleXForRed = {-70, 327, 312, -709, 65, -998, -998, -725, 330, -704, 310, 709, -122, -131, 203, 586, -966, -870, 200, 492, 804, 616, 721, -630, 710, -713, -72, -714, -719, -839, -832, -132, -638, -697, -448, -437, -899, -970, -445, -696, -121, 618, 589, 490, 722, -864, -901, 70, -431, 802};
    vector<int> possibleYForRed = {481, -516, -865, 123, -687, 535, -516, -638, -871, -640, 595, 591, 491, 274, 527, -181, 121, -437, -189, 461, -353, -911, -194, 35, -690, -345, 481, -424, 656, 496, 163, -387, -427, 592, -348, -176, 503, 279, -441, 29, 919, 163, -910, -393, 916, 503, -348, 459, 602, 649};
    int R = 127;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3040244.8745849864;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> possibleXForBlue = {891, -470, -264, -576, -118, -303, 896, -303, 892, -648, -652, -263, 292, -523, -116, 279, -470, -668, -659, -259, -523, -307, -35, -668, -668, -28, -573, -746, -29, -118, 885, -748, -517, -572, 562, 570, -743, 284, 895, 565, 275, 890, -473, 295, 279};
    vector<int> possibleYForBlue = {91, -316, -154, 311, 315, 175, 311, 490, 63, -562, 45, 93, 375, -153, -554, 217, -4, 377, 224, -319, -704, 50, 382, 480, 72, 176, -698, 696, 478, -557, -4, 222, 178, 41, -312, 94, -153, 395, 689, 386, 688, 396, -706, 71, -13};
    vector<int> possibleXForRed = {-518, -258, -575, -749, 288, -657, -651, -117, -519, -573, -749, 295, -665, 894, 292, 892, 889, -118, 281, 282, -117, -481, -35, -481, -33, 567, 562, -519, -315, 892, 894, -649, -23, -309, -308, -579, -658, -258, -473, 898, -255, 274, -661, -753, 569};
    vector<int> possibleYForRed = {386, 488, 694, 375, -155, 312, 175, -316, 383, -12, 388, 64, 63, -702, -561, 70, 488, 43, -704, 395, -156, -150, -312, 176, -554, 176, 688, 308, 313, -316, 100, 217, 39, -3, -565, 486, 215, -13, 99, -698, 219, 381, 687, 46, 94};
    int R = 102;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1895737.5381409961;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> possibleXForBlue = {-861, -508, 57, -476, 935, 67, 221, -470, 376, 220, -509, 946, -203, -429, -869, 354, 225, 367, 928, 353, 936, 66, 74, 354, -865, -519, -880, -424, 944, 63, 783, 59, 375, -195, -884, 787, -199, -429, 930, 778, 938, 933, -891, 925, -474};
    vector<int> possibleYForBlue = {-727, 639, 487, -232, 637, 58, 508, -585, -602, 679, -586, -683, 100, -581, -841, -960, -687, 636, 51, -735, 505, 641, -847, -600, 673, 513, -686, -232, -958, -962, 480, -725, 374, -607, 630, 639, 485, 372, 668, 377, 100, -842, 98, -236, 59};
    vector<int> possibleXForRed = {785, -426, -202, -890, 65, -467, 68, 374, -871, 219, 74, -201, 775, 224, 357, 75, 935, -865, -429, -869, -513, -468, 938, 220, -204, 920, -427, 945, 936, 357, -886, 65, 366, 783, 369, 359, 942, -512, 921, -471, 72, 935, 922, -888, -514};
    vector<int> possibleYForRed = {370, -736, 508, -583, 634, 673, -582, -243, 100, 639, 642, 504, -679, 640, 58, 630, -844, 487, 109, 482, 487, -951, -730, -685, -602, -679, -577, -242, -839, -609, 382, -239, 640, 674, -734, 511, -953, 57, -956, 107, 52, 371, 678, -610, -845};
    int R = 136;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3253986.2723646215;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> possibleXForBlue = {361, 987, 786, 916, 371, -871, -869, 370, 142, -427, -196, -892, -244, -937, -990, -895, 788, 137, -939, -893, 303, -932, -986, 988, 912, -899, -424, 791, -235, 302, -990, 977, 851, -238, -200, -193, 303, 915, -904, 839, 848, -431, -874, -896, 145};
    vector<int> possibleYForBlue = {-677, -181, -280, 422, -678, 292, -187, 571, 570, 287, 424, 98, -871, 288, -979, 567, -357, -980, -988, -875, -80, -72, -231, -334, -235, -324, 419, 104, -357, -288, -284, 417, -240, -870, -671, -875, -357, -71, 98, -185, -322, -875, -872, 421, 423};
    vector<int> possibleXForRed = {305, -204, 850, -901, 360, 144, 360, -233, -197, 144, 912, 368, -898, 302, 851, -895, 840, -903, 979, 784, 307, -890, -425, -237, -941, 142, -868, -939, -877, -194, 916, -429, 982, -433, 786, 984, -241, -899, 793, -985, 923, -942, -873, -984, -991};
    vector<int> possibleYForRed = {-872, -181, 98, -880, 413, -79, 559, -874, 419, -288, 289, 561, -679, 423, -979, 98, -354, -236, -277, -333, -328, -184, 285, -75, -283, -70, -879, -358, -986, 563, -976, 418, -238, -239, -879, -678, 417, -188, -323, 104, -880, 284, -669, -354, 416};
    int R = 137;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3419944.045883156;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> possibleXForBlue = {-915, -704, -751, -753, -556, -314, -761, -554, -333, 568, -417, 357, 360, -499, -759, -306, -564, 235, -711, -332, -556, -492, -316, 355, -417, -754, 350, -911, 240, -556, -553, -670, 561, 231, 557, -668, -912, -667, 356, -749, -709, 361, -408, -498, -339};
    vector<int> possibleYForBlue = {237, 786, 903, 239, -361, -679, 778, -635, -940, 358, -759, 845, 782, -664, 893, 781, 356, -103, -654, 901, 245, 782, 3, -756, -202, -98, -636, 854, 846, -367, 775, -97, -677, 362, -935, -939, -631, -200, 13, -655, -367, 5, -758, -200, -677};
    vector<int> possibleXForRed = {354, -707, 349, 238, -754, 360, -546, 353, 565, -747, -337, -553, -753, -318, -708, -413, -493, -408, -315, -496, -915, -754, 233, -764, -313, -667, -670, 358, -417, -552, -334, -913, -555, -500, 233, -906, -700, 349, -551, -759, -672, 564, 559, -562, -331};
    vector<int> possibleYForRed = {786, -627, 902, 785, 3, -680, -94, -938, 784, -766, -93, 12, -94, 352, -363, 848, -361, 248, -677, 356, -627, -195, -652, 905, -204, -654, -655, -364, 15, -200, -935, -671, 845, 775, -755, 782, 238, 246, 899, 855, 362, 784, -943, -759, -629};
    int R = 121;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2391795.0181428245;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> possibleXForBlue = {811, 282, -595, -603, 532, 547, 392, -566, 814, -608, -826, 145, -593, 395, 301, -556, -601, -563, 951, -599, 542, 287, 360, 952, 390, 541, -565, 813, 357, -826, 533, -605, -561, -596, 147, -595, 304, 300, -556, 538, -819, 355, 145, 941, 289};
    vector<int> possibleYForBlue = {-801, 96, 364, -359, 589, -619, -612, -607, -776, -252, -255, 76, -359, 372, -71, -139, -185, 616, -70, 373, 380, -607, 95, -619, 96, -72, -805, -140, 587, 376, 369, 71, -616, -784, -777, -247, -799, 617, -193, 596, -193, 615, -138, 68, -352};
    vector<int> possibleXForRed = {-572, 306, -596, -603, 390, 814, -831, -830, -594, 279, 358, 543, 549, 385, 542, 156, 950, 150, -566, 532, -560, 950, 355, -827, 551, -568, 300, -594, -596, 389, 358, 154, 279, 538, -612, 310, 949, -591, -556, -604, -601, 812, 817, -566, 282};
    vector<int> possibleYForRed = {-250, -614, -70, -618, -142, 98, -139, 371, 72, 375, -610, -610, -356, 596, -63, 590, 369, 75, 97, 622, -772, -244, -806, -776, 369, -779, 623, -356, 624, 593, 373, -194, 93, -801, -69, 73, -608, -189, -143, -805, -245, 365, -617, -187, -354};
    int R = 115;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2077378.1421862505;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> possibleXForBlue = {596, 558, -168, -904, -577, 401, 608, 375, -179, 363, -87, 519, -54, -116, -588, 545, -63, -570, -596, -953, -954, -920, -37, -249, -70, -37, -945, 627, -538, 585, 422, -155, -69, -530, -525, -42, -572, 373, 521, -55, 543, -534, -311, 547, -305, -297, -26, -182, -530, -269};
    vector<int> possibleYForBlue = {-828, -188, -829, -658, 475, 857, -188, -979, 613, -777, -782, 470, -659, -221, -775, 846, -665, -967, -384, -222, -372, -232, 618, -382, 616, 607, -184, -665, -831, -773, -222, -223, -980, -379, -179, 606, 461, 851, 472, -972, 467, -831, -658, -817, -374, -186, -784, 842, 844, -972};
    vector<int> possibleXForRed = {431, -938, -11, -43, -79, -545, 364, -589, -63, -973, 523, -50, 421, -177, 367, 566, -588, -959, -80, -289, -297, 500, -545, -132, -974, 556, -42, -34, -588, -567, -564, -153, 365, 598, 598, 493, -904, -314, -157, -582, -293, -184, 531, -525, -20, 593, -78, 544, -272, -573};
    vector<int> possibleYForRed = {477, 467, -662, -779, -816, -968, -664, -181, 461, -383, -374, -978, -185, 855, -656, -233, -220, 843, -779, 857, 472, 610, -970, -226, -186, -384, -968, 612, -368, -781, -824, -822, 619, -657, -227, -819, -784, 853, -231, 621, -182, -658, -783, -967, -370, -192, 466, 848, 619, -821};
    int R = 123;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2756691.004857279;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> possibleXForBlue = {-344, -10, 947, -333, 211, 612, 60, 41, 607, 885, 610, 461, -20, -69, -324, 229, 224, -285, -318, 959, -67, 266, 939, 937, 931, 454, -314, -369, 79, 455, -329, 465, 625, -369, -317, 59, 642, -352, -298, 901, 449, 895, -38, 272, -264, -302, 928, 95, -395, 870};
    vector<int> possibleYForBlue = {-843, 78, 463, 373, -828, 454, 775, 89, 337, 142, 135, 344, 781, 380, 510, 781, 75, 464, -408, 500, 507, -327, 515, 137, -326, 374, 463, 128, -829, 346, 379, -410, 775, 81, 341, 499, -329, 74, 382, 342, -839, -339, -340, 131, 459, -833, 774, -407, -405, -405};
    vector<int> possibleXForRed = {638, -4, -285, 83, 248, -331, -11, 405, -32, 971, 456, 210, -382, 894, -313, 648, 914, 938, -375, 931, 247, 446, -297, 411, -49, -276, 927, 76, -310, -352, 28, -306, 980, -264, 231, 596, 28, -366, 252, 611, 40, -324, 914, 935, -346, 463, -16, -316, 615, 933};
    vector<int> possibleYForRed = {129, 779, 771, 86, 136, 385, 502, -842, 372, 460, 514, 780, 338, 339, 377, -328, 503, 83, 345, 777, 127, -338, 88, 88, 456, 451, 513, 379, 506, -840, 129, 78, -334, -413, -833, 461, -840, 348, 338, -335, -408, -416, -413, -842, 771, 449, -414, 372, -338, 135};
    int R = 104;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1902850.1039087235;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> possibleXForBlue = {325, 993, 410, -132, 947, 140, -872, -878, -117, -120, 786, 405, 695, -522, 140, 384, 180, 330, 991, 398, 733, 147, 829, -490, 358, -919, -500, 721, -119, 335, 850, -454, -470, 202, 980, 949, 984, -927, 954, 832, 969, -153, 341, 672, 385, 668, -907, 929, 837, 949};
    vector<int> possibleYForBlue = {550, 549, -814, 520, 884, 882, 346, -807, -799, 884, 335, 559, 874, 514, -21, 546, 552, 528, -328, -321, 0, 520, -16, 521, 558, -15, -811, -26, -6, -165, 340, -323, 872, -164, -14, 557, -171, -163, -11, 336, -7, 546, 346, 550, -159, -3, -807, -319, -312, 546};
    vector<int> possibleXForRed = {-506, 785, 943, 179, -482, 685, -894, -504, 798, -128, -90, 386, 949, 204, -109, 850, -111, 978, 143, 690, 374, 372, -85, 366, 362, 943, -512, 726, 353, 822, 958, 151, -481, 928, 983, -917, 160, 375, -905, 965, 719, 375, -884, 828, 376, 982, -901, 975, 346, 677};
    vector<int> possibleYForRed = {-3, 337, -169, 548, -6, 881, 548, 555, 525, 545, -13, -318, 338, -25, -314, -165, 338, 519, 881, 518, -811, -161, 885, -170, -20, 559, 882, -800, 550, -799, -174, -325, -808, -15, -25, -1, -322, 343, 547, 545, 512, -808, -312, 541, 876, 513, -17, -15, 553, 349};
    int R = 120;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2940530.7237600465;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> possibleXForBlue = {-330, -829, -415, -349, 718, -469, -425, -483, -638, -356, -373, -780, -630, -761, 706, 694, -677, -819, -440, -326, -818, -620, -446, -721, -707, -366, -688, -377, 736, -655, -328, -827, -818, -619, -620, -744, -666, -349, -674, -838, -438, -675, -669, -508, -862, 707, -416, -361, -774, -331};
    vector<int> possibleYForBlue = {-831, 823, 306, 819, 185, 821, 129, 111, 193, 119, 118, -830, 437, -825, 523, 309, 126, 686, 685, 532, 522, 113, 128, -143, 680, 440, 831, 684, -833, 109, 127, 294, 433, 131, 187, 302, 530, 447, -151, 186, 185, 433, 824, -156, -148, 295, -826, -154, 676, 530};
    vector<int> possibleXForRed = {709, -336, -659, -652, -676, -646, 735, -786, -687, -785, -638, 686, -304, -322, 721, -658, -350, -416, -662, -355, 741, -855, -378, -345, -471, -826, -623, -770, -839, -812, -470, -706, -391, -708, -853, -501, -667, -429, -839, -401, -367, -383, -453, -369, -728, -740, -308, -506, -800, -641};
    vector<int> possibleYForRed = {-154, 433, -829, 448, -150, -824, -830, 140, 300, 138, -150, 532, 443, 191, 129, 529, 818, 683, -143, 434, 445, 141, 828, 677, 179, 307, 305, 118, 828, 681, 295, 828, -836, 817, 688, 524, 188, 187, 119, -144, 179, 533, 294, -823, 111, 116, 688, 136, 530, 119};
    int R = 89;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1293996.881272407;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> possibleXForBlue = {86, 50, 895, 48, 906, 69, 894, 59, 42, 921, 954, 59, 88, 945, 91, 100, 960, 41, 97, 915, 932, 960, 962, 906, 57, 921, 95, 99, 75, 38, 944, 952, 937, 59, 40, 913, 68, 87, 938, 916, 946, 939, 943, 939, 932, 42, 83, 52, 93, 957};
    vector<int> possibleYForBlue = {-480, -456, -509, -481, -482, -482, -527, -512, -475, -497, -511, -457, -505, -459, -523, -517, -517, -501, -482, -498, -520, -480, -524, -474, -456, -516, -502, -506, -517, -476, -468, -505, -470, -469, -525, -450, -523, -468, -457, -520, -449, -475, -468, -499, -524, -466, -525, -465, -473, -510};
    vector<int> possibleXForRed = {957, 938, 50, 103, 953, 87, 899, 918, 108, 923, 96, 960, 906, 96, 936, 72, 961, 931, 945, 100, 77, 891, 54, 961, 50, 931, 70, 907, 949, 38, 38, 59, 925, 71, 96, 922, 92, 57, 60, 936, 903, 931, 56, 956, 40, 951, 909, 83, 89, 92};
    vector<int> possibleYForRed = {-465, -508, -465, -466, -474, -479, -451, -481, -463, -525, -453, -467, -480, -517, -516, -498, -474, -457, -511, -504, -503, -470, -479, -459, -526, -522, -510, -464, -529, -458, -525, -476, -528, -449, -477, -513, -504, -516, -510, -510, -521, -502, -449, -474, -480, -500, -466, -527, -514, -524};
    int R = 56;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 492601.7280828795;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> possibleXForBlue = {-729, 30, 50, -756, -728, -741, -733, -761, -706, -759, 41, 40, -2, -728, -765, 35, -734, -733, -709, -731, 50, 42, -766, -736, -735, 47, 57, 7, 49, -753, -773, -746, -2, 24, 9, 55, -732, 21, -750, 22, 15, 56, -722, 29, 38, 60, 1, 51, -711, -759};
    vector<int> possibleYForBlue = {628, 643, 641, 639, 641, 637, 623, 285, 303, 290, 308, 637, 630, 282, 290, 307, 636, 625, 633, 292, 636, 631, 631, 624, 278, 302, 289, 635, 637, 292, 282, 630, 297, 289, 301, 289, 615, 287, 624, 309, 288, 289, 282, 642, 287, 627, 285, 646, 626, 282};
    vector<int> possibleXForRed = {-728, 68, -718, 1, -715, -763, 39, -739, -710, -724, 61, 28, -770, -763, 65, -748, -769, -761, -752, -704, 50, 11, 57, -735, 12, 9, -767, 57, 32, -1, -718, 51, 43, 20, -717, 51, 49, -767, 3, -762, -740, -740, 8, -774, -753, 42, 28, 23, -762, 0};
    vector<int> possibleYForRed = {288, 614, 298, 620, 625, 642, 304, 638, 279, 634, 285, 293, 639, 279, 624, 623, 298, 288, 637, 283, 277, 292, 282, 310, 294, 288, 645, 621, 642, 621, 278, 278, 286, 280, 643, 614, 624, 294, 615, 638, 635, 627, 296, 309, 616, 645, 281, 278, 628, 631};
    int R = 62;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 603814.1080199583;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> possibleXForBlue = {170, 171, -830, -801, 130, 113, 140, 108, 158, 150, -854, 115, -850, 129, 136, 132, -833, 171, -826, 101, 140, -857, -838, -797, -812, -839, -794, 123, 144, -845, -811, -800, -844, -857, -818, 125, 116, -821, 131, -827, 170, 150, -797, 143, -841, -830, -799, 158, -815, 168};
    vector<int> possibleYForBlue = {850, 865, 393, 368, 371, 848, 874, 878, 874, 386, 873, 365, 382, 856, 846, 373, 869, 849, 388, 850, 391, 846, 362, 853, 367, 878, 859, 368, 363, 855, 382, 874, 872, 380, 386, 371, 855, 876, 862, 867, 386, 371, 394, 381, 371, 366, 875, 391, 865, 374};
    vector<int> possibleXForRed = {100, 118, 151, -856, -825, 168, 115, -853, -815, -826, 166, 120, -827, 163, 115, 120, 103, -806, 114, 118, 136, 131, 170, 111, -835, 168, -810, -858, -800, -793, 169, -805, -804, -787, -856, 105, -805, -819, 158, 113, -854, 122, -841, 123, -787, -803, -837, 134, -841, -792};
    vector<int> possibleYForRed = {873, 849, 362, 393, 384, 393, 366, 395, 365, 876, 855, 377, 368, 388, 392, 392, 858, 861, 862, 365, 851, 363, 389, 873, 875, 848, 850, 859, 371, 869, 853, 388, 368, 375, 872, 875, 377, 846, 380, 390, 858, 875, 872, 857, 383, 877, 866, 864, 362, 393};
    int R = 79;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1019547.3470548028;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> possibleXForBlue = {477, 516, 534, 517, 719, 524, 725, 743, 526, 521, 489, 694, 677, 472, 679, 487, 706, 473, 737, 509, 509, 735, 515, 531, 484, 730, 503, 493, 686, 512, 676, 734, 739, 507, 675, 527, 722, 503, 714, 685, 679, 713, 688, 706, 510, 487, 737, 510, 714, 735};
    vector<int> possibleYForBlue = {157, 389, 400, 134, 384, 375, 387, 132, 380, 367, 127, 135, 393, 382, 383, 400, 390, 125, 145, 128, 390, 137, 138, 148, 373, 381, 395, 136, 376, 132, 128, 398, 154, 148, 151, 128, 370, 134, 387, 141, 369, 378, 369, 146, 149, 393, 138, 380, 151, 136};
    vector<int> possibleXForRed = {722, 485, 684, 471, 504, 706, 501, 720, 722, 735, 694, 704, 720, 732, 482, 480, 478, 493, 671, 529, 505, 722, 505, 740, 525, 682, 687, 478, 508, 691, 705, 502, 717, 682, 484, 710, 500, 508, 678, 703, 488, 523, 528, 521, 674, 495, 477, 707, 474, 706};
    vector<int> possibleYForRed = {134, 373, 390, 370, 152, 384, 126, 376, 140, 140, 126, 376, 128, 148, 145, 140, 146, 137, 396, 140, 371, 147, 140, 155, 391, 138, 398, 149, 380, 152, 387, 371, 383, 384, 154, 388, 387, 133, 375, 388, 383, 390, 367, 389, 147, 397, 134, 140, 380, 137};
    int R = 25;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 102101.76124166828;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> possibleXForBlue = {-929, -911, -871, -900, -865, -416, -415, -874, -866, -864, -460, -450, -391, -448, -450, -915, -412, -396, -445, -913, -872, -930, -394, -922, -889, -893, -456, -917, -407, -862, -877, -426, -432, -909, -399, -910, -401, -452, -879, -454, -437, -392, -878, -395, -415, -891, -426, -884, -880, -434};
    vector<int> possibleYForBlue = {193, -948, 205, -946, 204, 211, 193, 181, 209, -948, 201, -964, 208, -962, 198, -952, -965, -975, 191, -978, -948, -975, -963, 207, 199, -949, -977, 211, -973, -961, 189, 209, 203, 183, 178, -972, -962, -959, 181, 183, 209, -970, -970, 206, -961, -965, 203, 204, -952, -975};
    vector<int> possibleXForRed = {-427, -445, -869, -430, -443, -408, -918, -863, -416, -924, -411, -865, -873, -425, -446, -429, -399, -427, -873, -905, -451, -438, -879, -876, -918, -435, -917, -926, -904, -885, -391, -414, -420, -451, -912, -390, -391, -913, -874, -429, -862, -433, -896, -905, -911, -405, -918, -439, -886, -863};
    vector<int> possibleYForRed = {180, 182, -974, -958, 191, 178, 187, -949, 209, 181, 204, -973, -963, 181, -973, 210, 187, 188, 178, -957, -965, -951, -961, 188, -958, -954, -951, 202, 181, -951, 197, -969, 186, -960, -969, -960, -950, -952, 178, 182, -968, 181, -971, -963, 191, -972, 204, 196, 206, -952};
    int R = 90;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1374132.6266801755;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> possibleXForBlue = {613, -788, 367, 358, 871, -934, -922, -792, 884, 614, 834, 324, 355, 336, 883, 833, -927, 361, 330, 877, 615, 334, -791, 330, 328, 874, 356, -794, 883, 835, 367, 609, 611, -919, 824, 367, 613, 828, 886, 615, -784, 833, 324, -922, 827, -935, -776, -789, -930};
    vector<int> possibleYForBlue = {-229, -180, -704, -692, 643, 46, -169, -168, 175, -702, -237, -691, -703, 643, 639, -223, 178, -688, -234, -171, 332, 54, 320, 189, -166, 173, -696, 324, 632, -228, 643, 46, 187, 181, 322, 178, 326, -239, 631, -222, 55, -165, 643, 54, 49, -184, 43, 320, 327};
    vector<int> possibleXForRed = {336, 874, 354, -783, -928, 355, 608, 884, -936, 610, 607, 333, 338, 880, 830, 612, 613, -925, 840, 880, -933, 338, 333, 360, 337, 824, -788, 622, -781, 842, -776, 881, -783, 828, 332, 615, 869, 873, -933, 363, 826, -921, -931, 363, -777, -791, 356, 361, 842};
    vector<int> possibleYForRed = {324, 626, 325, 58, 629, -694, -703, -165, -240, 320, 54, 183, 177, 334, 57, 183, 638, -689, 630, -171, -695, -238, 330, 46, -235, -224, -234, -702, 50, -179, -166, -689, -174, -233, -169, 323, -221, 179, -692, 633, 171, 640, 174, -184, 332, 181, 42, 634, 56};
    int R = 121;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2873902.255966387;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> possibleXForBlue = {-285, -397, 424, -803, -816, -390, 436, -800, 433, 943, 527, -267, -202, 543, -269, -194, -388, 422, -395, 422, -811, -382, -800, -280, 543, 531, -191, 424, -270, 933, 426, -188, -268, 538, -276, -193, -799, -187, 941, 933, -811, -388, 932, -390, 929, 538, 927, -199, 546};
    vector<int> possibleYForBlue = {-479, 462, -476, -745, -464, 456, -465, -95, 126, -474, -114, 529, -730, 519, 515, -729, -734, -728, 140, 530, 525, -474, 458, 136, -478, -470, -109, -104, -104, 136, 460, -738, -474, 129, -473, 474, 138, 512, -477, 514, 459, -472, -109, -474, -746, 459, -108, 129, -464};
    vector<int> possibleXForRed = {937, -191, -400, -812, 527, -812, -193, -278, 437, 540, -806, 935, 939, -285, -393, -392, -813, 429, 542, 536, -816, -401, 944, -191, -276, -799, -397, -191, 435, -198, -279, 540, -392, 435, -185, 425, -198, 943, 931, 425, -281, -278, 533, 537, -268, -815, -389, 430, 938};
    vector<int> possibleYForRed = {-477, 140, -742, -735, -114, 138, 513, 461, -465, -479, 461, 522, -100, -475, 461, -472, -100, 520, 527, 464, -740, 124, -470, -112, -111, 457, -467, 127, -737, -462, -467, 528, 462, 459, -98, -736, -474, -746, 520, 513, 126, -479, -106, -476, -465, 140, -729, -480, 133};
    int R = 115;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2451306.207779776;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> possibleXForBlue = {-419, -406, -806, -301, -409, -795, -133, 692, 705, 307, -801, 729, -800, 312, -299, -810, -298, 313, -419, -794, -298, -135, -421, -405, 300, 732, 694, 738, 707, 297, -142, 726, 695, 710, -294, -416, -806, 307, -150, 705, -300, -136, 743, -294, 738, -134, 725, -133, 312};
    vector<int> possibleYForBlue = {-240, -242, 824, 96, 835, 83, 82, 849, -248, 965, 835, 826, -233, 95, -861, 822, 830, -247, -862, 964, -234, 834, -869, -855, 851, 972, 861, -446, -862, -437, -246, -438, 983, -448, 854, -436, 860, 83, 864, -871, -438, -870, 978, 89, 83, -430, 978, 856, 980};
    vector<int> possibleXForRed = {-148, -420, 732, 732, -811, -141, -806, 734, -302, 700, -291, 704, 730, -408, 737, -142, -135, -418, -407, 698, 696, -803, 305, -794, 728, 307, 313, 696, -293, 312, 313, -810, -305, -291, -144, -131, -298, 312, -137, 727, -302, -406, -405, 693, -407, 301, -804, 705, -811};
    vector<int> possibleYForRed = {856, 823, -856, 849, -240, -858, 859, 821, -437, 973, -243, 965, -445, -449, 82, 982, 853, -243, 95, -234, -854, -872, -437, -872, 982, -856, -240, -862, 823, 93, -444, 85, -433, 966, 81, 820, -436, -249, 971, 83, 854, 826, -248, 969, 857, 863, 94, 827, 829};
    int R = 136;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3602627.6586894025;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> possibleXForBlue = {254, 245, -838, -548, -847, -613, -599, -846, -533, -539, 497, 497, 258, 245, -850, -527, -536, -600, -604, 730, 251, 731, 252, 488, 737, 497, 491, 724, -533, 487, -602, -526, 725, -534, -542, -844, -609, -523, -850, -834, -542, 729, -538, 498, -543, 737, -531, 257, -616};
    vector<int> possibleYForBlue = {723, 764, 756, 739, 397, 857, 735, 905, 932, 923, 918, 943, 395, 752, 734, 860, 851, 387, 915, -647, 864, -647, 915, 394, 854, 944, 854, 935, -649, -646, 740, 390, 917, -659, -655, 726, 918, 757, 384, 938, -651, 396, 940, 765, 731, 754, 850, 759, 926};
    vector<int> possibleXForRed = {-523, -615, -531, 721, -549, 494, -538, 498, -833, 727, -538, 486, -536, 250, -846, -617, -599, -615, 728, -615, 245, -529, 496, -544, -847, 246, -549, -841, -543, -541, 735, -537, 253, 489, 726, 261, -526, 736, 484, -610, 251, 491, -838, 724, -849, -838, 262, -600, -534};
    vector<int> possibleYForRed = {856, 382, 767, 909, 730, 729, 399, 853, 392, 735, 764, 905, 917, 770, 756, 938, 866, 761, 390, 725, 934, 935, 756, 915, 860, 924, -660, 908, 858, 934, 724, -664, -664, -647, 905, 934, 848, 734, 941, 864, -648, 400, 732, 932, 400, 388, 766, -652, -660};
    int R = 116;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2282756.62032203;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> possibleXForBlue = {-544, -536, -250, 514, -535, 276, 666, -820, 660, 505, -691, -540, 509, 511, 281, -834, 291, -699, 293, -246, -835, -244, -828, 282, -825, -697, 664, -539, -537, -824, 281, 503, 514, -243, 659, -687, -528, -243, -235, 658, 279, -688, 658, -838, -685, -243, -687, 516, 666};
    vector<int> possibleYForBlue = {187, 554, 542, 183, 932, 924, 701, 442, 544, 758, -800, 701, 546, 197, -786, 199, 445, 933, 928, -799, -797, 444, 763, 764, 923, 437, -800, 749, 430, 438, 183, 553, 767, 754, 186, 714, 698, 542, 938, 184, 761, 712, -784, 440, 711, -787, 931, 554, 714};
    vector<int> possibleXForRed = {-824, 649, 288, -832, -822, 279, -825, -249, -235, -691, 279, -545, 508, -251, 658, -539, 659, -234, 668, 283, 505, -834, -686, -688, -681, -821, 518, 293, -680, 282, -546, 666, 511, -535, -693, 293, -530, -821, 517, -234, 507, -537, -685, -541, -253, 655, 653, 515, -246};
    vector<int> possibleYForRed = {555, 545, 939, 546, 187, 449, 757, -795, 758, -800, 547, 704, -796, 715, 766, -789, 546, 441, 194, 714, 936, 712, 755, 760, -797, -794, 202, 935, 703, 710, 192, 922, 430, 447, 186, 767, 431, -800, 444, 446, 715, 198, 760, 932, 185, 545, 557, 935, 927};
    int R = 118;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2537125.094297888;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> possibleXForBlue = {-805, 444, -57, 653, -580};
    vector<int> possibleYForBlue = {793, -88, -14, -786, -722};
    vector<int> possibleXForRed = {105, 250};
    vector<int> possibleYForRed = {890, 9};
    int R = 457;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3936710.904657448;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> possibleXForBlue = {1, 1};
    vector<int> possibleYForBlue = {-3, 0};
    vector<int> possibleXForRed = {2};
    vector<int> possibleYForRed = {-2};
    int R = 3;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 56.548667764616276;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> possibleXForBlue = {150, -374, 641, 647, 145, -110, -114, -379, 160, -388, -840, 125, -376, 158, -111, 120, 595, -106, -834, 653, -106, 146, -387, 141, 120, -112, 150, 595, 648, 641, -827, -107, 587, 107, -833, -378, 111, 604, 117, 597, 649, -384, 601, 585, -824, 110, 639, -830, -838};
    vector<int> possibleYForBlue = {136, 359, 130, -180, 826, 826, 481, 905, 815, 912, 484, 363, -167, -175, 498, -304, 491, -167, 480, 916, -296, 140, 490, 367, -301, -291, 825, -165, 133, 358, 830, -297, 361, -175, 820, 488, 912, 134, 825, -171, -297, 906, -294, 906, 901, 367, 361, 132, 129};
    vector<int> possibleXForRed = {-120, -831, 638, -831, 157, -119, -386, 585, -839, 108, 126, -389, 120, 641, 644, 593, 119, 590, -390, -120, -826, 149, 148, 642, 586, -111, 148, -387};
    vector<int> possibleYForRed = {367, -298, -307, 140, 908, 491, -308, 826, 900, 123, -298, 822, 819, -165, 479, -171, 371, -170, -169, 498, 482, 368, 124, 815, 901, 912, 134, 365};
    int R = 102;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1764997.0182692031;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> possibleXForBlue = {18, 705, -594, 692, 45, 13, -84, 163, 697, 155, -588, 39, 41, 67, 56, 47, 70, 64, 148, 703, -584, 703, 13, -89, 158, 693, 54, -88, -96, 10, -85, 72, 157, 46, -592, -578, 692, 19, 50, 48, 148, -86, -586, 22, -93, 66, 10, 149, -594};
    vector<int> possibleYForBlue = {-785, -194, 821, 822, -685, -250, -235, 48, 828, -675, -181, -678, -784, -242, -788, -790, -681, -189, 47, -188, 825, 822, -236, -559, -178, -237, -680, 52, -681, -552, -557, 827, -788, -685, -555, 46, -782, -786, 46, 40, -561, -243, -249, 39, -182, 817, -551, -179, -554};
    vector<int> possibleXForRed = {-98, 160, 45, 58, -93, -86, 63, 20, -580, 54, -579, -578, -83, 22, 163, 16, 41, 708, 60, 39, 695, 69, 11, 709, -587, 159, 165, 701};
    vector<int> possibleYForRed = {53, -791, 811, -192, 36, -778, -562, -544, -677, -682, -235, 825, -188, -241, -187, -177, 35, -236, -788, -559, -239, 814, -779, 824, -680, -680, 38, -549};
    int R = 92;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1329522.0109992004;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> possibleXForBlue = {-142, 626, 615, 627, 238, -944, -788, -820, 230, 624, -826, -822, 755, -955, 757, 232, 762, -148, 762, 623, -960, -139, 629, -784, 750, 229, -796, -958, -956, -137, 220, -821, -947, 228, -812, -947, -810, -818, -140, 621, -140, 749, -789, 766, -780, 223, -790, -143, -787};
    vector<int> possibleYForBlue = {432, -798, 642, -123, -737, -789, -783, -110, -456, -798, 447, -451, -111, 447, 631, 435, 438, -731, -449, 632, -441, 663, 663, 643, -119, 629, -116, 658, -125, -733, -122, 655, -450, 628, -734, -739, 658, -798, -737, 642, -439, 650, 445, -794, -782, 438, -441, -740, 650};
    vector<int> possibleXForRed = {-790, -810, -149, -135, -807, 767, -811, -949, 632, 626, 232, 622, 236, 226, 225, -781, 624, -958, -139, 759, -150, 760, -785, -953, -821, 749, -948, -797};
    vector<int> possibleYForRed = {654, 633, 658, -738, -793, -110, 441, 650, -730, -780, 432, -110, -447, -445, -794, -118, 648, 431, -453, -788, -119, 635, -456, 440, -721, 639, -721, 630};
    int R = 140;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3140336.0165283573;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> possibleXForBlue = {694, -765, -211, -777, 373, -921, 691, 691, 701, -201, -926, 696, -430, 374, -930, -423, -934, -764, 372, -413, -419, -920, -211, 374, -765, 332, -203, 329, -200, -210, 370, -935, -414, -421, -763, 319, 707, 317, -764, 376, 315, 326, -210, -778, 699, 322, 370, -927, -431};
    vector<int> possibleYForBlue = {-535, -544, -534, -527, 366, -680, -536, -629, -632, 358, 364, 351, -629, 367, -432, 253, -680, 355, -529, 249, 245, -435, -521, -534, -693, -432, 238, -686, -633, -434, 243, -527, 237, -692, -633, -539, -638, 244, -439, -695, -437, -431, -534, -544, 366, -541, -521, -692, -632};
    vector<int> possibleXForRed = {316, -765, 366, -935, -771, -416, 324, 367, -918, 695, 377, -198, -211, -201, -214, -413, 367, 323, 697, 703, -921, -420, -766, -420, 694, 320, -934, -765};
    vector<int> possibleYForRed = {-445, -447, -429, 354, -633, -695, -629, -542, 239, -439, -694, -541, 366, 247, 358, 250, -540, -546, -631, -695, 256, -533, -539, -532, 367, -637, -528, -686};
    int R = 108;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1832176.8355735673;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> possibleXForBlue = {290, 338, 602, 672, 610, 615, 281, 278, 663, -294, -292, 666, 609, -282, -118, 339, -118, 292, -375, 604, 669, -379, 287, -291, -281, 287, 662, -117, -113, 604, -371, 337, -112, 342, 336, 334, -372, -289, 343, 666, -375, -282, 608, 673, -376, 281, -115, -125, -377};
    vector<int> possibleYForBlue = {-64, -59, -131, 566, -688, 547, -420, -415, -65, 562, -207, -416, 121, 122, -62, -687, -427, 555, -147, -147, -61, -690, 566, -65, -417, -212, 561, -135, -697, 551, -69, -697, -150, 119, 113, -223, -421, -133, 113, 116, -681, -207, -211, 109, -219, -132, -688, -213, -429};
    vector<int> possibleXForRed = {-114, 666, 340, 284, 346, 604, -379, 676, 274, -120, -377, 620, 671, -287, 620, -116, -376, 345, -288, -288, 662, 280, -121, -293, -372, 283, 351, 606};
    vector<int> possibleYForRed = {-425, -131, 118, -685, -689, 123, 565, -150, 564, -220, -69, -423, 556, 113, 556, -150, -54, -211, -695, 117, -216, -429, -206, -59, -148, -681, -54, -421};
    int R = 84;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1152688.0437139382;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> possibleXForBlue = {-183, 744, 210, -236, -386, 154, -242, 744, -667, -382, -675, 213, -666, 159, 219, 163, -681, 747, -187, -374, 754, -373, -174, -244, -189, -231, 165, 207};
    vector<int> possibleYForBlue = {-118, 726, -116, -315, -183, -306, 872, -311, 69, 867, 328, 68, 58, 877, 331, -188, -118, 320, 730, -112, 723, -314, 861, 321, 725, -186, 55, -193};
    vector<int> possibleXForRed = {-385, -240, 170, 208, 164, -379, -187, 172, -373, -375, -233, 208, -384, -249, -678, -184, -666, -248, -182, -184, -679, 203, 746, -232, 755, -190, 758, 754, -181, -386, -178, -384, 207, 206, -683, 168, -669, 212, 169, 748, -236, -243, 758, -678, 170, 171, -665, 202, 762};
    vector<int> possibleYForRed = {865, 60, -188, 866, -187, -181, 730, 324, -308, -324, 736, 57, -118, 721, 875, 68, 719, 731, -181, -177, -108, -123, 734, 69, 869, -306, -313, -112, 323, 332, 322, 327, 874, -113, 57, 879, 723, -193, -314, 331, 320, 54, -106, -313, -311, 865, 62, -191, -112};
    int R = 95;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1417643.6849323942;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> possibleXForBlue = {385, 394, -716, 333, 873, 646, 476, -599, 637, -723, 883, 867, 464, 335, -726, -597, 385, 641, 644, -605, -717, 881, 482, 379, 327, -593, 327, 471};
    vector<int> possibleYForBlue = {445, -360, 225, 905, 908, -342, 619, 431, 897, 892, 895, -309, -308, 441, 898, -307, 607, 219, 899, 623, -312, 624, 901, 223, 218, 440, -342, -352};
    vector<int> possibleXForRed = {385, 651, 336, 389, 479, 884, 333, 472, -730, 881, -601, 644, 395, -727, -599, 482, -599, -727, 386, 336, -718, 647, 633, 875, 877, -605, -597, 882, 332, 336, 326, -720, 476, -728, 464, -592, -720, 881, 397, 389, 637, -594, 641, 471, 476, 337, 637, 397, 870};
    vector<int> possibleYForRed = {885, 910, 443, 446, -309, 446, -296, 903, 213, 439, 621, 215, -356, 216, 225, 610, 625, 891, -346, 899, -355, 906, -341, 618, 444, 226, 883, 445, 209, 609, -351, 894, -301, 887, -310, 448, -343, 221, 917, 880, -313, -345, 906, 612, -314, 911, -300, 622, 917};
    int R = 116;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2078006.4607169686;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> possibleXForBlue = {497, -190, 768, 138, 49, -188, 804, 780, -973, -185, 50, 499, -988, 127, 134, 503, 134, 808, 61, 807, -978, 772, -186, 766, 803, -987, 60, 502};
    vector<int> possibleYForBlue = {-586, -672, -674, 476, -587, 477, -972, -968, -593, -680, 196, -56, -586, -682, 559, 566, -66, 210, 490, 192, -975, 476, -972, -55, 555, -63, 567, 208};
    vector<int> possibleXForRed = {514, 138, 128, 800, -183, 791, 504, -190, 765, -978, 53, 509, 799, 774, 780, 803, -974, 767, -978, 51, 780, -189, -976, 131, 132, 131, 776, 797, 782, -189, 134, 498, 68, -181, 61, -975, 49, 804, 513, -189, -975, 795, 496, 51, 123, 55, -180, -984, 511};
    vector<int> possibleYForRed = {484, -591, 211, -671, -592, 480, 201, -60, -583, -675, -974, -588, -581, -970, -671, -971, -677, -966, -52, -580, -965, 196, 194, -61, 202, -64, 477, 557, 477, -680, -582, 481, 567, -49, -965, 558, 556, 488, -670, 562, -54, 480, 551, 557, -967, -683, -53, 211, 192};
    int R = 126;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2693299.948293144;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> possibleXForBlue = {-249, 476, 212, 468, 117, 225, -257, -159, -509, -259, 109, -126, -130, 227, -145, -505, 114, 473, -519, -249, 464, -148, 223, -515, -141, -136, -134, 117};
    vector<int> possibleYForBlue = {746, 741, 3, 150, 850, 152, 844, 348, 643, 351, 15, 5, 539, 352, 633, 846, 152, 541, 145, 2, 528, 542, 640, 640, 756, 348, 841, 749};
    vector<int> possibleXForRed = {120, -156, 116, -144, 468, -142, 224, -250, -132, 467, -159, 116, -146, -245, -139, 476, -523, 468, -524, -257, -509, -257, 215, 120, -151, -152, -260, -248, -140, 218, 474, 222, 475, -520, 122, 479, 209, -252, -124, -513, 118, 220, 117, -507, -142, -519, 211, -132, -150};
    vector<int> possibleYForRed = {159, 639, 159, 535, 347, 5, 755, 535, 854, 347, 4, 357, 759, 362, 532, 155, 630, 15, 365, 157, 645, 17, 535, 641, 9, 352, 853, 849, 156, 753, 144, 4, 849, 760, 844, 364, 842, 543, 747, 747, 628, 527, 634, 754, 149, 850, 528, 10, 632};
    int R = 66;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 738977.9903480056;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> possibleXForBlue = {-383, -153, -434, -383, -389, 702, -118, -383, -149, -718, -704, -711, 691, -428, -111, -166, -444, 698, -314, -439, -118, -305, 701, -703, -164, -120, -307, -317};
    vector<int> possibleYForBlue = {935, 822, -416, 726, 754, 728, 817, 930, -605, 723, 746, -407, -592, 743, -408, 821, 810, -715, -593, -724, -723, -406, -713, 945, 759, 718, -599, 935};
    vector<int> possibleXForRed = {-159, -117, -306, -303, -388, 704, -112, -158, -153, -301, -717, -396, -430, -388, -387, -166, -707, -700, -315, -434, -112, 687, -701, -425, 700, -712, -114, -433, 699, -712, 694, -444, 692, -112, -163, -704, -302, -109, -305, -432, -158, -388, -397, 690, -116, -430, -318, -151, -387};
    vector<int> possibleYForRed = {948, -413, -607, -419, 824, -595, -593, 812, -729, -714, -602, -723, 938, 814, -414, 826, 743, 715, 716, -601, 813, 716, 743, 939, 711, -715, 933, -605, 750, 750, -411, -716, -404, 816, 729, 758, -719, -731, 724, 938, 948, 820, -414, -600, 727, 937, 757, -401, 758};
    int R = 120;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2216707.776372958;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> possibleXForBlue = {377, -647, 0, 17, -339, 345, 30, -242, -291, -255, 364, -338, -628, -299, -324, -562, -328, -663, -240, -289, -59, 388, 343, -291, 324, -277, -333, -305, 13, -19, -632, -320, -558, 364, 396, -614, -560, -65, 26, -64, -616, 373, -297, -279, -327};
    vector<int> possibleYForBlue = {-234, 325, 944, 940, -238, 336, 334, 328, 90, 940, -229, 605, -237, 81, 605, 77, 596, 337, 602, -232, 947, -240, 83, 338, 604, 90, 594, 323, 937, 79, 606, 336, 938, 610, -234, 948, 336, 81, 81, 952, -233, 89, 597, -230, 948};
    vector<int> possibleXForRed = {32, -339, -296, 26, -611, -649, -33, -545, 284, -263, -295, 311, -230, 301, -322};
    vector<int> possibleYForRed = {604, -235, 338, 953, 87, 84, -228, 322, 83, 337, 949, 606, -226, 608, 945};
    int R = 82;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1013955.3121314128;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> possibleXForBlue = {-779, 908, -532, 931, -736, -543, 899, 800, -579, -578, -743, 748, -732, 814, 773, 805, 755, 982, -812, -724, 796, 848, -720, 842, 897, 778, 806, 770, -607, 895, 802, 861, -576, 905, 771, -587, 762, -608, 810, 967, -584, 980, -808, -803, 810};
    vector<int> possibleYForBlue = {826, -365, 46, 376, 384, 380, 390, 825, -364, 834, 837, 835, 41, -354, 49, -368, 383, -366, 40, 822, 54, -163, 46, -172, -167, -164, 44, 835, 381, -157, -156, -370, 375, -355, 827, 376, -159, 41, 383, -363, -362, 41, -156, -172, 830};
    vector<int> possibleXForRed = {-731, 829, -534, -585, 990, 791, 970, -739, 954, 768, -764, -594, 811, 815, 829};
    vector<int> possibleYForRed = {-361, 836, -355, 384, -167, 826, 377, 834, 52, 51, -167, -362, -169, 378, 48};
    int R = 130;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2389181.213055038;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> possibleXForBlue = {379, -359, 446, 416, -614, 418, -318, -556, -639, -501, -557, 423, -596, -632, -320, -652, -629, -258, 445, -642, -608, -657, -330, -607, -542, -618, -530, -519, -312, -617, -524, 485, -533, -566, -283, -519, -526, -351, -342, -615, -591, 459, -497, -649, 449};
    vector<int> possibleYForBlue = {-197, -495, -482, 928, 757, -804, 925, -183, 751, -795, 752, -482, -495, -199, -189, 922, 751, -490, 753, -794, -796, -802, 927, 929, -190, -493, -799, -480, 927, -185, -801, 746, 747, -199, 753, 932, -194, -795, -189, 750, -788, -491, 926, 936, -484};
    vector<int> possibleXForRed = {432, -572, 489, -605, -510, -283, -597, -518, -373, -272, -555, -526, 385, -687, -521};
    vector<int> possibleYForRed = {-185, -791, -188, -792, 933, 748, 931, 751, -796, -487, -488, 757, -488, 926, -196};
    int R = 120;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2080990.973737879;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> possibleXForBlue = {307, -782, -137, 817, 349, 363, 785, 306, -802, 745, -176, 358, 335, -99, -802, 452, 813, 366, -695, -186};
    vector<int> possibleYForBlue = {521, 535, -977, -265, -402, -402, 358, -270, 362, -402, -264, -404, 521, 364, -980, 373, -974, -262, 526, -979};
    vector<int> possibleXForRed = {742, 367, 451, -712, 830, 793, 334, 744, -102, -773, 383, -782, -137, -706, 784, 306, -775, 352, -726, 357, 830, 269, -201, -737, 330, 408, 819, 387, -98, -187, 419, 829, 387, -98, 347, 342, 356, -709, -132, -102};
    vector<int> possibleYForRed = {531, -980, -266, 368, -975, 367, 359, 369, -974, 371, -414, 374, -401, 532, -409, 536, -254, -264, 528, 536, -980, -260, -405, -411, 367, 536, -410, -261, -978, -257, -411, -264, -981, -989, 364, 531, 535, -399, -259, -975};
    int R = 119;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1868499.9298343726;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> possibleXForBlue = {-454, -448, -201, -525, -125, 624, 585, -145, -500, -364, 574, -525, 532, -341, -464, -407, -407, -507, -510, -201};
    vector<int> possibleYForBlue = {-402, -395, -393, 566, 571, 322, 571, 842, 827, 830, 567, 321, 334, 832, 328, 839, -402, 834, 842, 841};
    vector<int> possibleXForRed = {-502, -149, -224, -476, -483, -516, -510, -523, -145, -418, -338, 590, 532, -331, -513, -221, -146, 566, -147, -213, -331, -316, -360, -470, 518, 600, -490, 599, -528, -341, -446, -394, 536, 571, -168, -503, -496, -348, -549, -444};
    vector<int> possibleYForRed = {841, -395, 324, 831, 835, 840, -398, 845, 844, 844, 566, 843, 330, 331, 572, -397, 572, -400, -392, 831, 565, -399, 560, 332, 568, 827, 837, 566, 837, 831, 336, 842, -386, -397, 334, 568, 828, 334, 841, 323};
    int R = 91;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1092652.2081038372;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> possibleXForBlue = {-345, 949, 370, 322, 327, -233, 296, -291, 672, -670, 921, -665, -663, 903, -280, 670, 672, -705, 877, 692};
    vector<int> possibleYForBlue = {-42, 461, -31, 466, -99, -34, -89, -551, -557, -378, -41, -391, -383, -92, -558, 468, -382, -549, 457, -90};
    vector<int> possibleXForRed = {850, 320, -289, -685, 655, -307, 942, 930, 637, 326, 285, 345, -675, -711, -649, 868, 345, -702, -235, -267, 344, -244, 930, 644, -706, 714, 662, -250, 643, -257, 255, -658, -698, 315, 724, 689, -243, 903, 845, 848};
    vector<int> possibleYForRed = {-93, -393, -90, 469, 468, -386, -91, 458, -545, -382, -550, -40, 464, -549, -388, -45, 464, -90, -37, -551, 471, -394, -45, 463, -34, -92, -551, -385, -31, -559, -553, -40, -40, -98, -394, -554, 467, -93, -85, -387};
    int R = 106;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1553153.1424523364;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> possibleXForBlue = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    vector<int> possibleYForBlue = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    vector<int> possibleXForRed = {100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164, 166, 168, 170, 172, 174, 176, 178, 180, 182, 184, 186, 188, 190, 192, 194, 196, 198};
    vector<int> possibleYForRed = {100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156, 158, 160, 162, 164, 166, 168, 170, 172, 174, 176, 178, 180, 182, 184, 186, 188, 190, 192, 194, 196, 198};
    int R = 1;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 314.1592653589793;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {100};
    vector<int> possibleYForRed = {0};
    int R = 49;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 15085.927922538187;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {100};
    vector<int> possibleYForRed = {0};
    int R = 50;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 15707.963267948966;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {100};
    vector<int> possibleYForRed = {0};
    int R = 51;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 15707.963267948966;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {100};
    vector<int> possibleYForRed = {0};
    int R = 70;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 15707.963267948966;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {100};
    vector<int> possibleYForRed = {0};
    int R = 71;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 15836.768566746146;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> possibleXForBlue = {-12, -475, 264, -246, -349, 284, 442, 499, 374, -34, -463, -350, 155, 271, -480, -311, 314, 57, 187, 352, -47, -442, -5, 453, -222, -439, 178, -290, -152, 260, 307, 435, -450, 192, -19, 210, -75, -270, 163, -285, 266, 180, 226, -465, 474, -185};
    vector<int> possibleYForBlue = {422, 266, -434, 306, 416, -248, -374, 497, 87, -57, 387, -61, -288, -423, -410, -458, 491, -260, 465, 482, -233, -448, 81, -247, -135, 272, 207, -477, -142, -464, -433, -492, -261, -502, 286, 257, 198, 282, -192, -165, 447, 173, 224, 35, -407, -71};
    vector<int> possibleXForRed = {-301, 399, -499, -376, 294, -309, -5, -402, 151, -147, -453, 276, 154, -88, 505, -444, 464, 47, 467, 278, 320, -388, 471, 331, -371, 415, -414, -400, -242, 224, -135, 308, -487, -381, 296, -310, -376, -399};
    vector<int> possibleYForRed = {78, 340, -336, -229, -418, 237, 506, -357, 220, 76, 397, -287, 272, 360, 169, 199, 251, -457, -161, -421, -433, -454, -298, 318, 327, 236, -498, -149, 355, -35, 129, -510, 127, -480, 348, 478, -24, -218};
    int R = 15;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 56423.00405847269;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> possibleXForBlue = {276, 186, -297, -87, -297, 97, -196, -318, 289, -140, 70, 129, -291, 6, 232, -151, 267, -259, -312, -290, -274, -304, -87, -25, -170, 140, 73, 63, 82, 288, 202, 248, -8};
    vector<int> possibleYForBlue = {-217, 109, -194, -101, -127, 3, -92, -86, -171, 57, -256, 324, -85, 187, -275, 241, -210, 177, 231, 69, 150, -232, 212, 84, -218, -278, -315, 324, 198, 147, 324, 260, -45};
    vector<int> possibleXForRed = {-312, 256, -169, 176, 35, -108, 19, 59, -315, -236, -307, 131, -270, 113, 80, -143, 38, 1, 7, -237, -132, -226, -317, 30, -326, 208, -50, 194, 166, -230, 293, -202, 288, -293, -180, -93, -286, -114, -231, -195, 6, 191, -307};
    vector<int> possibleYForRed = {251, -1, -78, -238, -17, 329, -125, -335, -11, 74, -171, 218, -315, 220, 60, 278, -32, 68, -28, -210, 67, 34, 227, -197, -249, -151, 34, -161, 66, -146, 267, 33, 118, -65, 183, -153, 50, -169, 309, -245, 161, -160, -180};
    int R = 53;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 408708.6378614177;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> possibleXForBlue = {-156, -434};
    vector<int> possibleYForBlue = {383, -30};
    vector<int> possibleXForRed = {-317, -23, -333, 419};
    vector<int> possibleYForRed = {-357, -111, 18, -90};
    int R = 220;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 646202.0468985186;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> possibleXForBlue = {-70, 189, 29};
    vector<int> possibleYForBlue = {140, 34, -127};
    vector<int> possibleXForRed = {201, 154, -102};
    vector<int> possibleYForRed = {62, 193, -115};
    int R = 73;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 67956.57608796422;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> possibleXForBlue = {-5, -1, -3, -7, -7, -4, -10, -8, 2};
    vector<int> possibleYForBlue = {-5, -1, 9, -9, -5, 1, 7, -6, -9};
    vector<int> possibleXForRed = {0, -2, 4, -8, 4, -2};
    vector<int> possibleYForRed = {-8, -9, 6, 7, -9, 8};
    int R = 3;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 293.7389131106457;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> possibleXForBlue = {-1, 3, 6, 7, -6, 4};
    vector<int> possibleYForBlue = {0, 4, -3, 0, -7, 7};
    vector<int> possibleXForRed = {5, -4, -1, 3, 0, -5};
    vector<int> possibleYForRed = {1, 1, -4, 3, -3, 5};
    int R = 4;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 318.871654339364;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> possibleXForBlue = {1, -9};
    vector<int> possibleYForBlue = {-8, -6};
    vector<int> possibleXForRed = {-9, 3};
    vector<int> possibleYForRed = {1, 5};
    int R = 4;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 153.93804002589985;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> possibleXForBlue = {-5};
    vector<int> possibleYForBlue = {-7};
    vector<int> possibleXForRed = {-7, 8};
    vector<int> possibleYForRed = {1, 4};
    int R = 5;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 160.22122533307947;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> possibleXForBlue = {1, -4, 1};
    vector<int> possibleYForBlue = {-3, 0, 1};
    vector<int> possibleXForRed = {-2, -3, -2};
    vector<int> possibleYForRed = {2, -3, -2};
    int R = 2;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 39.269908169872416;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {-1};
    vector<int> possibleYForRed = {-1};
    int R = 1;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 3.141592653589793;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> possibleXForBlue = {23, 29, 29, 35};
    vector<int> possibleYForBlue = {77, 79, 75, 77};
    vector<int> possibleXForRed = {26, 26, 32};
    vector<int> possibleYForRed = {78, 76, 76};
    int R = 3;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 113.09733552923255;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> possibleXForBlue = {3, -2};
    vector<int> possibleYForBlue = {8, 5};
    vector<int> possibleXForRed = {-1};
    vector<int> possibleYForRed = {-4};
    int R = 5;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 193.20794819577225;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> possibleXForBlue = {-10, 10, -8, -6, -5, 4, -10};
    vector<int> possibleYForBlue = {-7, 5, -3, 7, -5, 4, -6};
    vector<int> possibleXForRed = {10, -9, -5, 7, 6, 1, -1};
    vector<int> possibleYForRed = {-4, 4, -9, 7, -5, 3, 4};
    int R = 5;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 685.6525966459724;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> possibleXForBlue = {-6, 5, 6, -6, 3, 0};
    vector<int> possibleYForBlue = {-7, -4, 3, -3, -8, 1};
    vector<int> possibleXForRed = {7, -7, -1, -10};
    vector<int> possibleYForRed = {3, 8, 4, -6};
    int R = 5;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 538.7831400906495;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> possibleXForBlue = {2, -5, -5};
    vector<int> possibleYForBlue = {6, 2, 7};
    vector<int> possibleXForRed = {-5, 2, 8};
    vector<int> possibleYForRed = {1, -6, -2};
    int R = 6;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 392.69908169872417;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> possibleXForBlue = {-3, 2, -7, 7, 0};
    vector<int> possibleYForBlue = {-2, -1, 2, 4, -5};
    vector<int> possibleXForRed = {-2, 5, 3, 2, -7, 2, 2};
    vector<int> possibleYForRed = {3, -4, 7, 2, -6, 5, 1};
    int R = 3;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 215.98449493429828;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> possibleXForBlue = {4, 1, 0, 7, -7, 0, 1};
    vector<int> possibleYForBlue = {3, 7, 3, 0, -3, 4, -1};
    vector<int> possibleXForRed = {-4, -5, -2, -5, -7, 6, 5, -1};
    vector<int> possibleYForRed = {7, 6, -6, 3, 0, 6, -1, -6};
    int R = 3;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 235.61944901923448;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> possibleXForBlue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> possibleYForBlue = {-1000, -999, -998, -997, -996, -995, -994, -993, -992, -991, -990, -989, -988, -987, -986, -985, -984, -983, -982, -981, -980, -979, -978, -977, -976, -975, -974, -973, -972, -971, -970, -969, -968, -967, -966, -965, -964, -963, -962, -961, -960, -959, -958, -957, -956, -955, -954, -953, -952, -951};
    vector<int> possibleXForRed = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> possibleYForRed = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 975, 974, 973, 972, 971, 970, 969, 968, 967, 966, 965, 964, 963, 962, 961, 960, 959, 958, 957, 956, 955, 954, 953, 952, 951};
    int R = 1000;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8412595374992627E8;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> possibleXForBlue = {23, 44, 21};
    vector<int> possibleYForBlue = {123, 23, 43};
    vector<int> possibleXForRed = {234, 123, 23};
    vector<int> possibleYForRed = {342, -666, 344};
    int R = 5;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 471.23889803846896;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> possibleXForBlue = {141, 567, 134, 500, 369, 524, 778, 658, 962, 264, 405, 345, 881, 727, 161, 591, 395, 342, 427, 136, 991, 304, 402, 253, 392, 782, 421, 816, 918, 195, 147, 226, 471, 838, 169, 212, 567, 299, 935, 994, 903, 511, 822, 733, 673, 264, 841, 611, 453, 668};
    vector<int> possibleYForBlue = {447, 744, 362, 457, 337, 359, 723, 841, 629, 878, 716, 435, 690, 142, 388, 506, 140, 942, 464, 248, 546, 505, 690, 529, 170, 150, 706, 601, 193, 948, 829, 123, 784, 254, 856, 240, 566, 276, 531, 308, 844, 139, 426, 623, 237, 938, 918, 382, 529, 441};
    vector<int> possibleXForRed = {-433, -615, -239, -958, -304, -130, -577, -606, -273, -886, -621, -945, -924, -272, -970, -529, -777, -373, -697, -412, -686, -790, -261, -736, -855, -567, -355, -374, -531, -452, -450, -350, -841, -224, -566, -830, -607, -591, -107, -637, -257, -687, -853, -583, -645, -909, -809, -858, -921, -688};
    vector<int> possibleYForRed = {-222, -746, -606, -530, -313, -468, -100, -291, -862, -855, -410, -159, -724, -837, -948, -283, -695, -541, -102, -150, -491, -336, -474, -320, -196, -721, -448, -799, -868, -284, -281, -334, -153, -299, -418, -138, -700, -288, -227, -567, -228, -593, -448, -983, -807, -721, -910, -417, -413, -614};
    int R = 500;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 6.597344572538565E7;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> possibleXForBlue = {0, 0, 0, 0, 0, 0};
    vector<int> possibleYForBlue = {0, 1, 100, 101, 200, 300};
    vector<int> possibleXForRed = {0, 0, 0, 0, 0, 0};
    vector<int> possibleYForRed = {2, 102, 201, 202, 301, 302};
    int R = 40;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 40212.385965949354;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> possibleXForBlue = {739, 503, -638, 11, -310, -969, 474, -660, 69, 764, -382, 301, 198, 84, 793, 841, 497, 434, -773, -685, 434, -142, -246, 818, -433, 393, 743, 317, 386, -664, 784, 582, 432, -205, -774, 467, -556, -781, 403, -519, 306, 708, 796, -560, -348, 87, 732, 528, 383, -903};
    vector<int> possibleYForBlue = {-988, -981, -973, -958, -941, -883, -879, -851, -833, -772, -755, -720, -676, -673, -665, -650, -647, -636, -635, -630, -622, -605, -601, -572, -571, -544, -509, -508, -508, -495, -463, -455, -449, -430, -414, -399, -381, -376, -349, -325, -317, -285, -277, -271, -244, -192, -171, -129, -114, -98};
    vector<int> possibleXForRed = {-876, -223, -579, -695, -291, -414, -909, -857, -978, 932, -138, -933, -138, 276, -563, -971, -4, -186, -730, 211, 676, -771, 275, -351, -460, -714, -154, -621, 193, -587, 928, 782, -906, -79, 788, 865, -154, 172, -957, 34, -903, -765, 929, -433, -13, 313, 956, -876, 763, 859};
    vector<int> possibleYForRed = {-86, -85, -81, -75, -73, -35, -20, 11, 58, 60, 123, 135, 170, 178, 228, 237, 281, 367, 368, 368, 368, 373, 407, 421, 426, 441, 451, 488, 500, 526, 529, 530, 539, 555, 584, 689, 729, 736, 750, 764, 771, 793, 802, 856, 856, 857, 873, 895, 926, 936};
    int R = 1000;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5707963267948964E8;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> possibleXForBlue = {5, 8, 6, -3};
    vector<int> possibleYForBlue = {0, -6, -6, -1};
    vector<int> possibleXForRed = {-5, -6, 8, -6};
    vector<int> possibleYForRed = {9, -6, 0, 1};
    int R = 7;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 615.7521601035994;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {100};
    vector<int> possibleYForRed = {100};
    int R = 1;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 6.283185307179586;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {5};
    vector<int> possibleYForRed = {5};
    int R = 4;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 78.53981633974483;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> possibleXForBlue = {102, -134, 37, -58, 78, -166, -100, -41, 58, -162, 150, 8, -62, 49, 126, 165, -65, 4, -122, -30, -10, 6, 147, -84, 115, 111, 47, -123, 0, -60, -131, -26, 80, 106, 116, -43, -187, -112, 117, 144, -73, 139, -49, 138, -12, -123, 103, 123, 154, -147};
    vector<int> possibleYForBlue = {-108, -57, 60, -89, 132, -26, -178, -21, 124, 22, 119, 193, 196, -2, 171, 185, -172, 184, -128, 145, 128, 72, 83, -49, 10, -57, 101, -15, -134, 55, 38, 31, -130, -30, 143, -198, -184, -163, -19, 140, 132, -28, -196, 127, -157, 176, 184, -129, -169, -144};
    vector<int> possibleXForRed = {-112, 159, -200, 171, -17, 10, -13, -117, -133, 53, 138, 106, -44, -192, -125, -102, -117, -35, 8, 64, -23, -61, -92, -18, -134, -49, 30, -78, 95, 61, 51, 183, 93, 52, -174, -125, -66, 13, -42, 2, -62, -104, -20, 94, -23, 128, -135, 60, -108, 73};
    vector<int> possibleYForRed = {-4, 70, -188, 177, -149, -49, -72, 81, 73, -105, 14, -76, -122, -94, -152, -96, -19, -18, 117, 140, -144, -73, -92, 36, -180, 158, -36, -115, 90, 56, 159, -42, -75, -157, -66, 49, -6, 135, 2, -134, -170, -184, 63, -19, -78, 111, 85, 177, -34, 74};
    int R = 219;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 7533696.262941003;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> possibleXForBlue = {0};
    vector<int> possibleYForBlue = {0};
    vector<int> possibleXForRed = {1};
    vector<int> possibleYForRed = {3};
    int R = 2;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 15.707963267948966;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> possibleXForBlue = {556, -692, -401};
    vector<int> possibleYForBlue = {-8, -482, -83};
    vector<int> possibleXForRed = {-198, 268, 315};
    vector<int> possibleYForRed = {-74, -704, -468};
    int R = 448;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 2076218.894497076;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> possibleXForBlue = {725, -780, 102, -940, 425, 163, 219, -271, 480, -562, 146, -350, 811, 25, 346, -927, 407, 579, -911, -608, 737, 456, -774, 155, 418, 855, 777, -356, -326, -972, 175, 426, -22, 40, -357, 117, -804, 244, -277, -441, -462, 555, -864, -36, 507, 110, -127, -381, 577, 613};
    vector<int> possibleYForBlue = {561, 767, 186, -458, 453, -609, -479, -1, -196, 185, 382, 106, -859, -147, 362, -982, 381, -360, 753, -682, -335, -558, 430, 517, -902, -165, -727, -259, 533, -91, 478, 291, 536, 917, 284, -749, -20, 842, 957, -749, 181, 329, -582, 334, 549, -45, 437, 983, -109, 277};
    vector<int> possibleXForRed = {-508, -366, -978, -253, 973, 791, 928, -719, -739, -270, -298, -256, 19, 385, -705, -843, 231, 9, -375, 800, -628, -120, 814, 753, -830, 252, -451, 452, 864, 881, 253, 118, 46, -791, -364, -993, 238, 598, 963, 442, -583, -628, 405, -58, -284, 309, -392, 321, -466, 793};
    vector<int> possibleYForRed = {272, -667, -311, 937, -615, -381, -597, 473, -324, -490, 152, 34, -448, 317, -126, 677, 566, -94, -770, -338, -169, -497, -738, 515, 575, 270, 597, -632, 43, 604, 910, -588, 512, 776, 442, 704, 544, -534, 2, 310, 577, -130, 724, 686, -462, 418, -843, -457, 683, 140};
    int R = 277;
    HouseProtection* pObj = new HouseProtection();
    clock_t start = clock();
    double result = pObj->safetyFactor(possibleXForBlue, possibleYForBlue, possibleXForRed, possibleYForRed, R);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2238738628905272E7;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12169&pm=8762
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define SZ(X) ((int)(X.size())) 
const double pi=acos(-1.0); 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} 
template<class T> inline T sqr(T x){return x*x;} 
 
class HouseProtection 
{ 
public: 
  int n,m; 
  bool G[50][50]; 
  int p[50]; 
  bool visited[50]; 
  bool find(int v) 
  { 
    for (int i=0;i<m;i++) if (G[v][i] && !visited[i]) 
    { 
      visited[i]=true; 
      if (p[i]<0 || find(p[i]))  
      { 
        p[i]=v; 
        return true; 
      } 
    } 
    return false; 
  } 
  int solve(vector<int> X1,vector<int> Y1,vector<int> X2,vector<int> Y2,double R) 
  { 
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) 
      G[i][j]=(sqr(X1[i]-X2[j])+sqr(Y1[i]-Y2[j])<=sqr(R+R)); 
    int result=n+m; 
    memset(p,255,sizeof(p)); 
    for (int i=0;i<n;i++) 
    { 
      memset(visited,false,sizeof(visited)); 
      if (find(i)) result--; 
    } 
    return result; 
  } 
  double safetyFactor(vector <int> X1, vector <int> Y1, vector <int> X2, vector <int> Y2, int R) 
  { 
    n=SZ(X1); 
    m=SZ(X2); 
    double result=0; 
    for (int cnt=1;cnt<=n+m;cnt++) 
    { 
      double H=0,T=R; 
      for (int step=0;step<100;step++) 
      { 
        double M=(H+T)/2.0; 
        if (solve(X1,Y1,X2,Y2,M)>=cnt) H=M; 
        else T=M; 
      } 
      checkmax(result,(double)cnt*sqr(H)); 
    } 
    return result*pi; 
  } 
};

********************************************************************************
*******************************************************************************/